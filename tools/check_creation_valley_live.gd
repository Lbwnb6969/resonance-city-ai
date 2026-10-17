extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Valley=preload("res://scripts/visual/city_creation_valley.gd")
const OUT:="res://验证记录/四库路线_2026-10-17/Phase10"
var checks:Array=[]
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _capture(demo:Node,label:String)->void:
	demo._update_camera()
	for i:int in range(12):await process_frame
	await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/"+label+".png")
func _run()->void:
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var demo:=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false);demo.ui_layer.visible=false;demo.town.clear_preview()
	var original:Dictionary=demo.state.snapshot();var valley:Node3D=demo.town.valley
	var mountain:MultiMeshInstance3D=valley.get_node("MountainSilhouette");var actual:=true
	for i:int in Valley.MOUNTAIN_COUNT:actual=actual and mountain.multimesh.get_instance_transform(i).is_equal_approx(Valley.mountain_transform(i))
	_check(actual,"native GPU MultiMesh retains every real distant mountain transform")
	_check(valley.find_children("*","CollisionObject3D",true,false).is_empty() and demo.town.terrain_surface.blocks.size()==36,"scenery adds no picking bodies and keeps all thirty-six original terrain chunks")
	demo.focus=Vector3(0,0,0);demo.zoom=100;demo.yaw=.4;demo.pitch=.65
	await _capture(demo,"06_valley_whole_canvas")
	demo.focus=Vector3(1,0,-35);demo.zoom=100;demo.yaw=.15;demo.pitch=.30
	await _capture(demo,"07_valley_river_continuation")
	var ray_origin:Vector3=demo.camera.project_ray_origin(Vector2(720,899));var ray_direction:Vector3=demo.camera.project_ray_normal(Vector2(720,899))
	_check(ray_origin.y>2.5 and ray_direction.y<0.,"lowest supported pitch keeps the foreground terrain in front of the near plane")
	demo.focus=Vector3(0,0,0);demo.zoom=100;demo.yaw=3.5;demo.pitch=.65
	await _capture(demo,"08_valley_opposite_view")
	demo._toggle_light();demo._toggle_light();await _capture(demo,"09_valley_night")
	_check(valley.water_material.get_shader_parameter("night")==1. and demo.town.water_material.get_shader_parameter("night")==1.,"existing and extended water follow the same actual night transition")
	_check(demo.state.snapshot()==original,"camera and scenery light changes preserve complete authored State")
	var rejected:Dictionary=demo.state.add_house(Vector2(55,0))
	_check(not rejected.ok and demo.state.snapshot()==original,"the visual valley does not silently expand construction bounds or history")
	demo._toggle_light();demo.focus=Vector3(0,0,0);demo.zoom=100;demo.yaw=.4;demo.pitch=.65;demo._update_camera()
	var samples:Array[float]=[];var last:=Time.get_ticks_usec()
	for i:int in range(180):
		await process_frame;var now:=Time.get_ticks_usec();samples.append((now-last)/1000.);last=now
	samples.sort()
	_check(samples[int(samples.size()*.95)]<16.667,"complete native valley overview retains sixty-frame-per-second p95")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"valley verification preserves personal save bytes")
	var report:Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"p95_ms":samples[int(samples.size()*.95)],"max_ms":samples[-1],"draw_calls":Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME),"scenery_triangles":valley.triangles+Valley.MOUNTAIN_COUNT*1875}
	FileAccess.open(OUT+"/valley_live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("VALLEY_LIVE ",JSON.stringify(report))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false);demo.queue_free();await process_frame;await create_timer(.15).timeout;quit(0 if failures.is_empty() else 1)
