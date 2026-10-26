extends RefCounted
## Published crossing sites and actual upper-floor spans, without authored IDs.
const SkyPlan=preload("res://scripts/world/city_creation_skybridge_plan.gd")
const BridgePlan=preload("res://scripts/world/city_creation_bridge_plan.gd")
static func derive(city:RefCounted,travel:RefCounted)->Array[Dictionary]:
	var result:Array[Dictionary]=[]
	for site:Dictionary in travel.sites.values():
		if site.kind!="bridge":continue
		var at:Vector2=site.at;var era:=str(city.district_at(at).get("era_theme","pastoral"))
		var y:float=city.street_height(at)
		var row:Dictionary={"id":site.id,"kind":"bridge","owner":site.owner_id,"at":at,"axis":site.axis,"half_width":site.half_width,"y":y-.12 if y>.6 else y+.32,"era":era,"wet":city.water_clearance(at)<0.,"banks":banks(city,at,site.axis)}
		for road:Dictionary in city.roads:
			if road.id!=site.owner_id:continue
			for run:Dictionary in city.road_profile(road).get("bridge_runs",[]):
				var midpoint:Vector2=BridgePlan._point(run.samples,(float(run.start)+float(run.end))*.5).at
				if midpoint.distance_to(at)>.3:continue
				# Double arches have a solid central pier: hang at a real opening apex.
				if not run.has("family"):
					var point:=BridgePlan._point(run.samples,lerpf(float(run.start),float(run.end),.25))
					row.hang_at=point.at;row.hang_axis=point.tangent;row.y=float(run.deck_y)-.20
		result.append(row)
	for house:Dictionary in city.houses:
		for span:Dictionary in SkyPlan.for_house(city,house):
			var at:Vector2=(span.a+span.b)*.5;var along:Vector2=(span.b-span.a).normalized()
			result.append({"id":"sky/%s/%s"%[span.from_cell,span.to_cell],"kind":"skybridge","owner":span.from_house,"at":at,"axis":Vector2(-along.y,along.x),"along":along,"half_width":float(span.length)*.5,"y":float(span.floor_y)-.12,"era":"modern_eco","wet":city.water_clearance(at)<0.,"banks":[span.from_house,span.to_house]})
	return result
static func banks(city:RefCounted,at:Vector2,axis:Vector2)->Array[String]:
	var ids:Array[String]=["",""];var distances:=[INF,INF]
	for house:Dictionary in city.houses:
		var point:=Vector2(house.origin[0],house.origin[1]);var offset:=point-at
		if offset.length()>18. or absf(offset.dot(axis))<.3:continue
		var side:=0 if offset.dot(axis)<0. else 1
		if offset.length_squared()<distances[side]:ids[side]=str(house.id);distances[side]=offset.length_squared()
	return ids
