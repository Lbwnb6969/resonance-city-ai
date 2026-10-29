extends SceneTree
## Adjacent authored water crossings must share each bridge's actual flat deck.
const State=preload("res://scripts/world/city_creation_state.gd")
const Bridge=preload("res://scripts/visual/city_creation_bridge.gd")
var checks:=0
var failures:Array[String]=[]
var facts:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
static func fixture(spacing:float,reverse:bool=false,era:String="clockwork")->RefCounted:
	var city:=State.new();city.initialize_free()
	assert(city.add_water([Vector2(-15,-8)] as Array[Vector2],2.4,"pond").ok)
	assert(city.add_water([Vector2(-15,-8+spacing)] as Array[Vector2],2.4,"pond").ok)
	var zone:Dictionary=city.add_district([Vector2(-15,-8)] as Array[Vector2],3.2)
	assert(zone.ok and city.set_district_era(zone.district_id,era).ok)
	var points:Array[Vector2]=[Vector2(-15,-12),Vector2(-15,spacing-4)]
	if reverse:points.reverse()
	assert(city.add_road(points,"promenade","none").ok)
	return city
func measure(city:RefCounted)->Dictionary:
	var profile:Dictionary=city.road_profile(city.roads[-1]);var maximum:=0.;var wet:=0;var heights:Dictionary={};var families:Array=[]
	for run:Dictionary in profile.bridge_runs:
		families.append(run.get("family","stone"))
		for sample:Dictionary in profile.samples:
			if sample.distance<run.start or sample.distance>run.end:continue
			maximum=maxf(maximum,absf(float(sample.y)-float(run.deck_y)));wet+=1
			maximum=maxf(maximum,absf(float(city.street_height(sample.xz))-float(run.deck_y)))
	for sample:Dictionary in profile.samples:heights[Vector2(sample.xz).snapped(Vector2.ONE*.00001)]=sample.y
	return {"max_gap_m":maximum,"wet_samples":wet,"families":families,"heights":heights,"runs":profile.bridge_runs.size()}
func run()->void:
	for era:String in ["clockwork","modern_eco"]:
		for spacing:float in [3.5,4.,5.,6.]:
			var city:RefCounted=fixture(spacing,false,era);var original:Dictionary=city.snapshot();var profile:Dictionary=city.road_profile(city.roads[-1]);var result:=measure(city)
			check(result.runs==2 and result.families.has("clockwork_truss" if era=="clockwork" else "modern_single_arch") and result.families.has("stone"),"two real neighbouring bridges retain different architecture")
			check(result.wet_samples>0 and result.max_gap_m<.00001,"walking profile equals both designed flat decks")
			var geometry:Dictionary=Bridge.prepare(profile)
			check(geometry.get("trusses" if era=="clockwork" else "modern").size()==1 and geometry.runs.size()==1,"production renderer consumes both actual architectural runs")
			check(city.snapshot()==original,"derived bridge plans leave authored content and identities unchanged")
			var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(original))).ok,"mixed bridge city cold restore")
			check(cold.road_profile(cold.roads[-1])==profile,"independent cold height profiles match")
			check(city.undo().ok and city.roads.is_empty() and city.redo().ok,"one native road transaction Undo/Redo")
			check(city.road_profile(city.roads[-1])==profile,"Redo restores exact profiles and bridge architecture")
			var reversed:RefCounted=fixture(spacing,true,era);var opposite:=measure(reversed);var direction_error:=0.
			for at:Vector2 in result.heights:
				if opposite.heights.has(at):direction_error=maxf(direction_error,absf(float(result.heights[at])-float(opposite.heights[at])))
			check(opposite.max_gap_m<.00001 and direction_error<.00001,"road drawing direction cannot change bridge deck or approaches")
			facts.append({"era":era,"spacing":spacing,"max_gap_m":result.max_gap_m,"wet_samples":result.wet_samples,"direction_error_m":direction_error})
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--report="):FileAccess.open(arg.trim_prefix("--report="),FileAccess.WRITE).store_string(JSON.stringify(report,"\t"))
	print("BRIDGE_GRADES ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
