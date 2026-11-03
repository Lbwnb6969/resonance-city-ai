extends RefCounted
const Geometry=preload("res://scripts/world/city_creation_road_trim_geometry.gd")
const Network=preload("res://scripts/world/city_creation_network.gd")
const Fork=preload("res://scripts/world/city_creation_chemistry_preview.gd")
const RULES:=1
static func signature(city:RefCounted)->int:
	var data:Dictionary=city.snapshot();data.erase("journey_checkpoint");return hash(data)
static func road(city:RefCounted,id:String)->Dictionary:
	for row:Dictionary in city.roads:
		if row.id==id:return row
	return {}
static func select(city:RefCounted,at:Vector2,id:String="")->Dictionary:
	if id.is_empty():id=city.road_at(at)
	var target:=road(city,id)
	if target.is_empty():return city._fail("这里没有道路")
	var cache:Dictionary=city.get_meta("road_trim_graph",{})
	if cache.get("revision",-1)!=city.revision:
		var network:=Network.new();network.state=Fork.fork(city);network._build_graph();cache={"revision":city.revision,"network":network};city.set_meta("road_trim_graph",cache)
	var boundaries:=Geometry.boundaries(city,target,cache.network);var p:=Geometry.project(target,at)
	for i in range(1,boundaries.size()):
		if p.arc<=float(boundaries[i])+.001:return {"ok":true,"road_id":id,"low":boundaries[i-1],"high":boundaries[i],"points":Geometry.slice(target,boundaries[i-1],boundaries[i]),"width":target.width}
	return city._fail("这里没有可裁路段")
static func plan(city:RefCounted,id:String,low:float,high:float)->Dictionary:
	var original:=road(city,id)
	if original.is_empty():return city._fail("道路已变化")
	var total:=Geometry.length(original)
	if not is_finite(low) or not is_finite(high) or low<0. or high>total+.001 or high-low<.2:return city._fail("请选择同一路线上两个不同切点")
	high=minf(high,total)
	if low<.2:low=0.
	if total-high<.2:high=total
	var before:Dictionary=city.snapshot();var after:=before.duplicate(true);var index:=-1
	for i in range(after.roads.size()):
		if after.roads[i].id==id:index=i;break
	var kept:Array=[];var intervals:Array=[]
	if low>=.2:intervals.append([0.,low])
	if total-high>=.2:intervals.append([high,total])
	var next:=maxi(int(after.next_road_id),int(after.high_watermark.road)+1)
	for interval:Array in intervals:
		var part:=original.duplicate(true);part.points=Geometry.slice(original,interval[0],interval[1]);part.id=id if kept.is_empty() else "r%d"%next
		if not kept.is_empty():next+=1
		var markers:Array=[]
		for marker:Dictionary in original.get("roundabouts",[]):
			var p:=Geometry.project(original,Geometry.point(marker.center));var at:Vector2=p.at
			if p.arc>=float(interval[0])-.001 and p.arc<=float(interval[1])+.001 and Geometry.project(part,at).distance<.002:markers.append(marker.duplicate(true))
		if markers.is_empty():part.erase("roundabouts")
		else:part.roundabouts=markers
		kept.append(part)
	after.roads.remove_at(index)
	for i in range(kept.size()):after.roads.insert(index+i,kept[i])
	var removed_markers:Array=[]
	for marker:Dictionary in original.get("roundabouts",[]):
		if not kept.any(func(r):return marker in r.get("roundabouts",[])):removed_markers.append(marker)
	for part:Dictionary in kept:
		if city.PlacedLandmarks.stroke_conflicts(city,part.points,float(part.width)*.5+.3):return city._fail("剩余道路与地标冲突")
		var valid:Dictionary=city._validate_road_site(part.points,part.width,after.houses,after.waters,after.roads)
		if not valid.ok:return city._fail("剩余道路无法接岸或穿堂："+str(valid.message))
		part.bridge=valid.bridge
	after.next_road_id=next;after.high_watermark.road=maxi(int(after.high_watermark.road),next-1)
	var candidate:RefCounted=city.get_script().new();var restored:Dictionary=candidate.restore(after)
	if not restored.ok:return restored
	# A retained roundabout must still have an actual second road at its centre.
	for marker:Dictionary in candidate.Roundabouts.all(candidate.roads):
		var owners:=0
		for row:Dictionary in candidate.roads:
			if Geometry.project(row,marker.center).distance<.002:owners+=1
		if owners<2:
			for row:Dictionary in candidate.roads:
				if row.id!=marker.owner_id:continue
				row.roundabouts=row.roundabouts.filter(func(m):return Geometry.point(m.center).distance_to(marker.center)>.002)
				if row.roundabouts.is_empty():row.erase("roundabouts")
			removed_markers.append({"center":[marker.center.x,marker.center.y],"radius":marker.radius})
	var kept_ids:Array=kept.map(func(r):return r.id)
	var access:=preload("res://scripts/world/city_creation_road_trim_access.gd").assess(city,candidate,original,low,high,kept_ids)
	if not access.ok:return access
	var message:="裁除高亮路段 · Enter 确认 · Esc 保留原路"
	if not removed_markers.is_empty():message+="\n同时撤回 %d 处失去路口的环岛"%removed_markers.size()
	var overlaps:Array=[]
	for row:Dictionary in city.roads:
		if row.id==id:continue
		var count:=maxi(1,ceili((high-low)/.35))
		for i in range(count):
			if Geometry.project(row,Geometry.at(original,lerpf(low,high,(float(i)+.5)/count))).distance<float(row.width)*.5:
				overlaps.append(row.id);break
	if not overlaps.is_empty():message+="\n与其他道路重叠的路面按候选画面保留"
	return {"ok":true,"message":message,"owner":city.get_instance_id(),"revision":city.revision,"signature":signature(city),"rules":RULES,"road_id":id,"low":low,"high":high,"removed":Geometry.slice(original,low,high),"width":original.width,"candidate":candidate,"roads":candidate.roads.duplicate(true),"next":next,"removed_roundabouts":removed_markers,"kept_ids":kept_ids,"access":access}
static func commit(city:RefCounted,reviewed:Dictionary)->Dictionary:
	if reviewed.get("rules",0)!=RULES or reviewed.get("owner",0)!=city.get_instance_id() or reviewed.get("revision",-1)!=city.revision or reviewed.get("signature",0)!=signature(city):return city._fail("城市已变化，请重新选择裁路范围")
	var fresh:=plan(city,reviewed.road_id,reviewed.low,reviewed.high)
	if not fresh.ok:return fresh
	if fresh.roads!=reviewed.roads or reviewed.candidate.roads!=reviewed.roads:return city._fail("裁路候选已变化，请重新选择")
	var before:Dictionary=city.snapshot();city.roads.assign(fresh.roads.duplicate(true));city._next_road_id=fresh.next;city._high_watermark.road=maxi(int(city._high_watermark.road),fresh.next-1)
	city._commit(before,"局部裁除道路")
	return {"ok":true,"message":"高亮路段已裁除","road_id":fresh.road_id,"kept_ids":fresh.kept_ids}
