extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_bridge_banks_fixture.gd")
const Earn=preload("res://tools/fixtures/city_creation_flowering_vines_fixture.gd")
const Plan=preload("res://scripts/world/city_creation_paired_bridge_lamps.gd")
const Bridge=preload("res://scripts/visual/city_creation_bridge.gd")
var checks:=0
var failures:Array=[]
var out:=""
var facts:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):push_error("new isolated evidence directory required");quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var city:=Fixture.build("flat")
	var before:Dictionary=city.snapshot();var profile:Dictionary=city.road_profile(city.roads[0]).duplicate(true);var original:=Bridge.prepare(profile)
	check(not profile.bridge_runs.is_empty() and not original.lamps.is_empty(),"actual authored stone bridge retains original head lantern geometry")
	check(not Plan.set_enabled(city,true).ok and city.snapshot()==before and Plan.plans(city).is_empty(),"old free bridge remains intact without unearned variant")
	check(city.begin_progression_epoch(out+"/first.json").ok and not Plan.unlocked(city),"new level1 account does not unlock appearance")
	var earned:=Earn.earn(city);check(earned.ok and Plan.unlocked(city),"50 actual constructions earn level2")
	check(Plan.plans(city).is_empty() and Plan.set_enabled(city,true).ok,"earned bridge appearance requires opt-in")
	var rows:=Plan.plans(city);before=city.snapshot()
	check(rows.size()>=4 and rows.size()%2==0 and city.snapshot()==before,"real bridge has read-only paired rows")
	var clear:=true;var paired:=true
	for i in range(0,rows.size(),2):
		var a:Dictionary=rows[i];var b:Dictionary=rows[i+1]
		paired=paired and a.arc==b.arc and a.side==-b.side and a.run_id==b.run_id
		clear=clear and Vector2(a.position.x-b.position.x,a.position.z-b.position.z).length()-.17>float(a.width) and is_equal_approx(a.position.y,a.deck_y+.61)
	check(clear and paired,"both lamp envelopes lie beyond full walkway width on existing coping")
	check(city.road_profile(city.roads[0])==profile and Bridge.prepare(city.road_profile(city.roads[0]))==original,"optional lamps never alter original deck, rails, head lights or walking profile")
	check(city.undo().ok and Plan.plans(city).is_empty() and city.redo().ok and Plan.plans(city)==rows,"preference history restores deterministic rows")
	check(city.CreationPolicy.set_progression_enabled(city,false,out+"/paused.json").ok and Plan.plans(city)==rows,"pause keeps genuinely earned bridge appearance")
	check(preload("res://scripts/world/city_creation_flowering_vines.gd").set_enabled(city,true).ok,"independent flower preference coexists with paired lamps")
	var cold:=Fixture.State.new();var saved:Dictionary=JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))
	check(cold.restore(saved).ok and Plan.plans(cold)==rows and cold.creative_settings.presentation.size()==4,"four-field presentation cold-loads both independent options")
	var supported_cases:=0
	for kind:String in ["flat","diagonal","curve","bank_bend","slope"]:
		var actual:=Fixture.build(kind);var test:=Fixture.State.new();check(test.restore(saved).ok,"earned state cold restore for "+kind)
		for road:Dictionary in test.roads.duplicate(true):test.remove_road(str(road.id))
		if kind=="slope":check(test.add_terrain_stroke([Vector2(-1,0)] as Array[Vector2],"raise",4.,.65).ok and test.terrain_strokes==actual.terrain_strokes,"actual slope terrain restaged before roads")
		for road:Dictionary in actual.roads:
			var points:Array[Vector2]=[]
			for point:Array in road.points:points.append(Vector2(point[0],point[1]))
			check(test.add_road(points,str(road.get("style","path")),"none").ok,"actual road restaging "+kind)
		var derived:=Plan.plans(test);var supported:=coping_supports(test,derived)
		facts.append({"kind":kind,"lamps":derived.size(),"supported":supported})
		check(supported,"all actual lamp base corners land inside rendered coping triangles "+kind)
		if derived.size()>=4:supported_cases+=1
	check(supported_cases>=3,"multiple actual curved or angled bridge cases retain supported paired rows")
	var bad:Dictionary=saved.duplicate(true);bad.creative_settings.presentation.paired_bridge_lamps=1
	check(not cold.restore(bad).ok,"numeric paired-lamp preference rejected")
	bad=saved.duplicate(true);bad.creative_settings.presentation.erase("paired_bridge_lamps");bad.creative_settings.presentation.unknown=true
	check(not cold.restore(bad).ok,"unknown fourth presentation key rejected")
	var prefs:Dictionary=city.creative_settings.presentation.duplicate();prefs.automatic_decoration=false
	check(city.CreationPolicy.set_preferences(city,{"presentation":prefs}).ok and Plan.plans(city).is_empty() and Plan.unlocked(city),"global decoration off keeps earned entitlement")
	check(city.undo().ok and Plan.plans(city)==rows,"global preference Undo restores rows")
	var middle:Dictionary=Fixture.Plan._point(profile.samples,(profile.bridge_runs[0].start+profile.bridge_runs[0].end)*.5)
	var district:Dictionary=city.add_district([middle.at] as Array[Vector2],8.)
	check(district.ok and city.set_district_era(district.district_id,"clockwork").ok and Plan.plans(city).is_empty(),"actual truss conversion has no unsupported stone-coping lamps")
	check(city.undo().ok and not Plan.plans(city).is_empty(),"restoring stone grammar rederives supported rows")
	check(city.remove_road("r1").ok and Plan.plans(city).is_empty() and city.undo().ok and not Plan.plans(city).is_empty(),"road deletion and Undo cannot leave persistent lamp orphans")
	check(Plan.set_enabled(city,false).ok and Plan.plans(city).is_empty() and not Bridge.prepare(city.road_profile(city.roads[0])).lamps.is_empty(),"individual switch removes only new rows")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"lamps":rows.size(),"earned":earned,"supports":facts}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("PAIRED_LAMPS ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
func coping_supports(city:RefCounted,rows:Array[Dictionary])->bool:
	var caps:Dictionary={}
	for road:Dictionary in city.roads:caps[road.id]=Bridge.prepare(city.road_profile(road)).caps
	for row:Dictionary in rows:
		for corner:Vector3 in [Vector3(-.06,0,-.06),Vector3(.06,0,-.06),Vector3(.06,0,.06),Vector3(-.06,0,.06)]:
			var point:Vector3=row.position+Basis(Vector3.UP,float(row.yaw))*corner;var supported:=false;var triangles:Array=caps[row.road_id]
			for i in range(0,triangles.size(),3):
				var a:Vector3=triangles[i];var b:Vector3=triangles[i+1];var c:Vector3=triangles[i+2]
				if absf(a.y-point.y)>.0001 or absf(b.y-point.y)>.0001 or absf(c.y-point.y)>.0001:continue
				if Geometry2D.is_point_in_polygon(Vector2(point.x,point.z),PackedVector2Array([Vector2(a.x,a.z),Vector2(b.x,b.z),Vector2(c.x,c.z)])):supported=true;break
			if not supported:return false
	return true
