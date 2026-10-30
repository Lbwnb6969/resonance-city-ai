extends RefCounted
## Find legal building space beside the existing town, river or authored plateau.
static func center(city:RefCounted)->Vector2:
	var at:=Vector2.ZERO
	for house:Dictionary in city.houses:at+=Vector2(house.origin[0],house.origin[1])
	return at/maxi(1,city.houses.size()) if not city.houses.is_empty() else Vector2(-9,-5)
static func clear_plot(city:RefCounted,origin:Vector2,offsets:Array)->bool:
	for offset:Vector2 in offsets:
		var at:=origin+offset
		if absf(at.x)>33. or absf(at.y)>33. or not city.validate_add_house(at).ok:return false
	return true
static func proposals(city:RefCounted)->Dictionary:
	if city.CreationPolicy.is_free(city):return {}
	var key:=[city.revision,city._wish_epoch,city.era_unlocks.duplicate()]
	var cached:Dictionary=city.get_meta("vignette_proposal_cache",{})
	if cached.get("key",[])==key:return cached.rows.duplicate()
	var rows:=_derive_proposals(city)
	city.set_meta("vignette_proposal_cache",{"key":key,"rows":rows})
	return rows.duplicate()
static func _derive_proposals(city:RefCounted)->Dictionary:
	if city.CreationPolicy.is_free(city):return {}
	var result:Dictionary={};var origin:=center(city);var places:Array[Vector2]=[]
	for z:int in range(-28,29,4):
		for side:float in [-1.,1.]:places.append(Vector2(city.river_x(z)+side*5.8,z))
	places.sort_custom(func(a:Vector2,b:Vector2)->bool:return a.distance_squared_to(origin)<b.distance_squared_to(origin))
	for at:Vector2 in places:
		if clear_plot(city,at,[Vector2(0,-5.4),Vector2(0,-1.8),Vector2(0,1.8),Vector2(0,5.4)]):result.vignette_river_bend_choir=at;break
	for stroke:Dictionary in city.terrain_strokes:
		for point:Array in stroke.points:
			var at:=Vector2(point[0],point[1])
			if city.ground_height(at)>=.95 and clear_plot(city,at,[Vector2.ZERO,Vector2(3.6,0),Vector2(0,3.6)]):result.vignette_highland_terrace=at;break
	for radius:float in [8.,12.,16.,20.]:
		for i in range(8):
			var at:Vector2=(origin+Vector2.from_angle(TAU*i/8.)*radius).snapped(Vector2(1.8,1.8))
			if clear_plot(city,at,[Vector2(0,-3.6),Vector2(3.6,0),Vector2(0,3.6),Vector2(-3.6,0)]):result.vignette_courtyard_fountain=at;break
		if result.has("vignette_courtyard_fountain"):break
	for house:Dictionary in city.houses:
		if house.role=="workshop" and int(city.site_blessing(str(house.id)).get("trees",0))<4:
			result.vignette_olive_grove_craft=Vector2(house.origin[0],house.origin[1]);break
	if not result.has("vignette_olive_grove_craft") and result.has("vignette_courtyard_fountain"):result.vignette_olive_grove_craft=result.vignette_courtyard_fountain
	result.merge(preload("res://scripts/world/city_creation_poem_sites.gd").proposals(city,origin))
	return result
