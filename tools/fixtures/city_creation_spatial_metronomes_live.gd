extends RefCounted
const Fixture=preload("res://tools/fixtures/city_creation_chemistry_fixture.gd")
const Probe=preload("res://tools/fixtures/city_creation_audio_probe.gd")
const Keys=preload("res://scripts/world/city_creation_stair_keys.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/M07/空间节拍器"
var checks:Dictionary={}
var observations:Array=[]
func load_world(demo:Node,name:String)->void:
	var city:RefCounted=Fixture.load_city(name)
	demo._after_edit(demo.state.restore(city.snapshot()),"history")
	var tree:SceneTree=demo.get_tree()
	while demo.edit_pending() or demo._edit_ui_pending or demo.music._loading:await tree.process_frame
	demo.life.set_process(false);demo.select_tool(4);demo.spatial_popover.close();demo.town.clear_preview()
	for i in range(24):await tree.process_frame
func capture(demo:Node,label:String,at:Vector3,zoom:float,pitch:float=.85)->void:
	var tree:SceneTree=demo.get_tree()
	demo.focus=at;demo.zoom=zoom;demo.pitch=pitch;demo._update_camera()
	demo.toast.hide();demo.toast_time=0.
	for phase in range(3):
		while demo.light_phase!=phase:demo._toggle_light()
		for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
			tree.root.size=size
			for i in range(24):await tree.process_frame
			if label=="庭院卡农":
				while fposmod(demo.music._playback_clock(),.75)>.09:await tree.process_frame
			elif label=="水车正拍":
				while fposmod(demo.music._playback_clock(),3.)<.25 or fposmod(demo.music._playback_clock(),3.)>.45:await tree.process_frame
			await RenderingServer.frame_post_draw
			tree.root.get_texture().get_image().save_png(OUT+"/"+label+"_"+str(phase)+"_"+str(size.x)+".png")
func identity(demo:Node)->Array:
	var ids:Array=[]
	for node:Node in demo.music.get_children()+demo.ambience.get_children():ids.append(node.get_instance_id())
	return ids+demo.music.spatial._names
func run(demo:Node)->Dictionary:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var tree:SceneTree=demo.get_tree();var ids:=identity(demo)
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	await load_world(demo,"高地河湾样例")
	var snapshot:Dictionary=demo.state.snapshot();var history:int=demo.state._undo.size()
	var sites:Array=demo.life.travel.sites.values().filter(func(row):return row.kind=="stair")
	checks.ordinary_sculpted_map=demo.state.biome_seed.is_empty() and not sites.is_empty()
	if not sites.is_empty():
		var stair:Dictionary=sites[sites.size()/2]
		demo.focus=Vector3(stair.at.x,stair.height,stair.at.y);demo.zoom=15.;demo.pitch=.95;demo._update_camera()
		for i in range(24):await tree.process_frame
		var leave:=InputEventMouseMotion.new();leave.position=Vector2(18.,tree.root.size.y*.5);leave.global_position=leave.position;tree.root.push_input(leave)
		await tree.create_timer(.35).timeout
		var before:float=demo.music._playback_clock()
		var move:=InputEventMouseMotion.new();move.position=demo.camera.unproject_position(Vector3(stair.at.x,stair.height+.01,stair.at.y));move.global_position=move.position;tree.root.push_input(move)
		var picked:Dictionary=demo.life.travel.point_stair(demo._ground_at(move.position))
		var deadline:=Time.get_ticks_msec()+2000
		while float(demo.music.get_meta("world_pluck",{}).get("clock",0.))<=before and Time.get_ticks_msec()<deadline:await tree.process_frame
		var note:Dictionary=demo.music.get_meta("world_pluck",{}).duplicate()
		checks.real_ordinary_mouse=not picked.is_empty() and note.get("source_id")==picked.id and float(note.get("clock",0.))>before
		checks.current_pentatonic=not picked.is_empty() and note.get("stream_key")=="stair_key_%d"%Keys.voice_rank(demo.music.harmony_mode(),int(picked.get("degree",-1)))
		checks.amber_touch=is_instance_valid(demo.world_toys.key_flash) and demo.world_toys.key_flash.is_visible_in_tree()
		observations.append({"ordinary_stair":stair,"picked":picked,"pointer":move.position,"before":before,"actual_note":note})
		await RenderingServer.frame_post_draw;tree.root.get_texture().get_image().save_png(OUT+"/普通地图_真实触摸.png")
		await capture(demo,"全图阶键",demo.focus,15.,deg_to_rad(10.))
	checks.stairs_no_saved_state=demo.state.snapshot()==snapshot and demo.state._undo.size()==history
	await load_world(demo,"庭院河湾样例")
	var clocks:RefCounted=demo.town.living_music.metronomes
	snapshot=demo.state.snapshot();history=demo.state._undo.size()
	checks.real_closed_court=not clocks.courts.is_empty()
	var court_seen:Array=[];var previous:=-1;var deadline:=Time.get_ticks_msec()+7500
	var frames:Array[float]=[];var last:=Time.get_ticks_usec()
	while court_seen.size()<8 and Time.get_ticks_msec()<deadline:
		await tree.process_frame
		var now:=Time.get_ticks_usec();frames.append(float(now-last)/1000.);last=now
		if clocks.courts.is_empty():break
		var row:Dictionary=clocks.courts.values()[0];var index:int=row.index
		if index==previous:continue
		previous=index;court_seen.append({"index":index,"clock":clocks.last_clock,"count":row.nodes.size(),"visible":row.nodes.filter(func(node):return node.visible).size()})
	var ordered:=court_seen.size()==8
	for i in range(1,court_seen.size()):
		ordered=ordered and court_seen[i].index==(court_seen[i-1].index+1)%int(court_seen[i].count) and court_seen[i].visible==1
		if i>1:ordered=ordered and absf(court_seen[i].clock-court_seen[i-1].clock-.75)<.08
	checks.actual_eight_clockwise_beats=ordered;observations.append({"court_beats":court_seen})
	var court_root:Node3D=demo.town.courtyards.roots.values()[0]
	var plan:Dictionary=court_root.get_meta("plan")
	await capture(demo,"庭院卡农",Vector3(plan.center.x,1.,plan.center.y),15.,1.30)
	checks.court_no_saved_state=demo.state.snapshot()==snapshot and demo.state._undo.size()==history
	await load_world(demo,"四库共鸣交响大城样例")
	clocks=demo.town.living_music.metronomes;snapshot=demo.state.snapshot();history=demo.state._undo.size()
	checks.no_spawn_arrival=clocks.flow_events==0
	checks.actual_mill_and_tram=clocks.mills.size()==1 and not demo.life.tram.cars.is_empty()
	var wheel_samples:Array=[];var downbeats:Array=[];var last_cycle:=-1;deadline=Time.get_ticks_msec()+7200
	while downbeats.size()<2 and Time.get_ticks_msec()<deadline:
		await tree.process_frame
		var clock:float=clocks.last_clock;var age:=fposmod(clock,3.);var cycle:=floori(clock/3.)
		if age>.10 or cycle==last_cycle or clocks.mills.is_empty():continue
		last_cycle=cycle;var mill:Dictionary=clocks.mills.values()[0]
		downbeats.append(clock);wheel_samples.append({"clock":clock,"angle":mill.rotor.rotation.z,"scale":mill.node.scale.x,"visible":mill.node.visible,"strength":mill.node.material_override.get_shader_parameter("metronome_strength")})
	checks.two_real_downbeats=downbeats.size()==2 and absf(downbeats[1]-downbeats[0]-3.)<.1
	checks.wheel_phase=not wheel_samples.is_empty() and wheel_samples.all(func(row):return absf(angle_difference(row.angle,-row.clock*TAU/12.))<.005 and row.visible and row.strength>.8)
	observations.append({"wheel_samples":wheel_samples})
	var mill_at:Vector3=clocks.mills.values()[0].node.position
	await capture(demo,"水车正拍",mill_at,15.)
	var before_arrivals:int=demo.life.tram.arrivals;var before_flows:int=clocks.flow_events
	deadline=Time.get_ticks_msec()+12000
	while clocks.flow_events==before_flows and Time.get_ticks_msec()<deadline:
		demo.life.tram.tick(.05);await tree.process_frame
	checks.real_station_event=demo.life.tram.arrivals>before_arrivals and clocks.flow_events>before_flows
	var flow:Dictionary=clocks.flows[0]
	for row:Dictionary in clocks.flows:
		if row.started>flow.started:flow=row
	var start:float=flow.started
	while clocks.last_clock<start+.35:await tree.process_frame
	checks.actual_rail_flow=flow.node.visible and flow.node.mesh!=null and float(flow.node.material_override.get_shader_parameter("flow_phase"))>.1
	if flow.node.mesh!=null:
		var box:AABB=flow.node.mesh.get_aabb();demo.focus=box.get_center();demo.zoom=18.;demo.pitch=.9;demo._update_camera()
		await RenderingServer.frame_post_draw;tree.root.get_texture().get_image().save_png(OUT+"/真实到站_暖金光流.png")
	observations.append({"tram_arrivals":demo.life.tram.arrivals,"flow_events":clocks.flow_events,"station":flow.station,"path_vertices":flow.node.mesh.surface_get_array_len(0) if flow.node.mesh!=null else 0})
	var events:int=clocks.flow_events
	for i in range(30):await tree.process_frame
	checks.no_duplicate_dwell=clocks.flow_events==events
	var current:Dictionary=demo.state.snapshot();var changed:Array=[]
	for key:String in snapshot:
		if current.get(key)!=snapshot[key]:changed.append(key)
	observations.append({"saved_changes_during_live_music":changed,"undo_before":history,"undo_after":demo.state._undo.size()})
	# Existing real tram movement grants street-waltz afterglow. Test the new
	# observer separately, without suppressing that intentional gameplay event.
	checks.real_tram_keeps_transactions=changed==["resonance_afterglow"] and demo.state._undo.size()==history
	for i in range(16):clocks.update(demo.music.resonance_state(),false)
	checks.derived_only=demo.state.snapshot()==current and demo.state._undo.size()==history
	var audio:Dictionary=await Probe.record(OUT+"/空间节拍器_Master.wav",3.2)
	checks.audible_unclipped=audio.ok
	checks.fixed_voices=identity(demo)==ids and demo.music._players.size()==12 and demo.music._effects.size()==4 and demo.music.spatial._names.size()==6 and demo.ambience.get_child_count()==2
	checks.personal_untouched=(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal
	frames.sort()
	var report:={"ok":checks.values().all(func(ok):return ok),"checks":checks,"observations":observations,"audio":audio,"frame_p95_ms":frames[int(frames.size()*.95)],"frame_max_ms":frames[-1]}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"))
	print("SPATIAL_METRONOMES ",JSON.stringify(report));return report
