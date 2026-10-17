extends SceneTree
## Generate shipped previews from the same real switch path used by players.
const Scene=preload("res://scenes/city_creation.tscn")
const Examples=preload("res://scripts/world/city_creation_examples.gd")
const OUT="res://资源/界面/示范河湾"
const EVIDENCE="res://验证记录/示范河湾_2026-10-16"
func _initialize()->void: _run.call_deferred()
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(EVIDENCE))
	root.size=Vector2i(1440,900)
	Engine.max_fps=180
	var demo=Scene.instantiate()
	demo.persistence=false
	demo.collection_directory=EVIDENCE+"/封面临时作品库"
	root.add_child(demo)
	var rows:Array=[]
	for item:Dictionary in Examples.entries():
		var started:=Time.get_ticks_msec()
		# Show authored musical connections in the cross-river example.
		demo.select_tool(7 if item.id=="example_manual_links" else 4)
		await demo.gallery.open_example(str(item.id))
		if demo.gallery.last_opened_id!=item.id:
			push_error("Example failed to open: "+str(item.id));quit(1);return
		demo.life.set_process(false)
		demo.ui_layer.visible=false
		demo.town.clear_preview()
		for ignored in range(4): await process_frame
		await RenderingServer.frame_post_draw
		var image:Image=root.get_texture().get_image()
		image.resize(480,300,Image.INTERPOLATE_LANCZOS)
		var result:=image.save_png(str(item.cover_path))
		rows.append({"id":item.id,"ok":result==OK,"capture_ms":Time.get_ticks_msec()-started})
		print("COVER ",item.id," ",result)
	FileAccess.open(EVIDENCE+"/covers.json",FileAccess.WRITE).store_string(JSON.stringify(rows,"\t"))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for player:AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player:AudioStreamPlayer in demo.music._effects: player.stop()
	for player:AudioStreamPlayer in demo.ambience.players.values(): player.stop()
	await create_timer(.15).timeout
	demo.queue_free();await process_frame;await create_timer(.15).timeout
	quit()
