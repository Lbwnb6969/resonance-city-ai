extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Links=preload("res://scripts/world/city_creation_manual_links.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/跨河共鸣_2026-10-16"
const SAMPLE="res://数据/跨河共鸣样例.json"
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
var demo
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _json(data:Dictionary)->Dictionary:return JSON.parse_string(JSON.stringify(data,"",true,true))
func _city():
	var city:=State.new();city.initialize()
	var west:Array[Vector2]=[Vector2(-8,-6),Vector2(-2.4,1)]
	var east:Array[Vector2]=[Vector2(9,3)]
	city.add_district(west,8,"warm");city.add_district(east,4,"deep")
	return city
func _cpu(city)->void:
	var before:Dictionary=city.snapshot();var old:=State.new()
	_check(old.restore(_json(before)).ok and old.musical_links.is_empty(),"old unlinked city restores without a new authored link field")
	var added:Dictionary=city.link_districts("d2","d1")
	_check(added.ok and added.changed and city.musical_links==[{"from":"d1","to":"d2"}],"real State canonicalizes reverse-direction musical link")
	var snapshot:Dictionary=city.snapshot();var history:int=city._undo.size()
	_check(city.link_districts("d1","d2").no_op and city.snapshot()==snapshot and city._undo.size()==history,"duplicate musical link is a complete history and revision no-op")
	var fresh:=State.new()
	_check(snapshot.schema==9 and fresh.restore(_json(snapshot)).ok and fresh.musical_links==city.musical_links,"actual schema-nine JSON preserves musical endpoints")
	var bad:Dictionary=snapshot.duplicate(true);bad.musical_links[0].to="d999";var unchanged:Dictionary=fresh.snapshot()
	_check(not fresh.restore(bad).ok and fresh.snapshot()==unchanged and not city.link_districts("d1","d1").ok,"missing or self endpoint rejects atomically")
	_check(city.undo().ok and city.musical_links.is_empty() and city.redo().ok and city.musical_links==snapshot.musical_links,"real undo and redo restore exact manual link")
	var pairs:Array=Links.derive(city)
	_check(pairs.size()==1 and bool(pairs[0].manual),"actual separated district members derive manual house pair without a bridge")
	_check(city.remove_district("d2").ok and city.musical_links.is_empty() and city.undo().ok and city.musical_links==snapshot.musical_links,"deleting a district clears associated links in the same undoable transaction")
	facts.cpu_pairs=pairs
	if failures.is_empty() and not FileAccess.file_exists(SAMPLE): city.save_city(SAMPLE)
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+15000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	await process_frame
func _key(code:int)->void:
	for down:bool in [true,false]:
		var event:=InputEventKey.new();event.keycode=code;event.pressed=down;root.push_input(event);await process_frame
func _motion(at:Vector2)->void:
	var event:=InputEventMouseMotion.new();event.position=at;event.global_position=at;root.push_input(event);await process_frame
func _mouse(at:Vector2,down:bool,shift:bool=false)->void:
	var event:=InputEventMouseButton.new();event.button_index=MOUSE_BUTTON_LEFT;event.position=at;event.global_position=at;event.pressed=down;event.shift_pressed=shift;root.push_input(event);await process_frame
func _audio()->Array:
	var rows:Array=[]
	for id:String in demo.music.STEMS:
		var p:AudioStreamPlayer=demo.music._players[id]
		var digest:=HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(p.stream.data)
		rows.append([id,p.get_instance_id(),p.stream.get_instance_id(),digest.finish().hex_encode()])
	for p:AudioStreamPlayer in demo.music._effects:rows.append(p.get_instance_id())
	for id:String in demo.ambience.players:
		var p:AudioStreamPlayer=demo.ambience.players[id];rows.append([id,p.get_instance_id(),p.stream.get_instance_id()])
	return rows
func _heard(phase:String,seconds:float)->Dictionary:
	var deadline:int=Time.get_ticks_msec()+int(seconds*1000)
	while Time.get_ticks_msec()<deadline:
		await process_frame
		var report:Dictionary=demo.music.reply.report()
		if bool(report.get("manual",false)) and report.phase==phase and report.audible and float(report.elapsed)>.12:return report.duplicate(true)
	return {}
func _live()->void:
	var personal:PackedByteArray=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false)
	var city=_city();demo._after_edit(demo.state.restore(_json(city.snapshot())),"history");await _wait()
	var deadline:=Time.get_ticks_msec()+25000
	while (demo.music.audio_report.is_empty() or not demo.ambience.report().ready) and Time.get_ticks_msec()<deadline:await process_frame
	var audio:Array=_audio();var clock:float=demo.music._playback_clock()
	demo.focus=Vector3(.5,.7,-1.5);demo.zoom=27;demo.pitch=.85;demo.yaw=.62;demo._update_camera();await _key(KEY_8)
	var mode:CheckButton=demo.find_child("DistrictLinkMode",true,false)
	_check(mode!=null and mode.visible,"real tool eight exposes manual district-link gesture mode")
	if mode!=null:
		var point:Vector2=mode.get_global_rect().get_center();await _motion(point);await _mouse(point,true);await _mouse(point,false)
		var a:Vector2=demo.camera.unproject_position(Vector3(-5,0,-2));var b:Vector2=demo.camera.unproject_position(Vector3(9,0,3))
		await _motion(a);await _mouse(a,true);await _motion(b);await _mouse(b,false);await _wait()
	_check(demo.state.musical_links.size()==1 and demo.life.house_connected("h4") and not demo.life.house_connected("h6"),"actual Window district drag links opposite banks while the eastern house still has no bridge route")
	var call:Dictionary=await _heard("call",28);var answer:Dictionary=await _heard("answer",5)
	_check(not call.is_empty() and not answer.is_empty() and answer.source_id!=call.source_id,"actual phrase clock plays an audible cross-river manual call and opposite-house answer")
	facts.reply={"call":call,"answer":answer}
	demo.ui_layer.visible=false;demo.town.clear_preview();await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/01_无桥跨河共鸣.png")==OK,"actual cross-river answer scene saved")
	demo.life.set_process(true);var invited:Dictionary=demo.life.invite_concert("h4");deadline=Time.get_ticks_msec()+70000
	var playing:=false;var finale:=false;var chorus:=false;var final_mix:Dictionary={}
	while invited.ok and Time.get_ticks_msec()<deadline and not finale:
		await process_frame
		var snapshot:Dictionary=demo.resonance_snapshot
		if str(snapshot.get("phase",""))!="playing" or not bool(snapshot.get("audible",false)):continue
		playing=true
		var report:Dictionary=demo.music.music_report()
		chorus=chorus or report.get("linked_chorus_ids",[]).has("h6")
		var mix:Dictionary=report.get("linked_finale_mix",{})
		if int(snapshot.get("phrase",-1))==7 and float(snapshot.get("elapsed",0.0))>21.9 and not mix.is_empty():finale=true;final_mix=mix
	_check(playing and chorus and finale and final_mix.get("weights",{}).has("deep"),"real local gathering and final performance phrase include isolated eastern district chorus and its linked style mix")
	facts.concert={"invitation":invited,"playing":playing,"linked_chorus":chorus,"finale":finale,"mix":final_mix,"status":demo.life.concert_status()}
	facts.concert["remote_rig"]=demo.town.resonance.diagnostics().houses.get("h6",{})
	facts.concert["deep_player_db"]=demo.music._players.wood_deep.volume_db
	_check(bool(facts.concert.remote_rig.get("chorus",false)) and float(facts.concert.remote_rig.get("weight",0))>.6 and float(facts.concert.deep_player_db)>-30,"actual remote window rig and existing deep-theme long Player participate in the audible final phrase")
	await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/02_隔岸参与终章.png")
	demo.life.cancel_concert();demo.life.set_process(false)
	demo.ui_layer.visible=true
	var a:Vector2=demo.camera.unproject_position(Vector3(-5,0,-2));var b:Vector2=demo.camera.unproject_position(Vector3(9,0,3))
	await _motion(a);await _mouse(a,true,true);await _motion(b);await _mouse(b,false,true);await _wait()
	_check(demo.state.musical_links.is_empty() and demo.music.manual_reply_pairs().is_empty() and demo.town.districts_layer.find_child("manual_d1_d2",true,false)==null,"actual Shift drag unlinks districts and removes manual reply source and saved arc together")
	var wall:Array[float]=[];var draws:Array[float]=[];var previous:=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();wall.append(float(now-previous)/1000);previous=now;draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	wall.sort();draws.sort();facts.performance={"frames":120,"p95_ms":wall[113],"max_ms":wall[-1],"draw_median":draws[60]}
	_check(_audio()==audio and demo.music.get_child_count()==demo.music.STEMS.size()+4 and demo.ambience.players.size()==2 and demo.music._playback_clock()>clock and (FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"manual links preserve fixed music Players two ambient voices transport and personal city bytes")
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for p:AudioStreamPlayer in demo.music._players.values():p.stop()
	for p:AudioStreamPlayer in demo.music._effects:p.stop()
	for p:AudioStreamPlayer in demo.ambience.players.values():p.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));var city=_city();_cpu(city)
	if "--live" in OS.get_cmdline_user_args() and failures.is_empty():await _live()
	var result:Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+("/live.json" if "--live" in OS.get_cmdline_user_args() else "/state.json"),FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("MANUAL_LINK_CHECK ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)
