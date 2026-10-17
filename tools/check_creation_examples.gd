extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/示范河湾_2026-10-16"
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _key(code:int,ctrl:bool=false)->void:
	for down:bool in [true,false]:
		var event:=InputEventKey.new();event.keycode=code;event.ctrl_pressed=ctrl;event.pressed=down;root.push_input(event);await process_frame
func _click(at:Vector2)->void:
	var motion:=InputEventMouseMotion.new();motion.position=at;motion.global_position=at;root.push_input(motion);await process_frame
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.button_index=MOUSE_BUTTON_LEFT;event.position=at;event.global_position=at;event.pressed=down;root.push_input(event);await process_frame
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+20000
	while (demo.gallery.busy or demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	await process_frame
func _identities()->Array:
	var rows:Array=[]
	for id:String in demo.music.STEMS:
		var player:AudioStreamPlayer=demo.music._players[id];var data:PackedByteArray=player.stream.data
		var digest:=HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(data)
		rows.append([id,player.get_instance_id(),player.stream.get_instance_id(),digest.finish().hex_encode()])
	for player:AudioStreamPlayer in demo.music._effects:rows.append(player.get_instance_id())
	for id:String in demo.ambience.players:
		var player:AudioStreamPlayer=demo.ambience.players[id];rows.append([id,player.get_instance_id(),player.stream.get_instance_id()])
	return rows
func _capture(label:String)->void:
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"actual example-gallery image saved: "+label)
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var catalog=load("res://scripts/world/city_creation_examples.gd")
	var entries:Array=catalog.entries();var original_sources:Dictionary={};var valid:=entries.size()==17;var covers:=true
	var source_bytes:Dictionary={}
	for row:Dictionary in catalog.CATALOG:
		var path:String="res://数据/"+str(row.file)
		source_bytes[path]=FileAccess.get_file_as_bytes(path)
	for entry:Dictionary in entries:
		var chosen:Dictionary=catalog.read(entry.id);var state:=State.new()
		valid=valid and bool(entry.valid) and chosen.ok and state.restore(chosen.world).ok
		if chosen.ok:original_sources[entry.id]=var_to_bytes(chosen.world)
		var cover:Image=Image.load_from_file(entry.cover_path) if not str(entry.cover_path).is_empty() else null
		covers=covers and cover!=null and cover.get_size()==Vector2i(480,300)
	_check(valid,"all seventeen shipped examples pass actual strict State restoration")
	_check(covers,"all seventeen actual example covers decode at480x300")
	var personal:PackedByteArray=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库_"+str(Time.get_ticks_usec());root.add_child(demo)
	var deadline:=Time.get_ticks_msec()+25000
	while (demo.music.audio_report.is_empty() or not demo.ambience.report().ready) and Time.get_ticks_msec()<deadline:await process_frame
	var identities:Array=_identities();var clock:float=demo.music._playback_clock();var old_city:RefCounted=demo.state
	var edit:Dictionary=demo.state.add_cell("h1",0,0,1,"room");demo._after_edit(edit,"room");await _wait()
	# Genuine daily Life has run during setup/edit; pause only for exact capture.
	demo.life.set_process(false);demo._capture_journeys();var original:Dictionary=demo.state.snapshot()
	await _key(KEY_O,true)
	_check(demo.gallery.panel.visible,"actual CtrlO opens shared work collection")
	var tabs:TabBar=demo.gallery.panel.tabs
	await _click(tabs.global_position+tabs.get_tab_rect(1).get_center())
	await process_frame;await process_frame
	await _capture("01_示范河湾画廊")
	var button:Button=demo.gallery.panel.open_buttons.get("example_manual_links")
	if button!=null:
		button.grab_focus();await process_frame;await process_frame
		demo.gallery.panel.scroll.ensure_control_visible(button);await process_frame;await process_frame
	_check(tabs.current_tab==1 and button!=null and not button.disabled,"actual examples tab exposes a valid cross-river manual-link card")
	if button!=null:await _click(button.get_global_rect().get_center())
	await _wait();demo.life.set_process(false)
	_check(demo.gallery.last_opened_id=="example_manual_links" and demo.state!=old_city and demo.ambience.state==demo.state,"actual card click opens example with fresh city and retargets existing ambience")
	var kept:Dictionary=demo.gallery.library.read(demo.gallery.last_auto_id)
	_check(edit.ok and kept.ok and kept.world.houses==original.houses and kept.world.journey_checkpoint==original.journey_checkpoint,"example switch truly retains edited houses and actual resident checkpoint before leaving")
	var example_world:Dictionary=catalog.read("example_manual_links").world
	_check(demo.state.houses==example_world.houses and not demo.state.musical_links.is_empty(),"opened real cross-river example contains its authored houses and musical links")
	await _capture("02_打开跨河共鸣示范")
	var kept_id:String=str(kept.get("id",""))
	if not kept_id.is_empty():
		demo.gallery.open_work(kept_id)
		var busy:bool=demo.gallery.busy
		demo.gallery.open_example("example_creation")
		await _wait();demo.life.set_process(false)
		_check(busy and demo.gallery.last_opened_id==kept_id and demo.state.houses==original.houses,"automatic retained work reopens exactly and busy rejects a simultaneous example switch")
		var saved_people:Array=kept.world.journey_checkpoint.get("residents",[]);var current_people:Array=demo.life.checkpoint().get("residents",[])
		_check(not saved_people.is_empty() and current_people.size()==saved_people.size(),"reopened automatically retained city restores actual resident journey population")
	var unchanged:=true
	for id:String in original_sources:unchanged=unchanged and var_to_bytes(catalog.read(id).world)==original_sources[id]
	for path:String in source_bytes:unchanged=unchanged and FileAccess.get_file_as_bytes(path)==source_bytes[path]
	_check(unchanged,"viewing and opening examples leaves all seventeen source worlds unchanged")
	var wall:Array[float]=[];var draws:Array[float]=[];var previous:=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();wall.append(float(now-previous)/1000);previous=now;draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	wall.sort();draws.sort();facts.performance={"frames":120,"p95_ms":wall[113],"max_ms":wall[-1],"draw_median":draws[60]}
	_check(_identities()==identities and demo.music.get_child_count()==demo.music.STEMS.size()+4 and demo.ambience.players.size()==2 and demo.music._playback_clock()>clock and (FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"example switches preserve existing music PCM fixed Players two ambient streams clocks and personal save")
	facts.examples=entries.size();facts.retained_id=kept_id
	var result:Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"facts":facts};FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("EXAMPLES_CHECK ",JSON.stringify(result))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for player:AudioStreamPlayer in demo.music._players.values():player.stop()
	for player:AudioStreamPlayer in demo.music._effects:player.stop()
	for player:AudioStreamPlayer in demo.ambience.players.values():player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout;quit(0 if failures.is_empty() else 1)
