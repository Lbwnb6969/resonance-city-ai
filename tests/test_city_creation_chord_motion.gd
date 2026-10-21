extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Fixture=preload("res://tools/fixtures/city_creation_chord_fixture.gd")
const Motion=preload("res://scripts/world/city_creation_citizen_motion.gd")
const Schedule=preload("res://scripts/world/city_creation_citizen_schedule.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _life(city:RefCounted)->Node3D:
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);return life
func _compare(city:RefCounted,kind:String)->void:
	var hidden:=State.new();_check(hidden.restore(city.snapshot()).ok,"real bonus city restores for independent simulation: "+kind)
	var full:=_life(city);var lod:=_life(hidden);var camera:=Camera3D.new();root.add_child(camera)
	camera.projection=Camera3D.PROJECTION_ORTHOGONAL;camera.size=8.;camera.position=Vector3(35,30,35);camera.look_at(Vector3(35,0,30));lod.view_camera=camera
	var gap:=0.;var work_gap:=0.;var same:=true;var first_gap:Dictionary={}
	for i in range(2400):
		if kind=="highland_fifth" and i==600:
			_check(city.remove_district("d1").ok and hidden.remove_district("d1").ok,"real district removal disables walking bonus without changing roads")
		if kind=="highland_fifth" and i==800:_check(city.undo().ok and hidden.undo().ok,"undo restores the exact highland district")
		full._process(.05);lod._process(.05)
		for person:Dictionary in full.residents:
			var other:Dictionary=lod.cafe._resident(str(person.home_id));var difference:float=full.citizen_position(person).distance_to(lod.citizen_position(other));gap=maxf(gap,difference)
			if difference>.03 and first_gap.is_empty():first_gap={"tick":i,"home":person.home_id,"full":full.citizen_position(person),"hidden":lod.citizen_position(other),"full_index":person.index,"hidden_index":other.index,"full_speed":person.get("planning_walking_mult",1.),"hidden_speed":other.get("planning_walking_mult",1.)}
		for pair:Array in [[full.bakery.workers,lod.bakery.workers],[full.workshop.workers,lod.workshop.workers]]:
			for j in range(pair[0].size()):
				var a:Dictionary=pair[0][j];var b:Dictionary=pair[1][j]
				gap=maxf(gap,a.node.position.distance_to(lod.worker_lod.position(b)));work_gap=maxf(work_gap,absf(float(a.elapsed)-lod.worker_lod.elapsed(b)))
				same=same and a.phase==b.phase and a.get("target_id","")==b.get("target_id","")
		if kind=="highland_fifth" and i in [601,801]:
			var wanted:=1. if i==601 else 1.25*1.1
			_check(is_equal_approx(float(full.cafe._resident("h1").get("planning_walking_mult",0.)),wanted) and is_equal_approx(float(lod.cafe._resident("h1").get("planning_walking_mult",0.)),wanted),"network reuse refreshes the derived cohort walking speed")
	_check(same and gap<.03 and work_gap<.003,"two minutes retain physical routes and accelerated job progress: "+kind)
	_check(city.bakery_supply==hidden.bakery_supply and city.workshop_supply==hidden.workshop_supply and city.workshop_yield_remainder==hidden.workshop_yield_remainder and city.house_improvements==hidden.house_improvements and city.cafe_progress==hidden.cafe_progress,"bonus production installation and real tea settle identically: "+kind)
	_check(int(lod.worker_lod.stats.movement_sleeps)>0 and int(lod.worker_lod.stats.work_sleeps)>0,"actual bonus workers use deadline sleep: "+kind)
	print("CHORD_MOTION_CASE ",JSON.stringify({"kind":kind,"same":same,"first_gap":first_gap,"max_position_gap":gap,"max_work_gap":work_gap,"stats":lod.worker_lod.stats}))
	full.queue_free();lod.queue_free();camera.queue_free();await process_frame
func _schedule()->void:
	var clock:=Life.new();var motion:=Motion.new(Vector3.ZERO,0.);var route:Array[Vector3]=[Vector3(10,0,0)]
	motion.advance(route,0,0.);motion.defer(clock,1.)
	var schedule:=Schedule.new();var first:Dictionary={"home_id":"h1"};var second:Dictionary={"home_id":"h2"};var residents:Array[Dictionary]=[first,second]
	schedule.reset(residents);schedule.take(0.);schedule.sleep(first,motion);schedule.retain(second)
	clock.time=2.;schedule.wake(first);motion.settle();motion.defer(clock,.5)
	var batch:Array[Dictionary]=schedule.take(2.)
	_check(batch==[first,second],"a woken earlier resident keeps its place ahead of competing awake services")
	schedule.sleep(first,motion);schedule.retain(second);clock.time=10.;batch=schedule.take(10.)
	_check(batch==[second],"retiming the same motion invalidates its old heap deadline")
	schedule.retain(second);clock.time=18.;batch=schedule.take(18.)
	_check(batch==[first,second],"only the new deadline wakes the sleeper and preserves service order")
	clock.free()
func _run()->void:
	_schedule()
	var city:RefCounted=Fixture.pastoral();_check(city.set_house_role("h3","workshop").ok,"real pastoral wood worker shares the recipe")
	await _compare(city,"pastoral_triad")
	city=Fixture.highland();_check(city.set_house_role("h2","bakery").ok,"real highland baker works below the bell")
	var points:Array[Vector2]=[Vector2(-28,3.55),Vector2(-16,3.55)];_check(city.add_road(points,"path","none").ok,"highland homes receive real south-door street")
	points=[Vector2(-28,0),Vector2(-28,3.55)];_check(city.add_road(points,"path","none").ok,"south-door street joins the original stair road")
	await _compare(city,"highland_fifth")
	await _compare(Fixture.renaissance(),"renaissance_fugue")
	print("CHORD_MOTION ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
