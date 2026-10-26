extends "res://tools/check_creation_music_experience_live.gd"
const Mix=preload("res://scripts/audio/city_creation_camera_orchestration.gd")
func quiet()->void:
	for key:String in ["inspiration_draft","vignette_journey"]:
		var item=demo.get_meta(key);item.poll();item.set_process(false);item.paper.hide()
func wet()->float:
	var bus:=AudioServer.get_bus_index(demo.music.spatial._names[0])
	for i in range(AudioServer.get_bus_effect_count(bus)):
		var effect:=AudioServer.get_bus_effect(bus,i)
		if effect is AudioEffectReverb:return effect.wet
	return -1.
func diagnostics()->Dictionary:
	var music=demo.music
	return {"clock":music._playback_clock(),"wet":wet(),"mode":music.harmony_mode(),"score":music.emergence.score.duplicate(true),"active":music._variation_active.duplicate(),"gains":{"foundation":music._players.foundation.volume_db,"air":music._players.air.volume_db},"camera":music.get_meta("camera_orchestration",{})}
func run()->void:
	OUT="res://验证记录/M56/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle()
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	var city:=State.new();city.initialize_empty()
	for i in range(5):check(city.add_house(Vector2(-22+i*3.,-10)).ok,"actual chamber home "+str(i))
	await show(city,Vector2(-16,-10),"chamber");quiet();demo.life.set_process(false)
	check(DisplayServer.get_name()!="headless" and demo.music.audio_report.bank_source=="precompiled" and demo.music.audio_report.get("bank_codec","")=="qoa","native GL uses current complete QOA bank supplied to fresh clones")
	var music=demo.music
	demo.zoom=12.;demo._update_camera();await settle();await create_timer(1.6).timeout
	facts.near=diagnostics()
	check(wet()<.145 and music.get_meta("camera_orchestration").near>.99,"real close camera settles to.13 wet")
	check(music._players.air.volume_db>-45. and music._players.air.stream==music._harmony_streams["%d/air"%maxi(0,music.harmony_mode())],"existing air player actually plays baked guitar/flute chamber")
	facts.near_audio=await Probe.record(OUT+"/near_Master.wav",8.2);check(facts.near_audio.ok,"actual close chamber Master")
	await capture("near_chamber")
	demo.zoom=45.;demo._update_camera();await create_timer(1.8).timeout
	facts.far=diagnostics()
	check(wet()>.23 and float(facts.far.camera.far)>.99,"real far camera smoothly opens wet to.24")
	check(music._players.foundation.stream==music._harmony_streams["%d/foundation"%maxi(0,music.harmony_mode())],"existing foundation player uses actual horn-fifth and string bank")
	facts.far_audio=await Probe.record(OUT+"/far_Master.wav",8.2);check(facts.far_audio.ok,"actual far orchestra Master")
	await capture("far_orchestra")
	# Record the actual texture handoff at the next quiet transport seam.
	demo.zoom=12.;demo._update_camera()
	var end:=Time.get_ticks_msec()+26000
	while fposmod(music._playback_clock(),24.)<20. and Time.get_ticks_msec()<end:await process_frame
	demo._set_light_phase(2)
	facts.night_switch_before=diagnostics()
	facts.night_audio=await Probe.record(OUT+"/night_transition_Master.wav",8.2)
	check(facts.night_audio.ok,"actual night handoff Master remains unclipped")
	var adopted:=await wait_for(func():return str(music._variation_active.get(Mix.lead(music.emergence.score),"")).ends_with("/nocturne"),26000)
	facts.night=diagnostics()
	var lead:=Mix.lead(music.emergence.score);var active:=str(music._variation_active.get(lead,""))
	check(adopted and active.ends_with("/nocturne") and music._players[lead].stream==music._harmony_streams[active],"selected source actually adopts the new felt/cello PCM at a quiet seam")
	check(Mix.nocturne(music) and not lead.is_empty() and music._long_acoustic_weight(lead)>0.,"nocturne keeps an actual spatial city source")
	var mix:Dictionary=music.Phonograph.capture(music)
	check(music.Phonograph.valid(mix) and str(mix.tracks[lead].key).ends_with("/nocturne"),"actual new-texture phonograph capture validates")
	var saved:Dictionary=await demo.gallery._capture("雨夜室内乐","manual")
	check(saved.ok,"actual isolated work save accepts new texture identities")
	demo._set_light_phase(0)
	var weather:Dictionary=demo.state.set_microclimate("sun_shower");demo._after_edit(weather,"weather",false);await settle();quiet()
	check(weather.ok and Mix.nocturne(music),"real daylight sun shower retains the rain nocturne")
	facts.rain=diagnostics();facts.rain_audio=await Probe.record(OUT+"/rain_Master.wav",4.2);check(facts.rain_audio.ok,"actual rainy chamber Master")
	await capture("sun_shower_chamber")
	var copy:=State.new();check(copy.restore(demo.state.snapshot()).ok and copy.microclimate=="sun_shower","weather and authored world cold restore")
	await finish(personal,voices)
