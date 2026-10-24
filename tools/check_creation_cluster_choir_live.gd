extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
var OUT="res://验证记录/M29"
var demo
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending:await process_frame
func seconds(duration:float)->void:
	var until:=Time.get_ticks_msec()+int(duration*1000.)
	while Time.get_ticks_msec()<until:await process_frame
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/作品";root.add_child(demo);demo.life.set_process(false)
	var deadline:=Time.get_ticks_msec()+15000
	while demo.music._loading and Time.get_ticks_msec()<deadline:await process_frame
	check(not demo.music._loading and demo.music.audio_report.get("bank_source","")=="precompiled","production bank loads without runtime synthesis")
	var city:=State.new();city.initialize();city.houses.clear();city.roads.clear();city.plants.clear();city.districts.clear();city.revision+=1
	var added:Dictionary=city.add_house(Vector2(-22,-10));check(added.ok,"isolated house fixture")
	var first:=str(added.house_id);var restored:Dictionary=demo.state.restore(city.snapshot());check(restored.ok,"isolated scene restore")
	demo._after_edit(restored,"history");await settle();demo.life.set_process(false)
	demo.focus=Vector3(-20,.7,-10);demo.zoom=24.;demo.pitch=.85;demo._update_camera()
	await seconds(6.5)
	var quiet:=true
	for key:String in demo.music._players:quiet=quiet and demo.music._players[key].volume_db<=-55.
	check(not quiet and demo.music.daily_source().audible,"one house sings a warm solo on the uninterrupted transport")
	for i:int in range(1,5):check(demo.state.add_house(Vector2(-22+i*3.,-10)).ok,"build cluster member "+str(i))
	check(demo.state.set_house_role(first,"bakery").ok,"real daily bakery role")
	var cafe:=str(demo.state.houses[1].id);check(demo.state.set_house_role(cafe,"garden_cafe").ok,"real daily cafe role")
	demo._after_edit({"ok":true,"message":"聚落"},"room");await settle();demo.life.set_process(false)
	await seconds(4.)
	check(demo.music.emergence.score.largest_cluster==5 and demo.music.daily_source().audible,"five nearby houses become one audible choir without painted district or venue")
	var clock:float=demo.music._playback_clock()
	var recorder:=AudioEffectRecord.new();AudioServer.add_bus_effect(0,recorder);recorder.set_recording_active(true)
	var serials:Array=[]
	for effect:AudioStreamPlayer in demo.music._effects:serials.append(effect.get_meta("creation_voice_serial",0))
	for i:int in range(24):
		demo.music.queue_bakery_cue("baked",first)
		demo.music.record_life_activity("installed",first)
		demo.music.queue_travel("walker"+str(i),"bridge",first,Vector2(-22,-10))
	demo.music.set_cafe_view({cafe:{"phase":"tea","arrived":3}})
	await seconds(8.)
	var stable:=true
	for i:int in range(demo.music._effects.size()):stable=stable and demo.music._effects[i].get_meta("creation_voice_serial",0)==serials[i]
	check(not stable and demo.music._effects.size()==4,"spatial life cues coexist with choir in the bounded short pool")
	check(demo.music._life_orchestration.has("air") and demo.music._life_orchestration.has("terrace") and demo.music._life_orchestration.has("foundation"),"life enters the actual phrase score as three shared layers")
	check(demo.music._playback_clock()>clock+7.5,"service events do not restart transport")
	recorder.set_recording_active(false);var wave:AudioStreamWAV=recorder.get_recording();var peak:=0.
	if wave!=null:
		var pcm:PackedByteArray=wave.data
		for i:int in range(pcm.size()/2):peak=maxf(peak,absf(float(pcm.decode_s16(i*2))/32768.))
		check(wave.save_to_wav(OUT+"/实际聚落伴奏.wav")==OK and peak>.0001 and peak<.99,"actual Master recording is audible and unclipped")
	else:check(false,"actual Master audio exists")
	for i:int in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,i)==recorder:AudioServer.remove_bus_effect(0,i)
	check(demo.music.play_house(first),"manual touch retains its immediate plucked response")
	await seconds(.5)
	check(demo.music.house_pluck_report().get("house_id","")==first,"manual response is attributed to the selected house")
	check(demo.music._players.size()==12 and demo.music._effects.size()==4,"voice counts stay bounded at twelve long and four short")
	var tide:Dictionary=await preload("res://tools/fixtures/city_creation_phrase_tide_live.gd").run(demo,OUT)
	check(tide.ok,"real one-hundred-four-second multi-cluster phrase conducting and breathing pass")
	var report:Dictionary={"checks":checks,"failures":failures,"ok":failures.is_empty(),"recorded_peak":peak,"score":demo.music.emergence.score,"life_layers":demo.music._life_orchestration,"tide":tide}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"))
	print("CLUSTER_CHOIR_LIVE ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty(),"recorded_peak":peak}))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
