extends RefCounted
const Supply=preload("res://scripts/world/city_creation_civic_supply.gd")
const Receipts=preload("res://scripts/world/city_creation_harmony_receipts.gd")
const KINDS:={"garden_cafe":"bloom","atelier":"arcade","clockmaker":"chime"}
static func same_geometry(city:RefCounted,houses:Array,roads:Array)->bool:
	if city.roads!=roads or city.houses.size()!=houses.size():return false
	for i in range(houses.size()):
		for field:String in ["id","origin","cells","base_y","yaw","architecture","architecture_variant"]:
			if city.houses[i].get(field)!=houses[i].get(field):return false
	return true
static func observe(life:Node3D,baseline:bool=false)->void:
	var city:RefCounted=life.state;var key:=[city.get_instance_id(),city._wish_epoch]
	var view:Dictionary=city.get_meta("civic_debut",{})
	if baseline or view.get("epoch",[])!=key:
		view={"epoch":key,"roles":{}};baseline=true
	var old:Dictionary=view.roles;var current:Dictionary={}
	for house:Dictionary in city.houses:
		if house.role not in KINDS:continue
		var id:=str(house.id);var kind:String=KINDS[house.role]
		var slot:=id+":"+kind
		var ready:bool=Supply.ready(city,house) and (baseline or life.house_connected(id));current[slot]=ready
		if baseline or not ready or bool(old.get(slot,false)) or not life.house_connected(id):continue
		var receipt:="debut/"+id+"/"+kind
		if int(city.harmony_journey.get("receipts",{}).get(receipt,0))>0:continue
		var quantity:=0 if kind=="bloom" else 1
		if quantity>0 and not city.produce_craft(id,quantity):current[slot]=false;continue
		Receipts.initialize(city);city.harmony_journey.receipts[receipt]=1
		city.dirty=true;city.life_progress_dirty=true
		if quantity>0 and life.craft_callback.is_valid():life.craft_callback.call("crafted",id,"",quantity)
		if life.wish_callback.is_valid():life.wish_callback.call(id,kind,quantity)
	view.roles=current;city.set_meta("civic_debut",view)
static func poll(life:Node3D,baseline:bool=false)->void:
	if not baseline:Supply.pump(life)
	observe(life,baseline)
static func copy(kind:String,quantity:int)->String:
	return {"water":"活水已到，%d份热面包出炉。"%quantity,"tree":"良木已成林，%d件匠作已备好送往邻家。"%quantity,"bloom":"花水相伴，茶席已备好，静候街坊入座。","arcade":"廊下有了光，书院的第一幅画卷已装好。","chime":"街巷有了节拍，第一座八音盒已备好。"}.get(kind,"")
static func progress(city:RefCounted,id:String)->int:
	return int(city.bakery_supply.get(id,{}).get("produced",0))+int(city.workshop_supply.get(id,{}).get("produced",0))+int(city.cafe_progress.get(id,{}).get("groups",0))
static func encore(demo:Node3D,id:String,ambient:bool=false)->bool:
	var city:RefCounted=demo.state
	if Supply.status(city,id).tier<1:return false
	var count:=progress(city,id);var key:="encore_progress/"+id
	if count<=int(city.harmony_journey.get("receipts",{}).get(key,0)):return false
	var now:float=demo.life.time
	if now<float(city.get_meta("encore_next",0.)):return false
	Receipts.initialize(city);city.harmony_journey.receipts[key]=count
	city.HarmonyJourney.add_harmony_xp(city.harmony_journey,25,74001,city.era_unlocks)
	city.dirty=true;city.life_progress_dirty=true;city.set_meta("encore_next",now+18.)
	var members:Array=city.natural_clusters().get(id,{}).get("members",[id])
	demo.get_meta("juice_feedback").enqueue({"kind":"encore","source":id,"members":members,"label":"街坊返场" if ambient else "再来一曲"})
	demo.music.play_house(id);demo.life.greet_house(id)
	var events:Array=city.get_meta("encore_events",[]);events.append({"id":id,"ambient":ambient,"progress":count,"time":now})
	if events.size()>64:events.pop_front()
	city.set_meta("encore_events",events);return true
static func tick(juice:Node)->void:
	var demo:Node3D=juice.demo;var city:RefCounted=demo.state
	preload("res://scripts/audio/city_creation_civic_music.gd").tick(demo)
	var key:=[city.get_instance_id(),city._wish_epoch]
	var clock:Dictionary=juice.get_meta("encore_clock",{})
	if clock.get("epoch",[])!=key:clock={"epoch":key,"next":demo.life.time+48.,"pluck":demo.music._pluck_serial}
	if int(clock.pluck)!=demo.music._pluck_serial:
		clock.pluck=demo.music._pluck_serial
		encore(demo,str(demo.music._pluck_active.get("house_id","")))
	if demo.life.time>=float(clock.next):
		clock.next=demo.life.time+48.
		for house:Dictionary in city.houses:
			var id:=str(house.id)
			if not demo.town.house_roots.has(id) or demo.music.acoustic.focus_weight(id)<=0.:continue
			if encore(demo,id,true):break
	juice.set_meta("encore_clock",clock)
