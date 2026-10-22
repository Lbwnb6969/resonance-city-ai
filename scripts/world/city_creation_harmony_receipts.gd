extends RefCounted
## Persistent monotonic receipts prevent undo, reload and role changes farming XP.
const Journey=preload("res://scripts/world/city_creation_harmony_journey.gd")
static func counters(city:RefCounted)->Dictionary:
	var result:Dictionary={"tea":int(city.life_progress.tea_parties)}
	for house:Dictionary in city.houses:result["house/"+str(house.id)]=1
	for id:String in city.bakery_supply:result["bread/"+id]=int(city.bakery_supply[id].produced)
	for id:String in city.workshop_supply:result["craft/"+id]=int(city.workshop_supply[id].delivered)
	for id:String in city.wish_rewards:
		for kind:String in city.wish_rewards[id]:result["wish/"+id+"/"+kind]=1
	for scope:String in city.synergy_buffs().chord_scopes:
		for chord:String in city.synergy_buffs().chord_scopes[scope].chords:result["chord/"+chord+"/"+scope]=1
	return result
static func initialize(city:RefCounted)->void:
	if not city.harmony_journey.is_empty():return
	city.harmony_journey=Journey.default_state();city.harmony_journey.receipts=counters(city)
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
		var xp:int={"tea":8,"house":2,"bread":2,"craft":10,"wish":24,"chord":30}[kind]*delta
		earned+=xp;events[kind]=int(events.get(kind,0))+delta
	var repeat_count:int=Journey.choices_made(journey)-journey.traditions.size()
	var exact:float=earned*(1.+minf(.5,repeat_count*.02))+float(journey.get("xp_remainder",0.))
	journey.xp_remainder=exact-floor(exact)
	var result:=Journey.add_harmony_xp(journey,int(exact),74001,city.era_unlocks)
	result.earned=int(exact);result.events=events
	if earned>0:city.dirty=true;city.life_progress_dirty=true
	return result
