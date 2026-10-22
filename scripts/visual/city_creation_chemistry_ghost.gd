extends RefCounted
const Wall = preload("res://scripts/visual/city_creation_wall_material.gd")
const GOLD := Color("e5c46f")
static var _material: ShaderMaterial
static func build(parent: Node3D, rows: Array) -> void:
	if rows.is_empty(): return
	var root := Node3D.new(); root.name = "ChemistryGhost"; parent.add_child(root)
	var surface := SurfaceTool.new(); surface.begin(Mesh.PRIMITIVE_TRIANGLES); surface.set_color(GOLD)
	var segments := 0
	var labels := {}
	for row: Dictionary in rows:
		for line: Array in row.lines:
			var walked := 0.
			for i in range(1,line.size()):
				var a: Vector3 = line[i-1]; var b: Vector3 = line[i]
				var length := a.distance_to(b)
				if length < .002: continue
				var direction := (b-a)/length
				for index in range(floori(walked/.26),floori((walked+length)/.26)+1):
					var low := maxf(0.,index*.26-walked); var high := minf(index*.26+.16-walked,length)
					if high-low < .002: continue
					_dash(surface,a+direction*low,a+direction*high); segments += 1
				walked += length
		if not labels.has(row.kind):
			labels[row.kind] = true
			var label := Label3D.new(); label.text = "◇ "+str(row.label)
			label.font_size = 40; label.pixel_size = .006; label.modulate = GOLD
			label.outline_modulate = Color("294e43"); label.outline_size = 7
			label.billboard = BaseMaterial3D.BILLBOARD_ENABLED; label.no_depth_test = true; label.position = row.at
			root.add_child(label)
	if segments > 0:
		surface.generate_normals()
		var mesh := MeshInstance3D.new(); mesh.name = "GoldDashedStructures"; mesh.mesh = surface.commit()
		if _material == null:
			var shader := Shader.new(); shader.code = Wall.WallShader.code.replace("cull_back","cull_back, depth_test_disabled")
			_material = Wall.merged(Wall.source(GOLD,null,"component",Wall.Kind.STONE),0.,1.7,shader,Vector2(0.,6.))
		mesh.material_override = _material
		mesh.cast_shadow = GeometryInstance3D.SHADOW_CASTING_SETTING_OFF; root.add_child(mesh)
	root.set_meta("dash_count",segments); root.set_meta("recipes",labels.keys()); root.set_meta("rows",rows)

static func _dash(surface: SurfaceTool, a: Vector3, b: Vector3) -> void:
	var axis := (b-a).normalized()
	var right := axis.cross(Vector3.UP)
	if right.length_squared() < .001: right = axis.cross(Vector3.RIGHT)
	right = right.normalized()*.014
	var up := axis.cross(right).normalized()*.014
	var points: Array[Vector3] = [a-right-up,a+right-up,a+right+up,a-right+up,b-right-up,b+right-up,b+right+up,b-right+up]
	for index: int in [0,2,1,0,3,2,4,5,6,4,6,7,0,1,5,0,5,4,3,7,6,3,6,2,0,4,7,0,7,3,1,2,6,1,6,5]: surface.add_vertex(points[index])
