extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
const Sequence=preload("res://scripts/audio/city_creation_strum_sequence.gd")
const Recording=preload("res://tools/fixtures/city_creation_recording_span.gd")
const OUT="res://验证记录/M19/琶音与漫步"
var demo
var output:=OUT
var tree:SceneTree
var checks:Dictionary={}
var facts:Dictionary={"notes":[]}
func settle():
	while demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy or demo.music._loading:await tree.process_frame
	for i in range(10):await tree.process_frame
func key(code:int,down:bool):
	var e:=InputEventKey.new();e.keycode=code;e.physical_keycode=code;e.pressed=down;Input.parse_input_event(e)
	for i in range(3):await tree.process_frame
func hover(at:Vector2):
	var e:=InputEventMouseMotion.new();e.position=at;e.global_position=at;tree.root.push_input(e);await tree.process_frame
func show(city:RefCounted,at:Vector3,zoom:float=27.):
	var validation:Dictionary=State.new().restore(city.snapshot());checks["source_valid_"+str(checks.size())]=validation.ok
	if not validation.ok:print("M19_INVALID_SOURCE ",validation)
	await demo.gallery._open_chosen({"ok":true,"id":"strum","title":"指尖河湾","world":city.snapshot(),"view":{"focus":[at.x,at.y,at.z],"yaw":.34,"pitch":.9,"zoom":zoom,"evening":false,"light_phase":0}})
	await settle();demo.life.set_process(false);demo.select_tool(2);demo.spatial_popover.close()
	checks["gallery_"+str(checks.size())]=demo.state.houses==city.houses and demo.state.terrain_strokes==city.terrain_strokes
	demo.get_meta("inspiration_draft").poll();demo.get_meta("vignette_journey").poll()
	await postpone()
func postpone():
	var draft:Node=demo.get_meta("inspiration_draft");draft.poll();await tree.process_frame;await tree.process_frame
	if not draft.paper.visible:return
	var point:Vector2=draft.paper.get_child(0).get_child(0).get_child(1).get_global_rect().get_center();await hover(point)
	for down:bool in [true,false]:
		var e:=InputEventMouseButton.new();e.position=point;e.global_position=point;e.button_index=MOUSE_BUTTON_LEFT;e.pressed=down;tree.root.push_input(e);await tree.process_frame
func capture(label:String):
	for phase in [0,1,2]:
		demo._set_light_phase(phase)
		for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
			tree.root.size=size;await postpone()
			for i in range(12):await tree.process_frame
			demo.toast.hide();demo.toast_time=0.;await RenderingServer.frame_post_draw
			tree.root.get_texture().get_image().save_png(output+"/"+label+"_"+str(phase)+"_"+str(size.x)+".png")
func look(delta:float):
	var e:=InputEventMouseButton.new();e.button_index=MOUSE_BUTTON_RIGHT;e.position=Vector2(tree.root.size)*.5;e.pressed=true;tree.root.push_input(e);await tree.process_frame
	var motion:=InputEventMouseMotion.new();motion.position=e.position;motion.relative=Vector2(0,delta);tree.root.push_input(motion);await tree.process_frame
	e.pressed=false;tree.root.push_input(e)
	for i in range(3):await tree.process_frame
func glow_pixels(label:String):
	tree.paused=true;await RenderingServer.frame_post_draw
	var with_glow:Image=tree.root.get_texture().get_image();with_glow.save_png(output+"/"+label+"_有光.png")
	demo.camera_rig.aura.layer.hide();await tree.process_frame;await RenderingServer.frame_post_draw
	var quiet:Image=tree.root.get_texture().get_image();quiet.save_png(output+"/"+label+"_静默.png")
	var count:=0
	for y in range(int(quiet.get_height()*.30),int(quiet.get_height()*.84)):
		for x in range(quiet.get_width()):
			var a:=with_glow.get_pixel(x,y);var b:=quiet.get_pixel(x,y)
			if a.r-b.r>.025 and a.g-b.g>.012 and a.r-b.r>(a.b-b.b)*1.3:count+=1
	facts[label+"_lit_pixels"]=count;checks[label+"_visible_gl"]=count>32
	demo.camera_rig.aura.layer.show();tree.paused=false
func note(at:Vector2,height:float,kind:String,id:String=""):
	var serial:int=demo.music.get_meta("held_strum_serial",0)
	await hover(demo.camera.unproject_position(Vector3(at.x,height,at.y)))
	var end:=Time.get_ticks_msec()+1500
	while int(demo.music.get_meta("held_strum_serial",0))==serial and Time.get_ticks_msec()<end:await tree.process_frame
	var event:Dictionary=demo.music.get_meta("held_strum",{}).duplicate(true)
	checks["native_"+str(facts.notes.size())]=int(event.get("serial",0))>serial and event.get("kind")==kind and (id.is_empty() or event.get("source_id")==id)
	if int(event.get("serial",0))<=serial:return
	facts.notes.append(event)
	for player:AudioStreamPlayer in demo.music._effects:
		if player.get_instance_id()==event.player_id and player.get_meta("creation_voice_serial",-1)==event.voice_serial and player.playing:
			player.stream.save_to_wav(output+"/note_"+str(facts.notes.size())+".wav");break
func run(owner,directory:String=OUT)->Dictionary:
	output=directory
	demo=owner;tree=demo.get_tree();DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output))
	var voices:Array=[]
	for node:Node in demo.music.get_children()+demo.ambience.get_children():voices.append(node.get_instance_id())
	var city:RefCounted=preload("res://tools/fixtures/city_creation_modern_fixture.gd").earned_city()
	var built:bool=city.add_terrain_stroke([Vector2(-26,12)] as Array[Vector2],"plateau",2.,1.).ok
	built=city.add_road([Vector2(-32,12),Vector2(-20,12)] as Array[Vector2]).ok and built
	built=city.add_terrain_stroke([Vector2(-26,12)] as Array[Vector2],"plateau",2.,1.).ok and built
	var ids:Array[String]=[]
	for i in range(5):
		var result:Dictionary=city.add_house(Vector2(-28+i*3.6,18));built=built and result.ok
		if result.ok:ids.append(str(result.house_id))
	built=built and city.place_plant(Vector2(-26,22),"golden_tree").ok and city.add_water([Vector2(-20,22)] as Array[Vector2],3.2,"pond").ok
	for card:String in ["stone_step_carillon","hearth_neighbors","tram_promenade"]:built=built and preload("res://tools/fixtures/city_creation_tradition_fixture.gd").learn(city,card).ok
	checks.legal_musical_city=built;await show(city,Vector3(-21,.7,16))
	var before:Dictionary=demo.state.snapshot();var undo:int=demo.state._undo.size()
	var record:=Recording.start();await hover(Vector2(tree.root.size.x-30,320));await key(KEY_P,true)
	for i in range(ids.size()):await note(Vector2(-28+i*3.6,18),1.9,"house",ids[i])
	await note(Vector2(-26,22),0.,"tree");await note(Vector2(-20,22),-.16,"water")
	var stairs:Array=demo.life.travel.sites.values().filter(func(s):return s.kind=="stair")
	checks.real_stairs=not stairs.is_empty()
	if not stairs.is_empty():
		await note(stairs[stairs.size()/2].at,float(stairs[stairs.size()/2].height),"stair")
		checks.crown_in_arpeggio=bool(demo.music.get_meta("held_strum",{}).get("octave_dyad",false))
	await key(KEY_P,false)
	var mode:int=maxi(0,demo.music.harmony_mode());var pitches:Array=facts.notes.map(func(n):return int(n.midi))
	var expected:Array=[]
	for i in range(facts.notes.size()):expected.append(Sequence.pitch(mode,i))
	checks.ascending_modal_pcm=pitches==expected and pitches.size()==8
	var grid:=true
	for event:Dictionary in facts.notes:
		var clock:float=event.clock;grid=grid and fposmod(clock,.1875)<.105
	checks.actual_quantized_clock=grid
	var peak:=0.
	# Measure a new real queued roof note over the complete 0.55s visual response.
	await hover(Vector2(tree.root.size.x-30,320));await key(KEY_P,true);await note(Vector2(-13.6,18),1.9,"house",ids[-1])
	peak=0.
	for i in range(65):
		await tree.process_frame
		if demo.town.touch.active.has(ids[-1]):
			var row:Dictionary=demo.town.touch.active[ids[-1]];peak=maxf(peak,float(row.pivot.position.y)-float(row.base_y))
	await key(KEY_P,false);facts.hop_peak=peak;checks.four_centimetres=peak>.039 and peak<=.04001
	facts.audio=Recording.finish(record,output+"/Master.wav");checks.unclipped=facts.audio.ok
	checks.held_history_clean=demo.state.snapshot()==before and demo.state._undo.size()==undo
	await capture("五屋琶音")
	if not stairs.is_empty():
		var at:Vector2=stairs[0].at;demo.focus=Vector3(at.x-.65,1.2,at.y);demo.yaw=-PI*.5;demo.pitch=.9;demo._update_camera()
		await key(KEY_V,true);await key(KEY_V,false);await tree.process_frame
		var aura=demo.camera_rig.aura
		checks.actual_stroll=demo.camera_rig.strolling and demo.camera.projection==Camera3D.PROJECTION_PERSPECTIVE
		checks.nearby_keys=aura.visible_sites.any(func(s):return s.kind=="stair" and s.strength>.1)
		checks.radius=aura.visible_sites.all(func(s):return s.distance<5.)
		facts.stair_glow=aura.visible_sites.duplicate(true);await look(-20.);await capture("漫步石琴");await glow_pixels("石琴微光")
		checks.stroll_dock_clear=not demo.tactile_dock.popup.visible
		var start:Vector3=demo.focus;await key(KEY_D,true);await tree.create_timer(.85).timeout;await key(KEY_D,false)
		checks.native_walk=demo.focus.distance_to(start)>1.7;facts.walk_distance=demo.focus.distance_to(start)
		await capture("走近石阶")
		demo.focus+=Vector3(20,0,0);demo._update_camera()
		for i in range(3):await tree.process_frame
		checks.far_keys_quiet=aura.visible_sites.is_empty()
		await key(KEY_V,true);await key(KEY_V,false);await tree.process_frame
		checks.aura_leaves_with_stroll=not aura.layer.visible
	checks.stroll_history_clean=demo.state.snapshot()==before and demo.state._undo.size()==undo
	var court:RefCounted=preload("res://tools/fixtures/city_creation_canon_fixture.gd").build().city
	var plan:Dictionary=court.courtyard_plans()[0];await show(court,Vector3(plan.center.x,.7,plan.center.y),20.)
	var active_before:Array=demo.town.touch.active.keys();demo.set_meta("held_strum_seen",-1)
	preload("res://scripts/audio/city_creation_strum_arpeggio.gd").feedback(demo)
	checks.previous_city_quiet=demo.town.touch.active.keys()==active_before
	var court_before:Dictionary=demo.state.snapshot();var court_undo:int=demo.state._undo.size()
	await key(KEY_V,true);await key(KEY_V,false);await tree.process_frame
	var aura=demo.camera_rig.aura
	checks.real_court_glow=aura.visible_sites.any(func(s):return s.kind=="court" and s.strength>.1)
	facts.court_glow=aura.visible_sites.duplicate(true);await look(116.);await capture("漫步内院");await glow_pixels("内院微光")
	await key(KEY_V,true);await key(KEY_V,false)
	checks.court_history_clean=demo.state.snapshot()==court_before and demo.state._undo.size()==court_undo
	var current:Array=[]
	for node:Node in demo.music.get_children()+demo.ambience.get_children():current.append(node.get_instance_id())
	checks.fixed_pool=current==voices and demo.music._players.size()==12 and demo.music._effects.size()==4
	var report:={"checks":checks,"facts":facts,"ok":checks.values().all(func(v):return v)}
	FileAccess.open(output+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("ARPEGGIO_STROLL ",JSON.stringify(report));return report
