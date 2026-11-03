extends RefCounted
## Final protected terrain, real road treads, and small furniture support only.
const SUPPORT_TOLERANCE:=.035
const MAX_GRADE:=.45
static func enabled(city)->bool:return city.TerrainPolicy.enabled(city)
static func stamp(city)->Array:
	if not enabled(city):return []
	city.prepare_ground_height()
	return [city.terrain_policy,city._ground_terrain.generation]
static func support(city,at:Vector2,radius:float)->Dictionary:
	var boat:Dictionary=preload("res://scripts/world/city_creation_boathouse_plan.gd").floor_support(city,at,radius)
	if not boat.is_empty():return boat
	var deck:Dictionary=preload("res://scripts/world/city_creation_tea_deck_plan.gd").floor_support(city,at,radius)
	if not deck.is_empty():return deck
	var low:=INF;var high:=-INF
	var points:Array[Vector2]=[at]
	for index in range(12):points.append(at+Vector2.from_angle(index*TAU/12.)*radius)
	for p:Vector2 in points:
		if city.water_clearance(p)<=.05:return {}
		var height:float=city.ground_height(p);low=minf(low,height);high=maxf(high,height)
	return {"base_y":high-.08} if high-low<=SUPPORT_TOLERANCE else {}
static func fit(city,plan:Dictionary)->bool:
	var supports:Array[Vector2]=[plan.center];supports.append_array(plan.seats)
	var low:=INF;var high:=-INF
	for index in range(supports.size()):
		var result:=support(city,supports[index],.43 if index==0 else .25)
		if result.is_empty():return false
		low=minf(low,result.base_y);high=maxf(high,result.base_y)
	if high-low>SUPPORT_TOLERANCE:return false
	plan.base_y=high
	return true
static func walkable(city,a:Vector2,b:Vector2,structural:bool=false)->bool:
	if not enabled(city) and not structural:return true
	var previous:Vector2=a;var old:float=city.street_height(a)
	for step in range(1,ceili(a.distance_to(b)/.12)+1):
		var at:Vector2=a.move_toward(b,step*.12);var height:float=city.street_height(at)
		var rise:=absf(height-old)
		if rise>previous.distance_to(at)*MAX_GRADE+.00001:
			var board_step:bool=not is_nan(preload("res://scripts/world/city_creation_tea_deck_plan.gd").height(city,at)) or not is_nan(preload("res://scripts/world/city_creation_tea_deck_plan.gd").height(city,previous))
			board_step=board_step or not is_nan(preload("res://scripts/world/city_creation_boathouse_plan.gd").height(city,at)) or not is_nan(preload("res://scripts/world/city_creation_boathouse_plan.gd").height(city,previous))
			if rise>.13 or (not board_step and (is_nan(city._road_heights.height_at(at,NAN)) or is_nan(city._road_heights.height_at(previous,NAN)))):return false
		previous=at;old=height
	return true
static func decorate(city,extras:Dictionary,base:float)->Dictionary:
	var result:Dictionary={}
	if not enabled(city):return result
	for name:String in extras:
		var footprint:=support(city,extras[name],.35)
		if not footprint.is_empty():result[name]=float(footprint.base_y)-base
	return result
