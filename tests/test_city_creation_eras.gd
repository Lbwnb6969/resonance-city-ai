extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Dome=preload("res://scripts/world/city_creation_renaissance_plan.gd")
var checks:=0
var failures: Array[String]=[]
func _initialize()->void: _run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks+=1
	if not ok: failures.append(label); push_error(label)
func _life(city: RefCounted)->Node3D:
	var life:=Life.new(); root.add_child(life); life.set_process(false); life.setup(city); return life
func _phase(life: Node3D,worker: Dictionary,phase: String)->bool:
	for i in range(2000):
		if worker.phase==phase: return true
		life._process(.1)
	return false
static func fixture()->RefCounted:
	# Frozen pre-milestone Schema13 work from be445610. These earned rights
	# remain valid; fresh-town unlocking is checked independently.
	var city:=State.new()
	var restored: Dictionary=city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://tools/fixtures/legacy_renaissance_schema13.json")))
	assert(restored.ok)
	return city
func _run()->void:
	var old:=State.new(); old.initialize()
	_check(old.era_unlocks==["pastoral"] and not old.set_house_role("h2","atelier").ok,"legacy recipe keeps pastoral rights and locked atelier independently of the free entry")
	var city:=fixture()
	_check(city.era_unlocks==["pastoral","renaissance"] and city.houses[1].role=="atelier","legacy earned renaissance rights and sixth role survive stricter new-town milestones")
	var points: Array[Vector2]=[Vector2(-14,-2)]
	var district: Dictionary=city.add_district(points,5.6,"market")
	var id:=str(district.district_id)
	_check(city.set_district_era(id,"renaissance").ok and city.districts[0].style=="market" and city.house_era(city.houses[0])=="renaissance" and city.house_era(city.houses[-1])=="pastoral","origin selects independent visual era while old town and manual music remain")
	city.undo()
	_check(city.house_era(city.houses[0])=="pastoral" and city.era_unlocks.has("renaissance"),"undo reverts chosen facade and retains earned era")
	city.redo()
	_check(city.set_house_era("h1","pastoral").ok and city.house_era(city.houses[0])=="pastoral" and city.set_house_era("h1","district").ok and city.house_era(city.houses[0])=="renaissance","per-house override can follow or protect against district theme")
	_check(not city.set_district_era(id,"clockwork").ok and not city.set_district_era(id,"modern_eco").ok,"later phases remain locked")
	for xz: Vector2i in [Vector2i(1,0),Vector2i(0,-1),Vector2i(1,-1)]:
		_check(city.add_cell("h1",xz.x,xz.y,0).ok,"grow supported 2x2 footprint")
	var crowns:=Dome.for_house(city,city.houses[0])
	_check(crowns.size()==1 and crowns[0].cell_ids.size()==4 and is_equal_approx(float(crowns[0].radius),1.7),"2x2 exposed rooms derive one octagonal crown")
	city.set_house_era("h1","pastoral")
	_check(Dome.for_house(city,city.houses[0]).is_empty(),"pastoral 2x2 keeps its existing roof")
	city.set_house_era("h1","renaissance")
	_check(city.add_cell("h1",0,0,1).ok and city.add_cell("h1",0,0,2).ok,"grow supported three-storey column")
	crowns=Dome.for_house(city,city.houses[0])
	_check(crowns.size()==1 and crowns[0].cell_ids.size()==1 and is_equal_approx(float(crowns[0].drum_y),5.1) and is_equal_approx(float(crowns[0].y),5.7),"covered 2x2 crowns only its upper room, with supported rotunda drum below lantern")
	# A clean, connected physical delivery scene keeps the lifecycle evidence small.
	city=fixture()
	var life:=_life(city)
	_check(life.workshop.workers.size()==1,"reachable household supplies exactly one actual artist")
	if life.workshop.workers.is_empty(): life.free();_finish();return
	var worker: Dictionary=life.workshop.workers[0]
	_check(worker.carry.name=="CarriedArtwork" and _phase(life,worker,"crafting"),"artist walks to the atelier with a real canvas prop")
	life._process(7.99)
	_check(city.workshop_status("h2").produced==0,"commuting and incomplete onsite work do not mint art")
	life._process(.02);life._process(0)
	_check(worker.phase=="to_target" and worker.carry.visible and city.workshop_status("h2").transit.get("kind")=="art" and city.house_culture.is_empty(),"onsite creation reserves one typed physical art cargo without remote credit")
	var target:=str(worker.target_id)
	life._process(.4)
	var at: Vector3=worker.node.position
	var roads: Array[Dictionary]=city.roads.duplicate(true)
	city.roads.clear();city.revision+=1;life._process(10)
	_check(worker.phase=="paused" and worker.node.position==at and city.culture_level(target)==0,"broken road strands artwork and never installs it remotely")
	_check(city.set_journey_checkpoint(life.checkpoint()).ok,"paused artist writes existing worker checkpoint contract")
	var snapshot: Dictionary=city.snapshot()
	_check(snapshot.schema==13,"era and cultural ledger publish schema 13")
	var loaded:=State.new()
	_check(loaded.restore(JSON.parse_string(JSON.stringify(snapshot,"",true,true))).ok and loaded.snapshot()==snapshot,"mid-carry schema 13 full-precision JSON restores exact city")
	var bad: Dictionary=snapshot.duplicate(true);bad.house_culture[target]=1
	var before: Dictionary=loaded.snapshot()
	_check(not loaded.restore(bad).ok and loaded.snapshot()==before,"forged installed art without matching delivery is rejected atomically")
	bad=snapshot.duplicate(true);bad.schema=12
	_check(not loaded.restore(bad).ok,"old schema cannot smuggle new era fields")
	var resumed:=_life(loaded)
	var restored: Dictionary=resumed.workshop.workers[0]
	_check(restored.node.position==at and restored.phase=="paused" and restored.carry.visible,"load preserves actual artist position and canvas reservation")
	loaded.roads.assign(roads);loaded.revision+=1;resumed._sync()
	_check(_phase(resumed,restored,"installing"),"road repair routes artist from real saved position to recipient")
	resumed._process(1.99)
	_check(loaded.culture_level(target)==0,"art requires two seconds installation at recipient")
	resumed._process(.02)
	_check(loaded.culture_level(target)==1 and loaded.improvement_level(target)==0 and loaded.workshop_status("h2").delivered==1 and not restored.carry.visible,"first delivered tapestry consumes cargo and keeps wooden craft tier independent")
	for i in range(6000):
		if loaded.culture_level(target)==2: break
		resumed._process(.1)
	_check(loaded.culture_level(target)==2 and loaded.workshop_status("h2").delivered>=4,"artist serves nearby homes before returning with actual stained glass")
	_check(loaded.set_journey_checkpoint(resumed.checkpoint()).ok and loaded._validate_snapshot(loaded.snapshot()).ok,"multiple real art installations and checkpoint remain conserved")
	var culture: Dictionary=loaded.house_culture.duplicate()
	loaded.set_house_name(target,"画师的邻屋");loaded.undo()
	_check(loaded.house_culture==culture,"construction undo preserves completed culture history")
	var reassigned:=fixture()
	_check(reassigned.produce_craft("h2",1) and reassigned.reserve_craft("h2","h1","h1","art"),"real atelier reserves artwork for a residential target")
	reassigned.set_house_role("h1","venue")
	_check(reassigned.workshop_status("h2").transit.is_empty() and reassigned.workshop_status("h2").stock==1 and reassigned.house_culture.is_empty(),"repurposing recipient refunds art without fake delivery or stranded reservation")
	life.free();resumed.free();_finish()
func _finish()->void:
	print("CITY_CREATION_ERAS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}))
	quit(0 if failures.is_empty() else 1)
