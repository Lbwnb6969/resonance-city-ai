extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_shore_road_fixture.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Bed=preload("res://scripts/visual/city_creation_shore_road_bed.gd")
var checks:=0
var failures:Array=[]
var facts:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func compile(city:RefCounted,id:String)->Dictionary:
	city.prepare_ground_height();city.road_junctions();var town:=Renderer.new();town.state=city;town.record_only=true;town._prepare_road_layout()
	var data:Dictionary=town._prepare_road_data(city.roads.filter(func(r):return r.id==id)[0]);Renderer.BudgetRebuild.new()._dispose_context(town)
	return data.earthworks.shore_bed
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec()
	for kind:String in ["straight","bend","junction","middle_pond","slope","cross"]:
		for yaw:float in [0.,.4]:
			var f:=Fixture.build(kind,yaw);check(f.ok,"actual public shore road "+kind+str(yaw))
			if not f.ok:continue
			var city:RefCounted=f.city;var before:Dictionary=city.snapshot();var data:=compile(city,f.road_id)
			check(not data.faces.is_empty(),"actual shore paving has supporting bed pieces")
			var buried:=true;var touching:=true;var dry:=true;var samples:=0
			for piece:Dictionary in data.pieces:
				for at:Vector2 in piece.polygon:
					buried=buried and piece.bottom<=city.ground_height(at)-.0799;dry=dry and city.water_clearance(at)>=.0199;samples+=1
				for p:Vector3 in piece.top:touching=touching and p.y>float(piece.bottom)
			if not (buried and touching and dry):print("PIECE_FAILURE ",kind," ",yaw," ",{"buried":buried,"touching":touching,"dry":dry})
			check(buried and touching and dry,"full paving fragments connect down into ground on dry land only "+kind+str(yaw))
			var cold:=Fixture.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(before))).ok,"shore road ordinary cold restore")
			check(compile(cold,f.road_id)==data,"independent cold preparation produces identical full road bed")
			check(city.snapshot()==before,"road bed derivation preserves authored city")
			check(city.remove_road(f.road_id).ok and city.undo().ok,"shore road remove and Undo")
			var undone:=compile(city,f.road_id)
			if undone!=data:
				var first:=-1;var delta:=0.
				for j in range(mini(data.faces.size(),undone.faces.size())):
					if data.faces[j]!=undone.faces[j]:first=j;delta=data.faces[j].distance_to(undone.faces[j]);break
				print("UNDO_DIFF ",kind," ",yaw," faces ",data.faces.size(),"/",undone.faces.size()," first ",first," delta ",delta)
			check(undone==data,"Undo restores exact dry shore support "+kind+str(yaw))
			facts.append({"kind":kind,"yaw":yaw,"pieces":data.pieces.size(),"triangles":data.triangles,"vertices_checked":samples})
	var invalid:=Fixture.build("wet_edge",0.,false);var snapshot:Dictionary=invalid.city.snapshot()
	check(not invalid.city.preview_road(invalid.points,"promenade","none").ok,"dry centre with wet full-width edge is still rejected")
	check(not invalid.city.add_road(invalid.points,"promenade","none").ok and invalid.city.snapshot()==snapshot,"wet-edge rejection consumes no author IDs or history")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("SHORE_ROAD_BED ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
