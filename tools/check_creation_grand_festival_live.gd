extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const Fixture=preload("res://tools/fixtures/city_creation_amphitheater_fixture.gd")
const OUT="res://验证记录/四库路线_2026-10-17/Phase9"
var demo
var checks:Array=[]
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _wait()->void:
	var end:=Time.get_ticks_msec()+30000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<end:await process_frame
	await physics_frame;await process_frame
func _capture(label:String)->void:
	await process_frame;await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+label+".png")
func _click(button:Control)->void:
	var parent:Node=button.get_parent()
	while parent!=null:
		if parent is ScrollContainer:parent.ensure_control_visible(button)
		parent=parent.get_parent()
	await process_frame
	var at:Vector2=button.get_global_rect().get_center()
	for pressed:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=pressed;root.push_input(event);await process_frame
	await _wait()
func _run()->void:
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var fixture:=Fixture.build(self);var city:RefCounted=fixture.city
	var points:Array[Vector2]=[Vector2(-11,-9),Vector2(-11,9)];city.add_road(points,"tram")
	points=[Vector2(-11,9),Vector2(15,9)];city.add_road(points,"tram")
	var placed:=Fixture.place_connected(city);fixture.life.free()
	_check(placed.ok and placed.access.ok,"actual earned final signature is placed on shoreline with a real dry street connection")
	if not placed.ok or not placed.access.ok:quit(1);return
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false)
	var restored:Dictionary=demo.state.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true)))
	_check(restored.ok,"production final-signature town restores all actual chapter and service ledgers")
	demo._after_edit(restored,"history");await _wait()
	demo.remove_child(demo.life);demo.life.queue_free();demo._setup_life();demo.life.set_process(false)
	demo.ui_layer.visible=false;demo.focus=Vector3(placed.at.x-2.,1.2,placed.at.y+.8);demo.zoom=17;demo.yaw=.6;demo.pitch=.65;demo._update_camera();demo.town.clear_preview()
	var house:Node3D=demo.town.buildings.get_node(str(placed.house_id));var plan:Dictionary=house.get_meta("amphitheater",{})
	_check(not plan.is_empty() and demo.state.water_clearance(plan.stage)<-.65 and house.get_meta("signature_stage_triangles",0)>300,"actual renderer builds white sails wet stage piano jetty and three curved shoreline stands")
	var ray:=PhysicsRayQueryParameters3D.create(Vector3(plan.stage.x,10,plan.stage.y),Vector3(plan.stage.x,-.4,plan.stage.y),1)
	var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(ray)
	_check(not hit.is_empty() and hit.collider.get_meta("water_stage",false) and hit.collider.get_meta("house_id")==placed.house_id,"physical overwater stage and sail picking retain the authored landmark and terrace identity")
	await _capture("03_water_amphitheater_shore_stands_and_sails")
	demo.ui_layer.visible=true;demo.selected_house=placed.house_id;demo.select_tool(4);demo._refresh_place();await process_frame
	_check(demo.role_buttons.symphony_hall.is_visible_in_tree() and not demo.role_buttons.symphony_hall.disabled and demo.concert_button.visible and "跨时代" in demo.concert_button.text,"eighth role and actual grand-festival action are enabled in production place panel")
	await _click(demo.concert_button)
	_check(demo.life._concert.get("grand_festival",false) and demo.life.concert_status().phase=="gathering","actual UI button creates a four-era invitation while residents still need to arrive")
	demo.ui_layer.visible=false
	for i in range(7000):
		var status:Dictionary=demo.life.concert_status()
		if status.phase=="playing" or status.arrived==status.invited:break
		demo.life._process(.1)
		if i%50==0:await process_frame
	_check(demo.life.concert_status().arrived==demo.life.concert_status().invited,"every actual invited resident reaches the real shoreline entrance before music starts")
	var before:int=demo.state.life_progress.concerts;demo.life.set_process(true)
	var deadline:=Time.get_ticks_msec()+60000;var observed:Dictionary={};var frames:Array[float]=[];var last:=Time.get_ticks_usec();var waves:Dictionary={};var saved:=false;var save_attempted:=false;var save_result:Dictionary={}
	while Time.get_ticks_msec()<deadline:
		await process_frame
		var now:=Time.get_ticks_usec();frames.append((now-last)/1000.);last=now
		var report:Dictionary=demo.music.grand_festival_report()
		if report.active and float(report.elapsed)>float(report.phrase)*3.+.85 and not observed.has(int(report.phrase)):
			var phase:int=report.phrase
			var volumes:Dictionary={}
			for key:String in demo.music.STEMS:volumes[key]=demo.music._players[key].volume_db
			var theme_bus:int=AudioServer.get_bus_index(demo.music.spatial.report().bus_names[0])
			observed[phase]={"era":report.era,"source":report.source_id,"gains":report.gains,"actual_volumes":volumes,"remote":report.remote,"theme_lowpass":AudioServer.is_bus_effect_enabled(theme_bus,1),"acoustic_weight":demo.music._long_acoustic_weight("wood"),"active_source":demo.music.active_source()}
			if phase==2:
				waves=demo.town.grand_festival_visual.report.duplicate(true)
				await _capture("04_real_golden_water_and_rail_waves");last=Time.get_ticks_usec()
			if phase==7:
				demo.focus=Vector3(0,1,3);demo.zoom=72;demo._update_camera();await _capture("05_four_era_tutti_across_actual_city");last=Time.get_ticks_usec()
		if report.active and report.elapsed>10. and not save_attempted:
			save_attempted=true;save_result=demo.state.set_journey_checkpoint(demo.life.checkpoint())
			if save_result.ok:
				var check:=State.new();save_result=check.restore(JSON.parse_string(JSON.stringify(demo.state.snapshot(),"",true,true)))
			saved=save_result.ok
			if not saved:print("GRAND_SAVE_ERROR ",save_result)
		if int(demo.state.life_progress.concerts)>before:break
	demo.life.set_process(false)
	_check(observed.size()==8 and observed[0].era=="pastoral" and observed[2].era=="renaissance" and observed[4].era=="clockwork" and observed[6].era=="modern_eco" and observed[7].era=="tutti","unaccelerated production transport audibly visits all four real era sources and final full tutti over eight phrases")
	var audible:=true;var remote:=false;var filtered:=true
	for row:Dictionary in observed.values():
		audible=audible and row.active_source.audible
		if row.remote:remote=true;filtered=filtered and row.theme_lowpass and is_equal_approx(row.acoustic_weight,.25)
	_check(audible and remote and filtered,"actual dominant era PCM remains audible including quarter-gain distant special-event low-pass response")
	_check(waves.get("rail_edges",0)==demo.life.tram.plan.edges.size() and waves.get("rail_edges",0)>0 and waves.get("maximum_distance",0)>20. and waves.get("distance_source","")=="actual_street_graph","gold waves cover every actual connected rail edge using true road-network propagation distance")
	_check(saved and demo.state.life_progress.concerts==before+1 and demo.life.concert_status().phase=="idle","actual intermediate grand save validates and full twenty-four-second performance settles once")
	await process_frame
	_check(not demo.town.grand_festival_visual.report.active and float(demo.town.water_material.get_shader_parameter("festival_strength"))==0.,"real ending removes water and rail event glow without changing ordinary scenery")
	frames.sort();var p95:float=frames[int(frames.size()*.95)]
	_check(demo.music.STEMS.size()==12 and demo.music._effects.size()==4 and demo.music.spatial.report().bus_count==6,"grand performance preserves twelve long voices four short voices and six buses")
	_check(float(demo.music.audio_report.mix_peaks.absolute_stereo_with_four_short_voices)<1. and (FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"grand conservative stereo headroom and personal save bytes remain valid")
	var result:Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"observed":observed,"waves":waves,"frame_p95_ms":p95,"frame_max_ms":frames[-1],"save_result":save_result,"end_status":demo.life.concert_status(),"mix_peaks":demo.music.audio_report.mix_peaks,"facts":fixture.facts}
	FileAccess.open(OUT+"/grand_live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("GRAND_LIVE ",JSON.stringify({"ok":result.ok,"count":checks.size(),"failures":failures,"frame_p95_ms":p95}))
	demo.queue_free();await process_frame;await create_timer(.1).timeout;quit(0 if failures.is_empty() else 1)
