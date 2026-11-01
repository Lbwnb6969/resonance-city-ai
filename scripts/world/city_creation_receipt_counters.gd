extends RefCounted
## Read-only real counters shared by the old ledger and future epoch baselines.
const Spatial=preload("res://scripts/world/city_creation_functional_benefits.gd")
const ALIASES:={"batch_count":"bake","delivery_count":"delivery","debut":"wish","civic_received":"civic"}
const KINDS:=["tea","house","bread","craft","wish","chord","tea_house","bake","delivery","civic"]
static func current(city:RefCounted)->Dictionary:
	var result:Dictionary={"tea":int(city.life_progress.tea_parties)}
	for house:Dictionary in city.houses:result["house/"+str(house.id)]=1
	for id:String in city.bakery_supply:result["bread/"+id]=int(city.bakery_supply[id].produced)
	for id:String in city.workshop_supply:result["craft/"+id]=int(city.workshop_supply[id].delivered)
	for id:String in city.wish_rewards:
		for kind:String in city.wish_rewards[id]:result["wish/"+id+"/"+kind]=1
	if city.CreationPolicy.is_free(city):
		for chord:String in city.synergy_buffs().active_chords:result[Spatial.chord_receipt_key(city,chord)]=1
	else:
		for scope:String in city.synergy_buffs().chord_scopes:
			for chord:String in city.synergy_buffs().chord_scopes[scope].chords:result["chord/"+chord+"/"+scope]=1
	for id:String in city.cafe_progress:result["tea_house/"+id]=int(city.cafe_progress[id].get("groups",0))
	for key:String in city.harmony_journey.get("receipts",{}):
		if key.begins_with("batch_count/"):result["bake/"+key.get_slice("/",1)]=int(city.harmony_journey.receipts[key])
		elif key.begins_with("delivery_count/"):result["delivery/"+key.get_slice("/",1)]=int(city.harmony_journey.receipts[key])
		elif key.begins_with("debut/"):result["wish/"+key.trim_prefix("debut/")]=1
		elif key.begins_with("civic_received/"):result["civic/"+key.trim_prefix("civic_received/")]=1
	return result
static func historical(receipts:Dictionary)->Dictionary:
	var result:Dictionary={}
	for key:String in receipts:
		var target:=key;var value:int=int(receipts[key]);var kind:=key.get_slice("/",0)
		if ALIASES.has(kind) and key.contains("/"):
			var identity:=key.get_slice("/",1) if kind in ["batch_count","delivery_count"] else key.trim_prefix(kind+"/")
			target=str(ALIASES[kind])+"/"+identity
			if kind in ["debut","civic_received"]:value=1
		if not recognized(target):continue
		result[target]=maxi(int(result.get(target,0)),value)
	return result
static func baseline(city:RefCounted)->Dictionary:
	var result:=historical(city.harmony_journey.get("receipts",{}))
	var counts:=current(city)
	for key:String in counts:
		result[key]=maxi(int(result.get(key,0)),int(counts[key]))
	return result
static func recognized(key:String)->bool:
	if key.is_empty() or key.length()>256:return false
	for character:String in key:
		if character.unicode_at(0)<32:return false
	return key=="tea" or (key.get_slice("/",0) in KINDS and key.contains("/") and not key.trim_prefix(key.get_slice("/",0)+"/").is_empty())
