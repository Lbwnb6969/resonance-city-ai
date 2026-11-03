extends RefCounted
## A derived optional row on existing stone-arch coping; never changes the road.
const Vines=preload("res://scripts/world/city_creation_flowering_vines.gd")
const Bridge=preload("res://scripts/world/city_creation_bridge_plan.gd")
static func unlocked(city:RefCounted)->bool:return Vines.unlocked(city)
static func key(city:RefCounted)->Array:return [unlocked(city),city.creative_settings.get("presentation",{}).get("paired_bridge_lamps",false)]
static func set_enabled(city:RefCounted,value:bool)->Dictionary:
	if value and not unlocked(city):return city._fail("新账期等级2后可选双排桥灯")
	var prefs:Dictionary=city.creative_settings.get("presentation",{}).duplicate(true);prefs.paired_bridge_lamps=value
	return city.CreationPolicy.set_preferences(city,{"presentation":prefs})
static func plans(city:RefCounted)->Array[Dictionary]:
	var result:Array[Dictionary]=[];var prefs:Dictionary=city.creative_settings.get("presentation",{})
	if not unlocked(city) or not prefs.get("paired_bridge_lamps",false) or not prefs.get("automatic_decoration",true):return result
	for road:Dictionary in city.roads:
		for run:Dictionary in city.road_profile(road).get("bridge_runs",[]):
			var length:float=run.end-run.start
			if not str(run.get("family","")).is_empty() or length<3.2:continue
			var count:=clampi(floori(length/1.6),2,4)
			var lamps:Array[Dictionary]=[]
			for i in range(count):
				var arc:float=lerpf(run.start,run.end,float(i+1)/(count+1));var point:=Bridge._point(run.samples,arc)
				if Vector2(Bridge._point(run.samples,arc-.12).tangent).dot(Bridge._point(run.samples,arc+.12).tangent)<.9999:continue
				var normal:=Vector2(-point.tangent.y,point.tangent.x);var pair:Array[Dictionary]=[]
				for side in [-1,1]:
					var at:Vector2=point.at+normal*(float(run.width)*.5+.11)*side
					var position:=Vector3(at.x,float(run.deck_y)+.61,at.y)
					if Vines.clear(city,position,"",.09):pair.append({"road_id":road.id,"run_id":run.id,"arc":arc,"side":side,"position":position,"yaw":atan2(point.tangent.x,point.tangent.y),"width":run.width,"deck_y":run.deck_y})
				if pair.size()==2:lamps.append_array(pair)
			if lamps.size()>=4:result.append_array(lamps)
	return result
