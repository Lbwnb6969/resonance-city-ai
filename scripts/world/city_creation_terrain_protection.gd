extends RefCounted
## Target-elevation building/activity pads, followed by terrain-height roads.
const CafePlans = preload("res://scripts/world/city_creation_cafe_layout_context.gd")
const RoadHeights = preload("res://scripts/world/city_creation_road_heights.gd")
const Roundabouts = preload("res://scripts/world/city_creation_roundabouts.gd")
var cafes := CafePlans.new()
var _layout_signature: Variant = null
var _house_pads: Array = []
var _court_pads: Array = []
var layout_rebuilds := 0

func copy_cache_from(source: RefCounted) -> void:
	# Independent worker values, with no City weakrefs or cafe visibility graph.
	_layout_signature = source._layout_signature
	# _prepare_layout replaces both arrays, and build only reads their records.
	_house_pads = source._house_pads
	_court_pads = source._court_pads
	layout_rebuilds = source.layout_rebuilds

func build(city: RefCounted,road_profiles: Dictionary = {}) -> Array:
	_prepare_layout(city)
	# Keep immutable layout records in their original order around road cuts:
	# the height solver's floating-point accumulation stays exact.
	var result: Array = _house_pads.duplicate()
	for road: Dictionary in city.roads:
		var profile: Dictionary = road_profiles.get(str(road.id),{})
		var samples: Array = profile.get("samples",[])
		for index in range(samples.size()-1):
			if samples[index].bridge or samples[index+1].bridge: continue
			var low := minf(float(samples[index].y),float(samples[index+1].y))
			var high := maxf(float(samples[index].y),float(samples[index+1].y))
			var steep := (high-low)/maxf(0.000001,Vector2(samples[index].xz).distance_to(samples[index+1].xz))>RoadHeights.MAX_GRADE
			# A half-metre terrain triangle cannot resolve individual .14m risers.
			# Carve a continuous conservative bed; only the actual road mesh makes
			# steps. The halo covers a complete terrain triangle under each edge.
			result.append({"id":str(road.id)+"/"+str(index),"a":samples[index].xz,"b":samples[index+1].xz,"radius":float(road.width)*0.5+0.72,"target_y":low-(0.24 if steep else 0.075),"transition":0.65,"cut_only":true})
	result.append_array(_court_pads)
	for marker: Dictionary in Roundabouts.all(city.roads):
		result.append({"id":"roundabout/"+marker.owner_id+str(marker.center),"a":marker.center,"b":marker.center,"radius":marker.radius,"target_y":city._ground_terrain.raw_height_at(marker.center),"transition":1.2,"priority":4.0})
	return result

func _prepare_layout(city: RefCounted) -> void:
	# Layout depends on buildings, doors, roads and water, not sculpted height.
	# Road beds still use this revision's newly computed profile in build().
	var geometry:Array=[]
	for house:Dictionary in city.houses:geometry.append([house.id,house.origin,house.cells,house.get("role",""),house.get("base_y",0.)])
	var signature := hash([geometry,city.roads,city.waters])
	if signature==_layout_signature: return
	var result: Array = []
	for house: Dictionary in city.houses:
		var target := float(house.get("base_y",0.0))-0.02
		for cell: Dictionary in house.cells:
			if int(cell.level)!=0: continue
			var center := Vector2(float(house.origin[0])+int(cell.x)*1.8,float(house.origin[1])+int(cell.z)*1.8)
			# Shoulder ends at the wall face; downhill stone remains visible.
			result.append({"id":str(cell.id),"rect":Rect2(center-Vector2.ONE*0.72,Vector2.ONE*1.44),"target_y":target,"transition":0.18,"priority":3.0})
		for entry: Dictionary in city.house_entrances(str(house.id)):
			var end: Vector2 = entry.wall_at+Vector2(entry.side)*0.65
			result.append({"id":str(house.id)+str(entry.cell_id)+str(entry.side),"a":Vector2(entry.wall_at),"b":end,"radius":0.42,"target_y":target,"transition":0.25,"priority":3.0})
			if str(house.get("role",""))=="venue":
				var gathering: Vector2 = entry.wall_at+Vector2(entry.side)*2.2
				result.append({"id":"venue"+str(house.id)+str(entry.cell_id)+str(entry.side),"a":gathering,"b":gathering,"radius":3.0,"target_y":target})
		if str(house.get("role",""))=="garden_cafe":
			var plan: Dictionary = cafes.layout(city,str(house.id))
			if not plan.is_empty():
				var cafe_target := float(plan.get("base_y",house.get("base_y",0.0)))-0.02
				result.append({"id":"cafe"+str(house.id),"a":Vector2(plan.center),"b":Vector2(plan.center),"radius":3.0,"target_y":cafe_target})
				result.append({"id":"cafe_path"+str(house.id),"a":Vector2(plan.entrance),"b":Vector2(plan.center),"radius":1.2,"target_y":cafe_target})
	_house_pads = result
	var courts: Array = []
	for court: Dictionary in city.courtyard_plans():
		for index in range(court.tiles.size()):
			courts.append({"id":str(court.id)+"/"+str(index),"rect":court.tiles[index].grow(0.15),"target_y":float(court.get("base_y",0.0))-0.02})
	_court_pads = courts
	_layout_signature = signature
	layout_rebuilds += 1
