extends SceneTree
## Actual window inputs and natural Life processing; no accelerated concerts.
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const EXAMPLE="res://数据/庆典接力样例.json"
const OUT="res://验证记录/庆典接力_2026-10-16"
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
var events:Array=[]
var personal:=PackedByteArray()
var example_bytes:=PackedByteArray()
var began:int=0
var starts:Dictionary={}
var recorder:AudioEffectRecord
var original_effect_count:int=0
var record_started:int=0

func _initialize()->void: _run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"label":label,"passed":ok})
	if not ok: failures.append(label);push_error(label)
func _key(code:int,ctrl:bool=false)->void:
	for down:bool in [true,false]:
		var event:=InputEventKey.new();event.keycode=code;event.pressed=down;event.ctrl_pressed=ctrl
		root.push_input(event);await process_frame
func _click(at:Vector2)->void:
	var motion:=InputEventMouseMotion.new();motion.position=at;motion.global_position=at
	root.push_input(motion);await process_frame
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down
		root.push_input(event);await process_frame
func _wait()->void:
	var deadline:int=Time.get_ticks_msec()+20000
	while (demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy) and Time.get_ticks_msec()<deadline: await process_frame
	_check(not demo.edit_pending() and not demo._edit_ui_pending and not demo.gallery.busy,"production edit or collection transaction finishes")
	await physics_frame;await process_frame
func _capture(label:String)->void:
	demo.town.clear_preview();await process_frame;await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"actual GL screenshot saved: "+label)
func _identity()->Array:
	var result:Array=[]
	for key:String in demo.music.STEMS:
		var player:AudioStreamPlayer=demo.music._players[key]
		var pcm:PackedByteArray=player.stream.data
		var digest:=HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(pcm)
		result.append([key,player.get_instance_id(),player.stream.get_instance_id(),digest.finish().hex_encode()])
	for player:AudioStreamPlayer in demo.music._effects: result.append(player.get_instance_id())
	return result
func _record_start()->void:
	original_effect_count=AudioServer.get_bus_effect_count(0)
	recorder=AudioEffectRecord.new();recorder.format=AudioStreamWAV.FORMAT_16_BITS
	AudioServer.add_bus_effect(0,recorder)
	recorder.set_recording_active(true);record_started=Time.get_ticks_msec()
func _record_stop()->void:
	if recorder==null: return
	recorder.set_recording_active(false)
	var wav:AudioStreamWAV=recorder.get_recording()
	var report:Dictionary={"method":"Actual production Master AudioEffectRecord; no additional player or offline mixing", "wall_ms":Time.get_ticks_msec()-record_started}
	if wav!=null:
		var pcm:PackedByteArray=wav.data
		var peak:float=0.0
		for offset in range(0,pcm.size()-1,2): peak=maxf(peak,absf(float(pcm.decode_s16(offset))/32768.0))
		var duration:float=float(pcm.size())/(float(wav.mix_rate)*2.0*(2.0 if wav.stereo else 1.0))
		var saved:int=wav.save_to_wav(OUT+"/实际庆典接力.wav")
		report.merge({"mix_rate":wav.mix_rate,"stereo":wav.stereo,"seconds":duration,"pcm_bytes":pcm.size(),"peak":peak,"save_error":saved})
		_check(saved==OK and duration>0.1 and peak>0.0,"actual Master recording exports the non-silent observed production mix")
	else: _check(false,"actual Master recorder returns captured production audio")
	for index in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,index)==recorder: AudioServer.remove_bus_effect(0,index)
	_check(AudioServer.get_bus_effect_count(0)==original_effect_count,"temporary recorder restores the original Master effect count")
	facts.recording=report;recorder=null
func _heard_lead(id:String,style:String)->void:
	var deadline:int=Time.get_ticks_msec()+2000
	# The production player deliberately fades with a 2.8/s exponential.
	# Observe its actual settled first phrase within the requested .3..2s,
	# while the existing full performance continues in parallel.
	while float(demo.life.concert_status().elapsed)<1.2 and Time.get_ticks_msec()<deadline: await process_frame
	var status:Dictionary=demo.life.concert_status()
	var source:Dictionary=demo.music.active_source()
	var district:Dictionary=demo.music.district_music_report()
	var gains:Dictionary={}
	for key:String in demo.music.STYLE_TRACKS.values(): gains[key]=demo.music._players[key].volume_db
	var expected_track:String=str(demo.music.STYLE_TRACKS[style])
	_check(str(status.phase)=="playing" and float(status.elapsed)>=0.3 and float(status.elapsed)<=2.0 and str(source.get("role",""))=="lead" and str(source.get("source_id",""))==id and str(source.get("style",""))==style and bool(source.get("audible",false)),"actual first-phrase audible lead switches to "+id+" / "+style)
	_check(str(district.source_id)==id and str(district.style)==style and bool(district.audible) and demo.music._players[expected_track].playing,"actual district report and shared playing style voice belong to "+id+" / "+style)
	if not facts.has("heard_leads"): facts.heard_leads=[]
	facts.heard_leads.append({"elapsed":status.elapsed,"source":source.duplicate(true),"district":district.duplicate(true),"style_gain_db":gains})
func _pick(id:String)->void:
	var origin:=Vector2.ZERO
	for house:Dictionary in demo.state.houses:
		if str(house.id)==id: origin=Vector2(house.origin[0],house.origin[1])
	demo.focus=Vector3(origin.x,0.7,origin.y);demo.zoom=16.0;demo.pitch=0.85;demo.yaw=0.62;demo._update_camera()
	await _key(KEY_5)
	await _click(demo.camera.unproject_position(Vector3(origin.x,1.9,origin.y)))
	_check(demo.tool==4 and demo.selected_house==id,"actual tool-five roof pick selects "+id)
func _press(button:Button)->void:
	var scroll:ScrollContainer=demo.place_panel.find_child("PlaceScroll",true,false)
	scroll.ensure_control_visible(button);await process_frame;await process_frame
	await _click(button.get_global_rect().get_center())
func _observe()->void:
	var original:Callable=demo.life.concert_callback
	demo.life.concert_callback=func(kind:String,venue:String)->void:
		if original.is_valid(): original.call(kind,venue)
		var wall:float=float(Time.get_ticks_msec()-began)/1000.0
		if kind=="started": starts[venue]={"wall":wall,"clock":demo.music._playback_clock()}
		var row:Dictionary={"kind":kind,"venue":venue,"wall_seconds":wall,"clock":demo.music._playback_clock(),"progress":demo.state.life_progress.duplicate(),"relay":demo.life.relay_status(),"concert":demo.life.concert_status()}
		if kind=="finished" and starts.has(venue):
			row.playing_wall_seconds=wall-float(starts[venue].wall)
			row.playing_clock_seconds=demo.music._playback_clock()-float(starts[venue].clock)
		events.append(row)
		print("RELAY_EVENT ",JSON.stringify(row))
func _until_playing(venue:String,limit_ms:int=40000)->bool:
	var deadline:int=Time.get_ticks_msec()+limit_ms
	while Time.get_ticks_msec()<deadline:
		var status:Dictionary=demo.life.concert_status()
		if str(status.phase)=="playing" and str(status.venue_id)==venue: return true
		if not bool(demo.life.relay_status().active): return false
		await process_frame
	return false
func _focused()->void:
	await _pick("h5");await _press(demo.relay_button)
	_check(bool(demo.life.relay_status().active) and demo.life.relay_status().venue_ids==["h5","h6"],"actual relay button starts stable two-venue route queue")
	await _pick("h6");await _press(demo.concert_button)
	_check(not bool(demo.life.relay_status().active) and str(demo.life.concert_status().phase)=="idle" and int(demo.state.life_progress.concerts)==0,"original single-concert button on another venue cancels the whole relay without a completion")
	await _pick("h5");await _press(demo.relay_button)
	var changed:Dictionary=demo.state.set_house_role("h6","residential")
	demo._after_edit(changed,"room");await _wait()
	_check(changed.ok and not bool(demo.life.relay_status().active) and str(demo.life.concert_status().venue_id)=="h5" and str(demo.life.concert_status().phase) in ["gathering","playing"],"future venue role change stops subsequent relay while preserving the genuine valid current performance")
	await _press(demo.concert_button)
	_check(not bool(demo.life.relay_status().active) and int(demo.state.life_progress.concerts)==0,"ending the remaining relay during gathering grants no completion")
	_check(not demo.relay_button.disabled and demo.relay_info.text.contains("再建"),"single-venue entry remains available and visibly explains the missing second connected venue")
	await _press(demo.relay_button)
	_check(not bool(demo.life.relay_status().active) and demo.toast.text.contains("至少两"),"actual single-venue start click explains the route requirement without creating a queue")
	demo._after_edit(demo.state.undo(),"history");await _wait()
	await _press(demo.relay_button)
	var cut:Dictionary=demo.state.remove_road("r2")
	demo._after_edit(cut,"erase");await _wait()
	_check(cut.ok and not bool(demo.life.relay_status().active) and str(demo.life.concert_status().phase)=="idle" and int(demo.state.life_progress.concerts)==0,"removing the actual venue frontage road cancels the genuine current gathering and the whole queue")
	demo._after_edit(demo.state.undo(),"history");await _wait()
	_check(demo.life.relay_candidates("h5")==["h5","h6"],"real road undo restores both route-reachable relay stops")
func _save_restore()->void:
	await _click(demo.gallery_button.get_global_rect().get_center())
	_check(demo.gallery.panel.visible,"actual collection header button opens saving UI mid-performance")
	demo.gallery.panel.title_input.text="庆典第一站 · 中途留存"
	await _click(demo.gallery.panel.save_button.get_global_rect().get_center())
	await _wait()
	var id:String=str(demo.gallery.last_saved_id)
	var saved:Dictionary=demo.gallery.library.read(id)
	_check(saved.ok and not id.is_empty(),"actual save button writes a new isolated work during the real first performance")
	if not saved.ok: return
	var checkpoint:Dictionary=saved.world.journey_checkpoint
	var elapsed:float=float(checkpoint.concert.elapsed)
	_check(checkpoint.schema==2 and checkpoint.relay.venues==["h5","h6"] and int(checkpoint.relay.index)==0 and elapsed>2.0 and elapsed<12.0 and int(saved.world.life_progress.concerts)==0,"saved real checkpoint contains unsettled first-stop relay schema2 and actual remaining time")
	var open_button:Button=demo.gallery.panel.open_buttons[id]
	demo.gallery.panel.scroll.ensure_control_visible(open_button);await process_frame
	await _click(open_button.get_global_rect().get_center())
	await _wait()
	var status:Dictionary=demo.life.concert_status()
	_check(str(demo.gallery.last_opened_id)==id and str(status.phase)=="playing" and str(status.venue_id)=="h5" and absf(float(status.elapsed)-elapsed)<0.25,"actual collection open reconstructs the same in-progress first stop with its saved remaining time")
	_check(bool(demo.life.relay_status().active) and int(demo.life.relay_status().index)==0 and int(demo.state.life_progress.concerts)==0,"loading the ongoing relay neither settles nor skips a stop")
	facts.saved={"id":id,"city_schema":saved.world.schema,"journey_schema":checkpoint.schema,"elapsed_saved":elapsed,"elapsed_restored":status.elapsed,"remaining_saved":24.0-elapsed,"queue":checkpoint.relay.duplicate(true)}
	_observe()
	await _pick("h5")
	await _capture("first_stop_restored")
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	personal=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	example_bytes=FileAccess.get_file_as_bytes(EXAMPLE)
	var source:Dictionary=JSON.parse_string(example_bytes.get_string_from_utf8())
	var clean:bool=true
	for value:Variant in source.life_progress.values(): clean=clean and value==0
	for key:String in ["bakery_supply","workshop_supply","cafe_progress","matinee_credits","matinee_pending","growth_memories","house_improvements","venue_commissions","journey_checkpoint"]: clean=clean and source.get(key,{}).is_empty()
	_check(clean,"authored relay source starts with zero actual business achievements inventory credits and checkpoints")
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库_"+str(Time.get_ticks_usec())
	root.add_child(demo)
	if "--relay-example" not in OS.get_cmdline_user_args():
		demo._after_edit(demo.state.restore(source),"history");await _wait()
	var deadline:int=Time.get_ticks_msec()+25000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(DisplayServer.get_name()!="headless" and not demo.music.audio_report.is_empty() and demo.state.houses.size()==6,"actual GL isolated relay sample and production music bank load")
	if DisplayServer.get_name()=="headless" or demo.music.audio_report.is_empty(): await _finish();return
	var identity:Array=_identity()
	var clock_before:float=demo.music._playback_clock()
	if "--core-only" in OS.get_cmdline_user_args():
		facts.focused_reference="废弃/首轮_淡入采样过早/live.json: focused real cancel future-role and road-disconnection checks all passed; this run repeats only the unfinished core."
	else: await _focused()
	if not failures.is_empty(): await _finish();return
	began=Time.get_ticks_msec();_observe();_record_start()
	await _pick("h5");await _press(demo.relay_button)
	_check(await _until_playing("h5"),"natural resident walking and actual device phrase gate start the first real performance")
	if str(demo.life.concert_status().phase)!="playing": await _finish();return
	await _heard_lead("h5","warm")
	deadline=Time.get_ticks_msec()+6000
	while str(demo.life.concert_status().phase)=="playing" and float(demo.life.concert_status().elapsed)<3.0 and Time.get_ticks_msec()<deadline: await process_frame
	_check(str(demo.life.concert_status().phase)=="playing" and float(demo.life.concert_status().elapsed)>=3.0,"real first performance reaches a bounded mid-performance save point")
	if str(demo.life.concert_status().phase)!="playing" or float(demo.life.concert_status().elapsed)<3.0: await _finish();return
	await _capture("first_stop_playing")
	await _save_restore()
	if not failures.is_empty(): await _finish();return
	_check(await _until_playing("h6",60000),"after one full real performance the audience naturally walks to the second stop and starts at an actual phrase boundary")
	if str(demo.life.concert_status().venue_id)!="h6": await _finish();return
	await _heard_lead("h6","deep")
	await _pick("h6")
	_check(demo.relay_info.text.contains("第2 / 共2站") and demo.relay_info.text.contains("深流小舞台"),"actual UI identifies the current second venue and relay position")
	await _capture("second_stop_playing")
	deadline=Time.get_ticks_msec()+30000
	while bool(demo.life.relay_status().active) and Time.get_ticks_msec()<deadline: await process_frame
	var completed:Array=[]
	for row:Dictionary in events:
		if str(row.kind)=="finished": completed.append(row)
	_check(not bool(demo.life.relay_status().active) and str(demo.life.concert_status().phase)=="idle" and int(demo.state.life_progress.concerts)==2,"natural second finale ends the queue and settles exactly two real concerts")
	_check(completed.size()==2 and str(completed[0].venue)=="h5" and str(completed[1].venue)=="h6" and float(completed[0].get("playing_wall_seconds",0.0))>=23.8 and float(completed[1].get("playing_wall_seconds",0.0))>=23.8,"both venues finish full twenty-four-second wall-clock performances in order, including saved first-stop continuation")
	_check(completed.size()==2 and bool(completed[0].relay.active) and int(completed[0].relay.index)==1 and str(completed[0].concert.venue_id)=="h6","first finished callback observes already-advanced unsettled second-stop queue")
	_check(int(demo.state.life_progress.auto_concerts)==0 and demo.state.matinee_progress.is_empty() and demo.state.matinee_pending.is_empty(),"manual relay neither invents nor consumes automatic-concert completions")
	_check(_identity()==identity and demo.music._players.size()==9 and demo.music._effects.size()==4,"relay and full collection reload retain thirteen players original stream identities and PCM digests")
	facts.music_clock_elapsed=demo.music._playback_clock()-clock_before
	facts.events=events
	_check(float(facts.music_clock_elapsed)>48.0,"actual production device transport advances beyond both full concerts")
	_record_stop()
	_check(float(facts.recording.get("seconds",0.0))>48.0,"actual Master WAV covers both complete performances and their natural audience travel")
	demo._capture_journeys()
	_check(demo.state.journey_checkpoint.schema==1 and not demo.state.journey_checkpoint.has("relay"),"completed relay returns to ordinary schema1 journey checkpoint without stale queue")
	await _capture("relay_finished")
	root.size=Vector2i(1024,768)
	await _pick("h6")
	var place_scroll:ScrollContainer=demo.place_panel.find_child("PlaceScroll",true,false)
	place_scroll.ensure_control_visible(demo.relay_button)
	for ignored in range(4): await process_frame
	var viewport_bounds:=Rect2(Vector2.ZERO,Vector2(root.size))
	_check(viewport_bounds.encloses(demo.relay_button.get_global_rect()) and place_scroll.get_global_rect().encloses(demo.relay_button.get_global_rect()),"1024 real place-panel scroll exposes the added relay action inside the viewport")
	await _capture("relay_ui_1024")
	await _finish()
func _finish()->void:
	_record_stop()
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal city save remains byte-identical")
	_check(FileAccess.get_file_as_bytes(EXAMPLE)==example_bytes,"authored relay example remains byte-identical")
	var result:Dictionary={"ok":failures.is_empty(),"checks":checks,"check_count":checks.size(),"passed_count":checks.size()-failures.size(),"failures":failures,"facts":facts,"events":events,"scope":"Actual GL production scene with natural Life node processing, real UI invitation/save/open, original device phrase clock, two actual 24s performances, and bounded cancel/future-role/road-disconnection checks. No Life._process acceleration, fabricated business progress or OS-level input. Future-invalid focused check covers preserving current gathering; completion after future invalidation is not claimed.","command":"Godot_v4.7.2-stable_win64_console.exe --path . --rendering-method gl_compatibility --max-fps 180 --script tools/check_creation_concert_relay_live.gd -- --isolated-session --relay-example"+(" --core-only" if "--core-only" in OS.get_cmdline_user_args() else "")}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("CREATION_CONCERT_RELAY_LIVE ",JSON.stringify(result))
	if is_instance_valid(demo):
		demo.life.set_process(false);demo.music.set_process(false)
		for player:AudioStreamPlayer in demo.music._players.values(): player.stop()
		for player:AudioStreamPlayer in demo.music._effects: player.stop()
		await create_timer(0.15).timeout
		demo.queue_free();await process_frame;await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
