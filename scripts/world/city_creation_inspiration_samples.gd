extends RefCounted
## Free spatial expressions, anchored to actual piers and Ionic stoa columns.
const Street=preload("res://scripts/world/city_creation_street_wonder_plan.gd")
const Ancient=preload("res://scripts/world/city_creation_ancient_extension_plan.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const IDS:=["lantern_bridge_echo","arcade_market"]
static func rank(city,id:String)->int:return int(city.harmony_journey.get("ranks",{}).get(id,0))
static func plans(city)->Array[Dictionary]:
	var key:=[city.revision,city._wish_epoch,city.creative_settings.get("creation_policy","legacy")]
	var cached:Dictionary=city.get_meta("inspiration_sample_plan",{})
	if cached.get("key",[])==key:return cached.rows
	var rows:Array[Dictionary]=[]
	if city.CreationPolicy.is_free(city):
		for pier:Dictionary in Street.derive(city).piers:
			var basis:=Basis(Vector3.UP,pier.yaw)
			var at:=Vector3(pier.at.x,pier.y,pier.at.y)+basis*Vector3(-.37,.16,pier.length*.36)
			rows.append({"card":IDS[0],"kind":"pier_lantern","house_id":str(pier.house_id),"position":at,"yaw":pier.yaw})
		for house:Dictionary in city.houses:
			if city.house_era(house)!="pastoral" or house.get("architecture","")!="ionic_stoa" or house.get("style","") in ["timber","round_tower"] or house.has("signature"):continue
			var plan:=Ancient.massing(city,house)
			if plan.is_empty():continue
			var columns:Array[Vector3]=[]
			for side:float in [-1.,1.]:
				var design:Vector2=plan.center+Vector2(side*(plan.width*.5-.20),plan.depth*.5+.58)
				var point:=Frame.point(house,design)
				columns.append(Vector3(point.x,float(house.get("base_y",0.))+.10,point.y))
			rows.append({"card":IDS[1],"kind":"column_vines","house_id":str(house.id),"position":columns[0],"columns":columns,"yaw":Frame.yaw(house)})
	city.set_meta("inspiration_sample_plan",{"key":key,"rows":rows});return rows
static func for_source(city,source:String)->String:
	for row:Dictionary in plans(city):
		if row.house_id==source:return row.card
	return ""
static func latch(state:Dictionary,ctx:Dictionary,cycle:int)->void:
	if not state.has("inspiration_cycle") or cycle>int(state.inspiration_cycle):
		state.inspiration_cycle=cycle;state.inspiration=str(ctx.get("inspiration",""))
	state.answer_material=posmod(int(state.material)+(1 if state.inspiration==IDS[0] else 2 if state.inspiration==IDS[1] else 0),3)
static func describe(city)->String:
	return "自由创作 · 空间微景，无需手札阶数。\n栈桥小灯：真实临水栈桥的木桩添灯，下一乐句使用柔和回答。\n柱廊细藤：田园爱奥尼长馆的边柱攀藤，下一乐句使用交织回答。\n提灯桥影研习%d阶 · 连拱市集研习%d阶：仅列原有记录。\n经典旧城保留原貌；开启自由创作后按空间显示。收起自动装饰保留音乐与已得权益。"%[rank(city,IDS[0]),rank(city,IDS[1])]
