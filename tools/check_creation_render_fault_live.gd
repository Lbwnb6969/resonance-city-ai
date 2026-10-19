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
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--capture="):
			await _captured(arg.trim_prefix("--capture="));return
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

func _captured(path:String)->void:
	var data:Dictionary=JSON.parse_string(FileAccess.get_file_as_string(path))
	root.size=Vector2i(1440,900);Engine.max_fps=120;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated";root.add_child(demo);demo.life.set_process(false)
	var restored:Dictionary=demo.state.restore(data.world);assert(restored.ok);demo._after_edit(restored,"history")
	var end:=Time.get_ticks_msec()+90000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<end:await process_frame
	demo.life.set_process(false)
	demo.focus=Vector3(data.view.focus[0],data.view.focus[1],data.view.focus[2]);demo.zoom=data.view.zoom;demo.yaw=data.view.yaw;demo.pitch=data.view.pitch;demo._update_camera()
	while demo.light_phase!=int(data.view.light_phase):demo._toggle_light()
	if "--resource-churn" in OS.get_cmdline_user_args():
		await _resource_churn();return
	if "--interactive" in OS.get_cmdline_user_args():
		demo.life.restore_checkpoint(data.life_checkpoint);demo.life.set_process(true)
		var until:=Time.get_ticks_msec()+120000
		while Time.get_ticks_msec()<until:
			for frame in range(24):await process_frame
			await RenderingServer.frame_post_draw
			if demo.RenderCapture.primary_pixels(root.get_texture().get_image())>20:
				if demo.has_meta("render_capture_busy"):
					while demo.has_meta("render_capture_busy"):await process_frame
				else:await demo.RenderCapture.capture(demo,demo.render_capture_directory)
				break
		demo.queue_free();await process_frame;quit();return
	for i in range(60):await process_frame
	await _capture("captured_baseline")
	demo.life.restore_checkpoint(data.life_checkpoint)
	demo.life.set_process(true)
	demo.select_tool(0)
	for i in range(240):
		demo.yaw=float(data.view.yaw)+sin(float(i)*.025)*.65
		demo.pitch=.30+float(i%10)*.008;demo.zoom=float(data.view.zoom);demo._update_camera()
		demo.pointer=Vector2(360.+float(i%50)*12.,340.+sin(float(i)*.1)*140.)
		demo._update_hover()
		for frame in range(2):await process_frame
		if i%12==0:
			await _capture("captured_hover_"+str(i))
			if int(facts[-1].pure_primary_pixels)>10:
				await demo.RenderCapture.capture(demo,demo.render_capture_directory)
				break
	for i in range(30):
		demo.yaw=float(data.view.yaw)+sin(float(i)*.7)*.65
		demo.pitch=.20+float(i%5)*.05;demo.zoom=13.+float(i%4)*3.;demo._update_camera()
		for frame in range(12):await process_frame
		await _capture("captured_motion_"+str(i))
		if int(facts[-1].pure_primary_pixels)>10:break
	demo.life.set_process(false);demo.set_process(false);demo.town.wildlife.set_process(false)
	for node:CPUParticles3D in demo.find_children("*","CPUParticles3D",true,false):node.hide()
	await _capture("captured_no_particles")
	for layer:Node3D in demo.town.get_children():
		if not layer.visible:continue
		layer.hide();await _capture("captured_hide_"+str(layer.name));layer.show()
	for layer:Node in demo.life.get_children():
		if layer is Node3D and layer.visible:layer.hide();await _capture("captured_hide_life_"+str(layer.name));layer.show()
	var file:=FileAccess.open(OUT+"/captured_probe.json",FileAccess.WRITE);file.store_string(JSON.stringify(facts,"\t",true,true));file.close()
	demo.queue_free();await process_frame;quit()

func _resource_churn()->void:
	# Preserve the isolated captured city while exercising GPU upload/release
	# history, which a single snapshot reload cannot reproduce.
	demo.life.set_process(false);demo.music.set_muted(true)
	var rows:Array=[];var found:=false;var maximum:=0
	var deadline:=Time.get_ticks_msec()+90000
	for i in range(160):
		if Time.get_ticks_msec()>deadline:break
		var house:Dictionary=demo.state.houses[i%demo.state.houses.size()]
		var id:=str(house.id)
		demo._after_edit(demo.state.set_house_palette(id,posmod(int(house.get("palette",0))+1,4)),"history")
		while demo.edit_pending() or demo._edit_ui_pending:await process_frame
		demo.town.quality_visual.fingerprints.erase(id)
		demo.town.craft.fingerprints.erase(id);demo.town.craft.culture_fingerprints.erase(id);demo.town.craft.mechanism_fingerprints.erase(id)
		var only:Array[String]=[id]
		demo.town.quality_visual.progress(demo.town,only);demo.town.craft.progress(demo.town,only)
		if i%32==31:demo.town.rebuild()
		if i%12==0:demo._toggle_light()
		demo.yaw=float(i)*.19;demo.pitch=.20+float(i%20)*.01;demo.zoom=13.+float(i%6)*3.;demo._update_camera()
		demo.select_tool(i%3);demo.pointer=Vector2(350.+float(i%50)*13.,330.+sin(float(i)*.1)*140.);demo._update_hover()
		for frame in range(2):await process_frame
		await RenderingServer.frame_post_draw
		var image:Image=root.get_texture().get_image();var primary:int=demo.RenderCapture.primary_pixels(image)
		maximum=maxi(maximum,primary);rows.append({"step":i,"primary_pixels":primary,"edit_mode":demo.edit_budget_report().get("mode",""),"yaw":demo.yaw,"pitch":demo.pitch})
		if i%32==0:image.save_png(OUT+"/churn_"+str(i)+".png")
		if primary>20:
			found=true;await demo.RenderCapture.capture(demo,OUT+"/churn_fault");break
	var report:Dictionary={"fault_reproduced":found,"iterations":rows.size(),"maximum_primary_pixels":maximum,"steps":rows}
	var file:=FileAccess.open(OUT+"/churn_probe.json",FileAccess.WRITE);file.store_string(JSON.stringify(report,"\t",true,true));file.close()
	print("RESOURCE_CHURN ",JSON.stringify({"fault_reproduced":found,"iterations":rows.size(),"maximum_primary_pixels":maximum}))
	demo.queue_free();await process_frame;quit()
