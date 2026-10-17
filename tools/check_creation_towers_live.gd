extends SceneTree
## One real-scene check of topology, source geometry, picking, history and PCM.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const Music = preload("res://scripts/audio/city_creation_music.gd")
const Towers = preload("res://scripts/world/city_creation_towers.gd")
const Context = preload("res://scripts/visual/city_creation_building_context.gd")
const OUTPUT = "res://验证记录/钟楼地标_2026-10-16"
var demo: Node3D
var checks := 0
var failures: Array[String] = []
var measurements: Array[Dictionary] = []
var audio: Dictionary = {}
var concert: Dictionary = {}

func _initialize() -> void: _run.call_deferred()
func _check(ok: bool, label: String) -> void:
	checks+=1
	if not ok:
		failures.append(label)
		push_error(label)
func _stack(id: String, at: Vector2, count: int) -> Dictionary:
	var cells: Array = []
	for level in range(count): cells.append({"id":id+str(level),"x":0,"z":0,"level":level,"kind":"room"})
	return {"id":id,"origin":[at.x,at.y],"cells":cells}
func _topology() -> void:
	var tower := _stack("a",Vector2.ZERO,3)
	_check(Towers.derive([_stack("a",Vector2.ZERO,2)]).a.is_empty(),"two storeys retain an ordinary roof")
	_check(Towers.derive([tower]).a.size()==1 and Towers.derive([tower]).a[0].level==2,"exactly the third storey derives one crown")
	var four := _stack("a",Vector2.ZERO,4)
	_check(Towers.derive([four]).a.size()==1 and Towers.derive([four]).a[0].level==3,"raising a tower moves the crown to the new actual top")
	var terrace := tower.duplicate(true)
	terrace.cells[-1].kind="terrace"
	_check(Towers.derive([terrace]).a.is_empty(),"top terraces stay open")
	var broken := tower.duplicate(true)
	broken.cells.remove_at(1)
	_check(Towers.derive([broken]).a.is_empty(),"an unsupported high cell never grants a crown")
	broken=tower.duplicate(true)
	broken.cells[1].kind="terrace"
	_check(Towers.derive([broken]).a.is_empty(),"terraces do not count as room support")
	var other := _stack("b",Vector2(1.8,0),3)
	_check(Towers.derive([tower,other]).a.is_empty() and Towers.derive([tower,other]).b.is_empty(),"same-level cross-house row keeps its joined roof")
	other.origin=[2.1,0.0]
	_check(Towers.derive([tower,other]).a.is_empty(),"roof-only micro-gap is not mistaken for a lone tower")
	other.origin=[1.9,0.7]
	_check(Towers.derive([tower,other]).a.is_empty(),"freely offset facade contact also blocks the crown")
	var context := Context.new()
	context.prepare([tower])
	var signature: Array = context.signature("a").duplicate(true)
	context.prepare([tower,other])
	_check(context.signature("a")!=signature and context.tower_cells("a").is_empty(),"off-axis blockers invalidate the existing house fingerprint")
	other.origin=[3.0,0.7]
	_check(Towers.derive([tower,other]).a.size()==1,"distant neighbors leave actual crown clearance")
	other=_stack("b",Vector2(1.8,0),2)
	_check(Towers.derive([tower,other]).a.size()==1,"lower neighbors do not hide a real projecting tower")
	_check(Towers.derive([_stack("a",Vector2(-0.001,0),3),_stack("b",Vector2(2.1509,0),3)]).a.is_empty(),"clearance epsilon remains covered across spatial bucket boundaries")
	var before := tower.duplicate(true)
	Towers.derive([tower,other])
	_check(tower==before,"derived landmarks never mutate authored cells")
func _wait_edit() -> void:
	var deadline := Time.get_ticks_msec()+12000
	while demo.edit_pending() and Time.get_ticks_msec()<deadline: await process_frame
	await physics_frame
	await process_frame
	_check(not demo.edit_pending(),"geometry and collision publish the latest edit")
func _click(at: Vector3) -> void:
	var screen: Vector2=demo.camera.unproject_position(at)
	var motion:=InputEventMouseMotion.new()
	motion.position=screen
	motion.global_position=screen
	root.push_input(motion)
	await process_frame
	for pressed: bool in [true,false]:
		var event:=InputEventMouseButton.new()
		event.position=screen
		event.global_position=screen
		event.button_index=MOUSE_BUTTON_LEFT
		event.pressed=pressed
		root.push_input(event)
		await process_frame
	await _wait_edit()
func _key(code: int, control: bool=true) -> void:
	for pressed: bool in [true,false]:
		var event:=InputEventKey.new()
		event.keycode=code
		event.ctrl_pressed=control
		event.pressed=pressed
		root.push_input(event)
		await process_frame
	await _wait_edit()
func _capture(label: String, focus: Vector3, zoom: float, yaw: float=1.0, pitch: float=0.64) -> void:
	demo.focus=focus
	demo.zoom=zoom
	demo.yaw=yaw
	demo.pitch=pitch
	demo._update_camera()
	for frame in range(35): await process_frame
	var frames: Array[float]=[]
	var previous:=Time.get_ticks_usec()
	for frame in range(120):
		await process_frame
		var now:=Time.get_ticks_usec()
		frames.append(float(now-previous)/1000.0)
		previous=now
	frames.sort()
	measurements.append({"view":label,"p95_ms":frames[113],"max_ms":frames[-1],"draw_calls":Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME)})
	if DisplayServer.get_name()!="headless": root.get_texture().get_image().save_png(OUTPUT+"/"+label+".png")
func _count() -> int:
	return demo.town.building_context.tower_cells("h1").size()
func _identity() -> Array:
	var result: Array=[]
	for player: AudioStreamPlayer in demo.music._players.values(): result.append([player.get_instance_id(),player.stream.get_instance_id()])
	for player: AudioStreamPlayer in demo.music._effects: result.append(player.get_instance_id())
	return result
func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	_topology()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900)
	demo=Scene.instantiate()
	demo.persistence=false
	root.add_child(demo)
	demo.life.set_process(false)
	demo.music.set_muted(true)
	demo.ui_layer.visible=false
	var deadline:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(not demo.music.audio_report.is_empty(),"nine-loop worker bank loads in the production scene")
	var identity:=_identity()
	var result: Dictionary=demo.state.add_cell("h1",0,0,1)
	_check(result.ok,"real room supplies the second storey")
	demo._after_edit(result,"room")
	await _wait_edit()
	_check(_count()==0,"second storey still has its normal roof")
	await _capture("01_两层小屋",Vector3(-8,2.9,-6),12.0)
	demo.select_tool(0)
	await _click(Vector3(-8,3.65,-6))
	_check(_count()==1 and demo.music.tower_count()==1,"actual roof click creates a third-storey landmark")
	var authored: Dictionary=demo.state.snapshot()
	var tower_cells: Array=demo.town.house_roots.h1.get_meta("tower_cells",[])
	_check(tower_cells.size()==1,"published house carries one actual crown geometry record")
	var roof_patches: Array=demo.town.house_roots.h1.get_meta("roof_patches",[])
	_check(not roof_patches.any(func(patch:Dictionary)->bool:return str(patch.cell_id)==str(tower_cells[0].cell_id)),"ordinary roof triangles are removed from the crowned cell")
	await _capture("02_三层钟楼",Vector3(-8,3.6,-6),12.0)
	await _capture("05_悬钟近景",Vector3(-8,5.65,-6),5.0,1.0,0.27)
	await _capture("03_河湾地标",Vector3(-3,1.9,0),28.0,0.62)
	demo.ui_layer.visible=true
	await _capture("04_建设提示",Vector3(-8,3.6,-6),15.0)
	demo.ui_layer.visible=false
	# The hit must be the visible cap above the old room picking box.
	var ray:=PhysicsRayQueryParameters3D.create(Vector3(-7.8,10,-6),Vector3(-7.8,0,-6),1)
	var hit: Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(ray)
	_check(not hit.is_empty() and str(hit.collider.get_meta("house_id",""))=="h1" and float(hit.position.y)>6.0,"actual pointed roof triangles are pickable with the original house identity")
	demo.focus=Vector3(-8,3.6,-6)
	demo.zoom=12.0
	demo._update_camera()
	await _click(Vector3(-7.8,6.8,-6))
	var rooms: Array=demo.town._house_record("h1").cells
	_check(rooms.filter(func(cell:Dictionary)->bool:return int(cell.level)==3).size()==1 and _count()==1,"clicking the visible pointed cap grows a fourth real room and moves one crown")
	await _key(KEY_Z)
	_check(demo.state.houses==authored.houses and _count()==1,"real Ctrl+Z restores the third-storey authored city and crown")
	await _key(KEY_Z)
	_check(_count()==0 and demo.music.tower_count()==0,"undo below three storeys removes both geometry and musical eligibility")
	await _key(KEY_Y)
	_check(_count()==1 and demo.music.tower_count()==1,"real redo restores one derived crown without an extra room")
	# Force the existing budget path with a real extra segment, not a second
	# renderer or fixture-only crown constructor.
	var road_points: Array[Vector2]=[Vector2(-14,-12),Vector2(-10,-12),Vector2(-6,-12)]
	var road: Dictionary=demo.state.add_road(road_points)
	_check(road.ok,"real road stroke enables background rebuild workload")
	demo._after_edit(road,"road")
	await _wait_edit()
	var previous_root: int=demo.town.house_roots.h1.get_instance_id()
	result=demo.state.add_cell("h1",0,0,3)
	demo._after_edit(result,"room")
	await _wait_edit()
	_check(demo.town.house_roots.h1.get_instance_id()!=previous_root and _count()==1 and demo.town.building_context.tower_cells("h1")[0].level==3,"budget worker and atomic publication move the same derived crown")
	await _key(KEY_Z)
	var path:=OUTPUT+"/临时作品.json"
	_check(demo.state.save_city(path).ok,"derived tower city saves without a new authored schema")
	var restored:=State.new()
	_check(restored.load_city(path).ok and restored.houses==demo.state.houses and Towers.derive(restored.houses).h1.size()==1,"load derives the same crown from original stable room records")
	demo.music.set_muted(false)
	demo.music.set_listener_focus(Vector2(-8,-6))
	var cue_count: int=demo.music.tower_music_report().cues
	deadline=Time.get_ticks_msec()+7500
	while int(demo.music.tower_music_report().cues)==cue_count and Time.get_ticks_msec()<deadline: await process_frame
	await process_frame
	var ringing: Dictionary=demo.music.tower_music_report()
	_check(bool(ringing.audible) and str(ringing.source_id)=="h1" and fposmod(demo.music._playback_clock(),6.0)<0.25,"one actual short-pool bell enters at the real six-second boundary")
	await process_frame
	_check(float(demo.town.resonance.rigs.h1.weight)>0.0,"ringing tower participates in its existing house response mesh")
	var node_count: int=demo.get_child_count()
	demo.music.set_listener_focus(Vector2(100,100))
	_check(not bool(demo.music.tower_music_report().audible) and not demo.music._tower_player.playing,"moving away stops the actual bell voice")
	demo.music.set_listener_focus(Vector2(-8,-6))
	demo.music.set_muted(true)
	_check(not bool(demo.music.tower_music_report().audible),"mute clears the actual transient bell")
	_check(_identity()==identity and demo.music.get_child_count()==13 and demo.get_child_count()==node_count,"all edits and bell cues retain nine loop and four effect player identities")
	await _concert()
	await _pcm()
	var after:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	_check(after==personal,"isolated scene and temporary save preserve personal work bytes")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"views":measurements,"ringing":ringing,"audio":audio,"concert":concert,"budget":demo.edit_budget_report()}
	FileAccess.open(OUTPUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true))
	print("TOWER_LIVE ",JSON.stringify(report))
	demo.queue_free()
	await process_frame
	quit(0 if failures.is_empty() else 1)

func _concert() -> void:
	demo.music.set_muted(false)
	demo.music.set_listener_focus(Vector2(-8,-6))
	demo.selected_house="h4"
	demo._invite_concert()
	_check(str(demo.life.concert_status().phase)=="gathering","normal invitation gathers real residents around the venue")
	for tick in range(4000):
		var status: Dictionary=demo.life.concert_status()
		if int(status.arrived)==int(status.invited): break
		demo.life._process(0.1)
	demo.life.set_process(true)
	var deadline:=Time.get_ticks_msec()+7500
	while str(demo.life.concert_status().phase)!="playing" and Time.get_ticks_msec()<deadline: await process_frame
	_check(str(demo.life.concert_status().phase)=="playing","tower household actually arrives before shared-clock performance")
	var count_before: int=demo.state.life_progress.concerts
	var started:=Time.get_ticks_usec()
	var seen: Array[Dictionary]=[]
	var last_cues: int=demo.music.tower_music_report().cues
	deadline=Time.get_ticks_msec()+28000
	while str(demo.life.concert_status().phase)=="playing" and Time.get_ticks_msec()<deadline:
		await process_frame
		var report: Dictionary=demo.music.tower_music_report()
		if bool(report.audible) and int(report.cues)>last_cues:
			last_cues=int(report.cues)
			seen.append({"tower":report,"source":demo.music.active_source(),"elapsed":demo.life.concert_status().elapsed})
	var duration:=float(Time.get_ticks_usec()-started)/1000.0
	_check(not seen.is_empty() and seen.all(func(row:Dictionary)->bool:return str(row.source.source_id)=="h1" or str(row.source.role)=="finale"),"actual tower bells enter only the household reply or participating finale")
	_check(not seen.is_empty() and seen.all(func(row:Dictionary)->bool:return absf(float(row.elapsed)-float(row.source.start))<0.10),"tower reply starts at its actual phrase opening, including audio-frame boundary offsets")
	_check(duration>=23800.0 and demo.state.life_progress.concerts==count_before+1 and str(demo.life.concert_status().phase)=="idle","complete actual 24-second performance finishes once with the tower present")
	concert={"duration_ms":duration,"tower_cues":seen}

func _pcm() -> void:
	var music:=Music.new()
	var city:=State.new()
	city.initialize()
	var long_house:=_stack("long",Vector2(-13,-14),1)
	long_house["role"]="residential"
	for z in range(1,11): long_house.cells.append({"id":"g"+str(z),"x":0,"z":z,"level":0,"kind":"room"})
	for level in [1,2]: long_house.cells.append({"id":"u"+str(level),"x":0,"z":10,"level":level,"kind":"room"})
	city.houses.assign([long_house])
	music.update_city(city)
	music.set_listener_focus(Vector2(-13,4))
	_check(music._tower_eligible("long"),"listening at a long house's far crown uses the actual tower position")
	music.set_listener_focus(Vector2(-13,-14))
	_check(not music._tower_eligible("long"),"a distant tower does not ring just because the house origin is near")
	var bank: Dictionary=music._render_bank()
	var source:=FileAccess.get_file_as_string("res://备份/钟楼地标前_20261016/原五主题音乐.gd").replace("\r\n","\n").replace("class_name CityCreationMusic\n","")
	var script:=GDScript.new()
	script.source_code=source
	_check(script.reload()==OK,"independent pre-change production music compiles")
	var baseline: Node=script.new()
	var original: Dictionary=baseline._render_bank()
	var unchanged: bool=bank.streams.size()==9
	for key: String in original.streams: unchanged=unchanged and original.streams[key].data==bank.streams[key].data
	for key: String in original.edits: unchanged=unchanged and original.edits[key].data==bank.edits[key].data
	_check(unchanged,"all nine long PCM loops and pre-existing effects remain byte-identical")
	var peaks: Dictionary={}
	var valid:=true
	for bar in range(8):
		var data: PackedByteArray=bank.edits["tower_bell_%d" % bar].data
		var peak:=0.0
		for index in range(data.size()/2): peak=maxf(peak,absf(float(data.decode_s16(index*2))/32768.0))
		peaks[bar]=peak
		valid=valid and data.size()==70560 and peak>0.03 and peak<0.2 and data.decode_s16(0)==0 and data.decode_s16(data.size()-2)==0
	_check(valid and int(bank.report.tower_pcm_bytes)==564480,"eight chord-local 1.6-second bells have nonzero PCM, clean endpoints and fixed 564,480-byte budget")
	_check(float(bank.report.mix_peaks.absolute_with_four_edit_voices)<0.8,"nine loops plus all four possible short voices retain conservative headroom")
	var samples:=PackedFloat32Array()
	samples.resize(Music.RATE*6)
	for frame in range(samples.size()):
		var value:=0.0
		for key: String in ["foundation","wood","air","terrace"]:
			value+=float(bank.streams[key].data.decode_s16(frame*2))/32768.0*db_to_linear(float({"foundation":-10,"wood":-12,"air":-18,"terrace":-26}[key]))
		if frame<Music.RATE*Music.TOWER_DURATION: value+=float(bank.edits.tower_bell_0.data.decode_s16(frame*2))/32768.0*db_to_linear(-10.0)
		samples[frame]=value
	_check(music._pcm_stream(samples,false).save_to_wav(OUTPUT+"/钟楼与暖庭_6秒.wav")==OK,"production bell with existing morning PCM exports an unnormalized listening preview")
	audio={"peaks":peaks,"additional_pcm_bytes":bank.report.tower_pcm_bytes,"mix":bank.report.mix_peaks,"existing_pcm_unchanged":unchanged,"preview":"actual production PCM offline mix, no normalization; not device capture"}
	baseline.free()
	music.free()
