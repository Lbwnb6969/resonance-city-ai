extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _wait(renderer:Node3D,commit:bool)->Dictionary:
	var end:=Time.get_ticks_msec()+60000;var report:Dictionary={}
	while Time.get_ticks_msec()<end:
		report=renderer.poll_budget_rebuild(3.5,commit)
		if (not commit and report.get("ready",false)) or not report.pending:break
		await process_frame
	return report
func _run()->void:
	Engine.max_fps=180
	var city:=State.new();_check(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/经营河湾样例.json"))).ok,"real production city restores")
	var renderer:=Renderer.new();root.add_child(renderer);renderer.setup(city)
	for house:Dictionary in city.houses:
		if str(house.role) in ["bakery","workshop","garden_cafe"]:city.site_blessing(str(house.id))
	var before:=var_to_bytes(city._site_blessings)
	var points:Array[Vector2]=[Vector2(-12,-16),Vector2(-10,-17),Vector2(-7,-16)]
	_check(city.add_vegetation_stroke(points,"olive",1.4).ok,"actual trees are planted near the workshop")
	var authored:Dictionary=city.snapshot();renderer.request_budget_rebuild();var report:Dictionary=await _wait(renderer,false)
	_check(report.get("ready",false) and var_to_bytes(city._site_blessings)==before,"held worker never publishes changed site bonuses")
	var staged:Node3D=renderer.budget_rebuild.staging;var expected:Dictionary={};var cold:=State.new();_check(cold.restore(authored).ok,"independent state restores the edited intent")
	for house:Dictionary in cold.houses:
		if str(house.role) in ["bakery","workshop","garden_cafe"]:expected[str(house.id)]=cold.site_blessing(str(house.id))
	_check(staged.state._site_blessings==expected,"private worker computes every exact forest water and cafe blessing")
	_check(int(expected.h2.get("trees",0))>int(city._site_blessings.h2.get("trees",0)),"new visible trees really change the workshop forest count")
	renderer.cancel_budget_rebuild();_check(var_to_bytes(city._site_blessings)==before,"cancel discards unpublished blessings")
	renderer.request_budget_rebuild();report=await _wait(renderer,true)
	_check(report.get("committed",false) and city._site_blessings==expected and city._prosperity_revision==city.revision,"geometry and its cached site bonuses publish in one commit")
	_check(city.snapshot()==authored,"derived preparation does not produce stock or change authored progression")
	var after:=var_to_bytes(city._site_blessings)
	for id:String in expected:_check(city.site_blessing(id)==expected[id],"live status uses prepared exact bonus "+id)
	_check(var_to_bytes(city._site_blessings)==after,"status queries leave the published bonus cache intact")
	renderer.queue_free();await process_frame;print("PREPARED_BLESSINGS ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
