extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const Citizens=preload("res://tools/fixtures/city_creation_citizen_visual_live.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const Audio=preload("res://tools/fixtures/city_creation_audio_probe.gd")
var OUT:="res://验证记录/M39/live"
var demo
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy or demo.music._loading:await process_frame
	for i in range(10):await process_frame
func shot(name:String)->void:
	demo.toast.hide();demo.toast_time=0.;await process_frame;demo.town.clear_preview();await RenderingServer.frame_post_draw
	check(root.get_texture().get_image().save_png(OUT+"/"+name+".png")==OK,"native view "+name)
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);demo.life.set_process(false);await settle()
	check(DisplayServer.get_name()!="headless","real OpenGL")
	var facts:Dictionary={}
	if "--large-only" in OS.get_cmdline_user_args():facts.large=await large()
	else:
		facts.citizens=await Citizens.capture_tea(demo,OUT) if "--tea-only" in OS.get_cmdline_user_args() else await Citizens.capture(demo,OUT);check(facts.citizens.ok,"actual public living citizen fixture")
		for label:String in (["seated_tea"] if "--tea-only" in OS.get_cmdline_user_args() else ["workshop","atelier","clockmaker","bread_shopper","night_lantern","seated_tea"]):
			var path:String=OUT+"/motion_"+label+"/motion.json"
			check(FileAccess.file_exists(path) and JSON.parse_string(FileAccess.get_file_as_string(path)).ok,"actual24frame motion sequence "+label)
		demo.set_process(false);demo.ui_layer.hide();demo.camera_rig.strolling=true;demo.camera.projection=Camera3D.PROJECTION_PERSPECTIVE;demo.camera.fov=42.
		for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
			root.size=size
			for angle:int in [5,10,15]:
				for phase:int in [0,2]:
					demo.focus=Vector3(-23,.27,19.5);demo.pitch=deg_to_rad(angle);demo.yaw=.05;demo._set_light_phase(phase);demo._update_camera();await shot("%d_meadow_%d_phase%d"%[size.x,angle,phase])
		demo.camera_rig.strolling=false;demo.camera.projection=Camera3D.PROJECTION_ORTHOGONAL;demo.focus=Vector3(-3,1,0);demo.zoom=25.;demo.pitch=.75;demo._update_camera();demo.set_process(true)
		facts.audio=await Audio.record(OUT+"/Master.wav",6.2);check(facts.audio.ok,"actual live choir without clipping")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal saves unchanged")
	var report:={"checks":checks,"failures":failures,"ok":failures.is_empty(),"facts":facts}
	FileAccess.open(OUT+("/large_report.json" if "--large-only" in OS.get_cmdline_user_args() else "/report.json"),FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("MEADOW_GAIT_LIVE ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
func large()->Dictionary:
	var city:=State.new();var payload:Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://验证记录/M32/300/authored_300_world.json"))
	check(city.restore(payload).ok,"original authored300house fixture is still legal")
	await demo.gallery._open_chosen({"ok":true,"id":"gait_300","title":"三百屋微观步态","world":city.snapshot(),"view":{"focus":[-25.,1.,-25.],"zoom":12.,"yaw":.45,"pitch":.65,"evening":false,"light_phase":0}});await settle();demo.life.set_process(false);demo.ui_layer.hide()
	check(demo.state.houses.size()==300 and demo.town.house_roots.size()==300,"actual300houses with folded grass render")
	for row:Dictionary in demo.life.residents:
		if not row.paused and row.route.size()>1:row.wait=0.
	var before:Dictionary={}
	for row:Dictionary in demo.life.residents:before[row.home_id]=demo.life.citizen_position(row)
	for i in range(90):demo.life._process(1./60.);await process_frame
	var frames:Array[float]=[];var cpu:Array[float]=[];var spikes:Array=[];var last:=Time.get_ticks_usec()
	var sample_count:=900 if "--profile-large" in OS.get_cmdline_user_args() else 240
	for i in range(sample_count):
		await process_frame;var now:=Time.get_ticks_usec();var began:=Time.get_ticks_usec();demo.life._process(1./60.);cpu.append(float(Time.get_ticks_usec()-began)/1000.);frames.append(float(now-last)/1000.);last=now
		if frames[-1]>80.:spikes.append({"frame":i,"ms":frames[-1],"process_ms":Performance.get_monitor(Performance.TIME_PROCESS)*1000.,"physics_ms":Performance.get_monitor(Performance.TIME_PHYSICS_PROCESS)*1000.,"loading":demo.music._loading,"edit":demo.edit_pending(),"life_ms":cpu[-1],"life_time":demo.life.time,"life_progress":demo.state.life_progress.duplicate(),"harmony_level":demo.state.harmony_journey.harmony_level})
	var moved:=0;var deferred:=0
	for row:Dictionary in demo.life.residents:
		if demo.life.citizen_position(row).distance_to(before[row.home_id])>.1:moved+=1
		if row.has("offscreen_motion"):deferred+=1
	check(moved>=200 and deferred>100,"real200residents advance while offscreen simulation stays scalar")
	var frame_sequence:=frames.duplicate()
	var guidance_started:=Time.get_ticks_usec();demo.intuitive_guidance._rebuild();var guidance_ms:=(Time.get_ticks_usec()-guidance_started)/1000.
	await shot("300_meadow_and_gait");frames.sort();cpu.sort()
	return {"frame_sequence_ms":frame_sequence if "--profile-large" in OS.get_cmdline_user_args() else [],"guidance_rebuild_ms":guidance_ms,"sample_frames":sample_count,"spikes":spikes,"houses":300,"actors":demo.life.residents.size(),"moved":moved,"deferred":deferred,"frames":{"p95_ms":frames[int(frames.size()*.95)],"max_ms":frames[-1]},"life":{"p95_ms":cpu[int(cpu.size()*.95)],"max_ms":cpu[-1]},"meadow":demo.town.meadow.diagnostics(),"performance_policy":"experience_reference_no_fixed_threshold"}
