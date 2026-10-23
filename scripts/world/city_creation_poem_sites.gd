extends RefCounted
## Proposed space must pass the same housing, street, pond and plant gates as play.
const Catalog=preload("res://scripts/world/city_creation_vignette_catalog.gd")
static func proposals(city:RefCounted,origin:Vector2)->Dictionary:
	var result:Dictionary={};var plot:=_plot(city,origin)
	var crossings:Array[Vector2]=[]
	for z:int in range(-28,29,4):crossings.append(Vector2(city.river_x(z),z))
	crossings.sort_custom(func(a,b):return a.distance_squared_to(origin)<b.distance_squared_to(origin))
	for at:Vector2 in crossings:
		var road:Dictionary=city.preview_road([at-Vector2(9,0),at+Vector2(9,0)] as Array[Vector2],"promenade")
		if city.validate_add_house(at+Vector2(-8,-2.0)).ok and city.validate_add_house(at+Vector2(8,-2.0)).ok and road.ok and bool(road.get("bridge",false)):
			result[str(Catalog.TEMPLATES[4].id)]=at;break
	for house:Dictionary in city.houses:
		if house.role!="bakery":continue
		var at:=Vector2(house.origin[0],house.origin[1])
		if _pond(city,at).is_finite():result[str(Catalog.TEMPLATES[5].id)]=at;break
	if plot.is_finite():
		if not result.has(Catalog.TEMPLATES[5].id) and _pond(city,plot).is_finite():result[str(Catalog.TEMPLATES[5].id)]=plot
		if _grove(city,plot):result[str(Catalog.TEMPLATES[6].id)]=plot
		for index in range(7,12):
			if Catalog.TEMPLATES[index].era not in city.era_unlocks:continue
			if index==11 and absf(city.sample_house_base_y(plot)-city.sample_house_base_y(plot+Vector2(3.6,0)))>.02:continue
			result[str(Catalog.TEMPLATES[index].id)]=plot
	return result
static func _plot(city:RefCounted,origin:Vector2)->Vector2:
	for radius:float in [8.,12.,16.,20.,24.]:
		for i in range(12):
			var at:Vector2=(origin+Vector2.from_angle(TAU*i/12.)*radius).snapped(Vector2(1.8,1.8))
			var clear:=true
			for x:float in [0.,1.8,3.6,5.4]:
				var point:=at+Vector2(x,0)
				if absf(point.x)>32. or absf(point.y)>30. or not city.validate_add_house(point).ok:clear=false;break
			var heights:Array=[]
			for offset:Vector2 in [Vector2.ZERO,Vector2(3.6,0),Vector2(0,2),Vector2(3.6,2)]:heights.append(city.ground_height(at+offset))
			if clear and float(heights.max())-float(heights.min())<=.15 and _grove(city,at) and city.preview_road([at+Vector2(-7.4,2.0),at+Vector2(7.4,2.0)] as Array[Vector2],"promenade").ok:return at
	return Vector2(INF,INF)
static func _pond(city:RefCounted,at:Vector2)->Vector2:
	for i in range(16):
		var point:=at+Vector2.from_angle(-PI*.5+TAU*i/16.)*4.
		if city.waters.any(func(w):return w.kind=="pond" and city._water_stroke_distance(point,w.points)<float(w.width)*.5+1.4):continue
		if absf(point.x)<=33. and absf(point.y)<=33. and city.preview_water([point] as Array[Vector2],2.4,"pond").ok:return point
	return Vector2(INF,INF)
static func _grove(city:RefCounted,at:Vector2)->bool:
	var accepted:Array[Dictionary]=[]
	for x:float in [-5.4,-1.8,1.8,5.4]:
		var point:=at+Vector2(x,-2.0)
		if absf(point.x)>33. or absf(point.y)>33.:return false
		var plant:Dictionary=city._make_plant("p999999",point,"golden_tree",1.,74001,"player")
		if not city._plant_geometry_compatible(plant,accepted,true):return false
		accepted.append(plant)
	return true
