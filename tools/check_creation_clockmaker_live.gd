extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const Fixture=preload("res://tests/test_city_creation_clockmaker.gd")
const OUT="res://验证记录/四库路线_2026-10-17/Phase8"
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
	await process_frame
func _until(condition:Callable,seconds:float=300.)->bool:
	for i in range(ceili(seconds/.1)):
		if condition.call():return true
		demo.life._process(.1)
		if i%20==0:await process_frame
	return false
func _capture(name_value:String)->void:
	await process_frame;await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+name_value+".png")
func _click(button:Control)->void:
	var at:Vector2=button.get_global_rect().get_center()
	for pressed:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=pressed;root.push_input(event);await process_frame
	await _wait()
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:PackedByteArray=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var city:RefCounted=Fixture.fixture();city.set_house_role("h2","atelier")
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false)
	demo._after_edit(demo.state.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))),"history");await _wait()
	demo.remove_child(demo.life);demo.life.queue_free();demo._setup_life();demo.life.set_process(false)
	demo.selected_house="h2";demo.select_tool(4);demo.focus=Vector3(-10,.8,-2);demo.zoom=13;demo.yaw=.3;demo.pitch=.7;demo._update_camera();demo._refresh_place();await process_frame
	var button:Button=demo.role_buttons.clockmaker
	_check(button.is_visible_in_tree() and not button.disabled and Rect2(Vector2.ZERO,Vector2(root.size)).has_point(button.get_global_rect().get_center()),"seventh role button is genuinely visible and enabled after third-era unlock")
	await _click(button)
	_check(demo.state.houses[1].role=="clockmaker" and demo.life.workshop.workers.size()==1 and demo.life.workshop.workers[0].service_role=="clockmaker","actual role button and completed async publication assign one real clockmaker")
	var worker:Dictionary=demo.life.workshop.workers[0]
	_check(await _until(func():return worker.phase=="to_target"),"real clockmaker attends work makes and carries a physical reserved music box")
	demo._refresh_workshops()
	_check(worker.carry.name=="CarriedMusicBox" and worker.carry.visible and "钟表" in demo.workshop_info.text,"actual carried music-box geometry and live ledger describe the new craft")
	await _capture("06_clockmaker_actual_cargo_and_panel")
	var target:=str(worker.target_id)
	_check(await _until(func():return demo.state.mechanism_level(target)==2),"actual repeated physical deliveries install both music box and weather vane")
	demo.ui_layer.visible=false;demo.focus=Vector3(-14,1,-2);demo.zoom=9;demo._update_camera()
	await create_timer(.2).timeout
	_check(demo.town.craft.mechanism_roots.has(target) and demo.town.craft.mechanism_roots[target].get_meta("mechanism_level")==2,"production renderer publishes delivered mechanical ornaments independently of structural cells")
	await _capture("07_delivered_musicbox_and_roof_vane")
	var deadline:=Time.get_ticks_msec()+30000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline:await process_frame
	var audible:=false;var notes:Array=[]
	deadline=Time.get_ticks_msec()+7500
	while Time.get_ticks_msec()<deadline and not audible:
		await process_frame
		for row:Dictionary in demo.music.signature_music_report():
			if row.kind=="musicbox" and row.audible:audible=true;notes.append(row)
	_check(audible,"actually installed music box plays a current-chord celesta ornament through fixed production short pool")
	_check(demo.state.snapshot().schema==15 and demo.state._validate_craft_supply(demo.state.snapshot(),demo.state._high_watermark.house).ok,"new clockwork ledger uses schema fifteen and conserves all workshop products")
	_check(float(demo.music.audio_report.mix_peaks.absolute_stereo_with_four_short_voices)<1. and demo.music._players.size()==demo.music.STEMS.size() and demo.music._effects.size()==4,"clockwork music and ornaments stay within fixed voice and conservative stereo headroom budget")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated new-role validation preserves personal save bytes")
	var result:Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"target":target,"clockwork":demo.state.house_clockwork,"notes":notes,"mix_peaks":demo.music.audio_report.mix_peaks}
	FileAccess.open(OUT+"/clockmaker_live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("CLOCKMAKER_LIVE ",JSON.stringify(result))
	demo.queue_free();await process_frame;await create_timer(.1).timeout;quit(0 if failures.is_empty() else 1)
