extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_quality_fixture.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/四库路线_2026-10-17/Phase6"
var checks: Array=[]
var failures: Array[String]=[]
var demo
func _initialize()->void:_run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var built: Dictionary=Fixture.build(self)
	var points: Array[Vector2]=[Vector2(-18,0)]
	var district: Dictionary=built.city.add_district(points,4.,"warm")
	built.city.set_district_era(district.district_id,"renaissance")
	var keep: Dictionary=built.city.place_signature("bell_keep",Vector2(-18,0))
	var city: Dictionary=built.city.snapshot();built.life.free()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/detail_isolated_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false)
	demo.state.restore(city);demo.life.setup(demo.state);demo._after_edit({"ok":true,"message":"fixture"},"history")
	var deadline:=Time.get_ticks_msec()+30000
	while (demo.edit_pending() or demo._edit_ui_pending or demo.music.audio_report.is_empty()) and Time.get_ticks_msec()<deadline:await process_frame
	demo.focus=Vector3(-8,.7,-6);demo.zoom=13;demo.yaw=.55;demo.pitch=.8;demo._update_camera();demo.ui_layer.visible=false;demo.town.clear_preview()
	var home: Node3D=demo.town.quality_visual.roots.h1
	_check(home.get_meta("iron_flowerboxes",0)>0 and home.get_meta("features",[]).has("carved_gallery"),"fulfilled home has actual forged flowerbox frame and free-standing carved gallery")
	await process_frame;await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/07_quality_five_details.png")
	deadline=Time.get_ticks_msec()+7000
	var flourish: Dictionary={}
	while Time.get_ticks_msec()<deadline:
		await process_frame
		for cue: Dictionary in demo.music.signature_music_report():
			if cue.kind=="quality_flourish_5" and cue.audible:flourish=cue
		if not flourish.is_empty():break
	_check(not flourish.is_empty(),"fulfilled tier-five household plays actual high-register contrapuntal harp and string flourish")
	_camera_keep(keep.house_id)
	await process_frame;await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/04_olden_bell_keep.png")
	var root_keep: Node3D=demo.town.house_roots[keep.house_id]
	_check(root_keep.get_meta("tower_cells",[]).size()==1 and root_keep.get_meta("landmark_bell_asset","").ends_with("教堂悬钟.glb"),"signature retains its recovered bell pavilion inside a renaissance district after clock detail batching")
	demo.focus=Vector3(-35,.7,35);demo.zoom=12;demo._update_camera();await create_timer(.3).timeout
	var free_voice: AudioStreamPlayer
	for player: AudioStreamPlayer in demo.music._effects:
		if not player.playing:free_voice=player;break
	var played: bool=demo.music.play_quality_upgrade("h1",5)
	var filtered:=false
	if free_voice!=null:
		var index:=AudioServer.get_bus_index(free_voice.bus)
		var filter: AudioEffectLowPassFilter=AudioServer.get_bus_effect(index,1)
		filtered=AudioServer.is_bus_effect_enabled(index,1) and filter.cutoff_hz==1800.0
	_check(played and free_voice!=null and free_voice.playing and is_equal_approx(free_voice.volume_db,demo.music.SHORT_GAIN_DB+linear_to_db(.25)) and filtered,"remote upgrade uses real four-short pool at quarter gain with eighteen-hundred-hertz low pass")
	var silent:=true
	for player: AudioStreamPlayer in demo.music._players.values():
		if player.volume_linear!=0.0:silent=false
	_check(silent,"empty camera retains exact zero ordinary long stems with quality and landmark features present")
	FileAccess.open(OUT+"/details.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"flourish":flourish},"\t",true,true))
	print("PHASE_SIX_DETAILS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks.size(),"failures":failures}))
	demo.queue_free();await process_frame;await create_timer(.2).timeout;quit(0 if failures.is_empty() else 1)
func _camera_keep(id: String)->void:
	demo.focus=Vector3(-18,3.4,0);demo.zoom=13;demo.yaw=.4;demo.pitch=.7;demo._update_camera();demo.town.clear_preview()
