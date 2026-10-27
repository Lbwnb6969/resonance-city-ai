extends "res://tools/check_creation_transparent_chamber_live.gd"
const Span=preload("res://tools/fixtures/city_creation_recording_span.gd")
func run()->void:
	OUT="res://验证记录/M66/stage"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	var city:=State.new();city.initialize_empty();city.era_unlocks.assign(["pastoral","renaissance"]);city.growth_memories.assign(["dawn"])
	for i in range(6):city.add_house(Vector2(-29+i*3.,-16))
	city.add_road([Vector2(-31,-13),Vector2(-12,-13)])
	for house:Dictionary in city.houses:city.add_road([Vector2(house.origin[0],-15),Vector2(house.origin[0],-13)])
	city.set_house_role("h6","venue");city.set_house_era("h6","renaissance")
	await show(city,Vector2(-20,-16),"舞台透明室内乐终验");quiet();demo.select_tool(4);demo.zoom=24.;demo._update_camera();await settle();demo.set_process(false)
	var music=demo.music;var monitor:=Monitor.new();monitor.music=music;root.add_child(monitor)
	await create_timer(3.).timeout;facts.before=mix_facts();facts.before_master=await Probe.record(OUT+"/before_Master.wav",6.2)
	check(demo.life.invite_concert("h6").ok,"real connected venue accepts the invitation")
	for step in range(1500):
		demo.life._process(.1);music.set_concert_view(demo.life.concert_view())
		if step%15==0:await process_frame
		if demo.life.concert_status().arrived==demo.life.concert_status().invited:break
	demo.life.set_process(true);check(await wait_for(func():return demo.life.concert_view().phase=="playing",8500),"actual audience arrives and starts on the real transport boundary");demo.life.set_process(false)
	var recorder:=Span.start();var began:=Time.get_ticks_msec();var rows:Array=[];var second:=-1
	while Time.get_ticks_msec()-began<26000:
		await process_frame
		var current:=int((Time.get_ticks_msec()-began)/1000)
		if current==second:continue
		second=current;var row:=mix_facts();row.elapsed=second;row.lift=music.Experience.lift(music);rows.append(row)
	facts.performance=rows;facts.stage_master=Span.finish(recorder,OUT+"/stage_26s_Master.wav")
	check(facts.stage_master.ok,"all eight actual stage phrases stay unclipped")
	check(monitor.max_leads==1 and monitor.overlaps.is_empty(),"actual day-to-stage handoff has only one audible lead")
	check(rows.all(func(row):return row.roles.lead_track=="concert") and rows.any(func(row):return row.audible.get("concert",{}).get("db",-80.)> -15.),"real stage voice receives the same measured headroom budget as daytime")
	facts.monitor={"samples":monitor.samples,"max_audible_leads":monitor.max_leads,"overlaps":monitor.overlaps};monitor.queue_free();await capture("stage_actual_audience")
	await finish(personal,voices)
