extends RefCounted
## Validate optional Schema 19 data before any part of the live city is replaced.
static func integer(value:Variant)->bool:
	return (value is int or value is float) and is_finite(float(value)) and float(value)==floor(float(value)) and float(value)>=0. and float(value)<=9007199254740991.
static func valid(value:Variant,cards:Dictionary,unlocks:Array)->bool:
	if not value is Dictionary:return false
	for field:String in ["harmony_xp","harmony_level"]:
		if not integer(value.get(field)):return false
	var level:=int(value.harmony_level)
	var gift:Variant=value.get("heritage_credit",0)
	if not integer(gift) or int(gift)>1:return false
	if level<1 or int(value.harmony_xp)>=100+(level-1)*65:return false
	if not value.get("traditions") is Array or not value.get("ranks") is Dictionary or not value.get("pending_draft") is Array or not value.get("receipts") is Dictionary:return false
	var seen:Array[String]=[];var count:=0
	for id:Variant in value.traditions:
		if not id is String or not cards.has(id) or id in seen:return false
		if cards[id].has("era") and cards[id].era not in unlocks:return false
		if not integer(value.ranks.get(id)) or int(value.ranks[id])<1:return false
		count+=int(value.ranks[id]);seen.append(id)
	if value.ranks.size()!=seen.size() or count>level-1+int(gift):return false
	var pending:Array=value.pending_draft
	if pending.size()!=(3 if count<level-1+int(gift) else 0):return false
	seen.clear()
	for id:Variant in pending:
		if not id is String or not cards.has(id) or id in seen:return false
		if cards[id].has("era") and cards[id].era not in unlocks:return false
		seen.append(id)
	for key:Variant in value.receipts:
		if not key is String or key.is_empty() or not integer(value.receipts[key]):return false
	if value.has("xp_remainder") and (not value.xp_remainder is float and not value.xp_remainder is int):return false
	if not is_finite(float(value.get("xp_remainder",0.))) or float(value.get("xp_remainder",0.))<0. or float(value.get("xp_remainder",0.))>=1.:return false
	return preload("res://scripts/world/city_creation_draft_rarity.gd").valid(value,cards) and preload("res://scripts/world/city_creation_vignette_validation.gd").valid(value,unlocks) and preload("res://scripts/world/city_creation_growth_cutoff.gd").valid(value)
