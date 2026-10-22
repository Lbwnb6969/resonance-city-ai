extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/万物可拨_2026-10-21"
var output:=OUT
var demo
var checks:=0
var failures:Array[String]=[]
var facts:Array=[]
var recorders:Array[AudioEffectRecord]=[]
var sampling:=false
var frame_ms:Array[float]=[]
var last_usec:=0
func _initialize()->void:run.call_deferred()
func _process(_delta:float)->bool:
	var now:=Time.get_ticks_usec()
	if sampling:frame_ms.append(float(now-last_usec)/1000.)
	last_usec=now;return false
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	var until:=Time.get_ticks_msec()+30000
	while (demo.edit_pending() or demo._edit_ui_pending or demo.music._loading) and Time.get_ticks_msec()<until:await process_frame
	for i:int in range(15):await process_frame
func hover(at:Vector2)->void:
	var point:Vector2=demo.camera.unproject_position(Vector3(at.x,0.,at.y))
	var move:=InputEventMouseMotion.new();move.position=point;move.global_position=point;root.push_input(move);await process_frame
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):output=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=output+"/隔离作品_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false)
	for at:Vector2 in [Vector2(-28,-20),Vector2(-24.4,-20),Vector2(-20.8,-20)]:check(demo.state.add_house(at).ok,"choir home")
	check(demo.state.place_plant(Vector2(-26,-14),"golden_tree").ok,"golden crown toy fixture")
	check(demo.state.add_water([Vector2(-18,-14)] as Array[Vector2],3.2,"pond").ok,"actual pond toy fixture")
	demo._after_edit({"ok":true,"message":"隔离八音盒"},"history");await settle();demo.life.set_process(false)
	demo.focus=Vector3(-23,.7,-17);demo.zoom=24.;demo.pitch=.95;demo._update_camera();demo.select_tool(4)
	var authored:Dictionary=demo.state.snapshot();var clock:float=demo.music._playback_clock()
	if "--require-portable" in OS.get_cmdline_user_args():check(demo.music.audio_report.get("bank_codec","")=="qoa","actual game uses the shipped QOA bank with no original PCM cache")
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	for player:AudioStreamPlayer in demo.music._effects:
		voices.append(player.get_instance_id())
		var recording:=AudioEffectRecord.new();recording.format=AudioStreamWAV.FORMAT_16_BITS
		AudioServer.add_bus_effect(AudioServer.get_bus_index(player.bus),recording);recorders.append(recording)
	for resolution:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=resolution;for i in range(5):await process_frame
		for kind:String in ["tree","water"]:await play_and_record(kind,str(resolution.x))
	check(demo.state.snapshot()==authored,"browsing trees and water never alters authored city or ledgers")
	await hover(Vector2(-30,-12))
	# Queue just after the current micro-slot window, then use the actual erase
	# transaction before the next slot. The old source must fail at execution.
	while fposmod(demo.music._playback_clock(),.1875)<.115 or fposmod(demo.music._playback_clock(),.1875)>.145:await process_frame
	var queued_before:Dictionary=demo.music.get_meta("world_pluck",{}).duplicate(true)
	check(demo.world_toys.hover(demo,Vector2(-26,-14)) and demo.music.attention.report().arp_pending>0,"real tree touch enters the existing queue before its next micro-slot")
	var erased:Dictionary=demo.state.erase_vegetation_stroke([Vector2(-26,-14)] as Array[Vector2],.3)
	check(erased.ok,"public vegetation eraser removes the queued source")
	demo._after_edit(erased,"erase");await settle();demo.life.set_process(false)
	check(demo.music.get_meta("world_pluck",{})==queued_before,"deleted queued source cannot leave a ghost bird call")
	demo._history(false);await settle();demo.life.set_process(false)
	check(demo.state.plants==authored.plants,"ordinary undo restores the original exact tree after the queue check")
	await hover(Vector2(-30,-12));demo._toggle_music()
	var previous:Dictionary=demo.music.get_meta("world_pluck",{}).duplicate(true)
	await hover(Vector2(-26,-14));await create_timer(.45).timeout
	check(demo.music.get_meta("world_pluck",{})==previous and demo.music.attention.report().arp_pending==0,"muted pointer input plays no nature cue and leaves no queued note")
	await hover(Vector2(-30,-12));demo._toggle_music()
	var restored:Dictionary=demo.state.snapshot();var before:Dictionary=authored.duplicate(true)
	restored.erase("revision");before.erase("revision")
	check(restored==before,"erase and ordinary undo restore all work fields while the revision advances normally")
	check(demo.music._playback_clock()>clock and demo.music._effects.size()==4 and demo.music._players.size()==12,"world play preserves transport and fixed voice pool")
	var current:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():current.append(player.get_instance_id())
	for player:AudioStreamPlayer in demo.music._effects:current.append(player.get_instance_id())
	check(current==voices and demo.ambience.players.size()==2,"actual long/short player identities and original two nature beds stay fixed")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save remains byte-identical")
	for i in range(demo.music._effects.size()):
		var bus:=AudioServer.get_bus_index(demo.music._effects[i].bus)
		for effect in range(AudioServer.get_bus_effect_count(bus)-1,-1,-1):
			if AudioServer.get_bus_effect(bus,effect)==recorders[i]:AudioServer.remove_bus_effect(bus,effect)
	frame_ms.sort()
	var result:Dictionary={"checks":checks,"failures":failures,"ok":failures.is_empty(),"notes":facts,"bank_codec":demo.music.audio_report.get("bank_codec","pcm"),"frames":{"count":frame_ms.size(),"limit":Engine.max_fps,"p95_ms":frame_ms[int(frame_ms.size()*.95)],"max_ms":frame_ms[-1]}}
	FileAccess.open(output+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("WORLD_TOYS_LIVE ",JSON.stringify(result))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

func play_and_record(kind:String,resolution:String)->void:
	await hover(Vector2(-30,-12))
	while demo.music._effects.any(func(player):return player.playing):await process_frame
	var previous:int=int(demo.music.get_meta("world_pluck",{}).get("serial",-1))
	for recording:AudioEffectRecord in recorders:recording.set_recording_active(true)
	last_usec=Time.get_ticks_usec();sampling=true
	await hover(Vector2(-26,-14) if kind=="tree" else Vector2(-18,-14))
	var until:=Time.get_ticks_msec()+1500
	while (str(demo.music.get_meta("world_pluck",{}).get("kind",""))!=kind or int(demo.music.get_meta("world_pluck",{}).get("serial",-1))==previous) and Time.get_ticks_msec()<until:await process_frame
	var note:Dictionary=demo.music.get_meta("world_pluck",{}).duplicate(true)
	check(note.get("kind","")==kind and int(note.get("serial",-1))!=previous,"actual pointer hover plays a fresh "+kind+" cue at "+resolution)
	if note.has("clock"):check(fposmod(float(note.clock),.1875)<=demo.music.AttentionMixer.WINDOW+.001,"actual nature playback lands on the sixteenth-note grid")
	var key:=str(note.get("stream_key",""));var voice:=-1
	for i in range(demo.music._effects.size()):
		var player:AudioStreamPlayer=demo.music._effects[i]
		if player.get_meta("creation_voice_serial",-1)==note.get("serial",-2) and player.stream==demo.music._harmony_streams.get(key):voice=i;break
	check(voice>=0 and key=="%d/world_%s_%d"%[int(note.get("mode",-1)),kind,int(note.get("bar",-1))],"native short voice holds the actual dedicated modal waveform")
	for i in range(10):await process_frame
	sampling=false
	if kind=="tree":
		var responded:=false
		for material:Material in demo.town.foliage._materials.values():
			if material is ShaderMaterial:responded=responded or Vector2(material.get_shader_parameter("touch_at")).distance_to(Vector2(-26,-14))<.1
		check(responded,"shared leaf material responds to the actual touched crown")
	else:check(float(demo.town.water_material.get_shader_parameter("travel_ripple_strength"))>0.,"actual pond displays radial touch waves")
	demo.town.clear_preview();await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(output+"/"+resolution+"_"+kind+".png")
	await create_timer(.75).timeout
	for recording:AudioEffectRecord in recorders:recording.set_recording_active(false)
	if voice>=0:
		var wave:=recorders[voice].get_recording();var peak:=0.
		if wave!=null:
			for i in range(0,wave.data.size()-1,2):peak=maxf(peak,absf(float(wave.data.decode_s16(i))/32768.))
		check(wave!=null and wave.get_length()>.64 and peak>.0001 and peak<.99,"isolated native short-bus recording is complete, audible and unclipped")
		if wave!=null:
			note.recording=resolution+"_"+kind+".wav";wave.save_to_wav(output+"/"+note.recording)
		note.recorded_peak=peak
	facts.append(note)
