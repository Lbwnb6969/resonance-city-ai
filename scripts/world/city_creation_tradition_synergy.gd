extends RefCounted
## Families are a view of already-owned leaves, never another progression ledger.
const FAMILIES:={
	"riverbank":{"name":"水岸吟游","icon":"≈","color":"4a7c89","members":["warm_hearth_ballad","lantern_bridge_echo","hydraulic_guild","lasting_resonance"],"echo":"晴川回响 · 临水制作与领奏","crown":"沧浪交响 · 水畔出炉茶聚凝聚共鸣"},
	"highland":{"name":"台地石琴","icon":"⛰","color":"8c682f","members":["stone_step_carillon","hearth_neighbors","tram_promenade","cloud_gallery"],"echo":"千阶回响 · 台地百工与琥珀触光","crown":"叠翠天籁 · 石琴八度双音与生活共鸣"},
	"courtyard":{"name":"围院重奏","icon":"⛲","color":"527961","members":["courtyard_canon_spring","twilight_tea_pavilion","garden_salons","arcade_market","polyphonic_academy"],"echo":"庭院回响 · 茶席与悠长余韵","crown":"四季弦歌 · 茶聚共鸣与沙龙金窗"},
	"artisan":{"name":"百工交响","icon":"♪","color":"9e536d","members":["sylvan_luthier_guild","woodland_workbench","illuminated_atelier","brass_orchard","craft_federation"],"echo":"百工回响 · 共创与铜铃声浪","crown":"万家灯火 · 送装凝聚共鸣与伙伴欢跳"}}
static func family_of(card:String)->String:
	for id:String in FAMILIES:
		if card in FAMILIES[id].members:return id
	return ""
static func summary(traditions:Array)->Dictionary:
	var counts:Dictionary={};var tiers:Dictionary={};var capstones:Array[String]=[];var seen:Dictionary={}
	for id:String in FAMILIES:counts[id]=0
	for value:Variant in traditions:
		var card:=str(value);var family:=family_of(card)
		if family.is_empty() or seen.has(card):continue
		seen[card]=true;counts[family]+=1
	for id:String in FAMILIES:
		tiers[id]=2 if counts[id]>=3 else 1 if counts[id]>=2 else 0
		if tiers[id]==2:capstones.append(id)
	return {"counts":counts,"tiers":tiers,"capstones":capstones}
static func owned(city:RefCounted)->Array:
	var result:Array=city.harmony_journey.get("traditions",[]).duplicate()
	for card:String in city.era_modifiers:
		if card not in result:result.append(card)
	return result
static func for_city(city:RefCounted)->Dictionary:
	var cards:=owned(city);var key:=hash(cards);var cache:Dictionary=city.get_meta("tradition_family_view",{})
	if cache.get("key",null)!=key:cache={"key":key,"view":summary(cards)};city.set_meta("tradition_family_view",cache)
	return cache.view
static func tier(city:RefCounted,family:String)->int:return int(for_city(city).tiers[family])
static func card_badge(card:String,traditions:Array)->String:
	var id:=family_of(card)
	if id.is_empty():return ""
	var count:int=summary(traditions).counts[id]
	return "%s %s · %d/3%s"%[FAMILIES[id].icon,FAMILIES[id].name,mini(3,count)," ★" if count>=3 else ""]
static func near_water(city:RefCounted,house:Dictionary)->bool:
	return city.water_clearance(Vector2(house.origin[0],house.origin[1]))<preload("res://scripts/world/city_creation_tradition_rules.gd").water_radius(city)
static func production_multiplier(city:RefCounted,house:Dictionary)->float:
	var tiers:Dictionary=for_city(city).tiers;var result:=1.
	if tiers.riverbank>0 and near_water(city,house):result*=1.12 if tiers.riverbank==2 else 1.08
	if tiers.highland>0 and float(house.get("base_y",0.))>=.8:result*=1.2 if tiers.highland==2 else 1.1
	if tiers.artisan>0 and house.role in ["workshop","atelier","clockmaker"]:result*=1.18 if tiers.artisan==2 else 1.1
	return result
static func walking_multiplier(city:RefCounted,house:Dictionary)->float:
	return 1.1 if tier(city,"highland")>0 and float(house.get("base_y",0.))>=.8 else 1.
static func delivery_multiplier(city:RefCounted,id:String)->float:
	var index:int=city._house_index(id)
	if index<0:return 1.
	return (1.1 if tier(city,"artisan")>0 else 1.)*(1.1 if tier(city,"highland")>0 and float(city.houses[index].get("base_y",0.))>=.8 else 1.)
static func afterglow_multiplier(city:RefCounted)->float:
	return 1.3 if tier(city,"courtyard")==2 else 1.15 if tier(city,"courtyard")==1 else 1.
static func tea_multiplier(city:RefCounted)->float:return .9 if tier(city,"courtyard")>0 else 1.
static func lead_boost_db(city:RefCounted,near:bool)->float:
	return (.8 if tier(city,"riverbank")==2 else .4 if tier(city,"riverbank")==1 else 0.) if near else 0.
static func salon_members(city:RefCounted)->Array[String]:
	var result:Array[String]=[]
	if tier(city,"courtyard")<2:return result
	for court:Dictionary in city.courtyard_plans():
		for id:String in court.members:
			if id not in result:result.append(id)
	for house:Dictionary in city.houses:
		if not preload("res://scripts/world/city_creation_arcade_plan.gd").for_house(city,house).is_empty() and str(house.id) not in result:result.append(str(house.id))
	return result
static func record_batch(city:RefCounted,id:String,kind:String)->void:
	if city.harmony_journey.is_empty():return
	var key:="batch_count/"+id
	if kind=="bread":city.harmony_journey.receipts[key]=int(city.harmony_journey.receipts.get(key,0))+1
static func record_delivery(city:RefCounted,shop:String,target:String)->void:
	if city.harmony_journey.is_empty():return
	var key:="delivery_count/"+shop;var receipts:Dictionary=city.harmony_journey.receipts
	receipts[key]=int(receipts.get(key,0))+1
	if tier(city,"artisan")<2:return
	var events:Array=city.get_meta("family_delivery_events",[])
	events.append({"shop":shop,"target":target,"count":receipts[key]})
	if events.size()>64:events.pop_front()
	city.set_meta("family_delivery_events",events)
static func bonus_xp(city:RefCounted,key:String,delta:int)->int:
	var kind:=key.get_slice("/",0)
	if kind not in ["bake","tea_house","delivery"]:return 0
	var id:=key.get_slice("/",1);var index:int=city._house_index(id)
	if index<0:return 0
	var house:Dictionary=city.houses[index];var extra:=0
	if kind in ["bake","tea_house"] and tier(city,"riverbank")==2 and near_water(city,house):extra+=3
	if kind=="tea_house" and tier(city,"courtyard")==2:extra+=4
	if kind=="delivery" and tier(city,"artisan")==2:extra+=5
	if tier(city,"highland")==2 and float(house.get("base_y",0.))>=.8:extra+=2
	return extra*delta
