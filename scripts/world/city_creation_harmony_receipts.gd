extends RefCounted
## Persistent monotonic receipts prevent undo, reload and role changes farming XP.
const Journey=preload("res://scripts/world/city_creation_harmony_journey.gd")
const Spatial=preload("res://scripts/world/city_creation_functional_benefits.gd")
static func counters(city:RefCounted)->Dictionary:
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
static func initialize(city:RefCounted)->void:
	if not city.harmony_journey.is_empty():
		if not city.harmony_journey.receipts.has("school_receipts_baseline"):
			for id:String in city.cafe_progress:city.harmony_journey.receipts["tea_house/"+id]=int(city.cafe_progress[id].get("groups",0))
			city.harmony_journey.receipts["school_receipts_baseline"]=1
		return
	city.harmony_journey=Journey.default_state();city.harmony_journey.receipts=counters(city);city.harmony_journey.receipts["school_receipts_baseline"]=1
	city.dirty=true;city.life_progress_dirty=true
static func collect(city:RefCounted)->Dictionary:
	initialize(city)
	var journey:Dictionary=city.harmony_journey;var earned:=0;var events:Dictionary={}
	var current_counts:=counters(city)
	for key:String in current_counts:
		var current:int=current_counts[key]
		var delta:=maxi(0,current-int(journey.receipts.get(key,0)))
		journey.receipts[key]=maxi(current,int(journey.receipts.get(key,0)))
		if delta==0:continue
		var kind:=key.get_slice("/",0)
		var xp:int=int({"tea":8,"house":2,"bread":2,"craft":10,"wish":24,"chord":30,"civic":30}.get(kind,0))*delta+preload("res://scripts/world/city_creation_tradition_synergy.gd").bonus_xp(city,key,delta)
		earned+=xp;events[kind]=int(events.get(kind,0))+delta
	var repeat_count:int=Journey.choices_made(journey)-journey.traditions.size()
	var result:=Spatial.award_xp(city,earned*(1.+minf(.5,repeat_count*.02))*Journey.Rarity.xp_multiplier(journey))
	result.events=events
	if earned>0:city.dirty=true;city.life_progress_dirty=true
	return result
