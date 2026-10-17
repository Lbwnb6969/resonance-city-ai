extends SceneTree
## CPU-only derived geometry contracts. No Life, renderer or GPU is started.
const State = preload("res://scripts/world/city_creation_state.gd")
const Courts = preload("res://scripts/world/city_creation_courtyards.gd")
const CafePlans = preload("res://scripts/world/city_creation_cafe_layout_context.gd")
const Frontage = preload("res://scripts/world/city_creation_frontage.gd")
const OUTPUT := "res://验证记录/自然庭院_2026-10-16/state.json"
const ORIGIN := Vector2(-15.13,-11.37)
var checks := 0
var failures: Array[String] = []
var evidence: Dictionary = {}


func _initialize() -> void: _run.call_deferred()


func _check(ok: bool, label: String) -> void:
	checks += 1
	if not ok: failures.append(label); push_error(label)


func _empty() -> CityCreationState:
	var city := State.new()
	city.initialize()
	city.houses.clear()
	city.roads.clear()
	city.plants.clear()
	city.waters.clear()
	city._undo.clear()
	city._redo.clear()
	city.revision += 1
	return city


func _cell(x: int,z: int,level: int=0,kind: String="room") -> Dictionary:
	return {"x":x,"z":z,"level":level,"kind":kind}


func _ring(size: int) -> Array:
	var cells: Array = []
	for z in range(size):
		for x in range(size):
			if x==0 or z==0 or x==size-1 or z==size-1: cells.append(_cell(x,z))
	return cells


func _build(city: CityCreationState,cells: Array,origin: Vector2=ORIGIN) -> String:
	var result := city.add_house_stroke(origin,cells)
	_check(result.ok,"real State house stroke: "+str(result.message))
	return str(result.get("house_id","")) if result.ok else ""


func _run() -> void:
	var city := _empty()
	var house_id := _build(city,_ring(5))
	var planner := Courts.new()
	var before := city.snapshot()
	var rows := planner.plans(city)
	_check(rows.size()==1,"one genuine five-by-five room ring yields one courtyard")
	if rows.is_empty(): _finish(); return
	var original := rows.duplicate(true)
	var plan: Dictionary = rows[0]
	_check(plan.tiles.size()==9 and plan.members==[house_id],"adaptive off-origin grid discovers exactly the nine empty cells and true member")
	_check(plan.bounds.size.is_equal_approx(Vector2.ONE*5.4),"paving consists of real 1.8m footprints")
	_check(not plan.fountain.is_empty() and plan.fountain.radius==0.73 and plan.fountain.scale==0.16,"empty dry courtyard admits measured .73m fountain circle")
	_check(city.snapshot()==before,"planning neither edits city nor reads or builds height state")
	_validate(city,plan,planner)
	var count := planner.rebuild_count
	_check(city.set_house_name(house_id,"桂花院").ok and city.set_house_palette(house_id,3).ok,"real household name and palette edits succeed")
	city.life_progress.purchases += 1
	_check(planner.plans(city)==rows and planner.rebuild_count==count,"name palette and life ledger do not rebuild or reassign courtyard")
	# Isolate derived-cache input selection; this is not a claim of earning a
	# growth reward. Remove the synthetic cosmetic before any State transaction.
	city.houses[0].finish = "dawn"
	_check(planner.plans(city)==rows and planner.rebuild_count==count,"finish metadata is excluded from geometry signature")
	city.houses[0].erase("finish")
	var opened_cell := ""
	for cell: Dictionary in city.houses[0].cells:
		if int(cell.x)==2 and int(cell.z)==0: opened_cell=str(cell.id)
	_check(city.remove_cell(house_id,opened_cell).ok and planner.plans(city).is_empty(),"removing a real perimeter room opens ring and removes public paving")
	_check(city.undo().ok and planner.plans(city)==original,"construction undo restores the exact closed hole and fountain")
	_check(rows==original,"rebuilding never mutates previously published plan objects")
	rows[0].tiles.clear()
	_check(planner.plans(city)[0].tiles.size()==9,"caller mutation cannot corrupt planner cache")
	var copied := Courts.new()
	copied.copy_cache_from(planner)
	count = copied.rebuild_count
	_check(copied.plans(city)==planner.plans(city) and copied.rebuild_count==count,"shallow copied immutable current cache needs no rebuild")
	var loaded := State.new()
	_check(loaded.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok,"real courtyard city roundtrips full precision JSON")
	_check(Courts.new().plans(loaded)==planner.plans(city),"independent context and JSON restore derive deterministic plans")
	var stable_id := str(planner.plans(city)[0].id)
	_check(city.add_house(Vector2(12,8)).ok and str(planner.plans(city)[0].id)==stable_id,"remote construction does not reassign existing hole ID")
	var road_points: Array[Vector2] = [ORIGIN+Vector2(1.2,2)*1.8,ORIGIN+Vector2(2.8,2)*1.8]
	_check(city.add_road(road_points).ok,"actual interior path is accepted by State")
	var with_road := planner.plans(city)
	_check(with_road.size()==1 and with_road[0].tiles.size()==9,"real interior road preserves dry paving")
	if not with_road.is_empty():
		_check(with_road[0].fountain.is_empty() or with_road[0].fountain.at!=original[0].fountain.at,"new path moves or omits fountain rather than covering it")
		_validate(city,with_road[0],planner)
	evidence.closed = _describe(original[0])
	evidence.road = _describe(with_road[0]) if not with_road.is_empty() else {}
	_test_shapes()
	_test_cross_house()
	_test_obstacles()
	_finish()


func _test_shapes() -> void:
	for shape: String in ["L","U","small"]:
		var city := _empty()
		var cells: Array = _ring(3) if shape=="small" else []
		if shape!="small":
			for z in range(5):
				for x in range(5):
					if x==0 or z==0 or (shape=="U" and x==4): cells.append(_cell(x,z))
		_build(city,cells)
		_check(Courts.new().plans(city).is_empty(),shape+" footprint does not create a courtyard by bounding-box fill")
	var city := _empty()
	var cells := _ring(6)
	cells.append(_cell(1,1))
	_build(city,cells)
	var plans := Courts.new().plans(city)
	_check(plans.size()==1 and plans[0].tiles.size()==15,"nonrectangular large enclosed hole keeps exact empty cells")
	if not plans.is_empty(): _validate(city,plans[0],Courts.new())


func _test_cross_house() -> void:
	var city := _empty()
	var top: Array = []
	var right: Array = []
	var bottom: Array = []
	var left: Array = []
	for x in range(5): top.append(_cell(x,0))
	for z in range(4): right.append(_cell(0,z))
	for x in range(4): bottom.append(_cell(x,0))
	for z in range(3): left.append(_cell(0,z))
	_build(city,top)
	_build(city,right,ORIGIN+Vector2(4,1)*1.8)
	_build(city,bottom,ORIGIN+Vector2(0,4)*1.8)
	_build(city,left,ORIGIN+Vector2(0,1)*1.8)
	var planner := Courts.new()
	var plans := planner.plans(city)
	_check(plans.size()==1 and plans[0].tiles.size()==9 and plans[0].members.size()==4,"four separate aligned households form one genuine enclosed courtyard")
	if not plans.is_empty(): _validate(city,plans[0],planner)
	# One millimetre phase displacement is allowed; a real 2cm gap is not.
	city.houses[1].origin[0] += 0.001
	_check(Courts.new().plans(city).size()==1,"two-millimetre alignment tolerance accepts a one-millimetre phase offset")
	city.houses[1].origin[0] += 0.02
	_check(Courts.new().plans(city).is_empty(),"visible misalignment does not fabricate a closed room ring")


func _test_obstacles() -> void:
	var city := _empty()
	var id := _build(city,_ring(6))
	_check(city.add_cells(id,[_cell(1,0,1),_cell(1,1,1,"terrace")]).ok,"real supported upper terrace projects into courtyard")
	_build(city,[_cell(0,0)],ORIGIN+Vector2(3,3)*1.8)
	var planner := Courts.new()
	var plans := planner.plans(city)
	_check(plans.size()==1 and plans[0].tiles.size()==14,"upper terrace and detached island house each exclude their actual projected tile")
	if not plans.is_empty(): _validate(city,plans[0],planner)
	city = _empty()
	id = _build(city,_ring(5))
	planner = Courts.new()
	var original := planner.plans(city)
	var pond_points: Array[Vector2] = [ORIGIN+Vector2(1,2)*1.8]
	_check(city.add_water(pond_points,1.2,"pond").ok,"real pond is legal inside courtyard")
	plans = planner.plans(city)
	_check(plans.size()==1 and plans[0].tiles.size()<9 and plans[0].id==original[0].id,"water filters individual dry tiles without renaming original hole")
	if not plans.is_empty(): _validate(city,plans[0],planner)
	_check(city.undo().ok and planner.plans(city)==original,"undo pond restores original dry paving and decoration")
	var count := planner.rebuild_count
	var trees: Array[Vector2] = [original[0].center]
	_check(city.add_vegetation_stroke(trees,"olive",0.25).ok,"real authored tree can occupy empty courtyard")
	var plants := city.plants.duplicate(true)
	plans = planner.plans(city)
	_check(plans.size()==1 and plans[0].tiles.size()==9 and not plans[0].planters.is_empty(),"existing planting receives a tree well without deleting paving")
	_check(city.plants==plants and planner.rebuild_count==count and original[0].planters.is_empty(),"tree change replaces decoration only and leaves authoritative plants and old plan immutable")
	if not plans.is_empty(): _validate(city,plans[0],planner)
	_check(city.undo().ok and planner.plans(city)==original,"plant undo restores decoration without rebuilding room topology")
	_check(city.set_house_role(id,"venue").ok,"real venue role selected")
	plans = planner.plans(city)
	_check(plans.size()==1 and plans[0].tiles.size()==9 and plans[0].fountain.is_empty(),"venue gathering circles reserve space while retaining courtyard paving")
	_check(city.set_house_role(id,"garden_cafe").ok,"real garden cafe role selected")
	var cafe := CafePlans.new().layout(city,id)
	_check(not cafe.is_empty(),"actual cafe layout supplies its gathering and entry corridor")
	plans = planner.plans(city)
	_check(plans.size()==1 and plans[0].tiles.size()==9,"cafe use never removes courtyard paving")
	if not plans.is_empty(): _validate(city,plans[0],planner)
	evidence.cafe = cafe


func _validate(city: CityCreationState, plan: Dictionary, planner: RefCounted) -> void:
	var dry := true
	var footprints := true
	for tile: Rect2 in plan.tiles:
		for x: float in [0.0,0.5,1.0]:
			for z: float in [0.0,0.5,1.0]:
				if city.water_clearance(tile.position+tile.size*Vector2(x,z))<0.05: dry=false
		for house: Dictionary in city.houses:
			for cell: Dictionary in house.cells:
				var rect := Rect2(Frontage.center(house,cell)-Vector2.ONE*0.9,Vector2.ONE*1.8)
				if rect.grow(-0.002).intersects(tile.grow(-0.002)): footprints=false
	_check(dry,"all nine actual tile samples clear analytic water by .05m")
	_check(footprints,"paving overlaps no actual room or terrace at any height")
	if plan.fountain.is_empty(): return
	var at: Vector2 = plan.fountain.at
	var radius: float = plan.fountain.radius
	var inside := true
	for index in range(128):
		var sample := at+Vector2.from_angle(float(index)*TAU/128.0)*(radius+0.1499)
		var covered := false
		for tile: Rect2 in plan.tiles:
			if tile.grow(0.00001).has_point(sample): covered=true; break
		if not covered: inside=false
	_check(inside,"independent circumference samples retain full fountain and .15m edge margin")
	var roads_clear := true
	for road: Dictionary in city.roads:
		for index in range(1,road.points.size()):
			var a := Vector2(road.points[index-1][0],road.points[index-1][1])
			var b := Vector2(road.points[index][0],road.points[index][1])
			if at.distance_to(Geometry2D.get_closest_point_to_segment(at,a,b))<radius+float(road.width)*0.5+0.30-0.00001: roads_clear=false
	for road: Dictionary in city.roads:
		for polygon: PackedVector2Array in city.road_junctions().additions(str(road.id)):
			if Geometry2D.is_point_in_polygon(at,polygon): roads_clear=false
			for index in range(polygon.size()):
				if at.distance_to(Geometry2D.get_closest_point_to_segment(at,polygon[index],polygon[(index+1)%polygon.size()]))<radius+0.30-0.00001: roads_clear=false
	_check(roads_clear,"actual path cores and junction pavement keep fountain plus pedestrian clearance")
	var doors_clear := true
	var gatherings_clear := true
	var cafes := CafePlans.new()
	for house: Dictionary in city.houses:
		for entry: Dictionary in city.house_entrances(str(house.id)):
			var end: Vector2 = entry.at+(Vector2(entry.at)-Vector2(entry.wall_at)).normalized()*0.5
			if at.distance_to(Geometry2D.get_closest_point_to_segment(at,entry.wall_at,end))<radius+0.30-0.00001: doors_clear=false
			if str(house.role)=="venue" and at.distance_to(Vector2(entry.wall_at)+Vector2(entry.side)*2.2)<radius+3.0: gatherings_clear=false
		var cafe := cafes.layout(city,str(house.id))
		if not cafe.is_empty():
			if at.distance_to(cafe.center)<radius+3.0 or at.distance_to(Geometry2D.get_closest_point_to_segment(at,cafe.entrance,cafe.center))<radius+1.2: gatherings_clear=false
	_check(doors_clear and gatherings_clear,"actual entrance extensions venue circles and cafe geometry remain clear")
	var trees_clear := true
	for plant: Dictionary in city.plants:
		var trunk := (0.42 if str(plant.kind)=="shrub" else 0.20)*float(plant.scale)
		if at.distance_to(Vector2(plant.position[0],plant.position[1]))<radius+trunk+0.15: trees_clear=false
	_check(trees_clear and city.water_clearance(at)>=radius+0.05,"fountain avoids real authored planting bases and analytic water")
	_check(planner._fountain_clear(city,at,planner._make_obstacles(city)),"all current CPU exclusion contracts agree")


func _describe(plan: Dictionary) -> Dictionary:
	return {"id":plan.id,"tiles":plan.tiles.size(),"members":plan.members,"bounds":plan.bounds,"center":plan.center,"fountain":plan.fountain}


func _finish() -> void:
	evidence.scope = "CPU State construction and derived geometry only; no real Life or GPU/visual verification"
	evidence.command = "Godot_v4.7.2-stable_win64_console.exe --headless --path . --script tools/check_creation_courtyards_state.gd"
	var result := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"evidence":evidence}
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT.get_base_dir()))
	var file := FileAccess.open(OUTPUT,FileAccess.WRITE)
	file.store_string(JSON.stringify(result,"\t",true,true))
	file.close()
	print("CREATION_COURTYARDS_STATE ",JSON.stringify(result))
	quit(0 if failures.is_empty() else 1)
