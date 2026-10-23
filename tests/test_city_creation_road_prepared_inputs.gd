extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize():run.call_deferred()
func check(ok:bool,label:String):
	checks+=1
	if not ok:failures.append(label);push_error(label)
func prepare(city):
	city.prepare_ground_height()
	var town:=Renderer.new();town.state=city;town.record_only=true;town._prepare_road_layout()
	return town
func run():
	var city:=State.new();check(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))).ok,"original flagship restores")
	var source:Dictionary=city.snapshot();var a=prepare(city);var cold=prepare(city)
	for road:Dictionary in city.roads:
		var before:Dictionary=cold._prepare_road_data(road)
		a._road_fingerprint(road)
		check(a._prepare_road_data(road)==before,"handed-off full mesh/stairs/curbs/era/garden/bridge/tram equals cold compiler: "+str(road.id))
	check(city.roads.size()==60 and int(a.rebuild_stats.road_decoration_handoffs)==60,"sixty roads each reuse exactly one fingerprint preparation")
	check(not a.has_meta("next_road_decoration") and city.snapshot()==source,"handoff is consumed and never mutates the city")
	var road:Dictionary=city.roads[0];a._road_fingerprint(road)
	check(city.add_terrain_stroke([Vector2(-28,26)],"raise",2.,1.,2).ok,"real terrain revision between preparation calls")
	city.prepare_ground_height();a._prepare_road_layout();cold._prepare_road_layout()
	check(a._prepare_road_data(road)==cold._prepare_road_data(road) and int(a.rebuild_stats.road_decoration_handoffs)==60,"stale slot falls back to current terrain without reusing an old revision")
	Renderer.BudgetRebuild.new()._dispose_context(a);Renderer.BudgetRebuild.new()._dispose_context(cold)
	print("ROAD_PREPARED_CPU ",checks-failures.size(),"/",checks," ",failures);quit(0 if failures.is_empty() else 1)
