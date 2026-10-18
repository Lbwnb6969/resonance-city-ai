extends RefCounted
## Five permanent quality tiers, earned from this household's actual services.
const NAMES := ["初筑暖舍","安居花舍","雅致风铃屋","连廊华宅","传世共鸣名宅"]

static func services(data: Dictionary, id: String, source: String) -> Dictionary:
	var food: Dictionary=data.get("cafe_credits",{}).get(source,{})
	var tea: Dictionary=data.get("matinee_credits",{}).get(source,{})
	var concert: Dictionary=data.get("house_concerts",{}).get(source,{})
	var own_concert: Dictionary=data.get("house_concerts",{}).get(id,{})
	return {"food":int(food.get("earned",0))>0 or int(data.get("bakery_supply",{}).get(id,{}).get("served",0))>0,
		"craft":int(data.get("house_improvements",{}).get(id,0))>0 or int(data.get("workshop_supply",{}).get(id,{}).get("delivered",0))>0,
		"tea":int(food.get("spent",0))>0 or int(tea.get("earned",0))>0 or int(data.get("cafe_progress",{}).get(id,{}).get("groups",0))>0,
		"concert":int(concert.get("concerts",0))>0 or int(own_concert.get("concerts",0))>0,
		"relay":int(concert.get("relays",0))>0 or int(own_concert.get("relays",0))>0,
		"culture":int(data.get("house_culture",{}).get(id,0))>0 or int(data.get("house_culture",{}).get(source,0))>0 or int(data.get("house_clockwork",{}).get(id,0))>0 or int(data.get("house_clockwork",{}).get(source,0))>0}

static func eligible(flags: Dictionary, street: bool, amenity: bool, prestige: bool=false) -> int:
	if not street or not flags.food: return 1
	if not flags.craft and not flags.concert: return 2
	if not (flags.tea or flags.culture) or not amenity: return 3
	if not flags.relay or not prestige: return 4
	return 5

static func prestige(city: RefCounted, house: Dictionary) -> bool:
	var district: String=str(city.district_for_house(str(house.id)).get("id",""))
	if district.is_empty():return false
	for other: Dictionary in city.houses:
		if not other.has("signature") and city.house_era(other)=="pastoral" and str(other.role) not in ["atelier","clockmaker","symphony_hall"]:continue
		if str(city.district_for_house(str(other.id)).get("id",""))==district:return true
	return false

static func data(city: RefCounted) -> Dictionary:
	return {"cafe_credits":city.cafe_credits,"matinee_credits":city.matinee_credits,"bakery_supply":city.bakery_supply,
		"cafe_progress":city.cafe_progress,"house_improvements":city.house_improvements,"workshop_supply":city.workshop_supply,
		"house_culture":city.house_culture,"house_clockwork":city.house_clockwork,"house_concerts":city.house_concerts}

static func amenity(city: RefCounted, house: Dictionary) -> bool:
	var at:=Vector2(float(house.origin[0]),float(house.origin[1]))
	var district: Dictionary=city.district_for_house(str(house.id))
	for road: Dictionary in city.roads:
		if road.get("style","") not in ["promenade","avenue","tram"]: continue
		if city._water_stroke_distance(at,road.points)<=float(road.width)*.5+3.5: return true
		if district.is_empty(): continue
		for i in range(road.points.size()):
			var point:=Vector2(float(road.points[i][0]),float(road.points[i][1]))
			if str(city.district_at(point).get("id",""))==str(district.id): return true
	for court: Dictionary in city.courtyard_plans():
		if str(house.id) in court.members and not court.get("fountain",{}).is_empty(): return true
	return false

static func refresh(city: RefCounted, connected: Dictionary, workplaces: Dictionary, first:int=0, count:int=-1) -> Array[Dictionary]:
	var result: Array[Dictionary]=[]
	var ledger:=data(city)
	for index in range(first,city.houses.size() if count<0 else mini(city.houses.size(),first+count)):
		var house:Dictionary=city.houses[index]
		var id:=str(house.id)
		var current: Dictionary=city.building_quality.get(id,{"level_tier":1,"source_id":id,"street":false,"amenity":false})
		if int(current.level_tier)==5: continue
		var source:=str(workplaces.get(id,id))
		var flags:=services(ledger,id,source)
		var street: bool=bool(current.street) or connected.has(id)
		var has_amenity: bool=bool(current.amenity)
		if not has_amenity and (flags.tea or flags.culture):
			if not city._quality_amenities.has(id): city._quality_amenities[id]=amenity(city,house)
			has_amenity=bool(city._quality_amenities[id])
		var has_prestige: bool=bool(current.get("prestige",false))
		if flags.relay and not has_prestige:
			var key: String="prestige:"+id
			if not city._quality_amenities.has(key):city._quality_amenities[key]=prestige(city,house)
			has_prestige=bool(city._quality_amenities[key])
		var tier:=eligible(flags,street,has_amenity,has_prestige)
		# A worker changing jobs cannot erase an earlier household's contribution.
		if tier<=int(current.level_tier): continue
		city.building_quality[id]={"level_tier":tier,"source_id":source,"street":street,"amenity":has_amenity,"prestige":has_prestige}
		city.dirty=true;city.life_progress_dirty=true
		result.append({"house_id":id,"from":int(current.level_tier),"to":tier})
	return result

static func validate(city: RefCounted, snapshot: Dictionary, issued: Dictionary) -> Dictionary:
	var concerts: Variant=snapshot.get("house_concerts",{})
	var quality: Variant=snapshot.get("building_quality",{})
	if not concerts is Dictionary or not quality is Dictionary: return city._fail("建筑品质台账结构无效")
	for id in concerts:
		var ids: Dictionary={};var row: Variant=concerts[id]
		if not city._valid_id(id,"h",ids) or int(id.substr(1))>int(issued.house): return city._fail("演出履历身份无效")
		if not row is Dictionary or row.size()!=2: return city._fail("演出履历字段无效")
		if not city._is_integer(row.get("concerts")) or not city._is_integer(row.get("relays")) or row.relays<0 or row.relays>row.concerts or row.concerts>int(snapshot.get("life_progress",{}).get("concerts",0)): return city._fail("演出履历超过真实完成场次")
	for id in quality:
		var ids: Dictionary={};var row: Variant=quality[id]
		if not city._valid_id(id,"h",ids) or int(id.substr(1))>int(issued.house): return city._fail("品质房屋身份无效")
		if not row is Dictionary or row.size() not in [4,5] or not city._is_integer(row.get("level_tier")) or row.level_tier<2 or row.level_tier>5: return city._fail("建筑品质等级无效")
		if row.size()==5 and (not row.get("prestige") is bool or int(snapshot.schema)<city.QUALITY_CONTEXT_SCHEMA):return city._fail("建筑品质街坊履历无效")
		var source_ids: Dictionary={}
		if not city._valid_id(row.get("source_id"),"h",source_ids) or int(row.source_id.substr(1))>int(issued.house) or not row.get("street") is bool or not row.get("amenity") is bool: return city._fail("建筑品质来源无效")
		var flags:=services(snapshot,id,row.source_id)
		# Four-field rows preserve already earned pre-17 household rights.
		var earned: bool=bool(row.prestige) if row.has("prestige") else bool(flags.culture and flags.tea)
		if int(row.level_tier)>eligible(flags,row.street,row.amenity,earned): return city._fail("建筑品质缺少真实服务记录")
	return {"ok":true}
