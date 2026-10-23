extends RefCounted
const Catalog=preload("res://scripts/world/city_creation_vignette_catalog.gd")
static func integer(value:Variant)->bool:
	return (value is int or value is float) and is_finite(float(value)) and float(value)==floor(float(value)) and float(value)>=0. and float(value)<=9007199254740991.
static func ids(values:Variant,prefix:String)->bool:
	if not values is Array:return false
	var seen:Array=[];var expression:=RegEx.new();expression.compile("^"+prefix+"[1-9][0-9]*$")
	for id:Variant in values:
		if not id is String or expression.search(id)==null or id in seen:return false
		seen.append(id)
	return true
static func issued_valid(journey:Dictionary,house_max:int,plant_max:int)->bool:
	var quest:Dictionary=journey.get("active_vignette",{})
	if int(quest.get("house_floor",0))>house_max or int(quest.get("plant_floor",0))>plant_max:return false
	for id:String in quest.get("houses_before",[])+journey.get("vignette_blessings",{}).keys()+journey.get("vignette_echoes",{}).keys():
		if int(id.substr(1))>house_max:return false
	for id:String in quest.get("plants_before",[]):
		if int(id.substr(1))>plant_max:return false
	return true
static func valid(journey:Dictionary,unlocks:Array)->bool:
	var known:Array=[]
	for row:Dictionary in Catalog.TEMPLATES:known.append(row.id)
	if not integer(journey.get("vignette_serial",0)):return false
	var serial:=int(journey.get("vignette_serial",0));var completed:Variant=journey.get("completed_vignettes",{})
	if not completed is Dictionary:return false
	var count:=0
	var eras:Dictionary={}
	for row:Dictionary in Catalog.TEMPLATES:eras[str(row.id)]=str(row.get("era","pastoral"))
	for id:Variant in completed:
		if id not in known or eras[id] not in unlocks or not integer(completed[id]) or int(completed[id])<1:return false
		count+=int(completed[id])
	if count>serial:return false
	var quest:Variant=journey.get("active_vignette",{})
	if not quest is Dictionary:return false
	if not quest.is_empty():
		for field:String in ["house_floor","plant_floor"]:
			if not integer(quest.get(field,0)):return false
		if quest.get("id") not in known or eras[quest.id] not in unlocks or not integer(quest.get("serial")) or int(quest.serial)!=serial or count>=serial:return false
		var anchor:Variant=quest.get("anchor")
		if not anchor is Array or anchor.size()!=2:return false
		for coordinate:Variant in anchor:
			if not (coordinate is int or coordinate is float) or not is_finite(float(coordinate)) or absf(float(coordinate))>35.:return false
		if not ids(quest.get("houses_before"),"h") or not ids(quest.get("plants_before"),"p") or not quest.get("courts_before") is Array:return false
		if quest.has("tier") and (not integer(quest.tier) or int(quest.tier) not in [1,2] or (int(quest.tier)==2 and int(completed.get(quest.id,0))<1)):return false
		var features:Variant=quest.get("features_before",[])
		if not features is Array:return false
		var feature_ids:Array=[]
		for key:Variant in features:
			if not key is String or key.is_empty() or key.length()>256 or key in feature_ids:return false
			feature_ids.append(key)
		for id:Variant in quest.courts_before:
			if not id is String or not id.begins_with("court_") or id.length()!=22:return false
	var blessings:Variant=journey.get("vignette_blessings",{})
	if not blessings is Dictionary or not ids(blessings.keys(),"h"):return false
	for values:Variant in blessings.values():
		if not values is Array or values.is_empty() or values.size()>Catalog.TEMPLATES.size():return false
		var seen:Array=[]
		for id:Variant in values:
			if id not in known or not completed.has(id) or id in seen:return false
			seen.append(id)
	var echoes:Variant=journey.get("vignette_echoes",{})
	if not echoes is Dictionary or not ids(echoes.keys(),"h"):return false
	for house:String in echoes:
		if not echoes[house] is Dictionary or not blessings.has(house):return false
		for id:Variant in echoes[house]:
			if id not in blessings[house] or not integer(echoes[house][id]) or int(echoes[house][id]) not in [1,2] or int(completed.get(id,0))<int(echoes[house][id]):return false
	var celebrated:Variant=journey.get("celebrated_eras",[])
	if not celebrated is Array:return false
	var seen:Array=[]
	for era:Variant in celebrated:
		if not era is String or era not in unlocks or era in seen:return false
		seen.append(era)
	return true
