extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
const Routes=preload("res://scripts/world/city_creation_quiet_walk_routes.gd")
var checks:=0
var failures:Array=[]
var out:=""
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func fixture()->RefCounted:
	var city:=State.new();city.initialize_free();Brush.select(city,"pastoral","townhouse")
	for i in range(7):check(city.add_house(Vector2(-30+i*4.,-20)).ok,"authored home")
	check(city.set_house_role("h2","bakery").ok,"real bakery")
	check(city.add_road([Vector2(-32,-18.1),Vector2(-4,-18.1)] as Array[Vector2],"path","none").ok,"real street")
	return city
func life_for(city:RefCounted)->Node3D:
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);return life
func sample(life:Node3D)->Dictionary:
	var result:Dictionary={}
	for home:String in life.quiet_walk.actors:result[home]=life.quiet_walk.actors[home].node.position
	return result
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):push_error("new isolated evidence directory required");quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var city:=fixture();var life:=life_for(city)
	check(city.begin_progression_epoch(out+"/first.json").ok,"open real epoch")
	for i in range(20):life._process(.1)
	check(life.quiet_walk.actors.is_empty(),"active policy has no replacement actors")
	check(city.CreationPolicy.set_progression_enabled(city,false,out+"/paused.json").ok,"pause transaction")
	var checkpoint:Dictionary=life.checkpoint(false);var frozen:Dictionary=city.snapshot();var clock:float=life.time
	life._process(.1);var initial:=sample(life)
	check(not initial.is_empty() and initial.size()<=24,"paused residents receive bounded local street actors")
	var hidden:=true
	for actor:Dictionary in life.quiet_walk.actors.values():hidden=hidden and not actor.body.visible and actor.body.get_parent().visible
	check(hidden,"replace body only, preserve economic root visibility")
	for i in range(160):life._process(.1)
	check(sample(life)!=initial,"paused presentation actually moves")
	check(life.time==clock and life.checkpoint(false)==checkpoint and city.snapshot()==frozen,"movement changes no clock, checkpoint, inventory or rewards")
	var local:=true
	for actor:Dictionary in life.quiet_walk.actors.values():
		local=local and Routes.planar(actor.node.position).distance_to(Routes.planar(actor.origin))<=Routes.RADIUS+.01 and is_equal_approx(actor.node.position.y,city.street_height(Routes.planar(actor.node.position))+.1)
	check(local,"movement stays local and on current street height")
	var before:=sample(life);var quiet_clock:float=life.quiet_walk.clock;life._budget_hold=true;life._process(120.)
	check(sample(life)==before and life.quiet_walk.clock==quiet_clock,"held geometry cannot move or accumulate quiet time")
	check(life.quiet_walk.actors.values().all(func(a):return not a.node.visible),"held geometry hides unpublished presentation")
	life._budget_hold=false;life._process(.1)
	check(city.save_city(out+"/cold.json").ok,"save paused logical city")
	var cold:=State.new();check(cold.load_city(out+"/cold.json").ok,"formal cold load")
	var cold_life:=life_for(cold);var cold_before:Dictionary=cold.snapshot();cold_life._process(.1)
	check(not cold_life.quiet_walk.actors.is_empty() and cold.snapshot()==cold_before,"cold quiet actors rebuild without State publication")
	var camera:=Camera3D.new();root.add_child(camera);camera.position=Vector3(300,80,300);camera.look_at(Vector3(400,80,400));cold_life.view_camera=camera
	var hidden_before:=sample(cold_life)
	for i in range(20):cold_life._process(.1)
	check(sample(cold_life)==hidden_before and cold_life.quiet_walk.stats.poses==0,"offscreen residents accumulate no movement or pose work")
	cold_life.view_camera=null;camera.free();cold_life._process(.1)
	var bounded:=true
	for home:String in hidden_before:
		if cold_life.quiet_walk.actors.has(home):bounded=bounded and hidden_before[home].distance_to(cold_life.quiet_walk.actors[home].node.position)<=.056
	check(bounded,"camera return advances only current delta without catch-up")
	check(cold.remove_road(str(cold.roads[0].id)).ok,"authored road removal while paused")
	cold_life._process(.1)
	check(cold_life.quiet_walk.actors.is_empty(),"road removal discards disconnected routes")
	check(cold.undo().ok,"undo restores actual street");cold_life._process(.1)
	check(not cold_life.quiet_walk.actors.is_empty(),"restored geometry rebuilds quiet routes")
	check(city.CreationPolicy.set_progression_enabled(city,true,out+"/resumed.json").ok,"resume same epoch")
	life._process(.1)
	check(life.quiet_walk.actors.is_empty() and city.cozy_progression.xp==frozen.cozy_progression.xp,"resume releases clones without quiet rewards")
	check(life.residents.all(func(r):return r.node.visible),"resume retains economic root visibility")
	var other:=State.new();other.initialize_free();cold_life.setup(other);cold_life._process(.1)
	check(cold_life.quiet_walk.actors.is_empty(),"city switch clears old presentation")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	cold_life.free();life.free()
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("QUIET_WALK ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
