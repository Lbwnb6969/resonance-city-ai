class_name CityCreationBunting
extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
## Townscaper-inspired PropWire / FlagMesh / ItalianMesh (758e50.c, 805ae0.c, 8063b0.c).
## Connects facing upper-story facades across streets/courtyards with festive bunting & warm lanterns.

const MIN_SPAN := 1.75
const MAX_SPAN := 5.80
const SAG_RATIO := 0.085
const FLAG_STEP := 0.34

static func _anchors(renderer: Node3D) -> Array[Dictionary]:
	var state = renderer.state
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
				var center_xz:=Frame.point(house,origin+Vector2(cell.x,cell.z)*1.8+Vector2(side)*.91)
				var anchor_y := base_y + float(int(cell.level) + 1) * 1.7 - 0.14
				anchors.append({
					"house_id": hid,
					"pos": Vector3(center_xz.x, anchor_y, center_xz.y),
					"normal":Frame.direction(house,Vector2(side)),
					"festive": festive,
					"color_a": palette[1],
					"color_b": palette[2],
				})

	return anchors

static func _room_bins(state) -> Dictionary:
	var bins: Dictionary={}
	for house: Dictionary in state.houses:
		for cell: Dictionary in house.cells:
			if str(cell.kind)!="room":continue
			var x:=float(house.origin[0])+float(cell.x)*1.8
			var z:=float(house.origin[1])+float(cell.z)*1.8
			var bottom:=float(house.get("base_y",0.0))+float(cell.level)*1.7
			var row:=PackedFloat64Array([x,bottom,z])
			var low:=Vector2i(floori((x-.91)/2.),floori((z-.91)/2.))
			var high:=Vector2i(floori((x+.91)/2.),floori((z+.91)/2.))
			for bx in range(low.x,high.x+1):
				for bz in range(low.y,high.y+1):
					var key:=Vector2i(bx,bz)
					if not bins.has(key):bins[key]=[]
					bins[key].append(row)
	return bins

static func _pairs(state,anchors: Array[Dictionary],layout_context: Variant=null) -> Array[Dictionary]:
	# Caller retains a context only while anchor geometry and terrain agree.
	# Festive flags can change independently without repeating span samples.
	var context: Dictionary={} if layout_context==null else layout_context
	if not context.has("bins"):
		var bins: Dictionary={}
		for index in range(anchors.size()):
			var at: Vector3=anchors[index].pos
			var key:=Vector2i(floori(at.x/MAX_SPAN),floori(at.z/MAX_SPAN))
			if not bins.has(key):bins[key]=[]
			bins[key].append(index)
		context.bins=bins;context.rooms=_room_bins(state);context.spans={}
	var bins: Dictionary=context.bins
	var rooms: Dictionary=context.rooms

	if not context.has("candidates"):
		# Geometry-only tests retain the original ordered neighbours. Service
		# flags and the greedy used-anchor set remain live on every evaluation.
		context.candidates={}
		for i in range(anchors.size()):
			var a:Dictionary=anchors[i];var key:=Vector2i(floori(float(a.pos.x)/MAX_SPAN),floori(float(a.pos.z)/MAX_SPAN))
			var nearby:Array[int]=[];var allowed:Array=[]
			for x in range(key.x-1,key.x+2):
				for z in range(key.y-1,key.y+2):
					for j:int in bins.get(Vector2i(x,z),[]):
						if j>i:nearby.append(j)
			nearby.sort()
			for j:int in nearby:
				var b:Dictionary=anchors[j]
				if str(a.house_id)==str(b.house_id) or absf(float(a.pos.y)-float(b.pos.y))>1.25:continue
				var delta:=Vector2(b.pos.x-a.pos.x,b.pos.z-a.pos.z);var dist:=delta.length()
				if dist<MIN_SPAN or dist>MAX_SPAN:continue
				var direction:=delta/dist
				if direction.dot(a.normal)<.30 or (-direction).dot(b.normal)<.30 or (-Vector2(b.normal)).dot(a.normal)<.50:continue
				allowed.append({"index":j,"length":dist})
			context.candidates[i]=allowed
	var pairs: Array[Dictionary] = []
	var used_anchors: Dictionary = {}
	for i in range(anchors.size()):
		if used_anchors.has(i):continue
		var a:Dictionary=anchors[i];var best_j:=-1;var best_dist:=INF
		for candidate:Dictionary in context.candidates[i]:
			var j:int=candidate.index
			if used_anchors.has(j):continue
			var b:Dictionary=anchors[j]
			if not (bool(a.festive) or bool(b.festive)):continue
			var dist:float=candidate.length
			if dist<best_dist:
				var span:=Vector2i(i,j)
				if not context.spans.has(span):context.spans[span]=_span_clear(state,a.pos,b.pos,rooms)
				if context.spans[span]:best_dist=dist;best_j=j
		if best_j >= 0:
			used_anchors[i] = true
			used_anchors[best_j] = true
			pairs.append({"a": a, "b": anchors[best_j], "length": best_dist})
			if pairs.size() >= 24:
				break

	return pairs

static func build_bunting(renderer: Node3D, parent: Node3D) -> int:
	var state = renderer.state
	if state == null:
		return 0
	return build_pairs(renderer,parent,_pairs(state,_anchors(renderer)))

static func build_pairs(renderer: Node3D,parent: Node3D,pairs: Array[Dictionary])->int:
	if pairs.is_empty():
		return 0

	var root := Node3D.new()
	root.name = "StreetBunting"
	parent.add_child(root)
	# Allocate the complete unindexed ribbon once. Filling position slots and
	# the three flag normals/colors avoids per-vertex SurfaceTool state calls.
	var vertex_count:=0
	for pair:Dictionary in pairs:vertex_count+=maxi(4,ceili(float(pair.length)/FLAG_STEP))*9
	var vertices:=PackedVector3Array();vertices.resize(vertex_count)
	var normals:=PackedVector3Array();normals.resize(vertex_count);normals.fill(Vector3.UP)
	var colors:=PackedColorArray();colors.resize(vertex_count);colors.fill(Color("4a4036"))
	var offset:=0
	var lanterns := SurfaceTool.new()
	lanterns.begin(Mesh.PRIMITIVE_TRIANGLES)
	var lantern_box:=BoxMesh.new();lantern_box.size=Vector3(.075,.10,.075)
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
			vertices[offset]=c0-side_vec;vertices[offset+1]=c1-side_vec;vertices[offset+2]=c1+side_vec
			vertices[offset+3]=c0-side_vec;vertices[offset+4]=c1+side_vec;vertices[offset+5]=c0+side_vec
			# Triangular pennant flag (Townscaper FlagMesh 805ae0.c)
			var mid := (c0 + c1) * 0.5
			var f_left := c0.lerp(c1, 0.18)
			var f_right := c0.lerp(c1, 0.82)
			var f_tip := mid - Vector3.UP * 0.19
			var flag_col: Color = pair.a.color_a if s % 2 == 0 else pair.b.color_b
			var n := (f_right - f_left).cross(f_tip - f_left).normalized()
			vertices[offset+6]=f_left;vertices[offset+7]=f_right;vertices[offset+8]=f_tip
			for i in range(offset+6,offset+9):normals[i]=n;colors[i]=flag_col
			offset+=9
			if s % 3 == 1:
				_lantern(lanterns, mid - Vector3.UP * 0.08,lantern_box)
	var mesh_inst := MeshInstance3D.new()
	mesh_inst.name = "BuntingFlags"
	var arrays:Array=[];arrays.resize(Mesh.ARRAY_MAX)
	arrays[Mesh.ARRAY_VERTEX]=vertices;arrays[Mesh.ARRAY_NORMAL]=normals;arrays[Mesh.ARRAY_COLOR]=colors
	var mesh:=ArrayMesh.new();mesh.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,arrays)
	mesh_inst.mesh = mesh
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

static func _span_clear(state, a: Vector3, b: Vector3,room_bins: Variant=null) -> bool:
	var rooms: Dictionary=_room_bins(state) if room_bins==null else room_bins
	var sag := a.distance_to(b) * SAG_RATIO
	for i in range(1, 16):
		var t := float(i) / 16.0
		var p := a.lerp(b, t) - Vector3.UP * (4.0 * sag * t * (1.0-t) + 0.22)
		if p.y < state.ground_height(Vector2(p.x,p.z)) + 1.9: return false
		for row: PackedFloat64Array in rooms.get(Vector2i(floori(p.x/2.),floori(p.z/2.)),[]):
			if absf(p.x-row[0])<0.91 and absf(p.z-row[2])<0.91 and p.y>row[1]-0.1 and p.y<row[1]+2.35:return false
	return true

static func _lantern(st: SurfaceTool, at: Vector3,mesh:Mesh) -> void:
	st.append_from(mesh, 0, Transform3D(Basis.IDENTITY, at))
