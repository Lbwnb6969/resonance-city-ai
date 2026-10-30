extends RefCounted
## Placed sources qualify on their own front, without borrowing a neighboring house.
const Plan=preload("res://scripts/world/city_creation_placed_landmarks.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Ground=preload("res://scripts/world/city_creation_artisan_contract.gd")
const Access=preload("res://scripts/world/city_creation_landmark_access.gd")
const Obstacles=preload("res://scripts/world/city_creation_public_space_obstacles.gd")

static func derive(city:RefCounted,report:Dictionary,water_distance:Callable)->Array:
	var result:Array=[];var geometry:=Obstacles.collect(city)
	for item:Dictionary in city.placed_landmarks:
		var obstacles:=Obstacles.for_source(geometry,item.id,true)
		var normal:=Vector2.DOWN.rotated(-float(item.yaw));var tangent:=Vector2.RIGHT.rotated(-float(item.yaw))
		var front:Vector2=Plan.position(item)+normal*(Plan.SIZES[item.blueprint].y*.5)
		var start:=front+normal*.72;var end:=start+normal*1.8
		var box:={"polygon":PackedVector2Array([start-tangent*.9,start+tangent*.9,end+tangent*.9,end-tangent*.9])}
		var approach:={"polygon":PackedVector2Array([front-normal*.10-tangent*.35,front-normal*.10+tangent*.35,end+tangent*.35,end-tangent*.35])}
		var usable:bool=not obstacles.any(func(o):return Frame.boxes_overlap(box,o) or Frame.boxes_overlap(approach,o)) and float(water_distance.call(box))>=.05 and float(water_distance.call(approach))>=.05 and Array(Frame.corners(box)).all(func(p):return city.WORLD_RECT.has_point(p))
		if usable:usable=Ground._usable_ground(city,start,end,tangent*.9)
		var entries:Array=[];var rejected:Array=[];var sources:Array=[item.id];var components:Array=[]
		if usable:
			for road:Dictionary in city.roads:
				for i in range(1,road.points.size()):
					var a:=Vector2(road.points[i-1][0],road.points[i-1][1]);var b:=Vector2(road.points[i][0],road.points[i][1])
					var at:=Geometry2D.get_closest_point_to_segment(Plan.entrance(item),a,b)
					if not Frame.contains(box,at):continue
					var access:=Access.assess(city,item,at,road)
					var row:={"landmark_id":item.id,"road_id":road.id,"street_at":at,"height_access":access,"components":[]}
					if not access.ok:rejected.append(row);continue
					for span:Dictionary in city._region_network.get("road_spans",[]) if report.network_ready else []:
						if road.id in span.roads and at.distance_to(Geometry2D.get_closest_point_to_segment(at,span.a,span.b))<.05:
							if not row.components.has(span.component):row.components.append(span.component)
					row.components.sort()
					if not entries.has(row):entries.append(row)
					for component:String in row.components:
						if not components.has(component):components.append(component)
					if not sources.has(road.id):sources.append(road.id)
		components.sort();sources.sort();var eligible:=not components.is_empty()
		var reason:="qualified" if eligible else "network_waiting" if not report.network_ready else "forecourt_missing" if not usable else "height_access_missing" if entries.is_empty() and not rejected.is_empty() else "public_entry_missing"
		result.append({"kind":"civic","stage":"district" if eligible else "cluster" if usable else "trait","members":[item.id],"source_ids":sources,"component":components[0] if eligible else "","connected":eligible,"evidence":{"geometry":"landmark_forecourt","blueprint":item.blueprint,"forecourts":[{"polygon":box.polygon}] if usable else [],"public_entries":entries,"rejected_entries":rejected,"network":"ready" if report.network_ready else "waiting"},"eligibility":{"district":eligible,"lyrical":eligible,"virtuoso":eligible,"reason":reason}})
	return result
