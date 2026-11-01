extends RefCounted
## Persistent monotonic receipts prevent undo, reload and role changes farming XP.
const Journey=preload("res://scripts/world/city_creation_harmony_journey.gd")
const Spatial=preload("res://scripts/world/city_creation_functional_benefits.gd")
const Counters=preload("res://scripts/world/city_creation_receipt_counters.gd")
static func counters(city:RefCounted)->Dictionary:
	return Counters.current(city)
static func initialize(city:RefCounted)->void:
	if not city.harmony_journey.is_empty():
		if not city.harmony_journey.receipts.has("school_receipts_baseline"):
			for id:String in city.cafe_progress:city.harmony_journey.receipts["tea_house/"+id]=int(city.cafe_progress[id].get("groups",0))
			city.harmony_journey.receipts["school_receipts_baseline"]=1
		return
	city.harmony_journey=Journey.default_state();city.harmony_journey.receipts=counters(city);city.harmony_journey.receipts["school_receipts_baseline"]=1
	city.dirty=true;city.life_progress_dirty=true
static func collect(city:RefCounted)->Dictionary:
	var pending:=take_events(city)
	var result:=Spatial.award_xp(city,pending.amount)
	result.events=pending.events
	return result
static func take_events(city:RefCounted)->Dictionary:
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
	if earned>0:city.dirty=true;city.life_progress_dirty=true
	return {"amount":earned*(1.+minf(.5,repeat_count*.02))*Journey.Rarity.xp_multiplier(journey),"events":events}
