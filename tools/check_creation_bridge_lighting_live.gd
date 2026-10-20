extends SceneTree
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Rig=preload("res://scripts/visual/city_creation_environment.gd")
const Fixture=preload("res://tools/fixtures/city_creation_two_banks_fixture.gd")
const OUT="res://验证记录/桥头与光影_2026-10-20"
var town
var rig
var camera:Camera3D
var city
var result:Dictionary={"views":[],"checks":[],"failures":[]}
var label:="after"
func _initialize()->void:run.call_deferred()
func check(ok:bool,message:String)->void:
	result.checks.append({"ok":ok,"message":message})
	if not ok:result.failures.append(message);push_error(message)
func view(key:String,at:Vector3,zoom:float,phase:int)->void:
	rig.apply(phase);town.set_light_phase(phase);town.update_city_resonance_visuals({})
	camera.size=zoom;camera.position=at+Vector3(10,12,14);camera.look_at(at)
	for ignored in range(25):await process_frame
	var times:Array[float]=[];var draws:Array[int]=[];var last:=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame;var now:=Time.get_ticks_usec();times.append(float(now-last)/1000.);last=now
		draws.append(int(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME)))
	times.sort();draws.sort()
	await RenderingServer.frame_post_draw
	var image:=root.get_texture().get_image()
	check(image.save_png(OUT+"/"+label+"/"+key+".png")==OK,"actual GL capture "+key)
	var clipped:=0;var bright:=0
	for y in range(0,image.get_height(),3):
		for x in range(0,image.get_width(),3):
			var c:=image.get_pixel(x,y)
			if minf(c.r,minf(c.g,c.b))>.985:clipped+=1
			if c.r*.2126+c.g*.7152+c.b*.0722>.90:bright+=1
	result.views.append({"key":key,"phase":phase,"p95_ms":times[113],"max_ms":times[-1],"draws":draws[60],"clipped":clipped,"bright":bright})
func run()->void:
	if "--before" in OS.get_cmdline_user_args():label="before"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT+"/"+label))
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	city=Fixture.build().city
	var original:Dictionary=city.snapshot()
	var host:=Node3D.new();root.add_child(host);rig=Rig.new();rig.setup(host)
	town=Renderer.new();host.add_child(town);town.setup(city)
	for key:String in ["lawn","grass"]:
		if town.meadow.materials.has(key):town.meadow.materials[key].set_shader_parameter("meadow_time_override",7.5)
	camera=Camera3D.new();camera.projection=Camera3D.PROJECTION_ORTHOGONAL;camera.far=180;host.add_child(camera);camera.current=true
	await view("01_bridge_day",Vector3(3,.4,0),15,0)
	await view("02_houses_day",Vector3(-10,1,-2),10,0)
	await view("03_global_day",Vector3(0,0,-1),36,0)
	await view("04_evening",Vector3(0,.5,-1),25,1)
	await view("05_night",Vector3(0,.5,-1),25,2)
	check(city.snapshot()==original,"all lighting and material views preserve complete authored city")
	check(host.find_children("*","DirectionalLight3D",true,false).size()==1,"global shading uses one shadow-casting directional light")
	var stroke:Array[Vector2]=[Vector2(-13,8),Vector2(18,8)]
	var added:Dictionary=city.add_road(stroke,"path")
	check(added.ok and not added.no_op,"actual path brush creates the second river crossing")
	town.rebuild()
	var surface:MeshInstance3D=town.road_roots[added.road_id].get_node("PathSurface")
	var shared:Material=surface.material_override
	var old:=ShaderMaterial.new()
	# Local before shader is used only when explicitly comparing the archived
	# original; every acceptance capture uses the actual installed material.
	if FileAccess.file_exists(OUT+"/road_before.gdshader"):
		old.shader=load(OUT+"/road_before.gdshader");surface.material_override=old
		await view("06_path_original_material",Vector3(6,.3,8),9,0)
		surface.material_override=shared
	await view("07_path_blended_material",Vector3(6,.3,8),9,0)
	var ids:Array=[]
	for road_root:Node3D in town.road_roots.values():
		for node:Node in road_root.get_children():
			if node is MeshInstance3D:ids.append([node.get_instance_id(),node.mesh.get_instance_id(),var_to_bytes(node.mesh.surface_get_arrays(0))])
	var geometry:=var_to_bytes(ids)
	rig.apply(2);town.set_light_phase(2)
	for ignored in range(8):await process_frame
	ids=[]
	for road_root:Node3D in town.road_roots.values():
		for node:Node in road_root.get_children():
			if node is MeshInstance3D:ids.append([node.get_instance_id(),node.mesh.get_instance_id(),var_to_bytes(node.mesh.surface_get_arrays(0))])
	check(var_to_bytes(ids)==geometry and surface.material_override==shared,"light cycling preserves all installed road mesh bytes identities and shared material")
	check(city.undo().ok and city.roads==original.roads,"actual new crossing undo restores original road records")
	town.rebuild()
	result.ok=result.failures.is_empty();result.label=label
	FileAccess.open(OUT+"/"+label+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("BRIDGE_LIGHTING ",JSON.stringify(result))
	host.queue_free();await process_frame;quit(0 if result.ok else 1)
