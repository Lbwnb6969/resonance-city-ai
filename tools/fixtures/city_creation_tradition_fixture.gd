extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
const Journey=preload("res://scripts/world/city_creation_harmony_journey.gd")
static func learn(city:RefCounted,id:String)->Dictionary:
	preload("res://scripts/world/city_creation_harmony_receipts.gd").initialize(city)
	Journey.add_harmony_xp(city.harmony_journey,Journey.xp_for_next_level(int(city.harmony_journey.harmony_level)),74001,city.era_unlocks)
	var offered:Array=[id]
	for candidate:String in Journey.cards():
		if candidate!=id and (not Journey.cards()[candidate].has("era") or Journey.cards()[candidate].era in city.era_unlocks):offered.append(candidate)
		if offered.size()==3:break
	city.harmony_journey.pending_draft=offered
	return Journey.choose(city,id)
static func slope(strength:float=.8)->RefCounted:
	var city:=State.new();city.initialize_empty()
	city.add_terrain_stroke([Vector2(-26,-22)] as Array[Vector2],"plateau",2.,strength)
	city.add_road([Vector2(-32,-22),Vector2(-20,-22)] as Array[Vector2])
	return city
static func shore()->RefCounted:
	var city:RefCounted=preload("res://tools/fixtures/city_creation_juice_fixture.gd").wishes()
	# Radius is measured from the actual shoreline, not the pond centre.
	city.add_water([Vector2(-37.1,-22)] as Array[Vector2],3.2,"pond")
	return city
