extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
const Height=preload("res://scripts/world/city_creation_entry_height.gd")
const Corridor=preload("res://scripts/world/city_creation_entry_corridor.gd")
const Frame=Corridor.Frame
var checks:=0
var failures:Array=[]
var out:=""
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func fixture(yaw:float=0.)->Dictionary:
	var city:=State.new();city.initialize_free();Brush.select(city,"pastoral","townhouse")
	var origin:=Vector2(-25,-20);var ok:bool=city.add_house(origin).ok and city.rotate_house("h1",yaw).ok
	var points:Array[Vector2]=[]
	for at:Vector2 in [Vector2(-3,2.2),Vector2(3,2.2)]:points.append(origin+at.rotated(-yaw))
	ok=city.add_road(points,"path","none").ok and ok
	return {"city":city,"ok":ok,"target":origin+Vector2(0,2.2).rotated(-yaw)}
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var cases:Array=[]
	for yaw:float in [0.,.4,PI*.5]:
		var f:=fixture(yaw);var city:RefCounted=f.city;check(f.ok,"public parallel-road fixture "+str(yaw))
		var house:Dictionary=city.houses[0];var entry:Dictionary=city.house_entrances("h1")[0];var before:Dictionary=city.snapshot()
		var access:=Height.assess(city,house,entry,f.target,city.roads[0]);cases.append(access)
		check(access.ok and access.corridor.ok and not entry.active,"parallel street uses actual existing doorstep without pretending endpoint-active")
		check(access.corridor.samples>access.samples*3 and access.corridor.half_width==.35,"corridor measures interior and both side edges")
		check(access.corridor.entry_at==entry.at and access.corridor.street_at==f.target and access.corridor.road_edge_at!=f.target,"door, first sampled road edge and street target remain distinct")
		check(city.snapshot()==before,"corridor query keeps authored geometry, ledgers and IDs")
		var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(before))).ok,"independent cold restore")
		check(Height.assess(cold,cold.houses[0],cold.house_entrances("h1")[0],f.target,cold.roads[0])==access,"cold support and measured corridor agree")
		var flat:=func(_at:Vector2)->Dictionary:return {"y":0.,"kind":"ground"}
		var wrong:=Corridor.assess(city,house,entry,f.target+Frame.normal(entry)*2.,city.roads[0],flat)
		check(not wrong.ok and wrong.reason=="street_target_missing","arbitrary off-road target cannot prove access")
		var tangent:=Vector2(-Frame.normal(entry).y,Frame.normal(entry).x)
		var ridge:=func(at:Vector2)->Dictionary:return {"y":.6 if (at-Vector2(entry.wall_at)).dot(tangent)>.12 else 0.,"kind":"ground"}
		var lateral:=Corridor.assess(city,house,entry,f.target,city.roads[0],ridge)
		check(not lateral.ok and lateral.reason=="unsupported_corridor_height","flat centre line cannot hide a lateral ledge")
		var interior:=func(at:Vector2)->Dictionary:return {"y":.6 if absf((at-Vector2(entry.wall_at)).dot(tangent)-.16)<.05 else 0.,"kind":"ground"}
		check(not Corridor.assess(city,house,entry,f.target,city.roads[0],interior).ok,"interior strip cannot hide between centre and boundary samples")
		var target:Vector2=f.target-tangent*.5
		var bent:=Height.assess(city,house,entry,target,city.roads[0])
		check(bent.ok and bent.corridor.get("corner_samples",0)>0,"real oblique street attachment samples a true turning footprint")
		var ledge:Vector2=entry.at+tangent*.30+Frame.normal(entry)*.12
		var corner_ridge:=func(at:Vector2)->Dictionary:return {"y":.6 if at.distance_to(ledge)<.055 else 0.,"kind":"ground"}
		var turn:=Corridor.assess(city,house,entry,target,city.roads[0],corner_ridge)
		check(not turn.ok and turn.reason=="unsupported_corridor_height","turning outer sector cannot hide outside the two rectangular strips")
	var stoa:=State.new();stoa.initialize_free();Brush.select(stoa,"pastoral","ionic_stoa")
	check(stoa.add_house_stroke(Vector2(-25,-20),[{"x":0,"z":0,"level":0,"kind":"room"},{"x":1,"z":0,"level":0,"kind":"room"},{"x":2,"z":0,"level":0,"kind":"room"}]).ok,"real stoa column geometry")
	check(stoa.add_road([Vector2(-29,-17.4),Vector2(-18,-17.4)],"path","none").ok,"real street outside column feet")
	var entry:Dictionary=stoa.house_entrances("h1")[0];var flat:=func(_at:Vector2)->Dictionary:return {"y":0.,"kind":"ground"}
	var blocked:=Corridor.assess(stoa,stoa.houses[0],entry,Vector2(entry.at.x,-17.4),stoa.roads[0],flat)
	check(not blocked.ok and blocked.reason=="column_obstruction" and blocked.blocker_id=="h1","source's own real column foot is retained as a blocker")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"cases":cases,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("ENTRY_CORRIDOR ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));quit(0 if failures.is_empty() else 1)
