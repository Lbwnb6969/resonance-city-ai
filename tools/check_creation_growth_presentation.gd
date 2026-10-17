extends SceneTree
## Reward appearance fixtures seed discovery metadata only. Real discovery and
## complete first-chapter Life evidence are covered by growth_state/live.
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/河湾手记_2026-10-16"
var checks: Array=[]
var failures: Array=[]
func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks.append({"passed":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _key(code: int) -> void:
	for down: bool in [true,false]:
		var event:=InputEventKey.new()
		event.keycode=code;event.pressed=down
		root.push_input(event);await process_frame
func _colors(house: Node3D) -> Array:
	var values: Array=[]
	for mesh: MeshInstance3D in house.find_children("*","MeshInstance3D",true,false):
		# Joined roofs retain their actual ShaderMaterial; solid walls use
		# RGBA8 vertex colors. Inspect both real rendering inputs.
		if mesh.material_override is ShaderMaterial:
			var roof_color: Variant=mesh.material_override.get_shader_parameter("roof_color")
			if roof_color is Color and not values.has(roof_color.to_html()): values.append(roof_color.to_html())
		elif mesh.material_override is StandardMaterial3D:
			values.append(mesh.material_override.albedo_color.to_html())
		for surface in range(mesh.mesh.get_surface_count()):
			var colors: Variant=mesh.mesh.surface_get_arrays(surface)[Mesh.ARRAY_COLOR]
			if colors!=null:
				for color: Color in colors:
					if not values.has(color.to_html()): values.append(color.to_html())
	return values
func _run() -> void:
	root.size=Vector2i(1440,900)
	var demo=Scene.instantiate()
	demo.persistence=false;demo.collection_directory=OUT+"/外观夹具收藏"
	root.add_child(demo);demo.life.set_process(false)
	var until:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<until: await process_frame
	await _key(KEY_J)
	_check(demo.journal.panel.visible and demo.journal.close_button.has_focus(),"opened journal gives real keyboard focus to its close button")
	await _key(KEY_ENTER)
	_check(not demo.journal.panel.visible,"Enter closes the focused journal without a focus warning")
	# Solely an appearance fixture: no claim that these metadata assignments
	# replace the actual bridge/oven/concert/tea/workshop eligibility tests.
	demo.state.growth_memories.assign(["dawn","tide","festival"])
	var houses_before: Array=demo.state.houses.duplicate(true)
	var appearances: Array=[]
	for index in range(3):
		var id: String=["dawn","tide","festival"][index]
		var target: String=["h1","h3","h5"][index]
		var edited: Dictionary=demo.state.set_house_finish(target,id)
		demo._after_edit(edited,"terrace")
		until=Time.get_ticks_msec()+10000
		while demo.edit_pending() and Time.get_ticks_msec()<until: await process_frame
		var actual: Array=_colors(demo.town.house_roots[target])
		var palette: Array=demo.TownRenderer.FINISH_PALETTES[id]
		_check(edited.ok and actual.has(palette[0].to_html()) and actual.has(palette[1].to_html()),"actual wall COLOR and joined-roof shader use reward colors: "+id)
		appearances.append(actual)
	for index in range(demo.state.houses.size()):
		_check(demo.state.houses[index].cells==houses_before[index].cells and demo.state.houses[index].origin==houses_before[index].origin,"reward showcase preserves authored house footprint: "+str(index))
	_check(appearances[0]!=appearances[1] and appearances[1]!=appearances[2],"all three reward appearances remain visually distinct")
	demo.focus=Vector3(-6.5,0.7,0.0);demo.zoom=21;demo._update_camera()
	demo.selected_house="h3";demo.select_tool(4);demo._refresh_place()
	await process_frame;await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/08_三章饰色实景.png")
	# One bounded live sample, not a large-city or old/new performance claim.
	demo.life.set_process(true)
	var frames: Array[float]=[]
	var last:=Time.get_ticks_usec()
	var peak_draw:=0.0
	for i in range(240):
		await process_frame
		var now:=Time.get_ticks_usec()
		frames.append((now-last)/1000.0);last=now
		peak_draw=maxf(peak_draw,Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	demo.life.set_process(false);frames.sort()
	var performance={"window":[1440,900],"frames":frames.size(),"wall_p95_ms":frames[int((frames.size()-1)*0.95)],"wall_max_ms":frames[-1],"max_draw_calls":peak_draw,"edit_samples_ms":demo.edit_samples.duplicate(),"scope":"six houses, three reward colors, real Life processing, fixed nine loops/four effects, 180 FPS cap; no old/new A/B or large-city claim"}
	root.size=Vector2i(1024,768)
	demo.selected_house="h4";demo._refresh_place()
	for i in range(5): await process_frame
	_check(demo.place_panel.visible and demo.place_panel.get_global_rect().end.y<demo.tool_buttons[0].get_global_rect().position.y,"1024 visible venue controls with new palette picker remain above tools")
	await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/10_小窗口演奏庭控制.png")
	await _key(KEY_J)
	await process_frame;await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/09_手记键盘与三章.png")
	var report={"ok":failures.is_empty(),"checks":checks,"failures":failures,"performance":performance,"scope":"Real GPU appearance of all three finishes, original footprint, keyboard-close fix and 1024 venue panel; discoveries seeded for appearance only, not evidence of three chapters of real Life activity."}
	demo.music.set_process(false)
	for p: AudioStreamPlayer in demo.music._players.values(): p.stop()
	for p: AudioStreamPlayer in demo.music._effects: p.stop()
	await create_timer(0.15).timeout
	demo.queue_free();await process_frame;await create_timer(0.15).timeout
	FileAccess.open(OUT+"/presentation.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true)+"\n")
	print("GROWTH_PRESENTATION ","PASS" if failures.is_empty() else "FAIL"," checks=",checks.size())
	quit(0 if failures.is_empty() else 1)
