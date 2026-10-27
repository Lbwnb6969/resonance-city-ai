extends "res://tools/check_creation_road_ruler_live.gd"
const Wonder=preload("res://scripts/world/city_creation_street_wonder_plan.gd")
func simple_city(with_road:bool=true)->void:
	var city:=State.new();city.initialize_empty()
	if with_road:check(city.add_road([Vector2(-32,-10),Vector2(-16,-10)]).ok,"real target road segment")
	await show(city,Vector2(-25,-16),"严丝合缝闭合");quiet();demo.select_tool(2)
	demo.focus=Vector3(-25,.5,-16);demo.zoom=25.;demo.yaw=0.;demo.pitch=1.;demo._update_camera();await settle()
func record_close(at:Vector2,path:String)->Dictionary:
	var effect:=AudioEffectRecord.new();AudioServer.add_bus_effect(0,effect);effect.set_recording_active(true)
	await click_world(at);await create_timer(3.4).timeout;effect.set_recording_active(false)
	var wave:AudioStreamWAV=effect.get_recording();var saved:bool=wave!=null and wave.save_to_wav(path)==OK
	for i in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,i)==effect:AudioServer.remove_bus_effect(0,i)
	return {"ok":saved,"seconds":wave.get_length() if wave!=null else 0.}
func run()->void:
	OUT="res://验证记录/M61/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();road_tool=demo.get_meta("road_tool");isolate_input()
	var voices:Array=[]
	for p:AudioStreamPlayer in demo.music._players.values():voices.append(p.get_instance_id())
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size;await simple_city();await key(KEY_2)
		var a:=Vector2(-24,-21);var end:=Vector2(-24,-11.65)
		await click_world(a);await motion(end)
		check(not road_tool.closure.is_empty() and Vector2(road_tool.closure.at).distance_to(Vector2(-24,-10))<.002 and road_tool.closure.segment==0,"native endpoint captures segment middle at1.65m")
		check(road_tool.guide.hint.text.contains("闭合") and road_tool.guide.compass.closure==road_tool.closure and road_tool.guide.lines.surface_get_arrays(0)[Mesh.ARRAY_VERTEX].size()>192,"double closure halo is real rendered geometry")
		await capture("segment_halo_%d"%size.x)
		await alt_key(true);await motion(end,true);check(road_tool.closure.is_empty() and demo.road_preview[-1].distance_to(end)<.002,"actual Alt frees closure projection")
		await alt_key(false);await motion(end);var preview:Array=demo.road_preview.duplicate()
		facts["close_audio_"+str(size.x)]=await record_close(end,OUT+"/close_%d_Master.wav"%size.x)
		await settle();check(demo.state.roads.size()==2 and exact(preview),"native closure publishes exact displayed segment with unchanged target")
		check(road_tool.closure_audio.events.any(func(e):return e.kind in ["perfect_fifth","inverted_fifth"] and e.midi.size()==2 and absi(e.midi[1]-e.midi[0]) in [5,7] and e.midi.all(func(n):return n>=76 and n<=88)),"actual successful closure reserves two existing voices for a high-register chord fifth or its inversion")
		check(not road_tool.active() and road_tool.guide.compass.is_empty(),"finished closure clears every transient halo")
		# Both actual houses attach to the newly joined graph, not a visual-only line.
		var x:Dictionary=demo.state.add_house(Vector2(-28,-11.55));var y:Dictionary=demo.state.add_house(Vector2(-24,-22.55))
		demo._after_edit(y,"room");await settle()
		check(x.ok and y.ok and demo.life.house_connected(x.house_id) and demo.life.house_connected(y.house_id) and demo.life._route(str(demo.life.connected_houses[x.house_id]),str(demo.life.connected_houses[y.house_id])).size()>1,"segment-interior closure creates an actual walkable connection between two homes")
		await capture("joined_road_%d"%size.x)
		await simple_city();await key(KEY_3);a=Vector2(-30,-18);var control:=Vector2(-25,-10);end=Vector2(-20,-10.7)
		await click_world(a);await click_world(control);await motion(end)
		check(road_tool.closure.lock=="顺接" and absf((Vector2(demo.road_preview[-1])-Vector2(road_tool.guide.compass.get("control",control))).y)<.002,"real curve end locks to target tangent")
		preview=demo.road_preview.duplicate();await capture("tangent_halo_%d"%size.x);await click_world(end);await settle()
		check(exact(preview),"tangent-adjusted curve commits exact visible geometry")
		# An actual closed street made through the retained held chain.
		await simple_city(false);await key(KEY_2)
		var corners:Array[Vector2]=[Vector2(-30,-23),Vector2(-22,-23),Vector2(-22,-15),Vector2(-30,-15)]
		await motion(corners[0]);await button(corners[0],true)
		for p:Vector2 in corners.slice(1):await motion(p);await key(KEY_SPACE)
		end=corners[0]+Vector2(.1,.7);await motion(end)
		check(road_tool.closure.get("self",false) and demo.road_preview[0]==demo.road_preview[-1],"real held chain locks its endpoint onto the actual own start")
		preview=demo.road_preview.duplicate();await capture("self_loop_halo_%d"%size.x);await button(end,false);await settle()
		var plan:Dictionary=Wonder.derive(demo.state);var scenery:Node=demo.get_meta("street_wonders")
		check(demo.state.roads.size()==1 and exact(preview) and plan.loops.size()==1 and absf(float(plan.loops[0].area)-64.)<.05,"closed authored64sqm street really derives one garden")
		check(scenery.layers.any(func(node):return node.name.begins_with("LoopHeart_")) and plan.loops[0].center.distance_to(Vector2(-26,-19))<.002,"actual two tier fountain and flowers occupy the real loop center")
		await capture("loop_fountain_%d"%size.x)
		var saved:Dictionary=demo.state.snapshot();var cold:=State.new();check(cold.restore(saved).ok and Wonder.derive(cold).loops==plan.loops,"cold load restores the same actual derived garden")
		await key(KEY_Z,true);await settle();check(Wonder.derive(demo.state).loops.is_empty() and not scenery.layers.any(func(node):return node.name.begins_with("LoopHeart_")),"native undo removes road and its actual fountain")
		await key(KEY_Y,true);await settle();check(Wonder.derive(demo.state).loops.size()==1 and demo.state.roads==saved.roads,"native redo restores exact loop and real fountain")
	facts.audio_events=road_tool.closure_audio.events.duplicate(true)
	# Step across real strong angles on an actual saved-road reference.
	await simple_city();await key(KEY_2);await click_world(Vector2(-28,-10))
	await motion(Vector2(-28,-18));await create_timer(.4).timeout;await motion(Vector2(-21,-17));await create_timer(.4).timeout
	var ticks_before:int=road_tool.closure_audio.events.filter(func(e):return e.kind=="tick").size()
	await motion(Vector2(-28,-10)+Vector2.RIGHT.rotated(deg_to_rad(-74.))*7.);await create_timer(.4).timeout
	check(road_tool.closure_audio.events.filter(func(e):return e.kind=="tick").size()>ticks_before,"ordinary75degree grid notch also sounds without requiring a strong angle")
	facts.audio_events=road_tool.closure_audio.events.duplicate(true);await key(KEY_ESCAPE)
	check(facts.audio_events.any(func(e):return e.kind=="tick"),"crossed angular ticks actually play from an existing free short voice")
	check(facts.audio_events.all(func(e):return absf(float(e.onset)/.1875-roundf(float(e.onset)/.1875))<.00001),"all ticks and closure fifths align to the existing sample grid")
	facts.master=await Probe.record(OUT+"/authoring_ambience_Master.wav",3.2);check(facts.master.ok,"actual empty authoring scene retains unclipped ambient Master")
	await finish(personal,voices)
