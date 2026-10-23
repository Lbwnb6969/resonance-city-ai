extends RefCounted
const Fixture=preload("res://tools/fixtures/city_creation_tradition_fixture.gd")
const Families=preload("res://scripts/world/city_creation_tradition_synergy.gd")
const Modern=preload("res://tools/fixtures/city_creation_modern_fixture.gd")
const Probe=preload("res://tools/fixtures/city_creation_audio_probe.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/M17/四大学派"
var demo:Node3D
var tree:SceneTree
var checks:Dictionary={}
var facts:Dictionary={}
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy or demo.music._loading:await tree.process_frame
	for i in range(10):await tree.process_frame
func show(city:RefCounted,label:String,focus:Vector3,zoom:float=22.)->void:
	await demo.gallery._open_chosen({"ok":true,"id":label,"title":label,"world":city.snapshot(),"view":{"focus":[focus.x,focus.y,focus.z],"yaw":demo.yaw,"pitch":.9,"zoom":zoom,"evening":false,"light_phase":0}})
	await settle();demo.life.set_process(false);demo.journal.close_panel();demo.select_tool(4);demo.spatial_popover.close()
	checks["load_"+label]=demo.state.houses==city.houses
func capture(label:String)->void:
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		tree.root.size=size;for i in range(12):await tree.process_frame
		demo.toast.hide();demo.toast_time=0.;await RenderingServer.frame_post_draw
		tree.root.get_texture().get_image().save_png(OUT+"/"+label+"_"+str(size.x)+".png")
func click(control:Control)->void:
	var at:=control.get_global_rect().get_center();var motion:=InputEventMouseMotion.new();motion.position=at;motion.global_position=at;tree.root.push_input(motion);await tree.process_frame
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;tree.root.push_input(event);await tree.process_frame
func learn(city:RefCounted,id:String,count:int)->void:
	for card:String in Families.FAMILIES[id].members.slice(0,count):Fixture.learn(city,card)
func offer(id:String)->void:
	Fixture.Journey.add_harmony_xp(demo.state.harmony_journey,Fixture.Journey.xp_for_next_level(int(demo.state.harmony_journey.harmony_level)),74001,demo.state.era_unlocks)
	var offers:Array=[id]
	for card:String in Fixture.Journey.cards():
		if card!=id and (not Fixture.Journey.cards()[card].has("era") or Fixture.Journey.cards()[card].era in demo.state.era_unlocks):offers.append(card)
		if offers.size()==3:break
	demo.state.harmony_journey.pending_draft=offers;demo.get_meta("inspiration_draft").refresh(true)
func run(owner:Node3D)->Dictionary:
	demo=owner;tree=demo.get_tree();DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var voices:Array=[]
	for node:Node in demo.music.get_children()+demo.ambience.get_children():voices.append(node.get_instance_id())
	var city:RefCounted=Modern.earned_city();city.set_house_role("h1","bakery");city.add_water([Vector2(-18,-2)] as Array[Vector2],2.,"pond");learn(city,"riverbank",2)
	await show(city,"水岸两札",Vector3(-10,1,-2));var draft:Node=demo.get_meta("inspiration_draft")
	facts.echo=demo.music.emergence.score.get("phrase_tide",{}).duplicate(true)
	checks.actual_echo_db=is_equal_approx(float(facts.echo.get("school_db",0.)),.4)
	offer("hydraulic_guild");await tree.process_frame;await capture("两札待冠冕")
	checks.badge_two=Families.card_badge("hydraulic_guild",Families.owned(demo.state)).contains("2/3")
	await click(draft.buttons.hydraulic_guild);await settle();demo.life.set_process(false)
	var phrase_deadline:=Time.get_ticks_msec()+4000
	while float(demo.music.emergence.score.get("phrase_tide",{}).get("school_db",0.))<.79 and Time.get_ticks_msec()<phrase_deadline:await tree.process_frame
	facts.crown=demo.music.emergence.score.get("phrase_tide",{}).duplicate(true)
	checks.mouse_earns_crown=Families.tier(demo.state,"riverbank")==2 and is_equal_approx(float(facts.crown.get("school_db",0.)),.8)
	demo._after_edit(demo.state.undo(),"history",true);await settle();demo.life.set_process(false)
	checks.undo_returns_echo=Families.tier(demo.state,"riverbank")==1
	demo._after_edit(demo.state.redo(),"history",true);await settle();demo.life.set_process(false)
	checks.redo_returns_crown=Families.tier(demo.state,"riverbank")==2
	for family:String in Families.FAMILIES:
		for card:String in Families.FAMILIES[family].members.slice(0,3):
			if card not in Families.owned(demo.state):Fixture.learn(demo.state,card)
		offer(str(Families.FAMILIES[family].members[3]));await capture("家族_"+family)
		var readable:=true
		for leaf:Control in draft.leaves.get_children():
			for label:Node in leaf.get_child(0).get_children():
				if label is Label:readable=readable and label.get_line_count()<=label.get_visible_line_count()
		checks["readable_"+family]=readable and Families.card_badge(str(Families.FAMILIES[family].members[3]),Families.owned(demo.state)).contains("★")
		await click(draft.buttons[str(Families.FAMILIES[family].members[3])]);await settle();demo.life.set_process(false)
	var original:Dictionary=demo.state.snapshot();var restored:=State.new()
	checks.crowns_roundtrip=restored.restore(JSON.parse_string(JSON.stringify(original))).ok and Families.for_city(restored)==Families.for_city(demo.state)
	checks.no_family_save_fields=not original.has("families") and not original.harmony_journey.has("families")
	var slope:RefCounted=Modern.earned_city();slope.add_terrain_stroke([Vector2(-26,20)] as Array[Vector2],"plateau",2.,.8);slope.add_road([Vector2(-32,20),Vector2(-20,20)] as Array[Vector2]);learn(slope,"highland",3)
	await show(slope,"石琴八度",Vector3(-26,.6,20),14.)
	var sites:Array=demo.life.travel.sites.values().filter(func(s):return s.kind=="stair")
	checks.actual_stairs=not sites.is_empty()
	if not sites.is_empty():
		var site:Dictionary=sites[sites.size()/2];var move:=InputEventMouseMotion.new();move.position=Vector2(20,350);move.global_position=move.position;tree.root.push_input(move);await tree.create_timer(.4).timeout
		var before:float=demo.music._playback_clock();move=InputEventMouseMotion.new();move.position=demo.camera.unproject_position(Vector3(site.at.x,site.height+.01,site.at.y));move.global_position=move.position;tree.root.push_input(move)
		var deadline:=Time.get_ticks_msec()+2000
		while float(demo.music.get_meta("world_pluck",{}).get("clock",0.))<=before and Time.get_ticks_msec()<deadline:await tree.process_frame
		await RenderingServer.frame_post_draw
		facts.stair=demo.music.get_meta("world_pluck",{}).duplicate()
		var streams:Array=[]
		for player:AudioStreamPlayer in demo.music._effects:
			if player.stream!=null and player.stream.get_meta("octave_dyad",false):streams.append(player.stream)
		checks.native_octave=bool(facts.stair.get("octave_dyad",false)) and streams.size()==1
		if not streams.is_empty():
			var wave:AudioStreamWAV=streams[0];wave.save_to_wav(OUT+"/实际阶键双音.wav");facts.dyad_pitches=wave.get_meta("pitches")
			var base:AudioStreamWAV=demo.music._edit_streams[facts.stair.stream_key];base.save_to_wav(OUT+"/原阶键.wav")
			checks.one_voice_two_pitches=wave.data!=base.data and wave.data.size()==base.data.size() and int(facts.dyad_pitches[1])-int(facts.dyad_pitches[0])==12
		await tree.create_timer(.7).timeout
		checks.echo_long_touch=is_instance_valid(demo.world_toys.key_flash) and demo.world_toys.key_flash.is_visible_in_tree()
		await capture("石琴冠冕")
	var artisan:RefCounted=Modern.earned_city();artisan.set_house_role("h1","workshop");learn(artisan,"artisan",3)
	await show(artisan,"百工送装",Vector3(-10,1,-2))
	var cap:Node=demo.get_node("CapstoneVisual");var before_chains:int=cap.delivery_chains
	checks.load_quiet=demo.state.get_meta("family_delivery_events",[]).is_empty()
	for i in range(2400):
		demo.life._process(.05)
		if i%4==0:await tree.process_frame
		if demo.state.workshop_status("h1").delivered>0:break
	for i in range(8):await tree.process_frame
	checks.real_delivery_chain=demo.state.workshop_status("h1").delivered>0 and cap.delivery_chains>before_chains and demo.get_meta("juice_feedback").journal.any(func(e):return e.get("kind","")=="capstone" and e.phase=="queued")
	await tree.create_timer(.3).timeout;await capture("百工冠冕金弧")
	var court:RefCounted=preload("res://tools/fixtures/city_creation_canon_fixture.gd").build().city;learn(court,"courtyard",3)
	await show(court,"内院沙龙",Vector3(-25,1,-21),18.);demo._set_light_phase(2)
	var deadline:=Time.get_ticks_msec()+2000
	while cap.window_pulse<.8 and Time.get_ticks_msec()<deadline:await tree.process_frame
	var pane_values:Array=[]
	for id:String in cap.salons:
		if demo.town.resonance.rigs.has(id):pane_values.append(float(demo.town.resonance.rigs[id].material.get_shader_parameter("salon_pulse")))
	checks.actual_canon_windows=pane_values.size()>=3 and float(pane_values.max())>.5 and float(pane_values.max())-float(pane_values.min())<.001
	facts.windows=pane_values;await capture("围院冠冕金窗")
	facts.audio=await Probe.record(OUT+"/Master.wav",3.2);checks.unclipped=facts.audio.ok
	var current:Array=[]
	for node:Node in demo.music.get_children()+demo.ambience.get_children():current.append(node.get_instance_id())
	checks.fixed_pool=current==voices and demo.music._players.size()==12 and demo.music._effects.size()==4
	checks.personal_untouched=personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())
	var ok:=true
	for value:bool in checks.values():ok=ok and value
	var result:={"checks":checks,"facts":facts,"ok":ok};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("SCHOOLS_LIVE ",JSON.stringify(result));return result
