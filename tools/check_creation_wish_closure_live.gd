extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
var out_dir:="res://验证记录/心愿即时回馈_2026-10-22/accepted"
var demo
var checks:=0
var failures:Array[String]=[]
var facts:Dictionary={"burst_latencies_ms":[]}
var release_started:=0
var resolutions:Array[Vector2i]=[Vector2i(1440,900),Vector2i(1024,768)]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending:await process_frame
	for i:int in range(12):await process_frame
func mouse(at:Vector2,down:bool)->void:
	var event:=InputEventMouseButton.new();event.button_index=MOUSE_BUTTON_LEFT;event.position=at;event.pressed=down;root.push_input(event);await process_frame
func motion(at:Vector2)->void:
	var event:=InputEventMouseMotion.new();event.position=at;root.push_input(event);await process_frame
func click(button:Control)->void:
	var at:=button.get_global_rect().get_center();await motion(at);await mouse(at,true);await mouse(at,false)
func world(at:Vector2)->Vector2:
	return demo.camera.unproject_position(Vector3(at.x,demo.state.ground_height(at),at.y))
func place(at:Vector2)->void:
	var screen:=world(at);await motion(screen);await mouse(screen,true)
	var count:int=facts.burst_latencies_ms.size();release_started=Time.get_ticks_usec()
	await mouse(screen,false)
	if facts.burst_latencies_ms.size()>count:await shot(str(root.size.x)+"_instant_burst_"+str(count))
	await settle();demo.life.set_process(false)
func shot(label:String)->void:
	demo.toast.hide();demo.toast_time=0.
	await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(out_dir+"/"+label+".png")
func fixture()->RefCounted:
	var city:=State.new();city.initialize_empty()
	for at:Vector2 in [Vector2(-30,-22),Vector2(-26,-22),Vector2(-22,-22),Vector2(-30,-17),Vector2(-26,-17),Vector2(-22,-17),Vector2(-30,-8),Vector2(-26,-8)]:
		check(city.add_house(at).ok,"legal fixture home")
	city.set_house_role("h1","bakery");city.set_house_role("h2","workshop");city.set_house_role("h7","garden_cafe")
	check(city.add_road([Vector2(-33,-20.45),Vector2(-33,-6.45)] as Array[Vector2]).ok,"connected trunk")
	for row:Dictionary in [{"z":-20.45,"end":-22.},{"z":-15.45,"end":-26.},{"z":-6.45,"end":-26.}]:
		check(city.add_road([Vector2(-33,row.z),Vector2(row.end,row.z)] as Array[Vector2]).ok,"door approach")
	check(city.place_plant(Vector2(-35,12),"golden_tree").ok,"existing planted garden unlocks advanced guidance")
	city.set_bakery_open("h1",false);city.set_workshop_open("h2",false)
	return city
func choose(kind:String)->Dictionary:
	demo.spatial_popover.close();demo.wish_pins.refresh();await process_frame
	var matches:Array=demo.wish_pins.pins.filter(func(pin):return pin.row.kind==kind)
	check(not matches.is_empty(),"real current wish offered: "+kind)
	if matches.is_empty():return {}
	var pin:Dictionary=matches[0]
	check(pin.button.is_visible_in_tree(),"wish is genuinely visible and clickable: "+kind)
	await shot(str(root.size.x)+"_"+kind+"_before")
	await click(pin.button)
	return demo.wish_pins.target.duplicate()
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out_dir=arg.trim_prefix("--out-dir=")
		if arg.begins_with("--resolution="):resolutions=[Vector2i(1024,768) if arg.ends_with("1024") else Vector2i(1440,900)]
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out_dir));Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=out_dir+"/isolated";root.add_child(demo);demo.life.set_process(false)
	await settle();while demo.music._loading:await process_frame
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	var city:=fixture();var original:Dictionary=city.snapshot()
	for resolution:Vector2i in resolutions:
		root.size=resolution
		await demo.gallery._open_chosen({"ok":true,"world":original,"id":"wish-fixture","title":"屋顶心愿","view":{"focus":[-27.,.7,-18.],"zoom":28.,"yaw":0.,"pitch":1.05,"evening":false,"light_phase":0}})
		demo.life.set_process(false);await settle()
		var callback:Callable=demo.life.wish_callback
		demo.life.wish_callback=func(id,kind,quantity):
			callback.call(id,kind,quantity)
			facts.burst_latencies_ms.append({"id":id,"kind":kind,"ms":float(Time.get_ticks_usec()-release_started)/1000.})
		check(root.size==resolution and demo.state.houses.size()==original.houses.size() and demo.state.waters==original.waters and demo.state.roads==original.roads and demo.state.wish_rewards.is_empty(),"requested native resolution and fresh source world actually opened")
		var arrived:=Time.get_ticks_msec();demo.life.set_process(true)
		while Time.get_ticks_msec()-arrived<45000 and not (demo.life.bakery.workers[0].phase=="baking" and demo.life.workshop.workers[0].phase=="crafting"):await process_frame
		demo.life.set_process(false)
		check(demo.life.bakery.workers[0].phase=="baking" and demo.life.workshop.workers[0].phase=="crafting","real wall-time workers arrive at closed oven and bench before testing immediate feedback")
		check(demo.state.bakery_status("h1").produced==0 and demo.state.workshop_status("h2").produced==0,"closed shops have no pre-seeded goods")
		check(root.size==resolution and demo.state.houses.size()==original.houses.size() and demo.state.roads==original.roads,"native worker warmup leaves source geometry and viewport unchanged")
		var wishes=demo.wish_pins
		check(wishes.offers().slice(0,2).map(func(row):return row.kind)==["road","water"],"unconnected home and dry bakery receive priority")
		# Fulfil a displayed road need without clicking its seal: stale pins must retire.
		wishes.refresh();await process_frame;demo.select_tool(2)
		var tip:Vector2=demo.state.house_entrances("h6")[0].at
		var start:=world(Vector2(-26,-15.45));await motion(start);await mouse(start,true)
		await motion(world(tip));await mouse(world(tip),false);await settle();demo.life.set_process(false)
		check(wishes.pins.size()==1 and wishes.pins[0].row.kind=="water" and wishes.elapsed<18.,"published external completion removes only the satisfied pin without replacing it early")
		for pressed:bool in [true,false]:
			var key:=InputEventKey.new();key.keycode=KEY_Z;key.ctrl_pressed=true;key.pressed=pressed;root.push_input(key);await process_frame
		await settle();demo.life.set_process(false)
		check(not demo.life.house_connected("h6") and not wishes.pins.any(func(pin):return pin.row.kind=="road"),"undo restores genuine unmet need but waits for next offer interval")
		var before:Dictionary=demo.state.snapshot();var road:=await choose("road")
		check(demo.tool==2 and demo.state.snapshot()==before,"road guidance changes tool without fake connection or reward")
		if not road.is_empty():
			var first:=world(Vector2(-26,-15.45));await motion(first);await mouse(first,true)
			await motion(world(road.at));await mouse(world(road.at),false);await settle();demo.life.set_process(false)
		check(demo.life.house_connected("h6") and not wishes.offers().any(func(row):return row.house_id=="h6" and row.kind=="road"),"actual mouse-drawn approach connects the requested home and retires its need")
		demo._after_edit(demo.state.set_bakery_open("h1",true),"room");await settle();demo.life.set_process(false)
		var water:=await choose("water")
		check(demo.tool==6 and demo.water_kind=="pond" and not water.is_empty(),"water wish selects actual pond tool")
		var water_clock:float=demo.life.time
		if not water.is_empty():await place(water.at)
		check(demo.state.wish_rewards.get("h1",{}).get("water",0)==2 and demo.state.bakery_status("h1").produced==2 and demo.life.time==water_clock,"actual pond release immediately publishes one hot batch without advancing simulation")
		await shot(str(resolution.x)+"_hot_batch")
		demo._after_edit(demo.state.set_workshop_open("h2",true),"room");await settle();demo.life.set_process(false)
		check(bool(demo.state.site_blessing("h1").get("blessed",false)) and float(demo.state.site_blessing("h1").get("speed_multiplier",1.))>1.,"actual highlighted pond activates the watermill baking bonus")
		check(not wishes.offers().any(func(row):return row.house_id=="h1" and row.kind=="water"),"fulfilled water need is absent")
		# A prior forest brush must not turn one precise wish marker into a random grove.
		var mode:OptionButton=demo.ui_layer.find_child("PlantingMode",true,false);mode.select(1);mode.item_selected.emit(1)
		for i:int in range(3):
			var tree:=await choose("tree")
			check(demo.tool==5 and demo.vegetation_single and demo.vegetation_kind=="olive" and mode.selected==0,"tree wish prepares a single real tree even after forest-brush use")
			var count:int=demo.state.plants.size()
			var craft_clock:float=demo.life.time;var position:Vector3=demo.life.workshop.workers[0].node.position
			if not tree.is_empty():await place(tree.at)
			if i==2:
				var worker:Dictionary=demo.life.workshop.workers[0]
				check(demo.state.workshop_status("h2").produced==1 and worker.phase=="to_target" and worker.carry.visible and demo.life.time==craft_clock and worker.node.position==position,"third mouse-planted tree immediately reserves the real object and dispatches the onsite artisan without teleporting")
				await shot(str(resolution.x)+"_instant_dispatch")
			check(demo.state.plants.size()==count+1 and int(demo.state.site_blessing("h2").get("trees",0))==i+1,"highlighted planting contributes exactly one visible tree within eight metres")
		check(bool(demo.state.site_blessing("h2").get("blessed",false)) and not wishes.offers().any(func(row):return row.house_id=="h2" and row.kind=="tree"),"third real tree activates good wood and retires the wish")
		var tea:=await choose("tea");await settle();demo.life.set_process(false)
		check(not tea.is_empty() and demo.state.houses[demo.state._house_index(str(tea.get("house_id","")))].role=="garden_cafe","actual tea seal converts precisely the requested dwelling")
		check(not wishes.offers().any(func(row):return row.kind=="tea"),"same cluster no longer asks for another cafe")
		wishes.elapsed=17.;await process_frame;check(wishes.pins.is_empty(),"fulfilled wishes do not immediately refill before eighteen seconds")
		await shot(str(resolution.x)+"_completed")
		var loaded:=State.new();check(loaded.restore(demo.state.snapshot()).ok and loaded.plants==demo.state.plants and loaded.waters==demo.state.waters and loaded.houses==demo.state.houses,"completed roads, pond, individual trees and cafe survive actual schema restore")
		facts[str(resolution.x)]={"road_connected":demo.life.house_connected("h6"),"bakery":demo.state.site_blessing("h1"),"workshop":demo.state.site_blessing("h2"),"tea":tea,"rewards":demo.state.wish_rewards.duplicate(true)}
	# Run real wall-time life after completing the needs. No fabricated inventories or worker phases.
	var started:=Time.get_ticks_msec();var seen_delivery:=false;var samples:Array[float]=[]
	demo.life.set_process(true)
	while Time.get_ticks_msec()-started<45000:
		var tick:=Time.get_ticks_usec();await RenderingServer.frame_post_draw;samples.append(float(Time.get_ticks_usec()-tick)/1000.)
		seen_delivery=seen_delivery or demo.life.workshop.workers.any(func(worker):return worker.phase=="to_target" and worker.carry.visible)
		if seen_delivery and int(demo.state.workshop_status("h2").delivered)>0 and int(demo.state.bakery_status("h1").served)>0:break
	check(int(demo.state.bakery_status("h1").served)>0,"actual buyer consumes real hot-batch stock")
	check(seen_delivery and int(demo.state.workshop_status("h2").delivered)>0,"dispatched artisan completes the actual carrying route and installs once")
	samples.sort();facts.life={"elapsed_ms":Time.get_ticks_msec()-started,"bread":demo.state.bakery_status("h1"),"craft":demo.state.workshop_status("h2"),"delivery_seen":seen_delivery,"frames":samples.size(),"p95_ms":samples[int(samples.size()*.95)],"max_ms":samples[-1]}
	await shot("real_bread_and_delivery")
	check(facts.burst_latencies_ms.size()==resolutions.size()*2 and facts.burst_latencies_ms.all(func(row):return row.ms<=200.),"both resolutions show the first-batch burst within 0.2 seconds of actual mouse release")
	var current:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():current.append(player.get_instance_id())
	check(current==voices and current.size()==12 and demo.music._effects.size()==4,"wish fulfilment retains the fixed audio pool")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save remains byte-identical")
	var result:={"checks":checks,"failures":failures,"ok":failures.is_empty(),"facts":facts}
	FileAccess.open(out_dir+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("WISH_CLOSURE_LIVE ",JSON.stringify(result))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
