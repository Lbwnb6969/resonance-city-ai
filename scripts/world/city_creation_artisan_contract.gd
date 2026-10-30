extends RefCounted
## First artisan scope: actual workshop body plus an unobstructed room-sized forecourt.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Height=preload("res://scripts/world/city_creation_entry_height.gd")
const BODIES:=["sawtooth_atrium","iron_conservatory","twin_gable"]
const HALF_WIDTH:=.9 # One existing room frontage, not a zone score.
const DEPTH:=1.8
const Obstacles=preload("res://scripts/world/city_creation_public_space_obstacles.gd")

static func derive(city:RefCounted,report:Dictionary,water_distance:Callable)->Array:
	var result:Array=[];var geometry:=Obstacles.collect(city)
	for house:Dictionary in city.houses:
		var obstacles:=Obstacles.for_source(geometry,house.id)
		var member:Dictionary=report.houses[house.id]
		if member.prototype not in BODIES and member.prototype!="clock_turret":continue
		var courts:Array=[];var entries:Array=[];var rejected:Array=[];var sources:Array=[house.id]
		for cell:Dictionary in house.cells:
			if int(cell.level)==0 and cell.kind=="room":sources.append(cell.id)
		# Clock decoration alone is a trait; workshop roof bodies have actual work volume.
		if member.prototype in BODIES:
			for entry:Dictionary in city.house_entrances(house.id):
				if entry.get("passage",false):continue
				var normal:=Frame.normal(entry);var tangent:=Vector2(-normal.y,normal.x)*HALF_WIDTH
				var start:Vector2=entry.wall_at+normal*.18;var end:Vector2=entry.wall_at+normal*DEPTH
				var box:={"polygon":PackedVector2Array([start-tangent,start+tangent,end+tangent,end-tangent])}
				if obstacles.any(func(o):return Frame.boxes_overlap(box,o)) or float(water_distance.call(box))<.05:continue
				if not _usable_ground(city,start,end,tangent):continue
				courts.append({"cell_id":entry.cell_id,"polygon":box.polygon})
				for road:Dictionary in city.roads:
					if entry.active and entry.road_id!=road.id:continue
					for i in range(1,road.points.size()):
						var a:=Vector2(road.points[i-1][0],road.points[i-1][1]);var b:=Vector2(road.points[i][0],road.points[i][1])
						var at:=Geometry2D.get_closest_point_to_segment(entry.at,a,b)
						if at.distance_to(entry.at)>=.82 or not Frame.contains(box,at):continue
						var access:=Height.assess(city,house,entry,at,road)
						var row:={"cell_id":entry.cell_id,"road_id":road.id,"street_at":at,"height_access":access}
						if not access.ok or access.get("scope","")=="unchanged":
							if not rejected.has(row):rejected.append(row)
							continue
						if not entries.has(row):entries.append(row)
						if not sources.has(road.id):sources.append(road.id)
		var published:Dictionary=city._region_network.get("road_components",{}) if report.network_ready else {}
		var eligible:bool=member.connected and entries.any(func(e):return member.component in published.get(e.road_id,[]))
		var reason:="qualified" if eligible else "network_waiting" if not report.network_ready else "work_body_missing" if member.prototype not in BODIES else "forecourt_missing" if courts.is_empty() else "height_access_missing" if not rejected.is_empty() and entries.is_empty() else "public_entry_missing"
		sources.sort()
		result.append({"kind":"artisan","stage":"district" if eligible else "cluster" if not courts.is_empty() else "trait","members":[house.id],"source_ids":sources,"component":member.component,"connected":member.connected,"evidence":{"geometry":"workshop_forecourt","prototype":member.prototype,"forecourts":courts,"public_entries":entries,"rejected_entries":rejected,"network":"ready" if report.network_ready else "waiting"},"eligibility":{"district":eligible,"echo":eligible,"reason":reason}})
	return result

static func _usable_ground(city:RefCounted,start:Vector2,end:Vector2,tangent:Vector2)->bool:
	var columns:=15;var rows:=14;var previous:Array=[]
	for z in range(rows+1):
		var current:Array=[]
		for x in range(columns+1):
			var at:=start.lerp(end,float(z)/rows)+tangent*lerpf(-1.,1.,float(x)/columns)
			var on_road:bool=city.roads.any(func(r):return city._water_stroke_distance(at,r.points)<=float(r.width)*.5)
			var sample:={"at":at,"y":city.street_height(at) if on_road else city.ground_height(at),"road":on_road}
			var peers:Array=[]
			if x>0:peers.append(current[-1])
			if z>0:peers.append(previous[x])
			for peer:Dictionary in peers:
				var allowed:float=Height.Roads.MAX_GRADE*at.distance_to(peer.at)+.002
				if on_road or peer.road:allowed+=Height.Roads.STEP_HEIGHT
				if absf(float(sample.y)-float(peer.y))>allowed:return false
			current.append(sample)
		previous=current
	return true
