extends SceneTree
## Pure site geometry plus actual Life/worker walking; no personal save I/O.
const State := preload("res://scripts/world/city_creation_state.gd")
const Life := preload("res://scripts/world/city_creation_life.gd")
const Travel := preload("res://scripts/world/city_creation_travel.gd")
var failures: Array[String] = []
var checks := 0
var observed: Array[Dictionary] = []

func _initialize() -> void:
	_run.call_deferred()

func _check(ok: bool, message: String) -> void:
	checks+=1
	if not ok:
		failures.append(message)
		push_error(message)

func _run() -> void:
	var sensor := Travel.new()
	sensor._add_site("test","arch","h1","r1",Vector2.ZERO,Vector2.RIGHT,0.5)
	_check(sensor.observe("r",Vector2(-1,0),Vector2(1,0),0).size()==1,"actual center crossing")
	_check(sensor.observe("r",Vector2(1,0),Vector2(-1,0),1).is_empty(),"reverse inside six seconds leaves silence")
	_check(sensor.observe("r",Vector2(-1,0),Vector2(1,0),6).size()==1,"real reverse after cooldown")
	_check(sensor.observe("near",Vector2(-1,0.51),Vector2(1,0.51),8).is_empty(),"outside exact hole width")
	_check(sensor.observe("parallel",Vector2(-0.2,-1),Vector2(-0.2,1),8).is_empty(),"walk beside center plane")
	_check(sensor.observe("edge",Vector2(-1,0.5),Vector2(1,0.5),8).size()==1,"hole width inclusive")
	_check(sensor.observe("small",Vector2(-0.01,0),Vector2(0.01,0),10).is_empty(),"short center leg waits for hysteresis")
	_check(sensor.observe("small",Vector2(0.01,0),Vector2(0.08,0),10.2).size()==1,"short leg center crossing retained")
	_check(sensor.observe("tip",Vector2(-1,0),Vector2.ZERO,10).is_empty(),"center endpoint alone does not finish crossing")
	_check(sensor.observe("tip",Vector2.ZERO,Vector2(-0.1,0),10.1).is_empty(),"touch and turn back does not cross")
	_check(sensor.observe("tip",Vector2(-0.1,0),Vector2(1,8),10.2).is_empty(),"later walk outside width cannot reuse touch")
	sensor.clear_observations()
	_check(sensor.observe("loaded",Vector2.ZERO,Vector2(0.2,0),12).is_empty(),"restored at center seeds silently")
	_check(sensor.observe("loaded",Vector2(0.2,0),Vector2(-0.2,0),12.1).size()==1,"new actual crossing after restore")
	_check(sensor.observe("idle",Vector2.ZERO,Vector2.ZERO,12).is_empty(),"no stationary events")
	# Use the real State river mask and genuine Passage geometry.
	var city := State.new()
	city.initialize()
	city.houses.clear()
	city.roads.clear()
	city.roads.append({"id":"rb","points":[[-11.0,0.0],[12.0,0.0]],"width":1.25})
	sensor.sync(city)
	_check(sensor.sites.size()==1,"one actual river wet span")
	var bridge: Dictionary = sensor.site("rb/bridge/0")
	_check(not bridge.is_empty() and city.water_clearance(Vector2(bridge.at))<0.0,"bridge midpoint over real water")
	_check(absf(float(bridge.at.x)-city.river_x(0))<0.001,"bridge section at wet arc midpoint")
	var rebuilds: int = sensor.rebuilds
	sensor.sync(city)
	_check(sensor.rebuilds==rebuilds,"unchanged geometry reuses sites")
	city.houses.append({"id":"ha","origin":[-8.0,0.0],"role":"residential","cells":[{"id":"ca","x":0,"z":0,"level":0,"kind":"room"}]})
	sensor.sync(city)
	_check(sensor.site("ha/arch/ca/1").size()>0,"genuine road passage has arch site")
	var arch: Dictionary = sensor.site("ha/arch/ca/1")
	_check(is_equal_approx(float(arch.half_width),0.565),"arch width matches real passage clearance")
	city.houses[0].name="Only a name"
	sensor.sync(city)
	_check(sensor.rebuilds==rebuilds+1,"name edit does not rebuild geometry")
	city.roads[0].points=[[-11.0,0.0],[-8.0,0.0]]
	sensor.sync(city)
	_check(sensor.sites.is_empty(),"unfinished road removes arch and bridge")
	# The actual graph sends the east-bank household over the new bridge.
	city = State.new()
	city.initialize()
	var points: Array[Vector2] = [Vector2(-11,3.5),Vector2(7,3.5),Vector2(7,5.2),Vector2(9,5.2),Vector2(9,4.45)]
	var authored := city.add_road(points)
	_check(bool(authored.ok),"real playable bridge authored: "+str(authored.message))
	var life := Life.new()
	root.add_child(life)
	life.set_process(false)
	life.travel_callback=func(actor: String,kind: String,id: String,at: Vector2) -> void:
		observed.append({"actor":actor,"kind":kind,"id":id,"at":at})
	life.setup(city)
	_check(observed.is_empty(),"birth and setup make no travel sound")
	_check(life.house_connected("h6"),"east resident actually connects")
	for tick in range(1400): life._tick_life(0.1)
	var east_crossed := false
	for event: Dictionary in observed:
		if event.actor=="resident/h6" and event.kind=="bridge": east_crossed=true
	_check(east_crossed,"actual daily walk crosses bridge")
	var saved := life.checkpoint()
	var before := observed.size()
	life.restore_checkpoint(saved)
	_check(observed.size()==before,"checkpoint restoration emits no event")
	var real_bridge: Dictionary = {}
	for site: Dictionary in life.travel.sites.values():
		if site.kind=="bridge": real_bridge=site; break
	_check(not real_bridge.is_empty(),"real bridge site published")
	if not real_bridge.is_empty():
		var at: Vector2 = real_bridge.at
		var axis: Vector2 = real_bridge.axis
		_check(life.travel_source_valid("bridge",str(real_bridge.id),at),"sound queue validates published bridge")
		_check(not life.travel_source_valid("arch",str(real_bridge.id),at),"sound queue rejects wrong kind")
		life.set_budget_hold(true)
		life.record_travel("held",at-axis,at+axis)
		_check(observed.size()==before and not life.travel_source_valid("bridge",str(real_bridge.id),at),"budget hold suppresses travel and stale queued source")
		life.set_budget_hold(false)
		# Exercise the three additional real movement methods at the same site.
		for role: String in ["baker","artisan","cafe"]:
			var node: Node3D = life._person(0)
			life.add_child(node)
			node.position=Vector3(at.x-axis.x*0.2,city.street_height(at)+0.1,at.y-axis.y*0.2)
			var route: Array[Vector3] = [Vector3(at.x+axis.x*0.2,city.street_height(at)+0.1,at.y+axis.y*0.2)]
			var actor := {"node":node,"home_id":"test_"+role,"route":route,"index":0,"phase":0.0}
			before=observed.size()
			if role=="baker": life.bakery._walk(actor,1.0)
			elif role=="artisan": life.workshop._walk(actor,1.0)
			else: life.cafe._walk(actor,1.0)
			_check(observed.size()==before+1,"actual "+role+" walking reports crossing")
			node.queue_free()
	life.queue_free()
	await process_frame
	print("TRAVEL %s checks=%d events=%d failures=%s" % ["PASS" if failures.is_empty() else "FAIL",checks,observed.size(),failures])
	quit(0 if failures.is_empty() else 1)
