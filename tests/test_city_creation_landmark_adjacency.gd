extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Fixture=preload("res://tools/fixtures/city_creation_landmark_adjacency_fixture.gd")
const Ordinary=preload("res://tests/test_city_creation_signatures.gd")
const Examples=preload("res://scripts/world/city_creation_examples.gd")
const Meadow=preload("res://scripts/visual/city_creation_meadow.gd")
var checks:=0
var failures:Array[String]=[]
var base:Dictionary
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _city()->RefCounted:
	var city:=State.new();assert(city.restore(base).ok);return city
func _life(city:RefCounted)->Node3D:
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);return life
func _roundtrip(city:RefCounted,label:String)->RefCounted:
	var restored:=State.new();var result:Dictionary=restored.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true)))
	_check(result.ok,label+": "+str(result.get("message","")));return restored
func _mill()->void:
	var city:=_city();var at:=Ordinary.mill_site(city);var placed:Dictionary=city.place_signature("watermill",at)
	_check(placed.ok,"earned mill stands on its actual river bank")
	if not placed.ok:return
	var mill:=str(placed.house_id);var batch:int=city.bakery_batch_size(mill);var purchases:=int(city.life_progress.purchases)
	_check(city.produce_bread(mill,batch) and city.produce_bread(mill,batch) and city.landmark_bread[mill].gifts.is_empty(),"first two actual batches reserve no gifts")
	var restored:=_roundtrip(city,"two batches persist before the gift deadline")
	_check(city.produce_bread(mill,batch) and restored.produce_bread(mill,batch) and city.landmark_bread==restored.landmark_bread,"third batch chooses the same needy homes after reload")
	var row:Dictionary=city.landmark_bread[mill];var gifts:=0
	for id:String in row.gifts:gifts+=int(row.gifts[id]);_check(city.has_cafe_credit(id),"actual gift grants this home's bread credit: "+id)
	_check(gifts==2 and city.bakery_status(mill).stock==batch*3-2 and city.bakery_status(mill).served==2 and int(city.life_progress.purchases)==purchases,"exactly two real loaves leave stock without fabricating purchases")
	var saved:Dictionary=city.snapshot();_check(int(saved.schema)==18,"optional mill ledger upgrades only the participating work to Schema18")
	_roundtrip(city,"gift receipts and conserved loaves load normally")
	var bad:Dictionary=saved.duplicate(true);bad.schema=17;_check(not restored.restore(bad).ok,"legacy schema cannot contain gift receipts")
	bad=saved.duplicate(true);bad.landmark_bread[mill].batches=2;_check(not restored.restore(bad).ok,"gift cannot precede the third actual batch")
	bad=saved.duplicate(true);bad.landmark_bread[mill].gifts["h999999"]=1;_check(not restored.restore(bad).ok,"gift cannot target an unissued household")
	bad=saved.duplicate(true);bad.landmark_bread[mill].gifts[row.gifts.keys()[0]]=99;_check(not restored.restore(bad).ok,"forged extra gifts fail conservation")
	bad=saved.duplicate(true);bad.bakery_supply=[];_check(not restored.restore(bad).ok,"malformed gift inventory is rejected without executing it")
	_check(city.remove_house(mill).ok,"mill can be recycled after delivery")
	_roundtrip(city,"historical gift receipts survive source removal")
	_check(city.undo().ok and city.landmark_bread[mill].batches==3 and city.bakery_status(mill).stock==batch*3-2,"undo restores geometry without minting or retracting already delivered bread")
	city.initialize();_check(city.landmark_bread.is_empty() and not city.snapshot().has("landmark_bread"),"new town clears the optional ledger and retains its old schema")
func _auras()->void:
	var city:=_city();var keep:Dictionary=city.place_signature("bell_keep",Vector2(-23,0))
	_check(keep.ok and is_equal_approx(city.installation_multiplier("h3","h1"),1.25),"real woodshop within sixteen metres installs twenty five percent faster")
	_check(is_equal_approx(city.artisan_walking_multiplier("h1","h3","h1","returning"),city.walking_multiplier("h1")*1.25) and is_equal_approx(city.artisan_walking_multiplier("h1","h3","h1","to_workshop"),city.walking_multiplier("h1")),"settlement return accelerates on its real route; commute retains the global walking aura")
	_check(city.place_signature("bell_keep",Vector2(-26,0),str(keep.house_id)).ok and is_equal_approx(city.installation_multiplier("h3","h1"),1.),"moving keep beyond the circle withdraws the delivery bonus")
	_check(city.undo().ok and is_equal_approx(city.installation_multiplier("h3","h1"),1.25),"undo restores the local delivery circle")
	_check(city.place_signature("bell_keep",Vector2(-24,0),str(keep.house_id)).ok and is_equal_approx(city.installation_multiplier("h3","h1"),1.25),"workshop exactly on the sixteen metre boundary receives the aura")
	_check(city.place_signature("bell_keep",Vector2(-24.01,0),str(keep.house_id)).ok and is_equal_approx(city.installation_multiplier("h3","h1"),1.),"workshop just outside sixteen metres receives no delivery aura")
	city=_city();var ordinary_batch:int=city.workshop_batch_size("h3");var academy:Dictionary=city.place_signature("music_academy",Vector2(-18,15))
	var artist:Dictionary=city.add_house(Vector2(-15,0));_check(artist.ok and city.set_house_role(str(artist.house_id),"atelier").ok,"earned renaissance artist builds through normal state APIs")
	_check(city.workshop_batch_size("h3")==ordinary_batch and city.workshop_batch_size(str(artist.house_id))==1,"unpainted academy shares no empty pseudo-district with other unpainted workshops")
	var points:Array[Vector2]=[Vector2(-18,15),Vector2(-15,0),Vector2(-8,0)];var district:Dictionary=city.add_district(points,4.,"weave")
	_check(academy.ok and district.ok and city.workshop_batch_size("h3")==ordinary_batch*2 and city.workshop_batch_size(str(artist.house_id))==2,"academy doubles real wood and art batches in its nonempty district")
	_check(city.bakery_batch_size("h2")==_city().bakery_batch_size("h2"),"academy leaves bakery batches unchanged")
	_check(city.produce_craft("h3",city.workshop_batch_size("h3")) and city.workshop_status("h3").stock==ordinary_batch*2,"real production transaction yields two batches of conserved wooden goods")
	_check(city.remove_district(str(district.district_id)).ok and city.workshop_batch_size("h3")==ordinary_batch and city.workshop_status("h3").stock==ordinary_batch*2,"district erasure withdraws future doubling while preserving already made goods")
	_check(city.undo().ok and city.workshop_batch_size("h3")==ordinary_batch*2,"undo restores academy district membership")
	_roundtrip(city,"academy batches and real inventory roundtrip")
	city=_city();var palace:Dictionary=city.place_signature("botanical_palace",Vector2(-15.5,-2))
	if not palace.ok:_check(false,"palace fixture placement: "+str(palace));return
	_check(palace.ok and bool(city.planning_bonus("h3").natural) and bool(city.site_blessing("h3").blessed) and bool(city.Quality.amenity(city,city.houses[city._house_index("h1")])),"palace supplies actual workshop forest blessing and household natural amenity")
	_check(is_equal_approx(float(city.planning_bonus("h4").cafe_duration_mult),1./1.4) and not bool(city.planning_bonus("h6").natural),"near cafe accelerates real tea forty percent and the far river bank receives no local nature aura")
	_check(city.remove_house(str(palace.house_id)).ok and not bool(city.planning_bonus("h3").natural) and is_equal_approx(float(city.planning_bonus("h4").cafe_duration_mult),1.),"palace recycling removes future local conditions and restores six second tea")
	_check(city.undo().ok and bool(city.planning_bonus("h3").natural),"palace undo restores the complete local nature circle")
	_check(city.place_signature("botanical_palace",Vector2(-22,-1.8),str(palace.house_id)).ok and bool(city.planning_bonus("h3").natural),"natural aura includes the actual flower circle's fourteen metre boundary")
	_check(city.place_signature("botanical_palace",Vector2(-22.01,-1.8),str(palace.house_id)).ok and not bool(city.planning_bonus("h3").natural),"natural aura ends just beyond the fourteen metre boundary")
func _tea()->void:
	var city:=_city();var palace:Dictionary=city.place_signature("botanical_palace",Vector2(-15.5,-2));_check(palace.ok,"real palace prepares the neighboring cafe")
	var life:=_life(city);var ready:=false
	for i in range(12000):
		if life.cafe.status("h4").phase=="tea":ready=true;break
		life._process(.05)
	_check(ready and is_equal_approx(float(life.cafe.status("h4").duration),6./1.4),"actual walk and seated party begin a forty-percent-faster tea")
	if ready:
		life.cafe.tick(3./1.4)
		_check(absf(float(life.cafe.groups.h4.elapsed)-3.)<.00001 and absf(float(life.cafe.status("h4").elapsed)-3./1.4)<.00001,"half-time keeps the existing six-unit normalized saved progress")
		_check(city.set_journey_checkpoint(life.checkpoint()).ok,"accelerated seated party checkpoints through the existing journey format")
		var restored:=_roundtrip(city,"half-finished accelerated tea reloads")
		var resumed:=_life(restored);var before:=int(restored.life_progress.tea_parties)
		resumed.cafe.tick(3./1.4-.01);_check(int(restored.life_progress.tea_parties)==before,"reloaded tea does not complete before its remaining real time")
		resumed.cafe.tick(.011);_check(int(restored.life_progress.tea_parties)==before+1,"remaining half of the accelerated duration finish the actual tea exactly once")
		resumed.free()
	life.free()
func _motion()->void:
	var city:=_city();var ids:=Fixture.neighborhood(city);var hidden:=_roundtrip(city,"all four real landmarks prepare a second city")
	var full:=_life(city);var lod:=_life(hidden);var camera:=Camera3D.new();root.add_child(camera)
	camera.projection=Camera3D.PROJECTION_ORTHOGONAL;camera.size=8.;camera.position=Vector3(35,30,35);camera.look_at(Vector3(35,0,30));lod.view_camera=camera
	var gap:=0.;var work_gap:=0.;var same:=true
	for i in range(2400):
		if i==1000:_check(city.remove_house(str(ids.keep)).ok and hidden.remove_house(str(ids.keep)).ok,"remove real delivery aura during both simulations")
		if i==1200:_check(city.undo().ok and hidden.undo().ok,"restore real delivery aura during both simulations")
		full._process(.05);lod._process(.05)
		for person:Dictionary in full.residents:
			var other:Dictionary=lod.cafe._resident(str(person.home_id));gap=maxf(gap,full.citizen_position(person).distance_to(lod.citizen_position(other)))
		for pair:Array in [[full.bakery.workers,lod.bakery.workers],[full.workshop.workers,lod.workshop.workers]]:
			for j in range(pair[0].size()):
				var a:Dictionary=pair[0][j];var b:Dictionary=pair[1][j]
				gap=maxf(gap,a.node.position.distance_to(lod.worker_lod.position(b)));work_gap=maxf(work_gap,absf(float(a.elapsed)-lod.worker_lod.elapsed(b)))
				same=same and a.phase==b.phase
	_check(same and gap<.03 and work_gap<.003,"two minutes keep delivery travel and job phases identical across visibility")
	_check(city.bakery_supply==hidden.bakery_supply and city.landmark_bread==hidden.landmark_bread and city.workshop_supply==hidden.workshop_supply and city.house_improvements==hidden.house_improvements and city.cafe_progress==hidden.cafe_progress,"visible and hidden workers settle actual doubled batches gifts installations and tea identically")
	_check(int(city.landmark_bread.get(str(ids.mill),{}).get("batches",0))>=3 and State.SaveValidation._gift_count(city.snapshot())>=2,"actual mill worker attends and completes at least three full batches with gifts")
	_check(lod.worker_lod.stats.movement_sleeps>0 and lod.worker_lod.stats.work_sleeps>0,"actual landmark workers sleep between relevant deadlines")
	_roundtrip(hidden,"full new landmark service results reload with Schema18")
	print("LANDMARK_MOTION ",JSON.stringify({"gap":gap,"work_gap":work_gap,"mill":city.landmark_bread.get(str(ids.mill),{}),"stats":lod.worker_lod.stats}))
	full.free();lod.free();camera.free()
func _flowers()->void:
	var city:=_city();var palace:Dictionary=city.place_signature("botanical_palace",Vector2(-15.5,-2));assert(palace.ok)
	var meadow:=Meadow.new();meadow.setup(city);meadow.record_only=true
	var blocks:Array[Vector2i]=[]
	for x in range(-4,0):
		for z in range(-2,2):blocks.append(Vector2i(x,z))
	meadow.rebuild({},blocks)
	var expected:=0;var extras:=0;var outer:=0;var distant:=0
	for block:Vector2i in meadow.prepared_blocks:
		var flowers:Array=meadow.prepared_blocks[block].flower;var extra:int=meadow.palace_flower_counts[block];extras+=extra
		for i in range(flowers.size()-extra):
			var transform:Transform3D=flowers[i][0];var point:=Vector2(block)*8.+Vector2(transform.origin.x,transform.origin.z)
			var distance:=point.distance_to(Vector2(-15.5,-.2))
			if distance<=14.:expected+=1
			else:distant+=1
			if distance>8. and distance<=14.:outer+=1
	_check(expected==extras and extras>0 and outer>0 and distant>0,"real fourteen metre paired-flower geometry includes the new outer annulus and leaves distant flowers alone")
	meadow.free()
func _run()->void:
	var city:RefCounted=Fixture.build(self);base=city.snapshot();_check(city._validate_snapshot(base).ok and not base.has("landmark_bread"),"actual tea planting and question-answer milestones form a valid old-format base")
	_auras();_mill();_tea();_motion();_flowers()
	for row:Dictionary in Examples.CATALOG:
		var original:Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/"+str(row.file)))
		var old:=State.new();var result:Dictionary=old.restore(original)
		_check(result.ok and int(old.snapshot().schema)<=17 and not old.snapshot().has("landmark_bread") and State.new().restore(old.snapshot()).ok,"existing official work keeps optional gifts absent: "+str(row.id))
	print("LANDMARK_ADJACENCY ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
