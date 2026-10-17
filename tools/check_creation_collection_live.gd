extends SceneTree
## Real UI versions, temporary isolated library, fresh runtime restoration and
## disk corruption checks; never writes the user's active city or collection.
const Scene = preload("res://scenes/city_creation.tscn")
const Library = preload("res://scripts/world/city_creation_collection.gd")
const State = preload("res://scripts/world/city_creation_state.gd")
const OUTPUT = "res://验证记录/作品收藏_2026-10-16"
var demo: Node3D
var checks := 0
var failures: Array[String] = []
var facts: Dictionary = {}
var identity: Array = []

func _initialize() -> void: _run.call_deferred()
func _check(ok: bool, label: String) -> void:
	checks+=1
	if not ok:
		failures.append(label)
		push_error(label)
func _mouse(at: Vector2) -> void:
	var motion:=InputEventMouseMotion.new()
	motion.position=at
	motion.global_position=at
	root.push_input(motion)
	await process_frame
	for pressed: bool in [true,false]:
		var event:=InputEventMouseButton.new()
		event.position=at
		event.global_position=at
		event.button_index=MOUSE_BUTTON_LEFT
		event.pressed=pressed
		root.push_input(event)
		await process_frame
func _key(code: int, ctrl: bool=false) -> void:
	for pressed: bool in [true,false]:
		var event:=InputEventKey.new()
		event.keycode=code
		event.ctrl_pressed=ctrl
		event.pressed=pressed
		root.push_input(event)
		await process_frame
func _wait() -> void:
	var deadline:=Time.get_ticks_msec()+15000
	while (demo.gallery.busy or demo.edit_pending()) and Time.get_ticks_msec()<deadline: await process_frame
	await process_frame
	_check(not demo.gallery.busy and not demo.edit_pending(),"collection and edits finish before the next interaction")
func _capture(label: String) -> void:
	await process_frame
	await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUTPUT+"/"+label+".png")
func _identity() -> Array:
	var result: Array=[]
	for player: AudioStreamPlayer in demo.music._players.values(): result.append([player.get_instance_id(),player.stream.get_instance_id()])
	for player: AudioStreamPlayer in demo.music._effects: result.append(player.get_instance_id())
	return result
func _save(title: String) -> Dictionary:
	demo.gallery.panel.title_input.text=title
	await _mouse(demo.gallery.panel.save_button.get_global_rect().get_center())
	await _wait()
	var result: Dictionary=demo.gallery.library.read(demo.gallery.last_saved_id)
	_check(result.ok,"real name field and save button publish a readable complete work: "+demo.gallery.panel.status_label.text+" / "+str(result))
	if not result.ok:
		await _capture("失败_保存状态")
		quit(1)
	return result
func _open(id: String) -> void:
	var started:=Time.get_ticks_usec()
	await _mouse(demo.gallery.panel.open_buttons[id].get_global_rect().get_center())
	await _wait()
	if not facts.has("open_ms"): facts["open_ms"]=[]
	facts.open_ms.append(float(Time.get_ticks_usec()-started)/1000.0)
	_check(not demo.gallery.panel.visible and demo.gallery.last_opened_id==id,"actual card button opens the selected work")
	demo.life.set_process(false)
	await process_frame
func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900)
	demo=Scene.instantiate()
	demo.persistence=false
	# Repeat runs cannot inherit completed versions from a previous test.
	demo.collection_directory=OUTPUT+"/作品库_"+str(Time.get_ticks_usec())
	root.add_child(demo)
	demo.life.set_process(false)
	var deadline:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(not demo.music.audio_report.is_empty(),"production PCM bank ready")
	identity=_identity()
	await _mouse(demo.gallery_button.get_global_rect().get_center())
	_check(demo.gallery.panel.visible and demo.gallery.library.entries().items.is_empty(),"real collection button opens an empty isolated library")
	var original: Dictionary=demo.state.snapshot()
	await _mouse(Vector2(15,450))
	await _key(KEY_Z,true)
	_check(demo.state.snapshot()==original,"modal background and Ctrl+Z cannot edit the city behind the cards")
	var first: Dictionary=await _save("晨光 / 初稿")
	var first_bytes:=FileAccess.get_file_as_bytes(str(first.path))
	_check(first.world.houses==demo.state.houses and first.view.zoom==demo.zoom,"full authored city and camera accompany the real viewport cover")
	var listing: Dictionary=demo.gallery.library.entries()
	var cover:=Image.load_from_file(str(listing.items[0].cover_path))
	_check(cover.get_size()==Vector2i(480,300),"actual city preview has the fixed thumbnail dimensions")
	await _capture("01_第一份收藏")
	await _key(KEY_ESCAPE)
	_check(not demo.gallery.panel.visible,"Escape returns to city editing")
	# A real city edit remains available immediately after closing the modal.
	await _mouse(demo.camera.unproject_position(Vector3(-5.299,0.9,0)))
	await _wait()
	_check(demo.state.houses[2].cells.size()==first.world.houses[2].cells.size()+1,"closing the collection restores real exposed-wall building input")
	demo._toggle_light()
	demo.focus=Vector3(-7,2,-1)
	demo.zoom=17.0
	demo._update_camera()
	await _key(KEY_O,true)
	_check(demo.gallery.panel.visible,"Ctrl+O opens the same collection")
	var second: Dictionary=await _save("晨光 / 初稿")
	_check(second.id!=first.id and demo.gallery.library.entries().items.size()==2,"same-name collection creates another immutable version")
	_check(FileAccess.get_file_as_bytes(first.path)==first_bytes,"saving a new version keeps the first file byte-identical")
	await _capture("02_同名双版本")
	var before_open: Dictionary=demo.state.snapshot()
	await _open(str(first.id))
	var kept: Dictionary=demo.gallery.library.read(demo.gallery.last_auto_id)
	_check(kept.ok and kept.reason=="before_open" and kept.world.houses==before_open.houses,"switching cards first publishes a complete copy of the city being left")
	_check(demo.state.houses==first.world.houses and demo.state.roads==first.world.roads and demo.state.districts==first.world.districts,"loaded work restores its exact authored identity and geometry")
	_check(is_equal_approx(demo.zoom,float(first.view.zoom)) and not demo.evening,"saved camera and light return with the work")
	_check(demo.state.undo().ok==false,"loading a different work clears old construction history")
	_check(_identity()==identity and demo.music.get_child_count()==13,"work switches retain the same nine loop streams and four short players")
	_check(demo.get_children().filter(func(node:Node)->bool:return str(node.name)=="Town").size()==1 and demo.get_children().filter(func(node:Node)->bool:return str(node.name)=="StreetLife").size()==1,"previous city's geometry and residents leave the active scene on a work switch")
	await _mouse(demo.gallery_button.get_global_rect().get_center())
	await _capture("03_切换前自动留存")
	# The automatically retained version is itself a fully editable work.
	await _open(str(kept.id))
	_check(demo.state.houses==second.world.houses and demo.evening and is_equal_approx(demo.zoom,17.0),"automatic checkpoint card restores the exact city and view that was left")
	await _concert_checkpoint()
	await _integrity(first)
	await _mouse(demo.gallery_button.get_global_rect().get_center())
	await _capture("04_收藏与完整演出")
	root.size=Vector2i(1024,768)
	for frame in range(5): await process_frame
	_check(demo.gallery.panel.grid.columns==2 and demo.gallery.panel.panel.get_global_rect().end.x<=1024.0,"collection adapts to a 1024-pixel window with two scrollable columns")
	await _capture("05_小窗口收藏")
	root.size=Vector2i(1440,900)
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated collection and switching preserve personal active-city bytes")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"items":demo.gallery.library.entries().items,"audio_players":demo.music.get_child_count()}
	FileAccess.open(OUTPUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true))
	print("COLLECTION_LIVE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}))
	demo.queue_free()
	await process_frame
	quit(0 if failures.is_empty() else 1)

func _concert_checkpoint() -> void:
	demo.gallery.close_panel()
	demo.selected_house="h4"
	demo._invite_concert()
	for tick in range(4000):
		var status: Dictionary=demo.life.concert_status()
		if int(status.arrived)==int(status.invited): break
		demo.life._process(0.1)
	demo.life.set_process(true)
	var deadline:=Time.get_ticks_msec()+7500
	while str(demo.life.concert_status().phase)!="playing" and Time.get_ticks_msec()<deadline: await process_frame
	_check(str(demo.life.concert_status().phase)=="playing","real audience gathers before the checkpoint performance")
	deadline=Time.get_ticks_msec()+16000
	while float(demo.life.concert_status().elapsed)<12.2 and Time.get_ticks_msec()<deadline: await process_frame
	demo.life.set_process(false)
	await _mouse(demo.gallery_button.get_global_rect().get_center())
	var playing: Dictionary=await _save("午后演出 · 中场")
	var saved_elapsed: float=playing.world.journey_checkpoint.concert.elapsed
	var saved_people: Array=playing.world.journey_checkpoint.residents
	_check(saved_elapsed>=12.0 and saved_elapsed<15.0 and not saved_people.is_empty(),"work includes actual halfway performance and real resident checkpoint")
	await _open(str(playing.id))
	var resumed: Dictionary=demo.life.concert_status()
	_check(str(resumed.phase)=="playing" and absf(float(resumed.elapsed)-saved_elapsed)<0.10,"reopened performance resumes its saved elapsed time")
	var clock: float=demo.music._playback_clock()
	_check(absf(clock-saved_elapsed)<0.15 and _identity()==identity,"all existing PCM streams resume the saved concert phase together")
	var people: Array=demo.life.checkpoint().residents
	var positions_kept:=true
	for person: Dictionary in people:
		for previous: Dictionary in saved_people:
			if person.home_id==previous.home_id:
				positions_kept=positions_kept and Vector2(person.position[0],person.position[1]).distance_to(Vector2(previous.position[0],previous.position[1]))<0.08
	_check(positions_kept,"resident positions survive fresh runtime reconstruction instead of spawning at home")
	var concerts_before: int=demo.state.life_progress.concerts
	var started:=Time.get_ticks_usec()
	demo.life.set_process(true)
	deadline=Time.get_ticks_msec()+15000
	while str(demo.life.concert_status().phase)=="playing" and Time.get_ticks_msec()<deadline: await process_frame
	var remaining_ms:=float(Time.get_ticks_usec()-started)/1000.0
	_check(demo.state.life_progress.concerts==concerts_before+1 and str(demo.life.concert_status().phase)=="idle" and remaining_ms>10000.0,"restored live performance plays its actual remaining time and settles once")
	demo.life.set_process(false)
	facts["performance"]={"saved_elapsed":saved_elapsed,"restored_audio_clock":clock,"remaining_wall_ms":remaining_ms,"players_retained":_identity()==identity}

func _integrity(first: Dictionary) -> void:
	var library:=Library.new()
	library.directory=OUTPUT+"/损坏与半写入"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(library.directory))
	var first_bytes:=FileAccess.get_file_as_bytes(str(first.path))
	var first_cover:=FileAccess.get_file_as_bytes(demo.gallery.library.directory.path_join(str(first.id)+".png"))
	var path:=library.directory.path_join(str(first.id)+".json")
	FileAccess.open(path,FileAccess.WRITE).store_buffer(first_bytes)
	var payload: Dictionary=JSON.parse_string(first_bytes.get_string_from_utf8())
	var inner: Dictionary=JSON.parse_string(payload.payload)
	inner.title="被改过的名字"
	payload.payload=JSON.stringify(inner)
	FileAccess.open(path,FileAccess.WRITE).store_string(JSON.stringify(payload))
	var damaged:=FileAccess.get_file_as_bytes(path)
	_check(not library.read(str(first.id)).ok and not library.entries().items[0].valid and FileAccess.get_file_as_bytes(path)==damaged,"checksum corruption remains visible and cannot silently replace a city")
	FileAccess.open(path,FileAccess.WRITE).store_buffer(first_bytes)
	_check(library.read(str(first.id)).ok and library.read(str(first.id)).cover_path=="","missing preview still allows recovery of a valid complete city")
	payload=JSON.parse_string(first_bytes.get_string_from_utf8())
	payload.schema="future_work_v9"
	FileAccess.open(path,FileAccess.WRITE).store_string(JSON.stringify(payload))
	_check(not library.read(str(first.id)).ok,"unknown work versions are rejected before live state changes")
	var bad_id:="w_0000000000001_0000000000000001"
	FileAccess.open(demo.gallery.library.directory.path_join(bad_id+".json"),FileAccess.WRITE).store_string(JSON.stringify(payload))
	demo.gallery.open_panel()
	_check(demo.gallery.panel.open_buttons[bad_id].disabled,"actual collection retains an invalid work as a disabled card")
	demo.gallery.close_panel()
	FileAccess.open(path+".tmp",FileAccess.WRITE).store_buffer(first_bytes)
	FileAccess.open(library.directory.path_join("orphan.png"),FileAccess.WRITE).store_buffer(first_cover)
	_check(library.entries().items.size()==1,"partial JSON and orphan images never appear as completed works")
	_check(not library.read("../../city_creation_v1").ok,"entry identities cannot read outside the collection")
	var cover:=Image.create(16,16,false,Image.FORMAT_RGB8)
	cover.fill(Color("638b75"))
	var bad_view: Dictionary=first.view.duplicate(true)
	bad_view.focus[0]=NAN
	_check(not library.save("坏镜头",first.world,bad_view,cover).ok,"non-finite camera data cannot publish an unusable work")
	_check(FileAccess.get_file_as_bytes(str(first.path))==first_bytes,"original completed work bytes remain unchanged across all operations")
