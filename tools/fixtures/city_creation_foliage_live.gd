extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
static func capture(demo:Node,directory:String)->Dictionary:
	var city:=State.new();city.initialize();var planted:Array=[]
	for row:Array in [[Vector2(-26,16),"olive"],[Vector2(-23,16),"golden_tree"],[Vector2(-20,16),"cypress"],[Vector2(-24,19),"shrub"]]:
		var result:Dictionary=city.place_plant(row[0],row[1]);planted.append(result.ok)
	demo._after_edit(demo.state.restore(city.snapshot()),"history")
	while demo.edit_pending() or demo._edit_ui_pending:await demo.get_tree().process_frame
	demo.life.set_process(false);demo.select_tool(4);demo.town.clear_preview();demo.ui_layer.hide();demo.camera_rig.strolling=true;demo.camera.projection=Camera3D.PROJECTION_PERSPECTIVE;demo.camera.fov=48.
	var tree:SceneTree=demo.get_tree();var shaders:=0;var finite:=true
	for material:Material in demo.town.foliage._materials.values():
		if material is ShaderMaterial:
			shaders+=1;finite=finite and material.shader==preload("res://scripts/visual/shaders/creation_foliage.gdshader")
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		tree.root.size=size
		for phase in range(3):
			demo._set_light_phase(phase)
			for angle:float in [5.,10.,15.]:
				demo.focus=Vector3(-23,city.ground_height(Vector2(-23,24.5))+1.2,24.5);demo.pitch=deg_to_rad(angle);demo.yaw=0.;demo._update_camera()
				await tree.process_frame;await RenderingServer.frame_post_draw
				tree.root.get_texture().get_image().save_png(directory+"/foliage_%d_%d_%02d.png"%[size.x,phase,int(angle)])
	# A high oblique view exposes the asymmetric subsidiary golden leaf clusters.
	demo.camera_rig.strolling=false;demo.camera.projection=Camera3D.PROJECTION_ORTHOGONAL
	demo.focus=Vector3(-23,1.6,16);demo.zoom=8.;demo.pitch=.32;demo.yaw=2.5;demo._set_light_phase(1);demo._update_camera()
	await tree.process_frame;await RenderingServer.frame_post_draw
	tree.root.get_texture().get_image().save_png(directory+"/foliage_backlight.png")
	var touched:Material=demo.town.foliage.material("canopy");touched.set_shader_parameter("touch_time",.12);touched.set_shader_parameter("touch_at",Vector2(-23,16))
	var result:={"ok":planted.all(func(value):return value) and finite and shaders>0,"planted":planted,"shared_shader_count":shaders,"plants":demo.state.plants.size()}
	FileAccess.open(directory+"/foliage.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));return result
