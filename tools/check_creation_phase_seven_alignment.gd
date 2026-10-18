extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const Fixture=preload("res://tools/fixtures/city_creation_quality_fixture.gd")
const SignatureFixture=preload("res://tests/test_city_creation_signatures.gd")
const OUT="res://验证记录/品质与首批地标_2026-10-18"
var demo
var checks: Array=[]
var failures: Array[String]=[]
var facts: Dictionary={}
func _initialize()->void:_run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _wait()->void:
	var end:=Time.get_ticks_msec()+30000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<end:await process_frame
	await process_frame;await process_frame
func _camera(at: Vector3,z: float,yaw_value: float=.6)->void:
	demo.focus=at;demo.zoom=z;demo.yaw=yaw_value;demo.pitch=.8;demo._update_camera();demo.town.clear_preview()
func _capture(name_value: String)->void:
	await process_frame;await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+name_value+".png")
func _click(point: Vector2)->void:
	var motion:=InputEventMouseMotion.new();motion.position=point;motion.global_position=point;root.push_input(motion);await process_frame
	for down: bool in [true,false]:
		var event:=InputEventMouseButton.new();event.position=point;event.global_position=point;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;root.push_input(event);await process_frame
func _sim_until(condition: Callable,seconds: float=700.0)->bool:
	for i in range(ceili(seconds/.1)):
		if condition.call():return true
		demo.life._process(.1)
		if i%80==0:await process_frame
	return false
func _place(kind: String,at: Vector2)->String:
	_camera(Vector3(at.x,.7,at.y),24)
	demo.signatures.open_panel();await process_frame;await process_frame
	var control: Button=demo.signatures.buttons[kind]
	await _click(control.get_global_rect().get_center())
	_check(demo.signatures.placing==kind,"actual catalog click starts "+kind+" placement")
	var point: Vector2=demo.camera.unproject_position(Vector3(at.x,demo.state.ground_height(at),at.y))
	var before: Dictionary=demo.state.snapshot()
	var motion:=InputEventMouseMotion.new();motion.position=point;motion.global_position=point;root.push_input(motion);await process_frame
	_check(demo.state.snapshot()==before and demo.candidate.get("signature","")==kind and demo.candidate.get("valid",false),"visible full landmark ghost is a read-only valid preview for "+kind)
	await _click(point);await _wait()
	for house: Dictionary in demo.state.houses:
		if house.get("signature","")==kind:return str(house.id)
	return ""
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var fixture: Dictionary=Fixture.build(self);facts.lifecycle=fixture.facts
	_check(fixture.facts.final_tier==5 and fixture.facts.before_relay_tier==4 and fixture.facts.save_valid,"real bread tea atelier deliveries and completed relay evolve one home through all five tiers")
	var snapshot: Dictionary=fixture.city.snapshot();fixture.life.free()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false)
	_check(demo.state.restore(snapshot).ok,"production scene restores evolved city with full service history")
	demo.life.setup(demo.state);demo.life.restore_checkpoint(demo.state.journey_checkpoint)
	demo._after_edit({"ok":true,"message":"fixture"},"history");await _wait()
	var deadline:=Time.get_ticks_msec()+30000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline:await process_frame
	_camera(Vector3(-8,.7,-1),24)
	demo.ui_layer.visible=false;await _capture("01_five_tier_neighborhood")
	var decor: Node3D=demo.town.quality_visual.roots.get("h1")
	_check(decor!=null and decor.get_meta("level_tier")==5 and decor.get_meta("features",[]).has("golden_weather_vane") and decor.get_meta("features",[]).has("painted_rose_window") and decor.get_meta("features",[]).has("bronze_chime"),"published tier-five home carries independent welcome flowers chime gallery gold vane and rose-window geometry")
	var changes: Array=[]
	demo.life.quality_callback=func(events: Array)->void:changes.append_array(events);demo._on_quality_changed(events)
	var points: Array[Vector2]=[Vector2(-20,-8.45),Vector2(-11,-8.45)]
	demo._after_edit(demo.state.add_road(points),"road");await _wait()
	var house_root_id: int=demo.town.house_roots.h7.get_instance_id();var ground: int=demo.town.terrain_surface.get_instance_id();var revision: int=demo.state.revision
	var generation: int=demo.town.budget_rebuild.generation
	_camera(Vector3(-20,.7,-10),13)
	_check(await _sim_until(func():return demo.state.level_tier("h7")>=2),"newly connected resident actually buys bread and upgrades during normal Life ticks")
	var emitting:=false
	for effect: CPUParticles3D in demo.town.quality_visual.particles:
		if effect.emitting:emitting=true
	var harp:=false
	for player: AudioStreamPlayer in demo.music._effects:
		for bar in range(8):
			if player.playing and player.stream==demo.music._edit_streams.get("quality_upgrade_%d"%bar):harp=true
	_check(not changes.is_empty() and emitting and harp,"actual quality callback emits bounded golden particles and a real ascending harp PCM")
	_check(demo.town.house_roots.h7.get_instance_id()==house_root_id and demo.town.terrain_surface.get_instance_id()==ground and demo.town.budget_rebuild.generation==generation and demo.state.revision==revision,"service promotion preserves house collision root terrain and complete network publication generation")
	await _capture("02_real_upgrade_feedback")
	_check(demo.music.audio_report.quality_upgrade_notes.size()==40 and demo.music.audio_report.signature_notes.size()==32 and demo.music.audio_report.mix_peaks.absolute_stereo_with_four_short_voices<1.0,"actual new harp quartet and quality banks remain inside conservative fixed-pool stereo peak bound")
	demo.ui_layer.visible=true;demo.signatures.open_panel();await _capture("03_unlocked_signature_catalog")
	var keep:=await _place("bell_keep",Vector2(-18,0))
	_check(not keep.is_empty() and demo.state.signature_bonuses().walking==1.15 and demo.town.house_roots[keep].get_meta("landmark_bell_asset","")==demo.town.Tower.BELL_PATH,"placed keep owns four real storeys Foundation bronze bell and exact global walking buff")
	if keep.is_empty():await _finish(personal);return
	var ids: Array=[]
	for cell: Dictionary in demo.state.houses[demo.state._house_index(keep)].cells:ids.append(str(cell.id))
	demo.selected_house=keep;demo.select_tool(4);demo.signatures._move_selected()
	_camera(Vector3(-22,.7,0),22)
	var point: Vector2=demo.camera.unproject_position(Vector3(-22,demo.state.ground_height(Vector2(-22,0)),0))
	await _click(point);await _wait()
	var moved: Dictionary=demo.state.houses[demo.state._house_index(keep)]
	var moved_ids: Array=[]
	for cell: Dictionary in moved.cells:moved_ids.append(str(cell.id))
	_check(moved.origin==[-22.,0.] and moved_ids==ids,"actual move mode repositions keep while preserving all room identities")
	demo._after_edit(demo.state.undo(),"history");await _wait()
	_camera(Vector3(-18,2.4,0),15);demo.ui_layer.visible=false;await _capture("04_olden_bell_keep")
	var mill_at: Vector2=SignatureFixture.mill_site(demo.state)
	# Keep one ordinary two-room inland oven beside the blessed seed bakery,
	# so the real scene verifies the specified two-to-three-loaf case as well.
	var plain: Dictionary=demo.state.add_house(Vector2(-28,-10))
	_check(plain.ok and demo.state.add_cell(plain.house_id,0,0,1).ok and demo.state.set_house_role(plain.house_id,"bakery").ok,"ordinary inland bakery is authored through normal room and role tools")
	points=[Vector2(-28,-8.45),Vector2(-20,-8.45)]
	demo._after_edit(demo.state.add_road(points),"road");await _wait()
	_check(demo.state.bakery_batch_size(plain.house_id)==2 and demo.state.site_production_multiplier(plain.house_id)==1.,"ordinary two-room inland bakery starts at exactly two loaves and base baking speed")
	demo.ui_layer.visible=true
	var before_batch: int=demo.state.bakery_batch_size("h2")
	var mill:=await _place("watermill",mill_at)
	_check(not mill.is_empty() and demo.state.bakery_batch_size("h2")==before_batch+1,"actual mill placement applies shared flour bonus to the original bakery")
	_check(demo.state.bakery_batch_size(plain.house_id)==3 and demo.state.site_production_multiplier(plain.house_id)==1.25,"actual placed mill raises ordinary oven to three loaves and twenty percent shorter bake")
	if mill.is_empty():await _finish(personal);return
	var wheel: Dictionary=demo.town.house_roots[mill].get_meta("waterwheel",{})
	var rotor: Node3D=demo.town.house_roots[mill].get_node("WaterwheelAxle/Rotor")
	var angle:=rotor.rotation.z
	await create_timer(.18).timeout
	_check(absf(rotor.rotation.z-angle)>.05 and rotor.get_child_count()<=3 and wheel.paddles==16,"actual sixteen-paddle wheel rotates with independently batched moving geometry")
	_camera(Vector3(mill_at.x+.9,.7,mill_at.y+.9),12,atan2(wheel.side.x,wheel.side.y)+.30)
	demo.ui_layer.visible=false;await _capture("05_working_waterwheel")
	deadline=Time.get_ticks_msec()+6500
	var wheel_cue: Dictionary={}
	while Time.get_ticks_msec()<deadline:
		await process_frame
		for cue: Dictionary in demo.music.signature_music_report():
			if cue.kind=="waterwheel" and cue.source_id==mill and cue.audible:wheel_cue=cue
		if not wheel_cue.is_empty():break
	_check(not wheel_cue.is_empty(),"visible turning mill plays an actual bounded wooden waterwheel accent")
	facts.wheel_cue=wheel_cue
	var entry: Dictionary=demo.state.house_entrances(mill)[0]
	var p: Vector2=entry.at;var outward:=Vector2(entry.side)
	points=[p,p+outward*1.5,Vector2(-11,p.y+outward.y*1.5),Vector2(-11,-8)]
	demo._after_edit(demo.state.add_road(points),"road");await _wait()
	_check(await _sim_until(func():return int(demo.state.bakery_status(mill).produced)>0),"new mill's real household worker walks to the connected oven and bakes an augmented batch")
	_check(await _sim_until(func():return int(demo.state.bakery_status(plain.house_id).produced)>=3),"actual household baker attends inland oven and completes real three-loaf batch")
	facts.mill={"position":mill_at,"wheel":wheel,"supply":demo.life.bakery_status(mill)}
	facts.inland_bakery=demo.life.bakery_status(plain.house_id)
	demo.ui_layer.visible=true
	var academy:=await _place("music_academy",Vector2(18,-8))
	_check(not academy.is_empty() and demo.town.house_roots[academy].get_meta("domes",[]).size()==1 and demo.town.house_roots[academy].get_meta("academy",{}).get("radius")==38.0,"free academy publishes octagonal red dome colonnades and distinct performance coverage")
	if academy.is_empty():await _finish(personal);return
	points=[Vector2(15,9),Vector2(18,9),Vector2(18,-4.65)]
	demo._after_edit(demo.state.add_road(points),"road");await _wait()
	_camera(Vector3(19,.7,-7),25)
	var invited: Dictionary=demo.life.invite_concert(academy)
	facts.invitation={"result":invited,"participants":demo.life._concert.get("participants",[]).duplicate(),"academy_id":academy}
	_check(invited.ok and not demo.life._concert.get("participants",[]).has("h7") and demo.life._concert.get("participants",[]).has("h1"),"actual academy invitation reaches connected twenty-six-meter home and excludes household beyond thirty-eight metres")
	_check(demo.life.relay_status().active and demo.life.relay_status().venue_ids[0]==academy and demo.life.relay_status().total>=3,"one ordinary academy invitation automatically schedules all reachable venues")
	var can_start:=await _sim_until(func():return demo.life.concert_status().arrived==demo.life.concert_status().invited,250)
	_check(can_start,"real academy audience follows roads and arrives at its actual entrance")
	demo.life.set_process(true)
	deadline=Time.get_ticks_msec()+8000
	var quartet: Dictionary={}
	while Time.get_ticks_msec()<deadline:
		await process_frame
		for cue: Dictionary in demo.music.signature_music_report():
			if cue.kind=="quartet" and cue.audible:quartet=cue
		if not quartet.is_empty():break
	_check(not quartet.is_empty() and quartet.source_id==academy,"actual gathered academy performance plays original four-part chamber-string PCM")
	demo.ui_layer.visible=false;await _capture("06_academy_quartet_performance")
	facts.quartet=quartet
	var completed: int=demo.state.life_progress.concerts
	deadline=Time.get_ticks_msec()+28000
	while int(demo.state.life_progress.concerts)==completed and Time.get_ticks_msec()<deadline:await process_frame
	_check(int(demo.state.life_progress.concerts)>completed,"academy performance finishes a real twenty-four-second transport with permanent participant history")
	demo.life.set_process(false)
	_check(demo.music._players.size()==demo.music.STEMS.size() and demo.music._effects.size()==4 and demo.music.spatial.report().bus_count==6,"quality flourishes upgrades wheel and quartet retain current long four short six-bus ownership")
	_check(demo.life.relay_status().active and demo.life.relay_status().index==1 and demo.life.concert_status().phase=="gathering","finished academy naturally hands invitation to next real venue")
	_camera(Vector3(-8,.7,-6),10,.75)
	while demo.light_phase!=1:demo._toggle_light()
	await _capture("07_quality_twilight")
	_check(float(demo.town.resonance.rigs.h1.material.get_shader_parameter("night_glow"))>.14,"earned tier-two-or-better windows glow brighter in actual twilight")
	demo._toggle_light();await _capture("08_quality_five_night")
	_check(float(demo.town.resonance.rigs.h1.material.get_shader_parameter("night_glow"))>.35,"earned tier-two-or-better windows glow brighter in actual night")
	var features: Array=demo.town.quality_visual.roots.h7.get_meta("features",[])
	_check(features.has("welcome_stones") and features.has("door_flowerpot") and features.has("warm_porch_lamp") and not features.has("flowerbox_shutters"),"actual tier-two home owns fan apron flowerpot and porch lamp; shutter box starts at tier three")
	await _finish(personal)
func _finish(personal: PackedByteArray)->void:
	_check(demo.state.set_journey_checkpoint(demo.life.checkpoint()).ok and demo.state._validate_snapshot(demo.state.snapshot()).ok,"evolved city and three functional landmarks save as a consistent live checkpoint")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"all service and placement verification preserves personal save bytes")
	var frames: Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(120):
		await process_frame;var now:=Time.get_ticks_usec();frames.append((now-last)/1000.0);last=now
	frames.sort();facts.performance={"p95_ms":frames[113],"max_ms":frames[-1],"houses":demo.state.houses.size()}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts},"\t",true,true))
	print("PHASE_SEVEN_LIVE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks.size(),"failures":failures,"performance":facts.performance}))
	demo.queue_free();await process_frame;await create_timer(.2).timeout;quit(0 if failures.is_empty() else 1)
