extends RefCounted
const Height=preload("res://scripts/world/city_creation_entry_height.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
static func nearest(at:Vector2,road:Dictionary)->Vector2:
	var best:=Vector2(INF,INF);var gap:=INF
	for i in range(1,road.points.size()):
		var a:=Vector2(road.points[i-1][0],road.points[i-1][1]);var b:=Vector2(road.points[i][0],road.points[i][1])
		var point:=Geometry2D.get_closest_point_to_segment(at,a,b)
		if point.distance_squared_to(at)<gap:gap=point.distance_squared_to(at);best=point
	return best
static func road_height(profile:Dictionary,at:Vector2)->float:
	var nearest_gap:=INF;var height:=0.;var arc:=0.
	for i in range(1,profile.samples.size()):
		var a:Dictionary=profile.samples[i-1];var b:Dictionary=profile.samples[i]
		var point:=Geometry2D.get_closest_point_to_segment(at,a.xz,b.xz);var gap:=point.distance_squared_to(at)
		if gap>=nearest_gap:continue
		nearest_gap=gap;var ratio:float=Vector2(a.xz).distance_to(point)/maxf(.000001,Vector2(a.xz).distance_to(b.xz))
		height=lerpf(a.y,b.y,ratio);arc=lerpf(a.distance,b.distance,ratio)
	for run:Dictionary in profile.stepping_runs:
		if arc>=run.start-.00001 and arc<=run.end+.00001:return preload("res://scripts/world/city_creation_stepping_plan.gd").crossing_height(run,arc)
	for tread:Dictionary in profile.treads:
		if arc>=tread.s0-.000001 and arc<=tread.s1+.000001:return tread.y
	return height
static func assess(original:RefCounted,candidate:RefCounted,affected:Array)->Dictionary:
	var measured:Array=[]
	for house:Dictionary in original.houses:
		var changed:Dictionary=candidate.houses[candidate._house_index(house.id)]
		for entry:Dictionary in original.house_entrances(house.id):
			for road:Dictionary in original.roads:
				if road.id not in affected or (entry.active and entry.get("road_id",road.id)!=road.id):continue
				var target:=nearest(entry.at,road)
				if target.distance_to(entry.at)>=.82 or Frame.normal(entry).dot(target-Vector2(entry.wall_at))<=0.:continue
				var before:=Height.assess(original,house,entry,target,road)
				if not before.ok or before.get("scope","")=="unchanged":continue
				var entries:Array=candidate.house_entrances(house.id).filter(func(e):return e.cell_id==entry.cell_id and e.side==entry.side)
				if entries.is_empty():return {"ok":false,"message":"引水会封住原有入口，请调整水渠"}
				var new_road:Dictionary=candidate.roads.filter(func(r):return r.id==road.id)[0]
				var access:=Height.assess(candidate,changed,entries[0],nearest(entries[0].at,new_road),new_road)
				if not access.ok:return {"ok":false,"message":"过水引坡无法保持原有门前通路："+str(access.reason)}
				measured.append({"house_id":house.id,"cell_id":entry.cell_id,"road_id":road.id,"height_access":access})
	# Prepare the production graph on two independent snapshots, never on live
	# actors. Do not promote 2D connectivity into a height-access claim above.
	var old_graph:RefCounted=load("res://scripts/world/city_creation_network.gd").new()
	var new_graph:RefCounted=load("res://scripts/world/city_creation_network.gd").new()
	var actors:Array[Dictionary]=[]
	old_graph.prepare(original.snapshot(),{},actors);new_graph.prepare(candidate.snapshot(),{},actors)
	for id:String in old_graph.connected_houses:
		if not new_graph.connected_houses.has(id):return {"ok":false,"message":"引水会切断原有入口路网，请调整水渠"}
	var joins:Dictionary={}
	var landings:Dictionary=preload("res://scripts/world/city_creation_road_landings.gd").prepare(candidate)
	for id:String in landings:
		for landing:Dictionary in landings[id]:
			var at:Vector2=landing.at;var key:=at.snapped(Vector2.ONE*.00001)
			var value:=road_height(candidate._road_heights.profiles[id],at)
			for peer:Dictionary in joins.get(key,[]):
				if id not in affected and peer.road_id not in affected:continue
				if absf(peer.y-value)>Height.Roads.STEP_HEIGHT+.002:return {"ok":false,"message":"过水桥头无法保持原有路口高度，请调整水渠"}
			if not joins.has(key):joins[key]=[]
			joins[key].append({"road_id":id,"y":value})
	return {"ok":true,"entries":measured,"network_houses":new_graph.connected_houses.size(),"junctions":joins.size()}
