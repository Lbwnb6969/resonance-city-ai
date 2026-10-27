extends "res://tools/check_creation_organic_corners_live.gd"
const Roles=preload("res://scripts/audio/city_creation_chamber_roles.gd")
const Ornaments=preload("res://scripts/audio/city_creation_chamber_ornaments.gd")
const Legato=preload("res://scripts/audio/city_creation_chamber_legato.gd")
class Monitor extends Node:
	var music:Node
	var samples:=0
	var max_leads:=0
	var overlaps:Array=[]
	var seen:Dictionary={}
	func _process(_delta:float)->void:
		var audible:Array=[]
		for key:String in music._players:
			var player:AudioStreamPlayer=music._players[key]
			if player.volume_db<=-38. or not player.playing:continue
			var id:=str(music._variation_active.get(key,""));var notes:Array=music.audio_report.get("variation_notes",{}).get(id,music.audio_report.get("harmony_notes",{}).get(id,[]))
			if notes.any(func(e):return e.get("layer",0)==3):audible.append({"track":key,"id":id,"db":player.volume_db})
			seen[id]=true
		samples+=1;max_leads=maxi(max_leads,audible.size())
		if audible.size()>1 and overlaps.size()<8:overlaps.append({"clock":music._playback_clock(),"players":audible})
func mix_facts()->Dictionary:
	var music=demo.music;var rows:Dictionary={}
	for key:String in music._players:
		if music._players[key].volume_db> -38.:rows[key]={"db":music._players[key].volume_db,"stream":music._variation_active.get(key,""),"target":music.target_gain_db(key,music.concert_active)}
	return {"roles":music.get_meta("chamber_roles",{}).duplicate(true),"audible":rows,"clock":music._playback_clock()}
func run()->void:
	OUT="res://验证记录/M65/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	check(DisplayServer.get_name()!="headless" and demo.music.audio_report.get("bank_source","")=="precompiled" and demo.music.audio_report.get("bank_codec","")=="qoa","native GL loads the complete current portable QOA bank")
	var city:=State.new();city.initialize_empty();city.era_unlocks.assign(["pastoral","renaissance"]);city.growth_memories.assign(["dawn"])
	for z:float in [-12.,-22.]:
		for i in range(5):
			var result:Dictionary=city.add_house(Vector2(-27+i*3.,z));check(result.ok,"actual two-neighbourhood home")
			if z< -15.:check(city.set_house_era(str(result.house_id),"renaissance").ok,"public second-neighbourhood era")
	city.add_road([Vector2(-31,-9),Vector2(-12,-9)]);city.add_road([Vector2(-31,-19),Vector2(-12,-19)]);city.add_road([Vector2(-31,-9),Vector2(-31,-19)])
	for h:Dictionary in city.houses:city.add_road([Vector2(h.origin[0],h.origin[1]+1.),Vector2(h.origin[0],h.origin[1]+3.)])
	check(city.set_house_role("h1","bakery").ok and city.set_house_role("h2","garden_cafe").ok and city.set_house_role("h6","workshop").ok and city.set_house_role("h10","venue").ok,"real bakery, cafe, instrument maker and performance house")
	check(city.add_water([Vector2(-29,-14)] as Array[Vector2],1.2,"pond").ok,"actual small bakery water-mill pond")
	city.place_plant(Vector2(-23,-15),"olive")
	var cold_check:=State.new().restore(city.snapshot());check(cold_check.ok,"authored fixture validates before publication: "+str(cold_check));facts.fixture_validation=cold_check
	if not cold_check.ok:await finish(personal,voices);return
	await show(city,Vector2(-21,-12),"透明室内乐街坊");quiet();demo.select_tool(0);demo.house_module_mode=false;demo.zoom=24.;demo.pitch=.8;demo.yaw=.2;demo._update_camera();await settle();demo.set_process(false)
	check(demo.state.houses.size()==10 and record_house("h1").role=="bakery","the intended ten-house fixture actually published")
	var music=demo.music;var monitor:=Monitor.new();monitor.music=music;root.add_child(monitor)
	check(await wait_for(func():return music.daily_source().audible,7000),"focused ordinary neighbourhood adopts a real cantabile PCM")
	facts.first=mix_facts();var first_track:=str(music.get_meta("chamber_roles").lead_track)
	check(first_track==music.ClusterHarmony.Tide.track(music._house_music[music.get_meta("chamber_roles").source_id]) and music.get_meta("chamber_roles").roles.values().filter(func(row):return row.layer==3).size()==1,"first real district owns exactly one melodic stream")
	check(music._variation_active.values().any(func(id):return "chamber_counter_renaissance" in str(id)),"second district actually plays middle-register accompaniment")
	facts.day_master=await Probe.record(OUT+"/two_districts_Master.wav",6.2);check(facts.day_master.ok,"actual four-layer daytime Master has no clipping");await capture("two_neighbourhoods_day")
	demo.focus=Vector3(-21,1.,-22);demo._update_camera()
	check(await wait_for(func():return str(music.get_meta("chamber_roles",{}).get("lead_track",""))=="renaissance_fugue" and music._variation_active.get("renaissance_fugue","")==music.get_meta("chamber_roles").roles.renaissance_fugue.id and "chamber_counter" not in str(music._variation_active.get("renaissance_fugue","")) and music._players.renaissance_fugue.volume_db> -25.,8000),"moving the actual camera hands the cantor to the second era")
	facts.second=mix_facts();facts.handoff_master=await Probe.record(OUT+"/camera_handoff_Master.wav",4.2);check(facts.handoff_master.ok,"actual handoff recording has no clipping");await capture("second_district_cantor")
	# The actual UI action enables neighbourhood articulation, then its PCM
	# is rendered in the worker and installed on the existing voice at a seam.
	demo.set_process(true);demo.focus=Vector3(-21,1.,-12);demo.zoom=14.;demo._update_camera();await settle();await select_house("h3");await ui_click(stamp());await settle();quiet();demo.set_process(false)
	check(record_house("h3").get("corner_bevel",0)==2,"native leaf edits real geometry in the cantabile neighbourhood")
	check(await wait_for(func():return str(music._variation_active.get(str(music.get_meta("chamber_roles",{}).get("lead_track","")),"")).begins_with("chamber_legato/"),14000),"organic neighbourhood actually adopts longer articulation PCM on the existing player")
	var leader:=str(music.get_meta("chamber_roles").lead_track);var legato_id:=str(music._variation_active.get(leader,""));facts.legato=mix_facts()
	check(Legato.valid_key(legato_id) and music._harmony_streams.has(legato_id),"live legato is an addressable, reconstructable stream identity")
	if Legato.valid_key(legato_id):
		var cold=load("res://scripts/audio/city_creation_music.gd").new();cold.audio_report=music.audio_report.duplicate(true);cold._harmony_streams={}
		check(Legato.materialize(cold,legato_id) and cold._harmony_streams[legato_id].data==music._harmony_streams[legato_id].data,"cold legato recipe reproduces the exact actual PCM bytes")
		cold.free()
	var mix:Dictionary=music.Phonograph.capture(music);check(music.Phonograph.valid(mix),"actual layered/legato phonograph capture validates")
	FileAccess.open(OUT+"/phonograph_mix.json",FileAccess.WRITE).store_string(JSON.stringify(mix,"\t",true,true))
	check(music.phonograph.begin(music,JSON.parse_string(JSON.stringify(mix,"",true,true))).ok,"actual saved mix reopens on the original twelve players")
	await create_timer(.6).timeout;music.phonograph.stop(music)
	# Run the production resident/worker simulation until it supplies a real
	# published tea view; no invented attendance or stock count is injected.
	var tea:=false
	for step in range(6000):
		demo.life._process(.1);music.set_cafe_view(demo.life.cafe_view())
		if step%25==0:await process_frame
		if music._cafe_eligible("h2"):tea=true;break
	facts.life={"supply":preload("res://scripts/world/city_creation_civic_supply.gd").status(demo.state,"h2"),"tea":tea,"bakery":demo.state.bakery_status("h1"),"view":demo.life.cafe_view(),"time":demo.life.time}
	check(int(demo.state.bakery_status("h1").produced)>0,"actual bakery worker produced the batches behind the cue")
	check(tea,"actual residents bought bread, walked to the cafe and formed a tea group")
	check(facts.life.supply.tier==2,"real conserved bakery delivery activates the tier-two cafe counterpoint")
	var before_cafe:int=music._cafe_cues
	check(await wait_for(func():return music._cafe_cues>before_cafe,12000),"actual published tea attendance produces a budgeted high ornament")
	facts.life_master=await Probe.record(OUT+"/real_life_ornaments_Master.wav",9.2);check(facts.life_master.ok,"actual real-life ornament Master has no clipping")
	var ornaments:Array=music.get_meta("chamber_ornament_events",[]);var counts:Dictionary={};var grid_ok:=true
	for row:Dictionary in ornaments:
		var bar:=floori(float(row.onset)/3.);counts[bar]=int(counts.get(bar,0))+int(row.notes);grid_ok=grid_ok and row.slot in [13,15] and absf(float(row.onset)/.1875-roundf(float(row.onset)/.1875))<.00001
	check(not ornaments.is_empty() and counts.values().all(func(value):return int(value)<=2) and grid_ok,"actual shared short-voice history contains at most two grid-aligned tail ornaments per bar")
	check(ornaments.all(func(row):return not row.pitches.is_empty() and row.pitches.all(func(n):return int(n)>=76 and int(n)<=88)),"actually played ornament PCM metadata stays in the high register")
	facts.ornaments=ornaments;facts.ornament_counts=counts
	demo._set_light_phase(2);check(await wait_for(func():return str(music._variation_active.get(str(music.get_meta("chamber_roles").lead_track),"")).ends_with("/nocturne") and music._players[str(music.get_meta("chamber_roles").lead_track)].volume_db> -25.,12000),"real night chooses the sparse felt/cello texture")
	facts.night=mix_facts();facts.night_master=await Probe.record(OUT+"/night_chamber_Master.wav",6.2);check(facts.night_master.ok,"actual nocturne Master has no clipping");await capture("transparent_night")
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:root.size=size;await settle();await capture("transparent_night_"+str(size.x))
	demo._set_light_phase(0);demo.focus=Vector3(-15,1.,-22);demo.zoom=22.;demo._update_camera()
	var invitation:Dictionary=demo.life.invite_concert("h10");check(invitation.ok,"actual residents are invited to the connected performance house")
	for step in range(4000):
		demo.life._process(.1);music.set_concert_view(demo.life.concert_view())
		if step%15==0:await process_frame
		if demo.life.concert_status().arrived==demo.life.concert_status().invited:break
	demo.life.set_process(true)
	check(await wait_for(func():return demo.life.concert_view().phase=="playing",8500),"real transport boundary releases the arrived audience")
	demo.life.set_process(false)
	check(demo.life.concert_view().phase=="playing","real residents physically arrive before the stage is audible")
	check(await wait_for(func():return music.concert_active and music.get_meta("chamber_roles",{}).get("lead_track","")=="concert" and "chamber_counter" not in str(music._variation_active.get("concert","")) and str(music._variation_active.get("concert",""))!="original" and music._players.concert.volume_db> -25.,12000),"actual performance reuses the concert player as its sole melodic voice")
	facts.performance=mix_facts();facts.performance_master=await Probe.record(OUT+"/actual_performance_Master.wav",6.2);check(facts.performance_master.ok,"actual performance Master remains unclipped")
	await capture("one_cantor_performance")
	check(monitor.max_leads==1 and monitor.overlaps.is_empty(),"every sampled real stream/gain frame has at most one audible melodic voice, including handoff and night")
	facts.monitor={"samples":monitor.samples,"max_audible_leads":monitor.max_leads,"overlaps":monitor.overlaps,"heard_streams":monitor.seen.keys()};monitor.queue_free()
	await finish(personal,voices)
