extends SceneTree
const State = preload("res://scripts/world/city_creation_state.gd")
const Renderer = preload("res://scripts/visual/city_creation_renderer.gd")
const Architecture = preload("res://scripts/visual/city_creation_architecture.gd")
var checks := 0
var failures: Array[String] = []

func _initialize() -> void:
	_run.call_deferred()

func _check(value: bool, label: String) -> void:
	checks += 1
	if not value: failures.append(label)

func _cast(from: Vector3, to: Vector3) -> Dictionary:
	return root.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(from,to))

func _run() -> void:
	var city := State.new()
	city.initialize()
	var house: Dictionary = city.houses[0].duplicate(true)
	house.origin = [-12.0,-8.0]
	house.cells = [house.cells[0].duplicate(true)]
	city.houses = [house]
	city.roads.clear()
	city.waters.clear()
	city.plants.clear()
	var town := Renderer.new()
	root.add_child(town)
	# This focused fixture skips setup's landscape, but still owns its Node helper.
	town.add_child(town.shore)
	town.state = city
	town.buildings = Node3D.new()
	town.add_child(town.buildings)
	var center := Vector2(-12,-8)
	var fixtures: Array = [
		[[center+Vector2(-3,0),center+Vector2(3,0)]],
		[[center+Vector2(0,-3),center+Vector2(0,3)]],
		[[center+Vector2(-3,0.05),center+Vector2(-0.9,0.04),center+Vector2(0.2,0.08),center+Vector2(0.9,0.04),center+Vector2(3,0.05)]],
		[[center+Vector2(-3,0),center+Vector2(3,0)],[center+Vector2(0,-3),center+Vector2(0,3)]]
	]
	for fixture: Array in fixtures:
		city.roads.clear()
		for row: Array in fixture:
			var points: Array[Vector2] = []
			points.assign(row)
			_check(bool(city.add_road(points).ok),"geometry fixture road accepted")
		var passages: Array = city.house_passages(str(house.id))
		_check(passages.size()==fixture.size(),"each actual crossing derives one passage")
		var building: Node3D = town._house(house)
		_check(building.get_meta("passages",[]).size()==fixture.size(),"house exposes derived geometry metadata")
		await physics_frame
		await physics_frame
		for passage: Dictionary in passages:
			_verify_picking(center,passage)
		# Actual merged production triangles must preserve the same visual hole.
		town._merge_meshes(building)
		for passage: Dictionary in passages:
			_verify_visible(building,center,passage)
		town.buildings.remove_child(building)
		building.free()
	var cross: Array = [{"axis":Vector2i(1,0),"offset":0.0,"half_width":0.665},{"axis":Vector2i(0,1),"offset":0.0,"half_width":0.665}]
	var pieces: Array[Rect2] = Architecture.floor_pieces(cross)
	_check(pieces.size()==4,"crossing passages leave four real pier foundations")
	for piece: Rect2 in pieces:
		_check(not piece.has_point(Vector2.ZERO),"no floor tile across crossing center")
	print(JSON.stringify({"result":"PASS" if failures.is_empty() else "FAIL","checks":checks,"failures":failures}))
	town.free()
	await process_frame
	quit(0 if failures.is_empty() else 1)

func _verify_picking(center: Vector2, passage: Dictionary) -> void:
		var axis: Vector2i = passage.axis
		var origin := Vector3(center.x,0.5,center.y)
		origin += Vector3(0,0,float(passage.offset)) if axis.x!=0 else Vector3(float(passage.offset),0,0)
		var direction := Vector3(axis.x,0,axis.y)
		_check(_cast(origin-direction*2.0,origin+direction*2.0).is_empty(),"true collision opening at resident height "+str(axis))
		origin.y = 0.08
		_check(_cast(origin-direction*2.0,origin+direction*2.0).is_empty(),"raised foundation genuinely cut out of road "+str(axis))
		origin.y = 1.5
		_check(not _cast(origin-direction*2.0,origin+direction*2.0).is_empty(),"overhead spandrel remains pickable")
		origin.y = 0.5
		var lateral := Vector3(-axis.y,0,axis.x)
		var pier_origin := Vector3(center.x,0.5,center.y)
		_check(not _cast(pier_origin+direction*2.0+lateral*0.85,pier_origin-direction*2.0+lateral*0.85).is_empty(),"structural pier remains pickable")
		_check(not _cast(Vector3(center.x,4,center.y),Vector3(center.x,1.0,center.y)).is_empty(),"upper slab remains pickable for floor expansion")
		for side: float in [-1.0,1.0]:
			var shoulder := origin+lateral*side*(float(passage.half_width)-0.025)
			_check(_cast(shoulder-direction*2.0,shoulder+direction*2.0).is_empty(),"entire clear width genuinely open below arch spring")

func _verify_visible(building: Node3D, center: Vector2, passage: Dictionary) -> void:
		var axis: Vector2i = passage.axis
		var origin := Vector3(center.x,0.5,center.y)
		origin += Vector3(0,0,float(passage.offset)) if axis.x!=0 else Vector3(float(passage.offset),0,0)
		var direction := Vector3(axis.x,0,axis.y)
		var triangle_hits := 0
		for instance: MeshInstance3D in building.find_children("*","MeshInstance3D",true,false):
			var faces := instance.mesh.get_faces()
			for index in range(0,faces.size(),3):
				var a: Vector3 = instance.global_transform*faces[index]
				var b: Vector3 = instance.global_transform*faces[index+1]
				var c: Vector3 = instance.global_transform*faces[index+2]
				if Geometry3D.segment_intersects_triangle(origin-direction*2.0,origin+direction*2.0,a,b,c) != null: triangle_hits += 1
		_check(triangle_hits==0,"merged visible geometry genuinely open "+str(axis))
