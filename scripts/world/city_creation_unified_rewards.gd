extends RefCounted
## New eras unlock the catalogue; already-earned old charter rights stay claimable.
const Scores=preload("res://scripts/world/city_creation_score_modifiers.gd")
static func initialize(city:RefCounted)->void:
 if city.harmony_journey.is_empty():return
 var receipts:Dictionary=city.harmony_journey.receipts
 if receipts.has("unified_rewards/v1"):return
 for era:String in Scores.ERAS:
  if era in city.era_unlocks and Scores.selected(city,era).is_empty():receipts["legacy_charter/"+era]=1
 receipts["unified_rewards/v1"]=1;city.dirty=true;city.life_progress_dirty=true
static func pending(city:RefCounted)->Array[String]:
 initialize(city);var result:Array[String]=[]
 for era:String in Scores.ERAS:
  if int(city.harmony_journey.get("receipts",{}).get("legacy_charter/"+era,0))>0 and era in city.era_unlocks and Scores.selected(city,era).is_empty():result.append(era)
 return result
static func cards(era:String)->Array:
 var index:=Scores.ERAS.find(era)
 return Scores.PAIRS[index].duplicate() if index>=0 else []
static func choose_legacy(city:RefCounted,era:String,id:String)->Dictionary:
 if era not in pending(city) or id not in cards(era):return city._fail("这份旧城传承已收录，其他手札随共鸣研习。")
 return city.choose_era_modifier(id)
