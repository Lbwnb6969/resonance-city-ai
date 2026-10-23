extends RefCounted
const Fixture=preload("res://tools/fixtures/city_creation_juice_fixture.gd")
const Bounce=preload("res://scripts/visual/city_creation_window_bounce.gd")
const OUT="res://验证记录/M15/双色金弧与窗光"
static func image(demo:Node)->Image:
	await demo.get_tree().process_frame;await RenderingServer.frame_post_draw
	return demo.get_tree().root.get_texture().get_image()
static func capture(demo:Node)->Dictionary:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	demo._after_edit(demo.state.restore(Fixture.wishes().snapshot()),"history")
	while demo.edit_pending() or demo._edit_ui_pending:await demo.get_tree().process_frame
	demo.life.set_process(false);demo.select_tool(4);demo.ui_layer.hide();demo.town.clear_preview()
	var checks:Dictionary={};var differences:Dictionary={};var tree:SceneTree=demo.get_tree()
	var targets:=Bounce.materials(demo.town)
	checks.shared_contact_field=targets.all(func(material):return material.get_shader_parameter("ground_contact_field")==demo.town.ground_contact_field.texture)
	var points:Array[Vector3]=[]
	for x:float in [-30.,-26.,-22.]:
		for dx:float in [-.35,0.,.35]:points.append(Vector3(x+dx,demo.state.street_height(Vector2(x+dx,-20.45))+.01,-20.45))
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		tree.root.size=size;demo.focus=Vector3(-26,.7,-20.);demo.zoom=16.;demo.pitch=.9;demo.yaw=.32;demo._update_camera()
		for phase in range(3):
			demo._set_light_phase(phase)
			for material:ShaderMaterial in targets:material.set_shader_parameter("window_bounce_strength",0.)
			var before:Image=await image(demo)
			for material:ShaderMaterial in targets:material.set_shader_parameter("window_bounce_strength",1.)
			var after:Image=await image(demo)
			before.save_png(OUT+"/window_%d_%d_before.png"%[size.x,phase]);after.save_png(OUT+"/window_%d_%d_after.png"%[size.x,phase])
			var delta:=0.
			for at:Vector3 in points:
				var pixel:=Vector2i(demo.camera.unproject_position(at));delta+=after.get_pixelv(pixel).r-before.get_pixelv(pixel).r
			differences["%d_%d"%[size.x,phase]]=delta/points.size()
			checks["bounce_%d_%d"%[size.x,phase]]=absf(delta)<.01 if phase==0 else delta>.02
			var arcs:RefCounted=demo.get_meta("juice_feedback").arcs;arcs.emit(demo.state,"h1","h2",demo.get_meta("juice_feedback")._clock())
			await tree.create_timer(.30).timeout
			var shot:Image=await image(demo);shot.save_png(OUT+"/two_tone_arc_%d_%d.png"%[size.x,phase])
	for ground:String in ["stone","sand"]:
		var city:RefCounted=Fixture.wishes();var built:Dictionary
		if ground=="stone":
			var points_on_road:Array[Vector2]=[]
			for at:Array in city.roads[1].points:points_on_road.append(Vector2(at[0],at[1]))
			built=city.add_road(points_on_road,"cobble")
		else:built=city.add_water([Vector2(-28,-22.6)] as Array[Vector2],1.8,"pond")
		checks["authored_arc_"+ground]=built.ok
		demo._after_edit(demo.state.restore(city.snapshot()),"history")
		while demo.edit_pending() or demo._edit_ui_pending:await tree.process_frame
		demo.life.set_process(false);demo._set_light_phase(0)
		for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
			tree.root.size=size;demo.focus=Vector3(-27,.8,-21.4);demo.zoom=12.;demo.pitch=.95;demo.yaw=.1;demo._update_camera()
			var arcs:RefCounted=demo.get_meta("juice_feedback").arcs;arcs.clear();arcs.emit(demo.state,"h1","h3" if ground=="stone" else "h2",demo.get_meta("juice_feedback")._clock())
			await tree.create_timer(.3).timeout
			var shot:Image=await image(demo);shot.save_png(OUT+"/day_arc_"+ground+"_%d.png"%size.x)
	var result:={"ok":checks.values().all(func(value):return value),"checks":checks,"road_red_channel_gain":differences}
	FileAccess.open(OUT+"/lighting.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"))
	demo.ui_layer.show();return result
