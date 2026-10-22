extends RefCounted
const Recipes=preload("res://tools/fixtures/city_creation_chord_fixture.gd")
static func apply(city:RefCounted,kind:String,enabled:bool)->Dictionary:
	match kind:
		"pastoral_triad":return city.set_house_role("h4","garden_cafe" if enabled else "residential")
		"renaissance_fugue":return city.set_house_role("h2","atelier" if enabled else "residential")
		"clockwork_waltz":return city.set_house_role("h2","clockmaker" if enabled else "residential")
		"chrono_counterpoint":return city.set_district_era(str(city.districts[-1].id),"renaissance" if enabled else "pastoral")
		"highland_fifth":
			if enabled:return city.add_cell("h1",0,0,2)
			for cell:Dictionary in city.houses[city._house_index("h1")].cells:
				if int(cell.level)==2:return city.remove_cell("h1",str(cell.id))
	return {"ok":false,"message":"unknown recipe"}
static func city(kind:String)->RefCounted:
	match kind:
		"pastoral_triad":return Recipes.pastoral()
		"highland_fifth":return Recipes.highland(1)
		"renaissance_fugue":return Recipes.renaissance()
		"clockwork_waltz":return Recipes.clockwork()
		"chrono_counterpoint":return Recipes.chrono()
	return null
static func wishes()->RefCounted:
	var result=preload("res://scripts/world/city_creation_state.gd").new();result.initialize_empty()
	for at:Vector2 in [Vector2(-30,-22),Vector2(-26,-22),Vector2(-22,-22),Vector2(-30,-17),Vector2(-26,-17),Vector2(-22,-17)]:assert(result.add_house(at).ok)
	result.set_house_role("h1","bakery");result.set_house_role("h2","workshop")
	result.add_road([Vector2(-33,-20.45),Vector2(-33,-15.45)] as Array[Vector2])
	for z:float in [-20.45,-15.45]:result.add_road([Vector2(-33,z),Vector2(-22,z)] as Array[Vector2])
	return result
