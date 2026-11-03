extends RefCounted
## A new, optional rooftop decoration earned through the current growth account.
## Qualification, author choice and derived geometry stay separate.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Vines=preload("res://scripts/world/city_creation_flowering_vines.gd")

static func unlocked(city:RefCounted)->bool:
	return city.CreationPolicy.is_free(city) and int(city.cozy_progression.get("level",0))>=2

static func key(city:RefCounted)->Array:
	return [unlocked(city),city.creative_settings.get("presentation",{}).get("window_pennants",false)]

static func set_enabled(city:RefCounted,value:bool)->Dictionary:
	if value and not unlocked(city):return city._fail("新账期等级2后可选屋脊彩幡")
	var prefs:Dictionary=city.creative_settings.get("presentation",{}).duplicate(true)
	prefs.window_pennants=value
	return city.CreationPolicy.set_preferences(city,{"presentation":prefs})

static func plans(city:RefCounted)->Array[Dictionary]:
	var result:Array[Dictionary]=[]
	var prefs:Dictionary=city.creative_settings.get("presentation",{})
	if not unlocked(city) or not prefs.get("window_pennants",false) or not prefs.get("automatic_decoration",true):return result
	for house:Dictionary in city.houses:
		var rooms:Array=house.get("cells",[])
		if rooms.is_empty():continue
		var cell:Dictionary={}
		for room:Dictionary in rooms:
			if str(room.get("kind","room"))=="room" and (cell.is_empty() or int(room.level)>int(cell.level)):cell=room
		if cell.is_empty():continue
		var at2:=Frame.center(house,cell)
		var at:=Vector3(at2.x,float(house.get("base_y",0.))+1.22+float(cell.get("level",0))*.72,at2.y)
		if Vines.clear(city,at,str(house.id),.10):
			result.append({"house_id":str(house.id),"position":at,"yaw":Frame.yaw(house)+Frame.Hinge.cell_angle(house,cell),"seed":int(house.get("seed",0))})
	return result
