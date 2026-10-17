extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/自然环境声_2026-10-16"
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _music_ids()->Array:
	var rows:Array=[]
	for id:String in demo.music.STEMS:
		var player:AudioStreamPlayer=demo.music._players[id];var data:PackedByteArray=player.stream.data
		var digest:=HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(data)
		rows.append([id,player.get_instance_id(),player.stream.get_instance_id(),digest.finish().hex_encode()])
	for player:AudioStreamPlayer in demo.music._effects:rows.append(player.get_instance_id())
	return rows
func _ambience_ids()->Array:
	var rows:Array=[]
	for key:String in demo.ambience.players:
		var player:AudioStreamPlayer=demo.ambience.players[key];rows.append([key,player.get_instance_id(),player.stream.get_instance_id()])
	return rows
func _view(at:Vector2,zoom_value:float=9)->void:
	demo.focus=Vector3(at.x,.7,at.y);demo.zoom=zoom_value;demo._update_camera()
	await create_timer(.3).timeout
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+15000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	await create_timer(.3).timeout
func _button(button:Button)->void:
	var at:Vector2=button.get_global_rect().get_center()
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.button_index=MOUSE_BUTTON_LEFT;event.position=at;event.global_position=at;event.pressed=down;root.push_input(event);await process_frame
func _record()->void:
	var original_bus_count:int=AudioServer.bus_count;var name_value:String="AmbienceFixture_"+str(Time.get_ticks_usec())
	AudioServer.add_bus();var bus:int=AudioServer.bus_count-1;AudioServer.set_bus_name(bus,name_value);AudioServer.set_bus_send(bus,"Master")
	var effect:=AudioEffectRecord.new();effect.format=AudioStreamWAV.FORMAT_16_BITS;AudioServer.add_bus_effect(bus,effect)
	var originals:Dictionary={}
	for key:String in demo.ambience.players:originals[key]=demo.ambience.players[key].bus;demo.ambience.players[key].bus=name_value
	effect.set_recording_active(true);var recording_started:int=Time.get_ticks_usec()
	var wall:Array[float]=[];var draws:Array[float]=[];var previous:=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();wall.append(float(now-previous)/1000);previous=now;draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	await create_timer(maxf(0,5.0-float(Time.get_ticks_usec()-recording_started)/1000000)).timeout
	demo._toggle_light();await create_timer(5).timeout
	effect.set_recording_active(false);var recording:AudioStreamWAV=effect.get_recording()
	var peak:=0.0;var seconds:=0.0;var saved:=false
	if recording!=null:
		var bytes:PackedByteArray=recording.data
		for index in range(bytes.size()/2):peak=maxf(peak,absf(float(bytes.decode_s16(index*2)))/32768)
		seconds=float(bytes.size())/(2*recording.mix_rate*(2 if recording.stereo else 1));saved=recording.save_to_wav(OUT+"/昼夕生产环境声.wav")==OK
	for key:String in originals:demo.ambience.players[key].bus=originals[key]
	AudioServer.remove_bus(bus)
	wall.sort();draws.sort();facts.performance={"frames":120,"p95_ms":wall[113],"max_ms":wall[-1],"draw_median":draws[60]}
	facts.recording={"seconds":seconds,"peak":peak,"saved":saved,"method":"Actual two production ambience Players routed through temporary recording bus; Music excluded, daylight then real evening toggle."}
	_check(saved and seconds>=9.5 and peak>0 and peak<.035 and AudioServer.bus_count==original_bus_count,"actual daylight-to-evening production ambience WAV records non-silence below mix bound and restores buses")
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:PackedByteArray=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false)
	var deadline:=Time.get_ticks_msec()+25000
	while (demo.music.audio_report.is_empty() or not demo.ambience.report().ready) and Time.get_ticks_msec()<deadline:await process_frame
	var report:Dictionary=demo.ambience.report();var audio:Array=_music_ids();var ambience:Array=_ambience_ids();var clock:float=demo.music._playback_clock()
	_check(DisplayServer.get_name()!="headless" and report.ready and report.player_count==2 and report.pcm.water_loaded,"actual GL readies two fixed ambience voices including recovered stream water")
	await _view(Vector2(3,0));var near:Dictionary=demo.ambience.report()
	await _view(Vector2(-15,0));var far:Dictionary=demo.ambience.report()
	_check(float(near.weights.water)>float(far.weights.water)+.2,"actual camera near river raises water influence over remote dry ground")
	var points:Array[Vector2]=[Vector2(-15,0)];var pond:Dictionary=demo.state.add_water(points,4,"pond");demo._after_edit(pond,"terrace");await _wait()
	var wet:Dictionary=demo.ambience.report()
	_check(pond.ok and float(wet.weights.water)>float(far.weights.water)+.2,"real newly drawn pond immediately increases current-view water influence")
	demo._after_edit(demo.state.undo(),"history");await _wait()
	# Added trees go through the real authored vegetation API and renderer cull.
	await _view(Vector2(12,-1),15);var before_tree:Dictionary=demo.ambience.report()
	var tree_points:Array[Vector2]=[Vector2(12,-1),Vector2(14,1)]
	var trees:Dictionary=demo.state.add_vegetation_stroke(tree_points,"olive",2.4);demo._after_edit(trees,"terrace");await _wait()
	var forest:Dictionary=demo.ambience.report()
	_check(trees.ok and forest.visible_trees>before_tree.visible_trees and float(forest.weights.birds)>float(before_tree.weights.birds),"real planted visible trees increase forest and daytime bird influence")
	demo._after_edit(demo.state.undo(),"history");await _wait();var removed_tree:Dictionary=demo.ambience.report()
	_check(removed_tree.visible_trees==before_tree.visible_trees,"real vegetation undo resolves visible tree ambience back to original count")
	# Record beside an actual existing grove and water, not a special audio bank.
	await _view(Vector2(11,7),18);var day:Dictionary=demo.ambience.report()
	demo._toggle_light();demo._toggle_light();await create_timer(.3).timeout;var evening:Dictionary=demo.ambience.report()
	_check(evening.evening and float(day.weights.birds)>0 and float(evening.weights.birds)==0 and float(evening.weights.insects)>0,"actual night light button handler swaps daytime birds for night insects")
	demo._toggle_light();await create_timer(.3).timeout
	var before_mute:Dictionary=demo.ambience.report();await _button(demo.music_button);var muted:Dictionary=demo.ambience.report()
	_check(muted.muted and muted.gains.values().all(func(value):return float(value)==0),"actual unified mute button silences all ambience in the input frame")
	await _button(demo.music_button);await create_timer(.3).timeout
	var unmuted:Dictionary=demo.ambience.report()
	_check(not unmuted.muted and unmuted.players.water.elapsed>before_mute.players.water.elapsed,"unmute restores ambience without restarting production playback")
	var gains:Dictionary=unmuted.gains
	var played:bool=demo.music.play_house("h6");await process_frame;await process_frame
	var duck:Dictionary=demo.ambience.report()
	_check(played and bool(duck.foreground) and float(duck.gains.water)<float(gains.water) and float(duck.gains.wind)<float(gains.wind),"real production house pluck drives Demo foreground duck of environmental gains")
	await create_timer(.7).timeout
	_check(float(report.maximum_gain_sum)<=.030001 and float(demo.ambience.report().theoretical_peak)<.035,"four component caps and measured source peaks keep conservative mix below environmental budget")
	facts.views={"near":near,"far":far,"new_pond":wet,"before_tree":before_tree,"forest":forest,"day":day,"evening":evening}
	await _record()
	demo.ui_layer.visible=false;await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/昼夕自然声景.png")==OK,"actual environmental scene screenshot saved")
	_check(_music_ids()==audio and _ambience_ids()==ambience and demo.music.get_child_count()==demo.music.STEMS.size()+4 and demo.music._playback_clock()>clock and (FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"ambience preserves its two voices existing music PCM fixed Players transport and personal save")
	var result:Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"facts":facts};FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("AMBIENCE_CHECK ",JSON.stringify(result))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for player:AudioStreamPlayer in demo.music._players.values():player.stop()
	for player:AudioStreamPlayer in demo.music._effects:player.stop()
	for player:AudioStreamPlayer in demo.ambience.players.values():player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout;quit(0 if failures.is_empty() else 1)
