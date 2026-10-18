extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Legacy=preload("res://tests/test_city_creation_eras.gd")
const Signatures=preload("res://tests/test_city_creation_signatures.gd")
const Field=preload("res://scripts/audio/city_creation_acoustic_field.gd")
const Motion=preload("res://scripts/world/city_creation_citizen_motion.gd")
var checks:=0
var failures: Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var city:=State.new();city.initialize()
	for i in range(23):assert(city.produce_bread("h2",1) and city.serve_bread("h2","h1"))
	city.Signatures.refresh(city)
	_check(not city.signature_unlocks.has("watermill"),"twenty-three actual loaves do not unlock mill")
	assert(city.produce_bread("h2",1));city.Signatures.refresh(city)
	_check(city.signature_unlocks.has("watermill"),"twenty-four actual loaves unlock mill")
	city=Legacy.fixture();city.set_house_role("h4","bakery");city.set_house_role("h3","venue")
	assert(city.produce_bread("h4",2) and city.serve_bread("h4","h1"))
	var connected: Dictionary={"h1":true,"h2":true,"h3":true,"h4":true}
	city.refresh_quality(connected)
	_check(city.level_tier("h1")==2 and is_equal_approx(city.walking_multiplier("h1"),1.08) and city.walking_multiplier("h2")==1.,"only genuinely fed household gets eight percent walking boost")
	var walkers:=Life.new();root.add_child(walkers);walkers.set_process(false);walkers.setup(city)
	var person: Dictionary={}
	for resident: Dictionary in walkers.residents:
		if resident.home_id=="h1":person=resident;break
	person.wait=0.;person.paused=false;person.index=0
	var start: Vector3=person.node.position
	var route: Array[Vector3]=[start+Vector3(0,0,2.)];person.route=route
	walkers._process(.1)
	_check(is_equal_approx(Vector2(person.node.position.x-start.x,person.node.position.z-start.z).length(),.083*1.08),"visible fed resident actually walks eight percent farther")
	var camera:=Camera3D.new();root.add_child(camera);camera.projection=Camera3D.PROJECTION_ORTHOGONAL;camera.size=9.;camera.position=Vector3(35,30,35);camera.look_at(Vector3(35,0,30));walkers.view_camera=camera
	var motion:=Motion.new(person.node.position,person.node.rotation.y);person.offscreen_motion=motion
	route=[person.node.position+Vector3(0,0,2.)];person.route=route;person.index=0;motion.advance(route,0,0.)
	var before_motion:=motion.progress
	walkers._process(.1)
	_check(is_equal_approx(motion.progress-before_motion,.083*1.08),"hidden scalar resident gets the same earned walking boost")
	walkers.free();camera.free()
	assert(city.produce_craft("h2",1) and city.reserve_craft("h2","h1","h1","art") and city.complete_craft("h2","h1","h1"))
	city.record_concert_completion("h3");city.record_concert_participants("h3",["h1"],false)
	city.refresh_quality(connected)
	_check(city.level_tier("h1")==4 and city.life_progress.tea_parties==0 and city.culture_level("h1")==1,"real delivered gallery art plus stone street replaces tea for tier four")
	city.record_concert_completion("h3");city.record_concert_participants("h3",["h1"],true);city.refresh_quality(connected)
	_check(city.level_tier("h1")==4,"completed relay without same-district era building cannot promote to five")
	var points: Array[Vector2]=[Vector2(-14,-2),Vector2(-10,-2)]
	var district: Dictionary=city.add_district(points,3.6,"warm")
	city.refresh_quality(connected)
	_check(city.level_tier("h1")==5 and city.building_quality.h1.prestige,"actual same-district atelier completes tier-five context without extra tea or gifts")
	city.grant_resonance_afterglow(["h1","h4"],60.,.25)
	_check(is_equal_approx(city.afterglow_remaining("h1"),119.75) and is_equal_approx(city.afterglow_remaining("h4"),59.75),"new tier-five glow doubles duration and ages actual completion remainder once")
	city.grant_resonance_afterglow(["h1"],90.)
	var saved: Dictionary=city.snapshot();var loaded:=State.new()
	_check(saved.schema==17 and loaded.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok and loaded.afterglow_remaining("h1")==180.,"gallery-only tier five and long glow roundtrip with explicit schema seventeen history")
	city.remove_district(district.district_id);city.refresh_quality(connected)
	_check(city.level_tier("h1")==5 and city._validate_snapshot(city.snapshot()).ok,"removing earned district never demotes home or invalidates saved history")
	var bad: Dictionary=saved.duplicate(true);bad.building_quality.h1.prestige=false
	_check(not loaded.restore(bad).ok,"new-format tier five requires persisted earned district context")
	bad=saved.duplicate(true);bad.schema=16
	_check(not loaded.restore(bad).ok,"old schema cannot silently carry new quality evidence")
	bad=saved.duplicate(true);bad.resonance_afterglow.h4=300.
	_check(not loaded.restore(bad).ok,"ordinary lower-tier home cannot forge doubled glow limit")
	# The previous four-field format retains earned quality after district edits.
	var flags: Dictionary={"food":true,"craft":true,"concert":true,"tea":true,"culture":true,"relay":true}
	var legacy: Dictionary={"schema":14,"house_concerts":{"h1":{"concerts":1,"relays":1}},"life_progress":{"concerts":1},"building_quality":{"h1":{"level_tier":5,"source_id":"h1","street":true,"amenity":true}},"cafe_credits":{"h1":{"earned":1,"spent":1}},"house_improvements":{"h1":1},"house_culture":{"h1":1}}
	_check(city.Quality.validate(city,legacy,{"house":8}).ok,"pre-seventeen four-field tier-five service rights remain valid")
	_check(city.Quality.eligible(flags,true,true,false)==4 and city.Quality.eligible(flags,true,true,true)==5,"new promotion explicitly requires prestige even with all old services")
	city=Signatures.ordinary_city()
	assert(city.add_cell("h7",0,0,1).ok and city.set_house_role("h7","bakery").ok)
	points=[Vector2(-20,-8.45),Vector2(-11,-8.45)];assert(city.add_road(points).ok)
	for i in range(24):assert(city.produce_bread("h2",1) and city.serve_bread("h2","h1"))
	city.Signatures.refresh(city)
	var base_speed: float=city.site_production_multiplier("h7")
	var site: Vector2=Signatures.mill_site(city)
	var mill: Dictionary=city.place_signature("watermill",site)
	_check(mill.ok and city.houses[-1].cells.size()==8 and city.bakery_batch_size("h7")==3 and is_equal_approx(city.site_production_multiplier("h7"),base_speed/0.8),"new two-storey mill grants exact third loaf and twenty percent shorter baking")
	# Old four-ground-cell mill keeps its structure when opened and saved again.
	city.houses[-1].cells=city.houses[-1].cells.filter(func(cell:Dictionary)->bool:return int(cell.level)==0)
	_check(State.new().restore(city.snapshot()).ok,"old single-storey mill remains a valid authored structure")
	var keep: Dictionary=city.place_signature("bell_keep",Vector2(-18,0))
	_check(keep.ok and is_equal_approx(city.walking_multiplier("h1"),1.15),"global tower walking bonus applies without inventing household quality")
	var field:=Field.new();field.set_view(Vector2.ZERO,16);field.radius_bonus=city.signature_bonuses().focus_radius
	field.evaluate({"edge":{"position":Vector2(13,0),"district_id":""}},[])
	_check(field.radius==15. and field.focus_weight("edge")>0.,"tower adds three real metres beyond original twelve-metre focus")
	city.remove_house(keep.house_id);field.radius_bonus=city.signature_bonuses().focus_radius;field.evaluate({"edge":{"position":Vector2(13,0),"district_id":""}},[])
	_check(field.radius==12. and field.focus_weight("edge")==0.,"tower removal restores original acoustic boundary")
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	var worker: Dictionary={}
	for baker: Dictionary in life.bakery.workers:
		if baker.bakery_id=="h7":worker=baker;break
	for i in range(3000):
		if worker.phase=="baking":break
		life._process(.1)
	_check(worker.phase=="baking" and worker.elapsed==0.,"actual baker reaches oven before shortened-bake check")
	var produced: int=city.bakery_status("h7").produced
	var required: float=6./city.site_production_multiplier("h7")
	life.bakery._bake(worker,required-.01)
	_check(city.bakery_status("h7").produced==produced,"shortened bake cannot produce before exact duration")
	life.bakery._bake(worker,.01)
	_check(city.bakery_status("h7").produced==produced+3,"attended oven produces exact augmented batch at shortened boundary")
	life.free()
	city=Legacy.fixture()
	points=[Vector2(-14,-2)];var a: Dictionary=city.add_district(points,3.6,"warm")
	points=[Vector2(-6,-2)];var b: Dictionary=city.add_district(points,3.6,"deep")
	city.record_district_answer(a.district_id,b.district_id)
	var academy: Dictionary=city.place_signature("music_academy",Vector2(-18,8))
	assert(academy.ok)
	city.set_house_role("h3","venue")
	var edge: Dictionary=city.add_house(Vector2(20,8))
	var outside: Dictionary=city.add_house(Vector2(24,8))
	assert(edge.ok and outside.ok)
	points=[Vector2(-14,0),Vector2(-14,11.35)];assert(city.add_road(points).ok)
	points=[Vector2(-18,11.35),Vector2(26,11.35)];assert(city.add_road(points).ok)
	for x: float in [20.,24.]:
		points=[Vector2(x,11.35),Vector2(x,9.55)];assert(city.add_road(points).ok)
	life=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	var invited: Dictionary=life.invite_concert("h3")
	_check(invited.ok and not life._concert.participants.has(edge.house_id) and not life._concert.participants.has(outside.house_id),"ordinary venue really limits invitations to twenty-two metres")
	life.cancel_concert();invited=life.invite_concert(academy.house_id)
	_check(invited.ok and life._concert.participants.has(edge.house_id) and not life._concert.participants.has(outside.house_id),"academy includes actual connected home at exactly thirty-eight metres and excludes farther home")
	_check(life.relay_status().active and life.relay_status().venue_ids.has("h3") and city.set_journey_checkpoint(life.checkpoint()).ok and State.new().restore(city.snapshot()).ok,"one academy invitation persists real automatic relay without claiming completed performance")
	life.free()
	print("PHASE_SEVEN ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
