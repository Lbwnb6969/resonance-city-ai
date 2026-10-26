extends RefCounted
## Shared low-detail architecture, with the same paper-grain/AO material as walls.
const Wall = preload("res://scripts/visual/city_creation_wall_material.gd")
const Colors = preload("res://scripts/visual/city_creation_house_colors.gd")
static var meshes: Dictionary = {}
static var materials: Dictionary = {}
static func build(renderer: Node3D, parent: Node3D, house: Dictionary, cell: Dictionary) -> Dictionary:
	var terrace := str(cell.kind) == "terrace"
	var height := .19 if terrace else 1.7
	var node := Node3D.new()
	node.name = "SpringProxy_"+str(cell.id)
	parent.add_child(node)
	node.position = renderer._cell_position(house,cell)+Vector3.UP*float(cell.level)*1.7
	var frame=preload("res://scripts/world/city_creation_house_frame.gd");var center:Vector2=frame.center(house,cell)
	node.position.x=center.x;node.position.z=center.y;node.rotation.y=frame.yaw(house)+frame.Hinge.cell_angle(house,cell)
	var palette: Array = Colors.era_palette(renderer,house,Colors.base_palette(renderer,house),house.has("custom_colors"))
	var body := MeshInstance3D.new()
	body.mesh = wall_mesh(height)
	body.material_override = material(palette[0],node.position.y)
	node.add_child(body)
	if not terrace:
		var roof := MeshInstance3D.new()
		roof.mesh = roof_mesh(); roof.position.y = height
		roof.material_override = material(palette[1],node.position.y+height)
		node.add_child(roof)
		var windows := MeshInstance3D.new()
		windows.mesh = window_mesh()
		windows.material_override = material(palette[2].darkened(.3),node.position.y)
		node.add_child(windows)
	node.scale.y = .2
	node.set_meta("spring_started_usec",Time.get_ticks_usec())
	var tween := node.create_tween()
	tween.tween_property(node,"scale:y",1.,.18).set_trans(Tween.TRANS_BACK).set_ease(Tween.EASE_OUT)
	var pose:=Transform3D(Basis(Vector3.UP,node.rotation.y),node.position);var bounds:=AABB(Vector3(-.92,0,-.92),Vector3(1.84,height+(.42 if not terrace else 0.),1.84))
	return {"node":node,"transform":pose,"local_bounds":bounds,"bounds":pose*bounds}
static func material(color: Color, base_y: float) -> ShaderMaterial:
	var key: Array = [color,base_y]
	if not materials.has(key):
		var value := Wall.merged(Wall.source(color),base_y,1.7,Wall.WallShader)
		value.set_shader_parameter("albedo_color",color)
		materials[key] = value
	return materials[key]
static func surface() -> SurfaceTool:
	var st := SurfaceTool.new()
	st.begin(Mesh.PRIMITIVE_TRIANGLES)
	return st
static func triangle(st: SurfaceTool, a: Vector3, b: Vector3, c: Vector3) -> void:
	for point: Vector3 in [a,c,b]: st.add_vertex(point)
static func quad(st: SurfaceTool, a: Vector3, b: Vector3, c: Vector3, d: Vector3) -> void:
	triangle(st,a,b,c);triangle(st,a,c,d)
static func finish(st: SurfaceTool) -> ArrayMesh:
	st.generate_normals(); st.index()
	return st.commit()
static func wall_mesh(height: float) -> Mesh:
	if meshes.has(height): return meshes[height]
	var polygon: Array[Vector2] = [Vector2(-.83,-.89),Vector2(.83,-.89),Vector2(.89,-.83),Vector2(.89,.83),Vector2(.83,.89),Vector2(-.83,.89),Vector2(-.89,.83),Vector2(-.89,-.83)]
	polygon.reverse()
	var st := surface()
	for i: int in range(polygon.size()):
		var a := polygon[i]; var b := polygon[(i+1)%polygon.size()]
		quad(st,Vector3(a.x,0,a.y),Vector3(b.x,0,b.y),Vector3(b.x,height,b.y),Vector3(a.x,height,a.y))
		triangle(st,Vector3.ZERO,Vector3(b.x,0,b.y),Vector3(a.x,0,a.y))
		triangle(st,Vector3(0,height,0),Vector3(a.x,height,a.y),Vector3(b.x,height,b.y))
	meshes[height] = finish(st)
	return meshes[height]
static func roof_mesh() -> Mesh:
	if meshes.has("roof"): return meshes.roof
	var st := surface()
	quad(st,Vector3(-.92,0,-.92),Vector3(-.92,0,.92),Vector3(0,.42,.92),Vector3(0,.42,-.92))
	quad(st,Vector3(0,.42,-.92),Vector3(0,.42,.92),Vector3(.92,0,.92),Vector3(.92,0,-.92))
	triangle(st,Vector3(-.92,0,.92),Vector3(.92,0,.92),Vector3(0,.42,.92))
	triangle(st,Vector3(.92,0,-.92),Vector3(-.92,0,-.92),Vector3(0,.42,-.92))
	meshes.roof = finish(st)
	return meshes.roof
static func window_mesh() -> Mesh:
	if meshes.has("windows"): return meshes.windows
	var st := surface()
	for x: float in [-.48,.48]:
		quad(st,Vector3(x-.17,.65,.895),Vector3(x+.17,.65,.895),Vector3(x+.17,1.22,.895),Vector3(x-.17,1.22,.895))
	quad(st,Vector3(-.16,.04,.895),Vector3(.16,.04,.895),Vector3(.16,.83,.895),Vector3(-.16,.83,.895))
	meshes.windows = finish(st)
	return meshes.windows
