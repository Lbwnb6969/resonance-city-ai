extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Earned=preload("res://tools/fixtures/city_creation_landmark_adjacency_fixture.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var city:=State.new();check(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))).ok,"six earned landmarks restore")
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);life._process(.001)
	check(life.tram.corridor_house("h104") and city.transit_efficiency("h104")==1.3 and city.transit_efficiency("h115")==1.,"depot efficiency uses connected six-metre rail corridor, excluding remote workshop")
	check(is_equal_approx(float(life.cafe.status("h103").duration),6./1.3),"actual corridor cafe exposes a thirty-percent-faster six-unit service")
	var new_shop:Dictionary={}
	for at:Vector2 in [Vector2(23,-8.15),Vector2(26,-8.15),Vector2(28,-8.15)]:
		if city.validate_add_house(at).ok:new_shop=city.add_house(at);break
	check(new_shop.get("ok",false) and city.set_house_role(str(new_shop.get("house_id","")),"workshop").ok,"build actual workshop near an existing dispatched rail")
	if new_shop.get("ok",false):
		life._process(.001)
		check(life.house_connected(str(new_shop.house_id)) and life.tram.corridor_house(str(new_shop.house_id)) and city.transit_efficiency(str(new_shop.house_id))==1.3,"same rail graph refreshes newly connected workshop membership")
	city.set_house_palette("h104",2);life._process(.001)
	check(city.transit_efficiency("h104")==1.3,"route-preserving appearance edit retains depot efficiency")
	var unchanged:Dictionary=city.snapshot()
	check(city.restore(unchanged).ok,"restore the same authored revision through the supported State API")
	life._process(.001)
	check(city.transit_efficiency("h104")==1.3,"same-revision restore republishes an unchanged valid transit corridor")
	var enhanced:=city.site_production_multiplier("h104")
	var depot:="";var hall:=""
	for house:Dictionary in city.houses:
		if house.get("signature","")=="clockwork_depot":depot=str(house.id)
		if house.get("signature","")=="floating_amphitheater":hall=str(house.id)
	check(city.remove_house(depot).ok,"recycle the real depot through normal transaction")
	life._process(.001)
	check(city.transit_efficiency("h104")==1. and is_equal_approx(city.site_production_multiplier("h104")*1.3,enhanced) and is_equal_approx(float(life.cafe.status("h103").duration),6.),"removing depot withdraws exact production and tea bonus")
	check(city.undo().ok,"undo restores the actual depot")
	life._process(.001);check(city.transit_efficiency("h104")==1.3,"restored depot republishes its real corridor")
	var before:=int(city.life_progress.concerts)
	check(life.invite_landmark_movement(hall).ok,"waterfront landmark starts its actual eight-phrase movement")
	for i:int in range(1600):
		if life.concert_status().phase=="idle":break
		life._process(.5)
	check(int(city.life_progress.concerts)==before+1 and life._finale.get("active",false) and not life._finale.get("checked_house_ids",[]).is_empty(),"landmark movement finale checks real afterglowing low-tier houses and publishes the water wave")
	check(city.set_journey_checkpoint(life.checkpoint()).ok and State.new().restore(city.snapshot()).ok,"depot changes and real finale service history round trip")
	life.free()
	var academy:RefCounted=Earned.build(self)
	var base:int=academy.workshop_batch_size("h3")
	for at:Vector2 in [Vector2(-17.8,10.5),Vector2(-14,7),Vector2(-12.8,3.2)]:check(academy.add_house(at).ok,"author real academy-neighbor chain")
	var placed:Dictionary=academy.place_signature("music_academy",Vector2(-18,15))
	check(placed.ok and academy.district_for_house("h3").is_empty() and academy.workshop_batch_size("h3")==base*2,"music academy doubles its actual natural cluster without requiring painted districts")
	print("SIGNATURE_CLOSURE ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}))
	quit(0 if failures.is_empty() else 1)
