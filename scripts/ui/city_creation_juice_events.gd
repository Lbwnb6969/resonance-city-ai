extends RefCounted
## Read the actual planning scopes. Loading/undo establish a fresh baseline.
var known:Dictionary={}
static func capture(city:RefCounted)->Dictionary:
	var result:Dictionary={};var plan:Dictionary=city.synergy_buffs()
	for scope:String in plan.chord_scopes:
		for chord:String in plan.chord_scopes[scope].chords:
			var members:Array[String]=[]
			for id:String in plan.houses:
				if scope in plan.houses[id].chord_scopes.get(chord,[]):members.append(id)
			members.sort()
			if not members.is_empty():result["chord/"+chord+"/"+scope]={"kind":"chord","label":city.SynergyBuffs.CHORD_NAMES[chord],"members":members,"source":members[0]}
	var landmarks:Dictionary={}
	for house:Dictionary in city.houses:
		if house.has("signature"):landmarks[str(house.signature)]=str(house.id)
	for id:String in plan.houses:
		var row:Dictionary=plan.houses[id]
		var active:Dictionary={"bell_keep":float(row.delivery_mult)>1.,"watermill":float(row.water_power_mult)>1.,"music_academy":int(row.batch_mult)>1,"botanical_palace":bool(row.natural),"clockwork_depot":city.transit_efficiency(id)>1.}
		for kind:String in active:
			if active[kind] and landmarks.has(kind):result["aura/"+landmarks[kind]+"/"+id]={"kind":"aura","label":"街坊回响","source":landmarks[kind],"members":[landmarks[kind],id]}
	if landmarks.has("floating_amphitheater"):
		var id:String=landmarks.floating_amphitheater
		if city.special_site(id).hall_ecology:result["aura/"+id+"/ecology"]={"kind":"aura","label":"水岸交响","source":id,"members":[id]}
	return result
func rebase(city:RefCounted)->void:known=capture(city)
func collect(city:RefCounted)->Array[Dictionary]:
	var current:=capture(city);var groups:Dictionary={}
	for key:String in current:
		if known.has(key):continue
		var event:Dictionary=current[key];var group:=key if event.kind=="chord" else "aura/"+str(event.source)
		if not groups.has(group):groups[group]=event.duplicate(true);groups[group].key=group
		else:
			for id:String in event.members:
				if id not in groups[group].members:groups[group].members.append(id)
	known=current
	var events:Array[Dictionary]=[]
	for event:Dictionary in groups.values():events.append(event)
	return events
static func sequence(city:RefCounted,source:String,members:Array)->Array[String]:
	var houses:Dictionary={}
	for house:Dictionary in city.houses:houses[str(house.id)]=Vector2(house.origin[0],house.origin[1])
	var ids:Array[String]=[]
	for id:String in members:
		if houses.has(id) and id not in ids:ids.append(id)
	if not houses.has(source):return []
	ids.erase(source);var origin:Vector2=houses[source]
	ids.sort_custom(func(a:String,b:String)->bool:
		var da:float=origin.distance_squared_to(houses[a]);var db:float=origin.distance_squared_to(houses[b])
		return a<b if is_equal_approx(da,db) else da<db)
	ids.push_front(source);return ids
