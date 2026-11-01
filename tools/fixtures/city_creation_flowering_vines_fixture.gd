extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
const Ledger=preload("res://scripts/world/city_creation_progression_ledger.gd")
static func seed()->RefCounted:
	var city:=State.new();city.initialize_free();Brush.select(city,"pastoral","ionic_stoa")
	city.add_house_stroke(Vector2(-25,-20),[{"x":0,"z":0,"level":0,"kind":"room"},{"x":1,"z":0,"level":0,"kind":"room"},{"x":2,"z":0,"level":0,"kind":"room"}])
	return city
static func earn(city:RefCounted)->Dictionary:
	Brush.select(city,"pastoral","townhouse");var built:Array[String]=[]
	for z in range(-38,39,4):
		for x in range(-38,39,4):
			if built.size()>=50:break
			if not city.validate_add_house(Vector2(x,z)).ok:continue
			var result:Dictionary=city.add_house(Vector2(x,z))
			if result.ok:built.append(str(result.house_id))
	var earned:=Ledger.collect(city);var removed:=true
	for id:String in built:removed=city.remove_house(id).ok and removed
	return {"ok":built.size()==50 and earned.ok and removed and int(city.cozy_progression.level)>=2,"built":built.size(),"earned":earned}
