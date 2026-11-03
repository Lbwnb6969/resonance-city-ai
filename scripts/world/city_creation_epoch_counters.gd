extends RefCounted
## Epoch-only geometry counters. Old Harmony receipts retain per-identity semantics.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Legacy=preload("res://scripts/world/city_creation_receipt_counters.gd")
const WEIGHTS:={"house_peak":2,"cell_peak":1,"space_cluster":10,"space_district":25}
static func current(city:RefCounted)->Dictionary:
	var result:=Legacy.current(city)
	for key:String in result.keys():
		if key.begins_with("house/"):result.erase(key)
	result.house_peak=city.houses.size();var cells:=0
	for house:Dictionary in city.houses:cells+=house.cells.size()
	result.cell_peak=maxi(0,cells-city.houses.size())
	for key:String in spaces(city):result[key]=1
	return result
static func spaces(city:RefCounted)->Dictionary:
	var result:Dictionary={};var courts:Dictionary={}
	for court:Dictionary in city.courtyard_plans():courts[court.id]=court.center
	for space:Dictionary in city.functional_zones().spaces:
		if space.stage not in ["cluster","district"]:continue
		var at:=Vector2.ZERO;var count:=0
		if courts.has(space.evidence.get("court_id","")):at=courts[space.evidence.court_id];count=1
		elif space.evidence.has("polygon"):
			for p:Vector2 in space.evidence.polygon:at+=p;count+=1
		else:
			for id:String in space.members:
				var index:int=city._house_index(id)
				if index>=0:at+=Frame.house_bounds(city.houses[index]).get_center();count+=1
				else:
					var item:Dictionary=city.PlacedLandmarks.row(city,id)
					if not item.is_empty():at+=city.PlacedLandmarks.position(item);count+=1
		if count==0:continue
		at/=count
		var grid:=Vector2i((at/7.2).floor());var identity:="%s_%d_%d"%[space.kind,grid.x,grid.y]
		result["space_cluster/"+identity]=1
		if space.stage=="district":result["space_district/"+identity]=1
	return result
static func baseline(city:RefCounted)->Dictionary:
	var result:=Legacy.baseline(city)
	var counts:=current(city)
	for key:String in counts:result[key]=maxi(int(result.get(key,0)),int(counts[key]))
	return result
static func loaded(city:RefCounted)->void:
	var policy:Dictionary=city.cozy_progression
	if policy.is_empty() or policy.baseline.has("house_peak"):return
	# Resolve old geometry once, with no Life simulation or filesystem writes.
	var network:RefCounted=load("res://scripts/world/city_creation_network.gd").new();network.state=city;network._build_graph();city.prepare_regional_echo(network)
	var counts:=current(city);var old_houses:Dictionary={}
	for field:String in ["baseline","receipts"]:
		for key:String in policy[field]:
			if key.begins_with("house/") and int(policy[field][key])>0:old_houses[key]=true
	counts.house_peak=maxi(int(counts.house_peak),old_houses.size())
	for key:String in counts:
		if key in ["house_peak","cell_peak"] or key.begins_with("space_"):policy.baseline[key]=int(counts[key])
static func event_xp(city:RefCounted,key:String,delta:int)->int:
	var kind:=key.get_slice("/",0)
	return int(WEIGHTS[kind])*delta if WEIGHTS.has(kind) else preload("res://scripts/world/city_creation_receipt_rewards.gd").event_xp(city,key,delta)
