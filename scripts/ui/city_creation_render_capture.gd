extends RefCounted
## Exercise the actual release binary; editor execution keeps assert side effects.
static func verify_playtest(demo:Node3D)->void:
	var args:=OS.get_cmdline_user_args()
	var index:=args.find("--verify-playtest")
	if index+1>=args.size():demo.get_tree().quit(2);return
	var directory:=args[index+1]
	DirAccess.make_dir_recursive_absolute(directory)
	var failures:Array[String]=[];var fields:Dictionary={}
	for name:String in ["water_field","ground_contact_field"]:
		var field:RefCounted=demo.town.get(name)
		var texture:Texture2DArray=field.texture
		var layers:int=texture.get_layers()
		var exact:=layers==64 and texture.get_width()==66 and texture.get_height()==66
		if exact:
			if name=="water_field":exact=(await _read_float_field(demo,texture)).get_data()==field.image.get_data()
			else:
				for layer in range(layers):exact=exact and texture.get_layer_data(layer).get_data()==field.tiled.images[layer].get_data()
		if not exact:failures.append(name+" GPU upload differs from prepared tiles")
		fields[name]={"layers":layers,"width":texture.get_width(),"exact":exact}
	demo.life.set_process(false);demo.toast.hide();demo.toast_time=0.
	for phase in range(3):
		while demo.light_phase!=phase:demo._toggle_light()
		for scale:float in [25.,76.]:
			demo.zoom=scale;demo.focus=Vector3(-3,.7,0);demo.pitch=.85;demo.yaw=.62;demo._update_camera()
			for frame in range(12):await demo.get_tree().process_frame
			var shot:Image=await _frame(demo)
			shot.save_png(directory+"/phase%d_zoom%d.png"%[phase,int(scale)])
	var report:Dictionary={"ok":failures.is_empty(),"debug_build":OS.is_debug_build(),"fields":fields,"failures":failures,"renderer":RenderingServer.get_current_rendering_method()}
	var file:=FileAccess.open(directory+"/release_check.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t"));file.close()
	print("PLAYTEST_RELEASE_CHECK ",JSON.stringify(report))
	demo.get_tree().quit(0 if failures.is_empty() else 1)

static func _read_float_field(demo:Node3D,texture:Texture2DArray)->Image:
	# GL's public layered RF readback normalizes values. Preserve float bits in
	# two opaque RGBA8 rows, matching the existing tiled-field GPU regression.
	var viewport:=SubViewport.new();viewport.size=Vector2i(512,1024);viewport.disable_3d=true
	viewport.render_target_update_mode=SubViewport.UPDATE_ONCE;demo.add_child(viewport)
	var shader:=Shader.new();shader.code="""shader_type canvas_item;
render_mode unshaded,blend_disabled;
uniform sampler2DArray actual_field:filter_nearest,repeat_disable;
void fragment(){
 ivec2 output_pixel=ivec2(floor(UV*vec2(512.,1024.)));
 bool high=output_pixel.y>=512;
 ivec2 pixel=ivec2(output_pixel.x,output_pixel.y%512);
 ivec2 tile=pixel/64;
 uint bits=floatBitsToUint(texelFetch(actual_field,ivec3(pixel-tile*64+ivec2(1),tile.y*8+tile.x),0).r);
 uvec3 encoded=high?uvec3(bits>>24u,0u,0u):uvec3(bits&255u,(bits>>8u)&255u,(bits>>16u)&255u);
 COLOR=vec4(vec3(encoded)/255.,1.);
}"""
	var material:=ShaderMaterial.new();material.shader=shader;material.set_shader_parameter("actual_field",texture)
	var rect:=ColorRect.new();rect.size=Vector2(512,1024);rect.material=material;viewport.add_child(rect)
	await demo.get_tree().process_frame;await RenderingServer.frame_post_draw
	var encoded:=viewport.get_texture().get_image().get_data();var bytes:=PackedByteArray();bytes.resize(512*512*4)
	for pixel in range(512*512):
		var offset:=pixel*4;bytes[offset]=encoded[offset];bytes[offset+1]=encoded[offset+1];bytes[offset+2]=encoded[offset+2];bytes[offset+3]=encoded[offset+512*512*4]
	viewport.queue_free()
	return Image.create_from_data(512,512,false,Image.FORMAT_RF,bytes)

## Capture an intermittent visual fault together with its reproducible town/view.
static func capture(demo: Node3D,directory: String)->void:
	if demo.has_meta("render_capture_busy"):return
	demo.set_meta("render_capture_busy",true)
	var stamp:=Time.get_datetime_string_from_system().replace(":","-")+"_"+str(Time.get_ticks_usec())
	var path:=directory+"/render_"+stamp
	var view: Dictionary={"focus":[demo.focus.x,demo.focus.y,demo.focus.z],"yaw":demo.yaw,"pitch":demo.pitch,"zoom":demo.zoom,"strolling":demo.camera_rig.strolling,"light_phase":demo.light_phase,"tool":demo.tool}
	var meshes: Array=[]
	for instance: GeometryInstance3D in demo.find_children("*","GeometryInstance3D",true,false):
		var mesh: Mesh=instance.mesh if instance is MeshInstance3D else (instance.multimesh.mesh if instance is MultiMeshInstance3D else null)
		meshes.append({"path":str(demo.get_path_to(instance)),"transform":var_to_str(instance.global_transform),"visible":instance.is_visible_in_tree(),"bounds":var_to_str(instance.get_aabb()),"mesh":mesh.resource_path if mesh!=null else "","material":instance.material_override.get_class() if instance.material_override!=null else "","range_end":instance.visibility_range_end})
	var data: Dictionary={"world":demo.state.snapshot(),"life_checkpoint":demo.life.checkpoint(),"view":view,"meshes":meshes,
		"engine":Engine.get_version_info(),"renderer":RenderingServer.get_current_rendering_method(),"gpu":RenderingServer.get_video_adapter_name(),
		"debug_draw":demo.get_viewport().debug_draw,"debug_collisions":demo.get_tree().debug_collisions_hint,"debug_navigation":demo.get_tree().debug_navigation_hint,
		"edit_pending":demo.edit_pending(),"road_drawing":demo.road_drawing,"road_points":var_to_str(demo.road_points)}
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(directory))
	await RenderingServer.frame_post_draw
	var image: Image=demo.get_viewport().get_texture().get_image()
	var file:=FileAccess.open(path+".json",FileAccess.WRITE)
	if file==null:demo.remove_meta("render_capture_busy");demo._message("画面现场保存失败："+error_string(FileAccess.get_open_error()));return
	file.store_string(JSON.stringify(data,"\t",true,true));file.close()
	var saved:=image.save_png(path+".png")
	if saved!=OK:demo.remove_meta("render_capture_busy");demo._message("画面现场截图保存失败："+error_string(saved));return
	if primary_pixels(image)>20:
		var isolation:Dictionary=await isolate(demo,path)
		var report:=FileAccess.open(path+"_isolation.json",FileAccess.WRITE)
		if report!=null:report.store_string(JSON.stringify(isolation,"\t",true,true));report.close()
	demo.remove_meta("render_capture_busy")
	demo._message("画面现场已保存："+ProjectSettings.globalize_path(path+".json"))
	print("RENDER_CAPTURE ",ProjectSettings.globalize_path(path+".json"))

static func primary_pixels(source:Image)->int:
	var image:=source.duplicate() as Image
	image.resize(288,180,Image.INTERPOLATE_NEAREST)
	var count:=0
	for y in range(image.get_height()):
		for x in range(image.get_width()):
			var c:=image.get_pixel(x,y)
			if (c.r>.99 and c.g<.01 and c.b<.01) or (c.g>.99 and c.r<.01 and c.b<.01) or (c.b>.99 and c.r<.01 and c.g<.01):count+=1
	return count

static func _frame(demo:Node3D)->Image:
	await demo.get_tree().process_frame
	await RenderingServer.frame_post_draw
	return demo.get_viewport().get_texture().get_image()

static func isolate(demo:Node3D,path:String)->Dictionary:
	# Freeze the live scene rather than rebuilding it: the fault can depend on
	# render-resource history. Restore every visibility flag before unpausing.
	var tree:=demo.get_tree();var paused:=tree.paused;tree.paused=true
	var baseline:=primary_pixels(await _frame(demo))
	var rows:Array=[];var suspects:Array=[]
	var groups:Array=[]
	for node:Node in demo.town.get_children():
		if node is Node3D and node.visible:groups.append(node)
	groups.append(demo.life)
	for node:Node3D in groups:
		var visible:=node.visible;node.hide()
		var shot:Image=await _frame(demo);var count:=primary_pixels(shot)
		node.visible=visible
		var removed:=baseline-count
		rows.append({"path":str(demo.get_path_to(node)),"pixels":count,"removed":removed})
		if removed>maxi(10,baseline/5):
			suspects.append(str(demo.get_path_to(node)))
			shot.save_png(path+"_without_"+str(node.name).validate_filename()+".png")
	# Search each implicated subtree. Global baseline makes multiple broken
	# objects measurable even when hiding one cannot remove the whole fault.
	for group:String in suspects:
		var pending:Array=[demo.get_node(group)]
		var visits:=0
		while not pending.is_empty() and visits<80:
			var parent:Node=pending.pop_front()
			for child:Node in parent.get_children():
				if visits>=80:break
				if not child is Node3D or not child.visible:continue
				visits+=1;child.hide()
				var count:=primary_pixels(await _frame(demo));child.show()
				if baseline-count<=maxi(10,baseline/10):continue
				rows.append({"path":str(demo.get_path_to(child)),"pixels":count,"removed":baseline-count})
				if child is MeshInstance3D:
					var mesh:=child.mesh as Mesh
					if mesh!=null:ResourceSaver.save(mesh,path+"_mesh_"+str(child.get_instance_id())+".res")
					if child.material_override!=null:ResourceSaver.save(child.material_override,path+"_material_"+str(child.get_instance_id())+".tres")
				elif child is MultiMeshInstance3D and child.multimesh!=null:ResourceSaver.save(child.multimesh,path+"_multimesh_"+str(child.get_instance_id())+".res")
				else:pending.append(child)
	await _frame(demo);tree.paused=paused
	return {"baseline_pixels":baseline,"suspects":suspects,"layers":rows,"restored_pause":tree.paused}
