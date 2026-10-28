extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_large_town_fixture.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const Scene=preload("res://scenes/city_creation.tscn")
var output:="res://验证记录/M32/300"
class IsolatedInput extends Node:
	func _input(event:InputEvent)->void:
		if event.device!=92:get_viewport().set_input_as_handled()
var demo
var checks:Array=[]
var failures:Array[String]=[]
var edit_frames:Array[float]=[]
var _watch_edit:=false
var _last_edit_tick:=0
func _initialize()->void:
	process_frame.connect(_frame);_run.call_deferred()
func _frame()->void:
	var now:=Time.get_ticks_usec()
	if _watch_edit and _last_edit_tick>0:edit_frames.append((now-_last_edit_tick)/1000.)
	_last_edit_tick=now
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _wait()->void:
	var end:=Time.get_ticks_msec()+120000
	while (demo.edit_pending() or demo._edit_ui_pending or demo.life._budget_delta>0. or (demo.town.budget_rebuild!=null and demo.town.budget_rebuild.retirement_pending())) and Time.get_ticks_msec()<end:await process_frame
	await physics_frame;await process_frame
func _capture(label:String)->void:
	await process_frame;await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(output+"/"+label+".png")
func _metrics(samples:Array[float])->Dictionary:
	samples.sort();var sum:=0.
	for value:float in samples:sum+=value
	return {"mean_ms":sum/samples.size(),"p95_ms":samples[int(samples.size()*.95)],"max_ms":samples[-1]}
func _run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):output=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var city:RefCounted
	var fixture_path:=output+"/authored_300_world.json"
	if "--reuse-fixture" in OS.get_cmdline_user_args() and FileAccess.file_exists(fixture_path):
		city=State.new()
		var restored_fixture:Dictionary=city.restore(JSON.parse_string(FileAccess.get_file_as_string(fixture_path)))
		_check(restored_fixture.ok,"previously authored large fixture validates against current production schema")
	else:
		city=Fixture.build(300,true)
		FileAccess.open(fixture_path,FileAccess.WRITE).store_string(JSON.stringify(city.snapshot(),"",true,true))
	if "--organic-profile" in OS.get_cmdline_user_args():
		var organic:=preload("res://tools/fixtures/city_creation_seventh_scale_fixture.gd").prepare(city)
		FileAccess.open(output+"/organic_authored_profile.json",FileAccess.WRITE).store_string(JSON.stringify(organic,"\t"))
		FileAccess.open(fixture_path,FileAccess.WRITE).store_string(JSON.stringify(city.snapshot(),"",true,true))
	print("LARGE_FIXTURE_READY ",city.houses.size())
	var scene_started:=Time.get_ticks_usec()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=output+"/临时作品库";root.add_child(demo);demo.life.set_process(false)
	root.add_child(IsolatedInput.new())
	var chosen:Dictionary={"ok":true,"id":"large_town","title":"三百屋四时代","world":JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true)),"view":{"focus":[0.,0.,0.],"zoom":94.,"yaw":.4,"pitch":.83,"evening":false,"light_phase":0}}
	var open_started:=Time.get_ticks_usec()
	await demo.gallery._open_chosen(chosen);demo.life.set_process(false)
	var open_ms:float=(Time.get_ticks_usec()-open_started)/1000.
	_check(demo.state.houses.size()==300 and not demo.gallery.busy,"three hundred authored four-era buildings restore through the actual complete-work loader")
	print("LARGE_RENDER_READY")
	if "--process-profile" in OS.get_cmdline_user_args():preload("res://tools/fixtures/city_creation_process_probe.gd").install(demo)
	if "--ui-only" in OS.get_cmdline_user_args():
		await _large_ui();await create_timer(3.).timeout
		FileAccess.open(output+"/ui_only.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures},"\t"));quit(0 if failures.is_empty() else 1);return
	if "--local-only" in OS.get_cmdline_user_args():
		demo.get_meta("inspiration_draft").postponed=true;demo.get_meta("inspiration_draft").paper.hide()
		await _capture("overview_300")
	if "--local-only" in OS.get_cmdline_user_args():
		var local:Dictionary=await preload("res://tools/fixtures/city_creation_local_town_edits_live.gd").run(demo,output)
		FileAccess.open(output+"/local_scale_profile.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":local.ok,"open_ms":open_ms,"loading":demo.gallery.load_stats,"local":local},"\t"))
		print("LOCAL_TOWN_EDITS ",JSON.stringify(local));quit(0 if local.ok else 1);return
	if "--views-only" in OS.get_cmdline_user_args():
		var views:Dictionary=await preload("res://tools/fixtures/city_creation_final_city_views.gd").capture(demo,output)
		FileAccess.open(output+"/final_views.json",FileAccess.WRITE).store_string(JSON.stringify(views,"\t"));print("FINAL_CITY_VIEWS ",JSON.stringify(views))
		quit(0 if views.ok else 1);return
	demo.ui_layer.visible=false;demo.focus=Vector3(0,0,0);demo.zoom=94;demo.yaw=.4;demo.pitch=.83;demo._update_camera();demo.town.clear_preview()
	var eras:Dictionary={}
	for house:Dictionary in demo.state.houses:eras[demo.state.house_era(house)]=true
	_check(demo.town.buildings.get_child_count()==300 and eras.size()==4,"all three hundred real rendered buildings coexist in four district eras on eighty-metre canvas")
	var deadline:=Time.get_ticks_msec()+90000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline:await process_frame
	_check(demo.music.audio_report.get("bank_source","")=="precompiled","native production scene uses the precompiled original PCM bank")
	var bank_metrics:Dictionary={"source":demo.music.audio_report.get("bank_source",""),"load_ms":demo.music.audio_report.get("bank_load_ms",-1.),"scene_ready_ms":float(Time.get_ticks_usec()-scene_started)/1000.}
	await _capture("01_three_hundred_buildings_four_eras_full_canvas")
	var overview:Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(180):
		await process_frame;var now:=Time.get_ticks_usec();demo.life._process((now-last)/1000000.);overview.append((Time.get_ticks_usec()-last)/1000.);last=Time.get_ticks_usec()
	demo.focus=Vector3(-25,0,-25);demo.zoom=12;demo.yaw=.45;demo.pitch=.65;demo._update_camera()
	var moving:=0;var origins:Dictionary={}
	for resident:Dictionary in demo.life.residents:
		if not resident.paused and resident.route.size()>1:resident.wait=0.;moving+=1
		origins[resident.home_id]=demo.life.citizen_position(resident)
	_check(demo.life.residents.size()>=200 and moving>=200,"at least two hundred actual residents depart concurrently along existing connected service routes")
	var stages:Dictionary={};demo.life.profile_tick=true
	for i in range(180):
		await process_frame;var now:=Time.get_ticks_usec();demo.life._process((now-last)/1000000.);last=Time.get_ticks_usec()
		for key:String in demo.life.tick_profile:
			if demo.life.tick_profile[key] is int or demo.life.tick_profile[key] is float:stages[key]=float(stages.get(key,0.))+float(demo.life.tick_profile[key])/180000.
	demo.life.profile_tick=false
	print("LIFE_STAGES ",stages)
	var frames:Array[float]=[];var cpu:Array[float]=[];last=Time.get_ticks_usec()
	for i in range(600):
		await process_frame;var now:=Time.get_ticks_usec();var began:=Time.get_ticks_usec()
		demo.life._process((now-last)/1000000.);cpu.append((Time.get_ticks_usec()-began)/1000.);frames.append((Time.get_ticks_usec()-last)/1000.);last=Time.get_ticks_usec()
	var moved:=0;var deferred:=0
	for resident:Dictionary in demo.life.residents:
		var point:Vector3=demo.life.citizen_position(resident)
		if point.distance_to(origins[resident.home_id])>.1:moved+=1
		if resident.has("offscreen_motion") and point.distance_to(resident.node.position)>.1:deferred+=1
	_check(moved>=200 and deferred>=150,"over two hundred residents truly travel while hidden actors leave scene transforms deferred")
	await _capture("02_active_large_city_near_view_and_scalar_citizens")
	var cpu_metrics:=_metrics(cpu);var frames_metrics:=_metrics(frames)
	print("PERFORMANCE_REFERENCE ",JSON.stringify({"life_cpu":cpu_metrics,"policy":"reference_only"}))
	var edit_metrics:Dictionary=await _edit_large_city()
	if "--terrain-only" in OS.get_cmdline_user_args():
		FileAccess.open(output+"/terrain_probe.json",FileAccess.WRITE).store_string(JSON.stringify(edit_metrics,"\t"));quit(0 if failures.is_empty() else 1);return
	var local:Dictionary=await preload("res://tools/fixtures/city_creation_local_town_edits_live.gd").run(demo,output)
	_check(local.ok,"three hundred house local building road pond edits and undo match cold service computation")
	await _large_ui()
	var art:Dictionary=await preload("res://tools/fixtures/city_creation_final_city_views.gd").capture(demo,output)
	_check(art.ok,"four-era day/dusk/night and5/10/15degree views preserve the complete300-house world")
	var audio_metrics:Dictionary=await _audio_cycle()
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"production scale validation preserves personal saved city bytes")
	var report:Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"houses":demo.state.houses.size(),"residents":demo.life.residents.size(),"moving":moving,"moved":moved,"deferred":deferred,"lod":demo.life.citizen_lod_stats,"life_stages_ms":stages,"life_cpu":cpu_metrics,"near_frames":frames_metrics,"overview_frames":_metrics(overview),"bank":bank_metrics,"edit":edit_metrics,"audio":audio_metrics,"load":demo.gallery.load_stats.duplicate(true),"art":art}
	FileAccess.open(output+"/large_town_live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"))
	print("LARGE_TOWN_LIVE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks.size(),"failures":failures,"houses":report.houses,"residents":report.residents,"moving":moving,"life_cpu":cpu_metrics,"audio":audio_metrics}))
	quit(0 if failures.is_empty() else 1)

func _edit_large_city()->Dictionary:
	demo.focus=Vector3(-25,0,29);demo.zoom=14;demo._update_camera();demo.life.set_process(true)
	await process_frame
	var at:=Vector2(-25,29);var before:float=demo.state.ground_height(at);var network_id:int=demo.life._network.get_instance_id()
	var audio:Array=preload("res://tools/fixtures/city_creation_alpine_live.gd").audio_identity(demo)
	var assigned_before:Dictionary={}
	for key:String in demo.music._players:assigned_before[key]=demo.music._players[key].stream.get_instance_id()
	var points:Array[Vector2]=[at];var began:=Time.get_ticks_usec();edit_frames.clear();_watch_edit=true;_last_edit_tick=began
	var result:Dictionary=demo.state.add_terrain_stroke(points,"raise",1.,1.,2);demo._after_edit(result,"terrain")
	var command_ms:float=(Time.get_ticks_usec()-began)/1000.
	await _wait()
	# Observe one complete periodic UI cycle after real held time has been
	# repaid. Delayed simulation work belongs to the edit's measured tail.
	var tail_until:=Time.get_ticks_msec()+600
	while Time.get_ticks_msec()<tail_until:await process_frame
	_watch_edit=false
	var latency:float=(Time.get_ticks_usec()-began)/1000.;var budget:Dictionary=demo.edit_budget_report();var rendered:Dictionary=demo.town.budget_rebuild.stats
	var after:float=demo.state.ground_height(at);var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,15,at.y),Vector3(at.x,-5,at.y),2))
	_check(result.ok and after>before+.03 and not hit.is_empty() and absf(float(hit.position.y)-after)<.002,"actual three-hundred-house terrain edit visibly raises ground and publishes matching collision")
	_check(not demo.edit_pending() and not demo._edit_ui_pending and not demo.town.budget_rebuild.retirement_pending() and demo.life._network.get_instance_id()!=network_id,"large-city edit finishes real route publication and every retired CPU record")
	var same_audio:bool=audio==preload("res://tools/fixtures/city_creation_alpine_live.gd").audio_identity(demo)
	var allowed:Array=demo.music._original_streams.values()+demo.music._variation_streams.values()+demo.music._harmony_streams.values()
	var assigned_after:Dictionary={}
	for key:String in demo.music._players:
		assigned_after[key]=demo.music._players[key].stream.get_instance_id()
		same_audio=same_audio and demo.music._players[key].stream in allowed
	_check(same_audio and demo.state.houses.size()==300 and demo.life.residents.size()>=200,"large live edit preserves shared PCM and all actual houses and residents")
	_check(demo.life.budget_commit_stats.prepared_height_hits==demo.life.residents.size() and demo.life.budget_commit_stats.prepared_stop_hits==demo.life.residents.size() and demo.life._budget_delta==0.,"all actual resident heights and itineraries publish from exact prepared data and every held simulation step is repaid")
	var metrics:=_metrics(edit_frames)
	print("PERFORMANCE_REFERENCE ",JSON.stringify({"edit_frames":metrics,"command_ms":command_ms,"policy":"reference_only"}))
	print("PERFORMANCE_REFERENCE ",JSON.stringify({"budget":budget,"max_frame_work_ms":rendered.get("max_frame_work_ms",0.),"policy":"reference_only"}))
	await _capture("10_large_city_actual_terrain_edit")
	return {"audio_identity":{"unchanged":same_audio,"assigned_before":assigned_before,"assigned_after":assigned_after,"residents":demo.life.residents.size()},"result":result,"command_ms":command_ms,"latency_ms":latency,"frames":metrics,"height_before":before,"height_after":after,"height_delta":after-before,"pick":hit.get("position"),"budget":budget,"life_commit_stages":demo.life.budget_commit_stats.duplicate(true),"habitats":demo.town.wildlife.habitat_stats.duplicate(),"catchup_remaining":demo.life._budget_delta,"final_render_stats":rendered.duplicate(true),"terrain_blocks":demo.town.terrain_surface.stats.changed,"houses_rebuilt":demo.town.rebuild_stats.houses_changed,"roads_rebuilt":demo.town.rebuild_stats.roads_changed}

func _click_at(at:Vector2)->void:
	var motion:=InputEventMouseMotion.new();motion.device=92;motion.position=at;motion.global_position=at;root.push_input(motion);await process_frame
	var hovered:=root.gui_get_hovered_control();print("NATIVE_POINTER ",at," -> ",hovered.get_path() if hovered!=null else "world")
	for pressed:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.device=92;event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=pressed;root.push_input(event);await process_frame
	await _wait();await create_timer(.3).timeout

func _dismiss_papers()->void:
	var draft:Node=demo.get_meta("inspiration_draft");draft.poll()
	if draft.paper.is_visible_in_tree():await _click_at(draft.paper.find_child("PostponeDraft",true,false).get_global_rect().get_center())
func _large_ui()->void:
	demo.life.set_process(false);demo.ui_layer.show();demo.select_tool(0)
	var house:Dictionary=demo.state.houses[100];var id:=str(house.id);var top:=0
	for cell:Dictionary in house.cells:top=maxi(top,int(cell.level))
	var at:=Vector3(house.origin[0],float(house.get("base_y",0.))+(top+1)*demo.FLOOR+.2,house.origin[1])
	var original:Dictionary=house.duplicate(true)
	for resolution:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=resolution;demo.spatial_popover.close();demo.spatial_popover.color_panel.hide();demo.focus=Vector3(at.x,1.,at.z);demo.zoom=17.;demo.pitch=.85;demo._update_camera()
		for i in range(8):await process_frame
		await _dismiss_papers()
		await _click_at(demo.camera.unproject_position(at))
		var pop=demo.spatial_popover
		_check(pop.target_house_id==id and pop.card.is_visible_in_tree(),"real roof pointer opens the selected house in the three-hundred-house city at "+str(resolution))
		_check(pop.role_buttons.values().filter(func(b):return b.visible).size()==(8 if demo.state.CreationPolicy.is_free(demo.state) else 6) and not pop.concert_button.visible and not demo.place_panel.is_visible_in_tree(),"ordinary purpose count follows creation policy and keeps the spatial inspector")
		await _dismiss_papers()
		await _click_at(pop.expand_button.get_global_rect().get_center())
		print("PALETTE_STATE ",resolution," ",pop.color_panel.visible," ",pop.inspector.panel.visible," ",pop.inspector._target," ",pop.target_house_id," ",pop.expand_button.get_global_rect())
		await _capture("expanded_palette_"+str(resolution.x))
		_check(Rect2(Vector2.ZERO,Vector2(resolution)).encloses(pop.card.get_global_rect()) and pop.color_panel.is_visible_in_tree(),"expanded large-city color palette fits "+str(resolution))
		var root_id:int=demo.town.house_roots[id].get_instance_id()
		pop.wall_picker.color=Color("99c6d2");pop.roof_picker.color=Color("75436c")
		await _click_at(pop.color_panel.find_child("ApplyColors",true,false).get_global_rect().get_center())
		_check(demo.town._house_record(id).get("custom_colors",{}).get("roof","")=="75436c" and demo.town.house_roots[id].get_instance_id()==root_id,"actual apply button updates color without rebuilding the large-city house")
		for pressed:bool in [true,false]:
			var key:=InputEventKey.new();key.device=92;key.keycode=KEY_Z;key.ctrl_pressed=true;key.pressed=pressed;root.push_input(key);await process_frame
		await _wait()
		_check(demo.town._house_record(id)==original and demo.state.houses.size()==300,"real Ctrl+Z restores the exact authored house and keeps all three hundred buildings")
		await _capture("large_city_roof_palette_"+str(resolution.x))
	demo.spatial_popover.close();root.size=Vector2i(1440,900)

func _audio_cycle()->Dictionary:
	demo.focus=Vector3.ZERO;demo.zoom=94.;demo._update_camera();demo.life.set_process(true)
	var serials:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():serials.append(player.get_instance_id())
	var recording:=AudioEffectRecord.new();AudioServer.add_bus_effect(0,recording);recording.set_recording_active(true)
	await create_timer(25.2).timeout
	recording.set_recording_active(false);var wave:AudioStreamWAV=recording.get_recording();var peak:=0.
	var duration:=0.
	if wave!=null:
		duration=wave.get_length();var pcm:=wave.data
		for i in range(pcm.size()/2):peak=maxf(peak,absf(float(pcm.decode_s16(i*2))/32768.))
		wave.save_to_wav(output+"/three_hundred_house_mix.wav")
	_check(duration>=24. and peak>.0001 and peak<.99,"actual three-hundred-house native mix covers a full 24-second loop and remains audible without clipping")
	var current:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():current.append(player.get_instance_id())
	_check(current==serials and current.size()==12 and demo.music._effects.size()==4,"full large-city music cycle preserves the original twelve long and four short voices")
	return {"duration":duration,"peak":peak}
