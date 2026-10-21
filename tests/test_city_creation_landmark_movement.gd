extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Music=preload("res://scripts/audio/city_creation_music.gd")
var checks:=0
var failures:Array[String]=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var city:=State.new()
	check(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))).ok,"earned six-landmark city restores")
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	var music:=Music.new();music.update_city(city)
	var signatures:Dictionary={}
	for house:Dictionary in city.houses:
		if house.has("signature"):signatures[house.signature]=str(house.id)
	check(signatures.size()==6,"fixture contains all six actual landmark identities")
	for kind:String in State.Signatures.IDS:
		var id:String=signatures[kind];var original_role:=str(city.houses[city._house_index(id)].role)
		var before:=int(city.life_progress.concerts)
		var invited:Dictionary=life.invite_landmark_movement(id)
		check(invited.ok,"actual invitation from "+kind+": "+str(invited.get("message","")))
		if not invited.ok:continue
		check(city.houses[city._house_index(id)].role==original_role,"landmark retains its daily job: "+kind)
		check(life._concert.landmark_movement and not life._concert.movement_order.is_empty() and life.concert_status().duration==24.,"real bounded movement is reserved: "+kind)
		music.set_concert_view(life.concert_view());music.set_concert_active(true)
		var schedule:=music._source_schedule()
		check(schedule.size()==8 and schedule[6].finale and schedule[7].finale and not schedule[5].finale,"last two shared phrases unite the city: "+kind)
		check(schedule.slice(0,6).all(func(row):return row.source_id in life._concert.movement_order),"opening phrases use real formed-cluster sources: "+kind)
		var saved_checkpoint:Dictionary=life.checkpoint()
		check(city.set_journey_checkpoint(saved_checkpoint).ok,"checkpoint records actual audience journey: "+kind)
		var saved:=city.snapshot();var copy:=State.new();var loaded:Dictionary=copy.restore(saved)
		check(loaded.ok and saved.schema==19,"new movement checkpoint round trips: "+kind+": "+str(loaded))
		if loaded.ok:
			var resumed:=Life.new();root.add_child(resumed);resumed.set_process(false);resumed.setup(copy)
			check(resumed._concert.get("landmark_movement",false) and resumed._concert.movement_order==life._concert.movement_order,"restored daily-role landmark resumes movement: "+kind)
			resumed.free()
		var invalid:=saved.duplicate(true);invalid.journey_checkpoint.concert.venue_id=str(city.houses[0].id)
		if city.houses[0].has("signature"):
			for house:Dictionary in city.houses:
				if not house.has("signature"):invalid.journey_checkpoint.concert.venue_id=house.id;break
		check(not copy.restore(invalid).ok,"ordinary home cannot impersonate a landmark movement")
		check(life.cancel_concert().ok and int(city.life_progress.concerts)==before,"cancellation grants no completion: "+kind)
		city.set_journey_checkpoint(life.checkpoint())
	# Complete a real gathering and 24s performance, never advance rewards directly.
	var id:String=signatures.watermill;var before:=int(city.life_progress.concerts)
	check(life.invite_landmark_movement(id).ok,"watermill starts a genuine finishable movement")
	var steps:=0
	while life.concert_status().phase!="idle" and steps<1600:
		life._process(.5);steps+=1
	check(life.concert_status().phase=="idle" and int(city.life_progress.concerts)==before+1,"actual audience arrives and movement completes exactly once: "+str([before,city.life_progress.concerts,life.concert_status()]))
	life._process(2.)
	check(int(city.life_progress.concerts)==before+1,"completed movement never settles twice")
	print("LANDMARK_MOVEMENT ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty(),"simulated_steps":steps}))
	music.free();life.free();quit(0 if failures.is_empty() else 1)
