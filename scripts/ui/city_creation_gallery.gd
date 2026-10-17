extends RefCounted
## Immutable full-city versions. Townscaper's actual load path first saves the
## current town; the new scene keeps original IDs, rather than importing rooms.
const Library = preload("res://scripts/world/city_creation_collection.gd")
const GalleryPanel = preload("res://scripts/ui/city_creation_gallery_panel.gd")
const Examples = preload("res://scripts/world/city_creation_examples.gd")
var demo: Node3D
var panel: Control
var library := Library.new()
var busy := false
var current_title := "未命名河湾"
var last_saved_id := ""
var last_opened_id := ""
var last_auto_id := ""

func setup(owner: Node3D, parent: Control, directory: String) -> void:
	demo=owner
	library.directory=directory
	panel=GalleryPanel.new()
	panel.name="WorkCollection"
	parent.add_child(panel)
	panel.save_requested.connect(save_work)
	panel.open_requested.connect(open_work)
	panel.example_requested.connect(open_example)
	panel.close_requested.connect(close_panel)

func open_panel() -> void:
	if busy or demo.edit_pending():
		demo._message("小路接合完成后，就能收藏这座河湾。")
		return
	demo._cancel_draft()
	demo.orbiting=false
	demo.panning=false
	demo.town.clear_preview()
	panel.show()
	panel.title_input.text="" if current_title=="未命名河湾" else current_title
	_refresh()

func close_panel() -> void:
	if busy: return
	panel.hide()
	panel.title_input.release_focus()
	demo.preview_key=""

func _refresh() -> void:
	var result: Dictionary=library.entries()
	panel.refresh(result.get("items",[]))
	panel.refresh_examples(Examples.entries())
	panel.set_status("每次收藏都是新的版本，之前的作品会一直保留。" if result.ok else str(result.message))

func _set_busy(value: bool) -> void:
	busy=value
	panel.set_busy(value)

func _view() -> Dictionary:
	return {"focus":[demo.focus.x,demo.focus.y,demo.focus.z],"yaw":demo.yaw,"pitch":demo.pitch,"zoom":demo.zoom,"evening":demo.evening,"light_phase":demo.light_phase}

func _capture(title: String, reason: String) -> Dictionary:
	# A real viewport image without UI, not an artist-created thumbnail. Pause
	# actors for this one capture frame so the saved checkpoint matches it.
	var life_processing: bool=demo.life.is_processing()
	demo.life.set_process(false)
	var ui_visible: bool=demo.ui_layer.visible
	demo.ui_layer.visible=false
	demo.town.clear_preview()
	await RenderingServer.frame_post_draw
	var image: Image=demo.get_viewport().get_texture().get_image()
	demo._capture_journeys()
	var result: Dictionary=library.save(title,demo.state.snapshot(),_view(),image,reason)
	demo.ui_layer.visible=ui_visible
	demo.life.set_process(life_processing)
	return result

func save_work(title: String) -> void:
	if busy or demo.edit_pending(): return
	_set_busy(true)
	panel.set_status("正在留下这座河湾……")
	var result: Dictionary=await _capture(title,"manual")
	if result.ok:
		last_saved_id=str(result.id)
		current_title=str(result.title)
		_refresh()
		panel.set_status("已收藏「%s」，可以继续建造。" % current_title)
	else: panel.set_status(str(result.message))
	_set_busy(false)

func open_work(id: String) -> void:
	if busy or demo.edit_pending(): return
	# Validate before writing a switch checkpoint or touching the live city.
	var chosen: Dictionary=library.read(id)
	await _open_chosen(chosen)

func open_example(id: String) -> void:
	if busy or demo.edit_pending(): return
	await _open_chosen(Examples.read(id))

func _open_chosen(chosen: Dictionary) -> void:
	if not chosen.ok:
		panel.set_status(str(chosen.message))
		return
	_set_busy(true)
	panel.set_status("先留住当前河湾，再打开作品……")
	var kept: Dictionary=await _capture(current_title,"before_open")
	if not kept.ok:
		panel.set_status(str(kept.message))
		_set_busy(false)
		return
	last_auto_id=str(kept.id)
	var city: RefCounted=demo.State.new()
	city.restore(chosen.world)
	# A different work can reuse h1/c1. Fresh life/geometry contexts prevent
	# residents or pending render caches from leaking between those identities.
	demo.remove_child(demo.life)
	demo.life.queue_free()
	demo.remove_child(demo.town)
	demo.town.queue_free()
	demo.state=city
	# Selecting a work changes what "continue my bay" should reopen even if
	# every resident is paused and the player makes no further construction.
	city.dirty=true
	demo.town=demo.TownRenderer.new()
	demo.town.name="Town"
	demo.add_child(demo.town)
	demo.town.setup(city)
	demo.town.show_districts(demo.tool==7)
	demo._setup_life()
	demo.life.set_process(false)
	demo.music.update_city(city)
	# Reuse the four environmental voices and PCM bank, but sample the new
	# city's water/trees. setup retargets its cache without restarting audio.
	demo.ambience.setup(city)
	demo._rendered_waters=city.waters.duplicate(true)
	demo._rendered_terrain=city.terrain_strokes.duplicate(true)
	demo.selected_house=""
	demo.selected_district=""
	demo.place_panel.hide()
	demo._save_requested=false
	demo._edit_ui_pending=false
	demo.save_delay=3.0
	demo.life_save_timer=15.0
	demo.focus=Vector3(float(chosen.view.focus[0]),float(chosen.view.focus[1]),float(chosen.view.focus[2]))
	demo.yaw=float(chosen.view.yaw)
	demo.pitch=float(chosen.view.pitch)
	demo.zoom=float(chosen.view.zoom)
	# Legacy works store only the evening bool; current works preserve all three
	# authored looks so nocturne does not reopen as a warm evening.
	var wanted_phase := int(chosen.view.get("light_phase",1 if bool(chosen.view.evening) else 0))
	while demo.light_phase!=wanted_phase: demo._toggle_light()
	demo._update_camera()
	demo._refresh_ui()
	# The next frame's delta includes synchronous disk/scene reconstruction.
	# Keep the newly loaded actors paused through that frame; their saved
	# work and performance must not advance by the city-switch loading time.
	await RenderingServer.frame_post_draw
	demo.music.restore_city_transport(demo.life.concert_view())
	demo.life.set_process(true)
	current_title=str(chosen.title)
	last_opened_id=str(chosen.id)
	_set_busy(false)
	close_panel()
	demo._message("已打开「%s」，切换前的河湾也已收藏。" % current_title)
