extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
const Earned=preload("res://tests/test_city_creation_legendary_wonders.gd")
const Plan=preload("res://scripts/world/city_creation_placed_landmarks.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
const ORIGIN=Vector2(-28,12)
static var empty_snapshot:Dictionary={}

static func empty()->Dictionary:
	var ok:=true
	if empty_snapshot.is_empty():
		var source:=Earned.fixture();Earned.choose_crowns(source)
		var folder:="res://验证记录/M84/landmark_contract_20261030"
		DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(folder))
		ok=source.CreationPolicy.convert(source,folder+"/original_legacy.json").ok
		for house:Dictionary in source.houses.duplicate(true):ok=source.remove_house(house.id).ok and ok
		for road:Dictionary in source.roads.duplicate(true):ok=source.remove_road(road.id).ok and ok
		empty_snapshot=source.snapshot()
	var city:=State.new();ok=city.restore(empty_snapshot.duplicate(true)).ok and ok
	return {"city":city,"ok":ok}

static func build(family:String="riverbank",yaw:float=0.,kind:String="front")->Dictionary:
	var f:=empty();var city:RefCounted=f.city;var ok:bool=f.ok
	ok=Plan.place(city,family,ORIGIN,yaw).ok and ok
	var item:Dictionary=city.placed_landmarks[0];var front:float=Plan.SIZES[family].y*.5
	if kind in ["wall","columns"]:
		ok=Brush.select(city,"pastoral","ionic_stoa" if kind=="columns" else "townhouse") and ok
		var local:=Vector2(1.8,front+3.6) if kind=="columns" else Vector2(0,front+3.35)
		var cells:Array=[]
		for x in range(3 if kind=="columns" else 1):cells.append({"x":x,"z":0,"level":0,"kind":"room"})
		ok=city.add_house_stroke(ORIGIN+local.rotated(-yaw),cells).ok and ok
		ok=city.rotate_house(city.houses[-1].id,yaw+PI if kind=="columns" else yaw).ok and ok
	if kind=="water":ok=city.add_water([ORIGIN+Vector2(-2,front+3.4).rotated(-yaw),ORIGIN+Vector2(2,front+3.4).rotated(-yaw)] as Array[Vector2],2.,"pond").ok and ok
	if kind!="none":
		var z:float=-front-1.7 if kind=="back" else front+1.7
		ok=city.add_road([ORIGIN+Vector2(-4,z).rotated(-yaw),ORIGIN+Vector2(4,z).rotated(-yaw)] as Array[Vector2],"path","none",1.25).ok and ok
	return {"city":city,"ok":ok,"id":item.id,"road_id":city.roads[-1].id if not city.roads.is_empty() else ""}
