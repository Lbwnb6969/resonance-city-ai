extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const Fixture=preload("res://tools/fixtures/city_creation_modern_fixture.gd")
const OUT="res://验证记录/四库路线_2026-10-17/Phase9"
var demo
var checks:Array=[]
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _wait()->void:
	var end:=Time.get_ticks_msec()+30000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<end:await process_frame
	await physics_frame;await process_frame
func _capture(label:String)->void:
	await process_frame;await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+label+".png")
func _run()->void:
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var city:=Fixture.architecture()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false);demo.ui_layer.visible=false
	demo._after_edit(demo.state.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))),"history");await _wait()
	demo.focus=Vector3(-10,2,-2);demo.zoom=19;demo.yaw=.3;demo.pitch=.63;demo._update_camera();demo.town.clear_preview()
	var house:Node3D=demo.town.buildings.get_node("h1")
	var roofs:Array=house.get_meta("modern_roofs",[]);var bridges:Array=house.get_meta("skybridges",[])
	_check(roofs.size()==1 and roofs[0].lawn and roofs[0].cantilever>.2 and bridges.size()==1 and bridges[0].to_house=="h2","production modern building owns planted cantilever roof and one actual adjacent glass garden span")
	var glass:=0
	for node:Node in house.find_children("*","Node",true,false):
		if node.has_meta("modern_glass"):glass+=1
	_check(glass>=12 and demo.town.buildings.get_node("h4").get_meta("era_theme")=="renaissance" and demo.town.buildings.get_node("h3").get_meta("era_theme")=="clockwork","three-story modern curtain wall and planted facades coexist with renaissance and clockwork silhouettes")
	var bridge:Dictionary=bridges[0];var mid:Vector2=(bridge.a+bridge.b)*.5
	var ray:=PhysicsRayQueryParameters3D.create(Vector3(mid.x,10,mid.y),Vector3(mid.x,0,mid.y),1)
	var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(ray)
	_check(not hit.is_empty() and hit.collider.get_meta("skybridge",false) and hit.collider.get_meta("house_id")=="h1" and hit.collider.get_meta("cell_id")==bridge.from_cell and absf(float(hit.position.y)-bridge.floor_y-.07)<.01,"actual skybridge floor picking retains original high room identity")
	await _capture("01_modern_white_glass_roof_gardens_and_skybridge")
	demo._after_edit(demo.state.set_house_palette("h1",2),"palette");await _wait()
	_check(demo.town.buildings.get_node("h1").get_meta("house_color_cache").index==2 and demo.town.buildings.get_node("h1").get_meta("skybridges")==bridges,"modern recolor updates installed palettes while preserving derived glass span")
	demo._after_edit(demo.state.set_house_era("h2","pastoral"),"history");await _wait()
	_check(demo.town.buildings.get_node("h1").get_meta("skybridges").is_empty(),"actual neighboring era edit invalidates and removes previously installed skybridge")
	demo._after_edit(demo.state.undo(),"history");await _wait()
	_check(demo.town.buildings.get_node("h1").get_meta("skybridges")==bridges,"production construction undo rebuilds identical glass bridge with original room IDs")
	while demo.light_phase!=2:demo._toggle_light()
	_check(float(demo.town.conservatory.clockwork_glass_material.get_shader_parameter("evening"))==1.,"modern curtain walls and bridge share actual night updates through owned warm glass material")
	await _capture("02_modern_ecology_warm_night")
	var frames:Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(180):
		await process_frame
		var now:=Time.get_ticks_usec();frames.append((now-last)/1000.);last=now
	frames.sort();var p95:float=frames[int(frames.size()*.95)]
	_check(p95<12.,"fifty-building actual modern scene maintains sub-twelve-millisecond steady p95")
	var deadline:=Time.get_ticks_msec()+30000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline:await process_frame
	var bank:Dictionary=demo.music.audio_report
	var notes:Array=bank.theme_notes.get("modern_symphony",[]);var timbres:Dictionary={}
	for note:Dictionary in notes:timbres[note.timbre]=true
	_check(notes.size()==56 and timbres.has("felt_piano") and timbres.has("warm_pad") and timbres.has("vibraphone") and timbres.has("strings") and bank.stem_count==12 and demo.music._effects.size()==4,"actual twelfth twenty-four-second PCM renders fifty-six felt-piano pad vibraphone and chamber-string events within fixed pool")
	var modern:Dictionary=demo.music.modern_music_report()
	_check(modern.weight>0. and demo.music._players.modern_symphony.playing and demo.music._players.modern_symphony.volume_linear>0. and float(bank.mix_peaks.absolute_stereo_with_four_short_voices)<1.,"current visible modern buildings activate real bounded ambient symphonic PCM")
	demo.focus=Vector3(31,1,30);demo.zoom=7;demo._update_camera();await create_timer(.3).timeout
	_check(demo.music.modern_music_report().weight==0. and demo.music._players.modern_symphony.volume_linear==0.,"modern ordinary music becomes exactly silent outside camera acoustic core")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated modern architecture validation preserves personal save bytes")
	var report:Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"roofs":roofs,"bridges":bridges,"frame_p95_ms":p95,"frame_max_ms":frames[-1],"modern":modern,"theme_notes":notes,"mix_peaks":bank.mix_peaks}
	FileAccess.open(OUT+"/architecture.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("MODERN_ARCHITECTURE ",JSON.stringify({"ok":report.ok,"count":checks.size(),"failures":failures,"frame_p95_ms":p95}))
	demo.queue_free();await process_frame;await create_timer(.1).timeout;quit(0 if failures.is_empty() else 1)
