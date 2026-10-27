extends RefCounted
const Hinge=preload("res://scripts/world/city_creation_house_hinge.gd")
static func supported(city,house:Dictionary)->bool:
	return not Hinge.layout(house).is_empty() and preload("res://scripts/world/city_creation_arcade_plan.gd").for_house(city,house).is_empty() and preload("res://scripts/world/city_creation_passage.gd").for_house(house,city.roads).is_empty()
static func publish(city,index:int,candidate:Dictionary,caption:String)->Dictionary:
	if city._house_overlaps(candidate,str(candidate.id)):return city._fail("微折后与街坊重叠")
	var site:Dictionary=city._validate_house_site(candidate)
	if not site.ok:return site
	var before:Dictionary=city.snapshot();city.houses[index]=candidate;city._commit(before,"建筑有机微雕")
	return {"ok":true,"house_id":str(candidate.id),"message":caption}
static func set_angle(city,id:String,degrees:float)->Dictionary:
	var index:int=city._house_index(id)
	if index<0 or not Hinge.valid(degrees):return city._fail("侧翼折角无效")
	var house:Dictionary=city.houses[index]
	if degrees!=0. and not supported(city,house):return city._fail("沿同一直线加建完整房间后可微折；此屋保留原型轮廓")
	var candidate:=house.duplicate(true);candidate.organic_manual=true
	for field:String in ["overhang","balcony_arc","organic_cell_id","organic_facade"]:candidate.erase(field)
	if Hinge.layout(house).is_empty():candidate.erase("bend_angle_deg");candidate.erase("bend_axis")
	else:candidate.bend_angle_deg=degrees;candidate.bend_axis=Hinge.axis_id(house);candidate.corner_bevel=2
	if candidate==house:return {"ok":true,"no_op":true,"message":"微折 %.0f°"%degrees}
	return publish(city,index,candidate,"温润圆角" if degrees==0. else "侧翼微折 %.0f°"%degrees)
static func corner(city,id:String,value:int,caption:String)->Dictionary:
	var index:int=city._house_index(id);var candidate:Dictionary=city.houses[index].duplicate(true)
	candidate.erase("bend_angle_deg");candidate.erase("bend_axis");candidate.organic_manual=true
	if value==0:candidate.erase("corner_bevel")
	else:candidate.corner_bevel=value
	return publish(city,index,candidate,caption)
