extends SceneTree
## Five direct calls per scope, separated by real frames. No simulated Life.
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Growth=preload("res://scripts/world/city_creation_growth.gd")
const OUT="res://验证记录/经营刷新_2026-10-16"
const EXAMPLE="res://数据/经营河湾样例.json"
var demo
var checks:Array=[]
var failures:Array[String]=[]
var personal:=PackedByteArray()
var source_bytes:=PackedByteArray()
func _initialize()->void: _run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"label":label,"passed":ok})
	if not ok: failures.append(label);push_error(label)
func _identity()->Array:
	var result:Array=[]
	for key:String in demo.music.STEMS:
		var player:AudioStreamPlayer=demo.music._players[key]
		result.append([key,player.get_instance_id(),player.stream.get_instance_id()])
	for player:AudioStreamPlayer in demo.music._effects: result.append(player.get_instance_id())
	return result
func _distribution(values:Array)->Dictionary:
	var sorted:Array=values.duplicate();sorted.sort()
	return {"samples_ms":values,"count":values.size(),"min_ms":sorted[0],"median_ms":sorted[int((sorted.size()-1)*0.5)],"max_ms":sorted[-1]}
func _rebuild_journal()->void:
	demo.journal.set("_signature",[])
	demo.journal.refresh()
func _journal_card_ids()->Array:
	var result:Array=[]
	for child:Node in demo.journal.cards.get_children(): result.append(child.get_instance_id())
	return result
func _run()->void:
	var rebuild_only:bool="--journal-rebuild-only" in OS.get_cmdline_user_args()
	var report_name:String="microprobe_journal_rebuild" if rebuild_only else "microprobe"
	var evidence_directory:String=OUT
	var args:PackedStringArray=OS.get_cmdline_user_args()
	if args.has("--profile-output") and args.find("--profile-output")+1<args.size() and args[args.find("--profile-output")+1]=="after": evidence_directory=OUT+"/after_microprobe"
	assert(not FileAccess.file_exists(evidence_directory+"/"+report_name+".json"),"Preserve the existing microprobe capture.")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(evidence_directory))
	personal=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	source_bytes=FileAccess.get_file_as_bytes(EXAMPLE)
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=evidence_directory+"/microprobe_临时作品库_"+str(Time.get_ticks_usec())
	root.add_child(demo);demo.life.set_process(false)
	if "--town-example" not in OS.get_cmdline_user_args():
		demo._after_edit(demo.state.restore(JSON.parse_string(source_bytes.get_string_from_utf8())),"history")
		while demo.edit_pending() or demo._edit_ui_pending: await process_frame
	var deadline:int=Time.get_ticks_msec()+25000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(DisplayServer.get_name()!="headless" and not demo.music.audio_report.is_empty() and demo.state.houses.size()==28,"actual GL twenty-eight-house scene and production PCM bank are ready")
	var results:Dictionary={}
	if DisplayServer.get_name()!="headless" and not demo.music.audio_report.is_empty():
		demo.selected_house="h7";demo.select_tool(0)
		var before:Dictionary=demo.state.snapshot().duplicate(true)
		var dirty_before:bool=demo.state.dirty
		var identity:Array=_identity()
		var clock:float=demo.music._playback_clock()
		var calls:Array=[
			{"name":"Demo._refresh_district","call":func()->void:demo._refresh_district()},
			{"name":"Demo._refresh_cafes","call":func()->void:demo._refresh_cafes()},
			{"name":"Journal.refresh","call":func()->void:demo.journal.refresh()},
			{"name":"Growth.report","call":func()->void:Growth.report(demo.state)},
			{"name":"State.refresh_growth","call":func()->void:demo.state.refresh_growth()},
			{"name":"Demo._update_hover","call":func()->void:demo._update_hover()},
			{"name":"Life.district_reply_pairs","call":func()->void:demo.life.district_reply_pairs()},
			{"name":"Town.update_cafes(cafe_view)","call":func()->void:demo.town.update_cafes(demo.life.cafe_view())}
		]
		if rebuild_only:
			calls=[{"name":"Journal.cache_hit","repeat":5,"call":func()->void:demo.journal.refresh()}, {"name":"Journal.hidden_cache_invalidated","repeat":1,"call":_rebuild_journal}]
		var started:int=Time.get_ticks_usec()
		for item:Dictionary in calls:
			var samples:Array=[]
			var next_frames:Array=[]
			var card_ids:Array=_journal_card_ids() if rebuild_only else []
			for ignored in range(int(item.get("repeat",5))):
				await process_frame
				var began:int=Time.get_ticks_usec()
				item.call.call()
				samples.append(float(Time.get_ticks_usec()-began)/1000.0)
				if rebuild_only:
					var ended:int=Time.get_ticks_usec()
					await process_frame
					next_frames.append(float(Time.get_ticks_usec()-ended)/1000.0)
			results[str(item.name)]=_distribution(samples)
			if rebuild_only:
				results[str(item.name)].next_frame_wall_ms=next_frames
				results[str(item.name)].card_ids_before=card_ids
				results[str(item.name)].card_ids_after=_journal_card_ids()
				results[str(item.name)].panel_hidden=not demo.journal.panel.visible
		if rebuild_only:
			_check(results["Journal.cache_hit"].card_ids_before==results["Journal.cache_hit"].card_ids_after and results["Journal.hidden_cache_invalidated"].card_ids_before==results["Journal.hidden_cache_invalidated"].card_ids_after and not demo.journal.panel.visible,"hidden journal retains the same real cards through ordinary hits and explicit UI-cache invalidation")
			results["journal_cache_scope"]="Artificial UI cache invalidation only: one _signature=[] followed by original refresh while hidden. No State or achievement change. It models changed journal inputs, not an observed natural achievement event; following-frame wall time includes deferred free/layout/render/scheduling and is not pure thread CPU."
		_check(demo.state.snapshot()==before and demo.state.dirty==dirty_before,"all direct refresh calls leave complete State snapshot revision and dirty flag unchanged")
		_check(not demo.life.is_processing(),"Life remains paused with no accelerated processing or production")
		_check(_identity()==identity and demo.music._players.size()==9 and demo.music._effects.size()==4 and demo.music._playback_clock()>clock,"thirteen original players and stream identities persist while real production transport advances")
		results["context"]={"seconds":float(Time.get_ticks_usec()-started)/1000000.0,"device_clock_advance":demo.music._playback_clock()-clock,"schema":before.schema,"state_revision":before.revision,"selected_house":demo.selected_house,"tool":demo.tool,"life_progress":demo.state.life_progress.duplicate(),"fps_cap":180}
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal city-save bytes remain unchanged")
	_check(FileAccess.get_file_as_bytes(EXAMPLE)==source_bytes,"authored operating-town source bytes remain unchanged")
	var report:Dictionary={"ok":failures.is_empty(),"check_count":checks.size(),"passed_count":checks.size()-failures.size(),"checks":checks,"failures":failures,"results":results,"scope":"One short actual GL production-scene microprobe. Five direct original calls per scope, each preceded by a real process_frame; no Life._process calls new achievements inventory writes or product edits. Measurements are elapsed wall time inside the call, including OS scheduling and nested work, not pure thread CPU. Small distributions locate repeated expensive scopes; isolated outliers do not establish CPU or GPU causality. Normal Demo refresh and Music continue between samples.","command":"Godot_v4.7.2-stable_win64_console.exe --path . --rendering-method gl_compatibility --max-fps 180 --script tools/profile_creation_ui_refresh.gd -- --isolated-session --town-example"}
	report.command+=(" --journal-rebuild-only" if rebuild_only else "")
	if evidence_directory!=OUT: report.command+=" --profile-output after"
	FileAccess.open(evidence_directory+"/"+report_name+".json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true))
	print("CREATION_UI_MICROPROBE ",JSON.stringify(report))
	demo.life.set_process(false);demo.music.set_process(false)
	for player:AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player:AudioStreamPlayer in demo.music._effects: player.stop()
	await create_timer(0.15).timeout
	demo.queue_free();await process_frame;await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
