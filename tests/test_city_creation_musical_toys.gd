extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Gather=preload("res://scripts/world/city_creation_solo_listeners.gd")
const Plan=preload("res://scripts/world/city_creation_musical_archway_plan.gd")
const Travel=preload("res://scripts/world/city_creation_travel.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var city:=State.new();city.initialize()
	var road:Dictionary=city.add_road([Vector2(-11,3.5),Vector2(7,3.5),Vector2(7,5.2),Vector2(9,5.2),Vector2(9,4.45)])
	check(road.ok,"public complete road crosses real river")
	var travel:=Travel.new();travel.sync(city);var before:Dictionary=city.snapshot()
	var plan:=Plan.derive(city,travel)
	check(plan.size()==1 and plan[0].wet and plan[0].banks.all(func(id):return not str(id).is_empty()),"actual wet span selects two real opposing bank sources")
	check(city.snapshot()==before,"instrument derivation is read only")
	city.remove_road(road.road_id);travel.sync(city)
	check(Plan.derive(city,travel).is_empty(),"road removal removes its derived instrument")
	city.undo();travel.sync(city);check(Plan.derive(city,travel)==plan,"Undo restores identical actual span and bank identities")
	var modern:=preload("res://tools/fixtures/city_creation_modern_fixture.gd").architecture()
	var modern_travel:=Travel.new();modern_travel.sync(modern)
	var spans:=Plan.derive(modern,modern_travel).filter(func(row):return row.kind=="skybridge")
	check(spans.size()==1 and spans[0].banks==["h1","h2"] and is_equal_approx(spans[0].y,3.43),"real highest upper span hangs strings beneath its actual floor")
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	var ids:Array[String]=[]
	for tick in range(400):
		life._tick_life(.1);ids=Gather.gather(life,"h2",life.time+12.)
		if not ids.is_empty():break
	check(not ids.is_empty(),"real unscheduled neighbors can be recruited from legal daily walks")
	var original:Dictionary={};var points:Dictionary={}
	for r:Dictionary in life.residents:
		if not r.has("solo_listen"):continue
		original[r.home_id]=[r.destination_id,r.stops.duplicate(),r.service_pending,r.dwell_id]
		points[r.home_id]=r.node.position
	var checkpoint:Dictionary={}
	for tick in range(112):
		life._tick_life(.1)
		if tick==30:checkpoint=life.checkpoint()
	var listeners:=0;var moved:=0
	for r:Dictionary in life.residents:
		if not original.has(r.home_id):continue
		check([r.destination_id,r.stops,r.service_pending,r.dwell_id]==original[r.home_id],"temporary listening preserves actual daily destinations and service: "+str(r.home_id))
		if r.node.position.distance_to(points[r.home_id])>.05:moved+=1
		if r.node.get_meta("solo_listening",false):listeners+=1
	check(moved>0 and listeners>0,"real residents move along the street and stop near the source (%d moved, %d listening)"%[moved,listeners])
	var saved:Dictionary=city.snapshot();saved.journey_checkpoint=checkpoint
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(saved))).ok,"mid-listening actual position and original trip pass cold world validation")
	var restored:=Life.new();root.add_child(restored);restored.set_process(false);restored.setup(cold)
	check(restored.checkpoint().residents==checkpoint.residents,"cold Life reconstructs original daily routes from real moved positions without transient solo state")
	Gather.clear(life)
	check(life.residents.all(func(r):return not r.has("solo_listen") and not r.node.has_meta("solo_listening")),"cancellation releases all real residents")
	for r:Dictionary in life.residents:
		if not original.has(r.home_id):continue
		check(r.route.size()>1 and not r.paused and r.destination_id==original[r.home_id][0],"original trip resumes on a rebuilt legal route: "+str(r.home_id))
	Gather.gather(life,"h2",life.time+.2)
	for tick in range(4):life._tick_life(.1)
	check(life.residents.all(func(r):return not r.has("solo_listen")),"transport-length expiry releases temporary listening")
	life.queue_free();restored.queue_free();await process_frame
	print("MUSICAL_TOYS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
