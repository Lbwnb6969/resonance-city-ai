extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_quality_fixture.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/四库路线_2026-10-17/Phase10"
var renderer:Node3D
var camera:Camera3D
var checks:Array=[]
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _view(zoom:float)->void:
	var focus:=Vector3(-8,0,0);var direction:=Vector3(sin(.45)*cos(.65),sin(.65),cos(.45)*cos(.65))
	camera.size=zoom;camera.position=focus+direction*maxf(42.,zoom*1.1);camera.look_at(focus)
	renderer.meadow.set_view_scale(zoom);renderer.shore.set_view_scale(zoom);renderer.path_pebbles.set_view_scale(zoom)
func _sample()->Dictionary:
	for i in range(12):await process_frame
	var draws:Array[float]=[];var triangles:Array[float]=[];var frames:Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(90):
		await process_frame;var now:=Time.get_ticks_usec();frames.append((now-last)/1000.);last=now
		draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME));triangles.append(Performance.get_monitor(Performance.RENDER_TOTAL_PRIMITIVES_IN_FRAME))
	draws.sort();triangles.sort();frames.sort()
	return {"draw_calls":draws[45],"triangles":triangles[45],"p95_ms":frames[int(frames.size()*.95)],"max_ms":frames[-1]}
func _capture(name:String)->void:
	await process_frame;await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/"+name+".png")
func _wait(commit:bool)->Dictionary:
	var end:=Time.get_ticks_msec()+30000;var report:Dictionary={}
	while Time.get_ticks_msec()<end:
		report=renderer.poll_budget_rebuild(3.5,commit)
		if report.get("committed",false) or (report.get("ready",false) and not commit):break
		await process_frame
	return report
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var fixture:=Fixture.build(self);var city:RefCounted=fixture.city;var before:Dictionary=city.snapshot()
	var world:=Node3D.new();root.add_child(world);var environment:=WorldEnvironment.new();environment.environment=Environment.new();environment.environment.background_mode=Environment.BG_COLOR;environment.environment.background_color=Color("d9e1d9");environment.environment.ambient_light_source=Environment.AMBIENT_SOURCE_COLOR;environment.environment.ambient_light_color=Color("f0eadb");environment.environment.ambient_light_energy=.8;world.add_child(environment)
	var sun:=DirectionalLight3D.new();sun.rotation_degrees=Vector3(-48,-30,0);sun.light_energy=1.;sun.shadow_enabled=true;world.add_child(sun)
	camera=Camera3D.new();camera.projection=Camera3D.PROJECTION_ORTHOGONAL;camera.current=true;world.add_child(camera)
	renderer=Renderer.new();world.add_child(renderer);renderer.setup(city);renderer.quality_visual.progress(renderer);_view(14.)
	_check(renderer.terrain_surface.blocks.size()==36,"populated pre-simulated city renders the complete ninety-six-metre land slab and wooded outer rim")
	_check(fixture.facts.final_tier==5 and city.snapshot()==before,"real fulfilled service fixture retains earned maximum tier and all authored state during LOD setup")
	var grass:Array=renderer.meadow.find_children("Meadow_lawn","MultiMeshInstance3D",true,false);var pebbles:Array=renderer.roads_layer.find_children("PathPebbles_*","MultiMeshInstance3D",true,false)
	var chimes:=renderer.find_children("Chime","MultiMeshInstance3D",true,false);var planters:Array=[]
	for mesh:MeshInstance3D in renderer.find_children("*","MeshInstance3D",true,false):
		if mesh.material_override is ShaderMaterial and mesh.material_override.shader==renderer.craft.CraftShader:planters.append(mesh)
	_check(not grass.is_empty() and not pebbles.is_empty() and not chimes.is_empty() and not planters.is_empty(),"actual grass streets wind chimes and flowerboxes are present in the earned town")
	var ranged:=true
	for instance:GeometryInstance3D in grass+pebbles+chimes+planters:ranged=ranged and instance.visibility_range_end>=52. and instance.visibility_range_end<=80. and instance.visibility_range_end_margin==2.
	_check(ranged,"all targeted real geometry uses calibrated native GPU range culling without hiding forty-two-metre close-up focus")
	var near:Dictionary=await _sample();await _capture("04_near_native_detail_lod")
	_view(90.);var far:Dictionary=await _sample();await _capture("05_far_native_detail_lod")
	var zero:=true
	for mesh:MultiMeshInstance3D in pebbles:zero=zero and mesh.multimesh.visible_instance_count==0
	_check(zero,"actual far-view pebble batches stop GPU submission after shader detail reaches zero")
	var saved:Array=[]
	for mesh:GeometryInstance3D in renderer.find_children("*","GeometryInstance3D",true,false):
		if mesh.visibility_range_end>0.:saved.append([mesh,mesh.visibility_range_end]);mesh.visibility_range_end=0.
	for mesh:MultiMeshInstance3D in pebbles:mesh.multimesh.visible_instance_count=-1
	var baseline:Dictionary=await _sample()
	_check(far.draw_calls<baseline.draw_calls and far.triangles<baseline.triangles,"same actual far-view city submits fewer real draw calls and triangles than previous unlimited decoration ranges")
	for row:Array in saved:row[0].visibility_range_end=row[1]
	renderer.path_pebbles.apply_view_detail();_view(14.)
	_check(city.snapshot()==before and pebbles[0].multimesh.visible_instance_count==-1,"returning to close view restores full identical authored street detail")
	var points:Array[Vector2]=[Vector2(-27,-13),Vector2(-24,-13)];_check(city.add_road(points).ok,"real additional street starts an asynchronous edit")
	renderer.request_budget_rebuild();var prepared:Dictionary=await _wait(false);_view(90.)
	var published:Dictionary=await _wait(true);pebbles=renderer.roads_layer.find_children("PathPebbles_*","MultiMeshInstance3D",true,false);zero=not pebbles.is_empty()
	for mesh:MultiMeshInstance3D in pebbles:zero=zero and mesh.multimesh.visible_instance_count==0
	_check(prepared.get("ready",false) and published.get("committed",false) and zero,"camera moving during hidden installation still publishes all new and retained pebble batches at the current LOD")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated native LOD verification preserves the personal saved city")
	var result:Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"houses":city.houses.size(),"near":near,"far":far,"previous_far":baseline,"far_draw_reduction":1.-far.draw_calls/baseline.draw_calls,"backend":RenderingServer.get_current_rendering_method(),"ranged_instances":saved.size(),"chimes":chimes.size(),"flowerbox_batches":planters.size(),"grass_blocks":grass.size(),"pebble_batches":pebbles.size()}
	FileAccess.open(OUT+"/detail_lod_live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("DETAIL_LOD_LIVE ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)
