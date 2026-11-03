extends RefCounted
## Explicit compound edit. Ordinary add_water retains its conflict contract.
const RULES_VERSION:=1
static func dependencies(data:Dictionary)->Dictionary:
	var result:=data.duplicate(true);result.erase("journey_checkpoint");result.erase("schema");return result
static func signature(city:RefCounted)->int:return hash(dependencies(city.snapshot()))
static func plan(city:RefCounted,points:Array[Vector2],width:float)->Dictionary:
	var original:Dictionary=city.preview_water(points,width,"channel")
	if original.ok:return original
	if original.get("conflicts",[]).is_empty() or original.conflicts.any(func(c):return c.kind!="road"):return original
	var before:Dictionary=city.snapshot();var after:Dictionary=before.duplicate(true)
	var number:=maxi(int(after.next_water_id),int(after.high_watermark.get("water",0))+1)
	var encoded:Array=[]
	for point:Vector2 in points:encoded.append([point.x,point.y])
	var water:={"id":"w%d"%number,"kind":"channel","points":encoded,"width":width,"seed":261014+number*977,"source":"player"}
	after.waters.append(water);after.next_water_id=number+1;after.high_watermark.water=number
	# Roundabouts are real platforms, not bridge markers that can be flooded.
	for road:Dictionary in city.roads:
		for marker:Dictionary in road.get("roundabouts",[]):
			if city._water_stroke_distance(Vector2(marker.center[0],marker.center[1]),encoded)<float(marker.radius)+width*.5:return city._fail("水渠需要避开路口广场")
		if city.PlacedLandmarks.stroke_conflicts(city,road.points,float(road.width)*.5+.3):return city._fail("过水道路与传世地标净空冲突")
	for road:Dictionary in after.roads:
		var valid:Dictionary=city._validate_road_site(road.points,float(road.width),after.houses,after.waters,after.roads)
		if not valid.ok:return city._fail("过水通路无法接岸："+str(valid.message))
		road.bridge=valid.bridge
	var candidate:RefCounted=city.get_script().new();var restored:Dictionary=candidate.restore(after)
	if not restored.ok:return restored
	candidate.prepare_ground_height();city.prepare_ground_height()
	var changed:Array[String]=[]
	for road:Dictionary in candidate.roads:
		if candidate.road_profile(road)!=city.road_profile(road):changed.append(str(road.id))
	var access:=preload("res://scripts/world/city_creation_water_crossing_access.gd").assess(city,candidate,changed)
	if not access.ok:return access
	return {"ok":true,"requires_confirmation":true,"rules_version":RULES_VERSION,"message":"确认引水及过水通路","owner":city.get_instance_id(),"revision":city.revision,"signature":signature(city),"points":points.duplicate(),"width":width,"after":after,"affected_roads":changed,"candidate":candidate,"access":access}

static func commit(city:RefCounted,reviewed:Dictionary)->Dictionary:
	if reviewed.get("rules_version",0)!=RULES_VERSION:return city._fail("过水规则已变化，请重新预览")
	if reviewed.get("owner",0)!=city.get_instance_id() or reviewed.get("revision",-1)!=city.revision or reviewed.get("signature",0)!=signature(city):return city._fail("城市已变化，请重新查看过水方案")
	if dependencies(reviewed.candidate.snapshot())!=dependencies(reviewed.after):return city._fail("候选画面已变化，请重新预览")
	var fresh:=plan(city,reviewed.points,float(reviewed.width))
	if not fresh.ok:return fresh
	if not fresh.get("requires_confirmation",false) or dependencies(fresh.after)!=dependencies(reviewed.after) or fresh.affected_roads!=reviewed.affected_roads:return city._fail("过水方案已变化，请重新预览")
	var before:Dictionary=city.snapshot()
	city.waters.assign(fresh.after.waters.duplicate(true));city.roads.assign(fresh.after.roads.duplicate(true))
	city._next_water_id=fresh.after.next_water_id;city._high_watermark.water=fresh.after.high_watermark.water
	city._commit(before,"引水并接通过水道路")
	return {"ok":true,"message":"水渠与过水通路已一并建好","water_id":fresh.after.waters[-1].id,"affected_roads":fresh.affected_roads,"before_upgrade":before}
