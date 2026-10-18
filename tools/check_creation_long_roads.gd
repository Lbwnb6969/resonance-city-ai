extends SceneTree
## Reconstruct exact original road IDs from the preserved player's prefix.
const Scene=preload("res://scenes/city_creation.tscn")
const SOURCE := "res://tools/fixtures/long_road_baseline.json"
const OUTPUT := "res://验证记录/长曲路性能_2026-10-15"
var failures: Array[String]=[]

func _initialize() -> void: _run.call_deferred()

func _run() -> void:
	var label := "current"
	var args := OS.get_cmdline_user_args()
	if not args.is_empty(): label=str(args[0])
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	var original: Dictionary=JSON.parse_string(FileAccess.get_file_as_string(SOURCE))
	var base := original.duplicate(true)
	base.roads=original.roads.slice(0,7).duplicate(true)
	base.next_road_id=8
	base.high_watermark.road=7
	base.journey_checkpoint={}
	for house: Dictionary in base.houses: house.auto_matinee=false
	var demo=Scene.instantiate()
	demo.persistence=false
	root.add_child(demo)
	demo.life.set_process(false)
	var until := Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<until: await process_frame
	var restored: Dictionary=demo.state.restore(base)
	if not restored.ok:
		push_error(str(restored.message))
		quit(1)
		return
	demo._after_edit(restored,"history")
	var records: Array[Dictionary]=[]
	for road: Dictionary in original.roads.slice(7):
		var points: Array[Vector2]=[]
		for value: Array in road.points: points.append(Vector2(float(value[0]),float(value[1])))
		var started := Time.get_ticks_usec()
		var result: Dictionary=demo.state.add_road(points)
		var after_state := Time.get_ticks_usec()
		if not result.ok:
			failures.append(str(result.message))
			break
		demo.life._sync()
		var after_life := Time.get_ticks_usec()
		demo.town.rebuild()
		var after_render := Time.get_ticks_usec()
		demo._refresh_ui()
		var after_ui := Time.get_ticks_usec()
		var actual: Dictionary=demo.state.roads[-1]
		var exact: bool=actual.id==road.id and actual.points.size()==points.size()
		var max_error := 0.0
		for index in range(mini(actual.points.size(),points.size())):
			var at := Vector2(float(actual.points[index][0]),float(actual.points[index][1]))
			max_error=maxf(max_error,at.distance_to(points[index]))
			exact=exact and at==points[index]
		if not exact: failures.append("original stable road identity/f32 points changed")
		var row := {"road_id":road.id,"actual_id":actual.id,"points":points.size(),"f32_points_equal":exact,"max_point_error":max_error,"state_ms":(after_state-started)/1000.0,"life_ms":(after_life-after_state)/1000.0,"render_ms":(after_render-after_life)/1000.0,"ui_ms":(after_ui-after_render)/1000.0,"full_ms":(after_ui-started)/1000.0,"render":demo.town.rebuild_stats.duplicate(true),"graph_nodes":demo.life.graph.size(),"roads":demo.state.roads.size()}
		records.append(row)
		print("LONG_ROAD_STAGE ",JSON.stringify(row))
		await process_frame
	var report := {"ok":failures.is_empty(),"label":label,"records":records,"failures":failures,"mode":DisplayServer.get_name(),"source":SOURCE}
	var file := FileAccess.open(OUTPUT+"/"+label+".json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("LONG_ROAD_RESULT ",JSON.stringify({"ok":failures.is_empty(),"label":label,"failures":failures}))
	demo.queue_free()
	await create_timer(0.2).timeout
	quit(0 if failures.is_empty() else 1)
