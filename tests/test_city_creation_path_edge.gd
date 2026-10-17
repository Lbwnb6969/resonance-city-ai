extends SceneTree
const State = preload("res://scripts/world/city_creation_state.gd")
const Renderer = preload("res://scripts/visual/city_creation_renderer.gd")
const Stroke = preload("res://scripts/world/city_creation_stroke.gd")
var failures: Array[String] = []
var checks := 0
var vertices_checked := 0
var triangles_checked := 0

func _initialize() -> void: _run.call_deferred()

func _check(ok: bool,label: String) -> void:
	checks+=1
	if not ok and not failures.has(label): failures.append(label)

func _inside(at: Vector2,contours: Array) -> bool:
	var inside := false
	for contour: PackedVector2Array in contours:
		if Geometry2D.is_point_in_polygon(at,contour): inside=not inside
	return inside

func _edge_distance(at: Vector2,contours: Array) -> float:
	var nearest := INF
	for contour: PackedVector2Array in contours:
		for index in range(contour.size()):
			nearest=minf(nearest,at.distance_to(Geometry2D.get_closest_point_to_segment(at,contour[index],contour[(index+1)%contour.size()])))
	return nearest

func _verify(town: Node3D) -> void:
	for road: Dictionary in town.state.roads:
		var root_node: Node3D=town.road_roots[road.id]
		var edge: MeshInstance3D=root_node.get_node_or_null("SoftRoadEdge")
		_check(edge!=null,"each street has its own cached soft boundary")
		if edge==null: continue
		var contours: Array=town.road_outlines[road.id]
		var arrays: Array=edge.mesh.surface_get_arrays(0)
		for index in range(arrays[Mesh.ARRAY_VERTEX].size()):
			var point: Vector3=arrays[Mesh.ARRAY_VERTEX][index]
			var at := Vector2(point.x,point.z)
			var expected := clampf(_edge_distance(at,contours)/0.16,0.0,1.0)
			_check(absf(arrays[Mesh.ARRAY_TEX_UV][index].x-expected)<0.003,"indexed lateral UV equals independent exact contour distance")
			var nearest:=Vector2(road.points[0][0],road.points[0][1])
			var distance:=INF
			for segment in range(1,road.points.size()):
				var a:=Vector2(road.points[segment-1][0],road.points[segment-1][1])
				var b:=Vector2(road.points[segment][0],road.points[segment][1])
				var candidate:=Geometry2D.get_closest_point_to_segment(at,a,b)
				if at.distance_squared_to(candidate)<distance:
					distance=at.distance_squared_to(candidate)
					nearest=candidate
			_check(absf(point.y-town.state.street_height(nearest)-0.001)<0.0003,"road shoulder follows exact centreline deck and bridge height")
			_check(arrays[Mesh.ARRAY_NORMAL][index].y>0.99,"soft edge normals face upward")
			vertices_checked+=1
		var faces:=edge.mesh.get_faces()
		for index in range(0,faces.size(),3):
			var centroid: Vector3=(faces[index]+faces[index+1]+faces[index+2])/3.0
			var at:=Vector2(centroid.x,centroid.z)
			_check(_inside(at,contours),"soft strip stays within its actual road footprint and preserves loop holes")
			for other: Dictionary in town.state.roads:
				if other.id==road.id: continue
				_check(not _inside(at,town.road_outlines[other.id]),"junction removes every neighbour's internal edge strip")
			triangles_checked+=1
		for node: MeshInstance3D in root_node.find_children("*","MeshInstance3D",true,false):
			_check(not(node.material_override is StandardMaterial3D and node.material_override.albedo_color==Color("bcb295")),"continuous terrestrial box shoulders removed")

func _run() -> void:
	var city:=State.new()
	city.initialize()
	city.houses.clear()
	city.roads.clear()
	city.plants.clear()
	var points: Array[Vector2]=[Vector2(-15,-10),Vector2(-8,-10)]
	_check(city.add_road(points).ok,"straight road fixture")
	points.assign([Vector2(-11,-13),Vector2(-11,-7)])
	_check(city.add_road(points).ok,"true cross junction fixture")
	points.assign([Vector2(-17,3),Vector2(-13,3),Vector2(-13,8),Vector2(-17,8),Vector2(-17,3)])
	_check(city.add_road(Stroke.road_points(points)).ok,"closed road around real empty island")
	points.assign([Vector2(-15,0),Vector2(-15,5)])
	_check(city.add_road(points).ok,"third street intersects loop near inner edge")
	points.assign([Vector2(-12,5),Vector2(-16,5)])
	_check(city.add_road(points).ok,"loop with multiple overlapping neighbour cuts")
	var town:=Renderer.new()
	root.add_child(town)
	town.setup(city)
	_verify(town)
	var held: Dictionary={}
	for id: String in town.road_roots: held[id]=town.road_roots[id].get_instance_id()
	points.assign([Vector2(-11,11),Vector2(9,11)])
	_check(city.add_road(points).ok,"water bridge fixture")
	town.rebuild()
	var bridge: Node3D=town.road_roots[city.roads[-1].id]
	var rail_count:=0
	for node: MeshInstance3D in bridge.find_children("*","MeshInstance3D",true,false):
		if node.material_override is StandardMaterial3D and node.material_override.albedo_color==Color("d5ccb0"): rail_count+=1
	_check(rail_count>0,"bridge parapets remain real geometry")
	_verify(town)
	for id: String in held: _check(town.road_roots[id].get_instance_id()==held[id],"unrelated road root retains geometry and pebble batches")
	var saved_edges: Dictionary={}
	for id: String in town.road_roots:
		var edge: MeshInstance3D=town.road_roots[id].get_node_or_null("SoftRoadEdge")
		if edge!=null: saved_edges[id]=edge.mesh.surface_get_arrays(0)
	_check(city.undo().ok and city.redo().ok,"bridge undo and redo")
	town.rebuild()
	for id: String in saved_edges:
		_check(town.road_roots[id].get_node("SoftRoadEdge").mesh.surface_get_arrays(0)==saved_edges[id],"undo and redo reproduce exact edge data")
	print("CITY_CREATION_PATH_EDGE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"vertices":vertices_checked,"triangles":triangles_checked,"failures":failures}))
	town.queue_free()
	await process_frame
	quit(0 if failures.is_empty() else 1)
