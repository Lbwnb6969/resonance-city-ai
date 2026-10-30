extends RefCounted
## Current spatial rights; earned receipts remain owned by HarmonyReceipts.
const CHORDS:=["pastoral_triad","clockwork_waltz"]
static func award_xp(city:RefCounted,amount:float)->Dictionary:
	if city.harmony_journey.has("growth_cutoff"):return {"earned":0,"leveled_up":false,"level":city.harmony_journey.harmony_level,"spatial":for_city(city)}
	return _award(city,amount,false)
static func _award_recorded_xp(city:RefCounted,amount:float)->Dictionary:
	if amount<=0.:return {"earned":0,"leveled_up":false,"level":city.harmony_journey.harmony_level,"spatial":for_city(city)}
	return _award(city,amount,true)
static func _award(city:RefCounted,amount:float,preserve_offer:bool)->Dictionary:
	var spatial:=for_city(city);var journey:Dictionary=city.harmony_journey
	var exact:float=amount*float(spatial.inspiration_multiplier)+float(journey.get("xp_remainder",0.))
	journey.xp_remainder=exact-floor(exact)
	var result:Dictionary=city.HarmonyJourney._advance_xp(journey,int(exact)) if preserve_offer else city.HarmonyJourney.add_harmony_xp(journey,int(exact),74001,city.era_unlocks)
	if preserve_offer and city.HarmonyJourney.credits(journey)>0 and journey.pending_draft.is_empty():journey.pending_draft=city.HarmonyJourney.roll_inspiration_draft(journey,city.HarmonyJourney.choices_made(journey)+1,74001,city.era_unlocks)
	result.earned=int(exact);result.spatial=spatial;return result

static func for_city(city:RefCounted)->Dictionary:
	var zones:Dictionary=city.functional_zones()
	var result:={"inspiration_multiplier":1.,"artisan_sources":[],"mutual":{},"components":{}}
	if not zones.enabled or not zones.network_ready:return result
	var ids:Array=zones.houses.keys();ids.sort()
	for id:String in ids:
		var house:Dictionary=zones.houses[id]
		if not house.connected:continue
		var component:String=house.component
		if not result.components.has(component):result.components[component]={"members":[],"courtyard":[],"waterfront":[],"artisan":[]}
		var group:Dictionary=result.components[component];group.members.append(id)
		for kind:String in ["courtyard","waterfront","artisan"]:
			if kind in house.kinds:group[kind].append(id)
		if "artisan" in house.kinds:result.artisan_sources.append(id)
	for group:Dictionary in result.components.values():
		for id:String in group.members:
			var home:bool=id in group.courtyard;var market:bool=id in group.waterfront
			var peers:Array=[]
			for other:String in group.members:
				if other!=id and ((home and other in group.waterfront) or (market and other in group.courtyard)):peers.append(other)
			result.mutual[id]=peers
	if not result.artisan_sources.is_empty():result.inspiration_multiplier=1.35
	return result

static func chords(city:RefCounted,legacy:Dictionary)->Dictionary:
	# Retain other existing geometric recipes. These two now use real space,
	# independent of painted acoustic districts and completed resident events.
	var result:Dictionary=legacy.duplicate(true)
	for chord:String in CHORDS:
		result.active.erase(chord)
		for row:Dictionary in result.houses.values():row.erase(chord)
		for key:String in result.scopes.keys():
			result.scopes[key].chords.erase(chord)
			if result.scopes[key].chords.is_empty():result.scopes.erase(key)
	var benefits:=for_city(city)
	for group:Dictionary in benefits.components.values():
		var mutual:=false
		for home:String in group.courtyard:
			if not Array(benefits.mutual[home]).is_empty():mutual=true;break
		var active:Array=[]
		if mutual:active.append("pastoral_triad")
		if not group.artisan.is_empty():active.append("clockwork_waltz")
		if active.is_empty():continue
		var scope:="functional:"+str(group.members[0])
		var sources:Dictionary={"pastoral_triad":[],"clockwork_waltz":group.artisan.duplicate()}
		for id:String in group.members:
			if not Array(benefits.mutual[id]).is_empty():sources.pastoral_triad.append(id)
		result.scopes[scope]={"district_ids":[],"chords":active,"source_houses":sources}
		for chord:String in active:
			if chord not in result.active:result.active.append(chord)
			for id:String in sources[chord]:
				if not result.houses.has(id):result.houses[id]={}
				result.houses[id][chord]=[scope]
	result.active.sort();return result

static func chord_receipt_key(city:RefCounted,chord:String)->String:
	# A new component name, merge or split cannot re-award an owned chord.
	# Reuse older free-city receipts too, without erasing their original keys.
	var prefix:="chord/"+chord+"/";var owned:Array=[]
	for key:String in city.harmony_journey.get("receipts",{}):
		if key.begins_with(prefix) and int(city.harmony_journey.receipts[key])>0:owned.append(key)
	owned.sort();return str(owned[0]) if not owned.is_empty() else prefix+"functional_city"
