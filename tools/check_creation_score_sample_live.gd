extends "res://tools/check_creation_terrain_chunk_seams_live.gd"
const Cache=preload("res://scripts/audio/city_creation_bank_cache.gd")
const Roles=preload("res://scripts/audio/city_creation_chamber_roles.gd")
var markers:Array=[]
var traces:Array=[]
var started:=0

func marker(label:String)->void:
	markers.append({"label":label,"clock":demo.music._playback_clock(),"wall_seconds":(Time.get_ticks_usec()-started)/1000000.})

func observe(seconds:float)->void:
	var end:=Time.get_ticks_msec()+roundi(seconds*1000.);var next:=0
	while Time.get_ticks_msec()<end:
		await process_frame
		if Time.get_ticks_msec()<next:continue
		next=Time.get_ticks_msec()+100
		var music=demo.music;var rows:Dictionary={};var audible:=0
		var plan:Dictionary=music.get_meta("chamber_roles",{})
		for key:String in music._players:
			var player:AudioStreamPlayer=music._players[key]
			var id:String=music._variation_active.get(key,"")
			var melodic:bool=key in music.HarmonicEmergence.LEADS+["concert"] and not "chamber_counter_" in id
			if melodic and player.volume_db> -45.:audible+=1
			rows[key]={"id":id,"db":player.volume_db,"position":player.get_playback_position(),"swap":player.get_meta("last_smooth_swap",{}),"complete":player.get_meta("transition_complete",{}),"transition":player.stream.get_meta("transition",false)}
		traces.append({"clock":music._playback_clock(),"wall_seconds":(Time.get_ticks_usec()-started)/1000000.,"voices":rows,"audible_leads":audible,"plan":plan})

func run()->void:
	OUT="res://验证记录/M78/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet()
	var voices:=pool();var city:=State.new();city.initialize_free()
	for i in range(5):city.add_house(Vector2(-25+i*3.,-15))
	# Isolated historical entitlement fixture; no user city or reward ledger write.
	city.apply_archive_unlocks(["five_chords"])
	await show(city,Vector2(-19,-15),"八小节河湾素描");quiet();demo.ui_layer.hide();demo.music._biome_mode=0
	demo.music.remove_meta("chamber_role_key");await observe(8.)
	check(DisplayServer.get_name()!="headless" and demo.music.audio_report.get("bank_source")=="precompiled","real GL and current baked bank")
	check(demo.music._variation_active.get("wood","").begins_with("pastoral_breeze_v1/lead/"),"normal five-house city actually plays versioned theme")
	check(demo.music._variation_active.get("foundation")=="pastoral_breeze_v1/foundation","actual continuous foundation stream selected")
	traces.clear();var effect:=AudioEffectRecord.new();AudioServer.add_bus_effect(0,effect);effect.set_recording_active(true);started=Time.get_ticks_usec();marker("three_cycles_start")
	await capture("five_houses_day");await observe(74.);marker("three_cycles_end")
	for house:Dictionary in demo.state.houses:
		var result:Dictionary=demo.state.add_cells(str(house.id),[{"x":0,"z":0,"level":1,"kind":"room"},{"x":0,"z":0,"level":2,"kind":"room"}])
		check(result.ok,"real upper rooms change musical richness");demo._after_edit(result,"room");await settle();quiet()
	demo.music._biome_mode=0;demo.music.remove_meta("chamber_role_key")
	marker("authored_variant_requested");await observe(42.)
	check(traces.any(func(row):return row.voices.wood.id in ["pastoral_breeze_v1/lead/1","pastoral_breeze_v1/lead/2"]),"actual city richness reaches authored B variant")
	# Real night control, then an actual modal city setting, then return/fallback.
	demo._set_light_phase(2);marker("night_requested");await observe(9.)
	check(demo.music._variation_active.wood=="pastoral_breeze_v1/night","same owner switches to authored night candidate")
	await capture("five_houses_night")
	var change:Dictionary=demo.state.set_music_mode("gong_pentatonic")
	check(change.ok,"real pentatonic policy edit")
	demo._after_edit(change,"history");await settle();quiet();marker("pentatonic_requested");await observe(10.)
	check(demo.music.harmony_mode()==8 and not str(demo.music._variation_active.wood).begins_with("pastoral_breeze_v1"),"cross-mode uses valid existing pentatonic bank")
	var restore:Dictionary=demo.state.set_music_mode("");check(restore.ok,"actual four-colour policy restored");demo._after_edit(restore,"history");await settle();quiet();demo.music._biome_mode=0;demo._set_light_phase(0);marker("day_return");await observe(10.)
	check(str(demo.music._variation_active.wood).begins_with("pastoral_breeze_v1/lead/"),"returns to stable authored bank")
	demo.music.set_meta("legacy_score",true);demo.music.remove_meta("chamber_role_key");marker("legacy_fallback");await observe(9.)
	check(not str(demo.music._variation_active.wood).begins_with("pastoral_breeze_v1"),"explicit legacy fallback remains playable")
	demo.music.set_meta("legacy_score",false);demo.music.remove_meta("chamber_role_key");marker("sample_restore");await observe(9.)
	effect.set_recording_active(false);var wave:AudioStreamWAV=effect.get_recording();check(wave.save_to_wav(OUT+"/Master.wav")==OK,"actual Master saved")
	for i in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,i)==effect:AudioServer.remove_bus_effect(0,i)
	check(traces.all(func(row):return row.audible_leads<=1),"all observed actual sounding identities retain one lead")
	var drift:=0.;var monotonic:=true
	for i in range(1,traces.size()):
		var a:Dictionary=traces[i-1];var b:Dictionary=traces[i]
		monotonic=monotonic and b.clock>=a.clock
		drift=maxf(drift,absf((b.clock-traces[0].clock)-(b.wall_seconds-traces[0].wall_seconds)))
	check(monotonic and drift<.12,"transport remains monotonic within audio-buffer observation tolerance")
	check(traces.any(func(row):return row.voices.wood.swap.get("method")=="premixed") and traces.any(func(row):return not row.voices.wood.complete.is_empty() and not row.voices.wood.transition),"prepared transitions complete back to stable bank")
	check(pool()==voices,"original12long4short6bus2nature identities")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	facts={"signature":Cache.source_signature(),"stamp":Cache.Stamp.SIGNATURE,"markers":markers,"trace":traces,"max_transport_observation_drift":drift,"events":demo.music.audio_report.harmony_notes.get("pastoral_breeze_v1/lead/0",[])}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts},"\t",true,true))
	print("SCORE_SAMPLE_LIVE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"drift":drift}));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
