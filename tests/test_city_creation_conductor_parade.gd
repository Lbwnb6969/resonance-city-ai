extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Music=preload("res://scripts/audio/city_creation_music.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var city:=State.new();check(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))).ok,"real earned flagship restores")
	var ids:Dictionary={}
	for house:Dictionary in city.houses:
		if house.has("signature"):ids[house.signature]=str(house.id)
	var sequence:Array[String]=[ids.music_academy,ids.bell_keep,ids.watermill]
	var stroke:Array[Vector2]=[]
	for id:String in sequence:
		var h:Dictionary=city.houses[city._house_index(id)];stroke.append(Vector2(h.origin[0],h.origin[1]))
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	check(life.ConductorParade.eligible(city),"two built landmarks enable the gesture")
	check(not life.invite_conductor_movement(ids.watermill,[ids.watermill] as Array[String],stroke).ok and life._concert.is_empty(),"one-source gesture cannot create a parade")
	var before:=int(city.life_progress.concerts)
	check(life.invite_conductor_movement(ids.watermill,sequence,stroke).ok,"actual hand order reserves real street tour")
	var music:=Music.new();music.update_city(city);music.set_concert_view(life.concert_view());music.set_concert_active(true)
	var schedule:=music._source_schedule()
	for phrase:int in range(8):check(schedule[phrase].source_id==sequence[phrase%sequence.size()] and schedule[phrase].finale==(phrase>=6),"musical phrase follows hand order while final two unite: "+str(phrase))
	for i:int in range(1600):
		if life.concert_status().phase=="playing":break
		life._process(.5)
	check(life.concert_status().phase=="playing" and life.concert_status().arrived==life.concert_status().invited,"actual audience walks to the venue before the music")
	var starts:Dictionary={}
	for resident:Dictionary in life.residents:
		if resident.has("daily_snapshot"):starts[resident.home_id]=resident.node.position
	for i:int in range(60):life._process(.1)
	var moving:=0;var valid:=true
	for resident:Dictionary in life.residents:
		if not starts.has(resident.home_id):continue
		if resident.node.position.distance_to(starts[resident.home_id])>.5:moving+=1
		var rank:int=life._concert.participants.find(str(resident.home_id))
		valid=valid and resident.node.position.distance_to(life.conductor_parade.point(life,rank).position)<.001
	check(moving>8 and valid and life.conductor_parade.lanterns.size()==starts.size(),"actual residents move in a lantern procession along the graph-sampled route")
	check(int(city.life_progress.concerts)==before,"walking never awards a premature completion")
	check(city.set_journey_checkpoint(life.checkpoint()).ok,"mid-parade checkpoint is accepted")
	var saved:=city.snapshot();var copy:=State.new()
	check(copy.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok,"actual street positions and hand stroke survive strict full precision JSON")
	var resumed:=Life.new();root.add_child(resumed);resumed.set_process(false);resumed.setup(copy)
	check(resumed._concert.get("conductor",false) and resumed._concert.phase=="playing" and resumed._concert.movement_order==sequence,"loaded parade resumes its original order and phase")
	var restored_positions:=true
	for resident:Dictionary in resumed.residents:
		if not resident.has("daily_snapshot"):continue
		var rank:int=resumed._concert.participants.find(str(resident.home_id))
		restored_positions=restored_positions and resident.node.position.distance_to(resumed.conductor_parade.point(resumed,rank).position)<.001
	check(restored_positions,"load restores real parade position without jumping to venue")
	var invalid:=saved.duplicate(true);invalid.journey_checkpoint.concert.conductor_path[0][0]=INF
	check(not copy.restore(invalid).ok,"nonfinite hand stroke is rejected atomically")
	invalid=saved.duplicate(true);invalid.journey_checkpoint.concert.movement_order[0]="h999999"
	check(not copy.restore(invalid).ok,"unknown conducting source is rejected")
	check(life.cancel_concert().ok and int(city.life_progress.concerts)==before and life.conductor_parade.lanterns.is_empty(),"cancel removes lanterns and preserves completion count")
	for i:int in range(200):
		if resumed.concert_status().phase=="idle":break
		resumed._process(.1)
	check(resumed.concert_status().phase=="idle" and int(copy.life_progress.concerts)==before+1 and resumed.conductor_parade.lanterns.is_empty(),"resumed real twenty-four-second tour completes once and releases residents")
	resumed._process(2.);check(int(copy.life_progress.concerts)==before+1,"parade completion cannot settle twice")
	var tour_points:=life.ConductorParade.street_route(life,ids.watermill,sequence).size()
	for road:Dictionary in city.roads.duplicate(true):city.remove_road(str(road.id))
	life._sync()
	check(not life.invite_conductor_movement(ids.watermill,sequence,stroke).ok and life._concert.is_empty() and int(city.life_progress.concerts)==before,"disconnected tour cannot invent a parade or award")
	var clustered:=State.new();clustered.initialize_empty()
	var offsets:Array[Vector2]=[Vector2.ZERO,Vector2(3.6,0),Vector2(0,3.6),Vector2(3.6,3.6),Vector2(7.2,0)]
	for center:Vector2 in [Vector2(-32,-32),Vector2(-14,-32),Vector2(-32,-12),Vector2(-14,-12)]:
		for offset:Vector2 in offsets:check(clustered.add_house(center+offset).ok,"build real independent five-home group")
		if clustered.houses.size()==15:check(not life.ConductorParade.eligible(clustered),"three large groups do not unlock conducting")
	check(life.ConductorParade.eligible(clustered),"four actual independent large groups enable conducting without two landmarks")
	print("CONDUCTOR_PARADE ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty(),"walking_residents":moving,"tour_points":tour_points}))
	resumed.free();music.free();life.free();quit(0 if failures.is_empty() else 1)
