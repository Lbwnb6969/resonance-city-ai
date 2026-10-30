extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
var checks:=0
var failures: Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _until(life: Node3D,condition: Callable,seconds: float=600.0)->bool:
	for i in range(ceili(seconds/.1)):
		if condition.call():return true
		life._process(.1)
	return false
func _saved_equal(a: Variant,b: Variant)->bool:
	if a is Dictionary and b is Dictionary:
		if a.size()!=b.size():return false
		for key: Variant in a:
			if not b.has(key) or not _saved_equal(a[key],b[key]):return false
		return true
	if a is Array and b is Array:
		if a.size()!=b.size():return false
		for i in range(a.size()):
			if not _saved_equal(a[i],b[i]):return false
		return true
	# JSON parses 15.299999999999999 as 15.3; retain sub-picometre fidelity.
	if a is float and b is float:return absf(a-b)<1e-12
	return a==b
static func ordinary_city()->RefCounted:
	var city:=State.new();city.initialize()
	for p: Vector2 in [Vector2(-20,-10),Vector2(-24,-10),Vector2(-20,10),Vector2(-24,10)]:city.add_house(p)
	var points: Array[Vector2]=[Vector2(-11,9),Vector2(15,9)]
	city.add_road(points)
	return city
static func mill_site(city: RefCounted)->Vector2:
	for z: float in [-15.,-13.,13.,16.,-18.]:
		for i in range(40):
			var at:=Vector2(-10.+i*.25,z)
			if city.preview_signature("watermill",at).ok:return at
	return Vector2.INF
func _run()->void:
	var city:=State.new();city.initialize()
	var before: Dictionary=city.snapshot()
	_check(not city.preview_signature("bell_keep",Vector2(-18,0)).ok and city.snapshot()==before,"locked placement preview neither mutates state nor issues IDs")
	city=ordinary_city();city.Signatures.refresh(city)
	_check(city.signature_unlocks==["bell_keep"] and city.houses.size()==10,"ten actual ordinary houses and authored bridge unlock the bell keep")
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	_check(_until(life,func():return int(city.bakery_status("h2").produced)>=24),"real attended bakery and actual purchases reach twenty-four-loaf milestone")
	life._refresh_quality()
	_check(city.signature_unlocks.has("watermill") and not city.signature_unlocks.has("music_academy"),"bread milestone unlocks mill without inventing academy question-and-answer")
	_check(life.invite_concert("h4").ok and _until(life,func():return int(city.life_progress.concerts)>0),"physical audience and completed performance earn the first journal chapter")
	city.refresh_growth()
	var points: Array[Vector2]=[Vector2(-8,-6)]
	var from: Dictionary=city.add_district(points,4.,"warm")
	points=[Vector2(-2.4,1)]
	var to: Dictionary=city.add_district(points,4.,"deep")
	city.link_districts(from.district_id,to.district_id)
	for at_value: Vector2 in [Vector2(-32,-20),Vector2(-28,-20),Vector2(-24,-20),Vector2(-20,-20)]:
		assert(city.add_house(at_value).ok)
	assert(city.set_house_role("h4","garden_cafe").ok);life._sync()
	_check(_until(life,func():return int(city.life_progress.tea_parties)>0) and city.houses.size()==14,"fourteen houses and actual residents complete the new tea milestone")
	_check(not city.era_unlocks.has("renaissance") and not city.signature_unlocks.has("music_academy"),"mere manual link after fourteen houses and tea is not an answered phrase")
	_check(city.record_district_answer(from.district_id,to.district_id) and not city.record_district_answer(to.district_id,from.district_id) and city.era_unlocks.has("renaissance") and city.signature_unlocks.has("music_academy"),"completed pair event records two unique districts once and unlocks era and academy")
	before=city.snapshot()
	_check(city.preview_signature("bell_keep",Vector2(-18,0)).ok and city.snapshot()==before,"unlocked full landmark preview is read-only")
	var keep: Dictionary=city.place_signature("bell_keep",Vector2(-18,0))
	_check(keep.ok and city.signature_bonuses().walking==1.15 and city.houses[-1].cells.size()==4,"unique four-storey bell keep applies exact global walking bonus")
	life._sync()
	var walker: Dictionary=life.residents[0]
	walker.wait=0.0;walker.paused=false;walker.index=0
	var walking_route: Array[Vector3]=[walker.node.position+Vector3(0,0,2)]
	walker.route=walking_route
	var start: Vector3=walker.node.position
	life._process(.1)
	var boosted: float=Vector2(walker.node.position.x,walker.node.position.z).distance_to(Vector2(start.x,start.z))
	_check(is_equal_approx(boosted,.083*city.walking_multiplier(str(walker.home_id))),"placed bell keep stacks fifteen percent with actual earned household movement")
	_check(not city.place_signature("bell_keep",Vector2(-26,0)).ok and not city.add_cell(keep.house_id,0,0,4).ok and not city.set_house_role(keep.house_id,"bakery").ok,"duplicate landmark, partial growth and role conversion are rejected")
	var cell_ids: Array=[]
	for cell: Dictionary in city.houses[-1].cells:cell_ids.append(cell.id)
	var moved: Dictionary=city.place_signature("bell_keep",Vector2(-22,0),keep.house_id)
	var moved_ids: Array=[]
	for cell: Dictionary in city.houses[-1].cells:moved_ids.append(cell.id)
	_check(moved.ok and moved_ids==cell_ids and str(city.houses[-1].id)==str(keep.house_id),"moving landmark preserves exact house and room IDs")
	city.undo()
	_check(city.houses[-1].origin==[-18.,0.] and city.signature_bonuses().walking==1.15,"moving has a normal undo transaction without losing earned rights")
	city.remove_cell(keep.house_id,cell_ids[0])
	_check(city._house_index(keep.house_id)<0 and city.signature_bonuses().walking==1.0 and city.signature_unlocks.has("bell_keep"),"module removal recycles whole fixed landmark, removes buff and preserves unlock")
	life._sync();walker=life.residents[0]
	walker.wait=0.0;walker.paused=false;walker.index=0
	walking_route=[walker.node.position+Vector3(0,0,2)];walker.route=walking_route
	start=walker.node.position;life._process(.1)
	var ordinary: float=Vector2(walker.node.position.x,walker.node.position.z).distance_to(Vector2(start.x,start.z))
	_check(is_equal_approx(ordinary,.083*city.walking_multiplier(str(walker.home_id))),"recycling the keep removes its bonus and preserves earned household movement")
	city.undo()
	_check(city._house_index(keep.house_id)>=0 and city.signature_bonuses().walking==1.15,"undo recycle restores landmark and real buff")
	var at:=mill_site(city)
	_check(at!=Vector2.INF and not city.preview_signature("watermill",Vector2(-30,20)).ok,"wheel requires actual nearby water instead of a decorative inland mill")
	var batch: int=city.bakery_batch_size("h2")
	var mill: Dictionary=city.place_signature("watermill",at)
	_check(mill.ok and city.bakery_batch_size("h2")==batch+1 and city.houses[-1].role=="bakery","placed mill is a real bakery and grants every existing bakery one extra loaf per batch")
	city.remove_house(mill.house_id)
	_check(city.bakery_batch_size("h2")==batch,"removing mill immediately removes its flour bonus")
	city.undo()
	var academy: Dictionary=city.place_signature("music_academy",Vector2(18,-8))
	_check(academy.ok and city.concert_radius(academy.house_id)==38.0 and city.concert_radius(academy.house_id)!=city.concert_radius("h4"),"free academy is a real venue with distinct thirty-eight meter performance radius")
	_check(city.set_journey_checkpoint(life.checkpoint()).ok,"landmark edits preserve actual resident checkpoint references")
	# Compare saved JSON: live cafe checkpoint keys use StringName, JSON uses String.
	var snapshot: Dictionary=city.snapshot();var copy:=State.new()
	var saved_json:=JSON.stringify(snapshot,"",true,true)
	var loaded: Dictionary=copy.restore(JSON.parse_string(saved_json))
	_check(snapshot.schema==city.PERSONALIZATION_SCHEMA and snapshot.has("harmony_journey") and loaded.ok and _saved_equal(copy.snapshot(),snapshot),"three placed landmarks, actual journey ledger and all persistent evidence roundtrip within JSON numeric precision: "+str(loaded))
	var loaded_before: Dictionary=copy.snapshot()
	var bad: Dictionary=snapshot.duplicate(true);bad.houses[-1].signature="bell_keep"
	_check(not copy.restore(bad).ok and copy.snapshot()==loaded_before,"duplicate forged landmark is rejected atomically")
	bad=snapshot.duplicate(true);bad.signature_unlocks.erase("music_academy")
	_check(not copy.restore(bad).ok,"unearned landmark placement cannot load")
	bad=snapshot.duplicate(true);bad.district_answers.clear()
	_check(not copy.restore(bad).ok,"academy requires persisted completed-district-answer evidence")
	life.free()
	print("CITY_CREATION_SIGNATURES ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"mill_site":at}))
	quit(0 if failures.is_empty() else 1)
