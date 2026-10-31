extends "res://tools/check_creation_score_playback_live.gd"
const Preview=preload("res://scripts/audio/city_creation_affinity_preview.gd")
const Fixture=preload("res://tools/fixtures/city_creation_space_contract_fixture.gd")
func packet()->Dictionary:return demo.music.get_meta("music_affinity_preview",{}).duplicate(true)
func run()->void:
	OUT="res://验证记录/M84/music_affinity_20261031/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var voices:=pool()
	var fixture:=Fixture.courtyard("ring","none");var city:RefCounted=fixture.city
	await show(city,Fixture.ORIGIN+Vector2(3.6,3.6),"未接路院落 · 暖垫慢包络");quiet();demo.life.set_process(false);city=demo.state
	var saved:Dictionary=city.snapshot();var record:=Span.start()
	check(fixture.ok and city.roads.is_empty(),"real public court geometry without road")
	check(not demo.music.has_meta("music_affinity_preview"),"default does not enable developer sample")
	check(Preview.start(demo.music).ok,"explicit affinity sample starts existing authored worker")
	check(await wait_for(func():return demo.music.has_meta("authored_score"),60000),"same pooled players actually adopt the sample")
	var signature:String=demo.music.get_meta("authored_score").signature
	check(demo.music.get_meta("authored_score").get("affinity_preview",false),"actual source identifies explicit sample")
	check(await wait_for(func():return Playback.ensure(demo.music).scheduled.is_empty(),3000),"actual four-stream cohort stabilizes")
	check(packet().facts.enclosure==1. and packet().facts.weights.size()==1,"real no-road geometry receives a single normalized house budget")
	var early:=packet();await create_timer(10.).timeout;var warm:=packet()
	check(warm.value>.9 and Preview.gain(demo.music,"foundation")>3.6,"stable geometry enters audible foundation gain slowly")
	var boosted:float=demo.music.target_gain_db("foundation",false)
	demo.music.set_meta("music_affinity_preview",{"value":0.});var baseline:float=demo.music.target_gain_db("foundation",false);demo.music.set_meta("music_affinity_preview",warm)
	check(is_equal_approx(boosted-baseline,4.*float(warm.value)),"real target gain receives boost after role floor, not clamped away")
	facts.foundation_volume_db=demo.music._players.foundation.volume_db;facts.foundation_target_db=boosted
	check(Preview.gain(demo.music,"wood")==0.,"lead does not gain another layer or boost")
	var signature_before:String=Playback.cursor(demo.music).signature;var wave:AudioStreamWAV=demo.music._players.foundation.stream
	var profile=demo.music.get_node("MusicAffinityPreview");var rebuilds:int=profile.affinity.rebuilds
	for i in range(5):
		demo.focus=Vector3(-28.+i,.4,-20.);demo._update_camera();await process_frame
	check(profile.affinity.rebuilds==rebuilds,"camera reweighting does not rebuild geometry")
	check(city.snapshot()==saved,"preview and mirror travel never write author state")
	check(city.remove_house("h1").ok,"delete actual enclosure through State API")
	await process_frame;await process_frame
	var tail:=packet();check(tail.current_source_ids.is_empty() and tail.historical_tail and tail.value>0.,"source fact withdrawn immediately; remaining gain marked historical")
	check(Playback.cursor(demo.music).get("signature","")==signature_before and demo.music._players.foundation.stream==wave,"deleting geometry keeps valid authored PCM and phase")
	await create_timer(1.).timeout;check(city.undo().ok,"Undo real removal inside tail")
	await process_frame;await process_frame
	check(not packet().current_source_ids.is_empty() and packet().target>0.,"Undo restores actual source without another hold")
	check(demo.music._players.foundation.stream==wave,"Undo reuses prepared PCM")
	check(city.remove_house("h1").ok,"second real deletion")
	await create_timer(6.4).timeout
	check(packet().value==0. and packet().current_source_ids.is_empty(),"historical gain expires within six seconds")
	check(Playback.cursor(demo.music).get("signature","")==signature,"baseline music remains complete after source loss")
	facts.trace={"early":early,"warm":warm,"tail":tail,"expired":packet()};facts.pcm=Span.finish(record,OUT+"/affinity_Master.wav");check(facts.pcm.ok,"actual WASAPI output audible and unclipped")
	check(city.undo().ok,"restore author enclosure after probe");await process_frame;await capture("unconnected_court")
	var prefs:Dictionary=city.creative_settings.music.duplicate(true);prefs.seed=int(prefs.seed)+1
	check(city.CreationPolicy.set_preferences(city,{"music":prefs}).ok,"change relevant preference through public API")
	check(await wait_for(func():return demo.music.get_node_or_null("MusicAffinityPreview")==null,5000),"invalidated context retires sample node instead of blocking restart")
	check(Preview.start(demo.music).ok,"sample can restart after same-city context invalidation")
	var other:=State.new();other.initialize_free();await show(other,Vector2.ZERO,"换城撤销旧空间来源");quiet();await process_frame
	check(await wait_for(func():return demo.music.get_node("AuthoredScore").worker==null,60000),"old pending sample worker ends after replacement")
	check(not demo.music.has_meta("music_affinity_preview") and demo.music.get_node_or_null("MusicAffinityPreview")==null,"city replacement withdraws all sample facts")
	check(Playback.cursor(demo.music).is_empty(),"no old authored source crosses into new city")
	check(pool()==voices,"original 12/4/6/2 pool remains unchanged")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("MUSIC_AFFINITY_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
