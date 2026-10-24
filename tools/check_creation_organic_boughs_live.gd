extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const Fixture=preload("res://tools/fixtures/city_creation_foliage_live.gd")
const Audio=preload("res://tools/fixtures/city_creation_audio_probe.gd")
var OUT:="res://验证记录/M38/live"
var demo
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(Fixture.State.DEFAULT_PATH) if FileAccess.file_exists(Fixture.State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);demo.life.set_process(false)
	while demo.edit_pending() or demo._edit_ui_pending or demo.music._loading:await process_frame
	var captured:Dictionary=await Fixture.capture(demo,OUT);check(captured.ok,"actual planted species share live leaf shader")
	check(DisplayServer.get_name()!="headless","native OpenGL")
	demo.get_meta("inspiration_draft").poll();demo.get_meta("vignette_journey").poll()
	while demo.edit_pending() or demo._edit_ui_pending:await process_frame
	var before:Dictionary=demo.state.snapshot();demo.camera_rig.strolling=true;demo.camera.projection=Camera3D.PROJECTION_PERSPECTIVE;demo.camera.fov=42.
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size
		for row:Array in [["olive",Vector2(-26,16)],["golden_tree",Vector2(-23,16)],["cypress",Vector2(-20,16)]]:
			for angle:int in [5,10,15]:
				for phase:int in [0,2]:
					demo.focus=Vector3(row[1].x,1.3,row[1].y+5.);demo.pitch=deg_to_rad(angle);demo.yaw=.05;demo._set_light_phase(phase);demo._update_camera()
					await process_frame;await RenderingServer.frame_post_draw
					check(root.get_texture().get_image().save_png(OUT+"/%d_%s_%d_phase%d.png"%[size.x,row[0],angle,phase])==OK,"actual close branch capture "+str(row[0])+str(angle)+str(phase)+str(size.x))
	check(demo.state.snapshot()==before,"tree closeup and lighting do not alter authored plants or progress")
	var frames:Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(120):await process_frame;var now:=Time.get_ticks_usec();frames.append(float(now-last)/1000.);last=now
	frames.sort()
	demo.camera_rig.strolling=false;demo.camera.projection=Camera3D.PROJECTION_ORTHOGONAL;demo.focus=Vector3(-3,1.,0);demo.zoom=25.;demo.pitch=.75;demo._update_camera()
	var audio:Dictionary=await Audio.record(OUT+"/Master.wav",6.2);check(audio.ok,"actual choir after nature stroll without clipping")
	check(personal==(FileAccess.get_file_as_bytes(Fixture.State.DEFAULT_PATH) if FileAccess.file_exists(Fixture.State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	var report:={"checks":checks,"failures":failures,"ok":failures.is_empty(),"foliage":captured,"frames":{"p95_ms":frames[114],"max_ms":frames[-1]},"audio":audio,"cache_parts":demo.town.foliage._parts.size()}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("ORGANIC_BOUGHS_LIVE ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
