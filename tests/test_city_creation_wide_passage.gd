extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
var checks:=0
var failures:Array=[]
var out:=""
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func fixture(yaw:float=0.,upper:bool=false)->RefCounted:
	var city:=State.new();city.initialize_free();Brush.select(city,"pastoral","townhouse")
	var cells:Array=[{"x":0,"z":0,"level":0,"kind":"room"},{"x":1,"z":0,"level":0,"kind":"room"}]
	if upper:cells.append({"x":0,"z":0,"level":1,"kind":"room"})
	check(city.add_house_stroke(Vector2(-25,-20),cells).ok and city.rotate_house("h1",yaw).ok,"public contiguous structural bays")
	return city
func stroke(yaw:float=0.)->Array[Vector2]:
	var result:Array[Vector2]=[]
	for at:Vector2 in [Vector2(.9,-4),Vector2(.9,4)]:result.append(Vector2(-25,-20)+at.rotated(-yaw))
	return result
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec()
	for yaw:float in [0.,.4,PI*.5]:
		var city:=fixture(yaw,true);var before:Dictionary=city.snapshot();var path:=stroke(yaw)
		var preview:Dictionary=city.preview_road(path,"brick","none")
		check(preview.ok and city.snapshot()==before,"wide candidate is valid and entirely read-only "+str(yaw))
		check(city.add_road(path,"brick","none").ok,"real 1.75m street crosses two bays")
		var rows:Array=city.house_passages("h1")
		check(rows.size()==2 and rows.all(func(r):return r.get("profile","")=="wide_lintel"),"two clipped openings share a structural lintel")
		check(city.houses==before.houses,"passage never deletes cells, upper rooms or identity")
		var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(city.snapshot()))).ok and cold.house_passages("h1")==rows,"cold ordinary save derives identical wide cuts")
		check(city.undo().ok and city.house_passages("h1").is_empty() and city.redo().ok and city.house_passages("h1")==rows,"one author transaction Undo/Redo restores structural openings")
		before=city.snapshot()
		check(not city.remove_cell("h1","c2").ok and city.snapshot()==before,"support bay cannot be removed underneath a retained wide road")
		check(not city.set_house_style("h1","round_tower").ok and city.snapshot()==before,"unsupported shell edit leaves the real opening and author state intact")
		check(not city.set_house_architecture("h1","rotunda").ok and city.snapshot()==before,"unsupported prototype edit preserves its original")
		check(not city.set_house_era("h1","modern_eco").ok and city.snapshot()==before,"unsupported era edit cannot silently close the road")
		check(not city.set_house_era("h1","district").ok and city.snapshot()==before,"district inheritance cannot erase explicit supported structural era")
		check(not city.set_cluster_era("h1","modern_eco").ok and city.snapshot()==before,"batch era edit rolls back the entire cluster atomically")
		for offset:float in [-.75,0.,.75]:
			var a:=Vector2(-25,-20)+Vector2(.9+offset,-4).rotated(-yaw);var b:=Vector2(-25,-20)+Vector2(.9+offset,4).rotated(-yaw)
			check(city.houses[0].cells.filter(func(c):return c.level==0).all(func(c):return not city.Passage.segment_blocked(city.houses[0],c,a,b,rows)),"navigation has no phantom pier at the shared seam")
		var crossing:Array[Vector2]=[]
		for at:Vector2 in [Vector2(-4,0),Vector2(5,0)]:crossing.append(Vector2(-25,-20)+at.rotated(-yaw))
		before=city.snapshot();check(not city.add_road(crossing,"path","none").ok and city.snapshot()==before,"cross-axis opening cannot erase shared supports or consume an ID")
	var city:=fixture();var path:Array[Vector2]=[Vector2(-24.9,-24),Vector2(-24.9,-16)]
	check(city.add_road(path,"path","none").ok,"narrow original road with stable identity")
	var id:String=city.roads[0].id;var original:Array=city.roads[0].points.duplicate(true)
	check(city.add_road(path,"brick","none").ok and city.roads.size()==1 and city.roads[0].id==id and city.roads[0].points==original,"in-place widening preserves source road and points")
	var single:=State.new();single.initialize_free();Brush.select(single,"pastoral","townhouse");single.add_house(Vector2(-25,-20));var before:=single.snapshot()
	check(not single.add_road([Vector2(-25,-24),Vector2(-25,-16)] as Array[Vector2],"brick","none").ok and single.snapshot()==before,"one bay cannot fake 25mm supporting piers")
	var incomplete:=fixture();before=incomplete.snapshot()
	check(not incomplete.add_road([Vector2(-24.1,-24),Vector2(-24.1,-20)] as Array[Vector2],"brick","none").ok and incomplete.snapshot()==before,"partial interior dead-end cannot manufacture a wide portal")
	check(city.save_city(out+"/wide.json").ok,"isolated actual wide-passage file")
	var plain:=fixture();check(plain.set_house_architecture("h1","").ok,"public automatic shell choice")
	before=plain.snapshot();check(not plain.add_road(stroke(),"brick","none").ok and plain.snapshot()==before,"automatic temple/villa shell cannot borrow an unsupported wide lintel")
	var old:=fixture();var across:Array[Vector2]=[Vector2(-29,-20),Vector2(-20,-20)]
	check(old.add_road(across,"path","none").ok,"legal old narrow passage from perpendicular direction")
	var old_data:Dictionary=old.snapshot();var current:=fixture();check(current.add_road(stroke(),"brick","none").ok,"current wide city for hot restore")
	check(current.restore(JSON.parse_string(JSON.stringify(old_data))).ok and current.roads==old.roads,"hot restore validates the candidate roads without current-city contamination")
	var invalid:Dictionary=JSON.parse_string(FileAccess.get_file_as_string(out+"/wide.json"))
	var extra:Dictionary=old.roads[0].duplicate(true);extra.id="r2";invalid.roads.append(extra);invalid.next_road_id=3;invalid.high_watermark.road=2
	var cold:=State.new();before=cold.snapshot();var rejected:Dictionary=cold.restore(invalid)
	check(not rejected.ok and "宽穿堂" in rejected.message and cold.snapshot()==before,"cold restore rejects candidate wide and cross-axis holes together")
	var reverse:=State.new();reverse.initialize_free();Brush.select(reverse,"pastoral","townhouse")
	check(reverse.add_road(stroke(),"brick","none").ok,"wide road can be authored before its host")
	before=reverse.snapshot();check(reverse.preview_house_stroke(Vector2(-25,-20),[{"x":0,"z":0,"level":0,"kind":"room"},{"x":1,"z":0,"level":0,"kind":"room"}]).ok and reverse.snapshot()==before,"selected structural brush is used by a read-only host preview")
	check(reverse.add_house_stroke(Vector2(-25,-20),[{"x":0,"z":0,"level":0,"kind":"room"},{"x":1,"z":0,"level":0,"kind":"room"}]).ok and reverse.house_passages("h1").size()==2,"two-bay house stroke derives real opening over existing wide street")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("WIDE_PASSAGE ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
