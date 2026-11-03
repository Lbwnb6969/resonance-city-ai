extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Plan=preload("res://scripts/world/city_creation_placed_landmarks.gd")
const Mask=preload("res://scripts/visual/city_creation_grass_mask.gd")
const Bins=preload("res://scripts/visual/city_creation_ground_obstacle_bins.gd")
const Changes=preload("res://scripts/world/city_creation_change_set.gd")
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
static func fixture(yaw:float=0.)->Dictionary:
	var c:=State.new();c.initialize_free();var at:=Vector2(-28,-20);var item:={"blueprint":"riverbank","position":[at.x,at.y],"yaw":yaw}
	var ok:bool=c.add_vegetation_stroke([at] as Array[Vector2],"cypress",.25).ok
	ok=c.add_vegetation_stroke([Plan.entrance(item)] as Array[Vector2],"shrub",.25).ok and ok
	ok=c.add_vegetation_stroke([at+Vector2(8,0)] as Array[Vector2],"olive",.25).ok and ok
	return {"city":c,"at":at,"yaw":yaw,"ok":ok}
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec()
	for yaw:float in [0.,.4,PI*.5]:
		var f:=fixture(yaw);var c:RefCounted=f.city;check(f.ok and c.plants.size()==3,"public authored plants at footing entrance and far field")
		var before:Dictionary=c.snapshot();var preview:=Plan.preview(c,"riverbank",f.at,yaw)
		check(preview.ok and preview.affected_plants==["p1","p2"],"preview names real plants hidden by base and entrance")
		check(c.snapshot()==before,"plant impact preview preserves all author content")
		check(Plan.place(c,"riverbank",f.at,yaw).ok,"public landmark can occupy planted land")
		check(c.plants==before.plants and not c.vegetation_visible(c.plants[0]) and not c.vegetation_visible(c.plants[1]) and c.vegetation_visible(c.plants[2]),"only covered plants withdraw and records remain byte-equivalent values")
		var change:=Changes.diff(Changes.snapshot(fixture(yaw).city),Changes.snapshot(c));check(change.labels.has("landmarks") and change.bounds.any(func(r):return r.domain=="landmarks" and r.new.has_area()),"landmark change has actual new dirty bounds")
		var bins:=Bins.new();bins.prepare(c,{})
		for p:Vector2 in [f.at,Plan.entrance(c.placed_landmarks[0])]:
			var block:=Vector2i((p/8.).floor());var direct:=Mask.new();direct.setup(c,block);var indexed:=Mask.new();indexed.setup(c,block,{},bins)
			check(not direct.visible(p,.2) and not indexed.visible(p,.2),"full and indexed grass masks agree at actual landmark base and entrance")
		var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(c.snapshot()))).ok and not cold.vegetation_visible(cold.plants[0]),"ordinary cold restore keeps hidden author plants")
		var old:=Changes.snapshot(c);check(Plan.place(c,"riverbank",f.at+Vector2(0,9),yaw,"lm1").ok,"moving landmark keeps identity")
		check(c.plants==before.plants and c.vegetation_visible(c.plants[0]) and c.vegetation_visible(c.plants[1]),"moving covering object restores original plants")
		change=Changes.diff(old,Changes.snapshot(c));check(change.bounds.any(func(r):return r.domain=="landmarks" and r.old.has_area() and r.new.has_area()),"move invalidates old and new footprint")
		check(c.undo().ok and not c.vegetation_visible(c.plants[0]) and c.redo().ok and c.vegetation_visible(c.plants[0]),"Undo Redo reproducibly hides and restores")
		check(Plan.remove(c,"lm1").ok and c.plants==before.plants and c.plants.all(func(p):return c.vegetation_visible(p)),"recycling landmark restores all exact authored plants")
	for family:String in Plan.SIZES:
		var c:=State.new();c.initialize_free();var at:=Vector2(-28,-20)
		check(c.add_vegetation_stroke([at] as Array[Vector2],"golden_tree",.25).ok,"actual planted site for each blueprint")
		var original:Array=c.plants.duplicate(true);var preview:=Plan.preview(c,family,at,.4)
		check(preview.ok and preview.affected_plants==["p1"] and Plan.place(c,family,at,.4).ok and not c.vegetation_visible(c.plants[0]),"each rotated blueprint hides planted author tree")
		check(Plan.remove(c,"lm1").ok and c.plants==original and c.vegetation_visible(c.plants[0]),"each blueprint returns exact author tree after recycling")
	var legacy:=State.new();var path:="res://tools/fixtures/legacy_renaissance_schema13.json";var bytes:=FileAccess.get_file_as_bytes(path)
	check(legacy.restore(JSON.parse_string(bytes.get_string_from_utf8())).ok,"real legacy schema13 still loads")
	var old:Dictionary=legacy.snapshot();var copy:=State.new();check(copy.restore(JSON.parse_string(JSON.stringify(old))).ok and copy.snapshot()==old,"old work complete canonical cold roundtrip remains exact")
	check(FileAccess.get_file_as_bytes(path)==bytes,"old authored work source bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("LANDMARK_VEGETATION ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
