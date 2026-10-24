extends SceneTree
## Actual GL publication, production clocks, conserved bakery cues and Master PCM.
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Probe=preload("res://tools/fixtures/city_creation_audio_probe.gd")
const CanonFixture=preload("res://tools/fixtures/city_creation_canon_fixture.gd")
var OUT:="res://验证记录/M33/live"
var demo
var checks:=0
var failures:Array=[]
var facts:Dictionary={}
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy or demo.music._loading:await process_frame
	for i in range(12):await process_frame
func show(city:RefCounted,at:Vector2,title:String)->void:
	var chosen:={"ok":true,"id":title,"title":title,"world":city.snapshot(),"view":{"focus":[at.x,.8,at.y],"zoom":18.,"yaw":.25,"pitch":.8,"evening":false,"light_phase":0}}
	await demo.gallery._open_chosen(chosen);demo.life.set_process(false);await settle()
func capture(label:String)->void:
	demo.toast.hide();await RenderingServer.frame_post_draw
	check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"native scene image: "+label)
func wait_for(predicate:Callable,ms:int=4500)->bool:
	var end:=Time.get_ticks_msec()+ms
	while not predicate.call() and Time.get_ticks_msec()<end:await process_frame
	return predicate.call()
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);demo.life.set_process(false);await settle()
	check(DisplayServer.get_name()!="headless" and demo.music.audio_report.get("bank_source","")=="precompiled","actual GL and precompiled production bank")
	var ids:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():ids.append(player.get_instance_id())
	if "--bell-only" in OS.get_cmdline_user_args():
		await verify_landmark();await finish(personal,ids);return
	if "--mill-only" in OS.get_cmdline_user_args():
		await verify_landmark("watermill",Vector2(-2.5,17));await finish(personal,ids);return
	var cafe_only:bool="--cafe-only" in OS.get_cmdline_user_args()
	if not cafe_only:
		var city:=State.new();city.initialize_empty()
		await show(city,Vector2(-20,-10),"empty")
		await create_timer(3.2).timeout
		check(not demo.music.daily_source().audible,"empty work has no house melody")
		check(city.add_house(Vector2(-22,-10)).ok,"first house uses public API")
		demo._after_edit(demo.state.add_house(Vector2(-22,-10)),"room");await settle()
		var published:=Time.get_ticks_msec()
		check(await wait_for(func():return demo.music.daily_source().audible,600),"first house wakes before another phrase boundary")
		facts.first_house_adoption_ms=Time.get_ticks_msec()-published
		for count in [1,2,5]:
			while city.houses.size()<count:check(city.add_house(Vector2(-22+city.houses.size()*3.,-10)).ok,"add real cluster member")
			await show(city,Vector2(-20,-10),str(count)+"homes")
			check(await wait_for(func():return demo.music.daily_source().audible),"native "+str(count)+" houses adopt an audible lead")
			var recording:Dictionary=await Probe.record(OUT+"/"+str(count)+"homes_Master.wav",24.2 if count==5 else 6.2)
			facts[str(count)]={"recording":recording,"score":demo.music.emergence.score.duplicate(true),"gain_lift_db":demo.music.Experience.lift(demo.music)}
			check(recording.ok,"actual unclipped Master with "+str(count)+" houses")
			if count==5:check(recording.peak>=.18 and recording.peak<=.48,"ordinary settlement Master is in .18..48 range")
			await capture(str(count)+"homes")
	else:
		var city:=State.new();city.initialize_empty()
		for i in range(5):check(city.add_house(Vector2(-22+i*3.,-10)).ok,"public cafe probe household")
		await show(city,Vector2(-20,-10),"cafe_probe")
	# Conserved stock increments and real social attendance feed the shared pool.
	check(demo.state.set_house_role("h1","bakery").ok and demo.state.set_house_role("h2","garden_cafe").ok,"public bakery and cafe roles")
	demo._after_edit({"ok":true,"message":"音源角色更新"},"history");await settle();demo.life.set_process(false)
	demo.set_process(false)
	demo.music.set_cafe_view({"h2":{"phase":"tea","arrived":2}})
	var before:int=demo.music._cafe_cues
	check(await wait_for(func():return demo.music._cafe_cues>before),"published tea attendance view plays a spatial flute alongside the choir")
	demo.music.set_cafe_view({});demo.set_process(true)
	check(demo.state.produce_bread("h1",1),"real stock batch produced")
	check(demo.music.queue_bakery_cue("baked","h1"),"conserved batch queues its bakery response")
	before=demo.music.bakery_cues.cues
	check(await wait_for(func():return demo.music.bakery_cues.cues>before),"actual bakery PCM uses existing short voice")
	check(not demo.music.queue_bakery_cue("baked","h1"),"duplicate callback cannot replay an already-seen batch")
	facts.life={"bakery":demo.music.bakery_cues.cues,"cafe":demo.music._cafe_cues,"families":demo.music._life_orchestration.duplicate()}
	if cafe_only:
		await finish(personal,ids);return
	# Real enclosed courtyards, clockwise short-note ownership and natural clock.
	var fixture:=CanonFixture.build();await show(fixture.city,CanonFixture.COURT,"court")
	before=demo.music.canon.cues
	check(await wait_for(func():return demo.music.canon.cues>before,2500),"real closed courtyard plays short canon alongside long stems")
	facts.canon=demo.music.canon.report()
	await capture("court_canon")
	facts.court_recording=await Probe.record(OUT+"/court_Master.wav",6.2)
	check(facts.court_recording.ok,"hybrid canon plus choir has zero clipping")
	root.size=Vector2i(1024,768);await settle();await capture("court_1024")
	facts.hybrid=await preload("res://tools/fixtures/city_creation_hybrid_cues_live.gd").run(self)
	await verify_landmark()
	await verify_landmark("watermill",Vector2(-2.5,17))
	await finish(personal,ids)
func finish(personal:PackedByteArray,ids:Array)->void:
	var samples:Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(120):
		await process_frame;var now:=Time.get_ticks_usec();samples.append(float(now-last)/1000.);last=now
	samples.sort();facts.frames={"p95_ms":samples[114],"max_ms":samples[-1],"count":samples.size()}
	var short_peak:float=demo.music.audio_report.effect_peaks.values().max()
	var bound:float=demo.music.Experience.LONG_PEAK_BUDGET+short_peak*db_to_linear(demo.music.SHORT_GAIN_DB)*4.*(1.+demo.music.Spatial.PAN_LIMIT)+.03
	facts.headroom={"long_stereo_budget":demo.music.Experience.LONG_PEAK_BUDGET,"four_short_pcm_peak":short_peak,"natural_caps_sum":.03,"all_layers_bound":bound}
	check(bound<1.,"current mastered choir plus four worst-case short voices and both natural players fit under full scale")
	var current:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():current.append(player.get_instance_id())
	check(ids==current and current.size()==12 and demo.music._effects.size()==4 and demo.music.spatial.report().bus_count==6,"original 12 long + 4 short + 6 buses retain identity")
	demo.music.set_muted(true)
	check(not demo.music.daily_source().audible and not demo.music.canon.report().audible,"mute immediately clears both layers")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/music_experience_core_report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"	",true,true))
	print("MUSIC_EXPERIENCE_LIVE ",JSON.stringify({"ok":result.ok,"checks":checks,"failures":failures}))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

func verify_landmark(signature:String="bell_keep",at:Vector2=Vector2(-31,0))->void:
	var city:=State.new();city.initialize_empty();city.signature_unlocks.assign([signature])
	var placed:Dictionary=city.place_signature(signature,at)
	check(placed.ok,"place dedicated "+signature+" through actual landmark API")
	await show(city,at,signature)
	var source:=str(placed.get("house_id",""))
	check(demo.music._house_music.has(source),"dedicated landmark is actually published in the catalogue")
	var before:int=demo.music._tower_cues;var clock:float=demo.music._playback_clock()
	var heard:bool=await wait_for(func():return demo.music._tower_cues>before if signature=="bell_keep" else demo.music.signature_music_report().any(func(row):return row.kind=="waterwheel" and row.audible),8000)
	check(heard,"native attention grid plays dedicated "+signature+" alongside choir")
	facts[signature]={"before_clock":clock,"clock":demo.music._playback_clock(),"attention":demo.music.attention.report(),"source":demo.music._house_music.get(source),"weight":demo.music.acoustic.focus_weight(source),"report":demo.music.tower_music_report() if signature=="bell_keep" else demo.music.signature_music_report()}
	await capture(signature)
