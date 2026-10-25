extends RefCounted
## Pure save-ledger and scalar validation. No State or runtime references.

static func _valid_id(value: Variant, prefix: String, ids: Dictionary) -> bool:
	if not value is String or not value.begins_with(prefix):
		return false
	var suffix: String = value.substr(1)
	if not suffix.is_valid_int() or int(suffix) < 1 or value != prefix + str(int(suffix)) or ids.has(value):
		return false
	ids[value] = true
	return true

static func _valid_point(value: Variant) -> bool:
	return value is Array and value.size() == 2 and _is_number(value[0]) and _is_number(value[1])

static func _is_number(value: Variant) -> bool:
	return (value is int or value is float) and is_finite(float(value))

static func _is_integer(value: Variant) -> bool:
	return _is_number(value) and float(value) == floor(float(value))

static func _fail(message: String) -> Dictionary:
	return {"ok": false, "message": message}

static func _validate_regional_trips(data:Dictionary,issued:int)->Dictionary:
	for field:String in ["regional_trips","regional_replies"]:
		if data.has(field) and int(data.schema)<18:return _fail("跨区交流履历需要新版存档")
		var rows:Variant=data.get(field,[])
		if not rows is Array:return _fail("跨区交流履历结构无效")
		var seen:Array=[]
		for row:Variant in rows:
			if not row is Dictionary or row.size()!=6:return _fail("跨区交流履历字段无效")
			for side:String in ["from","to"]:
				if not _valid_id(row.get(side),"d",{}) or int(str(row[side]).substr(1))>issued:return _fail("跨区交流街坊身份无效")
				var voice:Variant=row.get(side+"_voice")
				if not voice is String:return _fail("跨区交流声部身份无效")
				var parts:PackedStringArray=voice.split(":")
				if parts.size()!=2 or parts[0] not in data.get("era_unlocks",["pastoral"]) or parts[1] not in ["warm","deep","weave","market","sylvan"]:return _fail("跨区交流声部身份无效")
				if row.get(side+"_region") not in ["west","east","highland","garden"]:return _fail("跨区交流地形身份无效")
			if int(str(row.from).substr(1))>=int(str(row.to).substr(1)) or row in seen:return _fail("跨区交流履历重复或未规范排序")
			if field=="regional_replies" and {"from":row.from,"to":row.to} not in data.get("district_answers",[]):return _fail("区域复调缺少真实完成的街坊问答")
			seen.append(row)
	return {"ok":true}


static func _validate_craft_supply(data: Dictionary, issued_house: int) -> Dictionary:
	var supply: Variant = data.get("workshop_supply", {})
	var improvements: Variant = data.get("house_improvements", {})
	var commissions: Variant = data.get("venue_commissions", {})
	if not supply is Dictionary or not improvements is Dictionary or not commissions is Dictionary: return _fail("城市存档木饰供给结构无效")
	var delivered := 0
	var installed := 0
	var art_reserved := {}
	var mechanical_reserved := {}
	var mechanical: Variant=data.get("house_clockwork",{})
	if not mechanical is Dictionary:return _fail("钟表工艺台账无效")
	for target_id in mechanical:
		var ids := {}
		if not _valid_id(target_id,"h",ids) or int(target_id.substr(1))>issued_house or not _is_integer(mechanical[target_id]) or mechanical[target_id]<0 or mechanical[target_id]>2:return _fail("钟表工艺安装计数无效")
		installed+=int(mechanical[target_id])
	var culture: Variant = data.get("house_culture", {})
	if not culture is Dictionary: return _fail("文化送装台账无效")
	for target_id in culture:
		var ids := {}
		if not _valid_id(target_id,"h",ids) or int(target_id.substr(1)) > issued_house or not _is_integer(culture[target_id]) or culture[target_id] < 0 or culture[target_id] > 2: return _fail("文化安装计数无效")
		installed += int(culture[target_id])
	var reserved := {}
	var festival_reserved := {}
	var festival_delivered := 0
	var requested := 0
	for venue_id in commissions:
		var ids := {}
		if not _valid_id(venue_id, "h", ids) or int(venue_id.substr(1)) > issued_house: return _fail("城市存档节庆委托身份无效")
		var row: Variant = commissions[venue_id]
		if not row is Dictionary or row.size() != 3: return _fail("城市存档节庆委托字段无效")
		for key in ["requested", "delivered", "used"]:
			if not _is_integer(row.get(key)) or row[key] < 0: return _fail("城市存档节庆委托计数无效")
		if row.used > row.delivered or row.delivered > row.requested or row.requested - row.used > 1: return _fail("城市存档节庆委托不守恒")
		requested += int(row.requested)
		festival_delivered += int(row.delivered)
	if requested > int(data.get("life_progress", {}).get("concerts", 0)): return _fail("城市存档节庆委托超过真实演出")
	for target_id in improvements:
		var ids := {}
		if not _valid_id(target_id, "h", ids) or int(target_id.substr(1)) > issued_house: return _fail("城市存档木饰目标身份无效")
		if not _is_integer(improvements[target_id]) or improvements[target_id] < 0 or improvements[target_id] > 3: return _fail("城市存档木饰升级无效")
		installed += int(improvements[target_id])
	for shop_id in supply:
		var ids := {}
		if not _valid_id(shop_id, "h", ids) or int(shop_id.substr(1)) > issued_house: return _fail("城市存档工坊身份无效")
		var row: Variant = supply[shop_id]
		if not preload("res://scripts/world/city_creation_wish_fulfilment.gd").valid_supply_row(row,4,int(data.schema)) or not row.get("transit") is Dictionary: return _fail("城市存档工坊台账字段无效")
		for key in ["stock", "produced", "delivered"]:
			if not _is_integer(row.get(key)) or row[key] < 0: return _fail("城市存档工坊计数无效")
		var cargo: Dictionary = row.transit
		if not cargo.is_empty():
			if cargo.size() != (3 if cargo.has("kind") else 2) or cargo.get("kind", "upgrade") not in ["upgrade", "festival", "art", "musicbox"]: return _fail("城市存档木饰运输字段无效")
			for key in ["home_id", "target_id"]:
				var cargo_ids := {}
				if not _valid_id(cargo.get(key), "h", cargo_ids) or int(cargo[key].substr(1)) > issued_house: return _fail("城市存档木饰运输身份无效")
			if cargo.target_id == shop_id: return _fail("工坊不能给自己安装木饰")
			if cargo.get("kind", "upgrade") == "festival":
				festival_reserved[cargo.target_id] = int(festival_reserved.get(cargo.target_id, 0)) + 1
			elif cargo.get("kind", "upgrade") == "art":
				art_reserved[cargo.target_id] = int(art_reserved.get(cargo.target_id,0)) + 1
			elif cargo.get("kind", "upgrade")=="musicbox":
				if int(data.get("schema",1))<15:return _fail("钟表运输需要新存档版本")
				mechanical_reserved[cargo.target_id]=int(mechanical_reserved.get(cargo.target_id,0))+1
			else:
				reserved[cargo.target_id] = int(reserved.get(cargo.target_id, 0)) + 1
		if row.produced != row.stock + row.delivered + (0 if cargo.is_empty() else 1): return _fail("城市存档木饰收支不一致")
		delivered += int(row.delivered)
	var civic:=preload("res://scripts/world/city_creation_civic_validation.gd").valid(data,issued_house)
	if not civic.ok:return _fail("城市供需首秀或书院器乐台账无效")
	if delivered != installed + festival_delivered + int(civic.instruments): return _fail("城市存档木饰安装、书院器乐及节庆交付与出库不一致")
	for target_id in reserved:
		if int(improvements.get(target_id, 0)) + int(reserved[target_id]) > 3: return _fail("城市存档木饰预留超过升级上限")
	for target_id in art_reserved:
		if int(culture.get(target_id,0)) + int(art_reserved[target_id]) > 2: return _fail("文化送装重复预订")
	for target_id in mechanical_reserved:
		if int(mechanical.get(target_id,0))+int(mechanical_reserved[target_id])>2:return _fail("钟表工艺重复预订")
	for venue_id in festival_reserved:
		var row: Dictionary = commissions.get(venue_id, {})
		if int(festival_reserved[venue_id]) > int(row.get("requested", 0)) - int(row.get("delivered", 0)): return _fail("城市存档节庆委托重复预订")
	return {"ok":true}

static func _validate_landmark_bread(data:Dictionary,issued_house:int)->Dictionary:
	var ledger:Variant=data.get("landmark_bread",{})
	if not ledger is Dictionary:return _fail("磨坊赠粮台账无效")
	if data.has("landmark_bread") and int(data.schema)<18:return _fail("磨坊赠粮需要新存档版本")
	if not ledger.is_empty() and "watermill" not in data.get("signature_unlocks",[]):return _fail("磨坊赠粮缺少地标解锁")
	var supply:Variant=data.get("bakery_supply",{})
	if not supply is Dictionary:return _fail("城市存档面包供给结构无效")
	var homes:Dictionary={};var sources:Dictionary={}
	for house:Dictionary in data.houses:sources[str(house.id)]=house
	for source in ledger:
		var ids:Dictionary={}
		if not _valid_id(source,"h",ids) or int(source.substr(1))>issued_house:return _fail("赠粮磨坊身份无效")
		if sources.has(source) and sources[source].get("signature","")!="watermill":return _fail("赠粮来源不是水车磨坊")
		var row:Variant=ledger[source]
		if not row is Dictionary or row.size()!=2 or not _is_integer(row.get("batches")) or row.batches<1 or not row.get("gifts") is Dictionary:return _fail("磨坊炉次记录无效")
		var bread:Variant=supply.get(source,{})
		if not bread is Dictionary or not _is_integer(bread.get("produced")) or not _is_integer(bread.get("served")) or row.batches>bread.produced:return _fail("赠粮缺少真实出炉记录")
		var gifts:=0
		for home in row.gifts:
			var seen:Dictionary={}
			if not _valid_id(home,"h",seen) or int(home.substr(1))>issued_house or home==source or not _is_integer(row.gifts[home]) or row.gifts[home]<1:return _fail("收粮住户记录无效")
			gifts+=int(row.gifts[home]);homes[home]=int(homes.get(home,0))+int(row.gifts[home])
		if gifts>2*floori(float(row.batches)/3.) or gifts>bread.served:return _fail("赠粮超过炉次或实际库存支出")
	var credits:Variant=data.get("cafe_credits",{})
	if not credits is Dictionary:return _fail("收粮资格台账无效")
	for home:String in homes:
		var row:Variant=credits.get(home,{})
		if not row is Dictionary or not _is_integer(row.get("earned")) or homes[home]>row.earned:return _fail("赠粮与住户收粮记录不一致")
	return {"ok":true}

static func _gift_count(data:Dictionary)->int:
	var total:=0
	for row:Dictionary in data.get("landmark_bread",{}).values():
		for count in row.gifts.values():total+=int(count)
	return total

static func _validate_cafe_progress(data: Dictionary, issued: Dictionary) -> Dictionary:
	var credits: Variant = data.get("cafe_credits", {})
	var progress: Variant = data.get("cafe_progress", {})
	if not credits is Dictionary or not progress is Dictionary: return _fail("茶座生活台账无效")
	var earned := 0
	var spent := 0
	for id in credits:
		var seen := {}
		if not _valid_id(id, "h", seen) or int(id.substr(1)) > int(issued.house): return _fail("茶座资格房屋无效")
		var row: Variant = credits[id]
		if not row is Dictionary or row.size() != 2: return _fail("茶座资格字段无效")
		if not _is_integer(row.get("earned")) or not _is_integer(row.get("spent")): return _fail("茶座资格次数无效")
		if row.spent < 0 or row.earned < row.spent or row.earned - row.spent > 1: return _fail("茶座资格守恒无效")
		earned += int(row.earned)
		spent += int(row.spent)
	var groups := 0
	var visits := 0
	for id in progress:
		var seen := {}
		if not _valid_id(id, "h", seen) or int(id.substr(1)) > int(issued.house): return _fail("茶座台账房屋无效")
		var row: Variant = progress[id]
		if not row is Dictionary or row.size() != 2: return _fail("茶座台账字段无效")
		if not _is_integer(row.get("groups")) or not _is_integer(row.get("visits")) or row.groups < 0 or row.visits < row.groups * 2 or row.visits > row.groups * 3: return _fail("茶座台账人数无效")
		groups += int(row.groups)
		visits += int(row.visits)
	var life: Dictionary = data.get("life_progress", {})
	if spent != int(life.get("tea_visits", 0)) or visits != spent or groups != int(life.get("tea_parties", 0)) or earned > int(life.get("purchases", 0))+_gift_count(data): return _fail("茶座采购与聚会台账不守恒")
	return {"ok":true}

static func _validate_matinee(data: Dictionary, issued: Dictionary) -> Dictionary:
	var credits: Variant = data.get("matinee_credits", {})
	var progress: Variant = data.get("matinee_progress", {})
	var pending: Variant = data.get("matinee_pending", {})
	if not credits is Dictionary or not progress is Dictionary or not pending is Dictionary: return _fail("巡演台账结构无效")
	var cooldown: Variant = data.get("matinee_cooldown", 0.0)
	var last: Variant = data.get("matinee_last_venue", "")
	if not _is_number(cooldown) or cooldown < 0.0 or cooldown > 60.0 or not last is String: return _fail("巡演休息时间无效")
	if not last.is_empty():
		var seen := {}
		if not _valid_id(last, "h", seen) or int(last.substr(1)) > int(issued.house): return _fail("巡演轮次房屋无效")
	var spent := 0
	for id in credits:
		var seen := {}
		if not _valid_id(id, "h", seen) or int(id.substr(1)) > int(issued.house): return _fail("即兴灵感房屋无效")
		var row: Variant = credits[id]
		if not row is Dictionary or row.size() != 2 or not _is_integer(row.get("earned")) or not _is_integer(row.get("spent")): return _fail("即兴灵感字段无效")
		if row.spent < 0 or row.earned < row.spent or row.earned - row.spent > 1: return _fail("即兴灵感守恒无效")
		if row.earned > int(data.get("cafe_credits", {}).get(id, {}).get("spent", 0)): return _fail("灵感缺少真实品茶来源")
		spent += int(row.spent)
	var completed := 0
	var sponsorships := 0
	for id in progress:
		var seen := {}
		if not _valid_id(id, "h", seen) or int(id.substr(1)) > int(issued.house): return _fail("巡演场地台账无效")
		var row: Variant = progress[id]
		if not row is Dictionary or row.size() != 2 or not _is_integer(row.get("completed")) or not _is_integer(row.get("sponsors")): return _fail("巡演结算字段无效")
		if row.completed < 0 or row.sponsors < row.completed * 2: return _fail("巡演赞助次数无效")
		completed += int(row.completed)
		sponsorships += int(row.sponsors)
	var life: Dictionary = data.get("life_progress", {})
	if sponsorships != spent or completed != int(life.get("auto_concerts", 0)) or completed > int(life.get("concerts", 0)): return _fail("巡演结算台账不守恒")
	var checkpoint: Dictionary = data.get("journey_checkpoint", {})
	var concert: Dictionary = checkpoint.get("concert", {})
	if checkpoint.has("relay"):
		for id: String in checkpoint.relay.venues:
			if int(id.substr(1)) > int(issued.house): return _fail("庆典接力场地尚未生成")
		var role := ""
		for house: Dictionary in data.houses:
			if house.id == concert.venue_id: role = str(house.role)
		if role not in ["venue","symphony_hall"]: return _fail("庆典接力当前庭用途无效")
	var automatic: bool = concert.get("source", "manual") == "auto" and concert.get("phase", "idle") != "idle"
	if pending.is_empty():
		if automatic: return _fail("自动演出缺少真实赞助授权")
		return {"ok":true}
	if pending.size() != 2 or not pending.get("venue_id") is String or not pending.get("sponsors") is Array or pending.sponsors.size() < 2: return _fail("巡演待结算授权无效")
	if not automatic or concert.get("venue_id", "") != pending.venue_id or concert.get("sponsors", []) != pending.sponsors or cooldown > 0.0: return _fail("巡演来源与真实授权不符")
	var roles := {}
	for house in data.houses: roles[house.id] = house.role
	if roles.get(pending.venue_id, "") not in ["venue","symphony_hall"]: return _fail("巡演授权场地用途无效")
	var unique := {}
	for home in pending.sponsors:
		if not home is String or unique.has(home) or roles.get(home, "") != "residential" or not concert.get("participants", []).has(home): return _fail("巡演授权成员无效")
		unique[home] = true
		var row: Dictionary = credits.get(home, {})
		if int(row.get("earned", 0)) - int(row.get("spent", 0)) != 1: return _fail("巡演授权缺少未用灵感")
	return {"ok":true}
