extends RefCounted
## Explicit, versioned window recipes; absent fields keep the published v1 facade.
const SCHEMA:=25
const SLOT_SCHEMA:=27
const CHIMNEY_SCHEMA:=28
const TRIM_SCHEMA:=29
const PORCH_SCHEMA:=30
const PROTOTYPE:="recessed_townhouse"
const IDS:=["timber_shutters","stone_pediment"]
const LABELS:={"":"原窗","timber_shutters":"木百叶","stone_pediment":"石山花"}
const DORMERS:=["off","gable_light","shed_light"]
const DORMER_LABELS:={"":"随屋面","off":"无天窗","gable_light":"山墙天窗","shed_light":"斜面天窗"}
const CHIMNEYS:=["off","brick_twin_pots","copper_cowl"]
const CHIMNEY_LABELS:={"":"随屋面","off":"无烟囱","brick_twin_pots":"双陶管","copper_cowl":"铜风帽"}
const TRIMS:=["timber_verge","stone_dentils"]
const TRIM_LABELS:={"":"原檐口","timber_verge":"木边板","stone_dentils":"齿饰石檐"}
const PORCHES:=["flower_pots","firewood_crate"]
const PORCH_LABELS:={"":"原门廊","flower_pots":"花盆小景","firewood_crate":"柴筐小景"}
static func valid(value:Variant)->bool:
	if value is Dictionary and not value.get("version") is bool and value.get("version") in [2,2.]:
		if value.size()!=2 or not value.get("slots") is Dictionary or value.slots.is_empty() or value.slots.size()>5:return false
		for slot:Variant in value.slots:
			if slot=="windows":
				if not window_valid(value.slots[slot]):return false
			elif slot=="dormer":
				if not roof_valid(value.slots[slot],DORMERS):return false
			elif slot=="chimney":
				if not roof_valid(value.slots[slot],CHIMNEYS):return false
			elif slot=="gable_trim":
				if not roof_valid(value.slots[slot],TRIMS):return false
			elif slot=="porch":
				if not roof_valid(value.slots[slot],PORCHES,"street_frontage"):return false
			else:return false
		return true
	return window_valid(value)
static func roof_valid(row:Variant,ids:Array,prototype:String="tiled_street")->bool:
	return row is Dictionary and row.size()==4 and row.get("version") in [1,1.] and not row.get("version") is bool and row.get("prototype")==prototype and row.get("id") in ids and integer(row.get("seed"))
static func window_valid(value:Variant)->bool:
	return value is Dictionary and value.size()==4 and value.get("version") in [1,1.] and not value.get("version") is bool and value.get("prototype")==PROTOTYPE and value.get("windows") is String and value.windows in IDS and integer(value.get("seed"))
static func slots(value:Dictionary)->Dictionary:
	return value.get("slots",{}).duplicate(true) if value.get("version")==2 else {"windows":value.duplicate(true)} if not value.is_empty() else {}
static func record(house:Dictionary,slot:String="windows")->Dictionary:return slots(house.get("architecture_variant",{})).get(slot,{})
static func seed_for(house:Dictionary)->int:return int(record(house).get("seed",0))
static func assign_slots(house:Dictionary,parts:Dictionary)->void:
	if parts.is_empty():house.erase("architecture_variant")
	elif parts.size()==1 and parts.has("windows"):house.architecture_variant=parts.windows
	else:house.architecture_variant={"version":2,"slots":parts}
static func normalize(value:Dictionary)->void:
	value.version=int(value.version)
	if value.version==1:value.seed=int(value.seed)
	else:
		for row:Dictionary in value.slots.values():row.version=int(row.version);row.seed=int(row.seed)
static func clear_windows(appearance:Dictionary)->void:
	var parts:=slots(appearance.get("architecture_variant",{}));parts.erase("windows");assign_slots(appearance,parts)
static func integer(value:Variant)->bool:
	return (value is int or value is float) and is_finite(float(value)) and value>=0 and value<=2147483647 and value==floorf(float(value))
static func selected(house:Dictionary)->String:
	return str(record(house).get("windows","")) if house.get("architecture","")==PROTOTYPE else ""
static func dormer(house:Dictionary)->String:return str(record(house,"dormer").get("id",""))
static func chimney(house:Dictionary)->String:return str(record(house,"chimney").get("id",""))
static func trim(house:Dictionary)->String:return str(record(house,"gable_trim").get("id",""))
static func porch(house:Dictionary)->String:return str(record(house,"porch").get("id",""))
static func porch_supported(city,house:Dictionary)->bool:return trim_supported(city,house)
static func set_porch(city,id:String,key:String)->Dictionary:
	var index:int=city._house_index(id)
	if index<0:return city._fail("房屋不存在")
	var house:Dictionary=city.houses[index]
	if key not in [""]+PORCHES or not key.is_empty() and not porch_supported(city,house):return city._fail("分层街屋与深窗街屋可选择门廊小景")
	if key==porch(house):return {"ok":true,"no_op":true}
	var before:Dictionary=city.snapshot();var parts:=slots(house.get("architecture_variant",{}))
	if key.is_empty():parts.erase("porch")
	else:parts.porch={"version":1,"prototype":"street_frontage","id":key,"seed":int(parts.get("porch",{}).get("seed",posmod(hash([id,house.origin,"porch/v1"]),2147483647)))}
	assign_slots(house,parts);city._commit(before,"更换门廊小景")
	return {"ok":true,"house_id":id,"message":"已换为"+str(PORCH_LABELS[key])}
static func trim_supported(city,house:Dictionary)->bool:
	return chimney_supported(city,house) and int(house.get("corner_bevel",0))==0 and int(house.get("overhang",0))==0 and int(house.get("balcony_arc",0))==0
static func set_trim(city,id:String,key:String)->Dictionary:
	var index:int=city._house_index(id)
	if index<0:return city._fail("房屋不存在")
	var house:Dictionary=city.houses[index]
	if key not in [""]+TRIMS or not key.is_empty() and not trim_supported(city,house):return city._fail("分层街屋与深窗街屋的瓦顶可选择檐口细节")
	if key==trim(house):return {"ok":true,"no_op":true}
	var before:Dictionary=city.snapshot();var parts:=slots(house.get("architecture_variant",{}))
	if key.is_empty():parts.erase("gable_trim")
	else:parts.gable_trim={"version":1,"prototype":"tiled_street","id":key,"seed":int(parts.get("gable_trim",{}).get("seed",posmod(hash([id,house.origin,"gable_trim/v1"]),2147483647)))}
	assign_slots(house,parts);city._commit(before,"更换山墙檐口细节")
	return {"ok":true,"house_id":id,"message":"已换为"+str(TRIM_LABELS[key])}
static func chimney_supported(city,house:Dictionary)->bool:
	return house.get("architecture","") in ["townhouse",PROTOTYPE] and not house.has("signature") and house.get("style","") not in ["timber","round_tower"] and (city.house_era(house) in ["pastoral","renaissance"] or house.get("architecture","")==PROTOTYPE and city.house_era(house) in ["clockwork","modern_eco"]) and is_zero_approx(preload("res://scripts/world/city_creation_house_hinge.gd").angle(house))
static func chimney_active(city,house:Dictionary)->bool:return not chimney(house).is_empty() and chimney_supported(city,house)
static func set_chimney(city,id:String,key:String)->Dictionary:
	var index:int=city._house_index(id)
	if index<0:return city._fail("房屋不存在")
	var house:Dictionary=city.houses[index]
	if key not in [""]+CHIMNEYS or not key.is_empty() and not chimney_supported(city,house):return city._fail("分层街屋与深窗街屋的瓦顶可选择烟囱")
	if key==chimney(house):return {"ok":true,"no_op":true}
	var before:Dictionary=city.snapshot();var parts:=slots(house.get("architecture_variant",{}))
	if key.is_empty():parts.erase("chimney")
	else:parts.chimney={"version":1,"prototype":"tiled_street","id":key,"seed":int(parts.get("chimney",{}).get("seed",posmod(hash([id,house.origin,"chimney/v1"]),2147483647)))}
	assign_slots(house,parts);city._commit(before,"更换烟囱细节")
	return {"ok":true,"house_id":id,"message":"已换为"+str(CHIMNEY_LABELS[key])}
static func dormer_supported(city,house:Dictionary)->bool:
	if not chimney_supported(city,house):return false
	var top:=-1
	for cell:Dictionary in house.cells:
		if cell.kind=="room":top=maxi(top,int(cell.level))
	var rooms:Array=house.cells.filter(func(c):return c.kind=="room" and int(c.level)==top)
	return rooms.any(func(a):return rooms.any(func(b):return absi(int(a.x)-int(b.x))+absi(int(a.z)-int(b.z))==1))
static func set_dormer(city,id:String,key:String)->Dictionary:
	var index:int=city._house_index(id)
	if index<0:return city._fail("房屋不存在")
	var house:Dictionary=city.houses[index]
	if key not in [""]+DORMERS or not key.is_empty() and not dormer_supported(city,house):return city._fail("分层街屋与深窗街屋的完整瓦顶可选择天窗")
	if key==dormer(house):return {"ok":true,"no_op":true}
	var before:Dictionary=city.snapshot();var parts:=slots(house.get("architecture_variant",{}))
	if key.is_empty():parts.erase("dormer")
	else:parts.dormer={"version":1,"prototype":"tiled_street","id":key,"seed":int(parts.get("dormer",{}).get("seed",posmod(hash([id,house.origin,"dormer/v1"]),2147483647)))}
	assign_slots(house,parts);city._commit(before,"更换天窗细节")
	return {"ok":true,"house_id":id,"message":"已换为"+str(DORMER_LABELS[key])}
static func supported(city,house:Dictionary)->bool:
	return house.get("architecture","")==PROTOTYPE and not house.has("signature") and house.get("style","") not in ["timber","round_tower"] and (city.house_era(house) in ["pastoral","clockwork","modern_eco"] or city.house_era(house)=="renaissance" and house.cells.any(func(c):return c.kind=="room" and int(c.level)>0))
static func set_choice(city,id:String,key:String,slot:String="windows")->Dictionary:
	if slot=="porch":return set_porch(city,id,key)
	if slot=="gable_trim":return set_trim(city,id,key)
	if slot!="windows":return city._fail("未知建筑细部槽")
	var index:int=city._house_index(id)
	if index<0:return city._fail("房屋不存在")
	var house:Dictionary=city.houses[index]
	if key not in [""]+IDS or not key.is_empty() and not supported(city,house):return city._fail("深窗街屋的完整墙面可选择窗部细节")
	if key==selected(house) and (not key.is_empty() or record(house).is_empty()):return {"ok":true,"no_op":true}
	var before:Dictionary=city.snapshot()
	var parts:=slots(house.get("architecture_variant",{}))
	if key.is_empty():parts.erase("windows")
	else:parts.windows={"version":1,"prototype":PROTOTYPE,"windows":key,"seed":int(parts.get("windows",{}).get("seed",posmod(hash([id,house.origin,"window_detail/v1"]),2147483647)))}
	assign_slots(house,parts)
	city._commit(before,"更换窗部细节")
	return {"ok":true,"house_id":id,"message":"已换为"+str(LABELS[key])}
static func write(city,result:Dictionary)->void:
	for house:Dictionary in city.houses:
		if house.has("architecture_variant"):result.schema=maxi(int(result.schema),schema_for(house.architecture_variant))
static func schema_for(value:Dictionary)->int:return PORCH_SCHEMA if value.get("slots",{}).has("porch") else TRIM_SCHEMA if value.get("slots",{}).has("gable_trim") else CHIMNEY_SCHEMA if value.get("slots",{}).has("chimney") else SLOT_SCHEMA if value.version==2 else SCHEMA
static func validate(city,data:Dictionary)->Dictionary:
	for house:Variant in data.get("houses",[]):
		if house is Dictionary and house.has("architecture_variant"):
			if not valid(house.architecture_variant) or data.schema<schema_for(house.architecture_variant):return city._fail("建筑细部需要对应版本及有效的独立配方")
	return {"ok":true}
