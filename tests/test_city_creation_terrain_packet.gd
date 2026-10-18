extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Surface=preload("res://scripts/visual/city_creation_terrain_surface.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _pure(value:Variant)->bool:
	if value is Object or value is Callable or value is Signal:return false
	if value is Dictionary:
		for key:Variant in value:if not _pure(key) or not _pure(value[key]):return false
	if value is Array:
		for entry:Variant in value:if not _pure(entry):return false
	return true
func _run()->void:
	Engine.max_fps=180
	var city:=State.new();city.initialize();city.prepare_ground_height();var surface:=Surface.new();surface.state=city
	var bounds:=Rect2(-48,-48,16,16);var worker:=Thread.new();worker.start(surface.prepare_mesh.bind(bounds))
	while worker.is_alive():await process_frame
	var packet:Dictionary=worker.wait_to_finish();var original:=var_to_bytes(packet)
	_check(_pure(packet),"actual background terrain packet contains only values without mesh physics or scene resources")
	_check(packet.arrays[Mesh.ARRAY_VERTEX].size()>1089 and packet.triangles>2048,"outer chunk packet includes original ground slab closing skirts")
	var points:Array[Vector2]=[Vector2(-38,-38)]
	_check(city.add_terrain_stroke(points,"raise",2.,.9,2).ok,"actual local terrain changes after worker packet completed")
	city.prepare_ground_height();var latest:Dictionary=surface.prepare_mesh(bounds)
	_check(var_to_bytes(packet)==original and latest.arrays[Mesh.ARRAY_VERTEX]!=packet.arrays[Mesh.ARRAY_VERTEX],"subsequent height edits cannot alter the completed private packet")
	var chunk:Node3D=surface._build_block(bounds,Vector2i(-3,-3),packet)
	var mesh:ArrayMesh=chunk.get_node("GroundMesh").mesh;var arrays:Array=mesh.surface_get_arrays(0)
	_check(arrays[Mesh.ARRAY_VERTEX]==packet.arrays[Mesh.ARRAY_VERTEX] and arrays[Mesh.ARRAY_INDEX]==packet.arrays[Mesh.ARRAY_INDEX],"main-thread installation uses captured vertices and indices without resampling newer terrain")
	var shape:ConcavePolygonShape3D=chunk.get_node("GroundPick").get_child(0).shape
	_check(shape.get_faces()==mesh.create_trimesh_shape().get_faces(),"prepared collision faces exactly equal independent legacy mesh-derived collision faces")
	_check(chunk.get_meta("triangles")==packet.triangles and chunk.get_node("GroundPick").collision_layer==2,"triangle accounting and original terrain picking layer remain unchanged")
	chunk.free();surface.free();print("TERRAIN_PACKET ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
