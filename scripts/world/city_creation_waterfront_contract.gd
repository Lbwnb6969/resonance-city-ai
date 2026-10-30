extends RefCounted
## Read-only first waterfront contract: a real, unobstructed public shore face.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Height=preload("res://scripts/world/city_creation_entry_height.gd")
const Terrain=preload("res://scripts/world/city_creation_terrain.gd")
const MAX_WATER:=5.2
const HALF_FACE:=.35 # Existing ordinary doorway/public approach width.
const Obstacles=preload("res://scripts/world/city_creation_public_space_obstacles.gd")

static func derive(city:RefCounted,report:Dictionary,water_distance:Callable)->Array:
	var result:Array=[];var geometry:=Obstacles.collect(city)
	for house:Dictionary in city.houses:
		var obstacles:=Obstacles.for_source(geometry,house.id)
		var member:Dictionary=report.houses[house.id]
		if member.water_distance>MAX_WATER and member.prototype not in ["venetian_loggia","peristyle"]:continue
		var faces:Array=[];var entries:Array=[];var rejected:Array=[];var sources:Array=[house.id]
		for cell:Dictionary in house.cells:
			if int(cell.level)==0 and cell.kind=="room":sources.append(cell.id)
		for entry:Dictionary in city.house_entrances(house.id):
			if entry.get("passage",false):continue
			for shore:Dictionary in _shores(city,entry.wall_at):
				var delta:Vector2=shore.bank-Vector2(entry.wall_at);var distance:=delta.length()
				if distance>MAX_WATER or distance<.36 or delta.normalized().dot(Frame.normal(entry))<.72:continue
				var tangent:=Vector2(-delta.y,delta.x).normalized()*HALF_FACE
				var start:Vector2=entry.wall_at+delta.normalized()*.18;var end:Vector2=shore.bank-delta.normalized()*.18
				var box:={"polygon":PackedVector2Array([start-tangent,start+tangent,end+tangent,end-tangent])}
				if obstacles.any(func(o):return Frame.boxes_overlap(box,o)) or float(water_distance.call(box))<.05:continue
				if city.water_clearance(shore.wet)>=0. or city.ground_height(shore.wet)>Terrain.WATER_LEVEL+.005:continue
				var face:={"cell_id":entry.cell_id,"wall_at":entry.wall_at,"bank":shore.bank,"wet_at":shore.wet,"water_id":shore.water_id,"polygon":box.polygon}
				if not faces.has(face):faces.append(face)
				if not sources.has(shore.water_id):sources.append(shore.water_id)
				for road:Dictionary in city.roads:
					if entry.active and entry.road_id!=road.id:continue
					for i in range(1,road.points.size()):
						var a:=Vector2(road.points[i-1][0],road.points[i-1][1]);var b:=Vector2(road.points[i][0],road.points[i][1])
						var at:=Geometry2D.get_closest_point_to_segment(entry.at,a,b)
						if at.distance_to(entry.at)>=.82 or not Frame.contains(box,at):continue
						# Clip the real oriented segment, including its endpoint, to this face.
						var patch:=_street_patch(a,b,float(road.width),box.polygon)
						if patch.is_empty() or obstacles.any(func(o):return Frame.boxes_overlap(patch,o)) or float(water_distance.call(patch))<.05:continue
						var access:=Height.assess(city,house,entry,at,road)
						var ground:=_open_ground(city,at,shore.bank,road)
						var row:={"house_id":house.id,"cell_id":entry.cell_id,"road_id":road.id,"water_id":shore.water_id,"at":entry.at,"street_at":at,"height_access":access,"ground_access":ground}
						if not access.ok or access.get("scope","")=="unchanged" or not ground:
							if not rejected.has(row):rejected.append(row)
							continue
						if not entries.has(row):entries.append(row)
						if not sources.has(road.id):sources.append(road.id)
		var published:Dictionary=city._region_network.get("road_components",{}) if report.network_ready else {}
		var eligible:bool=member.connected and entries.any(func(e):return member.component in published.get(e.road_id,[]))
		var reason:="qualified" if eligible else "network_waiting" if not report.network_ready else "water_missing" if member.water_distance>MAX_WATER else "shore_face_missing" if faces.is_empty() else "entry_support_unverified" if entries.is_empty() and rejected.any(func(e):return e.height_access.get("scope","")=="unchanged") else "ground_access_missing" if entries.is_empty() and rejected.any(func(e):return not e.ground_access) else "height_access_missing" if entries.is_empty() and not rejected.is_empty() else "public_entry_missing"
		sources.sort()
		result.append({"kind":"waterfront","stage":"district" if eligible else "cluster" if not faces.is_empty() else "trait","members":[house.id],"source_ids":sources,"component":member.component,"connected":member.connected,"evidence":{"geometry":"public_shore_face","shore_faces":faces,"public_entries":entries,"rejected_entries":rejected,"network":"ready" if report.network_ready else "waiting"},"eligibility":{"district":eligible,"flowing":eligible,"reason":reason}})
	return result

static func _street_patch(a:Vector2,b:Vector2,width:float,face:PackedVector2Array)->Dictionary:
	if a.distance_to(b)<.00001:return {}
	var road:={"center":(a+b)*.5,"half":Vector2(a.distance_to(b)*.5,width*.5),"angle":-(b-a).angle()}
	var polygons:=Geometry2D.intersect_polygons(Frame.corners(road),face)
	return {"polygon":polygons[0]} if not polygons.is_empty() else {}

static func _open_ground(city:RefCounted,street:Vector2,bank:Vector2,road:Dictionary)->bool:
	# The .65m street-height bank envelope stays outside this public walk test.
	var direction:=(bank-street).normalized();var end:=bank-direction*.65
	if (end-street).dot(direction)<=0.:return true
	var tangent:=Vector2(-direction.y,direction.x);var count:=maxi(1,ceili(street.distance_to(end)/.12))
	for side:float in [-HALF_FACE,0.,HALF_FACE]:
		var previous:=0.;var was_road:=false
		for i in range(count+1):
			var at:=street.lerp(end,float(i)/count)+tangent*side
			var on_road:bool=city._water_stroke_distance(at,road.points)<=float(road.width)*.5
			var y:float=city.street_height(at) if on_road else city.ground_height(at)
			var allowed:float=Height.Roads.MAX_GRADE*street.distance_to(end)/count+.002
			if on_road or was_road:allowed+=Height.Roads.STEP_HEIGHT
			if i>0 and absf(y-previous)>allowed:return false
			previous=y;was_road=on_road
	return true

static func _shores(city:RefCounted,from:Vector2)->Array:
	var side:=signf(from.x-city.river_x(from.y));var bank:=Vector2(city.river_x(from.y)+side*city.RIVER_HALF_WIDTH,from.y)
	var result:Array=[{"bank":bank,"wet":bank-Vector2(side*.6,0),"water_id":"river"}]
	for water:Dictionary in city.waters:
		var radius:float=float(water.width)*.5
		for i in range(maxi(1,water.points.size()-1)):
			var a:=Vector2(water.points[i][0],water.points[i][1]);var j:=mini(i+1,water.points.size()-1);var b:=Vector2(water.points[j][0],water.points[j][1])
			var near:=Geometry2D.get_closest_point_to_segment(from,a,b);var direction:=(from-near).normalized()
			result.append({"bank":near+direction*radius,"wet":near+direction*maxf(0.,radius-.6),"water_id":water.id})
	return result
