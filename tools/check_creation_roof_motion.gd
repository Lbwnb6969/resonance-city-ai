extends SceneTree
## Real production roof geometry/materials under subpixel camera motion.
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Roof=preload("res://scripts/visual/shaders/creation_joined_roof.gdshader")
const OUT="res://验证记录/屋顶动态瓦片_2026-10-17"
var checks:Array=[]
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(960,720);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var world:=Node3D.new();root.add_child(world)
	var environment:=WorldEnvironment.new();var env:=Environment.new();env.background_mode=Environment.BG_COLOR;env.background_color=Color("324645");env.ambient_light_source=Environment.AMBIENT_SOURCE_COLOR;env.ambient_light_color=Color("dfe8dc");env.ambient_light_energy=.75;environment.environment=env;world.add_child(environment)
	var sun:=DirectionalLight3D.new();sun.rotation_degrees=Vector3(-48,-30,0);sun.light_color=Color("fff0cf");sun.light_energy=1.1;world.add_child(sun)
	var camera:=Camera3D.new();camera.projection=Camera3D.PROJECTION_ORTHOGONAL;camera.current=true;world.add_child(camera)
	var city:=State.new();city.initialize();city.add_cell("h1",1,0,0);city.add_cell("h1",0,1,0)
	var renderer:=Renderer.new();world.add_child(renderer);renderer.state=city;renderer.building_context.prepare(city.houses,city.roads)
	var vertices:Array[Vector3]=[]
	for patch:Dictionary in renderer.building_context.roof_patches("h1"):
		if patch.surface=="roof":vertices.append_array(patch.vertices)
	var before:Dictionary=city.snapshot();var color:=Color("b47555")
	var old:MeshInstance3D=renderer._triangles(world,vertices,color);var current:MeshInstance3D=renderer._roof_surface(world,vertices,color)
	var reference:=OUT+"/roof_before.gdshader"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--reference-shader="):reference=arg.trim_prefix("--reference-shader=")
	var modes:Array[String]=["after"]
	if FileAccess.file_exists(reference):
		var old_material:=ShaderMaterial.new();old_material.shader=load(reference);old_material.set_shader_parameter("roof_color",color);old.material_override=old_material;modes.push_front("before")
	var material:=ShaderMaterial.new();material.shader=Roof;material.set_shader_parameter("roof_color",color);current.material_override=material
	_check(old.mesh.get_faces()==current.mesh.get_faces() and city.snapshot()==before,"new tile coordinates preserve exact production roof geometry authored state and picking faces")
	var arrays:Array=current.mesh.surface_get_arrays(0);var points:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];var uvs:PackedVector2Array=arrays[Mesh.ARRAY_TEX_UV];var normals:PackedVector3Array=arrays[Mesh.ARRAY_NORMAL]
	var valid:=points.size()==uvs.size() and points.size()==normals.size();var finite:=true
	for uv:Vector2 in uvs:finite=finite and is_finite(uv.x) and is_finite(uv.y)
	_check(valid and finite and uvs.size()>0,"every actual roof vertex has a finite fixed face coordinate and normal")
	var origin:=Vector3(city.houses[0].origin[0]+.8,2.,city.houses[0].origin[1]+.8)
	var manifests:Array=[]
	for zoom:float in [6.,16.,32.]:
		camera.size=zoom;camera.position=origin+Vector3(7,10,9);camera.look_at(origin)
		var start:=camera.position;var right:=camera.global_basis.x;var pixel_per_metre:float=(camera.unproject_position(origin+right)-camera.unproject_position(origin)).length()
		for mode:String in modes:
			old.visible=mode=="before";current.visible=mode=="after"
			for index in range(12):
				camera.position=start+right*(float(index)*.25/pixel_per_metre)
				await process_frame;await RenderingServer.frame_post_draw
				var file:="%s_%02d_%02d.png"%[mode,int(zoom),index];root.get_texture().get_image().save_png(OUT+"/"+file)
				if index==0:
					var projected:Array=[]
					for point:Vector3 in vertices:
						var screen:=camera.unproject_position(point);projected.append([screen.x,screen.y])
					manifests.append({"mode":mode,"zoom":zoom,"vertices":projected,"pixels_per_step":-.25})
		camera.position=start
	var original_uvs:PackedVector2Array=uvs.duplicate();current.position+=Vector3(.3,.2,-.1);current.scale=Vector3.ONE*1.03
	await process_frame
	_check(current.mesh.surface_get_arrays(0)[Mesh.ARRAY_TEX_UV]==original_uvs,"house movement and build bounce preserve tile coordinates without sliding the pattern")
	FileAccess.open(OUT+"/motion_manifest.json",FileAccess.WRITE).store_string(JSON.stringify({"checks":checks,"failures":failures,"frames":manifests},"\t"))
	print("ROOF_MOTION ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
