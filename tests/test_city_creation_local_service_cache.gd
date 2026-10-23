extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_civic_fixture.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Local=preload("res://scripts/visual/city_creation_local_service_cache.gd")
const Change=preload("res://scripts/world/city_creation_change_set.gd")
const Layout=preload("res://scripts/world/city_creation_cafe_layout_context.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var fixture:=Fixture.build();var city:RefCounted=fixture.city;var r:=Renderer.new();root.add_child(r);r.setup(city);r.cafes.update(r,{},true)
	for h:Dictionary in city.houses:city.site_blessing(str(h.id))
	var initial:Dictionary=city.snapshot();var previous:=Change.snapshot(city);var published:=Local.capture(r)
	var reused:=0
	for kind:String in ["house","road","water","terrain","plant","near_water","open_court"]:
		check(city.restore(initial).ok,"reset isolated source "+kind)
		var result:Dictionary
		match kind:
			"house":result=city.add_house(Vector2(30,28))
			"road":result=city.add_road([Vector2(26,25),Vector2(35,25)] as Array[Vector2])
			"water":result=city.add_water([Vector2(30,28)] as Array[Vector2],2.,"pond")
			"terrain":result=city.add_terrain_stroke([Vector2(30,28)] as Array[Vector2],"raise",1.,.3)
			"plant":result=city.place_plant(Vector2(30,28),"olive")
			"near_water":result=city.add_water([Vector2(-17,-12)] as Array[Vector2],2.,"pond")
			"open_court":result=city.remove_house(str(fixture.court_ids[0]))
		check(result.ok,"public local edit "+kind)
		var snapshot:Dictionary=city.snapshot();var context:Node3D=r.budget_rebuild._context(r,Change.snapshot(city))
		context.set_meta("local_service_seed",Local.seed(Change.diff(previous,Change.snapshot(city)),published))
		var stats:=Local.prime(context);reused+=int(stats.blessings_reused)+int(stats.cafes_reused)+int(stats.courts_reused)
		var fresh:=Fixture.State.new();check(fresh.restore(snapshot).ok,"fresh cold city "+kind)
		check(context.state.courtyard_plans()==fresh.courtyard_plans(),"whole courtyard plan arrays equal cold derivation "+kind)
		for h:Dictionary in fresh.houses:check(context.state.site_blessing(str(h.id))==fresh.site_blessing(str(h.id)),"site blessing equal cold "+kind+"/"+str(h.id))
		var cold:=Layout.new();context.state.prepare_ground_height();fresh.prepare_ground_height()
		for id:String in context.get_meta("local_cafes",{}):
			var plan:Dictionary=cold.layout(fresh,id)
			check(published.cafes[id].plan==plan,"reused actual cafe plan equals full layout "+kind)
			var view=preload("res://scripts/visual/city_creation_cafe.gd").new();view.layout_api=cold
			check(published.cafes[id].extras==view._extras(fresh,plan,id),"reused flowers fountain and seat routes equal cold "+kind)
		check(not stats.cold and city.snapshot()==snapshot,"private preparation leaves full authored city unchanged "+kind)
		r.budget_rebuild._dispose_context(context)
	check(reused>0,"remote published services are actually reused")
	var context:Node3D=r.budget_rebuild._context(r,Change.snapshot(city));var seed:=Local.seed(Change.diff(previous,Change.snapshot(city)),published);seed.published.rules=-1
	context.set_meta("local_service_seed",seed);check(Local.prime(context).cold,"global rule changes fall back to complete preparation")
	r.budget_rebuild._dispose_context(context);r.queue_free();await process_frame
	print("LOCAL_SERVICE_CACHE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"reused":reused,"failures":failures}));quit(0 if failures.is_empty() else 1)
