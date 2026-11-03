extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
const Height=preload("res://scripts/world/city_creation_entry_height.gd")
const Corridor=preload("res://scripts/world/city_creation_entry_corridor.gd")
var checks:=0
var failures:Array=[]
var out:=""
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
static func fixture()->RefCounted:
	var city:=State.new();city.initialize_free();Brush.select(city,"pastoral","townhouse")
	assert(city.add_terrain_stroke([Vector2(-17,-17.8)] as Array[Vector2],"raise",3.,1.,2).ok)
	assert(city.add_water([Vector2(-10,-17.8)] as Array[Vector2],2.4,"pond").ok)
	assert(city.add_house(Vector2(-25,-20)).ok)
	assert(city.add_road([Vector2(-29,-17.8),Vector2(-6,-17.8)] as Array[Vector2],"brick","none").ok)
	return city
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec()
	var city:=fixture();var road:Dictionary=city.roads[0];var before:Dictionary=city.snapshot();var profile:Dictionary=city.road_profile(road)
	check(not profile.treads.is_empty() and not profile.bridge_runs.is_empty(),"public road combines remote stairs and a real pond bridge")
	var flat:Vector2=Vector2(-25,-17.8);var surface:Dictionary=city._road_heights.surface_at(flat)
	check(surface.kind=="road" and surface.road_id==road.id,"remote stair cannot relabel flat entrance street")
	var entry:Dictionary=city.house_entrances("h1")[0]
	var access:=Height.assess(city,city.houses[0],entry,flat,road)
	check(access.ok,"real flat approach stays usable alongside remote stairs and bridge")
	var top:Dictionary=Height._surface(city,city.houses[0],entry,flat,road,profile,{})
	check(top.kind=="road","entry samples actual local smooth surface")
	var stair:Dictionary=profile.treads[profile.treads.size()/2];var at:Vector2=(Vector2(stair.a)+Vector2(stair.b))*.5
	check(city._road_heights.surface_at(at).kind=="road_steps","actual tread retains step clearance")
	var bridge:Dictionary=city._road_heights.surface_at(Vector2(-10,-17.8))
	check(bridge.kind=="road","flat bridge cannot borrow remote stair clearance")
	var matches:=true
	for x in range(231):
		var point:=Vector2(-29.+float(x)*.1,-17.8);var actual:Dictionary=city._road_heights.surface_at(point)
		matches=matches and not actual.is_empty() and absf(float(actual.y)-city._road_heights.height_at(point,-999.))<.000001
	check(matches,"classified surfaces match production height across flat, stairs and bridge")
	var ridge:=func(point:Vector2)->Dictionary:
		var selected:Dictionary=city._road_heights.surface_at(point)
		return {"kind":selected.get("kind","ground"),"y":.08 if point.x>flat.x+.1 else 0.}
	var measured:=Corridor.assess(city,city.houses[0],entry,flat,road,ridge)
	check(not measured.ok and measured.reason=="unsupported_corridor_height","remote stairs no longer excuse an unstepped transverse ledge")
	check(city.snapshot()==before,"derived local support never edits author content")
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(before))).ok,"mixed road snapshot cold restores")
	check(Height.assess(cold,cold.houses[0],cold.house_entrances("h1")[0],flat,cold.roads[0])==access,"cold local surface evidence equals live state")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("ENTRY_ROAD_SURFACE ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
