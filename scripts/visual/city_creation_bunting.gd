class_name CityCreationBunting
extends RefCounted
## Townscaper-inspired PropWire / FlagMesh / ItalianMesh (758e50.c, 805ae0.c, 8063b0.c).
## Connects facing upper-story facades across streets/courtyards with festive bunting & warm lanterns.

const MIN_SPAN := 1.75
const MAX_SPAN := 5.80
const SAG_RATIO := 0.085
const FLAG_STEP := 0.34

static func build_bunting(renderer: Node3D, parent: Node3D) -> int:
	var state = renderer.state
	if state == null:
		return 0
	var anchors: Array[Dictionary] = []
	for house: Dictionary in state.houses:
		var hid := str(house.id)
		var role := str(house.get("role", "residential"))
		var imp := int(state.improvement_level(hid))
		var festive: bool = imp >= 1 or state.house_harmony_tier(hid)>=2 or role in ["venue", "garden_cafe", "bakery", "workshop"]
		var palette: Array = renderer.PALETTES[posmod(int(house.get("palette", 0)), renderer.PALETTES.size())]
		if house.has("finish") and renderer.FINISH_PALETTES.has(str(house.finish)):
			palette = renderer.FINISH_PALETTES[str(house.finish)]
		var origin := Vector2(float(house.origin[0]), float(house.origin[1]))
		var base_y := float(house.get("base_y", 0.0))
		for cell: Dictionary in house.cells:
			if int(cell.level) < 1 or str(cell.kind) != "room":
				continue
			for side: Vector2i in [Vector2i.LEFT, Vector2i.RIGHT, Vector2i.UP, Vector2i.DOWN]:
				if not renderer._neighbor_cell(house, cell, side).is_empty():
					continue
				var center_xz := origin + Vector2(cell.x, cell.z) * 1.8 + Vector2(side) * 0.91
				var anchor_y := base_y + float(int(cell.level) + 1) * 1.7 - 0.14
				anchors.append({
					"house_id": hid,
					"pos": Vector3(center_xz.x, anchor_y, center_xz.y),
					"normal": Vector2(side),
					"festive": festive,
					"color_a": palette[1],
					"color_b": palette[2],
				})

	var pairs: Array[Dictionary] = []
	var used_anchors: Dictionary = {}
	for i in range(anchors.size()):
		if used_anchors.has(i):
			continue
		var a: Dictionary = anchors[i]
		var best_j := -1
		var best_dist := INF
		for j in range(i + 1, anchors.size()):
			if used_anchors.has(j):
				continue
			var b: Dictionary = anchors[j]
			if str(a.house_id) == str(b.house_id):
				continue
			if not (bool(a.festive) or bool(b.festive)):
				continue
			if absf(float(a.pos.y) - float(b.pos.y)) > 1.25:
				continue
			var delta_xz := Vector2(b.pos.x - a.pos.x, b.pos.z - a.pos.z)
			var dist := delta_xz.length()
			if dist < MIN_SPAN or dist > MAX_SPAN:
				continue
			var dir := delta_xz / dist
			# Exact Townscaper PropWireAnchor directional thresholds (758e50.c)
			if dir.dot(a.normal) < 0.30 or (-dir).dot(b.normal) < 0.30:
				continue
			if (-Vector2(b.normal)).dot(a.normal) < 0.50:
				continue
			if dist < best_dist and _span_clear(state, a.pos, b.pos):
				best_dist = dist
				best_j = j
		if best_j >= 0:
			used_anchors[i] = true
			used_anchors[best_j] = true
			pairs.append({"a": a, "b": anchors[best_j], "length": best_dist})
			if pairs.size() >= 24:
				break

	if pairs.is_empty():
		return 0

	var root := Node3D.new()
	root.name = "StreetBunting"
	parent.add_child(root)
	var st := SurfaceTool.new()
	st.begin(Mesh.PRIMITIVE_TRIANGLES)
	var lanterns := SurfaceTool.new()
	lanterns.begin(Mesh.PRIMITIVE_TRIANGLES)
	var rope_col := Color("4a4036")
	for pair: Dictionary in pairs:
		var p0: Vector3 = pair.a.pos
		var p1: Vector3 = pair.b.pos
		var span: float = float(pair.length)
		var sag := span * SAG_RATIO
		var steps := maxi(4, ceili(span / FLAG_STEP))
		var tangent := (p1 - p0).normalized()
		var side_vec := tangent.cross(Vector3.UP).normalized() * 0.012
		for s in range(steps):
			var t0 := float(s) / float(steps)
			var t1 := float(s + 1) / float(steps)
			var c0 := p0.lerp(p1, t0) - Vector3.UP * (4.0 * sag * t0 * (1.0 - t0))
			var c1 := p0.lerp(p1, t1) - Vector3.UP * (4.0 * sag * t1 * (1.0 - t1))
			# Thin rope ribbon
			for v: Vector3 in [c0 - side_vec, c1 - side_vec, c1 + side_vec, c0 - side_vec, c1 + side_vec, c0 + side_vec]:
				st.set_color(rope_col)
				st.set_normal(Vector3.UP)
				st.add_vertex(v)
			# Triangular pennant flag (Townscaper FlagMesh 805ae0.c)
			var mid := (c0 + c1) * 0.5
			var f_left := c0.lerp(c1, 0.18)
			var f_right := c0.lerp(c1, 0.82)
			var f_tip := mid - Vector3.UP * 0.19
			var flag_col: Color = pair.a.color_a if s % 2 == 0 else pair.b.color_b
			var n := (f_right - f_left).cross(f_tip - f_left).normalized()
			for v: Vector3 in [f_left, f_right, f_tip]:
				st.set_color(flag_col)
				st.set_normal(n)
				st.add_vertex(v)
			if s % 3 == 1:
				_lantern(lanterns, mid - Vector3.UP * 0.08)
	var mesh_inst := MeshInstance3D.new()
	mesh_inst.name = "BuntingFlags"
	mesh_inst.mesh = st.commit()
	var mat := StandardMaterial3D.new()
	mat.vertex_color_use_as_albedo = true
	mat.vertex_color_is_srgb = true
	mat.cull_mode = BaseMaterial3D.CULL_DISABLED
	mat.roughness = 0.90
	mesh_inst.material_override = mat
	root.add_child(mesh_inst)
	var light_mesh := MeshInstance3D.new()
	light_mesh.name = "BuntingLanterns"
	light_mesh.mesh = lanterns.commit()
	var light_shader := Shader.new()
	light_shader.code = "shader_type spatial; uniform float warmth = 0.0; void fragment(){ ALBEDO=vec3(0.82,0.57,0.27); EMISSION=vec3(1.0,0.59,0.18)*warmth; ROUGHNESS=0.85; }"
	var light_mat := ShaderMaterial.new()
	light_mat.shader = light_shader
	light_mesh.material_override = light_mat
	light_mesh.cast_shadow = GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	root.add_child(light_mesh)
	root.set_meta("wire_count", pairs.size())
	return pairs.size()

static func set_light(parent: Node3D, phase: int) -> void:
	for node: MeshInstance3D in parent.find_children("BuntingLanterns", "MeshInstance3D", true, false):
		node.material_override.set_shader_parameter("warmth", [0.0, 0.65, 1.25][phase])

static func _span_clear(state, a: Vector3, b: Vector3) -> bool:
	var sag := a.distance_to(b) * SAG_RATIO
	for i in range(1, 16):
		var t := float(i) / 16.0
		var p := a.lerp(b, t) - Vector3.UP * (4.0 * sag * t * (1.0-t) + 0.22)
		if p.y < state.ground_height(Vector2(p.x,p.z)) + 1.9: return false
		for house: Dictionary in state.houses:
			for cell: Dictionary in house.cells:
				if str(cell.kind) != "room": continue
				var x := float(house.origin[0]) + float(cell.x)*1.8
				var z := float(house.origin[1]) + float(cell.z)*1.8
				var bottom := float(house.get("base_y",0.0)) + float(cell.level)*1.7
				if absf(p.x-x)<0.91 and absf(p.z-z)<0.91 and p.y>bottom-0.1 and p.y<bottom+2.35: return false
	return true

static func _lantern(st: SurfaceTool, at: Vector3) -> void:
	var mesh := BoxMesh.new()
	mesh.size = Vector3(0.075, 0.10, 0.075)
	st.append_from(mesh, 0, Transform3D(Basis.IDENTITY, at))
