extends SceneTree
## Same-process A/B against the archived source, never historic milliseconds.
const State = preload("res://scripts/world/city_creation_state.gd")
const Layout = preload("res://scripts/world/city_creation_cafe_layout.gd")
var original: GDScript
var checks := 0
var failures: Array[String] = []
var reports: Array = []

func _initialize() -> void: _run.call_deferred()

func _check(value: bool, label: String) -> void:
	checks+=1
	if not value: failures.append(label)

func _run() -> void:
	original=GDScript.new()
	original.source_code=FileAccess.get_file_as_string("res://废弃/自发巡演_2026-10-15/city_creation_cafe_layout.gd.txt")
	_check(original.reload()==OK,"archived baseline compiles independently")
	var city:=State.new()
	city.initialize()
	city.set_house_role("h3","garden_cafe")
	_compare(city,"h3","one_cafe")
	city.set_house_role("h4","garden_cafe")
	_compare(city,"h3","two_cafes_h3")
	_compare(city,"h4","two_cafes_h4")
	var saved: Dictionary=Layout.layout(city,"h3")
	# A physical point midway along an existing detour exercises cancellation.
	var outward:=Layout.route(city,"h3",saved.entrance,saved.seats[0])
	var canceled: Vector2=outward[0].lerp(outward[1],0.5)
	city.set_house_role("h3","residential")
	var old_return: Array=original.route_with_plan(city,"h3",saved,canceled,saved.entrance)
	var new_return:=Layout.route_with_plan(city,"h3",saved,canceled,saved.entrance)
	_check(old_return==new_return,"role cancellation uses old plan with current geometry and other cafes")
	city.set_house_role("h3","garden_cafe")
	var shortcut: Array[Vector2]=[Vector2(-2.4,-3.45),Vector2(-4.0,-3.45),Vector2(-4,1.55),Vector2(-8,1.55)]
	var edit: Dictionary=city.add_road(shortcut)
	_check(edit.ok,"same nearby road edit is legal")
	_compare(city,"h3","near_road")
	# Direct field geometry changes are intentionally covered: no revision-only
	# shortcut is allowed to hide roads, water, cells or another cafe's role.
	city.waters.append({"id":"benchmark","points":[[-7.5,3.0]],"width":0.8,"kind":"pond","seed":1})
	_compare(city,"h3","water_geometry_changed")
	var from: Vector2=saved.entrance
	var to: Vector2=saved.seats[0]
	var before_water:=Layout.route_with_plan(city,"h3",saved,from,to)
	_check(not before_water.is_empty(),"saved courtyard has a real route before water blocks it")
	if before_water.size()>1:
		var midpoint: Vector2=before_water[0].lerp(before_water[1],0.5)
		city.waters.append({"id":"blocked","points":[[midpoint.x,midpoint.y]],"width":1.4,"kind":"pond","seed":2})
		var after_water:=Layout.route_with_plan(city,"h3",saved,from,to)
		_check(after_water==original.route_with_plan(city,"h3",saved,from,to),"cached old-plan route rechecks current blocked water without a revision change")
		_check(after_water!=before_water,"new water never reuses a dry cached leg through its body")
	print(JSON.stringify({"scope":"same-process archived layout A/B, milliseconds","samples":reports},"\t"))
	if failures.is_empty():
		print("PASS cafe route cache ",checks," checks")
		quit()
	else:
		for failure: String in failures: push_error(failure)
		print("FAIL cafe route cache ",failures.size()," / ",checks)
		quit(1)

func _compare(city, id: String, scenario: String) -> void:
	Layout._cache.clear()
	Layout._contexts.clear()
	original._cache.clear()
	var old_start:=Time.get_ticks_usec()
	var old_plan: Dictionary=original.layout(city,id)
	var old_paths:=_paths(original,city,id,old_plan)
	var old_cold:=float(Time.get_ticks_usec()-old_start)/1000.0
	var new_start:=Time.get_ticks_usec()
	var new_plan:=Layout.layout(city,id)
	var new_paths:=_paths(Layout,city,id,new_plan)
	var new_cold:=float(Time.get_ticks_usec()-new_start)/1000.0
	_check(old_plan==new_plan,scenario+" selects identical candidate layout")
	_check(old_paths==new_paths,scenario+" retains identical ordered six routes")
	var old_samples: Array[float]=[]
	var new_samples: Array[float]=[]
	for sample in range(9):
		old_start=Time.get_ticks_usec()
		_paths(original,city,id,original.layout(city,id))
		old_samples.append(float(Time.get_ticks_usec()-old_start)/1000.0)
		new_start=Time.get_ticks_usec()
		_paths(Layout,city,id,Layout.layout(city,id))
		new_samples.append(float(Time.get_ticks_usec()-new_start)/1000.0)
	old_samples.sort()
	new_samples.sort()
	reports.append({"scenario":scenario,"baseline_cold":old_cold,"optimized_cold":new_cold,"baseline_warm_median9":old_samples[4],"optimized_warm_median9":new_samples[4],"layout":var_to_str(new_plan)})
	# Caller mutations must never poison future routes, including cached empties.
	if not new_paths.is_empty() and not new_paths[0].is_empty():
		new_paths[0].clear()
		_check(_paths(Layout,city,id,new_plan)==old_paths,scenario+" routes returned by value")
	for x in range(-12,-1):
		for z in range(-5,7):
			var at:=Vector2(x+0.137,z+0.319)
			_check(original.clear(city,at,0.34)==Layout.clear(city,at,0.34),scenario+" exact chair clearance "+str(at))

func _paths(helper, city, id: String, plan: Dictionary) -> Array:
	var result: Array=[]
	if plan.is_empty(): return result
	for seat: Vector2 in plan.seats:
		result.append(helper.route(city,id,plan.entrance,seat))
		result.append(helper.route(city,id,seat,plan.entrance))
	return result
