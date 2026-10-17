extends SceneTree
const State := preload("res://scripts/world/city_creation_state.gd")
const Life := preload("res://scripts/world/city_creation_life.gd")
const Frontage := preload("res://scripts/world/city_creation_frontage.gd")
var failures: Array[String]=[]
var checks := 0

func _initialize() -> void: _run.call_deferred()

func _run() -> void:
	for north: bool in [false,true]:
		var city := State.new()
		city.initialize()
		var life := _life(city)
		var resident := _resident(life,"h6")
		var original: Vector3=resident.node.position
		var node_id: int=resident.node.get_instance_id()
		_check(resident.paused and original.is_equal_approx(Vector3(9,city.street_height(Vector2(9,4.52))+0.1,4.52)),"old unserved south-door resident fixture")
		_check(_road(city,[Vector2(-11,9),Vector2(9,11)]).ok,"real bridge joins original network")
		life._sync()
		_check(resident.node.position==original,"bridge alone cannot teleport an unserved resident")
		var points: Array=[Vector2(9,11),Vector2(12,11),Vector2(12,3),Vector2(10.12,3)]
		if north: points=[Vector2(9,11),Vector2(12,11),Vector2(12,0),Vector2(9,0),Vector2(9,1.88)]
		_check(_road(city,points).ok,"side-only approach commits")
		life._sync()
		_check(resident.node.get_instance_id()==node_id and resident.node.position==original and not resident.paused,"same resident starts exterior walking from old south door")
		_check(resident.route.size()>2,"route contains outside corner prefix and real road continuation")
		var clear := true
		var previous: Vector3=resident.node.position
		for tick in range(10):
			life._process(0.1)
			clear=clear and _clear(city,previous,resident.node.position)
			previous=resident.node.position
		_check(clear and resident.node.position.distance_to(original)>0.1,"actual first walking steps avoid house and water")
		var walking: Vector3=resident.node.position
		_check(city.set_house_name("h6","绕门仍在行走").ok,"unrelated edit while walking")
		life._sync()
		_check(resident.node.position==walking and not resident.paused,"unrelated edit retains current exterior position")
		var saved: Dictionary=city.snapshot()
		saved.journey_checkpoint=life.checkpoint()
		var copy := State.new()
		_check(copy.restore(JSON.parse_string(JSON.stringify(saved))).ok,"exterior walking checkpoint JSON")
		var continued := _life(copy)
		var resumed := _resident(continued,"h6")
		_check(resumed.node.position.is_equal_approx(walking) and not resumed.paused,"reload resumes exact outside walk instead of spawning at new door")
		var reached := false
		for tick in range(2400):
			var before: Vector3=resumed.node.position
			continued._process(0.1)
			if not _clear(copy,before,resumed.node.position):
				clear=false
			if not str(resumed.dwell_id).is_empty():
				reached=true
				break
		_check(reached and clear,"former paused neighbor really reaches service without clipping or fake arrival")
		# A stranded worker outside the old oven must walk around its own wall
		# when the selected approach moves. It cannot resume baking remotely.
		var worker: Dictionary=continued.bakery.workers[0]
		var bakery_id: String=worker.bakery_id
		var house: Dictionary={}
		for row: Dictionary in copy.houses:
			if row.id==bakery_id: house=row
		var west: Vector2=Frontage.center(house,house.cells[0])+Vector2(-1.52,0)
		worker.node.position=Vector3(west.x,copy.street_height(west)+0.1,west.y)
		worker.phase="baking"
		worker.elapsed=2.0
		var worker_id: int=worker.node.get_instance_id()
		continued.bakery._replan(worker)
		_check(worker.phase=="walking" and worker.node.position==Vector3(west.x,copy.street_height(west)+0.1,west.y) and worker.node.get_instance_id()==worker_id,"oven entry change requires real exterior travel and keeps worker")
		var produced: int=copy.bakery_status(bakery_id).produced
		continued.bakery.tick(0.1)
		_check(int(copy.bakery_status(bakery_id).produced)==produced and worker.phase=="walking","exterior walking worker cannot produce remotely")
		life.queue_free()
		continued.queue_free()
	await process_frame
	if failures.is_empty(): print("CITY_CREATION_FRONTAGE_WALK PASS: %d assertions; paused south to east/north, exterior geometry, no teleport, checkpoint, oven attendance"%checks)
	else:
		for failure: String in failures: push_error(failure)
	quit(0 if failures.is_empty() else 1)

func _life(city: RefCounted) -> Node3D:
	var life := Life.new()
	root.add_child(life)
	life.set_process(false)
	life.setup(city)
	return life

func _resident(life: Node3D,id: String) -> Dictionary:
	for resident: Dictionary in life.residents:
		if resident.home_id==id: return resident
	return {}

func _road(city: RefCounted,points: Array) -> Dictionary:
	var typed: Array[Vector2]=[]
	typed.assign(points)
	return city.add_road(typed)

func _clear(city: RefCounted,a: Vector3,b: Vector3) -> bool:
	for house: Dictionary in city.houses:
		for cell: Dictionary in house.cells:
			if int(cell.level)!=0: continue
			var footprint := Rect2(Frontage.center(house,cell)-Vector2.ONE*0.9,Vector2.ONE*1.8)
			if Frontage.hits_rect(Vector2(a.x,a.z),Vector2(b.x,b.z),footprint.grow(-0.01)): return false
	if city.water_clearance(Vector2(b.x,b.z))<0.0:
		var on_bridge := false
		for road: Dictionary in city.roads:
			if not bool(road.bridge): continue
			for index in range(1,road.points.size()):
				var start := Vector2(road.points[index-1][0],road.points[index-1][1])
				var end := Vector2(road.points[index][0],road.points[index][1])
				if Geometry2D.get_closest_point_to_segment(Vector2(b.x,b.z),start,end).distance_to(Vector2(b.x,b.z))<=float(road.width)*0.5: on_bridge=true
		if not on_bridge: return false
	return true

func _check(ok: bool,label: String) -> void:
	checks+=1
	if not ok: failures.append(label)
