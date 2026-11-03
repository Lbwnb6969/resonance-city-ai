extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Plaza=preload("res://scripts/world/city_creation_plaza_loops.gd")
const Epoch=preload("res://scripts/world/city_creation_epoch_counters.gd")
static func fixture(size:float=8.,yaw:float=0.)->Dictionary:
	var city:=State.new();city.initialize_free();var origin:=Vector2(-28,-24);var points:Array[Vector2]=[]
	for p:Vector2 in [Vector2.ZERO,Vector2(size,0),Vector2(size,size),Vector2(0,size),Vector2.ZERO]:points.append(origin+p.rotated(-yaw))
	return {"city":city,"ok":city.add_road(points,"path","none").ok,"center":origin+(Vector2.ONE*(size*.5)).rotated(-yaw)}
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(value:bool,label:String)->void:
	checks+=1
	if not value:failures.append(label);push_error(label)
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir=" ):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var facts:Array=[]
	for yaw:float in [0.,.4,PI*.5]:
		var f:=fixture(8.,yaw);check(f.ok,"public authored closed path");var city:RefCounted=f.city;var before:Dictionary=city.snapshot();var faces:=Plaza.faces(city)
		check(faces.size()==1 and is_equal_approx(float(faces[0].area),64.),"actual planar graph exposes only the real 64m2 face")
		if faces.is_empty():continue
		var id:String=faces[0].loop_key;var polygon:PackedVector2Array=faces[0].polygon.duplicate();var shifted:=PackedVector2Array()
		var change_script=preload("res://scripts/world/city_creation_change_set.gd");var source_changes:Dictionary=change_script.snapshot(city)
		for i in range(polygon.size()):shifted.append(polygon[(i+1)%polygon.size()])
		check(Plaza.key(shifted)==id,"same closed border has stable identity regardless of traversal start")
		check(Plaza.plans(city).is_empty() and not city.snapshot().has("plaza_loops"),"old road loop opens as original default lawn without adopting fields")
		check(Plaza.choose(city,id,"fan_stone").ok and city.snapshot().schema==34 and city.houses==before.houses and city.roads==before.roads,"explicit paving adopts schema34 without rewriting authored roads/houses")
		var painted_changes:Dictionary=change_script.snapshot(city);var diff:Dictionary=change_script.diff(source_changes,painted_changes)
		check(diff.labels==["plazas"] and diff.bounds.size()==1 and Rect2(diff.bounds[0].new).has_point(f.center),"plaza-only author edit emits bounded vegetation invalidation without rebuilding roads")
		var meadow:=preload("res://scripts/visual/city_creation_meadow.gd").new();meadow.state=city;var entrances:Dictionary=meadow._entrances_by_house();var bins:=preload("res://scripts/visual/city_creation_ground_obstacle_bins.gd").new();bins.prepare(city,entrances);var block:=Vector2i((f.center/8.).floor())
		check(bins.fingerprint(block)==meadow._local_obstacles(block,entrances),"indexed and independent grass obstacle sources agree on adopted plaza")
		var indexed:=preload("res://scripts/visual/city_creation_grass_mask.gd").new();var legacy:=preload("res://scripts/visual/city_creation_grass_mask.gd").new();indexed.setup(city,block,entrances,bins);legacy.setup(city,block,entrances)
		check(not indexed.visible(f.center,.25) and indexed.visible(f.center,.25)==legacy.visible(f.center,.25),"cold and incremental grass masks exclude the same actual paved interior")
		meadow.free()
		var current:Dictionary=city.snapshot();check(Plaza.choose(city,id,"fan_stone").no_op and city.snapshot()==current,"reselecting the same material is a real no-op")
		check(Epoch.spaces(city).keys().any(func(k):return k.begins_with("space_district/civic_")),"paved geometry supplies a district receipt fact without residents or network waiting")
		var path:=out+"/plaza_"+str(yaw)+".json";check(city.save_city(path).ok,"actual plaza atomic disk save");var reader:=State.new();check(reader.load_city(path).ok and reader.snapshot()==current and Plaza.plans(reader)==Plaza.plans(city),"independent disk cold read preserves canonical loop and material")
		check(city.remove_road("r1").ok and city.plaza_loops.is_empty() and not city.snapshot().has("plaza_loops"),"opening the road ring cleans invalid author records in that same transaction")
		check(city.undo().ok and city.snapshot().plaza_loops==current.plaza_loops,"Undo restores original road topology and its paving choice")
		check(Plaza.choose(city,id,"brick_stone").ok and city.plaza_loops[0].paving=="brick_stone","other real existing paving material replaces one record")
		check(Plaza.choose(city,id,"").ok and city.plaza_loops.is_empty() and city.snapshot().schema==before.schema,"return to lawn omits the optional field and preserves old schema")
		var cleared:Dictionary=change_script.diff(painted_changes,change_script.snapshot(city));check(cleared.labels==["plazas"] and Rect2(cleared.bounds[0].old).has_point(f.center),"restoring lawn invalidates old plaza extent after optional author record is removed")
		for value:Variant in [false,[{"loop_key":id,"paving":"fan_stone","centerpiece":"future"}],[{"loop_key":"wrong","paving":"fan_stone","centerpiece":"none"}]]:
			var bad:Dictionary=current.duplicate(true);bad.plaza_loops=value;var clean:=State.new();var empty:Dictionary=clean.snapshot();check(not clean.restore(bad).ok and clean.snapshot()==empty,"invalid/unknown plaza author value rejects atomically")
		var old:Dictionary=current.duplicate(true);old.schema=33;check(not State.new().restore(old).ok,"older schema rejects the new optional author field")
		facts.append({"yaw":yaw,"face":faces[0]})
	for size:float in [5.,6.,17.8,18.]:
		var f:=fixture(size);check(f.ok and (not Plaza.faces(f.city).is_empty())==(size>=6. and size<=17.8),"actual 36-to-320-square-meter adoption boundary "+str(size))
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"facts":facts};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("PLAZA_LOOPS_CPU ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));quit(0 if report.ok else 1)
