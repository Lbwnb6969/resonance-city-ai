extends RefCounted
## One valuation for real receipt deltas; callers own their separate ledgers.
const Synergy=preload("res://scripts/world/city_creation_tradition_synergy.gd")
const Journey=preload("res://scripts/world/city_creation_harmony_journey.gd")
const BASE:={"tea":8,"house":2,"bread":2,"craft":10,"wish":24,"chord":30,"civic":30}
static func event_xp(city:RefCounted,key:String,delta:int)->int:
	return int(BASE.get(key.get_slice("/",0),0))*delta+Synergy.bonus_xp(city,key,delta)
static func scale(journey:Dictionary,amount:float)->float:
	var repeats:int=Journey.choices_made(journey)-journey.traditions.size()
	return amount*(1.+minf(.5,repeats*.02))*Journey.Rarity.xp_multiplier(journey)
