extends "res://tools/check_creation_terrain_chunk_seams_live.gd"
## M75: existing production renderer/music only; no synthesis or save-policy edits.
const CivicFixture=preload("res://tests/test_city_creation_civic_supply.gd")
const Civic=preload("res://scripts/world/city_creation_civic_supply.gd")
const Stamp=preload("res://scripts/audio/city_creation_bank_stamp.gd")
var observations:Array=[]
var recording_seconds:=288.

func save_json(name:String,value:Variant)->void:
	FileAccess.open(OUT+"/"+name+".json",FileAccess.WRITE).store_string(JSON.stringify(value,"\t",true,true))

func scene_view(city:RefCounted,label:String,at:Vector2,zoom_value:float=26.,phase:int=0)->void:
	var before:=Time.get_ticks_usec()
	var reader:=State.new();check(reader.restore(JSON.parse_string(JSON.stringify(city.snapshot()))).ok,"cold-valid baseline: "+label)
	await show(city,at,label);quiet();demo.ui_layer.hide();demo.zoom=zoom_value;demo.yaw=.25;demo.pitch=.8
	demo._set_light_phase(phase);demo._update_camera();await settle()
	save_json(label+"_city",demo.state.snapshot())
	await capture(label)
	var frames:Array[float]=[];var last:=Time.get_ticks_usec()
	for ignored in range(60):
		await process_frame;var now:=Time.get_ticks_usec();frames.append(float(now-last)/1000.);last=now
	frames.sort()
	observations.append({"label":label,"houses":demo.state.houses.size(),"roads":demo.state.roads.size(),"load_and_sample_ms":float(Time.get_ticks_usec()-before)/1000.,"frames":{"samples":frames.size(),"p95_ms":frames[int(frames.size()*.95)],"max_ms":frames[-1]},"static_memory_bytes":OS.get_static_memory_usage(),"camera":{"focus":demo.focus,"zoom":demo.zoom,"yaw":demo.yaw,"pitch":demo.pitch,"phase":phase},"bank_load_ms":demo.music.audio_report.get("bank_load_ms",-1.)})
	save_json("scene_observations",observations)
	print("INTEGRATION_BASELINE_SCENE ",label)

func five_houses()->RefCounted:
	var city:=State.new();city.initialize_empty()
	for i in range(5):check(city.add_house(Vector2(-30+i*3.,-20)).ok,"public five-house recipe")
	check(city.add_road([Vector2(-33,-17.5),Vector2(-15,-17.5)] as Array[Vector2]).ok,"five-house street")
	return city

func two_districts()->RefCounted:
	var city:=State.new();city.initialize_empty();city.era_unlocks.assign(["pastoral","renaissance"]);city.growth_memories.assign(["dawn"])
	# Same earned-era test setup as the existing M65 fixture; no unlock migration.
	for z:float in [-12.,-22.]:
		for i in range(5):
			var result:Dictionary=city.add_house(Vector2(-27+i*3.,z));check(result.ok,"two-district home")
			if z< -15.:check(city.set_house_era(str(result.house_id),"renaissance").ok,"second historical era")
	for z:float in [-9.,-19.]:city.add_road([Vector2(-31,z),Vector2(-12,z)] as Array[Vector2])
	city.add_road([Vector2(-31,-9),Vector2(-31,-19)] as Array[Vector2])
	return city

func boundaries()->RefCounted:
	var city:=State.new();city.initialize_empty()
	for x:float in [-28.,-17.]:
		var result:Dictionary=city.add_house(Vector2(x,-20));check(result.ok,"roof boundary house")
		var id:=str(result.house_id)
		for dx:int in range(1,4):check(city.add_cell(id,dx,0,0).ok,"roof horizontal wing")
		for dz:int in range(1,3):check(city.add_cell(id,0,dz,0).ok,"roof return wing")
		if x> -20.:
			for dz:int in range(1,3):check(city.add_cell(id,3,dz,0).ok,"U concave roof")
	for points:Array in [[Vector2(-32,-10),Vector2(-10,-10)],[Vector2(-24,-14),Vector2(-24,-6)],[Vector2(-15,-14),Vector2(-15,-10)]]:
		var typed:Array[Vector2]=[];typed.assign(points);check(city.add_road(typed).ok,"boundary T/X road")
	return city

func record_cycles()->void:
	check(await wait_for(func():return demo.music.daily_source().get("audible",false),10000),"production five-house source audible")
	var effect:=AudioEffectRecord.new();AudioServer.add_bus_effect(0,effect);effect.set_recording_active(true)
	var began:=Time.get_ticks_usec();var start_clock:float=demo.music._playback_clock();var next_sample:=0.;var next_probe:=5.;var measured:=0.;var samples:Array=[]
	while measured<recording_seconds and float(Time.get_ticks_usec()-began)/1000000.<recording_seconds*1.6+20.:
		await process_frame
		var wall:=float(Time.get_ticks_usec()-began)/1000000.
		if wall>=next_sample:
			next_sample+=1.;samples.append({"wall_seconds":wall,"clock":demo.music._playback_clock(),"source":demo.music.daily_source(),"form":demo.music.ClusterHarmony.Tide.LongForm.view(demo.music._playback_clock(),demo.music.emergence.score),"roles":demo.music.get_meta("chamber_roles",{}).duplicate(true),"streams":demo.music._variation_active.duplicate(true)})
		if wall>=next_probe:
			next_probe+=5.;var interim:AudioStreamWAV=effect.get_recording();measured=interim.get_length() if interim!=null else 0.
			print("INTEGRATION_BASELINE_PCM seconds=",measured," wall=",wall)
	effect.set_recording_active(false);var wave:AudioStreamWAV=effect.get_recording()
	check(wave!=null and wave.save_to_wav(OUT+"/five_houses_two_cycles_Master.wav")==OK,"actual production Master saved")
	var length:float=wave.get_length() if wave!=null else 0.
	check(length>=recording_seconds,"measured PCM covers two complete 144-second cycles")
	for index in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,index)==effect:AudioServer.remove_bus_effect(0,index)
	save_json("two_cycles_runtime",{"requested_pcm_seconds":recording_seconds,"pcm_seconds":length,"wall_seconds":float(Time.get_ticks_usec()-began)/1000000.,"start_clock":start_clock,"end_clock":demo.music._playback_clock(),"samples":samples,"bank_signature":Stamp.SIGNATURE,"sample_rate":wave.mix_rate if wave!=null else 0,"audio_driver":AudioServer.get_driver_name()})

func run()->void:
	OUT="res://验证记录/M75/baseline"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
		if arg.begins_with("--pcm-seconds="):recording_seconds=float(arg.trim_prefix("--pcm-seconds="))
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=30
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var start:=Time.get_ticks_usec();demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var initialization_ms:=float(Time.get_ticks_usec()-start)/1000.;var voices:=pool()
	check(DisplayServer.get_name()!="headless" and demo.music.audio_report.get("bank_source","")=="precompiled","real OpenGL using existing production bank")
	var empty:=State.new();empty.initialize_empty();await scene_view(empty,"empty",Vector2(-24,-20))
	var five:=five_houses();await scene_view(five,"five_day",Vector2(-24,-20))
	await scene_view(five,"five_night",Vector2(-24,-20),14.,2)
	await scene_view(two_districts(),"mixed_districts",Vector2(-21,-17),32.)
	var civic:=CivicFixture.fixture();await scene_view(civic,"supply_initial",Vector2(-25,-18),28.)
	for i in range(5):
		var result:Dictionary=demo.state.set_house_role("h%d"%[i+1],Civic.ROLES[i]);check(result.ok,"public supply role");demo._after_edit(result,"room");await settle()
	# Advance the actual resident/worker simulation, never invent completion.
	for step in range(4000):
		demo.life._process(.1)
		if step%25==0:await process_frame
		if int(demo.state.life_progress.tea_parties)>0:break
	save_json("supply_life",{"progress":demo.state.life_progress,"bread":demo.state.bakery_supply,"workshop":demo.state.workshop_supply,"seconds":demo.life.time})
	check(int(demo.state.life_progress.tea_parties)>0,"real delivered supply and completed seated tea")
	await scene_view(demo.state,"supply_operating",Vector2(-25,-18),28.)
	await scene_view(boundaries(),"road_roof_boundaries",Vector2(-22,-15),30.)
	await scene_view(five_houses(),"recording_city",Vector2(-24,-20))
	demo.life.set_process(true)
	await record_cycles()
	check(pool()==voices and voices.long.size()==12 and voices.short.size()==4 and voices.nature.size()==2 and voices.buses==6,"original voice pool identities and budgets unchanged")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"scenes":observations,"engine":Engine.get_version_info(),"display":DisplayServer.get_name(),"video_adapter":RenderingServer.get_video_adapter_name(),"bank_source":demo.music.audio_report.get("bank_source",""),"bank_signature":Stamp.SIGNATURE,"initialization_ms":initialization_ms,"total_runtime_ms":float(Time.get_ticks_usec()-start)/1000.,"memory_bytes":OS.get_static_memory_usage()}
	save_json("baseline_report",report);print("INTEGRATION_BASELINE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures}))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
