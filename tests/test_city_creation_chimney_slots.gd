extends "res://tests/test_city_creation_dormer_slots.gd"
const ChimneySites=preload("res://scripts/visual/city_creation_chimney_sites.gd")
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec()
	for era:String in ["pastoral","renaissance"]:
		for key:String in ["brick_twin_pots","copper_cowl"]:
			var city:RefCounted=fixture(era,.4);city.set_house_architecture_variant("h1","timber_shutters");city.set_house_dormer("h1","gable_light");var before:Dictionary=city.snapshot()
			check(city.set_house_chimney("h1",key).ok,"public explicit chimney choice "+era+key);var made:=build(city)
			check(made.house.get_meta("chimney_detail",{}).get("active",false) and made.house.get_meta("roof_detail",{}).get("active",false),"actual roof supports chimney and independent dormer together")
			chimney_geometry(made.house,key)
			check(city.houses[0].seed==before.houses[0].seed and Choice.record(city.houses[0])==Choice.record(before.houses[0]) and Choice.record(city.houses[0],"dormer")==Choice.record(before.houses[0],"dormer"),"new chimney preserves house seed and both older independent slots")
			var author:Dictionary=city.snapshot();ChimneySites.plan(city,made.house,city.houses[0]);check(city.snapshot()==author,"read-only support and occupancy planning never writes author state")
			made.house.free();made.r.free()
	var small:=Fixture.State.new();small.initialize_free();preload("res://scripts/world/city_creation_build_brush.gd").select(small,"pastoral","townhouse");small.add_house(Vector2(-28,-20));check(small.set_house_chimney("h1","brick_twin_pots").ok,"single ground-room roof accepts explicit chimney");var made:=build(small);check(made.house.get_meta("chimney_detail",{}).get("active",false),"actual simple pitched roof and its tile courses support the chimney");made.house.free();made.r.free()
	check(small.set_house_role("h1","bakery").ok and small.set_house_chimney("h1","off").ok,"actual simple bakery explicitly chooses no chimney");made=build(small);check(made.house.get_meta("chimneys",[]).is_empty() and made.house.find_children("BakerySmoke*","MeshInstance3D",true,false).is_empty(),"explicit absence removes old automatic chimney smoke sources and prebuilt work smoke");made.house.free();made.r.free()
	chimney_history(out)
	actual_baking(out)
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("CHIMNEY_SLOTS_CPU ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
func intersects(mesh:MeshInstance3D,a:Vector3,b:Vector3)->bool:
	var inverse:=mesh.global_transform.affine_inverse();var faces:=mesh.mesh.get_faces()
	for i in range(0,faces.size(),3):
		if Geometry3D.segment_intersects_triangle(inverse*a,inverse*b,faces[i],faces[i+1],faces[i+2])!=null:return true
	return false
func chimney_geometry(house:Node3D,key:String)->void:
	var node:Node3D=house.find_child("ChimneyDetail_*",true,false)
	if node==null:check(false,"actual selected chimney geometry exists");return
	var data:Dictionary=node.get_meta("chimney_detail");var finite:=true;var lod:=true;var total:=0;var envelope:=true
	for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
		lod=lod and mesh.visibility_range_end==64.;var faces:=mesh.mesh.get_faces();total+=faces.size()/3
		for i in range(0,faces.size(),3):finite=finite and faces[i].is_finite() and (faces[i+1]-faces[i]).cross(faces[i+2]-faces[i]).length_squared()>1e-13
		for vertex:Vector3 in faces:
			var p:=node.to_local(mesh.to_global(vertex));envelope=envelope and absf(p.x)<.28 and absf(p.z)<.24 and p.y<=data.top+.405
	check(total>0 and finite and lod and envelope,"actual closed chimney triangles are finite, nondegenerate and fit the reserved full cap envelope with real detail LOD")
	check(house.get_meta("chimneys").size()==(2 if key=="brick_twin_pots" else 1),"published smoke points correspond to the actual number of physical outlets")
	var clear:=true;var wall:=false
	for point:Vector3 in data.outlets:
		var a:=point+Vector3(0,.06,0) if key=="brick_twin_pots" else point+Vector3(.08,0,0)
		var b:=Vector3(point.x,data.top-.02,point.z) if key=="brick_twin_pots" else point-Vector3(.16,0,0)
		for mesh:MeshInstance3D in house.find_children("*","MeshInstance3D",true,false):clear=clear and not intersects(mesh,node.to_global(a),node.to_global(b))
	for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):wall=wall or intersects(mesh,node.to_global(Vector3(.28,data.top-.2,0)),node.to_global(Vector3(0,data.top-.2,0)))
	check(clear and wall,"all outlets have real open air while the neighboring shaft wall remains solid")
	check(node.find_children("HollowTerracottaPot*","MeshInstance3D",true,false).size()==2 if key=="brick_twin_pots" else node.find_child("CopperVentHood",true,false)!=null,"both choices contain genuinely different measured solid geometry")
func chimney_history(out:String)->void:
	var city:RefCounted=fixture();city.set_house_architecture_variant("h1","stone_pediment");city.set_house_dormer("h1","shed_light");var old:Dictionary=city.snapshot();var path:=out+"/work.json";check(city.save_city(path).ok,"original schema27 three-stage author work saves before chimney adoption");var raw:=FileAccess.get_file_as_bytes(path)
	check(city.set_house_chimney("h1","brick_twin_pots").ok and city.snapshot().schema==28 and Choice.record(city.houses[0])==Choice.record(old.houses[0]) and Choice.record(city.houses[0],"dormer")==Choice.record(old.houses[0],"dormer"),"chimney explicitly upgrades to schema28 and preserves both old slots byte-for-byte")
	var seed_value:int=Choice.record(city.houses[0],"chimney").seed;var saved:Dictionary=city.snapshot();var reader:=Fixture.State.new()
	check(city.save_city(path).ok and reader.load_city(path).ok and reader.snapshot()==saved and FileAccess.get_file_as_bytes(out+"/废弃/城市存档/work.json.previous")==raw,"actual schema28 atomic backup and disk cold read preserve exact authorship")
	var revision:int=city.revision;check(city.set_house_chimney("h1","brick_twin_pots").no_op and city.revision==revision,"repeating chimney selection is a true no-op")
	check(city.set_house_chimney("h1","copper_cowl").ok and Choice.record(city.houses[0],"chimney").seed==seed_value and city.undo().ok and city.houses==saved.houses and city.redo().ok,"chimney geometry changes preserve the independent seed and exact UndoRedo history")
	check(city.set_house_architecture_variant("h1","").ok and Choice.chimney(city.houses[0])=="copper_cowl" and Choice.dormer(city.houses[0])=="shed_light","clearing windows preserves both roof slots")
	check(city.set_house_dormer("h1","").ok and Choice.chimney(city.houses[0])=="copper_cowl" and city.set_house_chimney("h1","").ok and not city.houses[0].has("architecture_variant"),"each roof slot clears independently and the final removal restores the original absent-field format")
	check(city.restore(saved).ok and city.set_house_chimney("h1","").ok and city.snapshot().schema==27 and city.houses==old.houses,"original chimney restores the exact old schema27 two-slot work")
	check(city.restore(saved).ok and city.set_house_architecture("h1","rotunda").ok,"changing actual mother retains the dormant three-slot author record");var made:=build(city);check(not made.house.has_meta("chimney_detail") and Choice.chimney(city.houses[0])=="brick_twin_pots","unsupported mother publishes its original geometry without dropping chimney intent");made.house.free();made.r.free()
	check(city.set_house_architecture("h1","recessed_townhouse").ok and Choice.chimney(city.houses[0])=="brick_twin_pots","return to a supported mother restores chosen chimney")
	check(preload("res://scripts/world/city_creation_build_brush.gd").sample(city,"h1").ok and city.add_house_stroke(Vector2(-21,-20),[{"x":0,"z":0,"level":0,"kind":"room"}]).ok and city.houses[-1].architecture_variant==city.houses[0].architecture_variant,"public appearance sampling deep-copies all three stable slots")
	city.houses[-1].architecture_variant.slots.chimney.id="off";check(Choice.chimney(city.houses[0])=="brick_twin_pots","sampled chimney author records remain independent")
	var empty:Dictionary=reader.snapshot()
	for schema:int in [25,26,27]:
		var bad:Dictionary=saved.duplicate(true);bad.schema=schema;check(not reader.restore(bad).ok and reader.snapshot()==empty,"earlier schema cannot silently accept the chimney slot")
	for change:Callable in [func(d):d.version=true,func(d):d.version=2,func(d):d.seed=true,func(d):d.seed=-1,func(d):d.seed=.5,func(d):d.seed=2147483648,func(d):d.prototype="wrong",func(d):d.id="missing",func(d):d.extra=0]:
		var bad:Dictionary=saved.duplicate(true);change.call(bad.houses[0].architecture_variant.slots.chimney);check(not reader.restore(bad).ok and reader.snapshot()==empty,"malformed or future independent chimney recipe rejects atomically")
	var legacy:=Fixture.State.new();legacy.initialize();legacy.set_house_architecture("h1","townhouse");check(legacy.set_house_chimney("h1","copper_cowl").ok and legacy.save_city(out+"/legacy.json").ok and reader.load_city(out+"/legacy.json").ok and not reader.CreationPolicy.is_free(reader),"pure legacy roof authoring cold reads without adopting a free policy")
static func bakery_fixture()->RefCounted:
	var city:=Fixture.State.new();city.initialize_free();var brush=preload("res://scripts/world/city_creation_build_brush.gd");brush.select(city,"pastoral","townhouse")
	city.add_house_stroke(Vector2(-28,-20),[{"x":0,"z":0,"level":0,"kind":"room"},{"x":1,"z":0,"level":0,"kind":"room"}]);city.set_house_role("h1","bakery");city.add_house(Vector2(-32,-20));city.set_house_role("h2","residential")
	city.add_road([Vector2(-34,-17.6),Vector2(-25,-17.6)] as Array[Vector2],"path","none")
	for x:float in [-28.,-32.]:city.add_road([Vector2(x,-17.6),Vector2(x,-18.65)] as Array[Vector2],"path","none")
	return city
func actual_baking(out:String)->void:
	var city:RefCounted=bakery_fixture();city.set_house_chimney("h1","brick_twin_pots");check(city.begin_progression_epoch(out+"/epoch.json").ok,"actual bakery begins a backed-up schema28 optional account")
	var life=preload("res://scripts/world/city_creation_life.gd").new();root.add_child(life);life.set_process(false);life.setup(city)
	var working:=false
	for ignored in range(2000):
		life._process(.05)
		if life.bakery_status("h1").worker_phase=="baking":working=true;break
	check(working and life.bakery.workers.size()==1,"a real second household member reaches the actual bakery and starts baking")
	var made:=build(city);var smoke=preload("res://scripts/visual/city_creation_bakery_smoke.gd");smoke.update(made.house,life.bakery_status("h1"));var puffs:Array=made.house.find_children("BakerySmoke*","MeshInstance3D",true,false)
	check(puffs.size()==2 and puffs.all(func(p):return p.visible and p.get_meta("working")),"both real outlets emit only after attended actual baking")
	var ledger:Dictionary=city.bakery_supply.duplicate(true);check(city.CreationPolicy.set_progression_enabled(city,false,out+"/epoch.json").ok,"actual active baking can pause through the backed-up economy API")
	var paused:Dictionary=life.bakery_status("h1");smoke.update(made.house,paused);life._process(20.)
	check(paused.economy_paused and puffs.all(func(p):return not p.visible) and city.bakery_supply==ledger,"economy pause hides every smoke outlet while preserving real phase, stock and production")
	var reader:=Fixture.State.new();check(city.save_city(out+"/paused.json").ok and reader.load_city(out+"/paused.json").ok and not reader.cozy_progression.enabled and Choice.chimney(reader.houses[0])=="brick_twin_pots","actual paused schema28 account and geometry save and cold read")
	check(city.CreationPolicy.set_progression_enabled(city,true,out+"/epoch.json").ok,"actual schema28 account resumes its same saved epoch");smoke.update(made.house,life.bakery_status("h1"));check(puffs.all(func(p):return p.visible),"actual resumed baking restores both smoke outlets")
	check(city.set_bakery_open("h1",false).ok,"public oven switch closes the real bakery");smoke.update(made.house,life.bakery_status("h1"));check(puffs.all(func(p):return not p.visible),"closing actual oven withdraws all smoke without deleting chimney")
	check(city.set_bakery_open("h1",true).ok and city.produce_bread("h1",city.bakery_capacity("h1")-int(city.bakery_status("h1").stock)),"finite actual production can fill the real bakery shelves")
	smoke.update(made.house,life.bakery_status("h1"));check(puffs.all(func(p):return not p.visible),"full finite shelves suppress every outlet rather than invent another working batch")
	made.house.free();made.r.free();life.free()
