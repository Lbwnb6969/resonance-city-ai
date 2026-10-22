extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
const Span=preload("res://tools/fixtures/city_creation_recording_span.gd")
static func advance_era(c:RefCounted,era:String,choice:String)->void:
	c.stage("真实生活与问答晋升 "+era)
	var ceremony:Node=c.demo.get_meta("era_ceremony");var deadline:=Time.get_ticks_msec()+80000
	while Time.get_ticks_msec()<deadline:
		c.demo.life._process(.12);await c.tree.process_frame
		if ceremony.events.any(func(row):return row.phase=="finish" and row.era==era):break
	var events:Array=ceremony.events.filter(func(row):return row.phase=="finish" and row.era==era)
	c.check(era in c.demo.state.era_unlocks and events.size()==1 and float(events[0].duration)>=6. and float(events[0].duration)<7.,"natural_six_second_"+era)
	c.details[era]={"events":events,"answers":c.demo.state.era_answers.duplicate(true),"tea":c.demo.state.life_progress.tea_parties}
	await c.tree.create_timer(.28).timeout
	if c.demo.journal.score_buttons.has(choice):await c.click(c.demo.journal.score_buttons[choice])
	c.check(choice in c.demo.state.era_modifiers,"native_charter_"+era)
	await c.capture(era);c.demo.journal.close_panel();await c.postpone()
static func run(c:RefCounted)->void:
	c.stage("新进程读取第一晚作品")
	var handoff:Dictionary=JSON.parse_string(FileAccess.get_file_as_string(c.out+"/handoff.json"))
	c.check(int(handoff.process_id)!=OS.get_process_id(),"real_process_exit_and_restart")
	var chosen:Dictionary=c.demo.gallery.library.read(str(handoff.id));c.check(chosen.get("ok",false),"same_collection_work_read")
	if not chosen.get("ok",false):return
	await c.demo.gallery._open_chosen(chosen);await c.settle();c.demo.life.set_process(false)
	var reference:=State.new();reference.restore(handoff.world)
	var city:RefCounted=c.demo.state;var old_ids:Array=city.houses.map(func(h):return str(h.id))
	c.check(city.houses==reference.houses and city.roads==reference.roads and city.plants==reference.plants and city.waters==reference.waters,"same_city_geometry_restored")
	for field:String in ["traditions","ranks","completed_vignettes","vignette_blessings","harmony_xp","harmony_level"]:
		c.check(city.harmony_journey.get(field)==reference.harmony_journey.get(field),"overnight_preserves_"+field)
	c.check(city.wish_rewards==reference.wish_rewards and city.bakery_supply==reference.bakery_supply and city.workshop_supply==reference.workshop_supply,"overnight_conserves_first_burst_and_inventory")
	c.check(c.demo.get_meta("era_ceremony").active.is_empty(),"load_does_not_replay_era")
	var recording:=Span.start();var began:=Time.get_ticks_msec();var audio_ids:Array=[];c.sampling=true
	for node:Node in c.demo.music.get_children()+c.demo.ambience.get_children():audio_ids.append(node.get_instance_id())
	var origin:=Vector2(city.houses[0].origin[0],city.houses[0].origin[1]);c.look(origin+Vector2(4,2));c.demo.select_tool(0);await c.postpone()
	await c.ground(origin+Vector2(12,0));await c.settle()
	c.check(city.houses.size()==old_ids.size()+1 and old_ids.all(func(id):return city._house_index(id)>=0),"native_next_day_extension_retains_old_city")
	var new_id:String=city.houses[-1].id;var new_origin:=Vector2(city.houses[-1].origin[0],city.houses[-1].origin[1])
	await c.edit(city.add_road([origin+Vector2(8,1.55),new_origin+Vector2(0,1.55)] as Array[Vector2]),"road")
	var a:Dictionary=city.add_district([origin,origin+Vector2(0,5)] as Array[Vector2],3.6,"warm");await c.edit(a,"terrace")
	var b:Dictionary=city.add_district([origin+Vector2(8,0),origin+Vector2(8,5)] as Array[Vector2],3.6,"deep");await c.edit(b,"terrace")
	await c.edit(city.link_districts(str(a.district_id),str(b.district_id)),"terrace",false)
	await c.fill(14);c.look(origin+Vector2(4,2));await advance_era(c,"renaissance","polyphonic_academy")
	await c.fill(28);await c.edit(city.set_district_era(str(b.district_id),"renaissance"),"terrace")
	c.look(origin+Vector2(4,2));await advance_era(c,"clockwork","hydraulic_guild")
	var d:Dictionary=city.add_district([origin+Vector2(4,0),origin+Vector2(4,5)] as Array[Vector2],3.6,"weave");await c.edit(d,"terrace")
	await c.edit(city.set_district_era(str(d.district_id),"clockwork"),"terrace")
	await c.edit(city.link_districts(str(b.district_id),str(d.district_id)),"terrace",false)
	await c.fill(50);c.look(origin+Vector2(4,2));await advance_era(c,"modern_eco","craft_federation")
	await c.edit(city.set_house_era(new_id,"modern_eco"),"terrace")
	for cell:Vector3i in [Vector3i(1,0,0),Vector3i(0,0,1),Vector3i(1,0,1),Vector3i(0,0,2),Vector3i(1,0,2)]:await c.edit(city.add_cell(new_id,cell.x,cell.y,cell.z))
	c.check(city.era_unlocks==["pastoral","renaissance","clockwork","modern_eco"] and c.total_xp()>int(handoff.total_xp),"same_bay_crosses_all_four_eras_and_keeps_growing")
	c.check(int(city.bakery_status("h1").produced)>int(reference.bakery_status("h1").produced),"actual_baker_resumes_after_exit")
	c.demo.select_tool(4);await c.capture("同一河湾四时代")
	c.stage("至少两轮完整声学呼吸长录音")
	var clocks:Dictionary={};var frames:Array[float]=[];var previous:=Time.get_ticks_usec()
	while Time.get_ticks_msec()-began<150000:
		await c.tree.process_frame;var now:=Time.get_ticks_usec();frames.append((now-previous)/1000.);previous=now
		var clock:float=c.demo.music._playback_clock();var cycle:=floori(clock/72.)
		if c.demo.music.ClusterHarmony.Tide.breath(clock)>.8:clocks[cycle]=true
	c.details.audio=Span.finish(recording,c.out+"/day2_连续河湾.wav");frames.sort()
	c.sampling=false;c.frame_times.sort();c.details.frame_p95_ms=c.frame_times[int(c.frame_times.size()*.95)];c.details.score_samples=c.samples
	var phrases:Dictionary={}
	for row:Dictionary in c.samples:
		phrases[int(row.phrase)]=true
		if float(row.breath)>.8:clocks[floori(float(row.clock)/72.)]=true
	c.details.breath_cycles=clocks.keys();c.check(clocks.size()>=2 and phrases.size()==8,"two_real_breathing_tides_and_all_eight_phrases")
	c.check(c.details.audio.ok and float(c.details.audio.seconds)>=140.,"long_actual_master_unclipped")
	var after:Array=[]
	for node:Node in c.demo.music.get_children()+c.demo.ambience.get_children():after.append(node.get_instance_id())
	c.check(audio_ids==after and c.demo.music._players.size()==12 and c.demo.music._effects.size()==4 and c.demo.music.spatial._names.size()==6 and c.demo.ambience.get_child_count()==2,"fixed_audio_pool_across_full_return")
	var saved:Dictionary=await c.save_work("第二日四时代河湾")
	c.details.process_id=OS.get_process_id();c.details.houses=city.houses.size();c.details.final_id=c.demo.gallery.last_saved_id
	c.check(saved.get("ok",false) and State.new().restore(saved.world).ok,"four_era_final_work_reopens")
