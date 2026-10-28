extends RefCounted
## Rare crowns derive from chosen cards or actual second-tier poem recipients.
const Families=preload("res://scripts/world/city_creation_tradition_synergy.gd")
const Streets=preload("res://scripts/world/city_creation_street_wonder_plan.gd")
const POEMS:={
	"vignette_river_bend_choir":"riverbank","vignette_double_arch_song":"riverbank","vignette_lily_hearth":"riverbank",
	"vignette_highland_terrace":"highland","vignette_canopy_twins":"highland",
	"vignette_courtyard_fountain":"courtyard","vignette_florentine_arcades":"courtyard","vignette_octagonal_salon":"courtyard",
	"vignette_olive_grove_craft":"artisan","vignette_golden_promenade":"artisan","vignette_glasshouse_afternoon":"artisan","vignette_tram_watchmaker":"artisan"}
const TITLES:={"riverbank":"海神竖琴灯塔","highland":"天顶浑天仪歌咏台","courtyard":"悬浮巴比伦交响花苑","artisan":"永动黄金天文大钟楼"}
static func progress_key(city:RefCounted)->int:
	return hash([city.harmony_journey.get("rarity_ranks",{}),city.harmony_journey.get("vignette_blessings",{}),city.harmony_journey.get("vignette_echoes",{})])
static func unlocked(city:RefCounted)->Dictionary:
	return unlocked_journey(city.harmony_journey)
static func unlocked_journey(journey:Dictionary)->Dictionary:
	var result:Dictionary={}
	for card:String in journey.get("rarity_ranks",{}):
		if int(journey.rarity_ranks[card])==3 and card in journey.get("traditions",[]):result[Families.family_of(card)]=true
	for id:String in journey.get("vignette_echoes",{}):
		for poem:String in journey.vignette_echoes[id]:
			if int(journey.vignette_echoes[id][poem])>=2 and poem in journey.get("vignette_blessings",{}).get(id,[]) and int(journey.get("completed_vignettes",{}).get(poem,0))>=2:result[POEMS[poem]]=true
	return result
static func derive(city:RefCounted)->Dictionary:
	var key:=[city.revision,city._wish_epoch,progress_key(city),city.creative_settings.get("presentation",{})]
	var cache:Dictionary=city.get_meta("legendary_wonder_plan",{})
	if cache.get("key",[])==key:return cache
	var result:Dictionary={"key":key,"monuments":[],"crowns":[],"unlocked":unlocked(city)}
	var occupied:Array=[];var used_hosts:Array=[];var represented:Array=[]
	for house:Dictionary in city.houses:
		var poems:Array=city.harmony_journey.get("vignette_blessings",{}).get(str(house.id),[])
		if poems.is_empty():continue
		var groups:Dictionary={}
		for poem:String in poems:
			if poem in represented:continue
			var family:String=POEMS[poem]
			if not groups.has(family):groups[family]=[]
			groups[family].append(poem)
		if groups.is_empty():continue
		var socket:=Streets.memorial_socket(city,house,occupied)
		if socket.is_empty():continue
		occupied.append(socket.at)
		for values:Array in groups.values():represented.append_array(values)
		result.monuments.append({"house_id":str(house.id),"at":socket.at,"y":socket.y,"yaw":socket.yaw,"groups":groups})
		# One tribute per poem across its recipients keeps large neighborhoods light.
		if result.monuments.size()>=12:break
	if city.creative_settings.get("creation_policy","legacy")=="free" and not city.creative_settings.presentation.legacy_crowns:
		city.set_meta("legendary_wonder_plan",result);return result
	for family:String in Families.FAMILIES:
		if not result.unlocked.has(family):continue
		var best:Dictionary={};var score:=-INF
		for house:Dictionary in city.houses:
			if house.has("signature") or str(house.id) in used_hosts:continue
			var candidate:=_score(city,house,family)
			if candidate>score:best=house;score=candidate
		if best.is_empty():continue
		used_hosts.append(str(best.id));result.crowns.append({"family":family,"house_id":str(best.id),"title":TITLES[family],"yaw":float(best.get("yaw",0.))})
	city.set_meta("legendary_wonder_plan",result);return result
static func _score(city:RefCounted,house:Dictionary,family:String)->float:
	var score:=0.
	for poem:String in city.harmony_journey.get("vignette_blessings",{}).get(str(house.id),[]):
		if POEMS[poem]==family:score+=10.
	match family:
		"riverbank":score+=6. if city.water_clearance(Vector2(house.origin[0],house.origin[1]))<=6.5 else 0.
		"highland":score+=float(house.get("base_y",0.))+house.cells.size()*.2
		"courtyard":score+=5. if house.role=="garden_cafe" else 0.
		"artisan":score+=6. if house.role=="clockmaker" else 3. if house.role in ["workshop","atelier"] else 0.
	return score
