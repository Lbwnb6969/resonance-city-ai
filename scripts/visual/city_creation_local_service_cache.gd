extends RefCounted
## Published value records only. Workers own their dictionaries and solvers.
const Frontage=preload("res://scripts/world/city_creation_frontage.gd")
const Rules=preload("res://scripts/world/city_creation_tradition_rules.gd")
static func rules(city)->int:
	return hash([city.era_modifiers,city.harmony_journey.get("traditions",[]),city.biome_seed,city.districts,city.era_unlocks])
static func capture(owner)->Dictionary:
	var cafes:Dictionary={}
	for id:String in owner.cafes.roots:
		var node:Node3D=owner.cafes.roots[id]
		cafes[id]={"plan":node.get_meta("layout",{}).duplicate(true),"extras":node.get_meta("extras",{}).duplicate(true)}
	return {"rules":rules(owner.state),"blessings":owner.state._site_blessings.duplicate(true),"courts":owner.state._courtyard_plans_cache.duplicate(true),"cafes":cafes}
static func seed(changes:Dictionary,published:Dictionary)->Dictionary:
	var regions:Array[Rect2]=[]
	for row:Dictionary in changes.get("bounds",[]):
		for key:String in ["old","new"]:
			var bounds:Rect2=row[key]
			if bounds.size!=Vector2.ZERO:regions.append(bounds.grow(18.))
	return {"regions":regions,"published":published.duplicate(true),"cold":int(changes.get("previous_revision",-1))<0 or regions.is_empty()}
static func touches(bounds:Rect2,regions:Array)->bool:
	return regions.any(func(r):return bounds.intersects(r,true))
static func house_bounds(house:Dictionary)->Rect2:
	return preload("res://scripts/world/city_creation_house_frame.gd").house_bounds(house).grow(.1)

static func prime(context)->Dictionary:
	var seed_data:Dictionary=context.get_meta("local_service_seed",{});var prior:Dictionary=seed_data.get("published",{})
	var stats:={"cold":true,"blessings_reused":0,"cafes_reused":0,"courts_reused":0}
	if seed_data.get("cold",true) or prior.get("rules",-1)!=rules(context.state):return stats
	var regions:Array=seed_data.regions.duplicate();var courts:Array=context.state.courtyard_plans();var old:Dictionary={}
	for plan:Dictionary in prior.get("courts",[]):old[str(plan.id)]=plan
	for plan:Dictionary in courts:
		if old.get(str(plan.id),{})!=plan:regions.append(Rect2(plan.bounds).grow(18.))
	for plan:Dictionary in prior.get("courts",[]):
		if not courts.any(func(p):return p.id==plan.id):regions.append(Rect2(plan.bounds).grow(18.))
	# Greedy cafe allocations can influence later neighbours. Expand the closure
	# of overlapping furniture candidate regions before reusing any far record.
	var cafes:Array=context.state.houses.filter(func(h):return h.get("role","")=="garden_cafe")
	var dirty:Dictionary={};var changed:=true
	while changed:
		changed=false
		for house:Dictionary in cafes:
			var box:=house_bounds(house).grow(7.5)
			if not dirty.has(str(house.id)) and touches(box,regions):dirty[str(house.id)]=true;regions.append(box);changed=true
	var geometry_signature:=hash([Frontage.ground_geometry(context.state.houses),context.state.roads,context.state.waters,Rules.has(context.state,"garden_salons")])
	var reused_cafes:Dictionary={}
	for house:Dictionary in context.state.houses:
		var id:String=house.id
		if touches(house_bounds(house),regions):continue
		if prior.get("blessings",{}).has(id):context.state._site_blessings[id]=prior.blessings[id];stats.blessings_reused+=1
		if house.get("role","")=="garden_cafe" and not dirty.has(id) and prior.get("cafes",{}).has(id):
			context.cafes.placement_inputs[id]=geometry_signature;stats.cafes_reused+=1
			reused_cafes[id]=true
	context.state._prosperity_revision=context.state.revision
	var far:Dictionary={}
	for plan:Dictionary in courts:
		if not touches(Rect2(plan.bounds),regions) and old.get(str(plan.id),{})==plan:far[str(plan.id)]=true;stats.courts_reused+=1
	context.set_meta("local_courts",far);context.set_meta("local_cafes",reused_cafes);stats.cold=false;return stats
static func network_seed(network)->Dictionary:
	return {"graph":network.graph.duplicate(true),"positions":network.positions.duplicate(),"routes":network._route_cache.duplicate(true),"services":network._service_routes.duplicate(true),"lengths":network._service_lengths.duplicate(true),"entries":network._route_cache_entries}
static func reuse_network(network,seed_data:Dictionary)->void:
	var compatible:bool=not seed_data.is_empty() and network.graph==seed_data.graph and network.positions==seed_data.positions
	network.prepare_stats.route_cache_reused=compatible
	if not compatible:return
	network._route_cache=seed_data.routes;network._service_routes=seed_data.services;network._service_lengths=seed_data.lengths;network._route_cache_entries=int(seed_data.entries)
