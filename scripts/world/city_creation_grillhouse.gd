extends RefCounted
## Food identity and real roast inventory; old bread records remain their own ledger.
const SCHEMA:=26
const KIND:="grill_v1"
const META:="grill_supply"
static func active_house(house:Dictionary)->bool:return house.get("role","")=="bakery" and house.get("food_kind","")==KIND
static func active(city,id:String)->bool:
	var index:int=city._house_index(id)
	return index>=0 and active_house(city.houses[index])
static func select(city,id:String,key:String)->Dictionary:
	var index:int=city._house_index(id)
	if index<0:return city._fail("房屋不存在")
	var house:Dictionary=city.houses[index]
	if key not in ["",KIND] or house.has("signature") or not city.can_assign_role("bakery"):return city._fail("请选择一栋普通房屋安排食坊")
	if house.role=="bakery" and house.get("food_kind","")==key:return {"ok":true,"no_op":true}
	var before:Dictionary=city.snapshot();city.return_craft(id);house.role="bakery"
	if key.is_empty():house.erase("food_kind")
	else:house.food_kind=key
	city._prune_missing_journeys();city._commit(before,"安排炭火烤肉坊" if not key.is_empty() else "安排面包坊")
	return {"ok":true,"house_id":id,"message":"炭火烤肉坊已安排" if not key.is_empty() else "面包坊已安排"}
static func status(city,id:String)->Dictionary:
	var index:int=city._house_index(id);var row:Dictionary=city.get_meta(META,{}).get(id,{})
	return {"stock":int(row.get("stock",0)),"produced":int(row.get("produced",0)),"served":int(row.get("served",0)),"gifted":0,"capacity":city.bakery_capacity(id),"batch_size":2,"open":index>=0 and active_house(city.houses[index]) and city.houses[index].get("bakery_open",true),"food":"烤肉"}
static func produce(city,id:String,quantity:int)->bool:
	if not active(city,id) or city.CreationPolicy.Save.Progression.paused(city):return false
	var row:=status(city,id)
	if not row.open or quantity<=0 or row.stock+quantity>row.capacity:return false
	var shops:Dictionary=city.get_meta(META,{});shops[id]={"stock":row.stock+quantity,"produced":row.produced+quantity,"served":row.served};city.set_meta(META,shops)
	city.life_progress_dirty=true;city.dirty=true;return true
static func serve(city,id:String,home_id:String)->bool:
	if not active(city,id) or city.CreationPolicy.Save.Progression.paused(city):return false
	var row:=status(city,id)
	if row.stock<=0:return false
	var shops:Dictionary=city.get_meta(META,{});shops[id]={"stock":row.stock-1,"produced":row.produced,"served":row.served+1};city.set_meta(META,shops);city.record_life_event("purchases")
	var home:int=city._house_index(home_id)
	if home>=0 and city.houses[home].role=="residential" and not city.has_cafe_credit(home_id):
		var credit:Dictionary=city.cafe_credits.get(home_id,{"earned":0,"spent":0});city.cafe_credits[home_id]={"earned":int(credit.earned)+1,"spent":int(credit.spent)}
	return true
static func write(city,data:Dictionary)->void:
	var shops:Dictionary=city.get_meta(META,{})
	if not shops.is_empty():data.grill_supply={"version":1,"shops":shops.duplicate(true)}
	if not shops.is_empty() or city.houses.any(func(h):return h.has("food_kind")):data.schema=maxi(int(data.schema),SCHEMA)
static func apply(city,data:Dictionary,history:bool)->void:
	if history:return
	var shops:Dictionary=data.get("grill_supply",{}).get("shops",{}).duplicate(true)
	for row:Dictionary in shops.values():
		for field:String in row:row[field]=int(row[field])
	city.set_meta(META,shops)
static func integer(value:Variant)->bool:
	return (value is int or value is float) and is_finite(float(value)) and value>=0 and value<=9007199254740991 and value==floorf(float(value))
static func validate(city,data:Dictionary)->Dictionary:
	for house:Variant in data.houses:
		if house is Dictionary and house.has("food_kind") and (data.schema<SCHEMA or house.food_kind!=KIND):return city._fail("食坊种类需要版本26及有效配方")
	if not data.has("grill_supply"):return {"ok":true}
	var ledger:Variant=data.grill_supply
	if data.schema<SCHEMA or not ledger is Dictionary or ledger.size()!=2 or not integer(ledger.get("version")) or ledger.version!=1 or not ledger.get("shops") is Dictionary:return city._fail("烤肉存档结构无效")
	var issued:int=int(data.get("high_watermark",{}).get("house",0))
	for id:Variant in ledger.shops:
		if not id is String or not id.begins_with("h") or not id.substr(1).is_valid_int() or str(int(id.substr(1)))!=id.substr(1) or int(id.substr(1))<1 or int(id.substr(1))>issued:return city._fail("烤肉坊身份无效")
		var row:Variant=ledger.shops[id]
		if not row is Dictionary or row.size()!=3 or not integer(row.get("stock")) or not integer(row.get("produced")) or not integer(row.get("served")) or row.stock+row.served!=row.produced:return city._fail("烤肉库存收支无效")
	return {"ok":true}
