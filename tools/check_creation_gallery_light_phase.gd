extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/作品光线往返_2026-10-17"
var demo
var checks:Array=[]
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _phase_ok(phase:int)->bool:
	return demo.light_phase==phase and demo.evening==(phase>=1) and demo.music.night==(phase==2) and demo.town.water_material.get_shader_parameter("night")==float(phase==2) and demo.town.wildlife._night==(phase==2) and demo.ambience.report().evening==(phase>=1)
func _audio()->Array:
	var rows:Array=[]
	for p:AudioStreamPlayer in demo.music._players.values():rows.append([p.get_instance_id(),p.stream.get_instance_id()])
	for p:AudioStreamPlayer in demo.music._effects:rows.append(p.get_instance_id())
	return rows
func _run()->void:
	if DisplayServer.get_name()=="headless":push_error("Requires actual GL viewport");quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/作品库_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false)
	var deadline:=Time.get_ticks_msec()+20000
	while (demo.music.audio_report.is_empty() or not demo.ambience.report().ready) and Time.get_ticks_msec()<deadline:await process_frame
	var identities:=_audio();var clock:float=demo.music._playback_clock()
	demo._toggle_light();demo._toggle_light()
	_check(_phase_ok(2),"night phase propagates to environment, water, wildlife, ambience and music")
	await demo.gallery.save_work("星夜作品")
	if demo.gallery.last_saved_id.is_empty():
		_check(false,"night work saves and publishes: "+str(demo.gallery.panel.status_label.text))
		var failed_report={"ok":false,"checks":checks,"failures":failures}
		FileAccess.open(OUT+"/结果.json",FileAccess.WRITE).store_string(JSON.stringify(failed_report,"\t"));print("GALLERY_LIGHT_PHASE ",JSON.stringify(failed_report))
		demo.queue_free();await process_frame;quit(1);return
	var saved:Dictionary=demo.gallery.library.read(demo.gallery.last_saved_id)
	_check(saved.ok and int(saved.view.get("light_phase",-1))==2 and saved.view.evening,"new work stores explicit third light phase and compatible evening flag")
	demo._toggle_light()
	_check(demo.light_phase==0,"change away from the saved night view")
	await demo.gallery.open_work(str(saved.id));await process_frame
	_check(demo.gallery.last_opened_id==saved.id and _phase_ok(2),"opening a new night work restores exact nocturne across all linked systems")
	var cover:=Image.create(16,16,false,Image.FORMAT_RGB8);cover.fill(Color("638b75"))
	var library=demo.gallery.library;var old_focus:Vector3=demo.focus
	var legacy_view={"focus":[old_focus.x,old_focus.y,old_focus.z],"yaw":demo.yaw,"pitch":demo.pitch,"zoom":demo.zoom,"evening":true}
	var old_save:Dictionary=library.save("旧夕照作品",demo.state.snapshot(),legacy_view,cover)
	var old_read:Dictionary=library.read(str(old_save.get("id","")))
	_check(old_save.ok and old_read.ok and not old_read.view.has("light_phase"),"legacy five-field evening view still validates and reads")
	demo._toggle_light()
	await demo.gallery.open_work(str(old_read.id));await process_frame
	_check(_phase_ok(1),"legacy evening work reopens at the documented evening fallback")
	var malformed:Dictionary=legacy_view.duplicate(true);malformed.evening=false;malformed.light_phase=2
	_check(not library.save("不一致镜头",demo.state.snapshot(),malformed,cover).ok,"contradictory phase and legacy flag reject atomically")
	var day_view:Dictionary=legacy_view.duplicate(true);day_view.evening=false;day_view.light_phase=3
	_check(not library.save("越界镜头",demo.state.snapshot(),day_view,cover).ok,"out-of-range light phase rejects atomically")
	_check(_audio()==identities and demo.music._playback_clock()>clock,"phase roundtrips preserve PCM identities and continuous transport")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal continue-save bytes remain untouched")
	var report={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":{"restored_phase":demo.light_phase,"pcm_players":demo.music.get_child_count(),"legacy_fallback":1}}
	FileAccess.open(OUT+"/结果.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("GALLERY_LIGHT_PHASE ",JSON.stringify(report))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for p:AudioStreamPlayer in demo.music._players.values():p.stop()
	for p:AudioStreamPlayer in demo.music._effects:p.stop()
	for p:AudioStreamPlayer in demo.ambience.players.values():p.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout;quit(0 if failures.is_empty() else 1)
