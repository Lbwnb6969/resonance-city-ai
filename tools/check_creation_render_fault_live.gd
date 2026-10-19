extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const Theater=preload("res://tools/fixtures/city_creation_amphitheater_fixture.gd")
const OUT="res://验证记录/彩色面与舞台重叠_2026-10-19"
var demo
var facts:Array=[]
func _initialize()->void:_run.call_deferred()
func _capture(label:String)->void:
	for i in range(4):await process_frame
	await RenderingServer.frame_post_draw
	var img:Image=root.get_texture().get_image();img.save_png(OUT+"/"+label+".png")
	img.resize(288,180,Image.INTERPOLATE_NEAREST);var saturated:=0
	for y in range(img.get_height()):
		for x in range(img.get_width()):
			var c:=img.get_pixel(x,y)
			if (c.r>.99 and c.g<.01 and c.b<.01) or (c.g>.99 and c.r<.01 and c.b<.01) or (c.b>.99 and c.r<.01 and c.g<.01):saturated+=1
	facts.append({"label":label,"pure_primary_pixels":saturated});print("FAULT_PROBE ",JSON.stringify(facts[-1]))
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var scene:=Theater.build(self);var city:RefCounted=scene.city;scene.life.free();var placed:=Theater.place_connected(city);assert(placed.ok)
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated";root.add_child(demo);demo.life.set_process(false)
	var restored:Dictionary=demo.state.restore(city.snapshot());demo._after_edit(restored,"history")
	var end:=Time.get_ticks_msec()+90000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<end:await process_frame
	demo.life.set_process(false);demo.focus=Vector3(3,.5,14);demo.zoom=48.;demo.yaw=.25;demo.pitch=.85;demo._update_camera()
	while demo.light_phase!=2:demo._toggle_light()
	await _capture("00_before_upgrade")
	demo.state.building_quality.clear();var changes:Array=demo.life._refresh_quality();print("FAULT_CHANGES ",JSON.stringify(changes))
	await _capture("01_after_upgrade")
	for node:CPUParticles3D in demo.find_children("*","CPUParticles3D",true,false):node.hide()
	await _capture("02_hide_cpu_particles")
	var layers:Array=[demo.town.quality_visual.layer,demo.town.craft.layer,demo.town.house_music_layer,demo.town.ecology_layer,demo.town.meadow,demo.town.buildings,demo.town.wildlife]
	for i in range(layers.size()):
		var layer:Node3D=layers[i];layer.hide();await _capture("hide_"+str(layer.name));layer.show()
	for node:CPUParticles3D in demo.find_children("*","CPUParticles3D",true,false):node.show()
	demo.life.set_process(true)
	for at:Vector2 in [Vector2(26,-6),Vector2(30,-6),Vector2(26,-2),Vector2(30,-2)]:
		var added:Dictionary=demo.state.add_house(at)
		if not added.ok:continue
		demo._after_edit(added,"house")
		var limit:=Time.get_ticks_msec()+90000
		while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<limit:await process_frame
		await _capture("after_house_"+str(added.house_id))
	for i in range(24):
		demo.yaw=float(i)*TAU/24.;demo.pitch=.55+float(i%3)*.14;demo.zoom=27.+float(i%4)*8.;demo._update_camera()
		for step in range(100):demo.life._process(.05)
		await _capture("orbit_"+str(i))
		if int(facts[-1].pure_primary_pixels)>10:
			demo.life.set_process(false)
			for layer:Node3D in layers:
				layer.hide();await _capture("isolate_"+str(layer.name));layer.show()
			break
	var file:=FileAccess.open(OUT+"/probe.json",FileAccess.WRITE);file.store_string(JSON.stringify(facts,"\t",true,true));file.close()
	demo.queue_free();await process_frame;quit()
