extends "res://tools/check_creation_reference_music_live.gd"
const Fixture=preload("res://tests/test_city_creation_inspiration_samples.gd")
const Samples=preload("res://scripts/world/city_creation_inspiration_samples.gd")
const Targets=preload("res://scripts/ui/city_creation_sitting_targets.gd")
const Balcony=preload("res://scripts/world/city_creation_balcony_plan.gd")
var traces:Array=[]
func camera_state()->Array:return [demo.focus,demo.yaw,demo.pitch,demo.zoom,demo.camera.projection,demo.camera.fov,demo.camera_rig.strolling,demo.selected_house]
func capture(label:String)->void:
	demo.toast.hide()
	for i in range(3):await process_frame
	await RenderingServer.frame_post_draw
	check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"actual settled image "+label)
func samples()->void:
	for card:String in Samples.IDS:
		var city:=Fixture.fixture();city.CreationPolicy.set_preferences(city,{"music":{"mode":"fixed","style":"pastoral_breeze","seed":74001}})
		var row:Dictionary=Samples.plans(city).filter(func(r):return r.card==card)[-1]
		await show(city,Vector2(row.position.x,row.position.z),card);quiet();demo.zoom=9.;demo.focus=row.position+Vector3.UP*.7;demo.pitch=.65;demo._update_camera();await settle()
		check(await wait_for(func():return demo.get_node("TraditionScenery").get_node("SecondStudyScenery").get_child_count()>0),"actual second study meshes publish "+card)
		if card==Samples.IDS[0]:
			var expected:Vector3=row.position+Vector3.UP*.23
			check(await wait_for(func():return demo.get_meta("waterfront_light").sources.any(func(at):return Vector3(at).distance_to(expected)<.01)),"second lantern reaches actual water reflection consumer")
		check(await wait_for(func():return demo.music.get_meta("orchestration_plan",{}).get("inspiration","")==card,30000),"actual selected source latches earned variation "+card)
		check(await wait_for(func():return demo.music._variation_active.get("terrace","").begins_with("core1/")),"original answer player receives formal sample stream "+card)
		var plan:Dictionary=demo.music.get_meta("orchestration_plan");var id:String=demo.music._variation_active.get("terrace","")
		check(plan.answer_material!=plan.material and plan.style=="pastoral_breeze","sample changes authored answer while retaining fixed style "+card)
		traces.append({"card":card,"clock":demo.music._playback_clock(),"plan":plan.duplicate(true),"actual_answer":id})
		await capture(card+"_day");demo._set_light_phase(2);await capture(card+"_night")
		if "--views-only" not in OS.get_cmdline_user_args():await record_recipe(card,26.)
		var prefs:Dictionary=demo.state.creative_settings.presentation.duplicate();prefs.automatic_decoration=false
		var changed:Dictionary=demo.state.CreationPolicy.set_preferences(demo.state,{"presentation":prefs});demo._after_edit(changed,"history",false);await settle()
		check(not demo.get_node("TraditionScenery").get_node("SecondStudyScenery").visible and Samples.for_source(demo.state,str(row.house_id))==card,"decoration toggle hides meshes and preserves actual music anchor "+card)
		check(demo.state.save_city(OUT+"/"+card+".json").ok,"sample disk save "+card)
		var cold:=State.new();check(cold.load_city(OUT+"/"+card+".json").ok and Samples.plans(cold)==Samples.plans(demo.state),"sample anchors survive actual disk cold read "+card)
func balcony_view()->void:
	var city:=State.new();city.initialize_free();city.add_house(Vector2(-25,-12));city.houses[0].style="timber";city.add_cell("h1",0,0,1)
	city.add_road([Vector2(-28,-9),Vector2(-22,-9)] as Array[Vector2]);city.add_road([Vector2(-25,-11),Vector2(-25,-9)] as Array[Vector2]);check(Balcony.set_mode(city,"h1",3).ok,"actual balcony fixture with upper room and street connection")
	await show(city,Vector2(-25,-12),"阳台静听");quiet();demo.life.set_process(false)
	var target:Dictionary=Targets.plans(demo).get("balcony/h1",{})
	check(not target.is_empty(),"actual reachable balcony landing is selectable")
	if target.is_empty():return
	var before:=camera_state();var position:Vector2=demo.camera.unproject_position(Vector3(target.at.x,target.y+.6,target.at.y))
	var e:=InputEventMouseMotion.new();e.device=92;e.position=position;e.global_position=position;root.push_input(e);await process_frame;await key(KEY_B)
	check(demo.camera_rig.bench_view.seat_id=="balcony/h1","native B reserves real visible balcony")
	var resident:Dictionary=demo.life.residents[0];resident.paused=true;resident.wait=0.;resident.dwell_id="";demo.life.time=10.
	check(not preload("res://scripts/world/city_creation_balcony_visits.gd").start(demo.life,resident),"resident cannot occupy player's balcony")
	check(demo.camera.global_position.y>2.,"actual upper deck eye height")
	await capture("balcony_sitting");await key(KEY_ESCAPE);check(camera_state()==before,"Esc restores exact overview after balcony listening")
	demo.camera_rig.bench_view.enter(demo,"balcony/h1");var removed:Dictionary=Balcony.set_mode(demo.state,"h1",0);demo._after_edit(removed,"history");await settle()
	check(demo.camera_rig.bench_view.seat_id.is_empty() and camera_state()==before,"removing balcony exits its view")
func chord_tour()->void:
	var city:RefCounted=preload("res://tools/fixtures/city_creation_chord_fixture.gd").pastoral()
	await show(city,Vector2(-14,-2),"和弦收藏巡礼");quiet();demo.gallery.archive.enabled=true;demo.gallery.observe_archive()
	check("pastoral_triad" in demo.gallery.archive.chords,"real chord conditions produce existing archive receipt")
	var before:=camera_state();var snapshot:Dictionary=demo.state.snapshot();demo.gallery.open_panel();demo.gallery.panel.tabs.current_tab=2;await settle()
	var button:Button=demo.gallery.panel.find_child("TourChord_pastoral_triad",true,false)
	check(button!=null and not button.disabled,"earned chord has native tour button in existing gallery")
	if button==null:return
	demo.gallery.panel.scroll.ensure_control_visible(button);await ui_click(button)
	check(demo.camera_rig.tour.active and not demo.gallery.panel.visible,"actual archive click starts tour and closes gallery")
	await create_timer(2.).timeout;await capture("chord_tour");await key(KEY_ESCAPE)
	check(not demo.camera_rig.tour.active and camera_state()==before and demo.state.snapshot()==snapshot,"Esc interrupts tour without authoring or rewards")
	demo.select_tool(3);check(demo.camera_rig.tour.start(demo,"pastoral_triad"),"tour starts with removal tool selected")
	await click_world(Vector2(demo.state.houses[0].origin[0],demo.state.houses[0].origin[1]))
	check(not demo.camera_rig.tour.active and demo.state.snapshot()==snapshot,"mouse click consumes tour exit without unintended removal at restored camera")
	check(demo.camera_rig.tour.start(demo,"pastoral_triad"),"tour can restart")
	await create_timer(12.3).timeout;check(not demo.camera_rig.tour.active and camera_state()==before,"12 second natural completion restores exact camera")
	demo.camera_rig.tour.start(demo,"pastoral_triad")
	var result:Dictionary=demo.state.add_house(Vector2(-30,-25));demo._after_edit(result,"room");await settle()
	check(result.ok and not demo.camera_rig.tour.active and camera_state()==before,"actual editing interrupts tour and keeps the edit")
	demo.camera_rig.tour.start(demo,"pastoral_triad");await show(Fixture.fixture(),Vector2(-32,-32),"巡礼后打开作品");quiet()
	check(not demo.camera_rig.tour.active and demo.focus.x==-32.,"loading a work retires tour before applying new camera")
func run()->void:
	OUT="res://验证记录/M82/appreciation_first"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.archive_persistence=true;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var voices:=pool()
	await samples();await balcony_view();await chord_tour()
	check(pool()==voices and personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"original audio pool and personal save retained")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"traces":traces,"bank_signature":demo.music.BankCache.source_signature()}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("INSPIRATION_APPRECIATION ",JSON.stringify(report));demo.queue_free();await process_frame;await create_timer(.2).timeout;quit(0 if failures.is_empty() else 1)
