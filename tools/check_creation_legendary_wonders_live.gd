extends "res://tools/check_creation_music_experience_live.gd"
const Fixture=preload("res://tests/test_city_creation_legendary_wonders.gd")
const Plan=preload("res://scripts/world/city_creation_legendary_wonder_plan.gd")
const Civic=preload("res://scripts/world/city_creation_civic_supply.gd")
func capture(label:String)->void:
	Input.warp_mouse(Vector2(20,20));demo.toast_time=0.;demo.toast.hide();demo.town.clear_preview()
	await process_frame;await process_frame;await RenderingServer.frame_post_draw
	check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"native scene image: "+label)
func quiet_papers()->void:
	for meta:String in ["inspiration_draft","vignette_journey"]:
		var paper=demo.get_meta(meta);paper.poll();paper.set_process(false);paper.paper.hide()
	demo.get_meta("vignette_journey").marker.hide()
func run()->void:
	OUT="res://验证记录/M48/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle()
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	var city:=Fixture.fixture()
	for i in range(5):city.set_house_role("h%d"%[i+1],Civic.ROLES[i])
	facts.actual_drafts=Fixture.choose_crowns(city)
	await show(city,Vector2(-25,-17),"legendary_wonders");demo.life.set_process(false);quiet_papers();await settle()
	var scenery:Node3D=demo.get_meta("street_wonders")
	check(scenery.crowns.size()==4,"actual scene publishes all four crowns from real selected prismatic cards")
	var families:Array=[]
	for crown:Node3D in scenery.crowns:
		var row:Dictionary=crown.get_meta("plan");families.append(row.family)
		check(crown.get_meta("roof_feet",[]).size()>=3,"real roof ray samples ground the crown: "+str(row.family))
		check(crown.find_children("*","StaticBody3D",true,false).is_empty(),"crown preserves actual house pick/collision ownership: "+str(row.family))
		var before:Vector3=Vector3.ZERO
		if row.family=="highland":
			var ring:Node3D=crown.get_children().filter(func(n):return n.has_meta("orbit"))[0];before=ring.rotation;await create_timer(.3).timeout;check(ring.rotation!=before,"actual open armillary rings rotate independently of the stone batch")
		demo.focus=crown.global_position+Vector3.UP*.8;demo.zoom=8.;demo.pitch=.70;demo.yaw=.35;demo._update_camera();await settle();await capture(str(row.family)+"_day_1440")
		root.size=Vector2i(1024,768);demo._set_light_phase(2);await settle();await capture(str(row.family)+"_night_1024")
		root.size=Vector2i(1440,900);demo._set_light_phase(0)
	check(families.size()==4,"four distinct school silhouettes exist")
	var guide=demo.intuitive_guidance;guide._rebuild();guide.update_guidance(.01)
	check(guide.stage=="wander" and guide.banner.text.contains("面包坊"),"actual twelve-house guide reads the missing bread-to-tea experience")
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size;await settle();guide.update_guidance(.01)
		check(guide.banner.get_theme_stylebox("normal") is StyleBoxFlat and guide.banner.get_theme_stylebox("normal").bg_color.a>.8,"whisper has actual warm parchment backing")
		check(not guide.banner.get_global_rect().intersects(demo.get_meta("inspiration_draft").badge.get_global_rect()),"parchment guide avoids the earned progress badge")
		await capture("mature_whisper_"+str(size.x))
	var saved:Dictionary=demo.state.snapshot();var copy:=State.new()
	check(copy.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok and copy.harmony_journey==demo.state.harmony_journey,"actual crown unlocks, cards and invitation receipts cold restore exactly")
	FileAccess.open(OUT+"/crown_city.json",FileAccess.WRITE).store_string(JSON.stringify(saved,"\t",true,true))
	var historical:RefCounted=preload("res://tools/fixtures/city_creation_modern_fixture.gd").earned_city()
	preload("res://scripts/world/city_creation_harmony_receipts.gd").initialize(historical)
	var journey:Dictionary=historical.harmony_journey;journey["completed_vignettes"]={};journey["vignette_blessings"]={"h1":[]};journey["vignette_echoes"]={"h1":{}};journey["vignette_serial"]=24
	for poem:String in Plan.POEMS:journey.completed_vignettes[poem]=2;journey.vignette_blessings["h1"].append(poem);journey.vignette_echoes["h1"][poem]=2
	await show(historical,Vector2(historical.houses[0].origin[0],historical.houses[0].origin[1]),"historical_poem_monuments");demo.life.set_process(false);quiet_papers();await settle()
	scenery=demo.get_meta("street_wonders")
	var memorials:Array=scenery.layers.filter(func(n):return str(n.name).begins_with("PoemResonanceMonument"))
	check(memorials.size()==1 and memorials[0].get_meta("plan").groups.size()==4,"all twelve saved poems form four real school motifs at one unobstructed tribute")
	check(scenery.crowns.size()==4,"second-tier historical poems independently publish four actual rare crowns")
	if not memorials.is_empty():
		demo.focus=memorials[0].global_position+Vector3.UP*.3;demo.zoom=5.;demo.pitch=.8;demo._update_camera();await settle();await capture("four_school_poem_monument_1024")
	facts.recording=await Probe.record(OUT+"/Master.wav",4.3);check(facts.recording.ok,"actual legendary-city Master has no clipping")
	await finish(personal,voices)
