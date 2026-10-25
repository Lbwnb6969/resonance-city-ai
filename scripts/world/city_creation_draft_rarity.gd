extends RefCounted
## Saved offer metadata; monotonic receipt counters prevent reroll/undo farming.
const Family=preload("res://scripts/world/city_creation_tradition_synergy.gd")
const NAMES:={1:"白银凡品",2:"鎏金珍品",3:"虹彩传世"}
const COLORS:={1:"65796f",2:"946a28",3:"87588f"}
static func roll_card_rarity(affinity:int,roll:float,pity:int)->int:
	var chance:=minf(.38,.10+.08*affinity)
	return 3 if pity>=2 or roll<chance else 2 if roll<chance+.28 else 1
static func pick_index(pool:Array,journey:Dictionary,rng:RandomNumberGenerator)->int:
	var counts:Dictionary=Family.summary(journey.get("traditions",[])).counts
	var weights:Array[float]=[];var total:=0.
	for card:String in pool:
		var weight:=1.+.6*int(counts.get(Family.family_of(card),0));weights.append(weight);total+=weight
	var draw:=rng.randf()*total
	for i in range(weights.size()):
		draw-=weights[i]
		if draw<=0.:return i
	return weights.size()-1
static func ensure(journey:Dictionary)->void:
	var pending:Array=journey.get("pending_draft",[])
	if pending.is_empty():journey.erase("draft_rarities");journey.erase("draft_serial");return
	if journey.has("draft_rarities"):return
	var receipts:Dictionary=journey.receipts
	# One earned choice credit owns one invitation, even after choosing/undoing it.
	var slot:=1
	for rank:Variant in journey.ranks.values():slot+=int(rank)
	var slot_key:="draft_slot/"+str(slot)
	if not receipts.has(slot_key):
		receipts["draft_serial"]=int(receipts.get("draft_serial",0))+1
		receipts[slot_key]=receipts["draft_serial"]
	var serial:=int(receipts[slot_key]);journey.draft_serial=serial
	var version:=int(receipts.get("rerolls/"+str(serial),0))
	var prefix:="draft_offer/%d/%d/"%[serial,version]
	var cached:Array=[]
	for i in range(3):
		for key:String in receipts:
			if key.begins_with(prefix+str(i)+"/"):cached.append(key.get_slice("/",4));break
	if cached.size()==3:pending=cached;journey.pending_draft=cached
	else:
		for i in range(pending.size()):receipts[prefix+str(i)+"/"+str(pending[i])]=1
	var tier_prefix:="draft_tier/%d/%d/"%[serial,version]
	# Separate streams: card position must not determine its rarity.
	var rng:=RandomNumberGenerator.new();rng.seed=931859+serial*19937+version*839
	var counts:Dictionary=Family.summary(journey.traditions).counts
	var offered:Dictionary={};var prism:=false;var pity:=int(receipts.get("prismatic_drought",0))
	for i in range(pending.size()):
		var id:=str(pending[i]);var affinity:=int(counts.get(Family.family_of(id),0))
		var rolled:=roll_card_rarity(affinity,rng.randf(),pity if i==2 and not prism else 0)
		var tier:=int(receipts.get(tier_prefix+id,rolled));receipts[tier_prefix+id]=tier
		offered[id]=tier;prism=prism or tier==3
	if cached.is_empty():receipts["prismatic_drought"]=0 if prism else pity+1
	journey.draft_rarities=offered
static func tier(journey:Dictionary,id:String)->int:return int(journey.get("draft_rarities",{}).get(id,1))
static func chosen(journey:Dictionary,id:String)->void:
	ensure(journey)
	var ranks:Dictionary=journey.get("rarity_ranks",{})
	ranks[id]=maxi(int(ranks.get(id,1)),tier(journey,id));journey.rarity_ranks=ranks
	journey.erase("draft_rarities");journey.erase("draft_serial")
static func xp_multiplier(journey:Dictionary)->float:
	var highest:=1
	for value:Variant in journey.get("rarity_ranks",{}).values():highest=maxi(highest,int(value))
	return {1:1.,2:1.12,3:1.25}[highest]
static func rerolls_left(journey:Dictionary)->int:
	if journey.get("pending_draft",[]).is_empty():return 0
	var budget:=2 if not Family.summary(journey.get("traditions",[])).capstones.is_empty() else 1
	return maxi(0,budget-int(journey.get("receipts",{}).get("rerolls/"+str(int(journey.get("draft_serial",0))),0)))
static func reroll(city:RefCounted)->Dictionary:
	var journey:Dictionary=city.harmony_journey;ensure(journey)
	if rerolls_left(journey)<=0:return city._fail("这份邀约已翻阅完，选一页喜欢的手札吧。")
	var before:Dictionary=city.snapshot();var serial:=int(journey.draft_serial)
	var key:="rerolls/"+str(serial);journey.receipts[key]=int(journey.receipts.get(key,0))+1
	journey.receipts["draft_reroll_draws"]=int(journey.receipts.get("draft_reroll_draws",0))+1
	var spent:=int(journey.receipts[key])
	journey.pending_draft=city.HarmonyJourney.roll_inspiration_draft(journey,city.HarmonyJourney.choices_made(journey)+1,74001+serial*19937+spent*839,city.era_unlocks)
	journey.erase("draft_rarities");ensure(journey)
	city._commit(before,"翻阅新卷");return {"ok":true,"message":"换一卷灵感，保底与已用翻阅次数留存。"}
static func valid(value:Dictionary,cards:Dictionary)->bool:
	for key:String in value.receipts:
		if key.begins_with("draft_offer/"):
			var parts:=key.split("/")
			if parts.size()!=5 or not parts[1].is_valid_int() or not parts[2].is_valid_int() or parts[3] not in ["0","1","2"] or not cards.has(parts[4]) or int(value.receipts[key])!=1:return false
		if key.begins_with("draft_tier/"):
			var parts:=key.split("/")
			if parts.size()!=4 or not parts[1].is_valid_int() or not parts[2].is_valid_int() or not cards.has(parts[3]) or not _tier(value.receipts[key]):return false
	var ranks:Variant=value.get("rarity_ranks",{})
	if not ranks is Dictionary:return false
	for id:Variant in ranks:
		if id not in value.traditions or not cards.has(id) or not _tier(ranks[id]):return false
	if value.has("draft_serial") or value.has("draft_rarities"):
		if not value.has("draft_serial") or not value.has("draft_rarities") or value.pending_draft.is_empty():return false
		var serial:Variant=value.draft_serial
		if not (serial is int or serial is float) or not is_finite(float(serial)) or float(serial)!=floorf(float(serial)) or serial<1 or serial>int(value.receipts.get("draft_serial",0)):return false
		if not value.draft_rarities is Dictionary or value.draft_rarities.size()!=value.pending_draft.size():return false
		for id:Variant in value.draft_rarities:
			if id not in value.pending_draft or not _tier(value.draft_rarities[id]):return false
	return true
static func _tier(value:Variant)->bool:
	return (value is int or value is float) and is_finite(float(value)) and float(value)==floorf(float(value)) and int(value) in [1,2,3]
