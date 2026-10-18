extends SceneTree
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const OUT = "res://验证记录/纸本UI试装_2026-10-18"
var demo
var checks: Array = []
var failures: Array = []
func _initialize() -> void: _run.call_deferred()
func check(ok: bool, label: String) -> void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func key(code: Key) -> void:
	for pressed: bool in [true,false]:
		var event := InputEventKey.new();event.keycode=code;event.pressed=pressed;root.push_input(event);await process_frame
func click(at: Vector2) -> void:
	var motion := InputEventMouseMotion.new();motion.position=at;motion.global_position=at;root.push_input(motion);await process_frame
	for pressed: bool in [true,false]:
		var event := InputEventMouseButton.new();event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=pressed;root.push_input(event);await process_frame
func image(name: String) -> void:
	await RenderingServer.frame_post_draw
	check(root.get_texture().get_image().save_png(OUT+"/"+name+".png")==OK,"capture "+name)
func layout() -> void:
	var screen := Rect2(Vector2.ZERO,Vector2(root.size))
	var column: Control = demo.ui_layer.get_node("Root/PaperHeader/Column")
	check(screen.encloses(column.get_global_rect()),"paper header fits "+str(root.size))
	for button: Control in demo.ui_layer.get_node("Root/Actions").get_children():
		check(screen.encloses(button.get_global_rect()),"top action fits: "+button.text)
	check(screen.encloses(demo.ui_layer.get_node("Root/Toolbar").get_global_rect()),"all nine dock tools fit")
func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(1440,900);Engine.max_fps=180
	var personal := FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false)
	for i in range(35): await process_frame
	var original: Dictionary=demo.state.snapshot();var undo: int=demo.state._undo.size()
	layout();await image("01_纸本主界面")
	var header: Control=demo.ui_layer.get_node("Root/PaperHeader")
	check(header.size.y<400. and not demo.quest.is_visible_in_tree(),"compact header folds verbose goals by default")
	var toggle: Button=header.find_child("ToggleCityDetails",true,false)
	await click(toggle.get_global_rect().get_center());check(demo.quest.is_visible_in_tree(),"actual details click reveals goals")
	await click(toggle.get_global_rect().get_center());await process_frame
	for index in range(9):
		await click(demo.tool_buttons[index].get_global_rect().get_center())
		check(demo.tool==index,"actual dock selects tool "+str(index+1))
	demo.select_tool(2);await process_frame;await image("02_道路抽屉")
	var selector: OptionButton=demo.road_panel.find_child("RoadStyle",true,false)
	var promenade: CheckButton=demo.road_panel.find_child("RoadPromenade",true,false)
	await click(promenade.get_global_rect().get_center())
	check(demo.road_style=="promenade" and selector.selected==1,"paper street shortcut updates production style selector")
	await key(KEY_F1);check(demo.guide.visible(),"F1 opens imported guide")
	for index in range(4):
		await click(demo.guide.tabs.global_position+demo.guide.tabs.get_tab_rect(index).get_center())
		check(demo.guide.tabs.current_tab==index and demo.guide.body.text==demo.Copy.guide_tab_text(index),"actual guide tab "+str(index))
	await image("03_营造乐理手札")
	await key(KEY_1);await click(Vector2(40,650))
	check(demo.tool==2 and demo.state.snapshot()==original and demo.state._undo.size()==undo,"modal blocks building keys and clicks without changing city history")
	await key(KEY_ESCAPE);check(not demo.guide.visible(),"Escape closes guide")
	await key(KEY_J);await process_frame;await click(demo.journal.guide_button.get_global_rect().get_center())
	check(demo.guide.visible() and not demo.journal.panel.visible and demo.guide.tabs.current_tab==0,"journal opens gesture guide and closes its own modal")
	await key(KEY_ESCAPE);await key(KEY_L);await process_frame;await image("04_纸本生活账本")
	await click(demo.ledger.guide_button.get_global_rect().get_center())
	check(demo.guide.visible() and not demo.ledger.visible() and demo.guide.tabs.current_tab==1,"ledger opens life guide and closes its own modal")
	await key(KEY_F1)
	for phase in range(3):
		check(demo.subtitle_label.text==demo.Copy.LIGHT_PHASE_SUBTITLES[phase],"subtitle follows actual light phase "+str(phase))
		demo._toggle_light()
	root.size=Vector2i(1024,768)
	for i in range(10):await process_frame
	layout();await key(KEY_F1);await process_frame
	check(Rect2(Vector2.ZERO,Vector2(root.size)).encloses(demo.guide.paper.get_global_rect()),"guide paper fits smaller window")
	await image("05_小窗口手札");await key(KEY_ESCAPE);await image("06_小窗口主界面")
	check(demo.state.snapshot()==original and demo.state._undo.size()==undo,"UI tour preserves exact authored state and undo stack")
	check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal save unchanged")
	var report := {"ok":failures.is_empty(),"count":checks.size(),"failures":failures,"checks":checks}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("PAPER_UI ",JSON.stringify(report))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
