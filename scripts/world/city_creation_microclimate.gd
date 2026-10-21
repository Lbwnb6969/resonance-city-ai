extends RefCounted
const IDS:=["spring_breeze","sun_shower","autumn_gold","starlight_fireflies"]
const NAMES:=["晴昼花吹雪","夏夕太阳雨","秋暮金风","星夜萤火"]
const LIGHTS:=[0,1,1,2]
const GLYPHS:=["garden_cafe","water","vegetation","sundial_night"]
static func production(city:RefCounted,house:Dictionary)->float:
	if city.microclimate=="autumn_gold" and house.role in ["workshop","atelier","clockmaker"]:return 1.25
	if city.microclimate=="sun_shower" and house.role=="bakery" and (house.get("signature","")=="watermill" or city.water_clearance(Vector2(house.origin[0],house.origin[1]))<4.5):return 1.3
	return 1.
static func music(targets:Dictionary,mode:String)->void:
	var tracks:Array=[];var lift:=0.
	match mode:
		"spring_breeze":tracks=["air","terrace","wood_sylvan"];lift=1.5
		"autumn_gold":tracks=["foundation","wood_deep","wood_market"];lift=1.5
		"starlight_fireflies":tracks=["modern_symphony","clockwork_waltz"];lift=1.
	for track:String in tracks:
		if float(targets.get(track,-60.))>-55.:targets[track]=minf(-10.,float(targets[track])+lift)
