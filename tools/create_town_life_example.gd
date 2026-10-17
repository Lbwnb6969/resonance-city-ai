extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Network=preload("res://scripts/world/city_creation_network.gd")
const Cafe=preload("res://scripts/world/city_creation_cafe_layout_context.gd")
const DEST="res://数据/经营河湾样例.json"
var city=State.new()
var lots:Dictionary={}
func _initialize()->void: _run.call_deferred()
func _must(result:Dictionary)->void:
	if not result.ok: push_error(str(result));quit(1)
	assert(result.ok,str(result))
func _run()->void:
	assert(not FileAccess.file_exists(DEST))
	for z:float in [-12,-7,-2,3,8,13]:
		for x:float in [-15,-9.5,-4,9,14]:
			if z==3 and (x==-9.5 or x==14): continue # Actual open tea gardens.
			var result:Dictionary=city.add_house(Vector2(x,z));_must(result)
			lots[Vector2(x,z)]=result.house_id
			if x<0: _must(city.set_house_style(result.house_id,"timber"))
			else: _must(city.set_house_style(result.house_id,"stone"))
	for z:float in [-12,-7,-2,3,8,13]:
		_must(city.add_road([Vector2(-16.2,z+1.55),Vector2(-3,z+1.55)]))
		_must(city.add_road([Vector2(7.8,z+1.55),Vector2(15.2,z+1.55)]))
	for x:float in [-12.25,-6.75,11.5]: _must(city.add_road([Vector2(x,-10.45),Vector2(x,14.55)]))
	_must(city.add_road([Vector2(-12.25,-4),Vector2(11.5,-4)]))
	for at:Vector2 in [Vector2(-4,-7),Vector2(9,-7),Vector2(-15,8)]: _must(city.set_house_role(lots[at],"bakery"))
	for at:Vector2 in [Vector2(-9.5,-12),Vector2(9,8)]: _must(city.set_house_role(lots[at],"workshop"))
	for at:Vector2 in [Vector2(-9.5,-2),Vector2(14,-2)]: _must(city.set_house_role(lots[at],"garden_cafe"))
	var venue:String=lots[Vector2(-9.5,-7)]
	_must(city.set_house_role(venue,"venue"));_must(city.set_house_name(venue,"河心演奏庭"));_must(city.set_auto_matinee(venue,true))
	_must(city.add_cell(venue,0,0,1));_must(city.add_cell(venue,0,0,2))
	_must(city.add_district([Vector2(-15,-12),Vector2(-4,-12),Vector2(-4,-7),Vector2(-15,-7),Vector2(-15,-2),Vector2(-4,-2)],6,"warm",true))
	_must(city.add_district([Vector2(-15,3),Vector2(-4,3),Vector2(-4,8),Vector2(-15,8),Vector2(-15,13),Vector2(-4,13)],6,"weave",true))
	_must(city.add_district([Vector2(11,-12),Vector2(11,13)],10,"deep",true))
	_must(city.add_vegetation_stroke([Vector2(-17,-12),Vector2(-17,11)],"cypress",.65))
	_must(city.add_vegetation_stroke([Vector2(16.5,-12),Vector2(16.5,11)],"olive",.65))
	var network=Network.new().prepare(city.snapshot(),{},[])
	if network.connected_houses.size()!=28:
		push_error(str([city.houses.size(),network.connected_houses.keys()]));quit(1);return
	for id:String in network.connected_houses:
		if network._route(network.connected_houses[id],network.connected_houses[venue]).is_empty(): push_error("no actual route: "+id);quit(1);return
	var cafes=Cafe.new()
	for at:Vector2 in [Vector2(-9.5,-2),Vector2(14,-2)]:
		if cafes.layout(city,lots[at]).is_empty(): push_error("tea garden invalid: "+str(at));quit(1);return
	assert(city.life_progress.purchases==0 and city.bakery_supply.is_empty() and city.workshop_supply.is_empty() and city.growth_memories.is_empty())
	_must(city.save_city(DEST))
	var other=State.new();_must(other.load_city(DEST))
	assert(other.houses==city.houses)
	print("TOWN_LIFE_EXAMPLE PASS houses=",city.houses.size()," venue=",venue," roads=",city.roads.size()," plants=",city.plants.size())
	quit()
