extends RefCounted
## Earned era rights survive editing history; district and individual choices do not.
const IDS := ["pastoral", "renaissance", "clockwork", "modern_eco"]
const NAMES := ["田园木石河湾", "文艺复兴人文长街", "蒸汽钟表与浪漫花房", "现代生态交响城"]
const AVAILABLE_COUNT := 4
const RENAISSANCE_HOUSES := 14

static func for_house(city: RefCounted, house: Dictionary) -> String:
	var signature:=str(house.get("signature",""))
	if signature=="floating_amphitheater":return "modern_eco"
	if signature=="music_academy":return "renaissance"
	if signature=="clockwork_depot":return "clockwork"
	if signature in ["bell_keep","watermill","botanical_palace"]:return "pastoral"
	if house.has("era_theme"): return str(house.era_theme)
	var district: Dictionary = city.district_for_house(str(house.id))
	return str(district.get("era_theme", "pastoral"))

static func refresh(city: RefCounted) -> bool:
	var changed := false
	if city.era_unlocks.size()==1 and city.houses.size()>=RENAISSANCE_HOUSES and int(city.life_progress.tea_parties)>0 and not city.district_answers.is_empty():
		city.era_unlocks.append("renaissance")
		city.era_unlocked.emit("renaissance")
		changed=true
	if city.era_unlocks.size()==2 and city.houses.size()>=28:
		var occupied := {}
		for house: Dictionary in city.houses:
			if house.has("signature"): continue
			var district: Dictionary=city.district_for_house(str(house.id))
			if not district.is_empty(): occupied[str(district.get("era_theme","pastoral"))]=true
		if occupied.size()>=2:
			city.era_unlocks.append("clockwork")
			city.era_unlocked.emit("clockwork")
			changed=true
	if city.era_unlocks.size()==3 and city.houses.size()>=50 and three_era_resonance(city.era_answers):
		city.era_unlocks.append("modern_eco");changed=true
		city.era_unlocked.emit("modern_eco")
	return changed

static func three_era_resonance(rows: Array)->bool:
	var graph:Dictionary={};var colors:Dictionary={}
	for row:Dictionary in rows:
		for side:String in ["from","to"]:
			var id:String=row[side]
			if not graph.has(id):graph[id]=[];colors[id]={}
			colors[id][row[side+"_era"]]=true
		graph[row.from].append(row.to);graph[row.to].append(row.from)
	var seen:Dictionary={}
	for id:String in graph:
		if seen.has(id):continue
		var queue:Array=[id];var eras:Dictionary={};var districts:=0
		while not queue.is_empty():
			var next:String=queue.pop_back()
			if seen.has(next):continue
			seen[next]=true;districts+=1;eras.merge(colors[next])
			queue.append_array(graph[next])
		if districts>=3 and eras.has("pastoral") and eras.has("renaissance") and eras.has("clockwork"):return true
	return false

static func validate_answers(city:RefCounted,data:Dictionary,issued:Dictionary)->Dictionary:
	var rows:Variant=data.get("era_answers",[])
	if not rows is Array:return city._fail("时代共鸣记录结构无效")
	if (data.has("era_answers") or "modern_eco" in data.get("era_unlocks",[])) and int(data.schema)<city.MODERN_SCHEMA:return city._fail("现代共鸣需要新存档版本")
	var seen:Array=[]
	for row in rows:
		if not row is Dictionary or row.size()!=4:return city._fail("时代共鸣记录字段无效")
		var ids:Dictionary={}
		for side:String in ["from","to"]:
			if not city._valid_id(row.get(side),"d",ids) or int(row[side].substr(1))>int(issued.get("district",0)):return city._fail("时代共鸣街坊身份无效")
			if row.get(side+"_era") not in data.get("era_unlocks",["pastoral"]):return city._fail("时代共鸣风貌尚未开启")
		if row.from==row.to or row.from_era==row.to_era or row in seen:return city._fail("时代共鸣记录重复或缺少跨时代问答")
		var pair:Dictionary=city._canonical_musical_link(row.from,row.to)
		if row.from!=pair.from or row.to!=pair.to or pair not in data.get("district_answers",[]):return city._fail("时代共鸣缺少对应的完整街坊问答")
		seen.append(row)
	if "modern_eco" in data.get("era_unlocks",[]) and not three_era_resonance(rows):return city._fail("现代时代尚未贯通三个时代的实际共鸣")
	return {"ok":true}

static func journal(city: RefCounted) -> String:
	var lines: PackedStringArray = []
	var renaissance_goal: String="房屋 %d/14 · 茶聚 %d/1 · 跨区问答 %d/1" % [mini(city.houses.size(),RENAISSANCE_HOUSES),mini(int(city.life_progress.tea_parties),1),mini(city.district_answers.size(),1)]
	var goals := ["自由建造与街坊生活", renaissance_goal, "28屋 · 两种时代街坊", "50屋 · 贯通三时代共鸣"]
	for i in range(IDS.size()):
		lines.append(("✓ " if city.era_unlocks.has(IDS[i]) else "○ ") + "时代 %s · " % [i+1] + NAMES[i] + (" · 已开启" if city.era_unlocks.has(IDS[i]) else " · " + goals[i]))
	return "\n".join(lines)
