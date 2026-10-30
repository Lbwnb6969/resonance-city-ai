class_name CityCreationHarmonyJourney
extends RefCounted
## Earned life progress survives undo; choosing a tradition is an authored transaction.
const Rarity=preload("res://scripts/world/city_creation_draft_rarity.gd")
const Scores=preload("res://scripts/world/city_creation_score_modifiers.gd")
const BASE_XP_THRESHOLD:=100
const XP_STEP_GROWTH:=65
const TRADITION_CARDS:={
	"warm_hearth_ballad":{"name":"暖炉晨曲","text":"活水圈延至6米；首炉炊烟化作金色音符，轻轻唤醒水面。"},
	"sylvan_luthier_guild":{"name":"林间琴社","text":"两棵乔木便成琴社，良木初成即刻制出木饰，让匠人出发。"},
	"twilight_tea_pavilion":{"name":"夕照茶亭","text":"茶聚余韵更长，归家的客人身旁飘起细小金色音符。"},
	"stone_step_carillon":{"name":"千阶石琴","text":"0.65米缓坡石阶也成五声琴键，台地住户轻快穿行。"},
	"lantern_bridge_echo":{"name":"提灯桥影","text":"活水圈延至6米；夕夜桥畔散开暖金波纹，过桥唤起泛音。"},
	"courtyard_canon_spring":{"name":"围院清泉","text":"清泉随80拍乐律双重跃动，围院工坊也随轮唱轻快开工。"}
}
const VIGNETTE_TEMPLATES=preload("res://scripts/world/city_creation_vignette_catalog.gd").TEMPLATES
static func default_state()->Dictionary:
	return {"harmony_xp":0,"harmony_level":1,"traditions":[],"ranks":{},"pending_draft":[],"receipts":{}}
static func xp_for_next_level(level:int)->int:
	return BASE_XP_THRESHOLD+maxi(0,level-1)*XP_STEP_GROWTH
static func cards()->Dictionary:
	var result:=Scores.CHOICES.duplicate(true);result.merge(TRADITION_CARDS);return result
static func choices_made(journey:Dictionary)->int:
	var result:=0
	for value:Variant in journey.get("ranks",{}).values():result+=int(value)
	return result
static func credits(journey:Dictionary)->int:
	return maxi(0,int(journey.get("harmony_level",1))-1+int(journey.get("heritage_credit",0))-choices_made(journey))
static func refresh_draft(journey:Dictionary,unlocks:Array=["pastoral"])->void:
	if credits(journey)<=0:journey.pending_draft=[]
	elif Array(journey.get("pending_draft",[])).is_empty():journey.pending_draft=roll_inspiration_draft(journey,choices_made(journey)+1,74001,unlocks)
	if not journey.has("growth_cutoff"):Rarity.ensure(journey)
static func add_harmony_xp(journey:Dictionary,amount:int,rng_seed:int=74001,unlocks:Array=["pastoral"])->Dictionary:
	if journey.has("growth_cutoff"):return {"leveled_up":false,"level":journey.harmony_level,"journey":journey,"seed":rng_seed}
	var result:=_advance_xp(journey,amount,rng_seed)
	refresh_draft(journey,unlocks)
	return result
static func _advance_xp(journey:Dictionary,amount:int,rng_seed:int=74001)->Dictionary:
	var level:=int(journey.harmony_level)
	journey.harmony_xp=int(journey.harmony_xp)+maxi(0,amount)
	while int(journey.harmony_xp)>=xp_for_next_level(int(journey.harmony_level)):
		journey.harmony_xp=int(journey.harmony_xp)-xp_for_next_level(int(journey.harmony_level));journey.harmony_level=int(journey.harmony_level)+1
	return {"leveled_up":int(journey.harmony_level)>level,"level":journey.harmony_level,"journey":journey,"seed":rng_seed}
static func roll_inspiration_draft(journey:Dictionary,level:int,rng_seed:int,unlocks:Array=["pastoral"])->Array[String]:
	var fresh:Array[String]=[];var owned:Array[String]=[];var pool:=cards()
	for id:String in pool:
		if pool[id].has("era") and pool[id].era not in unlocks:continue
		if id in journey.get("traditions",[]):owned.append(id)
		else:fresh.append(id)
	var rng:=RandomNumberGenerator.new();rng.seed=rng_seed+level*19937
	var picked:Array[String]=[]
	while picked.size()<3:
		var source:Array[String]=fresh if not fresh.is_empty() else owned
		var index:=Rarity.pick_index(source,journey,rng);picked.append(source[index]);source.remove_at(index)
	return picked
static func choose_inspiration(journey:Dictionary,card_id:String,unlocks:Array=["pastoral"])->bool:
	if credits(journey)<=0 or card_id not in journey.get("pending_draft",[]):return false
	Rarity.ensure(journey)
	if card_id not in journey.traditions:journey.traditions.append(card_id)
	journey.ranks[card_id]=int(journey.ranks.get(card_id,0))+1;Rarity.chosen(journey,card_id);journey.pending_draft=[];refresh_draft(journey,unlocks);return true
static func choose(city:RefCounted,id:String)->Dictionary:
	if city.harmony_journey.is_empty():return city._fail("还没有待选手札")
	var before:Dictionary=city.snapshot()
	if not choose_inspiration(city.harmony_journey,id,city.era_unlocks):return city._fail("这张手札不在本次邀约中")
	if Scores.CHOICES.has(id) and id not in city.era_modifiers:city.era_modifiers.append(id)
	city._commit(before,"研习"+str(cards()[id].name))
	return {"ok":true,"message":str(cards()[id].name)+"已融入这座河湾"}
static func validate(data:Variant,unlocks:Array=["pastoral"])->bool:
	return preload("res://scripts/world/city_creation_harmony_validation.gd").valid(data,cards(),unlocks)
static func apply(city:RefCounted,data:Dictionary,history:bool)->void:
	var target:Dictionary=data.get("harmony_journey",{}).duplicate(true)
	if history and not city.harmony_journey.is_empty():
		var earned:Dictionary=city.harmony_journey.duplicate(true)
		var changed:bool=target.get("ranks",{})!=earned.get("ranks",{}) or target.get("traditions",[])!=earned.get("traditions",[])
		for field:String in ["traditions","ranks"]:earned[field]=target.get(field,[] if field=="traditions" else {}).duplicate(true)
		if changed or (not earned.has("growth_cutoff") and target.get("pending_draft",[]).size()==3):
			earned.pending_draft=target.get("pending_draft",[]).duplicate()
			for field:String in ["draft_rarities","draft_serial"]:
				if target.has(field):earned[field]=target[field]
				else:earned.erase(field)
		if changed:
			if target.has("rarity_ranks"):earned.rarity_ranks=target.rarity_ranks.duplicate()
			else:earned.erase("rarity_ranks")
		target=earned;refresh_draft(target,city.era_unlocks)
		if changed and target.has("growth_cutoff"):Rarity.restore_recorded_offer(target)
	if not target.is_empty():
		for field:String in ["harmony_xp","harmony_level"]:target[field]=int(target[field])
		if target.has("heritage_credit"):target.heritage_credit=int(target.heritage_credit)
		for field:String in ["ranks","receipts"]:
			for key:String in target[field]:target[field][key]=int(target[field][key])
		if target.has("draft_serial"):target.draft_serial=int(target.draft_serial)
		for field:String in ["draft_rarities","rarity_ranks"]:
			for id:String in target.get(field,{}):target[field][id]=int(target[field][id])
		if target.has("vignette_serial"):target.vignette_serial=int(target.vignette_serial)
		if not target.get("active_vignette",{}).is_empty():
			for field:String in ["serial","house_floor","plant_floor","tier"]:
				if target.active_vignette.has(field):target.active_vignette[field]=int(target.active_vignette[field])
		if target.has("growth_cutoff"):
			target.growth_cutoff.version=int(target.growth_cutoff.version)
			if not target.growth_cutoff.vignette.is_empty():target.growth_cutoff.vignette.serial=int(target.growth_cutoff.vignette.serial)
		for key:String in target.get("completed_vignettes",{}):target.completed_vignettes[key]=int(target.completed_vignettes[key])
	for row:Dictionary in target.get("vignette_echoes",{}).values():
		for id:String in row:row[id]=int(row[id])
	city.harmony_journey=target
