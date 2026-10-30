extends "res://tools/check_creation_placed_landmarks_live.gd"
const SampleFixture=preload("res://tools/fixtures/city_creation_free_sample_fixture.gd")
const Samples=preload("res://scripts/world/city_creation_inspiration_samples.gd")
const AudioProbe=preload("res://tools/fixtures/city_creation_audio_probe.gd")
func records()->Dictionary:
	return {"journey":demo.state.harmony_journey.duplicate(true),"eras":demo.state.era_unlocks.duplicate(),"archive":demo.state.archive_unlocks.duplicate(),"life":demo.state.life_progress.duplicate(true)}
func run()->void:
	OUT="res://验证记录/M84/free_sample_access_20261030/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet();var voices:=pool();var traces:Array=[]
	check(DisplayServer.get_name()!="headless" and AudioServer.get_driver_name()=="WASAPI","actual OpenGL and WASAPI")
	for card:String in Samples.IDS:
		var city:=SampleFixture.fresh();city.CreationPolicy.set_preferences(city,{"music":{"mode":"fixed","style":"pastoral_breeze","seed":74001}})
		var row:Dictionary=Samples.plans(city).filter(func(r):return r.card==card)[-1]
		await show(city,Vector2(row.position.x,row.position.z),card);quiet();demo.zoom=9.;demo.focus=row.position+Vector3.UP*.7;demo.pitch=.65;demo._update_camera();await settle()
		var history:=records();var rows:=Samples.plans(demo.state);var scenery:Node=demo.get_node("TraditionScenery/SecondStudyScenery")
		check(Samples.IDS.all(func(id):return Samples.rank(demo.state,id)==0) and demo.state.harmony_journey.get("traditions",[]).is_empty(),"actual zero-card source "+card)
		check(scenery.get_child_count()==rows.size() and scenery.get_children().all(func(n):return not n.find_children("*","MeshInstance3D",true,false).is_empty()),"actual sample models publish from real geometry "+card)
		if card==Samples.IDS[0]:
			var expected:Vector3=row.position+Vector3.UP*.23
			check(await wait_for(func():return demo.get_meta("waterfront_light").sources.any(func(at):return Vector3(at).distance_to(expected)<.01)),"free lantern reaches real water reflection consumer")
		check(await wait_for(func():return demo.music.get_meta("orchestration_plan",{}).get("inspiration","")==card,30000),"unearned real source latches at production phrase boundary "+card)
		check(await wait_for(func():return demo.music._variation_active.get("terrace","").begins_with("core1/")),"existing answer player adopts real authored stream "+card)
		var plan:Dictionary=demo.music.get_meta("orchestration_plan");var answer:String=demo.music._variation_active.get("terrace","")
		check(plan.answer_material!=plan.material and answer=="core1/pastoral_breeze/%d/0/0/74001/answer"%plan.answer_material,"actual distinct answer material matches selected spatial expression "+card)
		await capture(card+"_day");demo._set_light_phase(2);await capture(card+"_night");demo._set_light_phase(0)
		var pcm:Dictionary=await AudioProbe.record(OUT+"/"+card+"_Master.wav",3.2);check(pcm.ok,"actual unclipped production Master "+card)
		traces.append({"card":card,"source":row.house_id,"clock":demo.music._playback_clock(),"plan":plan.duplicate(true),"answer":answer,"answer_gain_db":demo.music._players.terrace.volume_db,"pcm":pcm})
		for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:
			root.size=size;await settle();await key(KEY_F1);await settle();var letters:Node=demo.get_meta("city_letters");var controls:Node=letters.get_node("SecondStudyControls")
			check(demo.guide.visible() and controls.get_children().all(func(c):return Rect2(Vector2.ZERO,Vector2(size)).encloses(c.get_global_rect())),"native F1 controls fit "+str(size.x)+card)
			await ui_click(letters.get_node("ReadSecondStudy"));await settle()
			check("无需手札阶数" in demo.guide.body.text and "仅列原有记录" in demo.guide.body.text,"native explanation separates history from free access "+str(size.x)+card)
			await capture(card+"_controls_"+str(size.x))
			await ui_click(controls.get_child(1));await settle();check(not demo.get_node("TraditionScenery/SecondStudyScenery").visible and Samples.for_source(demo.state,row.house_id)==card,"native hide preserves real music source "+str(size.x)+card)
			await ui_click(controls.get_child(1));await settle();check(demo.get_node("TraditionScenery/SecondStudyScenery").visible,"native show restores actual scenery "+str(size.x)+card)
			letters.sample_cursor=rows.find(row);await ui_click(controls.get_child(0));await settle()
			check(not demo.guide.visible() and demo.focus.distance_to(row.position+Vector3.UP*.7)<.01,"native locate reaches exact physical support "+str(size.x)+card)
		check(records()==history,"free usage invents no rank, rarity, archive or life history "+card)
		var saved:Dictionary=demo.state.snapshot();var cold:=State.new()
		check(demo.state.save_city(OUT+"/"+card+".json").ok and cold.load_city(OUT+"/"+card+".json").ok and Samples.plans(cold)==rows,"actual disk cold reconstruction of zero-card samples "+card)
		demo._after_edit(demo.state.remove_house(row.house_id),"erase");await settle();quiet()
		check(Samples.for_source(demo.state,row.house_id)=="" and demo.get_node("TraditionScenery/SecondStudyScenery").get_child_count()<rows.size(),"actual support removal retires model and future music eligibility "+card)
		await key(KEY_Z,true);await settle();quiet();check(Samples.plans(demo.state)==rows,"native Undo restores geometry with no earned card "+card)
		await show(cold,Vector2(row.position.x,row.position.z),"微景冷读");quiet();check(demo.state.houses==saved.houses and Samples.plans(demo.state)==rows,"cold scene republishes exact real support "+card)
	var classic:RefCounted=SampleFixture.fresh();classic.creative_settings={};await show(classic,Vector2(-22,-15),"经典原貌");quiet()
	check(demo.get_node("TraditionScenery/SecondStudyScenery").get_child_count()==0,"unconverted legacy actual scene retains original appearance")
	var converted:Dictionary=demo.state.CreationPolicy.convert(demo.state,OUT+"/converted.json");demo._after_edit(converted,"history");await settle();quiet()
	check(converted.ok and demo.get_node("TraditionScenery/SecondStudyScenery").get_child_count()==3 and Samples.IDS.all(func(id):return Samples.rank(demo.state,id)==0),"explicit conversion publishes spatial scenery without synthetic cards")
	check(pool()==voices and voices.long.size()==12 and voices.short.size()==4 and voices.nature.size()==2 and voices.buses==6,"original bounded audio pool retained")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save byte identical")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.,"traces":traces,"bank_signature":demo.music.BankCache.source_signature()}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("FREE_SAMPLE_ACCESS_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
