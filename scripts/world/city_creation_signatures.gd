extends RefCounted
## Signatures are unique real houses, retaining normal identity, roads and jobs.
const IDS := ["bell_keep","watermill","music_academy","botanical_palace","clockwork_depot","floating_amphitheater"]
const NAMES := {"bell_keep":"古钟瞭望塔","watermill":"河湾大水车磨坊","music_academy":"文艺复兴圆顶音乐院","botanical_palace":"皇家植物玻璃宫","clockwork_depot":"中央钟表电车总站","floating_amphitheater":"河湾水上交响剧场"}
const ROLES := {"bell_keep":"venue","watermill":"bakery","music_academy":"venue","botanical_palace":"garden_cafe","clockwork_depot":"clockmaker","floating_amphitheater":"symphony_hall"}
const GOALS := {"bell_keep":"10座普通房屋与1座跨河桥 · 步速+15%、聚焦+3米","watermill":"累计出炉24份面包 · 每炉+1份、烘焙缩时20%","music_academy":"文艺复兴开启，两个街坊完成器乐问答 · 38米覆盖与全城接力","botanical_palace":"8桌真实茶聚与120株玩家植物 · 余韵180秒、周围双倍野花","clockwork_depot":"第三时代与30米宽街/轨街 · 接轨发车，车速+20%","floating_amphitheater":"第四时代与三章河湾手记 · 水岸四时代交响盛典"}
const LOCAL_EFFECTS:={"bell_keep":"16米回响圈：工坊送装与返程提速25%。","watermill":"同岸18米工坊带：生产提速35%；磨坊每出炉3炉，从库存赠粮给最多2户缺粮邻里。","music_academy":"同街坊学院区：制琴坊与书院每批产量翻倍，完整问答的余韵奖励翻倍。","botanical_palace":"14米翡翠花海圈：双倍野花、自然景观条件满足，品茶效率+40%。","clockwork_depot":"沿连通轨街两侧6米：跨区消费、赴演与送装可享轨交直达；总站线路单车运力6→24人。","floating_amphitheater":"盛典落幕后：全城余韵中的房屋立即检定晋升资格，金色声浪与窗光延续12秒。"}
static func available(city:RefCounted,kind:String)->bool:
	return kind in IDS and (city.CreationPolicy.is_free(city) or kind in city.signature_unlocks)

static func planted_count(city: RefCounted)->int:
	var count := 0
	for plant: Dictionary in city.plants:
		if str(plant.get("source","seed"))=="player":count+=1
	return count

static func wide_street_metres(city: RefCounted)->float:
	var result := 0.
	for road: Dictionary in city.roads:
		if str(road.get("style","path")) not in ["promenade","avenue","tram"] or float(road.width)<1.75:continue
		for i in range(road.points.size()-1):result+=Vector2(road.points[i][0],road.points[i][1]).distance_to(Vector2(road.points[i+1][0],road.points[i+1][1]))
	return result

static func refresh(city: RefCounted) -> Array[String]:
	var earned: Array[String]=[];var ordinary:=0;var bridges:=0;var bread:=0
	for house: Dictionary in city.houses:
		if not house.has("signature"):ordinary+=1
	for road: Dictionary in city.roads:
		if road.get("bridge",false):bridges+=1
	for row: Dictionary in city.bakery_supply.values():bread+=int(row.produced)
	var met: Dictionary={"bell_keep":ordinary>=10 and bridges>0,"watermill":bread>=24,"music_academy":city.era_unlocks.has("renaissance") and not city.district_answers.is_empty(),"botanical_palace":int(city.life_progress.tea_parties)>=8 and planted_count(city)>=120,"clockwork_depot":city.era_unlocks.has("clockwork") and wide_street_metres(city)>=30.0,"floating_amphitheater":city.era_unlocks.has("modern_eco") and city.growth_memories.size()>=3}
	for id: String in IDS:
		if (met[id] or city.Biomes.grants(city.biome_seed,id)) and not city.signature_unlocks.has(id):city.signature_unlocks.append(id);earned.append(id)
	city.signature_unlocks.sort_custom(func(a: String,b: String)->bool:return IDS.find(a)<IDS.find(b))
	if not earned.is_empty():city.dirty=true;city.life_progress_dirty=true
	return earned

static func cells(kind: String) -> Array[Dictionary]:
	var result: Array[Dictionary]=[]
	if kind=="bell_keep":
		for level in range(4):result.append({"x":0,"z":0,"level":level,"kind":"room"})
	elif kind=="botanical_palace":
		result.append({"x":0,"z":-1,"level":0,"kind":"room"})
		for z in range(3):
			for x in range(-1,2):result.append({"x":x,"z":z,"level":0,"kind":"terrace"})
	elif kind=="floating_amphitheater":
		for z in range(2):
			for x in range(2):result.append({"x":x,"z":z,"level":0,"kind":"room" if x==0 and z==0 else "terrace"})
	elif kind=="clockwork_depot":
		for z in range(2):
			for x in range(3):result.append({"x":x,"z":z,"level":0,"kind":"room"})
		for level in range(1,4):result.append({"x":1,"z":0,"level":level,"kind":"room"})
	else:
		for level in range(2 if kind in ["music_academy","watermill"] else 1):
			for z in range(2):
				for x in range(2):result.append({"x":x,"z":z,"level":level,"kind":"room"})
	return result

static func wheel_plan(city: RefCounted, house: Dictionary) -> Dictionary:
	var center:=Vector2(float(house.origin[0])+.9,float(house.origin[1])+.9)
	var best:=INF;var at:=Vector2.ZERO;var normal:=Vector2.ZERO
	for side: Vector2 in [Vector2.RIGHT,Vector2.LEFT,Vector2.DOWN,Vector2.UP]:
		var point:=center+side*2.12
		var distance: float=city.water_clearance(point)
		if distance<best:best=distance;at=point;normal=side
	return {"at":at,"side":normal,"clearance":best}

static func preview(city: RefCounted, kind: String, at: Vector2, moving: String="") -> Dictionary:
	if kind not in IDS:return city._fail("未知的地标名胜")
	if not available(city,kind):return city._fail("先达成里程碑："+GOALS[kind])
	if not is_finite(at.x) or not is_finite(at.y):return city._fail("地标位置无效")
	for house: Dictionary in city.houses:
		if house.get("signature","")==kind and str(house.id)!=moving:return city._fail("这座地标已放置，可选中后移动或回收")
	var candidate: Dictionary={"id":moving if not moving.is_empty() else "signature_preview","name":NAMES[kind],"signature":kind,"role":ROLES[kind],"origin":[at.x,at.y],"base_y":city.sample_house_base_y(at),"palette":0,"seed":82947,"cells":cells(kind),"bakery_open":true,"workshop_open":true,"auto_matinee":false}
	if kind=="bell_keep":candidate.style="stone"
	if kind=="music_academy":candidate.era_theme="renaissance"
	if kind=="clockwork_depot":candidate.era_theme="clockwork"
	if kind=="floating_amphitheater":candidate.era_theme="modern_eco"
	for i in range(candidate.cells.size()):candidate.cells[i].id="preview_cell_%d"%i;candidate.cells[i].source="player"
	if city._house_overlaps(candidate,moving):return city._fail("地标与其他房屋重叠")
	var site: Dictionary=city._validate_house_site(candidate)
	if not site.ok:return site
	if kind=="watermill":
		var wheel:=wheel_plan(city,candidate)
		if float(wheel.clearance) < -.85 or float(wheel.clearance)>.65:return city._fail("将磨坊沿岸放置，让水车轮缘落入水中")
	return {"ok":true,"message":"免费放置 · "+NAMES[kind],"house":candidate}

static func place(city: RefCounted,kind: String,at: Vector2,moving: String="") -> Dictionary:
	var previewed:=preview(city,kind,at,moving)
	if not previewed.ok:return previewed
	var before: Dictionary=city.snapshot();var house: Dictionary=previewed.house
	if moving.is_empty():
		var number: int=maxi(city._next_house_id,int(city._high_watermark.house)+1)
		house.id="h%d"%number;house.seed=81000+number*977
		for cell: Dictionary in house.cells:
			var serial: int=maxi(city._next_cell_id,int(city._high_watermark.cell)+1)
			cell.id="c%d"%serial;city._next_cell_id=serial+1;city._high_watermark.cell=serial
		city.houses.append(house);city._next_house_id=number+1;city._high_watermark.house=number
	else:
		var index: int=city._house_index(moving)
		if index<0 or city.houses[index].get("signature","")!=kind:return city._fail("要移动的地标不存在")
		# Only placement changes; all room IDs, work, stock and performance history survive.
		city.houses[index].origin=house.origin;city.houses[index].base_y=house.base_y
	city._commit(before,"放置地标" if moving.is_empty() else "移动地标")
	return {"ok":true,"house_id":str(house.id),"message":("已免费放置 · " if moving.is_empty() else "已移动 · ")+NAMES[kind]}

static func validate(city: RefCounted,data: Dictionary,issued: Dictionary) -> Dictionary:
	var unlocks: Variant=data.get("signature_unlocks",[]);var answers: Variant=data.get("district_answers",[])
	if not unlocks is Array or not answers is Array:return city._fail("地标里程碑结构无效")
	var seen:= {}
	for id in unlocks:
		if id not in IDS or seen.has(id):return city._fail("地标解锁身份无效")
		seen[id]=true
	var pairs: Dictionary={}
	for pair in answers:
		if not pair is Dictionary or pair.size()!=2:return city._fail("街坊问答记录无效")
		var ids:= {}
		for side: String in ["from","to"]:
			if not city._valid_id(pair.get(side),"d",ids) or int(pair[side].substr(1))>int(issued.get("district",0)):return city._fail("街坊问答身份无效")
		if pair!=city._canonical_musical_link(pair.from,pair.to):return city._fail("街坊问答顺序无效")
		var key: String=pair.from+"_"+pair.to
		if pairs.has(key):return city._fail("街坊问答记录重复")
		pairs[key]=true
	if "music_academy" in unlocks and not city.Biomes.grants(data.get("biome_seed",{}),"music_academy") and (answers.is_empty() or not data.get("era_unlocks",[]).has("renaissance")):return city._fail("音乐院缺少文艺复兴问答里程碑")
	if ("botanical_palace" in unlocks or "clockwork_depot" in unlocks) and int(data.schema)<city.CLOCKWORK_SCHEMA:return city._fail("新地标需要新存档版本")
	if "botanical_palace" in unlocks and not city.Biomes.grants(data.get("biome_seed",{}),"botanical_palace") and int(data.get("life_progress",{}).get("tea_parties",0))<8:return city._fail("植物宫缺少八桌茶聚记录")
	if "clockwork_depot" in unlocks and not city.Biomes.grants(data.get("biome_seed",{}),"clockwork_depot") and not data.get("era_unlocks",[]).has("clockwork"):return city._fail("电车总站缺少第三时代里程碑")
	if "floating_amphitheater" in unlocks and not city.Biomes.grants(data.get("biome_seed",{}),"floating_amphitheater") and (int(data.schema)<city.MODERN_SCHEMA or not data.get("era_unlocks",[]).has("modern_eco") or data.get("growth_memories",[]).size()<3):return city._fail("水上剧场缺少第四时代与三章手记")
	var placed:= {}
	var free:bool=city.CreationPolicy.data_is_free(data)
	for house: Dictionary in data.houses:
		if not house.has("signature"):continue
		var kind: Variant=house.signature
		if kind not in IDS or (not free and kind not in unlocks) or placed.has(kind):return city._fail("地标未解锁或重复放置")
		placed[kind]=true
		var expected:=cells(kind)
		# Original four-ground-cell mills keep their authored structure.
		if kind=="watermill" and house.cells.size()==4:expected=expected.filter(func(cell:Dictionary)->bool:return int(cell.level)==0)
		if house.role!=ROLES[kind] or house.cells.size()!=expected.size():return city._fail("地标用途或结构无效")
		if kind=="floating_amphitheater":
			var plan:Dictionary=city.AmphitheaterPlan.for_house(city,house,data.get("waters",[]))
			for other:Dictionary in data.houses:
				if other.id!=house.id and city.AmphitheaterPlan.hits_house(plan,other):return city._fail("水上舞台或栈桥与房屋重叠")
		for i in range(expected.size()):
			for key: String in ["x","z","level","kind"]:
				if house.cells[i][key]!=expected[i][key]:return city._fail("地标房间结构无效")
	return {"ok":true}
