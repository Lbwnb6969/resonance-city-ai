extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var city:=State.new()
	var house:Dictionary=city.add_house(Vector2(-20,-8));assert(house.ok)
	assert(city.set_house_role(house.house_id,"garden_cafe").ok)
	var points:Array[Vector2]=[Vector2(-25,-6),Vector2(-15,-6)]
	assert(city.add_road(points,"path").ok)
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	var id:String=house.house_id
	_check(not life.cafe.layouts[id].is_empty(),"real cafe has a published legal seating layout")
	var before:Dictionary=life.cafe_view()
	_check(before[id].afterglow_extension==30.,"dirt-road cafe publishes ordinary thirty-second afterglow")
	var source:Dictionary=city.snapshot()
	for direction:String in ["upgrade","undo"]:
		var changed:Dictionary=city.add_road(points,"avenue") if direction=="upgrade" else city.undo()
		_check(changed.ok,"actual road "+direction+" succeeds")
		life.set_budget_hold(true);_check(life.begin_budget_sync(),"changed geometry prepares an isolated route generation")
		var old_view:Dictionary=before.duplicate(true)
		var pending_save:Dictionary=city.snapshot()
		for ignored in range(20):before=life.cafe_view()
		_check(before==old_view,"pending "+direction+" keeps the last published tea rules")
		_check(pending_save==city.snapshot(),"pending status reads do not change any persisted data")
		_check(city._synergy_revision!=city.revision and city._prosperity_revision!=city.revision,"status reads do not prepare new planning or site caches on the UI thread")
		var deadline:=Time.get_ticks_msec()+10000
		while not life.poll_budget_sync(false) and Time.get_ticks_msec()<deadline:await process_frame
		_check(life.commit_budget_sync(),"latest route and cafe rules publish together")
		life.set_budget_hold(false)
		before=life.cafe_view()
		_check(before[id].afterglow_extension==(45. if direction=="upgrade" else 30.),"published "+direction+" updates actual scenic afterglow")
		_check(before[id].duration==life.cafe.DURATION*float(city.planning_bonus(id).get("cafe_duration_mult",1.)),"displayed tea duration agrees with actual simulation rules")
	_check(source.houses==city.houses and source.roads==city.roads,"undo restores the original authored houses and roads")
	life.queue_free();await process_frame
	print("CAFE_PUBLICATION ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}))
	quit(0 if failures.is_empty() else 1)
