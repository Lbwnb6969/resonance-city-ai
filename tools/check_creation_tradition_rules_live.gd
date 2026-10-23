extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const Fixture=preload("res://tools/fixtures/city_creation_tradition_fixture.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const Probe=preload("res://tools/fixtures/city_creation_audio_probe.gd")
const OUT="res://验证记录/M16/手札空间法则"
var demo
var checks:=0
var failures:Array[String]=[]
var facts:Dictionary={}
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy or demo.music._loading:await process_frame
	for i in range(8):await process_frame
func show(city:RefCounted,title:String,focus:Vector3,zoom:float=20.)->void:
	check(State.new().restore(city.snapshot()).ok,"valid source: "+title)
	await demo.gallery._open_chosen({"ok":true,"id":title,"title":title,"world":city.snapshot(),"view":{"focus":[focus.x,focus.y,focus.z],"yaw":demo.yaw,"pitch":.95,"zoom":zoom,"evening":false,"light_phase":0}})
	await settle();demo.life.set_process(false);demo.journal.close_panel();demo.select_tool(4);demo.spatial_popover.close();demo.town.clear_preview()
	check(demo.state.houses==city.houses and demo.state.roads==city.roads,"normal gallery publishes: "+title)
func capture(label:String,phases:Array=[0,1,2],low:bool=false)->void:
	var pitch:float=demo.pitch
	for phase:int in phases:
		demo._set_light_phase(phase)
		for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
			root.size=size
			if low:demo.pitch=deg_to_rad(10.);demo._update_camera()
			for i in range(16):await process_frame
			demo.toast.hide();demo.toast_time=0.;await RenderingServer.frame_post_draw
			root.get_texture().get_image().save_png(OUT+"/"+label+"_"+str(phase)+"_"+str(size.x)+".png")
	demo.pitch=pitch;demo._update_camera()
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=OUT+"/隔离作品";root.add_child(demo);await settle();demo.life.set_process(false)
	var voices:Array=[]
	for node:Node in demo.music.get_children()+demo.ambience.get_children():voices.append(node.get_instance_id())
	await show(Fixture.slope(),"缓坡石琴",Vector3(-26,.6,-22),14.)
	check(not demo.life.travel.sites.values().any(func(s):return s.kind=="stair"),"sub-metre road starts as ordinary stone")
	var result:Dictionary=Fixture.learn(demo.state,"stone_step_carillon");demo._after_edit(result,"terrace",true);await settle();demo.life.set_process(false)
	var sites:Array=demo.life.travel.sites.values().filter(func(s):return s.kind=="stair")
	var profile:Dictionary=demo.state.road_profile(demo.state.roads[0]);facts.rises=[]
	for tread:Dictionary in profile.treads:
		if tread.rise not in facts.rises:facts.rises.append(tread.rise)
	check(result.ok and not sites.is_empty() and profile.treads.all(func(t):return t.rise>=.65 and t.rise<1.),"actual shallow road publishes keys after live card choice")
	if not sites.is_empty():
		var stair:Dictionary=sites[sites.size()/2]
		var leave:=InputEventMouseMotion.new();leave.position=Vector2(18,400);leave.global_position=leave.position;root.push_input(leave);await create_timer(.35).timeout
		var before:float=demo.music._playback_clock()
		var move:=InputEventMouseMotion.new();move.position=demo.camera.unproject_position(Vector3(stair.at.x,stair.height+.01,stair.at.y));move.global_position=move.position;root.push_input(move)
		var deadline:=Time.get_ticks_msec()+2000
		while float(demo.music.get_meta("world_pluck",{}).get("clock",0.))<=before and Time.get_ticks_msec()<deadline:await process_frame
		var picked:Dictionary=demo.life.travel.point_stair(demo._ground_at(move.position));var note:Dictionary=demo.music.get_meta("world_pluck",{})
		check(not picked.is_empty() and note.get("source_id")==picked.id and float(note.get("clock",0.))>before,"native mouse plays the actual newly enabled stair key")
		await RenderingServer.frame_post_draw
		check(is_instance_valid(demo.world_toys.key_flash) and demo.world_toys.key_flash.is_visible_in_tree(),"actual shallow key amber feedback")
		facts.stair_note=note;facts.stair_count=sites.size()
	await capture("缓坡琴键");await capture("缓坡低视角",[0,1,2],true)
	demo._after_edit(demo.state.undo(),"history",true);await settle();demo.life.set_process(false)
	check(not demo.life.travel.sites.values().any(func(s):return s.kind=="stair"),"live undo removes derived shallow keys")
	demo._after_edit(demo.state.redo(),"history",true);await settle();demo.life.set_process(false)
	check(demo.life.travel.sites.values().filter(func(s):return s.kind=="stair").size()==sites.size(),"live redo restores exact key count")
	await show(Fixture.shore(),"远岸暖炉",Vector3(-31,.7,-22),20.)
	check(not demo.state.site_blessing("h1").blessed,"5.5m shoreline is outside legacy blessing")
	var started:=Time.get_ticks_usec();result=Fixture.learn(demo.state,"warm_hearth_ballad");demo._after_edit(result,"terrace",true);await settle();demo.life.set_process(false)
	check(demo.state.site_blessing("h1").blessed and demo.state.bakery_status("h1").produced==2,"live card widens water circle and produces real first batch")
	facts.water={"distance":demo.state.water_clearance(Vector2(-30,-22)),"status":demo.state.bakery_status("h1"),"publication_ms":float(Time.get_ticks_usec()-started)/1000.}
	var scenery:Node3D=demo.get_node("TraditionScenery")
	demo.state.produce_bread("h1",1);await process_frame
	check(scenery.emitted>0 and scenery.motes.any(func(m):return m.node.is_visible_in_tree()),"actual new bake emits golden note smoke")
	await capture("六米活水");Fixture.learn(demo.state,"lantern_bridge_echo");await process_frame;await process_frame
	check(not scenery.lamps.is_empty(),"real near-water workshop derives warm evening ripple ornaments")
	await capture("水岸桥影",[1,2])
	var trees:RefCounted=preload("res://tools/fixtures/city_creation_juice_fixture.gd").wishes();Fixture.learn(trees,"sylvan_luthier_guild")
	await show(trees,"双树琴社",Vector3(-27,.7,-22),22.)
	for i in range(2400):
		if demo.life.workshop.workers[0].phase=="crafting":break
		demo.life._process(.05)
	var worker:Dictionary=demo.life.workshop.workers[0];var position:Vector3=worker.node.position;var clock:float=demo.life.time
	check(worker.phase=="crafting","real artisan is onsite before second tree")
	for at:Vector2 in [Vector2(-26,-25),Vector2(-29,-25)]:
		started=Time.get_ticks_usec();result=demo.state.place_plant(at,"olive");demo._after_edit(result,"vegetation",true)
		facts["tree_"+str(demo.state.plants.size())+"_ms"]=float(Time.get_ticks_usec()-started)/1000.
	check(demo.state.workshop_status("h2").produced==1 and worker.phase=="to_target" and worker.carry.visible and worker.node.position==position and demo.life.time==clock,"second real tree dispatches carrying artisan without time jump")
	check(facts.tree_2_ms<200.,"second tree feedback within 0.2 seconds")
	await settle();demo.life.set_process(false)
	check(not demo.wish_pins.offers().any(func(r):return r.kind=="tree" and r.house_id=="h2"),"two-tree wish retires from actual UI")
	await capture("双树即时送装")
	var loaded:=State.new();check(loaded.restore(JSON.parse_string(JSON.stringify(demo.state.snapshot()))).ok and loaded.wish_rewards==demo.state.wish_rewards,"actual real burst survives JSON with exact receipt")
	var rich:RefCounted=preload("res://tools/fixtures/city_creation_modern_fixture.gd").earned_city()
	for id:String in Fixture.Journey.cards():Fixture.learn(rich,id)
	rich.set_house_role("h1","workshop");rich.set_house_role("h2","atelier");rich.set_house_role("h4","clockmaker");rich.set_house_role("h3","garden_cafe")
	await show(rich,"百工花下",Vector3(-10,1.,-2),23.)
	check(scenery.ornaments.get_child_count()>0,"three actual neighbouring artisan roles grow cooperative street signs")
	check(demo.town.cafes.roots.has("h3"),"real garden tea seat exists with all charters")
	check(demo.town.cafes.roots["h3"].get_meta("extras",{}).has("flowers_extra"),"actual cafe grows second legal flower clump")
	await capture("百工与花席")
	var draft:Node=demo.get_meta("inspiration_draft")
	var ids:Array=Fixture.Journey.cards().keys()
	for group in range(6):
		Fixture.Journey.add_harmony_xp(demo.state.harmony_journey,Fixture.Journey.xp_for_next_level(int(demo.state.harmony_journey.harmony_level)),74001,demo.state.era_unlocks)
		demo.state.harmony_journey.pending_draft=ids.slice(group*3,group*3+3);draft.poll()
		for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
			root.size=size;for i in range(8):await process_frame
			var readable:bool=Rect2(Vector2.ZERO,Vector2(size)).encloses(draft.paper.get_global_rect())
			for leaf:Control in draft.leaves.get_children():
				for label:Node in leaf.get_child(0).get_children():
					if label is Label:readable=readable and label.get_line_count()<=label.get_visible_line_count()
			check(readable,"all 18 card descriptions fit: group "+str(group)+" width "+str(size.x))
			await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/手札"+str(group)+"_"+str(size.x)+".png")
		demo.state.harmony_journey.pending_draft=[];draft.poll()
	var court:=State.new();court.restore(preload("res://scripts/world/city_creation_examples.gd").read("example_courtyard").world);Fixture.learn(court,"courtyard_canon_spring")
	await show(court,"八十拍清泉",Vector3(-5,1.,-2),20.)
	var pulses:Array=[]
	for i in range(90):
		await process_frame
		for court_root:Node3D in demo.town.courtyards.roots.values():pulses.append(float(court_root.get_meta("water_material").get_shader_parameter("spring_pulse")))
	facts.fountain_pulses={"count":pulses.size(),"min":pulses.min() if not pulses.is_empty() else 0.,"max":pulses.max() if not pulses.is_empty() else 0.}
	check(not pulses.is_empty() and pulses.max()>.5 and pulses.min()<.05,"actual 80 BPM fountain breathes through live shader")
	await capture("围院清泉")
	facts.audio=await Probe.record(OUT+"/Master.wav",3.2);check(facts.audio.ok,"actual Master audible and unclipped")
	var current:Array=[]
	for node:Node in demo.music.get_children()+demo.ambience.get_children():current.append(node.get_instance_id())
	check(current==voices and demo.music._players.size()==12 and demo.music._effects.size()==4,"fixed audio players survive all rule changes")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save byte-identical")
	var report:={"checks":checks,"failures":failures,"facts":facts,"ok":failures.is_empty()}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("TRADITION_RULES_LIVE ",JSON.stringify(report))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
