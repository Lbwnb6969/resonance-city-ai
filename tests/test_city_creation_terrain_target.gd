extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Rules=preload("res://scripts/world/city_creation_terrain_target_rules.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func cold_equal(city:RefCounted,label:String)->void:
	city.prepare_ground_height();var cold:=State.new();var restore_result:=cold.restore(JSON.parse_string(JSON.stringify(city.snapshot())));check(restore_result.ok,label+" JSON restore "+str(restore_result))
	cold.prepare_ground_height()
	for field:String in ["raw_vertices","raw_offsets","vertices","offsets"]:check(city._ground_terrain.get(field)==cold._ground_terrain.get(field),label+" exact "+field)
func run_case(free:bool)->void:
	var city:=State.new()
	if free:city.initialize_free()
	else:city.initialize_empty()
	var at:=Vector2(-24,-12);var points:Array[Vector2]=[at]
	check(city.add_terrain_stroke(points,"raise",3.,.6).ok,"old raise prefix")
	city.prepare_ground_height();var before:Dictionary=city.snapshot();var raw:PackedFloat32Array=city._ground_terrain.raw_vertices.duplicate()
	var plan:=city.plan_terrain_target(points,3.5,1.2,true)
	check(plan.ok and plan.candidate.raw_terrain_height(at)>1.1999,"actual natural target core reaches absolute 1.2m")
	check(city.snapshot()==before and city._ground_terrain.raw_vertices==raw,"candidate does not write author source or published height arrays")
	check(city.apply_terrain_target(plan).ok,"explicit target commit")
	check(city.snapshot().schema==21 and city.terrain_strokes[0]==before.terrain_strokes[0],"new schema protects v2 without rewriting old stroke")
	check(city.CreationPolicy.is_free(city)==free and city.CreationPolicy.data_is_free(city.snapshot())==free,"schema21 retains exact free or legacy policy")
	cold_equal(city,"initial target")
	check(is_equal_approx(city.raw_terrain_height(at),1.2),"committed core equals preview")
	var again:=city.plan_terrain_target(points,3.5,1.2,true);check(again.ok and city.apply_terrain_target(again).ok,"repeat target stroke")
	check(is_equal_approx(city.raw_terrain_height(at),1.2),"repeated core does not accumulate")
	var wide:Array[Vector2]=[at,at+Vector2(3.,0.)];check(city.apply_terrain_target(city.plan_terrain_target(wide,3.5,1.2,true)).ok,"widen same target")
	check(is_equal_approx(city.raw_terrain_height(at+Vector2(3.,0.)),1.2) and is_equal_approx(city.raw_terrain_height(at),1.2),"expanded core shares the original absolute level")
	cold_equal(city,"expanded target")
	check(city.add_terrain_stroke(points,"smooth",2.,.4).ok,"old smooth after target")
	check(city.apply_terrain_target(city.plan_terrain_target(points,2.,.75)).ok,"target after ordered smooth")
	cold_equal(city,"after smooth")
	check(city.undo().ok,"Undo target");cold_equal(city,"Undo")
	check(city.redo().ok,"Redo target");cold_equal(city,"Redo")
	check(city.add_water([at+Vector2(2.,0.)] as Array[Vector2],2.,"pond").ok,"real water changes target shore attenuation")
	cold_equal(city,"water replay")
	var guarded:=city.plan_terrain_target(points,3.,1.2);var saved:Dictionary=city.snapshot();city.add_house(Vector2(-32,-20))
	check(not city.apply_terrain_target(guarded).ok,"stale revision rejected")
	var current:=city.plan_terrain_target(points,3.,1.2);current.row.target_y=2.
	check(not city.apply_terrain_target(current).ok,"changed plan row rejected")
	var invalid:Dictionary=city.snapshot();invalid.schema=20;check(not State.new().restore(invalid).ok,"v2 cannot masquerade as schema20")
	for key:String in ["terrain_version","target_y"]:
		invalid=city.snapshot();invalid.terrain_strokes[-1].erase(key);check(not State.new().restore(invalid).ok,"missing v2 "+key+" rejected")
	for value in [NAN,INF,-.51,3.51]:check(not city.plan_terrain_target(points,3.,value).ok,"invalid absolute height rejected")
	var path:="res://验证记录/M84/terrain_target_20261031/"+("free" if free else "legacy")+".json"
	check(city.save_city(path).ok,"atomic schema21 save")
	var read:=State.new();check(read.load_city(path).ok and read.snapshot()==city.snapshot(),"schema21 disk content roundtrip")
func _initialize()->void:run.call_deferred()
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path("res://验证记录/M84/terrain_target_20261031"));var began:=Time.get_ticks_msec()
	run_case(true);run_case(false)
	var city:=State.new();city.initialize_free();check(city.add_house(Vector2(-24,-12)).ok,"protected house fixture")
	var saved:Dictionary=city.snapshot();var plan:=city.plan_terrain_target([Vector2(-24,-12)] as Array[Vector2],3.5,1.2)
	check(plan.ok and plan.protected_samples>0,"candidate reports protected core samples")
	check(is_equal_approx(plan.candidate.raw_terrain_height(Vector2(-24,-12)),1.2) and plan.candidate.ground_height(Vector2(-24,-12))<.01,"raw target and protected foundation remain distinct")
	check(city.snapshot()==saved,"protected preview retains original house origin/base and author state")
	var landmark:=State.new();landmark.initialize_free();check(landmark.PlacedLandmarks.place(landmark,"artisan",Vector2(-24,-12)).ok,"public independent landmark fixture")
	var landmark_before:Dictionary=landmark.snapshot();var history:int=landmark._undo.size()
	var blocked:=landmark.plan_terrain_target([Vector2(-24,-12)] as Array[Vector2],3.,1.2)
	check(not blocked.ok and not landmark.apply_terrain_target(blocked).ok,"overlapping landmark rejects preview and commit")
	check(landmark.snapshot()==landmark_before and landmark._undo.size()==history,"rejected landmark edit consumes no history or IDs")
	var legacy:=State.new();legacy.initialize_empty();var p:Array[Vector2]=[Vector2(-24,-12),Vector2(-21,-12)]
	for mode:String in ["raise","plateau","smooth","lower","raise","reset","smooth","plateau"]:legacy.add_terrain_stroke(p,mode,3.,.65,1,true if mode in ["raise","lower","plateau"] else false)
	legacy.add_water([Vector2(-18,-12)] as Array[Vector2],2.,"pond");legacy.prepare_ground_height()
	# Optional external reference is exported from Git, never generated by this test.
	for arg:String in OS.get_cmdline_user_args():
		if not arg.begins_with("--baseline-terrain="):continue
		var old=load(arg.trim_prefix("--baseline-terrain=")).new()
		old.prepare_raw(legacy.waters,legacy.water_clearance,legacy.terrain_strokes)
		check(old.raw_vertices==legacy._ground_terrain.raw_vertices and old.raw_offsets==legacy._ground_terrain.raw_offsets,"mixed old history matches exact pre-change terrain source byte for byte")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open("res://验证记录/M84/terrain_target_20261031/cpu.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("TERRAIN_TARGET ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
