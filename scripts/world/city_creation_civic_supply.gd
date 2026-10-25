extends RefCounted
## Positive supply links reuse the published street graph and conserved stores.
const Rules=preload("res://scripts/world/city_creation_tradition_rules.gd")
const ROLES:=["bakery","workshop","garden_cafe","atelier","clockmaker"]
static func ready(city:RefCounted,house:Dictionary)->bool:
	var id:=str(house.id);var role:=str(house.role);var at:=Vector2(house.origin[0],house.origin[1])
	if role not in ROLES:return false
	if not bool(house.get("bakery_open" if role=="bakery" else "workshop_open",true)):return false
	if preload("res://scripts/world/city_creation_street_wonder_plan.gd").supports(city,id):return true
	match role:
		"bakery","workshop":return bool(city.site_blessing(id).get("blessed",false))
		"garden_cafe":
			if city.water_clearance(at)<=6.5 or city.site_blessing(id).get("blessed",false):return true
			for plant:Dictionary in city.plants:
				if at.distance_to(Vector2(plant.position[0],plant.position[1]))<=6.5 and city.vegetation_visible(plant):return true
		"atelier":
			if city.house_era(house)=="pastoral" or str(house.get("architecture","")) in ["portico","peristyle","rotunda","guildhall","venetian_loggia","belvedere_villa","guild_arcade"]:return true
			return not preload("res://scripts/world/city_creation_arcade_plan.gd").for_house(city,house).is_empty()
		"clockmaker":
			for cell:Dictionary in house.cells:
				if int(cell.level)>0:return true
			for road:Dictionary in city.roads:
				if str(road.get("style",""))=="tram" and city._water_stroke_distance(at,road.points)<=6.5:return true
	return false
static func bind(life:Node3D)->void:
	var city:RefCounted=life.state
	var key:=[city.revision,city._wish_epoch,life._network.get_instance_id() if life._network!=null else 0]
	if city.get_meta("civic_geometry",{}).get("key",[])==key:return
	var rows:Dictionary={};var houses:Dictionary={};var clocks:Array=[]
	for house:Dictionary in city.houses:
		var id:=str(house.id)
		if str(house.role) not in ROLES:continue
		houses[id]=house
		rows[id]={"ready":life.connected_houses.has(id) and ready(city,house),"providers":[],"customers":[],"clock":false}
		if rows[id].ready and house.role=="clockmaker":clocks.append(id)
	for id:String in rows:
		if not rows[id].ready:continue
		var at:=Vector2(houses[id].origin[0],houses[id].origin[1]);var port:=str(life.connected_houses[id])
		for clock:String in clocks:
			if clock==id:continue
			var point:=Vector2(houses[clock].origin[0],houses[clock].origin[1])
			if at.distance_to(point)<=14. and life._network.component_of.get(port,"")==life._network.component_of.get(str(life.connected_houses[clock]),"!"):rows[id].clock=true
		var provider_role:String={"garden_cafe":"bakery","atelier":"workshop"}.get(str(houses[id].role),"")
		if provider_role.is_empty():continue
		for source:String in rows:
			if not rows[source].ready or houses[source].role!=provider_role:continue
			if at.distance_to(Vector2(houses[source].origin[0],houses[source].origin[1]))>12.:continue
			var length:float=life._network.route_length(str(life.connected_houses[source]),port)
			if length>12.:continue
			rows[id].providers.append(source);rows[source].customers.append(id)
		rows[id].providers.sort()
	city.set_meta("civic_geometry",{"key":key,"revision":city.revision,"epoch":city._wish_epoch,"rows":rows})
static func status(city:RefCounted,id:String)->Dictionary:
	var view:Dictionary=city.get_meta("civic_geometry",{})
	var row:Dictionary=view.get("rows",{}).get(id,{}) if view.get("revision",-1)==city.revision and view.get("epoch",-1)==city._wish_epoch else {}
	var tier:=1 if row.get("ready",false) else 0
	var receipts:Dictionary=city.harmony_journey.get("receipts",{})
	for source:String in row.get("providers",[]):
		if int(receipts.get("civic_received/"+id+"/"+source,0))>0:tier=2
	for target:String in row.get("customers",[]):
		if int(receipts.get("civic_received/"+target+"/"+id,0))>0:tier=2
	return {"tier":tier,"tempo_mult":1.35 if row.get("clock",false) else 1.,"providers":row.get("providers",[]),"customers":row.get("customers",[])}
static func speed(city:RefCounted,id:String)->float:
	var row:=status(city,id)
	return float(row.tempo_mult)*(1.4 if row.tier==2 else 1.)
static func tea_speed(city:RefCounted,id:String)->float:
	var row:=status(city,id);var groups:=int(city.cafe_progress.get(id,{}).get("groups",0))
	return float(row.tempo_mult)*(1.4 if row.tier==2 and int(city.harmony_journey.get("receipts",{}).get("civic_meal/"+id,0))==groups+1 else 1.)
static func receive(life:Node3D,target:String,food:bool)->bool:
	bind(life);var city:RefCounted=life.state;var row:=status(city,target)
	if row.tier==0:return false
	var receipts:Dictionary=city.harmony_journey.get("receipts",{})
	var meal:=int(city.cafe_progress.get(target,{}).get("groups",0))+1
	if food and int(receipts.get("civic_meal/"+target,0))==meal:return true
	for source:String in row.providers:
		var key:="civic_received/"+target+"/"+source
		if not food and int(receipts.get(key,0))>0:return true
		var supply:Dictionary=city.bakery_status(source) if food else city.workshop_status(source)
		if not supply.open or int(supply.stock)<1:continue
		preload("res://scripts/world/city_creation_harmony_receipts.gd").initialize(city);receipts=city.harmony_journey.receipts
		if food:
			if not city.serve_bread(source):continue
			receipts["civic_meal/"+target]=meal
		else:
			city.workshop_supply[source].stock=int(city.workshop_supply[source].stock)-1
			city.workshop_supply[source].delivered=int(city.workshop_supply[source].delivered)+1;city._craft_changed()
			receipts["civic_instrument/"+target+"/"+source]=1
		receipts[key]=int(receipts.get(key,0))+1
		city.dirty=true;city.life_progress_dirty=true
		var events:Array=city.get_meta("civic_deliveries",[])
		events.append({"source":source,"target":target,"food":food,"count":receipts[key]})
		if events.size()>64:events.pop_front()
		city.set_meta("civic_deliveries",events);return true
	return false
static func pump(life:Node3D)->void:
	bind(life)
	for house:Dictionary in life.state.houses:
		if house.role=="atelier":receive(life,str(house.id),false)
