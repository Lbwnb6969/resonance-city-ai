extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func compare(city:RefCounted,warm:Node3D,cold:Node3D,label:String)->void:
	city.prepare_ground_height()
	warm.building_context.prepare(city.houses,city.roads);cold.building_context.prepare(city.houses,city.roads)
	cold.house_geometry_cache.clear()
	var same:=true;var views:=true
	for house:Dictionary in city.houses:
		var id:=str(house.id)
		same=same and warm._house_geometry_fingerprint(house)==cold._house_geometry_fingerprint(house)
		views=views and warm._frontage_views.get(id)==cold._frontage_views.get(id) and warm.craft.layouts.get(id)==cold.craft.layouts.get(id)
	check(same,"cached structural fingerprint equals fresh planner after "+label)
	check(views,"retained facade and delivery placements equal fresh planner after "+label)
func run()->void:
	var city:=State.new();check(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))).ok,"flagship fixture")
	var warm:=Renderer.new();var cold:=Renderer.new();warm.state=city;cold.state=city
	compare(city,warm,cold,"initial city")
	check(city.add_cell("h61",0,0,3).ok,"actual upper module")
	compare(city,warm,cold,"upper module")
	var points:Array[Vector2]=[Vector2(-36,-32)]
	check(city.add_terrain_stroke(points,"raise",2.5,.2).ok,"actual terrain edit")
	compare(city,warm,cold,"terrain")
	check(city.set_house_style("h4","stone").ok,"actual style edit")
	compare(city,warm,cold,"style")
	check(city.set_house_role("h1","workshop").ok,"actual role edit")
	compare(city,warm,cold,"role")
	check(city.undo().ok,"actual history")
	compare(city,warm,cold,"undo")
	for town:Node3D in [warm,cold]:
		for component:Node in [town.shore,town.lilypads,town.wildlife]:component.free()
		town.free()
	print("HOUSE_DEPENDENCY_CACHE ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}))
	quit(0 if failures.is_empty() else 1)
