extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Pitch=preload("res://scripts/audio/city_creation_pitch_pluck.gd")
const EraFixture=preload("res://tools/fixtures/city_creation_modern_fixture.gd")
const OUT="res://验证记录/房屋拨弦_2026-10-16"
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _key(code:int)->void:
	for down:bool in [true,false]:
		var event:=InputEventKey.new();event.keycode=code;event.pressed=down;root.push_input(event);await process_frame
func _motion(at:Vector2)->void:
	var event:=InputEventMouseMotion.new();event.position=at;event.global_position=at;root.push_input(event);await process_frame
func _click(at:Vector2)->void:
	await _motion(at)
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.button_index=MOUSE_BUTTON_LEFT;event.position=at;event.global_position=at;event.pressed=down;root.push_input(event);await process_frame
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+15000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	await physics_frame;await process_frame
func _audio()->Array:
	var result:Array=[]
	for id:String in demo.music.STEMS:
		var player:AudioStreamPlayer=demo.music._players[id];var data:PackedByteArray=player.stream.data
		var hash_context:=HashingContext.new();hash_context.start(HashingContext.HASH_SHA256);hash_context.update(data)
		result.append([id,player.get_instance_id(),player.stream.get_instance_id(),hash_context.finish().hex_encode()])
	for player:AudioStreamPlayer in demo.music._effects:result.append(player.get_instance_id())
	return result
func _camera(at:Vector3,zoom_value:float=12)->void:
	demo.focus=at;demo.zoom=zoom_value;demo.pitch=.85;demo.yaw=.62;demo._update_camera();demo.town.clear_preview()
func _house_point(id:String)->Vector2:
	var house:Dictionary=demo.town._house_record(id);var top:=0
	for cell:Dictionary in house.cells:top=maxi(top,int(cell.level))
	return demo.camera.unproject_position(Vector3(house.origin[0],float(house.get("base_y",0))+(top+1)*1.7+.45,house.origin[1]))
func _export_audition()->void:
	var interval:=int(.45*Pitch.RATE);var frames:=interval*14+int(Pitch.DURATION*Pitch.RATE)
	var mixed:=PackedFloat32Array();mixed.resize(frames);var keys:Array=[];var number:=0
	for style:String in Pitch.TIMBRES:
		for band in range(3):
			var key:String=Pitch.stream_key(Pitch.TIMBRES[style],Pitch.pitch(0,band,0));keys.append(key)
			var stream:AudioStreamWAV=demo.music._edit_streams[key];var data:PackedByteArray=stream.data
			for index in range(data.size()/2):mixed[number*interval+index]+=float(data.decode_s16(index*2))/32768.0*db_to_linear(-10)
			number+=1
	var bytes:=PackedByteArray();bytes.resize(frames*2)
	for index in range(frames):bytes.encode_s16(index*2,clampi(roundi(mixed[index]*32767),-32768,32767))
	var output:=AudioStreamWAV.new();output.format=AudioStreamWAV.FORMAT_16_BITS;output.mix_rate=Pitch.RATE;output.data=bytes
	_check(output.save_to_wav(OUT+"/五主题三层拨弦试听.wav")==OK,"production-bank fifteen-note audition WAV exports")
	facts.audition={"keys":keys,"seconds":float(frames)/Pitch.RATE,"gain_db":-10,"scope":"Arranged production bank PCM, not a live UI recording."}
func _era_checks()->void:
	var city: RefCounted=EraFixture.earned_city()
	var restored: Dictionary=demo.state.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true)))
	demo._after_edit(restored,"history");await _wait()
	_check(restored.ok and demo.state.era_unlocks.size()==4 and demo.state.houses.size()>=50,"earned four-era fifty-house fixture loads through the production renderer")
	var expected: Dictionary={"pastoral":"pluck","renaissance":"harpsichord","clockwork":"piano","modern_eco":"felt_piano"}
	var era_reports: Array=[];var waveforms: Array[PackedByteArray]=[]
	var h: Dictionary=demo.state.houses[demo.state._house_index("h1")]
	var focus_at:=Vector3(float(h.origin[0]),float(h.get("base_y",0.0))+.8,float(h.origin[1]))
	_camera(focus_at,12);await _key(KEY_5)
	for era: String in expected:
		demo._after_edit(demo.state.set_house_era("h1",era),"terrace");await _wait();await create_timer(.65).timeout
		var before: Dictionary=demo.state.snapshot()
		await _click(_house_point("h1"));await create_timer(.10).timeout
		var report: Dictionary=demo.music.house_pluck_report()
		_check(report.audible and report.glowing and report.get("era_theme","")==era and report.timbre==expected[era] and demo.state.snapshot()==before,"real purpose-tool selection plays the authored era without changing city: "+era)
		if report.audible:
			var stream: AudioStreamWAV=demo.music._edit_streams[report.stream_key]
			if not waveforms.has(stream.data): waveforms.append(stream.data)
			_check(is_equal_approx(stream.get_length(),.42),"actual selected PCM lasts .42 seconds: "+era)
		era_reports.append(report)
		await RenderingServer.frame_post_draw
		root.get_texture().get_image().save_png(OUT+"/时代拨弦_"+era+".png")
	_check(waveforms.size()==4,"actual same-house selections use four distinct era PCM waveforms")
	var deadline:=Time.get_ticks_msec()+1500
	var tail: Dictionary=demo.music.house_pluck_report()
	while tail.glowing and float(tail.elapsed)<.48 and Time.get_ticks_msec()<deadline:
		await process_frame;tail=demo.music.house_pluck_report()
	await process_frame
	_check(not tail.audible and tail.glowing and float(tail.elapsed)>=.48 and float(demo.town.resonance.rigs.h1.get("pluck_strength",0))>0,"window ripple continues on the shared transport after the .42-second note has ended")
	await create_timer(.2).timeout
	_check(not demo.music.house_pluck_report().glowing and float(demo.town.resonance.rigs.h1.get("pluck_strength",0))==0,"the same window ripple finishes after .6 seconds")
	await _click(_house_point("h1"));await create_timer(.08).timeout
	var old_player: AudioStreamPlayer=demo.music._pluck_player
	var changed: Dictionary=demo.state.set_house_era("h1","renaissance")
	demo.music._prune_plucks()
	var invalid: Dictionary=demo.music.house_pluck_report()
	_check(changed.ok and not old_player.playing and not invalid.audible and not invalid.glowing,"era-only repaint immediately stops the old PCM and attribution before geometry publication")
	var undone: Dictionary=demo.state.undo()
	_check(undone.ok and not demo.music.house_pluck_report().glowing,"undo cannot revive a cancelled old note or window ripple")
	demo._after_edit(undone,"history");await _wait();await create_timer(.65).timeout
	await _click(_house_point("h1"));await create_timer(.08).timeout
	_camera(Vector3(38,.7,38),12);await process_frame
	_check(not demo.music.house_pluck_report().glowing,"leaving the view cancels the focused house's sound and ripple")
	_camera(focus_at,12);await process_frame
	facts.eras=era_reports;facts.tail=tail;facts.era_fixture_houses=demo.state.houses.size()
func _export_era_audition()->void:
	var timbres: Array[String]=["pluck","harpsichord","piano","felt_piano"]
	var gap:=int(.60*Pitch.RATE);var samples:=PackedFloat32Array()
	samples.resize(gap*19+int(Pitch.DURATION*Pitch.RATE))
	var keys: Array[String]=[];var peak:=0.0
	for era in range(4):
		for floor_index in range(5):
			var key:=Pitch.stream_key(timbres[era],Pitch.pitch(0,floor_index,0))
			keys.append(key)
			var data: PackedByteArray=demo.music._edit_streams[key].data
			for frame in range(data.size()/2): samples[(era*5+floor_index)*gap+frame]=float(data.decode_s16(frame*2))/32768.0*db_to_linear(demo.music.SHORT_GAIN_DB)
	var bytes:=PackedByteArray();bytes.resize(samples.size()*2)
	for frame in range(samples.size()):
		peak=maxf(peak,absf(samples[frame]))
		bytes.encode_s16(frame*2,roundi(samples[frame]*32767.0))
	var wav:=AudioStreamWAV.new();wav.format=AudioStreamWAV.FORMAT_16_BITS;wav.mix_rate=Pitch.RATE;wav.data=bytes
	_check(peak>0.0 and peak<1.0 and wav.save_to_wav(OUT+"/四时代五层拨弦试听.wav")==OK,"four-era five-floor audition exports actual bank PCM at production short-voice gain")
	facts.era_audition={"keys":keys,"seconds":float(samples.size())/Pitch.RATE,"peak":peak,"gain_db":demo.music.SHORT_GAIN_DB}
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:PackedByteArray=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false)
	var deadline:=Time.get_ticks_msec()+25000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline:await process_frame
	_check(DisplayServer.get_name()!="headless" and not demo.music.audio_report.is_empty(),"actual GL and original production music are ready")
	var audio:Array=_audio();var clock:float=demo.music._playback_clock()
	_camera(Vector3(-8,1,-6));await _key(KEY_5)
	var before:Dictionary=demo.state.snapshot();var history:int=demo.state._undo.size()
	await _click(_house_point("h1"));await create_timer(.12).timeout
	var selected:Dictionary=demo.music.house_pluck_report()
	_check(demo.selected_house=="h1" and selected.audible and selected.house_id=="h1" and demo.state.snapshot()==before and demo.state._undo.size()==history,"real Window purpose-tool house click plays selected house without State or history writes")
	var rig:Dictionary=demo.town.resonance.rigs.h1
	_check(float(rig.get("pluck_strength",0))>0 and not rig.arc.visible,"actual audible house pluck lights its original window rig without a reply arc")
	facts.selection=selected
	await create_timer(.65).timeout
	_camera(Vector3(12,.7,-5));await _key(KEY_1)
	var old_count:int=demo.state.houses.size();var serial:int=demo.music.house_pluck_report().serial
	await _click(demo.camera.unproject_position(Vector3(12,demo.state.ground_height(Vector2(12,-5)),-5)))
	var built:Dictionary=demo.music.house_pluck_report();var id:String=str(built.get("house_id",""))
	_check(demo.state.houses.size()==old_count+1 and built.audible and built.serial>serial and built.max_level==0,"actual house-stroke mouse release builds a new house and plays its ground-floor pitch")
	facts.new_house=built
	await _wait()
	await create_timer(.7).timeout
	if not id.is_empty():
		await _click(_house_point(id))
		var raised:Dictionary=demo.music.house_pluck_report()
		_check(raised.audible and raised.house_id==id and raised.max_level==1 and raised.serial>built.serial and raised.midi==Pitch.pitch(int(raised.bar),int(raised.band),posmod(id.hash(),2)),"actual roof click adds a floor and plays the real height-band quantized pitch")
		facts.raised=raised
		await _wait()
	var timbres:Dictionary={};var digests:Array[String]=[];var theme_reports:Array=[]
	for style:String in State.DISTRICT_STYLES:
		await create_timer(.7).timeout
		var points:Array[Vector2]=[Vector2(-8,-6)]
		var result:Dictionary=demo.state.add_district(points,4,style);demo._after_edit(result,"terrace");await _wait();await create_timer(.7).timeout
		_camera(Vector3(-8,1,-6));await _key(KEY_5);await _click(_house_point("h1"));await create_timer(.1).timeout
		var report:Dictionary=demo.music.house_pluck_report();theme_reports.append(report)
		if report.audible:
			timbres[report.timbre]=true
			var data:PackedByteArray=demo.music._edit_streams[report.stream_key].data;var hash_context:=HashingContext.new();hash_context.start(HashingContext.HASH_SHA256);hash_context.update(data);digests.append(hash_context.finish().hex_encode())
	var unique:Dictionary={}
	for digest:String in digests: unique[digest]=true
	_check(timbres.size()==5 and digests.size()==5 and unique.size()==5,"five real district edits and Window house selections play five distinct original PCM timbres")
	facts.themes=theme_reports
	await _era_checks()
	var mute_serial:int=demo.music.house_pluck_report().serial;demo.music.set_muted(true);await process_frame
	await _click(_house_point("h1"));await process_frame
	var muted:Dictionary=demo.music.house_pluck_report()
	_check(not muted.audible and muted.serial==mute_serial and float(demo.town.resonance.rigs.h1.get("pluck_strength",0))==0,"muted actual house click emits no new sound or window pulse")
	demo.music.set_muted(false);await create_timer(.1).timeout
	await _key(KEY_P);await _click(_house_point("h1"));await create_timer(.23).timeout
	facts.captured_pluck=demo.music.house_pluck_report()
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/点房试听入口.png")==OK,"actual audition entry and selected-house UI image saved")
	demo.ui_layer.visible=false;demo.town.clear_preview();await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/房屋层高拨弦.png")==OK,"actual house pluck scene image saved")
	_export_audition()
	_export_era_audition()
	var wall:Array[float]=[];var draws:Array[float]=[];var previous:=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();wall.append(float(now-previous)/1000);previous=now;draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	wall.sort();draws.sort();facts.performance={"frames":120,"p95_ms":wall[113],"max_ms":wall[-1],"draw_median":draws[60]}
	_check(_audio()==audio and demo.music.get_child_count()==demo.music.STEMS.size()+4 and demo.music._playback_clock()>clock and (FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"UI plucks preserve shared long PCM fixed Players actual transport and personal city bytes")
	var result:Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"facts":facts,"command":"Godot --path . --audio-driver Dummy --max-fps180 --script tools/check_creation_pluck.gd"}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("PLUCK_CHECK ",JSON.stringify(result))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false)
	for player:AudioStreamPlayer in demo.music._players.values():player.stop()
	for player:AudioStreamPlayer in demo.music._effects:player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout;quit(0 if failures.is_empty() else 1)
