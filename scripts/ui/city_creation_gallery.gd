extends RefCounted
## Immutable full-city versions. Townscaper's actual load path first saves the
## current town; the new scene keeps original IDs, rather than importing rooms.
const Archive=preload("res://scripts/world/city_creation_acoustic_archive.gd")
const Phonograph=preload("res://scripts/audio/city_creation_phonograph.gd")
var archive:=Archive.new()
var preview_id:=""
var _preview_life_processing:=false
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
	archive.directory=directory.path_join("声学图鉴")
	archive.enabled=demo.persistence or demo.archive_persistence
	archive.load_records()
	demo.state.apply_archive_unlocks(archive.awards)
	panel=GalleryPanel.new()
	panel.name="WorkCollection"
	parent.add_child(panel)
	panel.save_requested.connect(save_work)
	panel.open_requested.connect(open_work)
	panel.example_requested.connect(open_example)
	panel.biome_requested.connect(open_biome)
	panel.close_requested.connect(close_panel)
	panel.preview_requested.connect(play_work)
	panel.stop_requested.connect(stop_preview)
	panel.mode_requested.connect(choose_mode)

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
	stop_preview()
	panel.hide()
	panel.title_input.release_focus()
	demo.preview_key=""

func _refresh() -> void:
	var result: Dictionary=library.entries()
	panel.refresh(result.get("items",[]))
	panel.refresh_examples(Examples.entries())
	panel.refresh_archive(archive.summary(),demo.state.archive_unlocks,demo.state.music_mode)
	panel.set_status("每次收藏都是新的版本，之前的作品会一直保留。" if result.ok else str(result.message))

func _set_busy(value: bool) -> void:
	busy=value
	panel.set_busy(value)

func _view() -> Dictionary:
	return {"focus":[demo.focus.x,demo.focus.y,demo.focus.z],"yaw":demo.yaw,"pitch":demo.pitch,"zoom":demo.zoom,"evening":demo.evening,"light_phase":demo.light_phase}

func _capture(title: String, reason: String) -> Dictionary:
	# A real viewport image without UI, not an artist-created thumbnail. Pause
	# actors for this one capture frame so the saved checkpoint matches it.
	stop_preview()
	var life_processing: bool=demo.life.is_processing()
	demo.life.set_process(false)
	var ui_visible: bool=demo.ui_layer.visible
	demo.ui_layer.visible=false
	demo.town.clear_preview()
	await RenderingServer.frame_post_draw
	var image: Image=demo.get_viewport().get_texture().get_image()
	demo._capture_journeys()
	var mix:Dictionary=Phonograph.reconstruct(demo.state,_view()) if demo.music.muted or demo.music._loading else Phonograph.capture(demo.music)
	var result: Dictionary=library.save(title,demo.state.snapshot(),_view(),image,reason,mix)
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

func open_biome(id:String)->void:
	if busy or demo.edit_pending():return
	var city:RefCounted=demo.State.new()
	var created:Dictionary=city.Biomes.create(city,id)
	if not created.ok:panel.set_status(str(created.message));return
	var world:Dictionary=city.snapshot()
	var checked:Dictionary=city._validate_snapshot(world)
	if not checked.ok:panel.set_status(str(checked.message));return
	var night:bool=city.microclimate=="starlight_fireflies"
	var features:Dictionary=city.Biomes.profile(city.biome_seed)
	var view_zoom:=48. if features.terraces or features.islands else 38.
	var chosen:={"ok":true,"id":"biome_"+id,"title":city.Biomes.NAMES[city.Biomes.IDS.find(id)],"world":world,"view":{"focus":[-3.,0.,0.],"yaw":demo.yaw,"pitch":demo.pitch,"zoom":view_zoom,"evening":night,"light_phase":2 if night else 0}}
	await _open_chosen(chosen)

func _open_chosen(chosen: Dictionary) -> void:
	stop_preview()
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
	city.apply_archive_unlocks(archive.awards)
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
	demo.spatial_popover.close()
	demo.house_module_mode=false
	demo.select_tool(0)
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

func observe_archive(completed:Dictionary={})->void:
	if not preview_id.is_empty() or not archive.enabled:return
	var result:Dictionary=archive.observe(demo.state,completed)
	if not result.ok:
		panel.set_status(str(result.message));return
	demo.state.apply_archive_unlocks(archive.awards)
	if result.get("changed",false):panel.refresh_archive(archive.summary(),demo.state.archive_unlocks,demo.state.music_mode)
	for id:String in result.get("earned",[]):demo._message("声学图鉴 · "+str(archive.Rewards.NAMES[id])+" · 新饰色与调式已可选")

func choose_mode(mode:String)->void:
	if busy or demo.edit_pending():return
	stop_preview()
	var stairs:bool=preload("res://scripts/world/city_creation_stair_keys.gd").enabled(demo.state)
	demo._after_edit(demo.state.set_music_mode(mode),"terrace",stairs)
	panel.refresh_archive(archive.summary(),demo.state.archive_unlocks,demo.state.music_mode)

func play_work(id:String)->void:
	if busy or demo.edit_pending() or demo.music._loading:return
	if preview_id==id:stop_preview();return
	var selected:Dictionary=library.read(id)
	if not selected.ok:panel.set_status(str(selected.message));return
	var value:Dictionary=selected.get("phonograph_mix",{})
	if value.is_empty():
		var city:RefCounted=demo.State.new();city.restore(selected.world)
		value=Phonograph.reconstruct(city,selected.view)
	stop_preview()
	var result:Dictionary=demo.music.phonograph.begin(demo.music,value)
	if not result.ok:panel.set_status(str(result.message));return
	_preview_life_processing=demo.life.is_processing()
	demo.life.set_process(false);demo.ambience.set_muted(true)
	preview_id=id
	panel.set_playing(id,str(selected.title),str(demo.music.Palette.NAMES[maxi(0,int(value.mode))]))

func tick_preview()->void:
	panel.playback_progress.value=demo.music._players.concert.get_playback_position()

func stop_preview()->void:
	if preview_id.is_empty():return
	demo.music.phonograph.stop(demo.music)
	preview_id=""
	demo.life.set_process(_preview_life_processing)
	demo.ambience.set_muted(demo.music.muted)
	panel.set_playing("","","")
