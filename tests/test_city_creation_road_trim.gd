extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Trim=preload("res://scripts/world/city_creation_road_trim.gd")
const Bridges=preload("res://tools/fixtures/city_creation_bridge_banks_fixture.gd")
var checks:=0
var failures:Array=[]
var facts:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func city()->RefCounted:
	var value:=State.new();value.initialize_free();return value
func add(c:RefCounted,points:Array[Vector2],style:String="path")->void:check(c.add_road(points,style,"none").ok,"real authored road")
func exercise(c:RefCounted,low:float,high:float,id:String="r1")->void:
	var before:Dictionary=c.snapshot();var undo:int=c._undo.size();var plan:Dictionary=c.preview_road_trim(id,low,high)
	check(plan.ok,"complete surviving road plan")
	if not plan.ok:print("PLAN_FAILURE ",plan);return
	check(c.snapshot()==before and c._undo.size()==undo,"plan consumes no live data, ID or history")
	var expected:Array=plan.roads.duplicate(true);check(c.commit_road_trim(plan).ok,"atomic trim commit")
	check(c.roads==expected and c._undo.size()==undo+1,"one history transaction publishes exact reviewed roads")
	var saved:Dictionary=c.snapshot();var cold:=State.new();var restored:Dictionary=cold.restore(JSON.parse_string(JSON.stringify(saved)))
	check(restored.ok and JSON.parse_string(JSON.stringify(cold.roads))==JSON.parse_string(JSON.stringify(c.roads)),"ordinary save cold read preserves all remaining fields and numeric values")
	check(c.undo().ok and c.roads==before.roads,"Undo restores exact original authored points and attributes")
	check(c._high_watermark.road>=saved.high_watermark.road,"Undo retains high watermark")
	check(c.redo().ok and c.roads==expected,"Redo restores exact split identities")
	check(not c.commit_road_trim(plan).ok,"stale old plan cannot publish")
	facts.append({"low":low,"high":high,"kept_ids":plan.kept_ids,"roads":expected})
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec()
	var c:=city();add(c,[Vector2(-34,-20),Vector2(-28,-20),Vector2(-24,-17),Vector2(-18,-17)])
	var selected:=Trim.select(c,Vector2(-26,-18.5));check(selected.ok and selected.low==0. and absf(selected.high-17.)<.001,"curve bends are not public junction boundaries")
	c.roads[0].source="player";c.roads[0].seed=971;c.roads[0].decoration="benches"
	exercise(c,5.,10.);check(c.roads.size()==2 and c.roads.all(func(r):return r.source=="player" and r.seed==971 and r.decoration=="benches"),"split inherits source seed and street furniture")
	c=city();add(c,[Vector2(-34,-20),Vector2(-18,-20)]);add(c,[Vector2(-28,-24),Vector2(-28,-16)]);add(c,[Vector2(-23,-24),Vector2(-23,-16)])
	selected=Trim.select(c,Vector2(-25,-20),"r1");check(selected.ok and absf(selected.low-6.)<.001 and absf(selected.high-11.)<.001,"actual T and crossing graph delimit public road span")
	exercise(c,selected.low,selected.high);check(c.roads.size()==4 and c.roads[0].id=="r1" and c.roads[1].id=="r4","left source ID retained and right gets a fresh ID")
	c=city();add(c,[Vector2(-34,-20),Vector2(-18,-20)]);exercise(c,0.,4.);check(c.roads.size()==1 and c.roads[0].id=="r1","prefix removal retains surviving source identity")
	c=city();add(c,[Vector2(-34,-20),Vector2(-18,-20)]);exercise(c,12.,16.);check(c.roads.size()==1,"suffix trim")
	c=city();add(c,[Vector2(-34,-20),Vector2(-18,-20)]);exercise(c,0.,16.);check(c.roads.is_empty(),"whole span explicitly removes entire road")
	c=city();add(c,[Vector2(-34,-20),Vector2(-18,-20)]);add(c,[Vector2(-28,-26),Vector2(-28,-14)]);check(c.add_roundabout(Vector2(-28,-20)).ok,"real authored roundabout")
	var plan:Dictionary=c.preview_road_trim("r1",10.,13.);check(plan.ok and plan.roads[0].has("roundabouts") and not plan.roads[1].has("roundabouts"),"one surviving roundabout has exactly one true owning part")
	exercise(c,4.,8.);check(c.Roundabouts.all(c.roads).is_empty(),"removed roundabout cannot remain on nonexistent original geometry")
	c=city();add(c,[Vector2(-34,-20),Vector2(-18,-20)]);add(c,[Vector2(-28,-26),Vector2(-28,-14)]);check(c.add_roundabout(Vector2(-28,-20)).ok,"second roundabout")
	exercise(c,0.,12.,"r2");check(c.Roundabouts.all(c.roads).is_empty(),"cutting crossing road retracts unsupported marker owned by another road")
	c=Bridges.build("straight");var before:Dictionary=c.snapshot();var bridge:Dictionary=c.road_profile(c.roads[0]).bridge_runs[0];var invalid:Dictionary=c.preview_road_trim("r1",float(bridge.start)+.5,float(bridge.start)+1.)
	check(not invalid.ok and c.snapshot()==before,"cutting a wet bridge into unsupported ends is rejected atomically")
	exercise(c,0.,3.);check(c.roads[0].bridge,"dry approach trim retains and revalidates complete bridge")
	c=city();add(c,[Vector2(-34,-20),Vector2(-18,-20)]);plan=c.preview_road_trim("r1",4.,9.);var other:=State.new();check(other.restore(c.snapshot()).ok and not other.commit_road_trim(plan).ok,"another city identity cannot receive a reviewed plan")
	plan.candidate.roads[0].points[0][0]-=1.;check(not c.commit_road_trim(plan).ok,"tampered visible candidate cannot publish")
	c=city();add(c,[Vector2(-34,-20),Vector2(-18,-20)]);add(c,[Vector2(-28,-19.7),Vector2(-28,-15)])
	selected=Trim.select(c,Vector2(-31,-20),"r1");check(absf(selected.high-6.)<.002,"real width-connected T ending creates a boundary")
	c=city();add(c,[Vector2(-34,-20),Vector2(-18,-20)]);add(c,[Vector2(-30,-20),Vector2(-22,-20)])
	selected=Trim.select(c,Vector2(-26,-20),"r1");check(absf(selected.low-4.)<.002 and absf(selected.high-12.)<.002,"actual overlapping ownership transitions delimit a span")
	plan=c.preview_road_trim("r1",4.,12.);check(plan.ok and plan.message.contains("重叠") and plan.roads.any(func(r):return r.id=="r2" and r.points==c.roads[1].points),"overlapping author road remains exact and candidate explains retained paving")
	c=city();check(c.add_house(Vector2(-25,-20)).ok,"real door outside selected cut");add(c,[Vector2(-34,-18.1),Vector2(-18,-18.1)])
	selected=Trim.select(c,Vector2(-26,-18.1),"r1");check(selected.low==0. and absf(selected.high-16.)<.002,"door attachment does not become a public intersection")
	plan=c.preview_road_trim("r1",0.,3.);check(plan.ok and not plan.access.entries.is_empty(),"untouched door retains actual supported access after remote prefix cut")
	exercise(c,0.,3.)
	c=city();check(c.add_house(Vector2(-25,-20)).ok,"actual room for through passage trim");add(c,[Vector2(-25,-24),Vector2(-25,-16)])
	var snapshot:Dictionary=c.snapshot();plan=c.preview_road_trim("r1",3.5,5.)
	check(not plan.ok and c.snapshot()==snapshot,"partial arch road that would end inside the room is rejected")
	c=State.new();var source_bytes:=FileAccess.get_file_as_bytes("res://tools/fixtures/legacy_renaissance_schema13.json")
	check(c.restore(JSON.parse_string(source_bytes.get_string_from_utf8())).ok,"real schema13 legacy world before trim")
	var rights:Dictionary=c.snapshot();exercise(c,0.,1.5)
	check(c.snapshot().schema==rights.schema and c.life_progress==rights.life_progress and c.cafe_credits==rights.cafe_credits and c.matinee_credits==rights.matinee_credits,"legacy schema and formal earned rights remain exact after local trim")
	check(FileAccess.get_file_as_bytes("res://tools/fixtures/legacy_renaissance_schema13.json")==source_bytes,"legacy source file is byte-identical")
	c=city();add(c,[Vector2(-34,-20),Vector2(-10,-20)],"tram");exercise(c,10.,14.)
	var graph:=Trim.Network.new();graph.state=c;graph._build_graph();var rails:Dictionary=preload("res://scripts/world/city_creation_tram_plan.gd").from_network(c,graph)
	check(rails.edges.all(func(e):return e.owner in ["r1","r2"] and not (e.a.x<-24. and e.b.x>-20.)),"production tram rails only use remaining owned street edges")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("ROAD_TRIM ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));quit(0 if failures.is_empty() else 1)
