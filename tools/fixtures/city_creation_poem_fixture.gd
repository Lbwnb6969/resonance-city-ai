extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
const Vignettes=preload("res://scripts/world/city_creation_vignettes.gd")
const Catalog=preload("res://scripts/world/city_creation_vignette_catalog.gd")
const Sites=preload("res://scripts/world/city_creation_poem_sites.gd")
static func start(index:int)->RefCounted:
	var city:RefCounted=preload("res://tools/fixtures/city_creation_modern_fixture.gd").earned_city()
	preload("res://scripts/world/city_creation_harmony_receipts.gd").initialize(city)
	assert(Vignettes.offer(city,str(Catalog.TEMPLATES[index].id)))
	return city
static func construct(city:RefCounted,finish_bake:bool=true)->Array[Dictionary]:
	var quest:Dictionary=city.harmony_journey.active_vignette;var at:=Vector2(quest.anchor[0],quest.anchor[1]);var results:Array[Dictionary]=[]
	var index:=-1
	for i in range(Catalog.TEMPLATES.size()):
		if Catalog.TEMPLATES[i].id==quest.id:index=i;break
	if index==4:
		for x:float in [-8.,8.]:results.append(city.add_house(at+Vector2(x,-2.0)))
		results.append(city.add_road([at-Vector2(9,0),at+Vector2(9,0)] as Array[Vector2],"promenade"));return results
	var id:=""
	if index==5:
		for house:Dictionary in city.houses:
			if Vector2(house.origin[0],house.origin[1]).distance_to(at)<.01:id=str(house.id);break
	if id.is_empty():
		var placed:Dictionary=city.add_house(at);results.append(placed)
		if not placed.ok:return results
		id=str(placed.house_id)
	match index:
		5:
			results.append(city.set_house_role(id,"bakery"));var point:=Sites._pond(city,at)
			results.append(city.add_water([point] as Array[Vector2],2.4,"pond"))
		6:
			for x:float in [-5.4,-1.8,1.8,5.4]:results.append(city.place_plant(at+Vector2(x,-2.0),"golden_tree"))
			results.append(city.place_plant(at+Vector2(0,-2.0),"yellow_flower"))
		7:
			results.append(city.add_cell(id,0,0,1));results.append(city.set_house_era(id,"renaissance"))
			var second:Dictionary=city.add_house(at+Vector2(3.6,0));results.append(second)
			if second.ok:results.append(city.add_cell(str(second.house_id),0,0,1));results.append(city.set_house_era(str(second.house_id),"renaissance"))
		8:
			results.append(city.add_cell(id,0,0,1));results.append(city.add_cell(id,0,0,2));results.append(city.set_house_era(id,"renaissance"))
		9:
			results.append(city.add_cell(id,1,0,0));results.append(city.add_cell(id,0,0,1));results.append(city.add_cell(id,1,0,1));results.append(city.set_house_era(id,"clockwork"))
		10:
			results.append(city.set_house_role(id,"clockmaker"));results.append(city.set_house_era(id,"clockwork"))
		11:
			var second:Dictionary=city.add_house(at+Vector2(3.6,0));results.append(second)
			if second.ok:
				for house:String in [id,str(second.house_id)]:
					results.append(city.add_cell(house,0,0,1));results.append(city.add_cell(house,0,0,2));results.append(city.set_house_era(house,"modern_eco"))
	var low:=-7.4 if index==6 else -2.
	results.append(city.add_road([at+Vector2(low,2.0),at+Vector2(7.4,2.0)] as Array[Vector2],"tram" if index==10 else "promenade"))
	if index==5 and not finish_bake:
		for x:float in [3.6,7.2]:
			if city.validate_add_house(at+Vector2(x,0)).ok:results.append(city.add_house(at+Vector2(x,0)))
	if index==5 and finish_bake:results.append({"ok":city.produce_bread(id,1),"message":"actual first bake"})
	return results
