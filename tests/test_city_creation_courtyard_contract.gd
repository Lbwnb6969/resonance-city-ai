extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_space_contract_fixture.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Benefits=preload("res://scripts/world/city_creation_functional_benefits.gd")
var checks:=0
var failures:Array=[]
var evidence:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func network(city:RefCounted)->void:
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);life.free()
func view(city:RefCounted)->Array:
	var before:Dictionary=city.snapshot();var rows:Array=city.functional_zones().spaces.filter(func(s):return s.kind=="courtyard")
	check(before==city.snapshot(),"space query cannot write author data/receipts")
	return rows
func run()->void:
	for scenario:Array in [["ring","portal","district"],["ring","outside","cluster"],["ring","none","cluster"],["filled","portal","trait"],["U","portal","cluster"]]:
		var fixture:=Fixture.courtyard(scenario[0],scenario[1]);var city:RefCounted=fixture.city
		check(fixture.ok,"public geometry "+str(scenario))
		var pending:=view(city)
		check(pending.size()==1 and not pending[0].eligibility.district and pending[0].evidence.network=="waiting","unpublished graph waits; no false district")
		network(city);var rows:=view(city)
		check(rows.size()==1 and rows[0].stage==scenario[2],"actual geometry/portal stage "+str(scenario))
		check(rows[0].source_ids.has("h1") and rows[0].source_ids.size()>1,"auditable authored source/cell IDs")
		if scenario[2]=="district":
			check(rows[0].members==["h1"] and rows[0].evidence.usable_tiles==9 and not rows[0].evidence.public_portals.is_empty(),"one compound house qualifies through nine real dry tiles and portal")
			var before:Dictionary=city.snapshot();var rights:Dictionary=city.functional_benefits()
			check(city.remove_road("r1").ok and not view(city)[0].eligibility.district,"delete road immediately withdraws new eligibility")
			network(city);check(view(city)[0].stage=="cluster","closed court survives disconnection as local geometry")
			check(city.undo().ok,"undo real road removal");network(city)
			check(view(city)==rows and city.functional_benefits()==rights,"Undo preserves spatial result and formal rights")
			var cold:=Fixture.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok,"cold Schema20 restore")
			network(cold);check(view(cold)==rows,"independent cold geometry/network equals incremental")
			var opening:String=""
			for cell:Dictionary in city.houses[0].cells:
				if cell.x==2 and cell.z==0:opening=cell.id
			check(city.remove_cell("h1",opening).ok,"open actual ring perimeter");network(city)
			check(view(city)[0].stage=="cluster" and not view(city)[0].eligibility.district,"half enclosure remains cluster without closed district rights")
			check(city.undo().ok,"Undo restores perimeter");network(city);check(view(city)==rows,"Undo restores same source evidence")
			check(city.snapshot().get("harmony_journey",{})==before.get("harmony_journey",{}),"new stages never grant XP or rewrite receipts")
		evidence.append({"scenario":scenario,"spaces":rows})
	var rotated:=Fixture.courtyard("ring","portal",.4);check(rotated.ok,"rotated public single-house court");network(rotated.city)
	check(view(rotated.city)[0].stage=="district","rotation retains actual portal and enclosed dry region")
	var remote:=Fixture.courtyard();var linked:RefCounted=remote.city
	check(linked.add_house(Vector2(-15,-13.1)).ok and linked.add_road([Vector2(-30,-11.2),Vector2(-12,-11.2)] as Array[Vector2],"path","none").ok,"larger outside street component and neighbor")
	network(linked);var separated:Dictionary=view(linked).filter(func(s):return s.members==["h1"])[0]
	check(separated.stage=="cluster" and separated.eligibility.reason=="portal_disconnected","nearby disconnected portal road cannot borrow selected outside component")
	check(linked.add_road([Vector2(-30,-11.2),Vector2(-30,-16.4)] as Array[Vector2],"path","none").ok,"remote connection joins two actual components")
	check(not view(linked)[0].eligibility.district,"stale graph waits after remote connection")
	network(linked);check(view(linked).any(func(s):return s.members==["h1"] and s.stage=="district"),"remote published connection updates court eligibility")
	var single:=Fixture.State.new();single.initialize_free();check(single.add_house(Vector2(-28,-20)).ok,"single dwelling")
	check(view(single)[0].stage=="trait","unconnected single dwelling keeps real trait")
	check(single.add_road([Vector2(-31,-18.1),Vector2(-25,-18.1)] as Array[Vector2],"path","none").ok,"real outside connection");network(single)
	check(view(single)[0].stage=="trait" and single.functional_zones().zones[0].active,"legacy active remains separate from district")
	for fixture:Dictionary in Fixture.other_kinds():
		check(fixture.ok,"public next-kind fixture "+fixture.kind);network(fixture.city)
		check(fixture.city.functional_zones().space_contracts[fixture.kind]==("public_shore_face" if fixture.kind=="waterfront" else "pending"),"current other-kind contract scope "+fixture.kind)
	var mixed:=preload("res://tools/fixtures/city_creation_functional_zones_fixture.gd").build();check(mixed.ok,"mixed real legacy spatial layout");network(mixed.city)
	var old:Dictionary=mixed.city.snapshot();var benefits:Dictionary=mixed.city.functional_benefits()
	check(benefits.inspiration_multiplier==1.35 and benefits.artisan_sources==["h3"],"formal global +35% keeps old source")
	check(view(mixed.city).all(func(s):return s.stage=="trait"),"same-road and 3.6m adjacency never manufacture enclosed courts")
	check(mixed.city.snapshot().get("harmony_journey",{})==old.get("harmony_journey",{}),"queries never issue new receipts")
	var legacy:=Fixture.State.new();legacy.initialize();check(legacy.functional_zones().spaces.is_empty(),"classic semantics unchanged")
	var out:="res://验证记录/M84/courtyard_contract_20261029";DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=");DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"cases":evidence};FileAccess.open(out+"/cpu.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"))
	print("COURTYARD_CONTRACT ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)
