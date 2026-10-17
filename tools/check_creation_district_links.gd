extends SceneTree
## Real State restore/edit APIs and the production Network; no graph mocks,
## scene nodes, GPU, audio fixture or personal save access.
const State = preload("res://scripts/world/city_creation_state.gd")
const Network = preload("res://scripts/world/city_creation_network.gd")
const Links = preload("res://scripts/world/city_creation_district_links.gd")
const OUT := "res://验证记录/街坊连奏_2026-10-16/links.json"
var checks: Array = []
var failures: Array[String] = []
var evidence: Dictionary = {}
var planner := Links.new()

func _initialize() -> void:
	var error := DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT.get_base_dir()))
	if error!=OK:
		push_error("Cannot create district links evidence directory: "+str(error))
		quit(1)
		return
	_run.call_deferred()

func _check(ok: bool,label: String) -> void:
	checks.append({"label":label,"passed":ok})
	if not ok:
		failures.append(label)
		push_error(label)

func _network(city: RefCounted) -> RefCounted:
	var network := Network.new()
	network.state=city
	network._build_graph()
	return network

func _pairs(city: RefCounted) -> Array[Dictionary]:
	return planner.derive(city,_network(city))

func _paint(city: RefCounted,points: Array[Vector2],width: float,style: String) -> String:
	var result: Dictionary=city.add_district(points,width,style)
	if not bool(result.ok):
		_check(false,"district fixture accepted by real State: "+str(result))
	return str(result.get("district_id",""))

func _layout(origins: Array[Vector2],roads: Array) -> RefCounted:
	var city := State.new()
	var data: Dictionary=city.snapshot()
	for index in range(origins.size()):
		var at: Vector2=origins[index]
		data.houses.append({"id":"h%d"%(index+1),"name":"测试住户%d"%(index+1),"origin":[at.x,at.y],"palette":0,"seed":81000+index,
			"role":"residential","cells":[{"id":"c%d"%(index+1),"x":0,"z":0,"level":0,"kind":"room","source":"seed"}]})
	for index in range(roads.size()):
		var row: Dictionary=roads[index]
		data.roads.append({"id":"r%d"%(index+1),"points":row.points,"width":1.25,"bridge":bool(row.get("bridge",false)),"source":"seed"})
	data.next_house_id=origins.size()+1
	data.next_cell_id=origins.size()+1
	data.next_road_id=roads.size()+1
	data.high_watermark.house=origins.size()
	data.high_watermark.cell=origins.size()
	data.high_watermark.road=roads.size()
	var result: Dictionary=city.restore(data)
	if not bool(result.ok):
		_check(false,"legacy layout accepted by strict State restore: "+str(result))
		return null
	return city

func _compact() -> RefCounted:
	return _layout([Vector2(-14,-10),Vector2(-8,-10)],[{"points":[[-15,-8.45],[-7,-8.45]]}])

func _paint_compact(city: RefCounted) -> Array[String]:
	return [_paint(city,[Vector2(-14,-10)],8.0,"warm"),_paint(city,[Vector2(-8,-10)],8.0,"deep")]

func _vertical(distance: float) -> RefCounted:
	var city := _layout([Vector2(-13,-10),Vector2(-13,-10+distance)],
		[{"points":[[-13,-8.45],[-10,-8.45],[-10,-8.45+distance],[-13,-8.45+distance]]}])
	if city!=null:
		_paint(city,[Vector2(-13,-10),Vector2(-13,-10+distance*.35)],8.0,"warm")
		_paint(city,[Vector2(-13,-10+distance),Vector2(-13,-10+distance*.65)],8.0,"deep")
	return city

func _run() -> void:
	var city: RefCounted = State.new()
	city.initialize()
	var d1 := _paint(city,[Vector2(-8,-6)],10.0,"warm")
	var d2 := _paint(city,[Vector2(-8,0)],10.0,"deep")
	var network := _network(city)
	_check(network.connected_houses.has("h1") and network.connected_houses.has("h3"),"default real house doors connect to production roads")
	var pairs: Array[Dictionary]=planner.derive(city,network)
	_check(pairs.size()==1,"default two nonempty different districts yield one actual-road pair")
	if pairs.size()!=1: _finish();return
	_check(pairs[0].id=="district_link_"+d1+"_"+d2,"pair identity derives from sorted district identities")
	_check(pairs[0].route.size()>1 and float(pairs[0].distance)<=22.0,"default link carries a finite real shortest route")
	_check(pairs[0].from_style!=pairs[0].to_style and float(pairs[0].empty_gap)<=2.7,"default representative styles differ and sampled road gap is bounded")
	evidence.default=pairs.duplicate(true)

	city=_compact()
	if city==null: _finish();return
	var ids := _paint_compact(city)
	pairs=_pairs(city)
	_check(pairs.size()==1,"small legal west-bank layout produces a link")
	if pairs.size()!=1: _finish();return
	var baseline: Array[Dictionary]=pairs.duplicate(true)
	var authored: Dictionary=city.snapshot()
	_check(city.set_district_style(ids[1],"warm").ok and _pairs(city).is_empty(),"same musical style suppresses cross-district pair")
	_check(city.undo().ok and _pairs(city)==baseline,"undo style restores exact derived link")
	_check(city.remove_district(ids[1]).ok and _pairs(city).is_empty(),"unassigned destination house supplies no pair")
	_check(city.undo().ok and _pairs(city)==baseline,"undo district removal restores original pair")
	var overlay := _paint(city,[Vector2(-14,-10),Vector2(-8,-10)],8.0,"market")
	_check(city.district_for_house("h1").id==overlay and city.district_for_house("h2").id==overlay,"later capsule paint owns both real origins")
	_check(_pairs(city).is_empty(),"houses in the same overpainted district do not pair")
	_check(city.undo().ok and _pairs(city)==baseline,"undo overpaint restores prior owners and link identity")
	var third := _paint(city,[Vector2(-11,-8.45)],3.2,"weave")
	_check(city.district_for_house("h1").id==ids[0] and city.district_for_house("h2").id==ids[1],"third district lies on route without replacing either house owner")
	_check(not third.is_empty() and _pairs(city).is_empty(),"intervening third nonempty district rejects pair")
	_check(city.undo().ok and _pairs(city)==baseline,"undo intervening district restores exact route")
	_check(city.set_house_name("h1","新名小屋").ok and city.set_district_name(ids[1],"新名街坊").ok,"names change through real APIs")
	_check(_pairs(city)==baseline,"house and district names do not relabel pair or route")
	_check(city.set_house_palette("h2",2).ok and _pairs(city)==baseline,"palette edit leaves pair and route identical")
	_check(city.set_house_role("h1","bakery").ok and _pairs(city)==baseline,"real role edit leaves geometric pair identity and route identical")
	var restored := State.new()
	var parsed: Variant=JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))
	_check(parsed is Dictionary and restored.restore(parsed).ok,"full precision JSON restores via strict State API")
	_check(_pairs(restored)==baseline,"fresh production Network after JSON derives exactly the same pairs")
	_check(city.roads==authored.roads and city.houses[0].origin==authored.houses[0].origin,"metadata and role changes preserve authored road and origins")

	city=_layout([Vector2(-14,-10),Vector2(-8,-10)],[{"points":[[-15,-8.45],[-13,-8.45]]},{"points":[[-9,-8.45],[-7,-8.45]]}])
	if city==null: _finish();return
	_paint_compact(city)
	network=_network(city)
	_check(network.connected_houses.size()==2,"both houses independently connect to real disconnected road components")
	_check(network._route(str(network.connected_houses.get("h1","")),str(network.connected_houses.get("h2",""))).is_empty(),"production Dijkstra confirms components have no route")
	_check(planner.derive(city,network).is_empty(),"independent connectivity never fabricates district link")

	city=_layout([Vector2(-14,-10),Vector2(-8,-10)],[{"points":[[-14,-8.45],[-14,7],[-8,7],[-8,-8.45]]}])
	if city==null: _finish();return
	_paint(city,[Vector2(-14,-10),Vector2(-14,7),Vector2(-11,7)],3.2,"warm")
	_paint(city,[Vector2(-8,-10),Vector2(-8,7),Vector2(-11,7)],3.2,"deep")
	network=_network(city)
	var route: Array[Vector3]=network._route(str(network.connected_houses.get("h1","")),str(network.connected_houses.get("h2","")))
	var length := 0.0
	for index in range(1,route.size()): length+=Vector2(route[index].x,route[index].z).distance_to(Vector2(route[index-1].x,route[index-1].z))
	_check(route.size()>1 and length>22.0,"nearby origins have an actual detour longer than 22 metres")
	_check(planner.derive(city,network).is_empty(),"actual route length rejects geographically close pair")
	evidence.long_detour={"distance":length,"route":route}

	city=_vertical(14.0)
	if city==null: _finish();return
	pairs=_pairs(city)
	_check(pairs.size()==1,"exact 14 metre house-origin boundary remains eligible")
	_check(not pairs.is_empty() and float(pairs[0].distance)<=22.0,"14 metre boundary layout also meets real route limit")
	city=_vertical(14.05)
	if city==null: _finish();return
	_check(_network(city).connected_houses.size()==2,"outside house-range fixture still connects both actual doors")
	_check(_pairs(city).is_empty(),"origins beyond 14 metres do not pair")

	city=_layout([Vector2(-15,-10),Vector2(-3,-10)],[{"points":[[-16,-8.45],[-2,-8.45]]}])
	if city==null: _finish();return
	_paint(city,[Vector2(-15,-10)],6.0,"warm")
	_paint(city,[Vector2(-3,-10)],6.0,"deep")
	network=_network(city)
	_check(network.connected_houses.size()==2 and city.district_for_house("h1").size()>0 and city.district_for_house("h2").size()>0,"empty-gap fixture has two assigned connected houses")
	_check(city.district_at(Vector2(-9,-8.45)).is_empty(),"actual road midpoint crosses unassigned ground")
	_check(planner.derive(city,network).is_empty(),"continuous unassigned route gap over 2.7 metres rejects link")

	city=_layout([Vector2(-15,-10),Vector2(-12,-10),Vector2(-6,-10),Vector2(-3,-10)],[{"points":[[-16,-8.45],[-2,-8.45]]}])
	if city==null: _finish();return
	_paint(city,[Vector2(-15,-10),Vector2(-12,-10)],6.0,"warm")
	_paint(city,[Vector2(-6,-10),Vector2(-3,-10)],6.0,"deep")
	pairs=_pairs(city)
	_check(_network(city).connected_houses.size()==4,"four actual houses offer multiple same-district representatives")
	_check(pairs.size()==1,"one district pair is emitted despite multiple representative candidates")
	_check(not pairs.is_empty() and pairs[0].from_id=="h2" and pairs[0].to_id=="h3" and absf(float(pairs[0].distance)-6.0)<0.001,"shortest actual six metre representative wins")
	evidence.representatives=pairs.duplicate(true)

	city=_layout([Vector2(-3,-10),Vector2(9,-10)],[{"points":[[-4,-8.45],[-2,-8.45]]},{"points":[[8,-8.45],[10,-8.45]]},{"points":[[-2,-8.45],[8,-8.45]],"bridge":true}])
	if city==null: _finish();return
	_paint(city,[Vector2(-3,-10)],10.0,"warm")
	_paint(city,[Vector2(9,-10)],10.0,"deep")
	pairs=_pairs(city)
	_check(city.water_clearance(Vector2(State.river_x(-8.45),-8.45))<0.0,"bridge fixture really crosses the existing river")
	_check(pairs.size()==1,"real cross-river bridge joins the two district road components")
	var bridge_pair: Array[Dictionary]=pairs.duplicate(true)
	_check(city.remove_road("r3").ok and _network(city).connected_houses.size()==2,"bridge removal retains each bank's independent connected door")
	_check(_pairs(city).is_empty(),"deleting the only real bridge removes district pair")
	_check(city.undo().ok and _pairs(city)==bridge_pair,"undo restores bridge and exact pair identity/route")
	evidence.bridge=bridge_pair
	_finish()

func _finish() -> void:
	var report := {"ok":failures.is_empty(),"check_count":checks.size(),"checks":checks,"failures":failures,"evidence":evidence,
		"command":"Godot_v4.7.2-stable_win64_console.exe --headless --path . --script tools/check_creation_district_links.gd",
		"scope":"Real State schemas/edit/history and production Network graph/Dijkstra only; no GPU/audio or personal save access."}
	var file := FileAccess.open(OUT,FileAccess.WRITE)
	if file==null:
		push_error("Cannot write district links evidence: "+str(FileAccess.get_open_error()))
		quit(1)
		return
	file.store_string(JSON.stringify(report,"\t",true,true))
	var error := file.get_error()
	file.close()
	if error!=OK:
		push_error("Cannot complete district links evidence: "+str(error))
		quit(1)
		return
	print("CREATION_DISTRICT_LINKS ",JSON.stringify(report))
	if failures.is_empty(): print("CREATION_DISTRICT_LINKS PASS ",checks.size())
	quit(0 if failures.is_empty() else 1)
