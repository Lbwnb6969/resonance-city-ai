extends SceneTree
## Same original player strokes, archived shoulder builder, and sampled coverage.
const State = preload("res://scripts/world/city_creation_state.gd")
const Renderer = preload("res://scripts/visual/city_creation_renderer.gd")
const Edge = preload("res://scripts/visual/city_creation_path_edge.gd")
const SOURCE := "res://备份/自发巡演前_20261015/额外道路输入实窗/城市作品快照.json"
var failures: Array[String] = []
var coverage_checks := 0
var vertex_checks := 0
var records: Array = []
var legacy_town: Node3D
var scanline_checks := 0
var height_checks := 0

func _initialize() -> void: _run.call_deferred()

func _expect(ok: bool, label: String) -> void:
	if not ok and not failures.has(label): failures.append(label)

func _triangles(node: Node3D) -> Dictionary:
	var mesh: MeshInstance3D = node.get_node_or_null("SoftRoadEdge")
	var bins := {}
	if mesh == null: return bins
	var faces := mesh.mesh.get_faces()
	for index in range(0,faces.size(),3):
		var a := Vector2(faces[index].x,faces[index].z)
		var b := Vector2(faces[index+1].x,faces[index+1].z)
		var c := Vector2(faces[index+2].x,faces[index+2].z)
		var bounds := Rect2(a,Vector2.ZERO).expand(b).expand(c)
		for z in range(floori(bounds.position.y),floori(bounds.end.y)+1):
			for x in range(floori(bounds.position.x),floori(bounds.end.x)+1):
				var key := Vector2i(x,z)
				if not bins.has(key): bins[key]=[]
				bins[key].append([a,b,c])
	return bins

func _inside(at: Vector2, bins: Dictionary) -> bool:
	for tri: Array in bins.get(Vector2i(floori(at.x),floori(at.y)),[]):
		if Geometry2D.point_is_inside_triangle(at,tri[0],tri[1],tri[2]): return true
	return false

func _boundary_distance(at: Vector2, bins: Dictionary) -> float:
	var distance := INF
	for tri: Array in bins.get(Vector2i(floori(at.x),floori(at.y)),[]):
		for side in range(3): distance=minf(distance,at.distance_to(Geometry2D.get_closest_point_to_segment(at,tri[side],tri[(side+1)%3])))
	return distance

func _compare(town: Node3D, road: Dictionary, old_edge: RefCounted) -> void:
	var old_root := Node3D.new()
	var new_root := Node3D.new()
	root.add_child(old_root)
	root.add_child(new_root)
	var started := Time.get_ticks_usec()
	var before: Dictionary = old_edge.build(legacy_town,road,old_root)
	var old_ms := float(Time.get_ticks_usec()-started)/1000.0
	started=Time.get_ticks_usec()
	var after: Dictionary = Edge.new().build(town,road,new_root)
	var new_ms := float(Time.get_ticks_usec()-started)/1000.0
	var old_bins := _triangles(old_root)
	var new_bins := _triangles(new_root)
	var bounds: Rect2 = town._road_geometry(road).bounds.grow(float(road.width))
	var differences := 0
	for iz in range(floori(bounds.position.y/0.091),ceili(bounds.end.y/0.091)):
		for ix in range(floori(bounds.position.x/0.091),ceili(bounds.end.x/0.091)):
			var at := Vector2(ix*0.091+0.037,iz*0.091+0.023)
			if _inside(at,old_bins)!=_inside(at,new_bins):
				# Clipper's fixed-point intersection can move a boundary <0.1mm.
				if minf(_boundary_distance(at,old_bins),_boundary_distance(at,new_bins))>0.0001: differences+=1
			coverage_checks+=1
	_expect(differences==0,str(road.id)+" original exact shoulder coverage")
	var mesh: MeshInstance3D = new_root.get_node_or_null("SoftRoadEdge")
	_expect(mesh!=null,str(road.id)+" keeps visible shoulder")
	if mesh!=null:
		var arrays := mesh.mesh.surface_get_arrays(0)
		var segments: Array = []
		var center_segments: Array = []
		var samples: Array[Vector2] = town._road_geometry(road).samples
		for index in range(samples.size()-1): center_segments.append([samples[index],samples[index+1]])
		for contour: PackedVector2Array in town.road_outlines[road.id]:
			for index in range(contour.size()): segments.append([contour[index],contour[(index+1)%contour.size()]])
		for index in range(arrays[Mesh.ARRAY_VERTEX].size()):
			var point: Vector3 = arrays[Mesh.ARRAY_VERTEX][index]
			var at := Vector2(point.x,point.z)
			var distance := INF
			for segment: Array in segments: distance=minf(distance,at.distance_to(Geometry2D.get_closest_point_to_segment(at,segment[0],segment[1])))
			_expect(absf(float(arrays[Mesh.ARRAY_TEX_UV][index].x)-clampf(distance/0.16,0,1))<0.003,"independent exact boundary UV")
			_expect(arrays[Mesh.ARRAY_NORMAL][index].y>0.99,"upward real surface normals")
			var nearest := samples[0]
			var closest := INF
			for segment: Array in center_segments:
				var candidate := Geometry2D.get_closest_point_to_segment(at,segment[0],segment[1])
				if at.distance_squared_to(candidate)<closest:
					closest=at.distance_squared_to(candidate)
					nearest=candidate
			_expect(absf(point.y-town._street_height(nearest)-0.001)<0.000002,"independent full centreline bridge height")
			vertex_checks+=1
	records.append({"id":road.id,"points":road.points.size(),"old_ms":old_ms,"new_ms":new_ms,"old":before,"new":after,"coverage_differences":differences})
	print("LONG_EDGE_STAGE ",JSON.stringify(records[-1]))
	old_root.queue_free()
	new_root.queue_free()

func _compare_scanlines(town: Node3D, groups: Array, cuts: Array, label: String) -> void:
	var started := Time.get_ticks_usec()
	var before: Array[Vector3] = legacy_town._water_scanline_union(groups,0.024,cuts)
	var old_ms := float(Time.get_ticks_usec()-started)/1000.0
	started=Time.get_ticks_usec()
	var after: Array[Vector3] = town._water_scanline_union(groups,0.024,cuts)
	var new_ms := float(Time.get_ticks_usec()-started)/1000.0
	_expect(before==after,label+" exact original scanline triangles/order")
	scanline_checks+=before.size()
	print("LONG_SCANLINE_STAGE ",JSON.stringify({"label":label,"old_ms":old_ms,"new_ms":new_ms,"vertices":before.size(),"exact":before==after}))

func _compare_decks(town: Node3D,road: Dictionary) -> void:
	# The archived whole builder supplies the original deck's exact indices,
	# normals, UVs and heights, including its exhaustive nearest-segment loop.
	town.path_pebbles.prepare(town.state)
	legacy_town.path_pebbles.prepare(town.state)
	var old_root: Node3D = legacy_town._road(road)
	var new_root: Node3D = town._road(road)
	var old_mesh: MeshInstance3D = old_root.get_child(0)
	var new_mesh: MeshInstance3D = new_root.get_child(0)
	_expect(old_mesh.mesh.surface_get_arrays(0)==new_mesh.mesh.surface_get_arrays(0),str(road.id)+" exact original road deck indexed arrays")
	var old_stones: Node3D = old_root.get_node("PathPebbles")
	var new_stones: Node3D = new_root.get_node("PathPebbles")
	_expect(old_stones.get_meta("path_pebbles_records",[])==new_stones.get_meta("path_pebbles_records",[]),str(road.id)+" original surviving stones/ellipse clearance/transforms")
	height_checks+=new_mesh.mesh.surface_get_array_len(0)
	old_root.queue_free()
	new_root.queue_free()

func _run() -> void:
	var legacy := GDScript.new()
	legacy.source_code=FileAccess.get_file_as_string("res://废弃/长曲路性能_2026-10-15/city_creation_path_edge.gd.txt")
	_expect(legacy.reload()==OK,"archived builder compiles independently")
	var old_edge: RefCounted = legacy.new()
	var city := State.new()
	city.initialize()
	var snapshot: Dictionary = JSON.parse_string(FileAccess.get_file_as_string(SOURCE))
	_expect(city.restore(snapshot).ok,"actual personal sample restores")
	var town := Renderer.new()
	root.add_child(town)
	town.add_child(town.shore)
	town.state=city
	var old_renderer_script := GDScript.new()
	old_renderer_script.source_code=FileAccess.get_file_as_string("res://废弃/长曲路性能_2026-10-15/city_creation_renderer.gd.txt").replace("class_name CityCreationRenderer","")
	_expect(old_renderer_script.reload()==OK,"archived renderer compiles independently")
	legacy_town=old_renderer_script.new()
	root.add_child(legacy_town)
	legacy_town.add_child(legacy_town.shore)
	legacy_town.state=city
	# No landscape/grass work in this isolated shoulder measurement.
	town.water_field.texture=ImageTexture.create_from_image(Image.create(1,1,false,Image.FORMAT_RF))
	legacy_town.water_field.texture=town.water_field.texture
	town.roads_layer=Node3D.new()
	town.add_child(town.roads_layer)
	legacy_town.roads_layer=Node3D.new()
	legacy_town.add_child(legacy_town.roads_layer)
	town._prepare_road_layout()
	legacy_town._prepare_road_layout()
	for road: Dictionary in city.roads:
		if int(str(road.id).substr(1))>=8:
			_compare(town,road,old_edge)
			var cuts: Array = []
			for other: Dictionary in city.roads:
				if int(str(other.id).substr(1))<int(str(road.id).substr(1)) and town._roads_touch(road,other): cuts.append(town.road_outlines[other.id])
			_compare_scanlines(town,[town.road_outlines[road.id]],cuts,str(road.id))
			_compare_decks(town,road)
	# The old regression's nested loop cuts and a real bridge are covered by
	# test_city_creation_path_edge.gd; add an isolated narrow hole here as well.
	city.houses.clear()
	city.roads=[{"id":"r1","points":[[-15.0,-8.0],[-9.0,-8.0],[-9.0,-2.0],[-15.0,-2.0],[-15.0,-8.0]],"width":1.25},{"id":"r2","points":[[-17.0,-5.0],[-7.0,-5.0]],"width":1.25}]
	town._prepare_road_layout()
	legacy_town._prepare_road_layout()
	for road: Dictionary in city.roads: _compare(town,road,old_edge)
	var ring: Array = town.road_outlines.r1
	var crossing: Array = town.road_outlines.r2
	var island: Array = [PackedVector2Array([Vector2(-13,-6),Vector2(-11,-6),Vector2(-11,-4),Vector2(-13,-4)])]
	_compare_scanlines(town,[ring,crossing,island],[],"water crossing loop and separate island pond")
	_compare_scanlines(town,[ring,crossing],[island],"water nested subtraction")
	city.roads.append({"id":"r3","points":[[-11.0,11.0],[9.0,11.0]],"width":1.25,"bridge":true})
	town._prepare_road_layout()
	legacy_town._prepare_road_layout()
	_compare(town,city.roads[-1],old_edge)
	_compare_decks(town,city.roads[-1])
	var report := {"ok":failures.is_empty(),"failures":failures,"coverage_checks":coverage_checks,"vertex_checks":vertex_checks,"scanline_vertex_checks":scanline_checks,"deck_vertex_checks":height_checks,"records":records,"source":SOURCE}
	var output := "res://验证记录/长曲路性能_2026-10-15/edge_ab.json"
	var file := FileAccess.open(output,FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("LONG_EDGE_RESULT ",JSON.stringify(report))
	town.queue_free()
	legacy_town.queue_free()
	legacy_town=null
	old_edge=null
	await process_frame
	legacy=null
	old_renderer_script=null
	quit(0 if failures.is_empty() else 1)
