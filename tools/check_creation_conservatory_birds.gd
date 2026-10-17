extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/花房鸟点_2026-10-17"
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={"cases":[]}
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+18000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	_check(not demo.edit_pending() and not demo._edit_ui_pending,"latest geometry and habitat publication complete")
	await physics_frame;await process_frame
func _audio()->Array:
	var result:Array=[]
	for p:AudioStreamPlayer in demo.music._players.values():result.append([p.get_instance_id(),p.stream.get_instance_id()])
	for p:AudioStreamPlayer in demo.music._effects:result.append(p.get_instance_id())
	return result
func _landing(id:String,label:String)->void:
	var greenhouse:Dictionary=demo.town.house_roots[id].get_meta("conservatory",{})
	_check(not greenhouse.is_empty(),label+" has a production glasshouse")
	if greenhouse.is_empty():return
	var expected:=Vector3(greenhouse.center.x,float(greenhouse.floor_y)+float(greenhouse.spring)+float(greenhouse.rise)+.04,greenhouse.center.y)
	_check(demo.town.wildlife._perches.has(expected),label+" uses actual arch apex habitat")
	var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(expected+Vector3.UP*.3,expected-Vector3.UP*.2,1))
	_check(not hit.is_empty() and str(hit.collider.get_meta("house_id",""))==id and absf(expected.y-hit.position.y-.04)<.002,label+" perch sits four centimetres above real glass collision")
	var landed:=false;var installed:=false
	# The Z fixture lies 40m from the old flock; allow ordinary takeoff,
	# travel and later perch selection rather than teleport a bird to it.
	for tick in range(2400):
		demo.town.wildlife._process(.05)
		for i in range(demo.town.wildlife._birds.size()):
			var bird:Dictionary=demo.town.wildlife._birds[i]
			if str(bird.mode)=="perched" and Vector3(bird.pos).distance_to(expected)<.001:
				landed=true
				installed=demo.town.wildlife.birds_mm.multimesh.get_instance_transform(i).origin.distance_to(expected)<.001
		if landed:break
	_check(landed and installed,label+" flying bird actually lands and uploads the apex transform")
	facts.cases.append({"label":label,"axis":greenhouse.axis,"perch":expected,"collision_y":hit.get("position",Vector3.ZERO),"landed":landed})
	demo.focus=Vector3(expected.x,expected.y-.8,expected.z);demo.zoom=6.5;demo.pitch=.64;demo.yaw=.62;demo._update_camera()
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"actual GL landed bird capture: "+label)
func _run()->void:
	if DisplayServer.get_name()=="headless":push_error("Requires actual GL viewport");quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(1440,900);Engine.max_fps=180
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false);demo.ui_layer.visible=false
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var restored:Dictionary=demo.state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/花房河湾样例.json")));_check(restored.ok,"conservatory sample restores")
	demo._after_edit(restored,"history")
	await _wait()
	var deadline:=Time.get_ticks_msec()+18000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline:await process_frame
	var audio:=_audio();var clock:float=demo.music._playback_clock()
	demo.set_process(false);demo.town.wildlife.set_process(false)
	var target_id:=""
	for id:String in demo.town.house_roots:
		var greenhouse:Dictionary=demo.town.house_roots[id].get_meta("conservatory",{})
		if not greenhouse.is_empty():
			target_id=id;break
	_check(not target_id.is_empty(),"actual glasshouse has a derived roof record")
	var greenhouse:Dictionary=demo.town.house_roots[target_id].get_meta("conservatory",{})
	var perch_ok:=false
	for perch:Vector3 in demo.town.wildlife._perches:
		if perch.distance_to(Vector3(greenhouse.center.x,float(greenhouse.floor_y)+float(greenhouse.spring)+float(greenhouse.rise)+0.04,greenhouse.center.y))<0.001: perch_ok=true
	_check(perch_ok,"rooftop bird perch uses the real glasshouse arch apex")
	_check(demo.town.wildlife.birds_mm.multimesh.visible_instance_count>0,"glasshouse city keeps adaptive rooftop bird flock")
	demo.focus=Vector3(float(greenhouse.center.x),1.8,float(greenhouse.center.y));demo.zoom=10;demo.pitch=.64;demo.yaw=.62;demo._update_camera()
	for ignored in range(12):await process_frame
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/01_玻璃花房屋顶鸟点.png")==OK,"actual GL conservatory bird view saved")
	var authored:Dictionary=demo.state.snapshot()
	await _landing(target_id,"02_横向花房实际落鸟")
	_check(demo.state.snapshot()==authored,"bird landing leaves authored city and earned history unchanged")
	# Build the perpendicular form with public transactions, without seeded
	# habitat records. It also exercises removal/undo using production publish.
	var city:=State.new();city.initialize()
	var built:Dictionary=city.add_house(Vector2(-25,20));var id:String=str(built.get("house_id",""))
	_check(built.ok and city.add_cell(id,0,1,0).ok and city.add_cell(id,0,0,1,"terrace").ok and city.add_cell(id,0,1,1,"terrace").ok,"public construction makes supported perpendicular terrace pair")
	var loaded:Dictionary=demo.state.restore(city.snapshot());demo._after_edit(loaded,"history");demo.set_process(true);await _wait();demo.set_process(false)
	await _landing(id,"03_纵向花房实际落鸟")
	var before_birds:int=demo.town.wildlife._birds.size();var bird_mesh:int=demo.town.wildlife.birds_mm.multimesh.get_instance_id()
	var old_perch:Vector3=facts.cases[-1].perch
	var plan:Dictionary=demo.town.house_roots[id].get_meta("conservatory")
	var removed:Dictionary=demo.state.remove_cell(id,str(plan.cell_ids[-1]));demo._after_edit(removed,"erase");demo.set_process(true);await _wait();demo.set_process(false)
	var retargeted:=true
	for bird:Dictionary in demo.town.wildlife._birds:retargeted=retargeted and Vector3(bird.target)!=old_perch
	_check(removed.ok and demo.town.house_roots[id].get_meta("conservatory",{}).is_empty() and not demo.town.wildlife._perches.has(old_perch) and retargeted,"removing terrace retracts glass roof and all stale bird targets")
	demo._after_edit(demo.state.undo(),"history");demo.set_process(true);await _wait();demo.set_process(false)
	_check(demo.town.wildlife._perches.has(old_perch) and demo.town.wildlife._birds.size()==before_birds and demo.town.wildlife.birds_mm.multimesh.get_instance_id()==bird_mesh,"undo restores exact perch without replacing bird batch or adding birds")
	_check(_audio()==audio and demo.music._playback_clock()>clock,"edits and flight preserve nine long streams four short slots and advancing clock")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal save bytes preserved")
	var report={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"scope":"Actual GL/collision and production landing state machine at accelerated .05s ticks; not real-time flight performance evidence"}
	FileAccess.open(OUT+"/结果.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("CONSERVATORY_BIRDS ",JSON.stringify(report))
	demo.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for p:AudioStreamPlayer in demo.music._players.values():p.stop()
	for p:AudioStreamPlayer in demo.music._effects:p.stop()
	for p:AudioStreamPlayer in demo.ambience.players.values():p.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout;quit(0 if failures.is_empty() else 1)
