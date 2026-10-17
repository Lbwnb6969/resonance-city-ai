extends SceneTree
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const OUT = "res://验证记录/v3可试玩体验_2026-10-16"
var demo
var failures: Array[String] = []
var facts: Dictionary = {}
func _initialize() -> void: _run.call_deferred()
func check(ok: bool, label: String) -> void:
	if not ok: failures.append(label); push_error(label)
func settle() -> void:
	var until := Time.get_ticks_msec()+20000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<until: await process_frame
	check(not demo.edit_pending(),"latest geometry and routes publish")
	await physics_frame
	await process_frame
func capture(label: String) -> void:
	await RenderingServer.frame_post_draw
	check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"capture "+label)
func audio_ids() -> Array:
	var result: Array = []
	for player: AudioStreamPlayer in demo.music._players.values(): result.append([player.get_instance_id(),player.stream.get_instance_id()])
	for player: AudioStreamPlayer in demo.music._effects: result.append(player.get_instance_id())
	return result
func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal := FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900)
	Engine.max_fps=180
	DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate()
	demo.persistence=false
	demo.collection_directory=OUT+"/临时作品库"
	root.add_child(demo)
	demo.life.set_process(false)
	var source := FileAccess.get_file_as_bytes("res://数据/经营河湾样例.json")
	var restored: Dictionary = demo.state.restore(JSON.parse_string(source.get_string_from_utf8()))
	demo._after_edit(restored,"history")
	await settle()
	var until := Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<until: await process_frame
	check(DisplayServer.get_name()!="headless" and restored.ok,"real GL game and isolated 28-house sample")
	demo.focus=Vector3(-4,0.7,-3)
	demo.zoom=29
	demo.pitch=0.78
	demo._update_camera()
	demo.ui_layer.visible=false
	var audio := audio_ids()
	var clock: float = demo.music._playback_clock()
	for i in range(30): await process_frame
	facts.birds=demo.town.wildlife._birds.size()
	facts.flutters=demo.town.wildlife._flutters.size()
	facts.bunting=demo.town.ecology_layer.get_meta("bunting_count")
	check(int(facts.birds)>0 and int(facts.birds)<=18 and int(facts.flutters)>0 and int(facts.flutters)<=28,"bounded living habitats")
	check(demo.town.wildlife.get_child_count()==2,"two wildlife MultiMesh batches")
	await capture("01_晴昼")
	demo._toggle_light()
	check(demo.light_phase==1 and not demo.town.wildlife._night,"evening keeps butterflies")
	for i in range(8): await process_frame
	await capture("02_夕照")
	demo._toggle_light()
	for i in range(8): await process_frame
	check(demo.light_phase==2 and demo.music.night and demo.town.wildlife._night,"night links light, music and fireflies")
	var lit := 0
	for row: Dictionary in demo.town.resonance.rigs.values():
		if bool(row.inhabited):
			lit+=1
			check(row.mesh.visible and float(row.material.get_shader_parameter("night_glow"))==0.42,"inhabited warm windows")
	facts.night_homes=lit
	check(lit==20,"all twenty actual homes have a night rig")
	await capture("03_星夜")
	# Pixel evidence, not merely a uniform readback: same lighting with panes off.
	demo.set_process(false)
	var night_image: Image = root.get_texture().get_image()
	for row: Dictionary in demo.town.resonance.rigs.values(): row.material.set_shader_parameter("night_glow",0.0)
	await RenderingServer.frame_post_draw
	var unlit_image: Image = root.get_texture().get_image()
	var warm_pixels := 0
	for y in range(0,night_image.get_height(),2):
		for x in range(0,night_image.get_width(),2):
			var a := night_image.get_pixel(x,y)
			var b := unlit_image.get_pixel(x,y)
			if a.r-b.r>0.05 and a.r-a.b>0.10: warm_pixels+=1
	facts.warm_window_pixels=warm_pixels
	check(warm_pixels>30,"actual warm window pixels differ from identical unlit night")
	demo.set_process(true)
	demo._toggle_light()
	check(demo.light_phase==0 and not demo.evening and not demo.music.night,"three-phase cycle returns day")
	var id: String = str(demo.state.houses[0].id)
	var body: StaticBody3D = demo.town.house_roots[id].find_children("*","StaticBody3D",true,false)[0]
	var body_transform := body.global_transform
	demo.town.animate_house_bounce(id)
	check(body.global_transform==body_transform and demo.town.touch.active.has(id),"touch moves visual pivot while collision stays fixed")
	for i in range(110): await process_frame
	check(demo.town.touch.active.is_empty(),"press spring settles exactly")
	# Exercise the actual held-P/motion input path, selecting only visible roofs.
	var press := InputEventKey.new()
	press.keycode=KEY_P; press.pressed=true
	Input.parse_input_event(press)
	await process_frame
	var serial: int = demo.music._pluck_serial
	var visible_houses := 0
	for house: Dictionary in demo.state.houses:
		var highest: Dictionary = house.cells[0]
		for cell: Dictionary in house.cells:
			if int(cell.level)>int(highest.level): highest=cell
		var at: Vector3 = demo.town._cell_position(house,highest)+Vector3.UP*(float(highest.level+1)*1.7+0.4)
		var screen: Vector2 = demo.camera.unproject_position(at)
		var hit: Dictionary = demo._ray_hit(screen)
		if hit.is_empty() or str(hit.collider.get_meta("house_id",""))!=str(house.id): continue
		var move := InputEventMouseMotion.new()
		move.position=screen; move.global_position=screen
		Input.parse_input_event(move)
		for i in range(19): await process_frame
		visible_houses+=1
		if visible_houses==3: break
	press.pressed=false;Input.parse_input_event(press)
	await process_frame
	check(visible_houses>=2 and demo.music._pluck_serial>=serial+2,"held P gliss crosses real roof picks")
	facts.gliss_notes=demo.music._pluck_serial-serial
	demo.music.set_concert_active(true)
	check(demo.music._pluck_voices.is_empty(),"concert immediately releases every gliss voice")
	demo.music.set_concert_active(false)
	var home: String = str(demo.state.houses.filter(func(h): return h.role=="residential")[0].id)
	demo.state.cafe_credits[home]={"earned":1,"spent":1}
	demo.town.refresh_ecology()
	check(float(demo.town.resonance.rigs[home].get("harmony",0.0))>0 and int(demo.town.resonance.rigs[home].mesh.get_meta("garlands"))>0,"fulfilled household shows window flowers even when roads leave no pot clearance")
	var district: String = str(demo.music._house_music[home].district_id)
	var earned_before: Dictionary = demo.state.cafe_credits.duplicate(true)
	for house: Dictionary in demo.state.houses:
		if house.role=="residential" and str(demo.music._house_music[house.id].district_id)==district:
			demo.state.cafe_credits[house.id]={"earned":1,"spent":1}
	demo.music._refresh_harmony_gains()
	check(float(demo.music.harmony_gains.get(district,0.0))==3.5,"fulfilled district derives bounded shared-track gain")
	var former_district: String = demo.music._daily_district_id
	demo.music._daily_district_id=district
	var fuller: float = demo.music.target_gain_db("foundation",false)
	demo.music.harmony_gains[district]=0.0
	check(absf(fuller-demo.music.target_gain_db("foundation",false)-3.5)<0.001,"harmony gain reaches actual foundation target")
	demo.music._daily_district_id=former_district
	demo.state.cafe_credits=earned_before
	demo.music._refresh_harmony_gains()
	facts.mix_peaks=demo.music.audio_report.get("mix_peaks",{})
	check(float(facts.mix_peaks.get("absolute_stereo_with_four_short_voices",1.0))<0.90,"increased harmony mix retains measured PCM headroom")
	# A fresh nearby pair exercises sag/occlusion and lantern batches.
	var a: Dictionary = demo.state.add_house(Vector2(22,22))
	var b: Dictionary = demo.state.add_house(Vector2(27,22))
	if a.ok and b.ok:
		demo.state.add_cell(a.house_id,0,0,1,"room")
		demo.state.add_cell(b.house_id,0,0,1,"room")
		demo.state.set_house_role(a.house_id,"garden_cafe")
		demo.state.cafe_credits[b.house_id]={"earned":1,"spent":0}
		demo._after_edit({"ok":true,"message":"test pair"},"history")
		await settle()
		check(int(demo.town.ecology_layer.get_meta("bunting_count"))>0,"facing street pair builds visible pennants")
		check(int(demo.town.ecology_layer.get_meta("harmony_flowerpots"))>0,"fulfilled home with exterior clearance adds real flowerpot batches")
		var roots_before: Array = []
		for node: Node in demo.town.house_roots[b.house_id].find_children("*","StaticBody3D",true,false): roots_before.append(node.get_instance_id())
		demo.state.houses[demo.state._house_index(b.house_id)]["finish"]="nocturne"
		var palette_update: Dictionary = demo.town.try_update_house_colors(b.house_id)
		var roots_after: Array = []
		for node: Node in demo.town.house_roots[b.house_id].find_children("*","StaticBody3D",true,false): roots_after.append(node.get_instance_id())
		check(palette_update.applied and roots_before==roots_after,"eighth palette updates real shader batches without replacing collision")
		demo.focus=Vector3(24.5,2.0,22);demo.zoom=12;demo._update_camera()
		await capture("04_跨街彩旗")
		demo._toggle_light();demo._toggle_light()
		for i in range(8): await process_frame
		await capture("04b_灯串夜窗近景")
		demo._toggle_light()
		var removed: Dictionary = demo.state.remove_house(a.house_id)
		demo._after_edit(removed,"erase")
		await settle()
		check(demo.town.wildlife._perches.size()==demo.state.houses.size(),"deletion publishes matching perch set")
		for bird: Dictionary in demo.town.wildlife._birds: check(demo.town.wildlife._perches.has(bird.target),"bird retargets deleted roof")
	# Start on the authored commute road, then exercise actual stroll key movement.
	demo.focus=Vector3(-11,0.7,-2)
	demo._update_camera()
	var original: Vector3 = demo.focus
	demo.camera_rig.toggle(demo)
	check(demo.camera.projection==Camera3D.PROJECTION_PERSPECTIVE and demo.camera.fov==48.0,"stroll uses perspective")
	var before: Vector3 = demo.focus
	var key := InputEventKey.new();key.keycode=KEY_W;key.pressed=true
	Input.parse_input_event(key)
	for i in range(24): await process_frame
	key.pressed=false;Input.parse_input_event(key)
	await process_frame
	check(demo.focus.distance_to(before)>0.1,"W moves street camera")
	await capture("05_街头漫步")
	await demo.camera_rig.capture(demo)
	check(FileAccess.file_exists(demo.camera_rig.last_postcard) and not demo.ui_layer.visible,"postcard PNG saves and restores prior UI visibility")
	facts.postcard=demo.camera_rig.last_postcard
	demo.camera_rig.toggle(demo)
	check(demo.camera.projection==Camera3D.PROJECTION_ORTHOGONAL and demo.focus==original,"return restores exact creation framing")
	var samples: Array[float] = []
	var previous := Time.get_ticks_usec()
	for i in range(180):
		await process_frame
		var now := Time.get_ticks_usec();samples.append(float(now-previous)/1000.0);previous=now
	samples.sort()
	facts.idle_frame_p95_ms=samples[int(samples.size()*0.95)]
	check(audio_ids()==audio and demo.music._playback_clock()>clock,"all views preserve nine loops and four short slots")
	check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal save untouched")
	var result := {"ok":failures.is_empty(),"failures":failures,"facts":facts}
	var file := FileAccess.open(OUT+"/结果.json",FileAccess.WRITE);file.store_string(JSON.stringify(result,"\t"));file.close()
	print("V3_EXPERIENCE_RESULT "+JSON.stringify(result))
	demo.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for player: AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player: AudioStreamPlayer in demo.music._effects: player.stop()
	for player: AudioStreamPlayer in demo.ambience.players.values(): player.stop()
	await create_timer(0.15).timeout
	demo.queue_free();await process_frame;await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
