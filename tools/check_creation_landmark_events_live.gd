extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Golden=preload("res://tools/fixtures/city_creation_golden_corridor_fixture.gd")
const Theater=preload("res://tools/fixtures/city_creation_amphitheater_fixture.gd")
const OUT="res://验证记录/轨街问答与落幕_2026-10-19"
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _capture(name:String)->void:
	for i in range(3):await process_frame
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+name+".png")==OK,"actual GL screenshot: "+name)
func _load(city:RefCounted)->void:
	var result:Dictionary=demo.state.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true)))
	_check(result.ok,"earned authored city restores normally")
	demo._after_edit(result,"history");var end:=Time.get_ticks_msec()+90000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<end:await process_frame
	_check(not demo.edit_pending(),"real geometry and life graph publish")
	demo.life.set_process(false)
func _golden()->void:
	var scene:=Golden.build();var city:RefCounted=scene.city
	city.record_district_answer("d1","d2");var academy:Dictionary=city.place_signature("music_academy",Vector2(-18,8));assert(academy.ok)
	var points:Array[Vector2]=[Vector2(-18,8),Vector2(-14,-2)];var a:Dictionary=city.add_district(points,3.6,"weave")
	points=[Vector2(-2,-2)];var b:Dictionary=city.add_district(points,3.6,"market");assert(city.link_districts(str(a.district_id),str(b.district_id)).ok)
	city.resonance_afterglow.clear();await _load(city)
	demo.focus=Vector3(-11,.5,0);demo.zoom=30.;demo.yaw=.3;demo.pitch=.83;demo._update_camera();demo.select_tool(4);demo.selected_house=str(scene.depot);demo._refresh_ui()
	var report:Dictionary=demo.life.tram.report()
	_check(report.cars.size()==1 and report.cars[0].capacity==24 and demo.life.tram.direct(str(scene.home),str(scene.cafe)),"actual published depot has twenty-four capacity and far-cafe express eligibility")
	_check(demo.place_description.text.contains("轨交直达"),"actual selected-building drawer explains the gold corridor")
	await _capture("01_golden_corridor")
	var players:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():players.append(player.get_instance_id())
	var end:=Time.get_ticks_msec()+(1000 if "--fault-probe" in OS.get_cmdline_user_args() else 45000)
	while Time.get_ticks_msec()<end and (demo.state.afterglow_remaining("h1")<59. or demo.state.afterglow_remaining("h3")<29.):await process_frame
	_check(demo.music.reply.calls>0 and demo.music.reply.answers>0 and demo.state.afterglow_remaining("h1")==60. and demo.state.afterglow_remaining("h3")==30.,"real question and answer playback award sixty-second academy and thirty-second other-district glow")
	facts.reply={"calls":demo.music.reply.calls,"answers":demo.music.reply.answers,"academy_glow":demo.state.afterglow_remaining("h1"),"other_glow":demo.state.afterglow_remaining("h3")};facts.corridor=report
	var after:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():after.append(player.get_instance_id())
	_check(players==after and demo.music._effects.size()==4,"completed-reply rewards retain the original long players and four short slots")
	demo.ledger.open_panel();_check(demo.ledger.body.text.contains("每车24席") and demo.ledger.body.text.contains("轨交直达"),"life ledger displays actual corridor capacity and local services")
	await _capture("02_reply_rewards_and_transport_ledger");demo.ledger.close_panel()
func _finale()->void:
	var scene:=Theater.build(self);var city:RefCounted=scene.city;scene.life.free()
	var placed:=Theater.place_connected(city);assert(placed.ok)
	var points:Array[Vector2]=[Vector2(-11,-9),Vector2(-11,9)];city.add_road(points,"tram")
	points=[Vector2(-11,9),Vector2(15,9)];city.add_road(points,"tram")
	await _load(city)
	demo.focus=Vector3(3,.5,14);demo.zoom=48.;demo.yaw=.25;demo.pitch=.85;demo._update_camera();demo.select_tool(0)
	while demo.light_phase!=2:demo._toggle_light()
	_check(demo.life.invite_grand_festival(str(placed.house_id)).ok,"real four-era theater invitation is accepted")
	var deadline:=Time.get_ticks_msec()+90000
	while Time.get_ticks_msec()<deadline and demo.life.concert_status().phase!="playing":
		demo.life._process(.05);await process_frame
	_check(demo.life.concert_status().phase=="playing","actual audience reaches the theater and starts at the music gate")
	if demo.life.concert_status().phase!="playing":return
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--fault-view="):
			var data:Dictionary=JSON.parse_string(FileAccess.get_file_as_string(arg.trim_prefix("--fault-view=")))
			demo.focus=Vector3(data.view.focus[0],data.view.focus[1],data.view.focus[2]);demo.zoom=data.view.zoom;demo.yaw=data.view.yaw;demo.pitch=data.view.pitch;demo._update_camera()
	demo.state.building_quality.clear();demo.life._quality_cursor=-1;demo.life._quality_timer=100.;demo.life._quality_inputs=hash([demo.state.revision,demo.state.Quality.data(demo.state)])
	for house:Dictionary in demo.state.houses:demo.state.grant_resonance_afterglow([str(house.id)],40.)
	var before:=int(demo.state.life_progress.concerts);var frames:Array[float]=[]
	demo.life.set_process(true);deadline=Time.get_ticks_msec()+30000
	while Time.get_ticks_msec()<deadline and demo.life.finale_view().is_empty():
		var start:=Time.get_ticks_usec();await process_frame;frames.append((Time.get_ticks_usec()-start)/1000.)
	_check(not demo.life.finale_view().is_empty() and demo.state.life_progress.concerts==before+1,"full real-time twenty-four-second performance finishes once")
	var finale:Dictionary=demo.life.finale_view()
	_check(finale.get("checked_house_ids",[]).size()>16 and not finale.get("changes",[]).is_empty(),"completion immediately checks the whole glowing city and publishes earned quality upgrades")
	for i in range(4):await process_frame
	_check(bool(demo.town.grand_festival_visual.report.get("finale",false)) and float(demo.town.water_material.get_shader_parameter("festival_finale"))==1.,"actual river shader switches to the completion wave")
	var lit:=0
	for row:Dictionary in demo.town.resonance.rigs.values():
		if float(row.material.get_shader_parameter("finale_glow"))>.9:lit+=1
	_check(lit>16,"actual house materials display the global golden afterglow")
	await _capture("03_festival_completion_gold")
	if "--fault-probe" in OS.get_cmdline_user_args() or Array(OS.get_cmdline_user_args()).any(func(arg:String)->bool:return arg.begins_with("--fault-view=")):
		demo.life.set_process(false)
		demo.set_process(false);demo.town.wildlife.set_process(false)
		await _fault_probe()
		demo.life.set_process(true);demo.set_process(true);demo.town.wildlife.set_process(true)
	deadline=Time.get_ticks_msec()+3000
	while Time.get_ticks_msec()<deadline:await process_frame
	await _capture("04_river_wave_propagation")
	frames.sort();facts.finale={"checked":finale.get("checked_house_ids",[]).size(),"changes":finale.get("changes",[]),"lit_rigs":lit,"frames":frames.size(),"frame_p95_ms":frames[int(frames.size()*.95)],"frame_max_ms":frames[-1],"visual":demo.town.grand_festival_visual.report}
	deadline=Time.get_ticks_msec()+13000
	while Time.get_ticks_msec()<deadline and not demo.life.finale_view().is_empty():await process_frame
	for i in range(3):await process_frame
	_check(float(demo.town.water_material.get_shader_parameter("festival_strength"))==0. and demo.state.life_progress.concerts==before+1,"completion wave expires without replaying reward or leaving river emission")
	demo.life.set_process(false)
	var saved:=State.new();_check(demo.state.set_journey_checkpoint(demo.life.checkpoint()).ok and saved.restore(demo.state.snapshot()).ok,"actual completed journeys and promoted quality save normally")
func _primary_pixels(label:String)->void:
	for i in range(3):await process_frame
	await RenderingServer.frame_post_draw
	var img:Image=root.get_texture().get_image();img.save_png(OUT+"/fault_"+label+".png");img.resize(288,180,Image.INTERPOLATE_NEAREST)
	var count:=0
	for y in range(180):
		for x in range(288):
			var c:=img.get_pixel(x,y)
			if (c.g>.99 and c.r<.01 and c.b<.01) or (c.b>.99 and c.r<.01 and c.g<.01) or (c.r>.99 and c.g<.01 and c.b<.01):count+=1
	print("FAULT_LAYER ",label," ",count)
func _fault_probe()->void:
	await _primary_pixels("baseline")
	for node:CPUParticles3D in demo.find_children("*","CPUParticles3D",true,false):node.hide()
	await _primary_pixels("no_particles")
	var layers:Array=demo.town.get_children()+[demo.life]
	for layer:Node3D in layers:
		layer.hide();await _primary_pixels(str(layer.name));layer.show()
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated";root.add_child(demo);demo.life.set_process(false)
	_check(DisplayServer.get_name()!="headless","real GL window is active")
	var ready_end:=Time.get_ticks_msec()+180000
	while demo.music._loading and Time.get_ticks_msec()<ready_end:await process_frame
	_check(not demo.music._loading and not demo.music.audio_report.is_empty(),"production audio bank is ready before phrase and concert timing checks")
	await _golden();await _finale()
	var after:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	_check(after==personal,"personal continuing city is unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts};var file:=FileAccess.open(OUT+"/report.json",FileAccess.WRITE);file.store_string(JSON.stringify(report,"\t",true,true));file.close()
	print("LANDMARK_EVENTS_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
