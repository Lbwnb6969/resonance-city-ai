extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const Change=preload("res://scripts/world/city_creation_change_set.gd")
var demo
func _initialize()->void:run.call_deferred()
func parts(renderer,road:Dictionary)->Dictionary:
	var bounds:=Rect2(Vector2(road.points[0][0],road.points[0][1]),Vector2.ZERO)
	for point:Array in road.points:bounds=bounds.expand(Vector2(point[0],point[1]))
	return {"road":hash(road),"promenade":hash(renderer.promenade.prepare(renderer,road)),"era":hash(renderer.era_streets.prepare(renderer,road)),"tram":hash(renderer.TramTracks.signature(renderer.state,road)),"profile":renderer.state.road_profile(road).signature,"shoulder":renderer.state._ground_terrain.region_signature(bounds.grow(float(road.width)*.5+1.6),true),"water":hash(renderer._road_water_signature(road)),"join":hash(renderer._road_join_signature(road)),"junction":renderer.state._junctions.signature(str(road.id))}
func run()->void:
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory="res://验证记录/模块依赖_2026-10-20/作品";root.add_child(demo)
	demo.life.set_process(false);demo.music.set_muted(true)
	var result:Dictionary=demo.state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json")));assert(result.ok)
	demo.town.rebuild();demo.life._sync();demo.life.set_process(false)
	var old:Dictionary={}
	for road:Dictionary in demo.state.roads:old[str(road.id)]=parts(demo.town,road)
	result=demo.state.add_cell("h61",0,0,3);assert(result.ok)
	var context=demo.town.budget_rebuild._context(demo.town,Change.snapshot(demo.state))
	context.state.prepare_ground_height();context.state.road_junctions();context._prepare_road_layout()
	var rows:Array=[]
	for road:Dictionary in context.state.roads:
		var now:Dictionary=parts(context,road);var changed:Dictionary={}
		for key:String in now:
			if now[key]!=old[str(road.id)][key]:changed[key]=[old[str(road.id)][key],now[key]]
		if not changed.is_empty():rows.append({"road":road.id,"changed":changed})
	print("MODULE_DEPENDENCIES ",JSON.stringify(rows))
	demo.town.budget_rebuild._dispose_context(context);demo.queue_free();await process_frame;quit()
