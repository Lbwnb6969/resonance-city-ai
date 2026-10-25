extends RefCounted
## Public queue callbacks against actual published landmark, crossing and rail sites.
static func run(runner:SceneTree)->Dictionary:
	var demo=runner.demo
	var city=runner.State.new()
	runner.check(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))).ok,"actual authored flagship restores for hybrid source coverage")
	await runner.show(city,Vector2(-15,0),"hybrid_sources")
	var facts:Dictionary={}
	for kind:String in ["bridge","arch"]:
		var site:Dictionary={}
		for candidate:Dictionary in demo.life.travel.sites.values():
			if str(candidate.kind)==kind:site=candidate;break
		runner.check(not site.is_empty(),"actual authored crossing exists: "+kind)
		if site.is_empty():continue
		var at:Vector2=site.at
		demo.focus=Vector3(at.x,.8,at.y);demo.zoom=float(runner.facts.get("life_cue_zoom",14.));demo._update_camera()
		await runner.process_frame
		demo.music.clear_travel();demo.music._travel_cooldowns.clear()
		var before:int=demo.music._travel_cues
		demo.music.queue_travel("probe_crossing",kind,str(site.id),at)
		var heard:bool=await runner.wait_for(func():return demo.music._travel_cues>before,4200)
		runner.check(heard,"real source-gated "+kind+" queue plays PCM alongside choir")
		facts[kind]={"heard":heard,"site":site,"report":demo.music.travel_music_report()}
		await runner.create_timer(.9).timeout
	var rails:Array=demo.life.tram.cars
	runner.check(not rails.is_empty(),"actual flagship includes rail carriage")
	if not rails.is_empty():
		var car:Dictionary=rails[0];var station:=""
		for key:String in car.line.tour:
			if demo.life.tram.plan.station_keys.has(key):station=key;break
		var point:Vector3=demo.life.tram.plan.positions[station];var at:=Vector2(point.x,point.z)
		demo.focus=Vector3(at.x,.8,at.y);demo.zoom=float(runner.facts.get("life_cue_zoom",18.));demo._update_camera()
		await runner.process_frame
		var before:int=demo.music._tram_cues
		demo.music.queue_tram_chime(str(car.id),station,at)
		var heard:bool=await runner.wait_for(func():return demo.music._tram_cues>before,4200)
		runner.check(heard,"real station-gated tram queue plays its spatial celesta")
		facts.tram={"heard":heard,"report":demo.music.tram_music_report()}
	var stepping=runner.State.new()
	runner.check(stepping.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/汀步河湾样例.json"))).ok,"actual stepping-stone work restores")
	await runner.show(stepping,Vector2.ZERO,"stepping")
	var step:Dictionary={}
	for site:Dictionary in demo.life.travel.sites.values():
		if str(site.kind)=="stepping":step=site;break
	runner.check(not step.is_empty(),"actual authored stepping span exists")
	if not step.is_empty():
		var at:Vector2=step.at
		demo.focus=Vector3(at.x,.8,at.y);demo.zoom=float(runner.facts.get("life_cue_zoom",14.));demo._update_camera()
		await runner.process_frame
		await runner.process_frame
		var before:int=demo.music._travel_cues
		demo.music.queue_travel("probe_footfall","stepping",str(step.id),at)
		var heard:bool=await runner.wait_for(func():return demo.music._travel_cues>before,1200)
		runner.check(heard,"real stepping source plays spatial water marimba")
		facts.stepping={"heard":heard,"site":step,"report":demo.music.travel_music_report()}
	return facts
