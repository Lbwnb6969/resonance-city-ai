extends SceneTree
const State := preload("res://scripts/world/city_creation_state.gd")
const Life := preload("res://scripts/world/city_creation_life.gd")
const Passage := preload("res://scripts/world/city_creation_passage.gd")
var checks := 0
var failures: Array[String]=[]

func _initialize() -> void: _run.call_deferred()

func _fixture() -> RefCounted:
	var city := State.new()
	city.initialize()
	var original: Array[Dictionary]=city.houses.duplicate(true)
	city.houses.clear()
	for index in range(3):
		var house: Dictionary=original[[0,1,3][index]].duplicate(true)
		house.origin=[-14.0+index*4.0,-2.0]
		house.cells=[house.cells[0].duplicate(true)]
		city.houses.append(house)
	city.roads.clear()
	city.plants.clear()
	city.revision+=1
	return city

func _road(city: RefCounted,points: Array) -> Dictionary:
	var typed: Array[Vector2]=[]
	typed.assign(points)
	return city.add_road(typed)

func _check(ok: bool,label: String) -> void:
	checks+=1
	if not ok: failures.append(label)

func _run() -> void:
	var city := _fixture()
	_check(city.add_cell("h1",0,0,1,"room").ok,"upper room exists before crossing")
	var identity: Array=[]
	for house: Dictionary in city.houses: identity.append([house.id,house.cells.duplicate(true)])
	var result := _road(city,[Vector2(-17,-2),Vector2(-4,-2)])
	_check(result.ok,"one genuine road traverses three ground rooms")
	for index in range(3):
		var house: Dictionary=city.houses[index]
		var passages: Array[Dictionary]=city.house_passages(str(house.id))
		_check(passages.size()==1 and passages[0].axis==Vector2i(1,0) and is_equal_approx(passages[0].half_width,0.665),"exact width and X geometry")
		_check([house.id,house.cells]==identity[index],"passage preserves every room ID and upper floor")
		var openings := 0
		for entry: Dictionary in city.house_entrances(str(house.id)):
			if entry.get("passage",false): openings+=1
		_check(openings==2,"two genuine exterior passage entrances")
	var copied: Array[Dictionary]=city.house_passages("h1")
	copied[0].half_width=10.0
	_check(city.house_passages("h1")[0].half_width<1.0,"queries cannot mutate cached truth")
	var restored := State.new()
	_check(restored.restore(JSON.parse_string(JSON.stringify(city.snapshot()))).ok and restored.house_passages("h1")==city.house_passages("h1"),"JSON restores exact derived passages without schema flags")
	_check(city.remove_road(str(result.road_id)).ok and city.house_passages("h1").is_empty(),"deleting road fills derived arch")
	_check(city.undo().ok and city.house_passages("h1").size()==1,"undo restores same passage")
	_check(city.redo().ok and city.house_passages("h1").is_empty(),"redo fills passage")
	_check(city.undo().ok,"life fixture restores through road")
	var curve := _fixture()
	_check(_road(curve,[Vector2(-14,-5),Vector2(-13.96,-3.1),Vector2(-14.04,-2),Vector2(-14,-0.9),Vector2(-14,1)]).ok,"modest sampled curve traverses opposite Z faces")
	_check(curve.house_passages("h1")[0].axis==Vector2i(0,1) and curve.house_passages("h1")[0].half_width>0.665,"curve envelope widens actual arch opening")
	for bad: Array in [
		[Vector2(-17,-2),Vector2(-14,-2)],
		[Vector2(-17,-2),Vector2(-14,-2),Vector2(-14,-5)],
		[Vector2(-17,-1.7),Vector2(-12,-1.7)],
		[Vector2(-17,-2),Vector2(-14.4,-2),Vector2(-17,-2),Vector2(-17,-5),Vector2(-11,-5),Vector2(-11,-2),Vector2(-13.6,-2),Vector2(-11,-2)],
		[Vector2(-14,-5),Vector2(-13.6,-2),Vector2(-14,1)]
	]:
		var fresh := _fixture()
		var before: Dictionary=fresh.snapshot()
		_check(not _road(fresh,bad).ok and fresh.snapshot()==before,"dead end / L bend / side pier / disconnected outside detour / excessive curve rejected atomically")
	var reverse := _fixture()
	reverse.houses.clear()
	_check(_road(reverse,[Vector2(-17,-2),Vector2(-4,-2)]).ok,"road laid before house")
	_check(reverse.add_house(Vector2(-14,-2)).ok and reverse.house_passages(str(reverse.houses[0].id)).size()==1,"new house automatically arches over existing street")
	var adjacent := _fixture()
	_check(adjacent.add_cell("h1",1,0,0,"room").ok,"adjacent ground expansion fixture")
	_check(_road(adjacent,[Vector2(-17,-2),Vector2(-11,-2)]).ok,"continuous street through adjacent cells")
	_check(adjacent.house_passages("h1").size()==2,"both adjoining cells derive passage")
	var ports := 0
	for entry: Dictionary in adjacent.house_entrances("h1"):
		if entry.get("passage",false): ports+=1
	_check(ports==2,"shared internal wall never creates fake exterior doorway")
	var cross := _fixture()
	_check(_road(cross,[Vector2(-16,-2),Vector2(-12,-2)]).ok and _road(cross,[Vector2(-14,-5),Vector2(-14,1)]).ok,"perpendicular streets cross under same room")
	_check(cross.house_passages("h1").size()==2,"four-way crossing has two axis openings")
	var life := Life.new()
	root.add_child(life)
	life.set_process(false)
	life.setup(city)
	_check(life.connected_houses.size()==3,"real graph connects three roles through arch entrances")
	_check(not life._attachment_crosses_wall(Vector2(-14.8,-2),Vector2(-13.2,-2)),"route can attach through open corridor")
	_check(life._attachment_crosses_wall(Vector2(-14,-3),Vector2(-14,-1)),"route cannot attach through perpendicular solid wall")
	var entered := false
	var saved_inside := false
	for tick in range(3000):
		life._process(0.1)
		for resident: Dictionary in life.residents:
			var at: Vector3=resident.node.position
			if absf(at.x+10)<0.7 and absf(at.z+2)<0.2:
				entered=true
				if not saved_inside:
					var snapshot: Dictionary=city.snapshot()
					snapshot.journey_checkpoint=life.checkpoint()
					var reloaded := State.new()
					_check(reloaded.restore(JSON.parse_string(JSON.stringify(snapshot))).ok,"checkpoint while physically inside arch restores")
					var resumed := Life.new()
					root.add_child(resumed)
					resumed.set_process(false)
					resumed.setup(reloaded)
					var same := false
					var restored_person: Dictionary={}
					for other: Dictionary in resumed.residents:
						if other.home_id==resident.home_id:
							same=other.node.position.distance_to(at)<0.001
							restored_person=other
					_check(same,"inside-arch reload preserves physical resident position")
					var progress: Dictionary=reloaded.life_progress.duplicate(true)
					_check(reloaded.remove_road(str(result.road_id)).ok,"street can be erased while resident is inside arch")
					resumed._sync()
					_check(restored_person.paused and restored_person.node.position.distance_to(at)<0.001 and reloaded.life_progress==progress,"closing occupied arch pauses in place without teleport or false service")
					_check(reloaded.undo().ok,"occupied arch deletion can be undone")
					resumed._sync()
					_check(not restored_person.paused and restored_person.node.position.distance_to(at)<0.001,"reopening corridor resumes the same physical journey")
					resumed.queue_free()
					saved_inside=true
		if entered and int(city.life_progress.purchases)>0: break
	_check(entered and saved_inside,"resident genuinely walks through building interior")
	_check(int(city.life_progress.purchases)>0 and int(city.bakery_supply.h2.served)>0,"finite bakery production and purchase work through arches")
	# Existing isolated right-bank household must walk around its wall to its new arch.
	var real := State.new()
	real.initialize()
	var real_life := Life.new()
	root.add_child(real_life)
	real_life.set_process(false)
	real_life.setup(real)
	var person: Dictionary={}
	for resident: Dictionary in real_life.residents:
		if resident.home_id=="h6": person=resident
	var old: Vector3=person.node.position
	_check(_road(real,[Vector2(-11,3),Vector2(12,3)]).ok,"real river bridge continues through h6")
	real_life._sync()
	_check(person.node.position==old and not person.paused,"existing resident resumes from old door without teleport")
	var traversed := false
	for tick in range(900):
		real_life._process(0.1)
		var at: Vector3=person.node.position
		if at.x>8.15 and at.x<9.85 and absf(at.z-3)<0.3: traversed=true
		_check(not real_life._attachment_crosses_wall(Vector2(at.x,at.z),Vector2(at.x,at.z)),"real resident remains outside solid room walls")
		if traversed: break
	_check(traversed,"previously isolated resident reaches and traverses new arch")
	life.queue_free()
	real_life.queue_free()
	await process_frame
	if failures.is_empty(): print("CITY_CREATION_PASSAGE PASS: %d assertions; geometry, symmetric build, identity, real arch transit, finite purchase and inside-arch checkpoint"%checks)
	else:
		for failure: String in failures: push_error(failure)
	quit(0 if failures.is_empty() else 1)
