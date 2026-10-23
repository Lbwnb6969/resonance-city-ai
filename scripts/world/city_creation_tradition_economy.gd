extends RefCounted
const Rules=preload("res://scripts/world/city_creation_tradition_rules.gd")
static func produced(city:RefCounted,id:String,kind:String)->void:
	preload("res://scripts/world/city_creation_tradition_synergy.gd").record_batch(city,id,kind)
	if not Rules.has(city,"hydraulic_guild"):return
	var index:int=city._house_index(id)
	if index<0 or city.water_clearance(Vector2(city.houses[index].origin[0],city.houses[index].origin[1]))>=Rules.water_radius(city):return
	if city.harmony_journey.is_empty():preload("res://scripts/world/city_creation_harmony_receipts.gd").initialize(city)
	var receipts:Dictionary=city.harmony_journey.receipts;var key:="hydraulic_batches/"+id
	receipts[key]=int(receipts.get(key,0))+1
	if int(receipts[key])%3!=0:return
	var supply:Dictionary=city.bakery_supply if kind=="bread" else city.workshop_supply
	var capacity:int=city.bakery_capacity(id) if kind=="bread" else int(city.workshop_status(id).capacity)
	if int(supply[id].stock)>=capacity:return
	supply[id].stock=int(supply[id].stock)+1;supply[id].produced=int(supply[id].produced)+1
static func delivered(city:RefCounted,shop:String,target:String,kind:String)->void:
	preload("res://scripts/world/city_creation_tradition_synergy.gd").record_delivery(city,shop,target)
	if kind!="art" or not Rules.has(city,"illuminated_atelier") or city.culture_level(target)>=2:return
	var reserved:=0
	for row:Dictionary in city.workshop_supply.values():
		if row.transit.get("kind","")=="art" and row.transit.get("target_id","")==target:reserved+=1
	if city.culture_level(target)+reserved>=2:return
	city.house_culture[target]=int(city.house_culture.get(target,0))+1
	city.workshop_supply[shop].produced=int(city.workshop_supply[shop].produced)+1
	city.workshop_supply[shop].delivered=int(city.workshop_supply[shop].delivered)+1
static func shared_tier(city:RefCounted,id:String)->int:
	var original:=int(city.building_quality.get(id,{}).get("level_tier",1))
	if not Rules.has(city,"cloud_gallery"):return original
	var key:=[city.revision,hash(city.building_quality)]
	var cached:Dictionary=city.get_meta("cloud_shared_tiers",{})
	if cached.get("key",[])!=key:
		var tiers:Dictionary={};var bridges:Array=[]
		for house:Dictionary in city.houses:
			tiers[str(house.id)]=int(city.building_quality.get(str(house.id),{}).get("level_tier",1))
			if city.house_era(house)=="modern_eco":bridges.append_array(preload("res://scripts/world/city_creation_skybridge_plan.gd").for_house(city,house))
		for i in range(bridges.size()):
			for bridge:Dictionary in bridges:
				var tier:=maxi(tiers[bridge.from_house],tiers[bridge.to_house]);tiers[bridge.from_house]=tier;tiers[bridge.to_house]=tier
		cached={"key":key,"tiers":tiers};city.set_meta("cloud_shared_tiers",cached)
	return int(cached.tiers.get(id,original))
