extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_waterfront_contract_fixture.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
var checks:=0
var failures:Array=[]
var cases:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func network(city:RefCounted)->void:
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);life.free()
func rows(city:RefCounted)->Array:
	var before:Dictionary=city.snapshot();var result:Array=city.functional_zones().spaces.filter(func(s):return s.kind=="waterfront")
	check(before==city.snapshot(),"shore query preserves author intent, history and receipts")
	return result
func run()->void:
	var began:=Time.get_ticks_msec()
	for kind:String in ["shore","inland","back","wall"]:
		for yaw:float in [0.,.4,PI*.5]:
			var f:=Fixture.build(kind,yaw);var city:RefCounted=f.city;check(f.ok,"public source "+kind+str(yaw))
			check(rows(city).all(func(s):return not s.eligibility.district and s.eligibility.reason=="network_waiting"),"unpublished graph explicitly waits")
			network(city);var result:=rows(city);var row:Dictionary=result.filter(func(s):return s.members==["h1"])[0]
			check(row.eligibility.district==(kind=="shore"),"physical face, water and entry determine district "+kind)
			if kind=="shore":
				check(row.members==["h1"] and row.stage=="district" and row.evidence.shore_faces.size()==3 and row.evidence.public_entries.size()==3,"single compound long house qualifies without a second owner")
				check(row.source_ids.has("w1") and row.source_ids.has("r1") and row.source_ids.has(city.houses[0].cells[0].id),"actual water, road, body and cell sources")
				check(row.evidence.public_entries.all(func(e):return e.height_access.kind=="ordinary_door" and e.height_access.ok),"all projected entries have measured support")
			else:check(not result.any(func(s):return s.eligibility.flowing),"no full Flowing eligibility from an inland label, rear water or wall")
			var cold:=Fixture.Base.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok,"independent shore disk-compatible restore");network(cold)
			check(rows(cold)==result,"cold shore sources equal incremental")
			cases.append({"kind":kind,"yaw":yaw,"spaces":result})
	var f:=Fixture.build("shore",0.,false);check(f.ok,"public no-road long house");network(f.city)
	check(rows(f.city)[0].stage=="cluster" and rows(f.city)[0].eligibility.reason=="public_entry_missing","unconnected shore interface survives as cluster")
	f=Fixture.build();var city:RefCounted=f.city;network(city);var initial:=rows(city);var rights:Dictionary=city.functional_benefits()
	check(city.remove_water_at(Fixture.ORIGIN+Vector2(0,6)).ok,"public water removal");check(not rows(city).any(func(s):return s.eligibility.district),"water removal immediately invalidates old published qualification");network(city)
	check(rows(city)[0].stage=="trait","inland long gallery keeps body trait only")
	check(city.undo().ok,"Undo water removal");network(city);check(rows(city)==initial and city.functional_benefits()==rights,"Undo restores source and original formal rights")
	check(city.remove_road("r1").ok,"public shore road removal");network(city);check(rows(city)[0].stage=="cluster","road removal keeps local face only")
	check(city.undo().ok,"Undo road removal");network(city);check(rows(city)==initial,"Undo road restores exact shore sources")
	var presentation:Dictionary=city.creative_settings.presentation.duplicate();presentation.automatic_decoration=false
	check(city.CreationPolicy.set_preferences(city,{"presentation":presentation}).ok,"public automatic scenery switch");network(city)
	check(rows(city)==initial,"qualifying face never reads visible tea tables, canopies or lamps")
	check(city.set_house_role("h1","workshop").ok,"manual mixed artisan intent");network(city)
	check(rows(city)[0].eligibility.district and city.functional_benefits().inspiration_multiplier==1.35,"mixed kind preserves independent shore and formal artisan benefit")
	var labels:=Fixture.Base.State.new();labels.initialize_free();check(labels.add_house(Fixture.ORIGIN).ok and labels.set_house_role("h1","garden_cafe").ok,"public inland cafe label");network(labels)
	check(rows(labels).is_empty() and labels.functional_zones().zones.any(func(z):return z.kind=="waterfront"),"old authored cafe membership cannot fabricate new waterfront space")
	f=Fixture.build();check(f.city.set_house_era("h1","modern_eco").ok and f.city.set_house_architecture("h1","chalet").ok,"public supported modern facade variant");network(f.city)
	check(rows(f.city)[0].eligibility.district and rows(f.city)[0].evidence.public_entries.all(func(e):return e.height_access.kind=="modern_ground_door" and e.height_access.ok),"aligned modern height implementation supplies measured shore support")
	check(f.city.set_house_architecture("h1","terrace").ok,"public terrain-supported external deck variant");network(f.city)
	check(not rows(f.city)[0].eligibility.district and rows(f.city)[0].eligibility.reason=="entry_support_unverified","unverified external deck never grants new shore qualification")
	var blocked:=Fixture.build("wall");network(blocked.city);check(blocked.ok and not rows(blocked.city).any(func(s):return s.eligibility.district),"full real wall blocks all faces despite same nearby water")
	check(blocked.city.remove_house("h2").ok,"remove actual intervening wall");network(blocked.city);check(rows(blocked.city)[0].eligibility.district,"wall removal restores unobstructed source")
	check(blocked.city.undo().ok,"Undo intervening wall removal");network(blocked.city);check(not rows(blocked.city).any(func(s):return s.eligibility.district),"Undo blocks shore again")
	var ridge:=Fixture.build();check(ridge.ok,"public source for real terrain barrier")
	for i in range(2):check(ridge.city.add_terrain_stroke([Fixture.ORIGIN+Vector2(-3,3.7),Fixture.ORIGIN+Vector2(7,3.7)] as Array[Vector2],"plateau",1.3,1.,2).ok,"public ridge sculpt")
	network(ridge.city);check(not rows(ridge.city)[0].eligibility.district and rows(ridge.city)[0].eligibility.reason=="ground_access_missing","two-metre ridge cannot masquerade as open shore walk")
	check(ridge.city.undo().ok and ridge.city.undo().ok,"Undo both ridge strokes");network(ridge.city);check(rows(ridge.city)[0].eligibility.district,"removing real ridge restores ground access")
	var endpoint:=Fixture.build("shore",0.,false);check(endpoint.ok and endpoint.city.add_road([Fixture.ORIGIN+Vector2(0,1.3),Fixture.ORIGIN+Vector2(0,3)] as Array[Vector2],"path","none").ok,"public default-width perpendicular endpoint street")
	network(endpoint.city);check(rows(endpoint.city)[0].eligibility.district,"real road orientation and endpoint never invent paving inside the door wall")
	var oblique:=Fixture.build("shore",0.,false);check(oblique.ok and oblique.city.add_road([Fixture.ORIGIN+Vector2(0,1.3),Fixture.ORIGIN+Vector2(1,3)] as Array[Vector2],"path","none").ok,"public oblique endpoint street")
	network(oblique.city);check(rows(oblique.city)[0].eligibility.district,"oblique actual paving supports the same shore entrance")
	var remote:=Fixture.build();Fixture.Base.Brush.select(remote.city,"pastoral","townhouse")
	check(remote.ok and remote.city.add_house(Vector2(-12,-20)).ok and remote.city.add_road([Vector2(-22,-18.1),Vector2(-10,-18.1)] as Array[Vector2],"path","none").ok,"remote neighbor on same actual street component")
	network(remote.city);var local:=rows(remote.city)
	check(remote.city.functional_zones().houses.h2.connected and local.size()==1 and local[0].members==["h1"] and not local[0].source_ids.has("h2"),"remote common network cannot extend a local shore interface")
	var river:=Fixture.Base.State.new();river.initialize_free();Fixture.Base.Brush.select(river,"renaissance","venetian_loggia")
	var origin:=Vector2(river.river_x(-20)-river.RIVER_HALF_WIDTH-5.,-20.)
	check(river.add_house_stroke(origin,[{"x":0,"z":0,"level":0,"kind":"room"}]).ok and river.rotate_house("h1",PI*.5).ok,"public body facing actual meandering base river")
	check(river.add_road([origin+Vector2(1.9,2),origin+Vector2(1.9,-2)] as Array[Vector2],"path","none").ok,"public dry riverbank street")
	network(river);check(rows(river).size()==1 and rows(river)[0].eligibility.district and rows(river)[0].source_ids.has("river"),"actual base river yields its own wet terrain and source identity")
	var legacy:=Fixture.Base.State.new();legacy.initialize();check(legacy.functional_zones().spaces.is_empty(),"legacy spaces remain unchanged")
	var out:="res://验证记录/M84/waterfront_contract_20261030/cpu"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"cases":cases,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("WATERFRONT_CONTRACT ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
