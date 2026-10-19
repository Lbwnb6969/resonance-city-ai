extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_regional_echo_fixture.gd")
const Golden=preload("res://tools/fixtures/city_creation_golden_corridor_fixture.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Examples=preload("res://scripts/world/city_creation_examples.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _life(city:RefCounted)->Node3D:
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);return life
func _run()->void:
	var scene:=Fixture.build();var city:RefCounted=scene.city;var life:=_life(city)
	var ids:Array=scene.districts;var base:float=city.site_production_multiplier(scene.shop)
	var regions:Array=[]
	for row:Dictionary in city.regional_echo().nodes.values():regions.append(row.region)
	regions.sort();_check(regions==["east","garden","highland","west"],"actual two banks, raised plateau and authored pond form four distinct terrain voices")
	_check(city.regional_echo().tier==0 and not city.snapshot().has("regional_trips"),"connected roads and occupied districts alone grant no completed-flow reward or new save field")
	city.reward_completed_district_reply(ids[0],ids[1])
	_check(city.regional_echo().tier==2 and is_equal_approx(city.site_production_multiplier(scene.shop)/base,1.25),"first real completed two-bank reply raises actual workshop production by 25 percent")
	_check(is_equal_approx(city.service_radius(22.),22.) and city.regional_echo().variant==1,"two regions unlock the B texture without claiming the three-region radius")
	city.reward_completed_district_reply(ids[1],ids[2])
	_check(city.regional_echo().tier==3 and is_equal_approx(city.service_radius(22.),28.6) and is_equal_approx(city.concert_radius(""),28.6),"third completed terrain voice expands original craft and concert radii by 30 percent")
	city.resonance_afterglow.clear()
	for step in range(3000):
		life._process(.05)
		if city.workshop_status(scene.shop).delivered>0:break
	_check(city.workshop_status(scene.shop).delivered>0 and city.afterglow_remaining(scene.homes[0])>28.,"a real artisan makes carries and installs an object, gifting thirty seconds of household glow")
	var glow:float=city.afterglow_remaining(scene.homes[0])
	_check(not city.complete_craft(scene.shop,scene.homes[0],scene.homes[0]) and city.afterglow_remaining(scene.homes[0])==glow,"replaying completion without cargo cannot mint a second reward")
	city.reward_completed_district_reply(ids[2],ids[3])
	_check(city.regional_echo().tier==4 and city.regional_echo().prestige,"four different terrain and instrument identities activate the global prestige qualification")
	_check(city.Quality.prestige(city,city.houses[0]) and city.Quality.eligible({"food":false,"craft":false,"concert":false,"tea":false,"culture":false,"relay":false},true,true,true)==1,"global qualification retains every real food craft and performance requirement")
	var saved:Dictionary=city.snapshot();var cold:=State.new();var restored:Dictionary=cold.restore(JSON.parse_string(JSON.stringify(saved,"",true,true)));_check(restored.ok,"actual delivery and reply histories save normally: "+str(restored.get("message","")))
	var other:=_life(cold);_check(cold.regional_echo().tier==4,"cold graph publication reconstructs four-region rewards from actual saved exchanges")
	var bad:Dictionary=saved.duplicate(true);bad.district_answers=[]
	_check(not State.new().restore(bad).ok,"regional reply proof cannot replace the underlying completed musical exchange")
	bad=saved.duplicate(true);bad.regional_replies.append(bad.regional_replies[0].duplicate())
	_check(not State.new().restore(bad).ok,"duplicate completion evidence is rejected")
	bad=saved.duplicate(true);bad.regional_replies[0].from_voice="unknown:instrument"
	_check(not State.new().restore(bad).ok,"unavailable voice evidence is rejected")
	bad=saved.duplicate(true);bad.regional_replies[0].from_region="unknown"
	_check(not State.new().restore(bad).ok,"unknown terrain evidence is rejected")
	_check(city.remove_road(scene.high_road).ok,"the actual highland connection can be erased")
	life._sync();_check(city.regional_echo().tier==2 and is_equal_approx(city.service_radius(22.),22.),"breaking the connecting road withdraws unreachable three/four-region effects")
	_check(city.undo().ok,"real road removal supports undo");life._sync()
	_check(city.regional_echo().tier==4 and city.house_improvements==saved.house_improvements,"undo restores actual connectivity while completed delivery history stays earned")
	_check(city.set_district_style(ids[2],"warm").ok,"a region can reuse another voice");life._sync()
	_check(city.regional_echo().tier==2,"changing a voice cannot farm rewards from a completed exchange with another identity")
	city.reward_completed_district_reply(ids[1],ids[2]);city.reward_completed_district_reply(ids[2],ids[3])
	_check(city.regional_echo().tier==3,"even fresh exchanges cannot farm four voices when one instrument identity is duplicated")
	_check(not life.begin_budget_sync() and city.regional_echo().tier==3,"same-geometry publication refreshes current region identities without rebuilding the street graph")
	life.free();other.free()
	_tram()
	_hidden()
	_legacy_and_forest()
	print("REGIONAL_ECHO ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
func _tram()->void:
	var scene:=Golden.build();var city:RefCounted=scene.city
	var points:Array[Vector2]=[Vector2(-34,-2)];var a:Dictionary=city.add_district(points,6.,"warm");assert(a.ok)
	points=[Vector2(-14,-2),Vector2(-2,-2)];var b:Dictionary=city.add_district(points,6.,"deep");assert(b.ok)
	var life:=_life(city);var tram:RefCounted=life.tram;var car:Dictionary=tram.cars[0]
	var board:String=life._network._key(Vector2(-36,0));var exit:String=life._network._key(Vector2(-1,0))
	for i in range(4000):
		if str(car.key)==board and float(car.wait)>.2:break
		tram.tick(.05)
	var resident:Dictionary=life.cafe._resident(str(scene.home));resident.paused=false;resident.wait=0.;resident.route=life._route(board,exit);resident.index=0;resident.destination_id=scene.cafe;resident.node.position=life.positions[board]+Vector3(0,.1,0)
	tram.intercept(resident,0.);_check(tram.boarded==1 and city.regional_trips.is_empty(),"actual boarding never grants a completed commute")
	for i in range(4000):
		tram.tick(.05)
		if tram.completed==1:break
	_check(tram.completed==1 and city.regional_trips.size()==1,"the production car records the first actual cross-district alighting")
	_check(not city.record_completed_tram_commute(str(scene.home),str(scene.cafe)) and city.regional_trips.size()==1,"repeated actual route evidence remains one canonical pair")
	var saved:Dictionary=city.snapshot();var cold:=State.new();var result:Dictionary=cold.restore(saved)
	_check(saved.schema==18 and result.ok and cold.regional_trips==city.regional_trips,"optional schema eighteen preserves completed tram evidence")
	saved.schema=17;_check(not cold.restore(saved).ok,"old schema cannot silently discard new commute evidence")
	var reverse:Array[Vector3]=life._route(exit,board)
	for i in range(4000):
		if str(car.key)==exit and float(car.wait)>.2:break
		tram.tick(.05)
	resident.route=reverse;resident.index=0;resident.destination_id=scene.home;resident.node.position=life.positions[exit]+Vector3(0,.1,0);tram.tickets.erase(str(scene.home))
	tram.intercept(resident,0.)
	_check(tram.tickets[str(scene.home)].get("from_district","")==b.district_id and tram.boarded==2,"return-home boarding captures its actual departure district rather than the household district")
	for i in range(4000):
		tram.tick(.05)
		if tram.completed==2:break
	_check(tram.completed==2 and city.regional_trips.size()==1,"the real return commute completes with canonical duplicate suppression")
	life.free()
func _hidden()->void:
	var a:=Fixture.build();var b:=Fixture.build();var first:=_life(a.city);var second:=_life(b.city)
	var camera:=Camera3D.new();root.add_child(camera);camera.position=Vector3(1000,2,1000);second.view_camera=camera
	for step in range(2400):
		if step in [100,240,400]:
			var i:=0 if step==100 else 1 if step==240 else 2
			a.city.reward_completed_district_reply(a.districts[i],a.districts[i+1]);b.city.reward_completed_district_reply(b.districts[i],b.districts[i+1])
		first._process(.05);second._process(.05)
	_check(a.city.workshop_supply==b.city.workshop_supply and a.city.house_improvements==b.city.house_improvements,"two-minute full and hidden artisans agree through real two/three/four-region reward transitions")
	var equal:bool=a.city.resonance_afterglow.size()==b.city.resonance_afterglow.size()
	for id:String in a.city.resonance_afterglow:equal=equal and absf(a.city.afterglow_remaining(id)-b.city.afterglow_remaining(id))<.0001
	_check(equal and second.worker_lod.stats.work_sleeps>0,"hidden work deadlines wake at reward changes and preserve actual gift expiry times")
	first.free();second.free();camera.free()
func _legacy_and_forest()->void:
	var legacy:=true
	for row:Dictionary in Examples.CATALOG:
		var data:Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/"+str(row.file)))
		var city:=State.new();var result:Dictionary=city.restore(data)
		legacy=legacy and result.ok and city.snapshot().schema==data.schema and not city.snapshot().has("regional_trips") and not city.snapshot().has("regional_replies")
	_check(legacy,"all eighteen existing examples keep their original schema without minting regional completion records")
	var scene:=Fixture.build();var city:RefCounted=scene.city;var points:Array[Vector2]=[Vector2(-24,-21),Vector2(-16,-21)]
	_check(city.add_vegetation_stroke(points,"olive",1.4).ok,"a real forest can be planted beside an occupied region")
	var life:=_life(city);var original:Dictionary=city.regional_echo().nodes.duplicate(true)
	var visible:Dictionary={}
	for plant:Dictionary in city.plants:visible[str(plant.id)]=city.vegetation_visible(plant)
	city._region_plant_visibility=visible;city._region_visibility_revision=city.revision;city.prepare_regional_echo(life._network)
	_check(city.regional_echo().nodes==original,"published renderer visibility gives the same forest classification as independent canonical plant checks")
	var has_forest:=false
	for row:Dictionary in original.values():
		if row.region=="garden" and row.identity=="pastoral:warm":has_forest=true
	_check(has_forest,"three actual visible olive trees establish a forest region")
	life.free()
