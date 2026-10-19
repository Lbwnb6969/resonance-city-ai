extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Fixture=preload("res://tools/fixtures/city_creation_landmark_adjacency_fixture.gd")
const OUT="res://验证记录/地标局部强化_2026-10-19"
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _wait()->void:
	var end:=Time.get_ticks_msec()+90000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<end:await process_frame
	_check(not demo.edit_pending(),"actual local geometry publishes before the deadline")
func _capture(name:String)->void:
	for i in range(3):await process_frame
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+name+".png")==OK,"real GL screenshot: "+name)
func _extras()->int:
	var result:=0
	for count:int in demo.town.meadow.palace_flower_counts.values():result+=count
	return result
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var city:RefCounted=Fixture.build(self);var ids:=Fixture.neighborhood(city)
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated";root.add_child(demo);demo.life.set_process(false)
	var result:Dictionary=demo.state.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true)))
	_check(result.ok,"earned four-landmark neighborhood restores in production scene")
	demo._after_edit(result,"history");await _wait()
	_check(DisplayServer.get_name()!="headless","actual OpenGL window is active")
	_check(is_equal_approx(demo.state.installation_multiplier("h3","h1"),1.3) and demo.state.workshop_batch_size("h3")==4 and bool(demo.state.site_blessing("h3").blessed),"worker publication atomically includes bell delivery academy batch and palace forest bonuses")
	_check(demo.life.connected_houses.has(str(ids.mill)) and not demo.town.house_roots.get(str(ids.mill),null)==null,"actual watermill has both visible geometry and its real street connection")
	var extras:=_extras();_check(extras>0,"actual meadow GPU batches contain paired palace flowers")
	demo.focus=Vector3(-13,.6,0);demo.zoom=36.;demo.pitch=.82;demo.yaw=.22;demo._update_camera();demo.select_tool(0)
	await _capture("01_four_landmarks_and_flower_circle")
	demo.signatures.open_panel()
	for i in range(3):await process_frame
	var scroll:ScrollContainer=demo.signatures.panel.get_node("LandmarkScroll");scroll.ensure_control_visible(demo.signatures.buttons.botanical_palace)
	_check(demo.signatures.labels.watermill.text.contains("每出炉3炉") and demo.signatures.labels.botanical_palace.text.contains("14米") and demo.signatures.labels.music_academy.text.contains("产量翻倍"),"actual catalog explains new local placement benefits")
	await _capture("02_landmark_catalog");demo.signatures.panel.hide()
	var ready:=false
	for i in range(12000):
		if demo.life.cafe.status("h4").phase=="tea":ready=true;break
		demo.life._process(.05)
	_check(ready and is_equal_approx(float(demo.life.cafe.status("h4").duration),3.6),"real seated tea guests use the published 3.6-second duration")
	demo.focus=Vector3(-4,.5,2);demo.zoom=19.;demo._update_camera()
	await _capture("03_actual_accelerated_tea")
	var end:=Time.get_ticks_msec()+30000;var frames:Array[float]=[]
	demo.life.set_process(true)
	while Time.get_ticks_msec()<end:
		var start:=Time.get_ticks_usec();await process_frame;frames.append((Time.get_ticks_usec()-start)/1000.)
	demo.life.set_process(false);frames.sort()
	facts.live={"frames":frames.size(),"frame_p95_ms":frames[int(frames.size()*.95)],"frame_max_ms":frames[-1],"worker_stages":demo.town.budget_rebuild.stats.get("worker_stages",{}),"palace_extra_flowers":extras}
	# Use the original life state machine to finish a worker's third actual batch.
	for i in range(2400):
		if int(demo.state.landmark_bread.get(str(ids.mill),{}).get("batches",0))>=3:break
		demo.life._process(.05)
	_check(int(demo.state.landmark_bread.get(str(ids.mill),{}).get("batches",0))>=3 and State.SaveValidation._gift_count(demo.state.snapshot())>=2,"real mill worker completes three batches and delivers two conserved gifts")
	_check(demo.state.set_journey_checkpoint(demo.life.checkpoint()).ok,"actual guests and workers checkpoint with the optional gift ledger")
	var restored:=State.new();_check(restored.restore(JSON.parse_string(JSON.stringify(demo.state.snapshot(),"",true,true))).ok,"live physical journeys and gift receipts reload together")
	facts.mill=demo.state.landmark_bread.get(str(ids.mill),{}).duplicate(true);facts.bread=demo.state.bakery_status(str(ids.mill))
	demo.selected_house=str(ids.mill);demo.select_tool(4);demo._refresh_ui();demo._refresh_bakeries()
	_check(demo.bakery_info.text.contains("街坊买走 %d份"%(int(facts.bread.served)-int(facts.bread.gifted))) and demo.bakery_info.text.contains("赠粮 2份"),"actual mill drawer distinguishes paid purchases and gifted bread")
	demo.focus=Vector3(-2,.6,-14);demo.zoom=20.;demo._update_camera();await _capture("04_actual_mill_and_bread_gifts")
	demo.ledger.open_panel();_check(demo.ledger.body.text.contains("赠粮 2 份"),"actual life ledger reports gifted loaves separately from sales");demo.ledger.close_panel()
	var moved:Dictionary=demo.state.place_signature("botanical_palace",Vector2(-31,18),str(ids.palace));demo._after_edit(moved,"house");await _wait()
	_check(moved.ok and not bool(demo.state.planning_bonus("h3").natural) and is_equal_approx(float(demo.life.cafe.status("h4").duration),6.),"budgeted palace move atomically removes old nature blessing and future tea speed")
	demo.focus=Vector3(-31,.5,19.8);demo.zoom=22.;demo._update_camera();await _capture("05_moved_flower_circle")
	demo._after_edit(demo.state.undo(),"history");await _wait()
	_check(_extras()==extras and bool(demo.state.planning_bonus("h3").natural) and is_equal_approx(float(demo.life.cafe.status("h4").duration),3.6),"real edit undo restores original GPU flowers and local service conditions")
	var after:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	_check(after==personal,"personal save bytes remain unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	var file:=FileAccess.open(OUT+"/report.json",FileAccess.WRITE);file.store_string(JSON.stringify(report,"\t",true,true));file.close()
	print("LANDMARK_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
