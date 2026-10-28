extends "res://tools/check_creation_terrain_chunk_seams_live.gd"
const Prefs=preload("res://scripts/audio/city_creation_orchestration_plan.gd")
var trace:Array=[]
var timings:Array[float]=[]
var marks:Array=[]
var origin:=0
var next_sample:=0
var last_frame:=0

func mark(label:String)->void:
	marks.append({"label":label,"clock":demo.music._playback_clock(),"wall":(Time.get_ticks_usec()-origin)/1000000.})
func sample()->void:
	var music=demo.music;var voices:Dictionary={};var leads:=0;var pulses:=0
	var roles:Dictionary=music.get_meta("chamber_roles",{}).get("roles",{})
	for key:String in music._players:
		var player:AudioStreamPlayer=music._players[key];var id:String=music._variation_active.get(key,"")
		var melodic:bool=key in music.HarmonicEmergence.LEADS+["concert"] and not "chamber_counter_" in id
		if melodic and player.volume_db> -45.:leads+=1
		if roles.get(key,{}).get("role")=="pulse" and player.volume_db> -45.:pulses+=1
		voices[key]={"id":id,"db":player.volume_db,"transition":player.stream.get_meta("transition",false),"swap":player.get_meta("last_smooth_swap",{}),"position":player.get_playback_position()}
	trace.append({"clock":music._playback_clock(),"wall":(Time.get_ticks_usec()-origin)/1000000.,"leads":leads,"pulses":pulses,"lead_track":music.get_meta("chamber_roles",{}).get("lead_track",""),"plan":music.get_meta("orchestration_plan",{}).duplicate(true),"roles":roles.duplicate(true),"voices":voices})
func observe(seconds:float)->void:
	var end:=Time.get_ticks_msec()+roundi(seconds*1000.)
	while Time.get_ticks_msec()<end:
		await process_frame
		var now:=Time.get_ticks_usec()
		if last_frame>0:timings.append((now-last_frame)/1000.)
		last_frame=now
		if Time.get_ticks_msec()>=next_sample:sample();next_sample=Time.get_ticks_msec()+200
func preference(mode:String,style:String="")->void:
	var result:Dictionary=demo.state.CreationPolicy.set_preferences(demo.state,{"music":{"mode":mode,"style":style,"seed":74001}})
	check(result.ok,"real saved music preference "+mode+style);demo.music.remove_meta("chamber_role_key");demo.music.update_city(demo.state)
func selection(option:Button,index:int)->void:
	var prefs:Node=demo.get_meta("music_preferences")
	for ignored in range(3):
		if (prefs.mode_index if option==prefs.mode else prefs.style_index)==index:return
		await ui_click(option);await settle()
func interface()->void:
	for dimensions:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=dimensions;await key(KEY_F1);await settle()
		var prefs:Node=demo.get_meta("music_preferences")
		check(prefs.is_visible_in_tree() and Rect2(Vector2.ZERO,Vector2(dimensions)).encloses(prefs.get_global_rect()),"real handbook music controls fit "+str(dimensions.x))
		await selection(prefs.mode,1);await selection(prefs.style,1)
		check(demo.state.creative_settings.music.mode=="fixed" and demo.state.creative_settings.music.style=="deep_flow","native options store fixed deep flow "+str(dimensions.x))
		await capture("music_preferences_"+str(dimensions.x));await key(KEY_ESCAPE)
	var prefs:Node=demo.get_meta("music_preferences");await key(KEY_F1);await selection(prefs.style,2);await key(KEY_ESCAPE)
	var before:Dictionary=demo.state.snapshot();var path:=OUT+"/preferences.json";var cold:=State.new()
	check(demo.state.save_city(path).ok and cold.load_city(path).ok and cold.creative_settings==demo.state.creative_settings,"preference actual disk cold restore")
	check(demo.state.undo().ok and demo.state.redo().ok and demo.state.creative_settings==before.creative_settings,"preference actual UndoRedo")
func record_style(style:String)->void:
	preference("fixed",style);demo._set_light_phase(0);await observe(32.)
	check(demo.music.get_meta("orchestration_plan",{}).get("style")==style,"fixed style committed "+style)
	trace.clear();marks.clear();timings.clear();last_frame=0;origin=Time.get_ticks_usec()
	var record:=AudioEffectRecord.new();AudioServer.add_bus_effect(0,record);record.set_recording_active(true);mark(style+"_start")
	await observe(290.);mark("two_full_forms_end")
	demo._set_light_phase(2);await observe(4.)
	check(demo.music.get_meta("orchestration_plan",{}).get("style")==style,"fixed style survives actual night "+style)
	record.set_recording_active(false);var wave:AudioStreamWAV=record.get_recording();check(wave.save_to_wav(OUT+"/"+style+"_Master.wav")==OK,"actual twoform Master "+style)
	for i in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,i)==record:AudioServer.remove_bus_effect(0,i)
	var sections:Array=[];var materials:Array=[];var actual:Array=[]
	for row:Dictionary in trace:
		var plan:Dictionary=row.plan
		if not sections.has(plan.passage):sections.append(plan.passage)
		if not materials.has(plan.material):materials.append(plan.material)
		var lead:String=demo.music.emergence.score.get("lead_track","")
		var id:String=row.voices.get(lead,{}).get("id","")
		if not actual.has(id):actual.append(id)
	check(sections.size()==6 and materials.size()==3,"six passages and A/B/C plan "+style)
	check(actual.any(func(id):return id.begins_with("core1/"+style+"/0/")) and actual.any(func(id):return id.begins_with("core1/"+style+"/1/")) and actual.any(func(id):return id.begins_with("core1/"+style+"/2/")),"all three authored families actually reach player "+style)
	check(trace.all(func(row):return row.leads<=1 and row.pulses<=1),"one actual lead and primary pulse "+style)
	check(trace.all(func(row):return row.plan.passage==posmod(floori(row.clock/24.),6) and row.roles.foundation.active==(row.plan.passage!=2) and row.roles.air.active==(row.plan.passage<3)),"actual role gates change at current transport boundary, independent of prepared stream IDs "+style)
	check(trace.all(func(row):return str(row.voices.get(row.lead_track,{}).get("id","")).begins_with("core1/"+style+"/")),"fixed subject stays in requested preset while new material prepares "+style)
	var max_drift:=0.;var monotonic:=true
	for i in range(1,trace.size()):
		monotonic=monotonic and trace[i].clock>=trace[i-1].clock
		max_drift=maxf(max_drift,absf((trace[i].clock-trace[0].clock)-(trace[i].wall-trace[0].wall)))
	check(monotonic and max_drift<.15,"real transport maintained "+style)
	timings.sort();var cache:Node=demo.music.get_node_or_null("CoreScoreCache")
	var report:={"style":style,"trace":trace,"markers":marks,"actual_ids":actual,"max_clock_observation_drift":max_drift,"frames":{"p95_ms":timings[int(timings.size()*.95)],"max_ms":timings[-1]},"cache_bundles":cache.lru.size() if cache!=null else 0,"generated":cache.generated if cache!=null else 0,"source_signature":demo.music.BankCache.source_signature(),"failures":failures.duplicate()}
	FileAccess.open(OUT+"/"+style+".json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("CORE_STYLE_RECORDED ",style," ",JSON.stringify({"actual":actual,"drift":max_drift,"failures":failures}))
func run()->void:
	OUT="res://验证记录/M79/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet()
	var voices:=pool();var city:=State.new();city.initialize_free()
	for i in range(5):city.add_house(Vector2(-25+i*3.,-15))
	await show(city,Vector2(-19,-15),"三风格六段乐章");quiet();await interface();demo.ui_layer.hide();origin=Time.get_ticks_usec()
	var styles:Array=["pastoral_breeze","deep_flow","felt_nocturne"]
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--style="):styles=[arg.trim_prefix("--style=")]
	for style:String in styles:await record_style(style)
	check(pool()==voices,"fixed12long4short6bus2nature identities retained")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures},"\t"));print("CORE_MUSIC_LIVE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}))
	demo.queue_free();await process_frame;await create_timer(.2).timeout;quit(0 if failures.is_empty() else 1)
