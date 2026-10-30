extends RefCounted
## Actual cultural shells and public forecourts, independent of old role/height tags.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Access=preload("res://scripts/world/city_creation_civic_access.gd")
const Civic=preload("res://scripts/world/city_creation_neoclassical_civic_plan.gd")
const Ground=preload("res://scripts/world/city_creation_artisan_contract.gd")
const BODIES:=["ionic_stoa","roman_basilica","rotunda","guildhall"]
const START:=.85 # Outside the shipped .71m stoa walkway and .755m rotunda stair.
const DEPTH:=1.8 # One room-sized public forecourt beyond the actual portico.
const Obstacles=preload("res://scripts/world/city_creation_public_space_obstacles.gd")

static func derive(city:RefCounted,report:Dictionary,water_distance:Callable)->Array:
	var result:Array=[];var geometry:=Obstacles.collect(city)
	for house:Dictionary in city.houses:
		var obstacles:=Obstacles.for_source(geometry,house.id)
		var member:Dictionary=report.houses[house.id];var prototype:String=member.prototype
		if prototype not in BODIES or not Civic.eligible(city,house):continue
		# Only the renaissance renderer installs PedimentedGuildhall.
		if prototype=="guildhall" and city.house_era(house)!="renaissance":continue
		var courts:Array=[];var entries:Array=[];var rejected:Array=[];var sources:Array=[house.id]
		for cell:Dictionary in house.cells:
			if int(cell.level)==0 and cell.kind=="room":sources.append(cell.id)
		for entry:Dictionary in city.house_entrances(house.id):
			# These public fronts face local south. Side/rear doors do not prove the portico.
			if entry.get("passage",false) or entry.side!=Vector2i.DOWN:continue
			var normal:=Frame.normal(entry);var tangent:=Frame.direction(house,Vector2.RIGHT)*.9
			var offset:=Access.approach_offset(house,entry,prototype)
			if not is_finite(offset):
				rejected.append({"cell_id":entry.cell_id,"reason":"column_obstruction"});continue
			var shift:Vector2=tangent*(offset/.9)
			var start:Vector2=entry.wall_at+normal*START+shift;var end:Vector2=start+normal*DEPTH
			var box:={"polygon":PackedVector2Array([start-tangent,start+tangent,end+tangent,end-tangent])}
			var approach:={"polygon":PackedVector2Array([entry.wall_at+normal*(.10 if prototype=="ionic_stoa" else .18)-tangent*(.35/.9),entry.wall_at+normal*(.10 if prototype=="ionic_stoa" else .18)+tangent*(.35/.9),end+tangent*(.35/.9),end-tangent*(.35/.9)])}
			if obstacles.any(func(o):return Frame.boxes_overlap(box,o) or Frame.boxes_overlap(approach,o)):continue
			if float(water_distance.call(box))<.05 or float(water_distance.call(approach))<.05:continue
			if not Ground._usable_ground(city,start,end,tangent):continue
			courts.append({"cell_id":entry.cell_id,"polygon":box.polygon,"approach":approach.polygon,"column_offset":offset})
			for road:Dictionary in city.roads:
				if entry.active and entry.road_id!=road.id:continue
				for i in range(1,road.points.size()):
					var a:=Vector2(road.points[i-1][0],road.points[i-1][1]);var b:=Vector2(road.points[i][0],road.points[i][1])
					var at:=Geometry2D.get_closest_point_to_segment(entry.at+shift,a,b)
					if at.distance_to(entry.at)>=.82 or not Frame.contains(box,at):continue
					var access:=Access.assess(city,house,entry,at,road,prototype)
					var row:={"cell_id":entry.cell_id,"road_id":road.id,"street_at":at,"column_offset":offset,"height_access":access}
					if not access.ok or access.get("scope","")=="unchanged":rejected.append(row);continue
					if not entries.has(row):entries.append(row)
					if not sources.has(road.id):sources.append(road.id)
		var published:Dictionary=city._region_network.get("road_components",{}) if report.network_ready else {}
		var eligible:bool=member.connected and entries.any(func(e):return member.component in published.get(e.road_id,[]))
		var reason:="qualified" if eligible else "network_waiting" if not report.network_ready else "column_obstruction" if courts.is_empty() and not rejected.is_empty() else "forecourt_missing" if courts.is_empty() else "height_access_missing" if not rejected.is_empty() and entries.is_empty() else "public_entry_missing"
		sources.sort()
		result.append({"kind":"civic","stage":"district" if eligible else "cluster" if not courts.is_empty() else "trait","members":[house.id],"source_ids":sources,"component":member.component,"connected":member.connected,"evidence":{"geometry":"cultural_forecourt","prototype":prototype,"forecourts":courts,"public_entries":entries,"rejected_entries":rejected,"network":"ready" if report.network_ready else "waiting"},"eligibility":{"district":eligible,"lyrical":eligible,"virtuoso":eligible,"reason":reason}})
	return result
