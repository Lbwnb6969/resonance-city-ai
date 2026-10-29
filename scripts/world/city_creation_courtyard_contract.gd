extends RefCounted
## V7 read-only space descriptions. Old zone membership and rights stay separate.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")

static func derive(city:RefCounted,report:Dictionary,water_distance:Callable)->Array:
	var rows:Array=[];var covered:Dictionary={};var open_context:Dictionary={}
	for court:Dictionary in city.courtyard_plans():
		var homes:Array=[];var components:Array=[];var cells:Array=[]
		for id:String in court.members:
			var house:Dictionary=city.houses[city._house_index(id)]
			if house.role=="residential":homes.append(id)
			var component:String=report.houses[id].component
			if not component.is_empty() and not components.has(component):components.append(component)
			for cell:Dictionary in house.cells:
				if int(cell.level)==0 and cell.kind=="room":cells.append(cell.id)
		if homes.is_empty():continue
		var portals:Array=[];var roads:Array=[]
		for id:String in court.members:
			for entry:Dictionary in city.house_entrances(id):
				if not entry.active or not entry.get("passage",false) or not _inside(court.tiles,entry.at):continue
				var road:Dictionary=city.roads.filter(func(r):return r.id==entry.road_id)[0]
				if not road.points.any(func(p):return _exterior(city,court,Vector2(p[0],p[1]))):continue
				var published:Array=city._region_network.get("road_components",{}).get(entry.road_id,[]) if report.network_ready else []
				portals.append({"house_id":id,"cell_id":entry.cell_id,"road_id":entry.road_id,"at":entry.at,"components":published.duplicate()})
				if not roads.has(entry.road_id):roads.append(entry.road_id)
		var connected:bool=report.network_ready and components.size()==1 and court.members.all(func(id):return report.houses[id].connected)
		var eligible:bool=connected and portals.any(func(p):return components[0] in p.components)
		roads.sort()
		rows.append({"kind":"courtyard","stage":"district" if eligible else "cluster","members":court.members.duplicate(),"source_ids":Array(court.members)+cells+roads+[court.id],"component":components[0] if connected else "","connected":connected,"evidence":{"geometry":"closed_ground_ring","court_id":court.id,"residential":homes,"usable_tiles":court.tiles.size(),"area_m2":court.tiles.size()*3.24,"public_portals":portals,"network":"ready" if report.network_ready else "waiting"},"eligibility":{"district":eligible,"warm":eligible,"reason":"qualified" if eligible else "network_waiting" if not report.network_ready else "public_portal_missing" if portals.is_empty() else "portal_disconnected"}})
		for id:String in homes:covered[id]=true
	var lanes:Array=preload("res://scripts/world/city_creation_lane_contract.gd").derive(city,report,water_distance)
	rows.append_array(lanes)
	for house:Dictionary in city.houses:
		if covered.has(house.id) or house.role!="residential":continue
		var open_courts:Array=preload("res://scripts/world/city_creation_open_courts.gd").for_house(city,house,water_distance,open_context)
		for court:Dictionary in open_courts:
			var member:Dictionary=report.houses[house.id]
			rows.append({"kind":"courtyard","stage":"cluster","members":[house.id],"source_ids":[house.id]+court.cells+[court.id],"component":member.component,"connected":member.connected,"evidence":{"geometry":"half_enclosure","pocket_id":court.id,"polygon":court.polygon,"wall_segments":court.wall_segments,"mouths":court.mouths,"usable_tiles":court.usable_tiles,"area_m2":court.area_m2,"open_access":court.open_access,"network":"ready" if report.network_ready else "waiting"},"eligibility":{"district":false,"warm":false,"reason":"half_enclosure"}})
		if not open_courts.is_empty():continue
		if lanes.any(func(lane):return house.id in lane.members):continue
		var cells:Array=[]
		for cell:Dictionary in house.cells:
			if int(cell.level)==0 and cell.kind=="room":cells.append(cell.id)
		if cells.is_empty():continue
		var member:Dictionary=report.houses[house.id]
		rows.append({"kind":"courtyard","stage":"trait","members":[house.id],"source_ids":[house.id]+cells,"component":member.component,"connected":member.connected,"evidence":{"geometry":"dwelling_mass","ground_rooms":cells.size(),"network":"ready" if report.network_ready else "waiting"},"eligibility":{"district":false,"warm":false,"reason":"courtyard_geometry_missing"}})
	rows.sort_custom(func(a,b):return str(a.source_ids)<str(b.source_ids))
	return rows

static func _inside(tiles:Array,at:Vector2)->bool:
	return tiles.any(func(tile):return Frame.contains(tile,at))

static func _exterior(city:RefCounted,court:Dictionary,at:Vector2)->bool:
	if _inside(court.tiles,at):return false
	for id:String in court.members:
		var house:Dictionary=city.houses[city._house_index(id)]
		for cell:Dictionary in house.cells:
			if int(cell.level)==0 and cell.kind=="room" and Frame.contains(Frame.footprint(house,cell),at):return false
	return true
