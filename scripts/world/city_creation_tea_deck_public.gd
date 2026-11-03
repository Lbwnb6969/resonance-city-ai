extends RefCounted
## Public proof is a real street port, supported route and visible water face.
const Deck=preload("res://scripts/world/city_creation_tea_deck_plan.gd")
const Ports=preload("res://scripts/world/city_creation_side_shore_access.gd")
static func derive(city,report:Dictionary,house:Dictionary)->Dictionary:
	var deck:=Deck.find(city,str(house.id))
	if deck.is_empty():return {}
	var member:Dictionary=report.houses[house.id];var wet:=Deck.at(deck,Vector2(0,1.30));var visible:bool=city.water_clearance(wet)<-.04 and city.ground_height(wet)<=city.Terrain.WATER_LEVEL+.005
	var waters:Array=[]
	for shore:Dictionary in preload("res://scripts/world/city_creation_shore_boundary.gd").candidates(city,deck.wall):
		if Vector2(shore.wet).distance_to(wet)>2.5:continue
		for id:String in shore.water_ids:
			if not waters.has(id):waters.append(id)
	var api=load("res://scripts/world/city_creation_cafe_layout_context.gd").new();var plan:Dictionary=api.layout(city,str(house.id)) if house.role=="garden_cafe" else {};var targets:Array=[]
	if not plan.is_empty():targets=plan.seats.duplicate()
	else:
		plan={"tea_deck":str(house.id),"center":Deck.at(deck,Vector2(0,.85)),"seats":[],"table_radius":.025,"chair_radius":0.,"route_points":[deck.landing,deck.gate,Deck.at(deck,Vector2(-.58,.20)),Deck.at(deck,Vector2(.58,.20)),Deck.at(deck,Vector2(-.58,1.12)),Deck.at(deck,Vector2(.58,1.12))]}
		targets=[deck.lookout]
	var entries:Array=[];var rejected:Array=[];var sources:Array=[str(house.id),str(deck.cell_id)];sources.append_array(waters)
	if visible:
		for port:Dictionary in Ports.ports(city,house):
			for target:Vector2 in targets:
				var route:Array[Vector2]=api.route_with_plan(city,str(house.id),plan,port.street_at,target)
				var row:={"house_id":str(house.id),"cell_id":deck.cell_id,"road_id":port.road_id,"street_at":port.street_at,"at":port.entry.at,"deck_target":target,"height_access":port.height_access,"ground_access":not route.is_empty(),"deck_path":route,"surface":"cantilever_deck_v1"}
				if route.is_empty():rejected.append(row)
				else:
					entries.append(row)
					if not sources.has(port.road_id):sources.append(port.road_id)
	var published:Dictionary=city._region_network.get("road_components",{}) if report.network_ready else {}
	var eligible:bool=visible and member.connected and entries.any(func(e):return member.component in published.get(e.road_id,[]))
	var reason:="qualified" if eligible else "water_missing" if not visible else "network_waiting" if not report.network_ready else "deck_access_missing" if not rejected.is_empty() else "public_entry_missing"
	var face:={"cell_id":deck.cell_id,"wall_at":deck.wall,"wet_at":wet,"water_id":waters[0] if not waters.is_empty() else "river","water_ids":waters,"polygon":Deck.shape(deck,deck.floors[0]).polygon,"surface":"cantilever_deck_v1"}
	sources.sort();return {"kind":"waterfront","stage":"district" if eligible else "cluster","members":[str(house.id)],"source_ids":sources,"component":member.component,"connected":member.connected,"evidence":{"geometry":"supported_cantilever_public_face","shore_faces":[face] if visible else [],"public_entries":entries,"rejected_entries":rejected,"network":"ready" if report.network_ready else "waiting"},"eligibility":{"district":eligible,"flowing":eligible,"reason":reason}}
