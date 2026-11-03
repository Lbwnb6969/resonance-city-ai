extends RefCounted
## Optional new appearance; the original free column vines and music stay intact.
const Samples=preload("res://scripts/world/city_creation_inspiration_samples.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
static func unlocked(city:RefCounted)->bool:
	return city.CreationPolicy.is_free(city) and int(city.cozy_progression.get("level",0))>=2
static func key(city:RefCounted)->Array:
	return [unlocked(city),city.creative_settings.get("presentation",{}).get("flowering_vines",false)]
static func set_enabled(city:RefCounted,value:bool)->Dictionary:
	if value and not unlocked(city):return city._fail("新账期等级2后可选开花紫藤")
	var prefs:Dictionary=city.creative_settings.get("presentation",{}).duplicate(true);prefs.flowering_vines=value
	return city.CreationPolicy.set_preferences(city,{"presentation":prefs})
static func clear(city:RefCounted,point:Vector3,host:String,margin:float=.08)->bool:
	var at:=Vector2(point.x,point.z)
	for road:Dictionary in city.roads:
		if city._water_stroke_distance(at,road.points)<float(road.width)*.5+margin:return false
	for house:Dictionary in city.houses:
		if str(house.id)==host:continue
		for cell:Dictionary in house.cells:
			if cell.kind!="room":continue
			var polygon:PackedVector2Array=Frame.corners(Frame.footprint(house,cell))
			if Geometry2D.is_point_in_polygon(at,polygon):return false
			for i in range(polygon.size()):
				if at.distance_to(Geometry2D.get_closest_point_to_segment(at,polygon[i],polygon[(i+1)%polygon.size()]))<margin:return false
	return true
static func plans(city:RefCounted)->Array[Dictionary]:
	var result:Array[Dictionary]=[]
	var prefs:Dictionary=city.creative_settings.get("presentation",{})
	if not unlocked(city) or not prefs.get("flowering_vines",false) or not prefs.get("automatic_decoration",true):return result
	for row:Dictionary in Samples.plans(city):
		if row.kind!="column_vines":continue
		for side in range(2):
			var base:Vector3=row.columns[side];var outward:Vector3=(base-Vector3(row.columns[1-side])).normalized()
			var tangent:=Vector3(-outward.z,0,outward.x)
			for i in range(5):
				var at:=base+outward*(.15+.015*(i%2))+tangent*((i-2)*.038)+Vector3.UP*(1.30+sin(i*1.7)*.10)
				if clear(city,at,str(row.house_id)):result.append({"house_id":row.house_id,"column":base,"outward":outward,"position":at,"length":.17+.025*(i%3),"seed":side*5+i})
	return result
