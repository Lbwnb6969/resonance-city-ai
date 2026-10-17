extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/街坊自动配器_2026-10-16"
var checks: Array=[]
var failed:=false
func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks.append({"passed":ok,"label":label})
	if not ok: failed=true;push_error(label)
func _run() -> void:
	root.size=Vector2i(1024,768)
	var demo=Scene.instantiate()
	demo.persistence=false;demo.collection_directory=OUT+"/isolated_collection"
	root.add_child(demo)
	demo.life.set_process(false)
	var loaded: Dictionary=demo.state.load_city("res://数据/创作河湾样例.json")
	_check(loaded.ok,"actual terrain-and-arrangement sample restores")
	demo._after_edit(loaded,"room")
	var until:=Time.get_ticks_msec()+20000
	while (demo.edit_pending() or demo.music.audio_report.is_empty()) and Time.get_ticks_msec()<until: await process_frame
	_check(not demo.music.audio_report.is_empty() and not demo.edit_pending(),"actual sample world and music finish loading")
	demo.selected_district="d1";demo.select_tool(7)
	_check(demo.state.terrain_strokes.size()==4 and demo.state.districts[0].adaptive and demo.state.district_members("d1").size()==5,"sample preserves all four terrain strokes and real adaptive ownership")
	_check(demo.music._house_music.h1.mix.secondary=="deep","sample actual music derives deep companion from real uses")
	# Exercise the longest preset labels, a 48-character source name, and a
	# genuine pending arrangement before the next actual PCM boundary.
	for house: Dictionary in demo.state.houses: house.name="河湾长名字".repeat(10).left(48)
	until=Time.get_ticks_msec()+4000
	while (fposmod(demo.music._playback_clock(),3.0)<0.4 or fposmod(demo.music._playback_clock(),3.0)>0.7) and Time.get_ticks_msec()<until: await process_frame
	demo._after_edit(demo.state.set_district_style("d1","market"),"terrace",false)
	var motion:=InputEventMouseMotion.new()
	motion.position=demo.district_adaptive_button.get_global_rect().get_center();motion.global_position=motion.position
	root.push_input(motion)
	for i in range(4): await process_frame
	var panel: Rect2=demo.district_panel.get_global_rect()
	var toolbar_y: float=demo.tool_buttons[0].get_global_rect().position.y
	_check(demo.music.district_music_report().pending and demo.district_music_status.text.contains("等待下一乐句"),"actual pending label is visible during layout stress")
	_check(panel.end.y<toolbar_y and panel.end.x<=1024,"48-character house name and pending arrangement stay above 1024 toolbar")
	_check(demo.district_adaptive_button.get_theme_color("font_hover_pressed_color")==demo.UI.INK,"enabled hovered checkbox keeps readable ink text")
	await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/1024长名与待奏.png")
	var facts={"panel":[panel.position.x,panel.position.y,panel.size.x,panel.size.y],"toolbar_y":toolbar_y,"status":demo.district_music_status.text,"display":DisplayServer.get_name()}
	demo.music.set_process(false)
	for p: AudioStreamPlayer in demo.music._players.values(): p.stop()
	for p: AudioStreamPlayer in demo.music._effects: p.stop()
	await create_timer(0.15).timeout
	demo.queue_free();await process_frame;await create_timer(0.15).timeout
	FileAccess.open(OUT+"/layout.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":not failed,"checks":checks,"facts":facts},"\t",true,true)+"\n")
	print("ARRANGEMENT_LAYOUT ","PASS" if not failed else "FAIL"," checks=",checks.size())
	quit(1 if failed else 0)
