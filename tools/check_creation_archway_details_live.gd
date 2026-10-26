extends "res://tools/check_creation_musical_toys_live.gd"
func run()->void:
	OUT="res://验证记录/M57/details_final"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle()
	solo=demo.get_meta("solo_spotlight");arch=demo.get_meta("musical_archways")
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	var city:=preload("res://tools/fixtures/city_creation_modern_fixture.gd").earned_city()
	var bank:Dictionary=city.add_house(Vector2(9,3));check(bank.ok,"public east bank home in genuinely unlocked town")
	var road_points:Array[Vector2]=[Vector2(-11,3.5),Vector2(7,3.5),Vector2(7,5.2),Vector2(9,5.2),Vector2(9,4.45)]
	check(city.add_road(road_points,"promenade").ok,"public stone promenade bridge")
	var district_points:Array[Vector2]=[Vector2(-7,3.5),Vector2(9,3.5)]
	var district:Dictionary=city.add_district(district_points,5.,"warm")
	check(district.ok,"actual authored bridge district")
	for era:String in ["renaissance","clockwork","modern_eco"]:
		check(city.set_district_era(district.district_id,era).ok,"public bridge era "+era)
		check(city.set_house_era(bank.house_id,era).ok,"actual opposite bank timbre "+era)
		await show(city,Vector2(3,3.5),"真实桥乐器_"+era);quiet();demo.select_tool(4)
		demo.focus=Vector3(3,.35,3.5);demo.zoom=6.;demo.pitch=.30;demo.yaw=.1;demo._update_camera();await settle()
		check(arch.layers.size()==1 and arch.sites.values()[0].era==era,"published bridge era chooses actual hanging geometry "+era)
		if arch.layers.is_empty():await finish(personal,voices);return
		await capture("bridge_"+era)
		facts[era]={"plan":arch.sites.values()[0],"surface_nodes":arch.layers[0].get_child_count()}
		arch.echo.clear();arch.echo.events.clear();arch.water_due.clear()
		await create_timer(1.4).timeout
		check(arch.echo.events.any(func(e):return e.source==bank.house_id and e.era==era),"actual bank source selects its era PCM "+era)
	# The highest genuine span clears an actual ground street below it.
	var modern:=preload("res://tools/fixtures/city_creation_modern_fixture.gd").architecture()
	check(modern.set_house_role("h1","venue").ok,"real daily destination on the connected ground street")
	var underpass:Array[Vector2]=[Vector2(-12,-10),Vector2(-12,6)]
	var street:Dictionary=modern.add_road(underpass)
	check(street.ok,"real street crosses below the high skybridge: "+str(street.message))
	var walker:Dictionary=modern.add_house(Vector2(-13.6,-8))
	check(walker.ok and modern.Rotation.set_angle(modern,walker.house_id,PI*.5).ok,"actual home faces the underpass street for a real daily trip")
	await show(modern,Vector2(-12,-2),"连廊下真实步行");quiet();demo.select_tool(4);demo.life.set_process(false)
	var sky:Dictionary={}
	for row:Dictionary in arch.sites.values():
		if row.kind=="skybridge":sky=row;break
	check(not sky.is_empty(),"actual upper bridge remains above the new road")
	if not sky.is_empty():
		arch.echo.clear();arch.echo.events.clear()
		for row:Dictionary in arch.sites.values():arch.water_due[row.id]=INF
		var crossed:=false
		for tick in range(4200):
			demo.life._process(.05);arch._process(.11)
			if arch.echo.pending.any(func(e):return e.trigger=="underpass_walk"):crossed=true;break
		check(crossed,"actual resident graph walk below the elevated span triggers its instrument")
		await create_timer(1.4).timeout;facts.underpass=arch.echo.events.duplicate(true)
		check(facts.underpass.any(func(e):return e.trigger=="underpass_walk"),"underpass response actually plays from existing short pool")
		demo.focus=Vector3(-12,2.,-2);demo.zoom=8.;demo.pitch=.30;demo._update_camera();await capture("skybridge_underpass")
	# A dedicated wonder is also a real solo source; the perspective focus looks up.
	var wonder:=State.new();wonder.initialize_empty();wonder.signature_unlocks.assign(["bell_keep"])
	var placed:Dictionary=wonder.place_signature("bell_keep",Vector2(-20,-10))
	check(placed.ok,"public dedicated wonder placement")
	await show(wonder,Vector2(-20,-10),"奇观独奏");quiet();demo.select_tool(4)
	demo.focus=Vector3(-20,1.2,-15);await key_event(KEY_V,true);await key_event(KEY_V,false)
	demo.focus=Vector3(-20,1.2,-15);demo.yaw=PI;demo.pitch=0.;demo._update_camera();await process_frame
	await click_house(placed.house_id)
	check(solo.active() and solo.source==placed.house_id,"actual V-click on dedicated wonder starts its real source solo")
	var position:Vector3=demo.focus;await create_timer(1.4).timeout
	check(solo.active() and demo.focus==position and demo.pitch<-.25,"soft V focus looks up to the source while keeping actual walk position")
	await capture("wonder_stroll_soft_focus")
	facts.wonder=solo.report();solo.cancel("detail_done")
	if demo.camera_rig.strolling:await key_event(KEY_V,true);await key_event(KEY_V,false)
	await finish(personal,voices)
