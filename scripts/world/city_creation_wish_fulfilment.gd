extends RefCounted
## A fulfilled, explicitly accepted site wish earns one conserved batch.
## Reading/opening a work never arms a wish or grants a batch.
var life:Node3D
var pending:Dictionary={}
var epoch:=-1
func _init(owner:Node3D)->void:
	life=owner;epoch=life.state._wish_epoch
func arm(id:String,kind:String)->void:
	if epoch!=life.state._wish_epoch:pending.clear();epoch=life.state._wish_epoch
	if kind not in ["water","tree"] or life.state.wish_rewards.get(id,{}).has(kind):return
	var index:int=life.state._house_index(id)
	if index<0 or str(life.state.houses[index].role)!=("bakery" if kind=="water" else "workshop"):return
	if satisfied(life.state,id,kind):return
	pending[id]=kind
func poll()->void:
	if epoch!=life.state._wish_epoch:pending.clear();epoch=life.state._wish_epoch
	if life.last_revision!=life.state.revision:return
	for id:String in pending.keys():
		var kind:=str(pending[id]);var index:int=life.state._house_index(id)
		if index<0 or str(life.state.houses[index].role)!=("bakery" if kind=="water" else "workshop") or life.state.wish_rewards.get(id,{}).has(kind):
			pending.erase(id);continue
		if not life.house_connected(id) or not satisfied(life.state,id,kind):continue
		var quantity:=grant(life.state,id,kind)
		if quantity==0:continue
		pending.erase(id)
		if kind=="water":
			if life.production_callback.is_valid():life.production_callback.call(id,quantity)
		else:
			if life.craft_callback.is_valid():life.craft_callback.call("crafted",id,"",quantity)
			for worker:Dictionary in life.workshop.workers:
				if str(worker.workshop_id)==id and str(worker.phase)=="crafting":
					life.worker_lod.flush(worker)
					# Reserve this actual object and use the ordinary 3D route;
					# no simulation time is advanced and no citizen is teleported.
					life.workshop._craft(worker,0.)
		if life.wish_callback.is_valid():life.wish_callback.call(id,kind,quantity)
static func satisfied(city:RefCounted,id:String,kind:String)->bool:
	var blessing:Dictionary=city.site_blessing(id)
	return bool(blessing.get("blessed",false)) if kind=="water" else int(blessing.get("trees",0))>=3
static func grant(city:RefCounted,id:String,kind:String)->int:
	if kind not in ["water","tree"] or city.wish_rewards.get(id,{}).has(kind):return 0
	var index:int=city._house_index(id)
	if index<0 or city.houses[index].has("signature") or str(city.houses[index].role)!=("bakery" if kind=="water" else "workshop") or not satisfied(city,id,kind):return 0
	var quantity:=0
	if kind=="water":
		quantity=city.bakery_batch_size(id)
		if not city.produce_bread(id,quantity):return 0
	else:
		quantity=city.produce_workshop_batch(id)
		if quantity==0:return 0
	var row:Dictionary=city.wish_rewards.get(id,{})
	row[kind]=quantity;city.wish_rewards[id]=row;city._craft_changed()
	return quantity
static func validate(city:RefCounted,data:Dictionary,issued:int)->Dictionary:
	var rows:Variant=data.get("wish_rewards",{})
	if not rows is Dictionary or (data.has("wish_rewards") and data.schema<19):return city._fail("心愿履历版本或结构无效")
	for id:Variant in rows:
		if not city._valid_id(id,"h",{}) or int(str(id).substr(1))>issued:return city._fail("心愿工坊身份无效")
		var row:Variant=rows[id]
		if not row is Dictionary or row.is_empty() or row.size()>2:return city._fail("心愿领取字段无效")
		for kind:Variant in row:
			if kind not in ["water","tree"] or not city._is_integer(row[kind]) or int(row[kind])<=0:return city._fail("心愿领取数量无效")
			var supply:Dictionary=data.get("bakery_supply" if kind=="water" else "workshop_supply",{}).get(id,{})
			if int(supply.get("produced",0))<int(row[kind]):return city._fail("心愿领取缺少实际入库记录")
	return {"ok":true}
