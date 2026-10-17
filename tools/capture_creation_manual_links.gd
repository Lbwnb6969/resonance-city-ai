extends SceneTree
## Capture the saved playable example without waiting for a whole concert.
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/跨河共鸣_2026-10-16"
func _initialize()->void: _capture.call_deferred()
func _capture()->void:
	root.size=Vector2i(1440,900)
	var demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时视图作品库";root.add_child(demo)
	demo.life.set_process(false)
	demo._after_edit(demo.state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/跨河共鸣样例.json"))),"history")
	var deadline:=Time.get_ticks_msec()+20000
	while demo.edit_pending() and Time.get_ticks_msec()<deadline: await process_frame
	demo.focus=Vector3(.5,.7,-1.5);demo.zoom=27;demo.pitch=.85;demo.yaw=.62;demo._update_camera();demo.select_tool(7)
	demo.ui_layer.visible=false;demo.town.clear_preview()
	await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/03_保存连线清晰导引.png")
	demo._toggle_light()
	await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/04_夕光连线.png")
	var frames:Array[float]=[];var draws:Array[float]=[];var previous:=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();frames.append(float(now-previous)/1000);previous=now
		draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	frames.sort();draws.sort()
	var report:Dictionary={"guide_shader":"creation_manual_link.gdshader","frames":120,"p95_ms":frames[113],"max_ms":frames[-1],"draw_median":draws[60]}
	FileAccess.open(OUT+"/guide.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for player:AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player:AudioStreamPlayer in demo.music._effects: player.stop()
	for player:AudioStreamPlayer in demo.ambience.players.values(): player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout;quit()
