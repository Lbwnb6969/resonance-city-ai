extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
const Idle=preload("res://scripts/world/city_creation_idle_walk.gd")
const Roof=preload("res://scripts/visual/city_creation_dormer_sites.gd")
const WindowFixture=preload("res://tools/fixtures/city_creation_layered_window_fixture.gd")
var checks:=0
var failures:Array=[]
var out:=""
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
static func fixture(count:int=8)->RefCounted:
	var city:=State.new();city.initialize_free();Brush.select(city,"pastoral","townhouse")
	for i in range(count):city.add_house(Vector2(-35+(i%8)*3,-28+floori(float(i)/8.)*6))
	for row in range(ceili(count/8.)):city.add_road([Vector2(-37,-26.1+row*6),Vector2(-12,-26.1+row*6)] as Array[Vector2],"path","none")
	return city
func make_life(city:RefCounted)->Node3D:
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);return life
func points(life:Node3D)->Dictionary:
	var result:Dictionary={}
	for r:Dictionary in life.residents:result[r.home_id]=r.node.position
	return result
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var city:=fixture();check(city.houses.size()==8 and city.begin_progression_epoch(out+"/initial.json").ok,"eight real homes and backed-up active epoch")
	var life:=make_life(city);var start:=points(life);var authors:Array=city.houses.duplicate(true);var old:Dictionary=city.harmony_journey.duplicate(true);var epoch:Dictionary=city.cozy_progression.duplicate(true);var progress:Dictionary=city.life_progress.duplicate(true)
	for i in range(300):life._process(.1)
	check(points(life)!=start and life.residents.any(func(r):return r.has("idle_walk")),"300 active frames move actual noncommercial residents")
	check(life.residents.all(func(r):return r.paused and r.node.get_child(0).visible),"actual residents stay idle with visible own body, without proxy spawning")
	check(city.houses==authors and city.harmony_journey==old and city.cozy_progression==epoch and city.life_progress==progress and city.bakery_supply.is_empty() and city.workshop_supply.is_empty(),"idle motion invents no services, inventory, XP or author changes")
	check(life.residents.all(func(r):return not r.has("idle_walk") or Vector2(r.node.position.x-r.idle_walk.origin.x,r.node.position.z-r.idle_walk.origin.z).length()<=14.01),"active wandering stays within quiet-walk local radius")
	var camera:=Camera3D.new();root.add_child(camera);camera.position=Vector3(300,80,300);camera.look_at(Vector3(400,80,400));life.view_camera=camera;var hidden:=points(life)
	for i in range(30):life._process(.1)
	check(points(life)==hidden and life.get_meta("idle_walk_count",0)==0,"offscreen idle actors sleep with zero active pose updates")
	life.view_camera=null;camera.free();life._process(.1);var bounded:=true
	for r:Dictionary in life.residents:bounded=bounded and r.node.position.distance_to(hidden[r.home_id])<=.056
	check(bounded,"camera return has no idle catch-up jump")
	var source_bytes:=FileAccess.get_file_as_bytes(out+"/initial.json")
	var Backup=preload("res://scripts/world/city_creation_progression_backup.gd")
	check(Backup.same_decoded({"roads":[{"points":[[-8.100000381469727,0.]]}]},{"roads":[{"points":[[-8.10000038146973,0.]]}]}),"backup coordinate comparison follows exact existing Vector2 restore")
	check(not Backup.same_decoded({"xp":3},{"xp":3.00000001}) and not Backup.same_decoded({"roads":[{"width":1.25}]},{"roads":[{"width":1.25000001}]}),"backup keeps XP and non-normalized road width exact")
	var before_service:=points(life);check(city.set_house_role("h2","bakery").ok,"real service becomes available")
	life._process(.1);bounded=true
	for r:Dictionary in life.residents:bounded=bounded and r.node.position.distance_to(before_service[r.home_id])<=.15
	check(bounded,"new service reuses each walker's current point without teleport")
	var saved_cooldown:=false
	for i in range(2000):
		life._process(.1)
		if not saved_cooldown:
			for resident:Dictionary in life.residents:
				if not resident.get("idle_walk",{}).get("cooldown",false) or resident.node.position.distance_to(resident.idle_walk.safe)<.20:continue
				check(city.set_journey_checkpoint(life.checkpoint(false)).ok and city.save_city(out+"/cooldown.json").ok,"actual wandering cooldown saves a valid logical checkpoint")
				var cold:=State.new();check(cold.load_city(out+"/cooldown.json").ok,"cooldown excursion cold reads")
				var resumed:=make_life(cold);check(resumed.residents.any(func(r):return r.home_id==resident.home_id and r.dwell_id==r.home_id and r.wait>0.),"cold cooldown restores its actual residential dwell intent")
				resumed.free();saved_cooldown=true;break
	check(saved_cooldown,"actual service journey reaches a wandering home cooldown")
	check(city.bakery_status("h2").served>0,"ordinary production and real customers continue after idle handoff")
	life.free()
	var many:=fixture(32);check(many.begin_progression_epoch(out+"/many.json").ok and many.houses.size()==32,"large active idle fixture opens")
	life=make_life(many);life._process(.1);check(life.get_meta("idle_walk_count",0)<=24 and life.residents.filter(func(r):return r.has("idle_walk")).size()<=24,"active idle work is bounded at 24 residents")
	life.free()
	var benches:RefCounted=preload("res://tests/test_city_creation_bench_visits.gd").fixture();check(benches.begin_progression_epoch(out+"/benches.json").ok,"actual street seats in active account")
	life=make_life(benches);var sat:=false
	for i in range(900):
		life._process(.1);sat=sat or life.residents.any(func(r):return r.node.get_meta("bench_seated",false))
	check(sat and benches.life_progress.purchases==0,"naturally wandering resident uses an actual bench without a transaction");life.free()
	var balcony:=State.new();balcony.initialize_free();Brush.select(balcony,"pastoral","townhouse");balcony.add_house(Vector2(-25,-12));balcony.add_cell("h1",0,0,1);balcony.add_road([Vector2(-28,-9),Vector2(-22,-9)] as Array[Vector2],"path","none");balcony.add_road([Vector2(-25,-11),Vector2(-25,-9)] as Array[Vector2],"path","none")
	check(preload("res://scripts/world/city_creation_balcony_plan.gd").set_mode(balcony,"h1",3).ok and balcony.begin_progression_epoch(out+"/balcony.json").ok,"actual balcony fixture is authored normally")
	life=make_life(balcony);var listened:=false
	for i in range(1200):
		life._process(.1);listened=listened or life.residents.any(func(r):return r.node.get_meta("balcony_listening",false))
	check(listened,"idle residents retain native balcony rest visits");life.free()
	var f:=WindowFixture.build("renaissance",0.,false,2);var rain:RefCounted=f.city;check(rain.add_road([Vector2(-31,-18.1),Vector2(-25,-18.1)] as Array[Vector2],"path","none").ok and rain.set_microclimate("sun_shower").ok and rain.begin_progression_epoch(out+"/rain.json").ok,"actual two-storey arcade home and rain")
	life=make_life(rain);var r:Dictionary=life.residents[0];var covered:=Idle.shelter(life,r);check(not covered.is_empty(),"shelter derives only from actual arcade at selected entrance")
	for i in range(300):life._process(.1)
	check(not covered.is_empty() and r.node.position.distance_to(covered[-1])<.01 and r.idle_walk.shelter,"rain takes an actual resident under their own arcade")
	var renderer=load("res://scripts/visual/city_creation_renderer.gd").new();root.add_child(renderer);renderer.state=rain;renderer.buildings=Node3D.new();renderer.add_child(renderer.buildings)
	for node in [renderer.shore,renderer.lilypads,renderer.wildlife]:renderer.add_child(node)
	var shell:Node3D=renderer._house(rain.houses[0]);var roof:=Roof.faces(shell,true);check(Roof.height(roof,Vector2(r.node.position.x,r.node.position.z))>r.node.position.y+1.,"independent generated roof triangles cover the rain target")
	shell.free();renderer.free();life.free()
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("IDLE_WALK ",JSON.stringify(report));quit(0 if report.ok else 1)
