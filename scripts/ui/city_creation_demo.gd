class_name CityCreationDemo
extends Node3D
const RenderCapture=preload("res://scripts/ui/city_creation_render_capture.gd")
var render_capture_directory: String="user://render_diagnostics"
## The editable town and its clock are independent of the legacy audio simulation.
const State = preload("res://scripts/world/city_creation_state.gd")
const TownRenderer = preload("res://scripts/visual/city_creation_renderer.gd")
const Music = preload("res://scripts/audio/city_creation_music.gd")
const Ambience = preload("res://scripts/audio/city_creation_ambience.gd")
const Life = preload("res://scripts/world/city_creation_life.gd")
const Stroke = preload("res://scripts/world/city_creation_stroke.gd")
const HouseStroke = preload("res://scripts/world/city_creation_house_stroke.gd")
const Frontage = preload("res://scripts/world/city_creation_frontage.gd")
const UI = preload("res://scripts/ui/valley_ui_theme.gd")
const Copy = preload("res://scripts/ui/city_creation_copy.gd")
const Guide = preload("res://scripts/ui/city_creation_guide_panel.gd")
const Gallery = preload("res://scripts/ui/city_creation_gallery.gd")
const TerrainBrush = preload("res://scripts/ui/city_creation_terrain_brush.gd")
const Journal = preload("res://scripts/ui/city_creation_journal.gd")
const Ledger = preload("res://scripts/ui/city_creation_ledger.gd")
const HouseholdFeedback = preload("res://scripts/ui/city_creation_household_feedback.gd")
const EnvironmentRig = preload("res://scripts/visual/city_creation_environment.gd")
const CameraRig = preload("res://scripts/ui/city_creation_camera_rig.gd")
const SAVE_PATH := "user://city_creation_v1.json"
const UNIT := 1.8
const FLOOR := 1.7
const TOOL_NAMES = Copy.TOOL_NAMES
const DISTRICT_STYLES := ["warm", "deep", "weave", "market", "sylvan"]
const DISTRICT_STYLE_NAMES = Copy.DISTRICT_STYLE_NAMES
const REMOVAL_HINT := "指向房屋，查看本次移除范围。\nShift 点击可快速整栋移除。"
var state := State.new()
var town: Node3D
var music: Node
var _music_catalog_key:Variant=null
var ambience: Node
var life: Node3D
var camera: Camera3D
var sun: DirectionalLight3D
var ui_layer: CanvasLayer
var subtitle_label: Label
var info: Label
var hint: Label
var toast: Label
var quest: Label
var tool_buttons: Array[Button] = []
var _painted_tool:=-1
var undo_button: Button
var redo_button: Button
var music_button: Button
var light_button: Button
var score_ribbon:Control
var sundial_hud:Control
var whisper_keycaps:Control
var gallery_button: Button
var gallery: RefCounted
var terrain_brush: RefCounted
var tactile_dock: RefCounted
var world_toys=preload("res://scripts/visual/city_creation_world_toys.gd").new()
var strum_hold=preload("res://scripts/ui/city_creation_strum_hold.gd").new()
var weather_visual:Node3D
var conductor_gesture:Node3D
var wish_pins:Control
var intuitive_guidance:Control
var start_empty:=true
var archive_persistence:=false
var spatial_popover: RefCounted
var journal: RefCounted
var guide: RefCounted
var collection_directory := "user://city_creation_works"
var life_info: Label
var place_panel: PanelContainer
var place_name: LineEdit
var place_description: Label
var household_info: Label
var concert_button: Button
var concert_info: Label
var concert_progress: ProgressBar
var relay_button: Button
var relay_info: Label
var matinee_button: Button
var matinee_info: Label
var bakery_info: Label
var bakery_progress: ProgressBar
var bakery_button: Button
var workshop_info: Label
var workshop_progress: ProgressBar
var workshop_button: Button
var role_buttons: Dictionary = {}
var cafe_info: Label
var cafe_progress: ProgressBar
var cafe_snapshot: Dictionary = {}
var selected_house := ""
var ledger: RefCounted
var house_style_picker: OptionButton
var removal_panel: PanelContainer
var removal_mode: OptionButton
var removal_info: Label
var remove_whole := false
var removal_shift := false
var life_ui_timer := 0.0
var tool := 0
var focus := Vector3(-3, 0.7, 0)
var yaw := 0.62
var pitch := 0.64
var zoom := 25.0
var pointer := Vector2.ZERO
var orbiting := false
var panning := false
var road_drawing := false
var road_points: Array[Vector2] = []
var road_preview: Array[Vector2] = []
var road_straight := false
var road_size := -1
var road_style := "path"
var road_roundabout := false
var road_draft_straight := false
var road_locked_segments := 0
var road_last_pointer := Vector2.ZERO
var road_gesture=preload("res://scripts/ui/city_creation_road_gesture.gd").new()
var house_drawing := false
var house_stroke := HouseStroke.new()
var house_stroke_host := ""
var house_stroke_origin := Vector2.ZERO
var house_stroke_height := 0.0
var house_stroke_base_y := 0.0
var house_stroke_offset := Vector2.ZERO
var house_stroke_result: Dictionary = {}
var house_stroke_key := ""
var road_panel: PanelContainer
var road_status: Label
var vegetation_drawing := false
var vegetation_erasing := false
var vegetation_points: Array[Vector2] = []
var vegetation_radius := 1.4
var vegetation_kind := "olive"
var vegetation_single := true
var house_module_mode := false
var pending_modules:=preload("res://scripts/visual/city_creation_pending_modules.gd").new()
var vegetation_panel: PanelContainer
var water_panel: PanelContainer
var water_status: Label
var water_drawing := false
var water_points: Array[Vector2] = []
var water_kind := "pond"
var water_width := 3.2
var district_panel: PanelContainer
var district_name: LineEdit
var signatures: RefCounted
var district_era_picker: OptionButton
var house_era_picker: OptionButton
var district_style_picker: OptionButton
var district_adaptive_button: CheckButton
var district_reply_button: CheckButton
var district_link_button: CheckButton
var district_link_mode:=false
var district_link_drawing:=false
var district_link_start:=""
var district_link_origin:=Vector2.ZERO
var district_link_erasing:=false
var district_description: Label
var district_music_status: Label
var district_drawing := false
var district_points: Array[Vector2] = []
var district_distance := 0.0
var district_start_id := ""
var district_width := 5.6
var district_style := "warm"
var district_adaptive := false
var selected_district := ""
var life_save_timer := 15.0
var hovered: Dictionary = {}
var candidate: Dictionary = {}
var chemistry_brush = preload("res://scripts/ui/city_creation_chemistry_brush.gd").new()
var preview_key := ""
var toast_time := 0.0
var save_delay := -1.0
var persistence := true
var save_blocked := false
var guided_hint := ""
var evening := false
var light_phase := 0
var environment_rig := EnvironmentRig.new()
var camera_rig := CameraRig.new()
var _life_commit_render: Dictionary = {}
var _last_strummed_house_id := ""
var completed: Dictionary = {}
var frame_samples: Array[float] = []
var resonance_snapshot: Dictionary = {}
var edit_samples: Array[float] = []
var budgeted_edits := true
var _edit_pending := false
var _edit_revision := -1
var _edit_started_usec := 0
var _edit_request_ms := 0.0
var _edit_poll_max_ms := 0.0
var _edit_polls := 0
var _edit_report: Dictionary = {}
var _edit_ui_pending := false
var _color_ui_pending := false
var _rendered_waters: Array = []
var _rendered_terrain: Array = []
var _save_requested := false

func _ready() -> void:
	persistence = persistence and not "--isolated-session" in OS.get_cmdline_user_args()
	state.initialize_free(false)
	chemistry_brush.setup(self)
	if start_empty or (persistence and not FileAccess.file_exists(SAVE_PATH)):state.initialize_free()
	if "--creation-example" in OS.get_cmdline_user_args():
		persistence = false
		state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/创作河湾样例.json")))
	if "--courtyard-example" in OS.get_cmdline_user_args():
		persistence=false
		state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/庭院河湾样例.json")))
	if "--landform-example" in OS.get_cmdline_user_args():
		persistence=false
		state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/地貌河湾样例.json")))
	if "--pond-example" in OS.get_cmdline_user_args():
		persistence=false
		state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/睡莲池塘样例.json")))
	if "--reply-example" in OS.get_cmdline_user_args():
		persistence=false
		state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/街坊连奏样例.json")))
	if "--plateau-example" in OS.get_cmdline_user_args():
		persistence=false
		state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/台地河湾样例.json")))
	if "--highland-example" in OS.get_cmdline_user_args():
		persistence=false
		state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/高地河湾样例.json")))
	if "--promenade-example" in OS.get_cmdline_user_args():
		persistence=false
		state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/灯街河湾样例.json")))
	if "--round-tower-example" in OS.get_cmdline_user_args():
		persistence=false
		state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/圆塔河湾样例.json")))
	if "--conservatory-example" in OS.get_cmdline_user_args():
		persistence=false
		state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/花房河湾样例.json")))
	if "--arcade-example" in OS.get_cmdline_user_args():
		persistence=false
		state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/柱廊河湾样例.json")))
	if "--stepping-example" in OS.get_cmdline_user_args():
		persistence=false
		state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/汀步河湾样例.json")))
	if "--manual-links-example" in OS.get_cmdline_user_args():
		persistence=false
		state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/跨河共鸣样例.json")))
	if "--styles-example" in OS.get_cmdline_user_args():
		persistence=false
		state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/建筑街景样例.json")))
	if "--terrace-example" in OS.get_cmdline_user_args():
		persistence=false
		state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/露台花架样例.json")))
	if "--town-example" in OS.get_cmdline_user_args():
		persistence=false
		state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/经营河湾样例.json")))
	if "--relay-example" in OS.get_cmdline_user_args():
		persistence=false
		state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/庆典接力样例.json")))
	if persistence and FileAccess.file_exists(SAVE_PATH):
		var loaded: Dictionary = state.load_city(SAVE_PATH)
		if not loaded.ok: save_blocked = true
	_setup_world()
	town = TownRenderer.new()
	town.name = "Town"
	add_child(town)
	town.setup(state)
	_rendered_waters=state.waters.duplicate(true)
	_rendered_terrain=state.terrain_strokes.duplicate(true)
	music = Music.new()
	music.name = "TownMusic"
	add_child(music)
	music.setup(state)
	ambience=Ambience.new()
	ambience.name="NatureAmbience"
	add_child(ambience)
	ambience.setup(state)
	ambience.set_visibility_source(func()->Dictionary:return town.vegetation_visibility)
	ambience.set_frustum_source(_acoustic_point_in_view)
	ambience.set_view_samples_source(_ambient_visible_samples)
	ambience.set_view(Vector2(focus.x,focus.z),zoom,light_phase)
	_setup_life()
	town.living_music.metronomes.bind_life(music,life)
	music.set_concert_view(life.concert_view())
	_setup_ui()
	terrain_brush=TerrainBrush.new()
	terrain_brush.setup(self,ui_layer.get_child(0))
	gallery=Gallery.new()
	gallery.setup(self,ui_layer.get_child(0),collection_directory)
	journal=Journal.new()
	journal.setup(self,ui_layer.get_child(0))
	signatures=preload("res://scripts/ui/city_creation_signature_panel.gd").new()
	signatures.setup(self,ui_layer.get_child(0))
	ledger=Ledger.new()
	ledger.setup(self,ui_layer.get_child(0))
	guide=Guide.new()
	guide.setup(self,ui_layer.get_child(0))
	preload("res://scripts/ui/city_creation_paper_hud.gd").setup(self)
	weather_visual=preload("res://scripts/visual/city_creation_weather_visual.gd").new()
	weather_visual.setup(self)
	conductor_gesture=preload("res://scripts/ui/city_creation_conductor_gesture.gd").new()
	conductor_gesture.setup(self)
	preload("res://scripts/ui/city_creation_house_rotation_input.gd").new().setup(self)
	preload("res://scripts/visual/city_creation_street_wonders.gd").new().setup(self)
	preload("res://scripts/visual/city_creation_waterfront_light.gd").new().setup(self)
	preload("res://scripts/ui/city_creation_solo_spotlight.gd").new().setup(self)
	preload("res://scripts/visual/city_creation_musical_archways.gd").new().setup(self)
	preload("res://scripts/ui/city_creation_road_tool.gd").new().setup(self)
	get_meta("era_ceremony").bind()
	_refresh_ui()
	_message("选择喜欢的风貌，在空地落下第一座房屋。" if state.CreationPolicy.is_free(state) else Copy.OPENING_TOAST)
	if save_blocked: _message(Copy.SAVE_BLOCKED_TOAST)
	if "--courtyard-example" in OS.get_cmdline_user_args():
		focus=Vector3(10.5,0.7,-8.5)
		zoom=20.0
		pitch=0.82
	if "--landform-example" in OS.get_cmdline_user_args():
		focus=Vector3(10.5,0.7,9.5)
		zoom=22.0
		pitch=0.80
	if "--pond-example" in OS.get_cmdline_user_args():
		focus=Vector3(-14.5,.2,4)
		zoom=12.0
		pitch=1.0
		yaw=-.6
	if "--reply-example" in OS.get_cmdline_user_args():
		focus=Vector3(-5.2,0.7,-3.5)
		zoom=22.0
		pitch=0.78
	if "--plateau-example" in OS.get_cmdline_user_args():
		focus=Vector3(-12.0,1.0,-2.0)
		zoom=22.0
		pitch=0.78
	if "--highland-example" in OS.get_cmdline_user_args():
		focus=Vector3(-13.0,1.0,-0.5)
		zoom=20.0
		pitch=0.80
	if "--promenade-example" in OS.get_cmdline_user_args():
		focus=Vector3(-6.0,0.7,0.0)
		zoom=24.0
		pitch=0.80
		_toggle_light()
	if "--round-tower-example" in OS.get_cmdline_user_args():
		focus=Vector3(-8.0,1.0,0.0)
		zoom=27.0
		pitch=0.80
	if "--conservatory-example" in OS.get_cmdline_user_args():
		focus=Vector3(-7.0,1.7,-4.0)
		zoom=22.0
		pitch=0.80
	if "--arcade-example" in OS.get_cmdline_user_args():
		focus=Vector3(-7.0,0.9,-4.5)
		zoom=18.0
		pitch=0.74
	if "--stepping-example" in OS.get_cmdline_user_args():
		focus=Vector3(-8.0,0.7,-11.0)
		zoom=16.0
		pitch=0.80
	if "--manual-links-example" in OS.get_cmdline_user_args():
		focus=Vector3(.5,.7,-1.5)
		zoom=27.0
		pitch=.85
		select_tool(7)
	if "--styles-example" in OS.get_cmdline_user_args():
		focus=Vector3(-5.5,0.7,0.0)
		zoom=24.0
		pitch=0.75
	if "--terrace-example" in OS.get_cmdline_user_args():
		focus=Vector3(-5.5,1.3,0.0)
		zoom=24.0
		pitch=0.75
	if "--town-example" in OS.get_cmdline_user_args():
		focus=Vector3(-1,0.7,0)
		zoom=43.0
		pitch=0.85
	if "--relay-example" in OS.get_cmdline_user_args():
		focus=Vector3(-10,0.7,-0.5)
		zoom=22.0
		pitch=0.80
	_update_camera()
	if "--verify-playtest" in OS.get_cmdline_user_args() and not persistence:
		RenderCapture.verify_playtest.call_deferred(self)

func _setup_life(prepared:Node3D=null) -> void:
	life = Life.new() if prepared==null else prepared
	life.name = "StreetLife"
	if prepared==null:
		add_child(life)
		life.setup(state)
	else:life.show()
	life.view_camera=camera
	life.arrival_callback = func(kind: String) -> void: preload("res://scripts/audio/city_creation_chamber_context.gd").arrival(self,kind)
	life.concert_callback = _on_concert_event
	life.production_callback = _on_bread_produced
	life.wish_callback = _on_site_wish_completed
	life.purchase_callback = func(shop_id:String,home_id:String)->void: music.queue_bakery_cue("purchased",shop_id,home_id)
	life.craft_callback = _on_craft_event
	life.quality_callback = _on_quality_changed
	life.cafe_callback = _on_cafe_event
	life.travel_callback = func(actor,kind,id,at):
		music.queue_travel(actor,kind,id,at)
		if has_meta("musical_archways"):get_meta("musical_archways").crossing(actor,kind,id,at)
	music.clear_tram_cues()
	life.tram_callback=music.queue_tram_chime
	music.tram_source_gate=life.tram.source_valid
	music.travel_source_gate = life.travel_source_valid
	life.concert_start_gate = music.concert_can_start
	if music!=null:town.living_music.metronomes.bind_life(music,life)

func _setup_world() -> void:
	environment_rig.setup(self)
	sun = environment_rig.sun
	camera = Camera3D.new()
	camera.name = "Camera"
	camera.projection = Camera3D.PROJECTION_ORTHOGONAL
	camera.near = 0.1
	# The editable parcel stays 80m; retain the surrounding valley and full
	# distant mountain silhouettes when the orthographic camera pulls back.
	camera.far = 400.0
	add_child(camera)
	camera.current = true

func _setup_ui() -> void:
	ui_layer = CanvasLayer.new()
	ui_layer.name = "Interface"
	add_child(ui_layer)
	var root := Control.new()
	root.name = "Root"
	root.set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT)
	root.mouse_filter = Control.MOUSE_FILTER_IGNORE
	root.theme = UI.make_theme()
	root.theme.default_font_size = 16
	ui_layer.add_child(root)
	var header := _panel(root, Vector2(24, 24), Vector2(284, 0))
	header.name = "Column"
	header.get_parent().name = "PaperHeader"
	var title := _label(Copy.GAME_TITLE, 28)
	header.add_child(title)
	subtitle_label = _label(Copy.GAME_SUBTITLE_DAY, 14)
	subtitle_label.add_theme_color_override("font_color", UI.MUTED)
	header.add_child(subtitle_label)
	header.add_child(HSeparator.new())
	quest = _label("", 15)
	header.add_child(quest)
	info = _label("", 13)
	info.add_theme_color_override("font_color", UI.MUTED)
	header.add_child(info)
	life_info = _label("", 13)
	header.add_child(life_info)
	for label: Label in [quest,info,life_info]:
		label.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART
		label.custom_minimum_size.x=252
	gallery_button=_button("作品收藏",func()->void: gallery.open_panel())
	gallery_button.name="Collection"
	gallery_button.tooltip_text="收藏这一刻，或打开另一座河湾 · Ctrl+O"
	header.add_child(gallery_button)
	var audition_button:=_button("♫ 点房试听 · P",func()->void: select_tool(4))
	audition_button.name="HouseAudition"
	audition_button.tooltip_text="点一排房屋弹奏河湾；层高改变音区，街坊改变乐器。"
	header.add_child(audition_button)
	var toolbar := PanelContainer.new()
	toolbar.name = "Toolbar"
	toolbar.add_theme_stylebox_override("panel", UI.panel(10))
	root.add_child(toolbar)
	toolbar.set_anchors_and_offsets_preset(Control.PRESET_CENTER_BOTTOM)
	toolbar.offset_left = -476
	toolbar.offset_right = 476
	toolbar.offset_top = -97
	toolbar.offset_bottom = -24
	var row := HBoxContainer.new()
	row.add_theme_constant_override("separation", 6)
	toolbar.add_child(row)
	for index in range(TOOL_NAMES.size()):
		var button := _button("%d  %s" % [index + 1, TOOL_NAMES[index]], func() -> void: select_tool(index))
		button.name = "Tool%d" % index
		button.custom_minimum_size = Vector2(80, 48)
		button.tooltip_text = Copy.TOOL_TOOLTIPS[index]
		row.add_child(button)
		tool_buttons.append(button)
	undo_button = _button("↶", func() -> void: _history(false))
	undo_button.tooltip_text = "撤销 · Ctrl+Z"
	undo_button.name = "Undo"
	row.add_child(undo_button)
	redo_button = _button("↷", func() -> void: _history(true))
	redo_button.tooltip_text = "重做 · Ctrl+Shift+Z"
	redo_button.name = "Redo"
	row.add_child(redo_button)
	var actions := HBoxContainer.new()
	actions.name = "Actions"
	root.add_child(actions)
	actions.set_anchors_and_offsets_preset(Control.PRESET_TOP_RIGHT)
	actions.offset_left = -540
	actions.offset_top = 24
	actions.offset_right = -24
	var save := _button("保存", save_city)
	save.name = "Save"
	save.tooltip_text = "保存当前继续作品 · Ctrl+S"
	actions.add_child(save)
	preload("res://scripts/ui/city_creation_house_adapter.gd").setup(self,root)
	preload("res://scripts/ui/city_creation_tool_option_adapter.gd").setup(self,root)
	_setup_district_panel(root)
	var help := _panel(root, Vector2(24, -168), Vector2(284, 0))
	help.get_parent().set_anchors_and_offsets_preset(Control.PRESET_BOTTOM_LEFT)
	var help_panel := help.get_parent() as Control
	help_panel.offset_left = 24
	help_panel.offset_right = 308
	help_panel.offset_top = -260
	help_panel.offset_bottom = -112
	# Anchor the content's actual minimum height above the toolbar, including
	# translated/wrapped lines in smaller windows.
	var fit_help := func() -> void:
		help_panel.offset_top=-112.0-maxf(148.0,help.get_combined_minimum_size().y+32.0)
	help.minimum_size_changed.connect(fit_help)
	hint = _label("", 14)
	hint.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART
	hint.custom_minimum_size.x=252
	help.add_child(hint)
	var shortcut_footer := _label("滚轮缩放 · 右键转动 · 中键平移\nH 全景 · F 隐藏界面 · F1 手札", 12)
	shortcut_footer.add_theme_color_override("font_color", UI.MUTED)
	help.add_child(shortcut_footer)
	toast = _label("", 16)
	toast.add_theme_color_override("font_color", UI.PAPER)
	var toast_style := UI.toast_style(12)
	toast.add_theme_stylebox_override("normal", toast_style)
	toast.mouse_filter = Control.MOUSE_FILTER_IGNORE
	root.add_child(toast)
	toast.set_anchors_and_offsets_preset(Control.PRESET_CENTER_BOTTOM)
	toast.offset_left = -260
	toast.offset_right = 260
	toast.offset_top = -158
	toast.offset_bottom = -112
	toast.autowrap_mode = TextServer.AUTOWRAP_WORD_SMART
	toast.horizontal_alignment = HORIZONTAL_ALIGNMENT_CENTER
	var fit_toast:=func()->void:
		preload("res://scripts/ui/city_creation_manuscript_toast.gd").fit(self,root)
	toast.minimum_size_changed.connect(fit_toast)
	root.resized.connect(fit_toast)
	root.resized.connect(func()->void: _refresh_ui.call_deferred())

func _setup_district_panel(root: Control) -> void:
	preload("res://scripts/ui/city_creation_tool_option_adapter.gd").district(self,root)


func _panel(parent: Control, position_value: Vector2, minimum: Vector2) -> VBoxContainer:
	var panel := PanelContainer.new()
	panel.position = position_value
	panel.custom_minimum_size = minimum
	panel.add_theme_stylebox_override("panel", UI.panel(16))
	parent.add_child(panel)
	var column := VBoxContainer.new()
	column.add_theme_constant_override("separation", 8)
	panel.add_child(column)
	return column

func _label(text_value: String, font_size: int) -> Label:
	var label := Label.new()
	label.text = text_value
	label.add_theme_font_size_override("font_size", font_size)
	label.mouse_filter = Control.MOUSE_FILTER_IGNORE
	return label

func _button(text_value: String, action: Callable) -> Button:
	var button := Button.new()
	button.text = text_value
	button.focus_mode = Control.FOCUS_NONE
	button.pressed.connect(action)
	return button

func _music_catalog_signature()->int:
	return hash([state.get_instance_id(),Music.Catalog.signature(state)])

func _refresh_city_music()->void:
	# Free-ground edits affect spatial intent, but not household timbres.
	# Water changes also invalidate source proximity. Keep links/zones fresh without deriving
	# every bell tower, district and arrangement again after an unrelated brush.
	var key:=_music_catalog_signature()
	if key==_music_catalog_key and music._pluck_city==state:
		music._refresh_acoustic()
		return
	_music_catalog_key=key
	music.update_city(state,town.music_catalog if town!=null else {})

func _refresh_house_music_traits(ids: Array[String])->void:
	music.update_house_traits(state,ids)
	_music_catalog_key=_music_catalog_signature()

func _refresh_ui() -> void:
	if _edit_pending:
		hint.text = Copy.EDIT_PENDING_HINT
		return
	var rooms := 0
	var terraces := 0
	completed.clear()
	for house: Dictionary in state.houses:
		for cell: Dictionary in house.cells:
			if cell.kind == "terrace": terraces += 1
			else: rooms += 1
			if str(cell.get("source","seed")) == "player":
				completed["terrace" if cell.kind == "terrace" else "raise" if int(cell.level) > 0 else "extend"] = true
	for road: Dictionary in state.roads:
		if str(road.get("source","seed")) == "player": completed["road"] = true
	_refresh_city_music()
	if subtitle_label != null:
		subtitle_label.text = Copy.LIGHT_PHASE_SUBTITLES[clampi(light_phase, 0, 2)]
	if light_button != null:
		light_button.tooltip_text = Copy.LIGHT_PHASE_TOOLTIPS[clampi(light_phase, 0, 2)]
	if undo_button != null:
		undo_button.tooltip_text = ("撤销 · %s · Ctrl+Z" % str(state._undo[-1].label)) if not state._undo.is_empty() else "撤销 · Ctrl+Z"
	if redo_button != null:
		redo_button.tooltip_text = ("重做 · %s · Ctrl+Shift+Z" % str(state._redo[-1].label)) if not state._redo.is_empty() else "重做 · Ctrl+Shift+Z"
	info.text = "%d 座房屋  ·  %d 房间  ·  %d 露台" % [state.houses.size(), rooms, terraces]
	if music.tower_count()>0: info.text += "  ·  %d 钟楼" % music.tower_count()
	var courts: Array=state.courtyard_plans()
	if not courts.is_empty(): info.text += "  ·  %d 内院" % courts.size()
	quest.text = "今天，给河湾添一点变化\n%s 扩展一格房屋\n%s 做一处高低屋顶\n%s 留一片露台\n%s 拉一条路到门前" % [_check("extend"), _check("raise"), _check("terrace"), _check("road")]
	if get_viewport().get_visible_rect().size.y<820:
		quest.text="给河湾添一点变化\n%s拓房  %s加层  %s露台  %s接路" % [_check("extend"),_check("raise"),_check("terrace"),_check("road")]
	var planning:Dictionary=state.synergy_buffs()
	if float(planning.expansion_multiplier)>1.:quest.text+="\n♫ "+str(planning.label)
	for chord:String in planning.active_chords:quest.text+="\n♫ "+str(State.SynergyBuffs.CHORD_NAMES[chord])
	if _painted_tool!=tool:
		var changed:Array=range(tool_buttons.size()) if _painted_tool<0 else [_painted_tool,tool]
		for i:int in changed:
			if tool_buttons[i].get_meta("vector_seal",false):
				tool_buttons[i].active=i==tool;tool_buttons[i].queue_redraw()
			else:
				for visual_state in ["normal", "hover", "pressed"]:
					tool_buttons[i].add_theme_stylebox_override(visual_state, UI.button(visual_state, i == tool))
				tool_buttons[i].add_theme_color_override("font_color", UI.PAPER if i == tool else UI.INK)
		_painted_tool=tool
	hint.text = Copy.TOOL_HINTS[tool]
	if tool==7 and district_link_mode:
		hint.text = Copy.DISTRICT_LINK_HINT
	if not guided_hint.is_empty(): hint.text=guided_hint
	_refresh_place()
	_refresh_district()
	_refresh_bakeries()
	_refresh_workshops()
	_refresh_cafes()
	_refresh_concert()
	if gallery!=null:gallery.observe_archive()
	if journal!=null: journal.refresh()
	if signatures!=null:signatures.refresh()
	if score_ribbon!=null:score_ribbon.refresh()
	if tactile_dock!=null:tactile_dock.refresh()
	if spatial_popover!=null:spatial_popover.refresh()

func _check(key: String) -> String:
	return "●" if completed.has(key) else "○"

func select_tool(index: int) -> void:
	if has_meta("ground_landmark_tool"):get_meta("ground_landmark_tool").cancel()
	strum_hold.cancel()
	guided_hint=""
	tool = index
	_cancel_draft()
	place_panel.visible = false
	if spatial_popover!=null:spatial_popover.close()
	house_module_mode=false
	vegetation_panel.visible = tool == 5
	water_panel.visible = tool == 6
	road_panel.visible = tool == 2
	removal_panel.visible = tool == 3
	district_panel.visible = tool == 7
	if terrain_brush!=null: terrain_brush.select(tool==8)
	town.show_districts(tool == 7)
	_refresh_ui()

func _update_camera() -> void:
	environment_rig.set_view(pitch)
	focus.x=clampf(focus.x,State.WORLD_RECT.position.x,State.WORLD_RECT.end.x)
	focus.z=clampf(focus.z,State.WORLD_RECT.position.y,State.WORLD_RECT.end.y)
	zoom=clampf(zoom,State.Bounds.MIN_ZOOM,State.Bounds.MAX_ZOOM)
	if town != null and town.meadow != null: town.meadow.set_view_scale(zoom)
	if town != null and town.shore != null: town.shore.set_view_scale(zoom)
	if town != null: town.path_pebbles.set_view_scale(zoom)
	camera.size = zoom
	var direction := Vector3(sin(yaw) * cos(pitch), sin(pitch), cos(yaw) * cos(pitch))
	# Orthographic zoom changes framing, not perspective. Pull back far enough
	# that the full expanded parcel remains in front of the near plane.
	if camera_rig.strolling:
		camera.position = focus
		camera.look_at(focus-direction*6.5)
	else:
		camera.position = focus + direction * camera_rig.orthographic_distance(zoom,pitch)
		camera.look_at(focus)
	if music != null: music.set_listener_frame(Vector2(focus.x,focus.z),Vector2(camera.global_basis.x.x,camera.global_basis.x.z),zoom,_acoustic_in_view,_acoustic_point_in_view)
	if ambience != null: ambience.set_view(Vector2(focus.x,focus.z),zoom,light_phase)

func _acoustic_in_view(house_id: String)->bool:
	var row: Dictionary=music._house_music.get(house_id,{})
	if row.is_empty(): return false
	var at: Vector2=row.position
	return camera.is_position_in_frustum(Vector3(at.x,float(row.get("base_y",0.0))+.85,at.y))

func _acoustic_point_in_view(at: Vector2)->bool:
	# Sound follows the published surface; a held edit must not synchronously
	# prepare a second height field just to test a transient crossing cue.
	var y: float=state._ground_terrain.height_at(at)
	return camera.is_position_in_frustum(Vector3(at.x,y+.7,at.y))

func _ambient_visible_samples()->Array[Vector2]:
	# Equal screen-area strata projected onto the water plane cover the real
	# aspect ratio, orbit angle and first-person camera as well as full-city zoom.
	var result: Array[Vector2]=[]
	var size_value := get_viewport().get_visible_rect().size
	for y in range(9):
		for x in range(9):
			var jitter := Vector2(sin(x*17.3+y*31.7),sin(x*29.7+y*11.3))*.25
			var screen := (Vector2(x,y)+Vector2.ONE*.5+jitter)/9.0*size_value
			var origin := camera.project_ray_origin(screen)
			var direction := camera.project_ray_normal(screen)
			if absf(direction.y)<.00001: continue
			var distance := (State.Terrain.WATER_LEVEL-origin.y)/direction.y
			if distance<=0.0: continue
			var point := origin+direction*distance
			var at := Vector2(point.x,point.z)
			if state.WORLD_RECT.has_point(at): result.append(at)
	return result

func home_camera() -> void:
	if camera_rig.strolling: camera_rig.toggle(self)
	focus = Vector3(0, 0.7, 0)
	yaw = 0.62
	pitch = 0.85
	zoom = 96.0
	_update_camera()

func _input(event: InputEvent) -> void:
	if get_meta("solo_spotlight").handle_input(event):get_viewport().set_input_as_handled();return
	if strum_hold.handle_input(self,event):
		get_viewport().set_input_as_handled();return
	if gallery!=null and gallery.busy:return
	if guide!=null and guide.visible():
		if event is InputEventKey and event.pressed and event.keycode in [KEY_ESCAPE,KEY_F1]:
			guide.close_panel()
			get_viewport().set_input_as_handled()
		return
	if ledger!=null and ledger.visible() and ledger.blocks_world(event):
		if event is InputEventKey and event.pressed and event.keycode in [KEY_ESCAPE,KEY_L]:
			ledger.close_panel()
			get_viewport().set_input_as_handled()
		elif event is InputEventKey and event.pressed and event.keycode == KEY_F1 and guide != null:
			guide.open_panel(1)
			get_viewport().set_input_as_handled()
		return
	if journal!=null and journal.panel.visible and journal.blocks_world(event):
		if event is InputEventKey and event.pressed and event.keycode==KEY_ESCAPE:
			journal.close_panel()
			get_viewport().set_input_as_handled()
		elif event is InputEventKey and event.pressed and event.keycode == KEY_F1 and guide != null:
			guide.open_panel(0)
			get_viewport().set_input_as_handled()
		return
	if gallery!=null and gallery.panel.visible:
		if event is InputEventKey and event.pressed and event.keycode==KEY_ESCAPE:
			gallery.close_panel()
			get_viewport().set_input_as_handled()
		return
	if camera_rig.tour.handle(self,event):get_viewport().set_input_as_handled();return
	if camera_rig.bench_view.handle(self,event):get_viewport().set_input_as_handled();return
	if has_meta("ground_landmark_tool") and get_meta("ground_landmark_tool").handle(event):get_viewport().set_input_as_handled();return
	if has_meta("house_rotation_input") and get_meta("house_rotation_input").handle(event):
		get_viewport().set_input_as_handled();return
	if get_meta("road_tool").input(event):get_viewport().set_input_as_handled();return
	if conductor_gesture!=null and conductor_gesture.handle_input(event):
		get_viewport().set_input_as_handled();return
	if event is InputEventKey and event.keycode==KEY_SHIFT:
		removal_shift = event.pressed
		preview_key = ""
	if event is InputEventMouseMotion:
		pointer = event.position
		removal_shift = event.shift_pressed
		if orbiting:
			yaw -= event.relative.x * 0.008
			pitch = clampf(pitch + event.relative.y * 0.005, -0.25 if camera_rig.strolling else 0.3, 1.0 if camera_rig.strolling else 1.2)
			_update_camera()
			get_viewport().set_input_as_handled()
		elif panning:
			var right := camera.global_basis.x
			var forward := Vector3(-right.z, 0, right.x)
			focus += (-right * event.relative.x + forward * event.relative.y) * zoom / get_viewport().get_visible_rect().size.y
			_update_camera()
			get_viewport().set_input_as_handled()
	if event is InputEventMouseButton and not event.pressed:
		pointer = event.position
		if event.button_index == MOUSE_BUTTON_RIGHT: orbiting = false
		if event.button_index == MOUSE_BUTTON_MIDDLE: panning = false
		if event.button_index == MOUSE_BUTTON_LEFT and road_drawing: _finish_road()
		if event.button_index == MOUSE_BUTTON_LEFT and vegetation_drawing: _finish_vegetation()
		if event.button_index == MOUSE_BUTTON_LEFT and water_drawing: _finish_water()
		if event.button_index == MOUSE_BUTTON_LEFT and district_drawing: _finish_district()
		if event.button_index == MOUSE_BUTTON_LEFT and district_link_drawing: _finish_district_link()
		if event.button_index == MOUSE_BUTTON_LEFT and house_drawing: _finish_house_stroke()
		if event.button_index == MOUSE_BUTTON_LEFT and terrain_brush!=null and terrain_brush.drawing: terrain_brush.finish()
	if event is InputEventKey and event.pressed and not event.echo:
		if get_viewport().gui_get_focus_owner() is LineEdit or get_viewport().gui_get_focus_owner() is TextEdit: return
		if event.ctrl_pressed:
			if event.keycode == KEY_Z: _history(event.shift_pressed)
			elif event.keycode == KEY_Y: _history(true)
			elif event.keycode == KEY_S: save_city()
			elif event.keycode == KEY_O: gallery.open_panel()
			else: return
		elif event.keycode >= KEY_1 and event.keycode <= KEY_9: select_tool(2 if event.keycode==KEY_8 else event.keycode - KEY_1)
		elif event.keycode == KEY_H: home_camera()
		elif event.keycode == KEY_J: journal.open_panel()
		elif event.keycode == KEY_L: ledger.open_panel()
		elif event.keycode == KEY_F1 and guide != null: guide.open_panel()
		elif event.keycode == KEY_V: camera_rig.toggle(self)
		elif event.keycode == KEY_F12: camera_rig.capture(self)
		elif event.keycode == KEY_F10: RenderCapture.capture(self,render_capture_directory)
		elif event.keycode == KEY_F: ui_layer.visible = not ui_layer.visible
		elif event.keycode == KEY_ESCAPE:
			if spatial_popover!=null and not spatial_popover.target_house_id.is_empty():
				spatial_popover.close();selected_house="";house_module_mode=false
			else:_cancel_draft();house_module_mode=false;preview_key=""
		elif event.keycode == KEY_R and tool == 2:
			_cancel_draft()
			road_straight = not road_straight
			var mode: OptionButton = road_panel.find_child("RoadMode",true,false)
			mode.select(1 if road_straight else 0)
			if tactile_dock!=null:tactile_dock.refresh()
		elif event.keycode == KEY_SPACE and road_drawing and road_draft_straight: _lock_road_segment()
		else: return
		get_viewport().set_input_as_handled()

func _unhandled_input(event: InputEvent) -> void:
	if gallery!=null and gallery.busy:return
	if guide!=null and guide.visible(): return
	if camera_rig.strolling:
		if event is InputEventMouseButton and event.button_index==MOUSE_BUTTON_RIGHT: orbiting=event.pressed
		return
	if guide!=null and guide.visible(): return
	if ledger!=null and ledger.visible() and ledger.blocks_world(event): return
	if journal!=null and journal.panel.visible and journal.blocks_world(event): return
	if gallery!=null and gallery.panel.visible: return
	if strum_hold.active() and event is InputEventMouseButton and event.button_index==MOUSE_BUTTON_LEFT:
		get_viewport().set_input_as_handled();return
	if event is InputEventMouseMotion and house_drawing:
		_append_house_stroke()
		get_viewport().set_input_as_handled()
		return
	if get_meta("road_tool").unhandled(event):get_viewport().set_input_as_handled();return
	if event is InputEventMouseButton:
		pointer = event.position
		if not event.pressed: return
		if (house_drawing or (terrain_brush!=null and terrain_brush.drawing)) and event.button_index!=MOUSE_BUTTON_LEFT: _cancel_draft()
		match event.button_index:
			MOUSE_BUTTON_WHEEL_UP:
				zoom = maxf(State.Bounds.MIN_ZOOM, zoom * 0.9)
				_update_camera()
			MOUSE_BUTTON_WHEEL_DOWN:
				zoom = minf(State.Bounds.MAX_ZOOM, zoom * 1.1)
				_update_camera()
			MOUSE_BUTTON_RIGHT:
				if road_drawing and road_draft_straight:
					_lock_road_segment()
					get_viewport().set_input_as_handled()
				else: orbiting = true
			MOUSE_BUTTON_MIDDLE: panning = true
			MOUSE_BUTTON_LEFT:
				if _edit_pending and tool not in [0,1,2]:
					_message(Copy.EDIT_PENDING_ROAD_TOAST)
					return
				if tool in [0,1,4] and event.shift_pressed:
					var previous:=tool;tool=3;removal_shift=false;_update_hover();_commit_click();tool=previous
				elif tool in [0,1]:
					_update_hover()
					if candidate.has("select"):_commit_click()
					else:_begin_house_stroke()
				elif tool == 2:
					if road_roundabout:
						_after_edit(state.remove_roundabout(_ground_at(pointer)) if event.shift_pressed else state.add_roundabout(_ground_at(pointer)),"road")
					elif event.shift_pressed or Input.is_key_pressed(KEY_SHIFT):
						var road_id: String = state.road_at(_ground_at(pointer))
						_after_edit(state.remove_road(road_id), "erase")
					else:
						road_drawing = true
						road_draft_straight = road_straight or event.alt_pressed or Input.is_key_pressed(KEY_ALT)
						road_locked_segments = 0
						road_points.clear()
						road_gesture.clear()
						_append_road_point()
				elif tool == 5:
					vegetation_drawing = true
					vegetation_erasing = event.shift_pressed or Input.is_key_pressed(KEY_SHIFT)
					vegetation_points.clear()
					_append_vegetation_point()
				elif tool == 6:
					if event.shift_pressed:
						_after_edit(state.remove_water_at(_ground_at(pointer)), "erase")
					else:
						water_drawing = true
						water_points.clear()
						_append_water_point()
				elif tool == 7:
					if district_link_mode:
						_begin_district_link(event.shift_pressed)
					elif event.shift_pressed:
						_after_edit(state.remove_district_at(_ground_at(pointer)), "erase")
					else:
						district_drawing = true
						district_points.clear()
						district_distance = 0.0
						var district: Dictionary = state.district_at(_ground_at(pointer))
						district_start_id = str(district.get("id", ""))
						_append_district_point()
				elif tool == 8:
					terrain_brush.begin(event.shift_pressed or Input.is_key_pressed(KEY_SHIFT))
				else:
					removal_shift = event.shift_pressed
					_update_hover()
					_commit_click()

func _process(delta: float) -> void:
	preload("res://scripts/audio/city_creation_close_life_audio.gd").update(self,delta)
	chemistry_brush.tick(delta)
	strum_hold.update(self)
	if gallery!=null and not gallery.preview_id.is_empty():gallery.tick_preview();return
	music.attention.dragging=house_drawing or road_drawing or vegetation_drawing or water_drawing or district_drawing or district_link_drawing or (terrain_brush!=null and terrain_brush.drawing)
	music.attention_strolling=camera_rig.strolling
	camera_rig.update(self, delta)
	if spatial_popover!=null:spatial_popover.follow()
	if intuitive_guidance!=null:intuitive_guidance.update_guidance(delta)
	if gallery!=null and gallery.busy: return
	if _color_ui_pending and not _edit_pending:
		_color_ui_pending=false
		if journal!=null: journal.refresh_palette()
	if _edit_ui_pending and not _edit_pending:
		_edit_ui_pending=false
		if town.budget_rebuild!=null:town.budget_rebuild.hold_retirement_this_frame()
		var ui_started:=Time.get_ticks_usec()
		_refresh_ui()
		_edit_report["ui_ms"]=(Time.get_ticks_usec()-ui_started)/1000.0
		if _save_requested:
			_save_requested=false
			save_city()
	_poll_edit_budget()
	if not _edit_pending:town.quality_visual.poll(town)
	strum_hold.hover(self)
	music.reply.update_links((life.district_reply_pairs()+music.manual_reply_pairs()) if not _edit_pending else [],not _edit_pending and not life.budget_sync_pending())
	var concert_view: Dictionary = life.concert_view()
	music.set_concert_view(concert_view)
	cafe_snapshot=life.cafe_view()
	music.set_cafe_view(cafe_snapshot)
	var cafe_music: Dictionary=music.cafe_music_report()
	for id: String in cafe_snapshot:
		cafe_snapshot[id].music_audible=bool(cafe_music.audible) and str(cafe_music.source_id)==id
	if not _edit_pending: town.update_cafes(cafe_snapshot)
	resonance_snapshot = music.resonance_state(concert_view)
	var finale:Dictionary=life.finale_view()
	resonance_snapshot["finale_glow"]=float(finale.get("strength",0.))
	resonance_snapshot["pluck"]=music.house_pluck_report()
	ambience.set_muted(music.muted)
	ambience.set_foreground(bool(resonance_snapshot.get("concert_active",false)) or bool(resonance_snapshot.pluck.get("audible",false)) or bool(resonance_snapshot.get("canon",{}).get("audible",false)) or bool(music.tram_music_report().audible))
	if not _edit_pending:town.living_music.update(music._house_music,resonance_snapshot,_music_catalog_key,music.muted)
	town.update_city_resonance_visuals(resonance_snapshot)
	life.tram.update_music(town.living_music,float(resonance_snapshot.get("clock_sec",0.)))
	var grand:Dictionary=music.grand_festival_report()
	if not bool(grand.active) and not finale.is_empty():grand=finale
	town.grand_festival_visual.update(grand,life._network,life.tram.plan,str(life.connected_houses.get(grand.venue_id,"")))
	town.update_travel_music(music.travel_music_report())
	world_toys.update(self,delta)
	weather_visual.update()
	conductor_gesture.update()
	frame_samples.append(delta*1000.0)
	if frame_samples.size() > 240: frame_samples.pop_front()
	life_ui_timer -= delta
	if life_ui_timer < 0.0 and not _edit_pending:
		life_ui_timer = 0.5
		life_info.text = life.summary()
		if has_meta("regional_echo_badge"):
			var echo:Dictionary=state.regional_echo();var badge:Label=get_meta("regional_echo_badge")
			badge.text="♫ "+str(echo.label);badge.visible=int(echo.tier)>=2
		_refresh_concert()
		_refresh_district()
		if tactile_dock!=null:tactile_dock.refresh()
		_refresh_bakeries()
		_refresh_workshops()
		_refresh_cafes()
		if journal!=null: journal.refresh()
		if signatures!=null:signatures.refresh()
		if ledger!=null: ledger.refresh()
		_refresh_household()
		town.refresh_ecology()
	life_save_timer -= delta
	if life_save_timer < 0.0:
		life_save_timer = 15.0
		if persistence and not save_blocked and not _edit_pending:
			_capture_journeys()
			var saved: Dictionary = state.save_city(SAVE_PATH) if state.dirty else {"ok":true}
			if not saved.ok: _message(saved.message)
	if toast_time > 0.0:
		toast_time -= delta
		toast.visible = toast_time > 0.0
	if save_delay >= 0.0:
		save_delay -= delta
		if save_delay < 0.0 and state.dirty and persistence and not save_blocked and not _edit_pending:
			_capture_journeys()
			var saved: Dictionary = state.save_city(SAVE_PATH)
			if not saved.ok: _message(saved.message)
	if not orbiting and not panning and not camera_rig.strolling:
		if terrain_brush!=null and terrain_brush.drawing:
			terrain_brush.append_point()
		elif house_drawing:
			if get_viewport().gui_get_hovered_control()==null: _append_house_stroke()
		elif road_drawing: _append_road_point()
		elif vegetation_drawing: _append_vegetation_point()
		elif water_drawing: _append_water_point()
		elif district_link_drawing: _preview_district_link()
		elif district_drawing: _append_district_point()
		elif _edit_pending and tool not in [0,1]: pass
		elif not ui_layer.visible:
			town.clear_preview()
			preview_key = ""
		elif get_viewport().gui_get_hovered_control() == null and (not _edit_pending or tool in [0,1]): _update_hover()
		else:
			town.clear_preview()
			preview_key = ""
			if tool==3: removal_info.text=REMOVAL_HINT

func _ray_hit(screen: Vector2) -> Dictionary:
	# House editing keeps the published collision and the committed addition
	# outlines available. Road gestures still wait for the atomic ground update.
	if _edit_pending and tool not in [0,1]: return {}
	var origin := camera.project_ray_origin(screen)
	var direction := camera.project_ray_normal(screen)
	var query := PhysicsRayQueryParameters3D.create(origin, origin + direction * 120.0)
	var hit:Dictionary=get_world_3d().direct_space_state.intersect_ray(query)
	if _edit_pending:
		var addition:Dictionary=pending_modules.pick(origin,direction)
		if not addition.is_empty() and (hit.is_empty() or pending_modules.supersedes(town,hit,addition) or origin.distance_squared_to(addition.position)<origin.distance_squared_to(hit.position)):return addition
	return hit

func _ground_at(screen: Vector2) -> Vector2:
	var origin := camera.project_ray_origin(screen)
	var direction := camera.project_ray_normal(screen)
	var query := PhysicsRayQueryParameters3D.create(origin,origin+direction*120.0,2)
	var hit := get_world_3d().direct_space_state.intersect_ray(query)
	if hit.is_empty(): return _plane_at(screen,0.0)
	var at: Vector3 = hit.position
	# Paint on the visible water surface rather than through it onto the bed.
	if at.y<State.Terrain.WATER_LEVEL:
		var water_at := _plane_at(screen,State.Terrain.WATER_LEVEL)
		if state.water_clearance(water_at)<=0.0: return water_at
	return Vector2(at.x,at.z)

func _snap_house_origin(at: Vector2) -> Vector2:
	if Input.is_key_pressed(KEY_ALT): return at
	var best := at
	var distance := 0.35*0.35
	for house: Dictionary in state.houses:
		for cell: Dictionary in house.cells:
			if int(cell.level)!=0: continue
			var center := Vector2(house.origin[0],house.origin[1])+Vector2(cell.x,cell.z)*1.8
			for side: Vector2 in [Vector2.LEFT,Vector2.RIGHT,Vector2.UP,Vector2.DOWN]:
				var candidate_at := center+side*1.8
				var candidate_distance := candidate_at.distance_squared_to(at)
				if candidate_distance>=distance: continue
				if not state.validate_add_house(candidate_at).ok: continue
				best=candidate_at
				distance=candidate_distance
	return best

func _plane_at(screen: Vector2, height: float) -> Vector2:
	var origin := camera.project_ray_origin(screen)
	var direction := camera.project_ray_normal(screen)
	var distance := (height-origin.y) / direction.y
	var p := origin + direction * distance
	return Vector2(p.x, p.z)

func _update_hover() -> void:
	if has_meta("ground_landmark_tool") and get_meta("ground_landmark_tool").hover():return
	if strum_hold.active():
		town.clear_preview();preview_key="";candidate.clear();return
	if signatures!=null and not signatures.placing.is_empty():
		signatures.hover(_ground_at(pointer).snapped(Vector2.ONE*.1));return
	hovered = _ray_hit(pointer)
	candidate.clear()
	if tool == 2: return
	if tool == 8:
		terrain_brush.hover()
		return
	if tool == 7:
		if district_link_mode:
			if district_link_drawing: _preview_district_link()
			else: town.clear_preview()
			return
		var ground := _ground_at(pointer)
		var district: Dictionary = state.district_at(ground)
		var district_key := str([ground, district_width, district_style, district.get("id", "")])
		if preview_key == district_key: return
		preview_key = district_key
		var single: Array[Vector2] = [ground]
		town.show_district_preview(single, district_width, district_style)
		return
	if tool == 6:
		var ground := _ground_at(pointer)
		var water_key := str([ground,water_width,water_kind])
		if preview_key == water_key: return
		preview_key = water_key
		var single: Array[Vector2] = [ground]
		_show_water_preview(single)
		return
	if tool == 5:
		var ground := _ground_at(pointer)
		var brush_key := str([ground,vegetation_kind,vegetation_single,vegetation_radius,Input.is_key_pressed(KEY_SHIFT)])
		if preview_key == brush_key: return
		preview_key = brush_key
		if town.has_method("show_vegetation_brush"):
			town.show_vegetation_brush(ground, .22 if vegetation_single else vegetation_radius, Input.is_key_pressed(KEY_SHIFT))
		return
	var body: Object = hovered.get("collider")
	if hovered.has("house_id") or (body != null and body.has_meta("house_id")):
		var house_id := str(hovered.house_id) if hovered.has("house_id") else str(body.get_meta("house_id"))
		var cell_id := str(hovered.cell_id) if hovered.has("cell_id") else str(body.get_meta("cell_id"))
		var cell := _find_cell(house_id, cell_id)
		if cell.is_empty(): return
		if tool == 4 or (tool==0 and not house_module_mode):
			candidate = {"select":house_id}
		elif tool == 3:
			var whole := remove_whole or removal_shift
			var removed: Dictionary = state.preview_remove_house(house_id) if whole else state.preview_remove_cell(house_id,cell_id)
			candidate = {"house_id":house_id,"cell_id":cell_id,"erase":true,"whole":whole,"removal":removed}
		else:
			var normal:Vector3=preload("res://scripts/world/city_creation_house_frame.gd").design_normal(town._house_record(house_id),hovered.normal,cell)
			var target := cell.duplicate(true)
			if normal.y > 0.45: target.level = int(cell.level) + 1
			elif absf(normal.x) > absf(normal.z): target.x = int(cell.x) + (1 if normal.x > 0.0 else -1)
			else: target.z = int(cell.z) + (1 if normal.z > 0.0 else -1)
			target.kind = "terrace" if tool == 1 else "room"
			candidate = {"house_id": house_id, "cell": target}
			var check: Dictionary = state.validate_add_cell(house_id, int(target.x), int(target.z), int(target.level), str(target.kind))
			candidate["valid"] = check.ok
			candidate["reason"] = check.message
	elif tool == 0:
		var position_value := _snap_house_origin(_ground_at(pointer))
		var check: Dictionary = state.validate_add_house(position_value)
		candidate = {"new_house": position_value,"base_y":state.sample_house_base_y(position_value), "valid": check.ok, "reason": check.message}
	var key := str(candidate)
	if key == preview_key: return
	preview_key = key
	town.clear_preview()
	if tool==3 and not candidate.has("erase"): removal_info.text=REMOVAL_HINT
	if candidate.has("cell"):
		town.set_preview(str(candidate.house_id), candidate.cell, bool(candidate.valid))
	elif candidate.has("new_house"):
		# A standalone preview has its own origin; it never enters the state.
		town.set_preview("", {"x":0, "z":0, "level":0, "kind":"room", "origin":[candidate.new_house.x, candidate.new_house.y],"base_y":candidate.base_y}, bool(candidate.valid))
	elif candidate.has("erase"):
		var removal: Dictionary = candidate.removal
		var cells: Array = removal.get("removed_cells",[])
		if cells.is_empty(): cells=[_find_cell(str(candidate.house_id),str(candidate.cell_id))]
		town.set_removal_preview(str(candidate.house_id),cells,bool(removal.ok))
		removal_info.text = str(removal.message).replace("已移除","将移除")
		if bool(removal.ok):
			removal_info.text += "\n"+ ("整栋房屋 · " if bool(removal.whole_house) else "单元与附属结构 · ")+"%d个单元\nCtrl+Z 可恢复原形状、名字与用途。" % int(removal.removed_count)
	chemistry_brush.building(candidate)

func _find_cell(house_id: String, cell_id: String) -> Dictionary:
	for house: Dictionary in state.houses:
		if str(house.id) == house_id:
			for cell: Dictionary in house.cells:
				if str(cell.id) == cell_id: return cell
	return {}

func _commit_click() -> void:
	if candidate.is_empty():
		if tool==4 and spatial_popover!=null:spatial_popover.close()
		return
	if candidate.has("signature"):
		signatures.commit();return
	if candidate.has("select"):
		selected_house = str(candidate.select)
		place_panel.visible = false
		if spatial_popover!=null:spatial_popover.open_for_house(selected_house)
		_refresh_place()
		_strum_house(selected_house)
		return
	if tool==4 and spatial_popover!=null:spatial_popover.close()
	var result: Dictionary
	var action_kind := "room"
	if candidate.has("erase"):
		result = state.remove_house(str(candidate.house_id)) if bool(candidate.get("whole",false)) else state.remove_cell(str(candidate.house_id), str(candidate.cell_id))
		action_kind = "erase"
	elif candidate.has("new_house"):
		result = state.add_house(candidate.new_house)
	elif candidate.has("cell"):
		var cell: Dictionary = candidate.cell
		result = state.add_cell(str(candidate.house_id), int(cell.x), int(cell.z), int(cell.level), str(cell.kind))
		action_kind = str(cell.kind)
		if result.ok:
			completed["terrace" if cell.kind == "terrace" else "raise" if int(cell.level) > 0 else "extend"] = true
	else: return
	_after_edit(result, action_kind,true,str(result.get("house_id","")) if action_kind in ["room","terrace"] else "")

func _begin_house_stroke() -> void:
	if spatial_popover!=null:spatial_popover.close()
	var first: Dictionary
	if candidate.has("cell"):
		first=candidate.cell
		house_stroke_host=str(candidate.house_id)
		var host: Dictionary=town._house_record(house_stroke_host)
		house_stroke_origin=Vector2(float(host.origin[0]),float(host.origin[1]))
		house_stroke_base_y=float(host.get("base_y",0.0))
		house_stroke_height=float(hovered.position.y)
	elif candidate.has("new_house"):
		first={"x":0,"z":0,"level":0,"kind":"room"}
		house_stroke_host=""
		house_stroke_origin=candidate.new_house
		house_stroke_base_y=state.sample_house_base_y(house_stroke_origin)
		house_stroke_height=house_stroke_base_y
	else: return
	house_drawing=true
	house_stroke.begin(first)
	house_stroke_offset=Vector2(float(first.x),float(first.z))*UNIT-(get_meta("house_rotation_input").stroke_point(_plane_at(pointer,house_stroke_height))-house_stroke_origin)
	house_stroke_key=""
	_refresh_house_stroke()

func _append_house_stroke() -> void:
	if house_stroke.append(get_meta("house_rotation_input").stroke_point(_plane_at(pointer,house_stroke_height))-house_stroke_origin+house_stroke_offset): _refresh_house_stroke()
	elif house_stroke_key!=str([state.revision,house_stroke.cells]): _refresh_house_stroke()

func _refresh_house_stroke() -> void:
	house_stroke_result=state.preview_house_stroke(house_stroke_origin,house_stroke.cells) if house_stroke_host.is_empty() else state.preview_add_cells(house_stroke_host,house_stroke.cells)
	house_stroke_key=str([state.revision,house_stroke.cells])
	var cells: Array=house_stroke_result.get("added_cells",[]) if bool(house_stroke_result.ok) else house_stroke_result.get("input_cells",house_stroke.cells)
	var preview_base := float(house_stroke_result.get("base_y",house_stroke_base_y))
	town.set_house_stroke_preview(house_stroke_origin,cells,bool(house_stroke_result.ok),preview_base,get_meta("house_rotation_input").stroke_yaw(),house_stroke_host)
	chemistry_brush.stroke()
	hint.text="松开建成这笔 · %d 个新单元\nEsc 取消，Ctrl+Z 收回整笔。" % int(house_stroke_result.get("added_count",0)) if bool(house_stroke_result.ok) else str(house_stroke_result.message)+"\n本笔全部未落定。Esc 取消。"

func _finish_house_stroke() -> void:
	if get_viewport().gui_get_hovered_control()!=null:
		_cancel_draft()
		_refresh_ui()
		return
	_append_house_stroke()
	house_drawing=false
	var kind := str(house_stroke.cells[0].kind)
	var result: Dictionary=state.add_house_stroke(house_stroke_origin,house_stroke.cells) if house_stroke_host.is_empty() else state.add_cells(house_stroke_host,house_stroke.cells)
	if result.ok and int(result.get("added_count",0))==0:
		_message("这笔没有新增单元。")
		town.clear_preview()
		_refresh_ui()
	else: _after_edit(result,kind,true,str(result.get("house_id","")))
	if not result.ok:
		town.clear_preview()
		_refresh_ui()
	preview_key=""
	house_stroke.cells.clear()
	house_stroke_result.clear()
	house_stroke_key=""

func _selected_road_width()->float:
	return 0. if road_size<0 else float(State.RoadUpgrade.sizes_for(road_style)[road_size])

func _append_road_point(force: bool=false) -> void:
	if get_meta("road_tool").active():get_meta("road_tool").update(force);return
	var p := _road_pointer_at()
	# The tail follows one screen pixel; fixed controls determine curve density.
	var pixel: float=zoom/maxf(get_viewport().get_visible_rect().size.y,1.)
	if road_points.is_empty() or (road_last_pointer.distance_to(p) > (0.00001 if force else pixel*.5)):
		var brush_started:=Time.get_ticks_usec()
		road_last_pointer = p
		if road_draft_straight:
			if road_points.size()>=2:road_points[-1]=p
			else:road_points.append(p)
			road_preview=Stroke.polyline_points(road_points)
		else:
			road_preview=road_gesture.move(p).duplicate()
			road_points=road_gesture.controls.duplicate()
			if road_points[-1]!=p:road_points.append(p)
		var curve_done:=Time.get_ticks_usec()
		var check: Dictionary = state.preview_road(road_preview,road_style,"soft",_selected_road_width(),preload("res://scripts/world/city_creation_road_decoration.gd").selected(self))
		road_preview.assign(check.points)
		var check_done:=Time.get_ticks_usec()
		var porches: int = town.preview_road(road_preview,bool(check.ok),float(check.get("width",1.25)),bool(check.get("bridge",false)),str(check.get("style",road_style)))
		town.preview.set_meta("brush_timings",{"curve_ms":(curve_done-brush_started)/1000.,"validation_ms":(check_done-curve_done)/1000.,"paint_ms":(Time.get_ticks_usec()-check_done)/1000.,"mask_ms":town.road_draft_field.last_ms})
		if road_draft_straight: town.preview_road_measure(road_preview,road_locked_segments)
		chemistry_brush.road(road_preview,float(check.get("width",1.25)),str(check.get("style",road_style)),bool(check.ok))
		var passages := int(town.preview.get_meta("passage_previews",0))
		var stepping := int(town.preview.get_meta("stepping_previews",0))
		var bridge_parts := int(town.preview.get_meta("bridge_previews",0))
		var ready := "松开：桥面与两侧栏杆会跨过水面。" if bridge_parts>0 else ("松开：浅渠会落下%d块青石汀步。" % stepping if stepping>0 else ("松开：穿过房间，留下石拱通道。" if passages>0 else "松开：这面墙会长出门廊。" if porches>0 else "松开铺好这条路。"))
		if bool(check.get("no_op",false)): ready=str(check.message)
		elif bool(check.get("upgraded",false)): ready="松开："+str(check.message)
		elif str(check.get("style",road_style)) in ["promenade","avenue","tram"]: ready="松开铺好%s。" % State.RoadUpgrade.NAMES[check.get("style",road_style)]
		var length := 0.0
		for index in range(1,road_preview.size()): length += road_preview[index-1].distance_to(road_preview[index])
		var mode_hint := " · 已锁 %d 段\n空格 / 右键锁段，松开铺好。" % road_locked_segments if road_draft_straight else "\nR 切换直拉，Esc 取消。"
		road_status.text = (ready if check.ok else str(check.message))+"\n%.1f 米" % length+mode_hint

func _lock_road_segment() -> void:
	if get_meta("road_tool").active():get_meta("road_tool").lock();return
	_append_road_point()
	if road_preview.size() < 2: return
	if road_preview[-1].distance_to(road_preview[-2]) < 0.2: return
	# Lock the exact displayed endpoint, including its legitimate road/bank
	# assistance. The duplicated tail is replaced by the next pointer position.
	road_points.assign(road_preview)
	road_points.append(road_preview[-1])
	road_locked_segments = road_preview.size()-1
	road_status.text = "已锁 %d 段；继续拖动，松开一次铺好。" % road_locked_segments

func _road_pointer_at() -> Vector2:
	var hit := _ray_hit(pointer)
	var turned:Variant=get_meta("house_rotation_input").road_point(hit)
	if turned!=null:return turned
	var body: Object = hit.get("collider")
	if body != null and body.has_meta("house_id"):
		var cell: Dictionary = body.get_meta("cell")
		var normal: Vector3 = hit.normal
		if int(cell.level)==0 and str(cell.kind)=="room" and absf(normal.y)<0.45:
			var side := Vector2i(1 if normal.x>0 else -1,0) if absf(normal.x)>absf(normal.z) else Vector2i(0,1 if normal.z>0 else -1)
			var house: Dictionary = town._house_record(str(body.get_meta("house_id")))
			var center: Vector2 = Frontage.center(house,cell)
			var point: Vector3 = hit.position
			var tangent := Vector2(float(side.y),-float(side.x))
			if absf((Vector2(point.x,point.z)-center).dot(tangent))<=Frontage.HALF_DOOR and Frontage.exposed(house,cell,side):
				return center+Vector2(side)*(UNIT*0.5+0.02)
	return _ground_at(pointer)

func _finish_road() -> void:
	if get_meta("road_tool").active():get_meta("road_tool").finish();return
	_append_road_point(true)
	road_drawing = false
	if road_points.size() < 2:
		_cancel_draft()
		return
	var result: Dictionary = state.add_road(road_preview,road_style,"none",_selected_road_width(),preload("res://scripts/world/city_creation_road_decoration.gd").selected(self))
	if result.ok: completed["road"] = true
	if bool(result.get("no_op",false)):
		_message(str(result.message))
		town.clear_preview()
	else: _after_edit(result, "road")
	road_points.clear()
	road_preview.clear()
	road_gesture.clear()
	road_locked_segments = 0
	road_draft_straight = false

func _append_vegetation_point() -> void:
	var p := _ground_at(pointer)
	if vegetation_points.is_empty() or vegetation_points[-1].distance_to(p) > 0.22:
		vegetation_points.append(p)
		if town.has_method("show_vegetation_brush"):
			town.show_vegetation_brush(p, vegetation_radius, vegetation_erasing, vegetation_points)

func _finish_vegetation() -> void:
	vegetation_drawing = false
	if vegetation_points.is_empty():
		_cancel_draft()
		return
	var result: Dictionary
	if vegetation_erasing:
		result = state.erase_vegetation_stroke(vegetation_points, vegetation_radius)
	else:
		result = state.place_plant(vegetation_points[-1],vegetation_kind) if vegetation_single else state.add_vegetation_stroke(vegetation_points, vegetation_kind, vegetation_radius)
	_after_edit(result, "erase" if vegetation_erasing else "terrace")
	vegetation_points.clear()

func _append_water_point() -> void:
	var p := _ground_at(pointer)
	if water_points.is_empty() or water_points[-1].distance_to(p) > 0.30:
		water_points.append(p)
		_show_water_preview(water_points)

func _show_water_preview(points: Array[Vector2]) -> void:
	var check: Dictionary = state.preview_water(points, water_width, water_kind)
	water_status.text = str(check.message) if not str(check.message).is_empty() else "松开留下水岸；Esc 取消。"
	if water_kind == "channel" and not water_drawing:
		water_status.text = "从已有河水或池塘起笔，拖向空地。"
	var names: Array[String] = []
	for conflict: Dictionary in check.get("conflicts",[]):
		names.append(str(conflict.get("name",conflict.id)))
	if not names.is_empty(): water_status.text += "\n" + "、".join(names)
	town.preview_water(points, water_width, bool(check.ok), check.get("conflicts",[]))

func _finish_water() -> void:
	water_drawing = false
	if water_points.is_empty():
		_cancel_draft()
		return
	_after_edit(state.add_water(water_points, water_width, water_kind), "terrace")
	water_points.clear()

func _link_district_at(at:Vector2)->Dictionary:
	var hit:Dictionary=_ray_hit(at)
	var body:Object=hit.get("collider")
	if body!=null and body.has_meta("house_id"): return state.district_for_house(str(body.get_meta("house_id")))
	return state.district_at(_ground_at(at))

func _begin_district_link(erasing:bool)->void:
	var district:Dictionary=_link_district_at(pointer)
	if district.is_empty():
		_message("从已有街坊或其中的房屋开始连线。")
		return
	district_link_start=str(district.id)
	district_link_origin=_ground_at(pointer)
	district_link_erasing=erasing
	district_link_drawing=true
	_preview_district_link()

func _preview_district_link()->void:
	var key:=str([district_link_start,pointer,focus,yaw,pitch,zoom,state.revision,district_link_erasing])
	if preview_key==key: return
	preview_key=key
	var target:Dictionary=_link_district_at(pointer)
	var valid:bool=not target.is_empty() and str(target.id)!=district_link_start
	town.show_manual_link_preview(district_link_origin,_ground_at(pointer),valid,district_link_erasing)

func _finish_district_link()->void:
	district_link_drawing=false
	if get_viewport().gui_get_hovered_control()!=null:
		_cancel_draft()
		return
	var target:Dictionary=_link_district_at(pointer)
	var target_id:=str(target.get("id",""))
	var result:Dictionary=state.unlink_districts(district_link_start,target_id) if district_link_erasing else state.link_districts(district_link_start,target_id)
	if result.ok:
		selected_district=district_link_start
		if bool(result.get("changed",true)): _after_edit(result,"terrace",false)
		else: _message(str(result.message))
	else: _message(str(result.message))
	_cancel_draft()
	_refresh_district()

func _append_district_point() -> void:
	var at := _ground_at(pointer)
	if district_points.is_empty() or district_points[-1].distance_to(at) > 0.20:
		if not district_points.is_empty(): district_distance += district_points[-1].distance_to(at)
		district_points.append(at)
		town.show_district_preview(district_points, district_width, district_style)

func _finish_district() -> void:
	_append_district_point()
	district_drawing = false
	if not district_start_id.is_empty() and district_distance < 0.6:
		selected_district = district_start_id
		_cancel_draft()
		_refresh_district()
		var selected := _selected_district_row()
		if not selected.is_empty(): _show_selected_district(selected)
		return
	var result: Dictionary = state.add_district(district_points, district_width, district_style, district_adaptive)
	if result.ok:
		var created: Dictionary = state.district_at(district_points[-1])
		selected_district = str(created.get("id", ""))
	_after_edit(result, "terrace")
	district_points.clear()
	district_start_id = ""
	district_distance = 0.0

func _selected_district_row() -> Dictionary:
	for district: Dictionary in state.districts:
		if str(district.id) == selected_district: return district
	return {}

func _show_selected_district(district: Dictionary) -> void:
	var points: Array[Vector2] = []
	for at: Array in district.points: points.append(Vector2(float(at[0]), float(at[1])))
	town.show_district_preview(points, float(district.width), str(district.style))

func _refresh_district() -> void:
	if district_panel == null or tool != 7: return
	var district := _selected_district_row()
	district_era_picker.disabled= district.is_empty()
	for i in range(State.Eras.IDS.size()): district_era_picker.set_item_disabled(i,not state.can_build_era(State.Eras.IDS[i]))
	var current_era := str(district.get("era_theme","pastoral"))
	district_era_picker.select(State.Eras.IDS.find(current_era))
	district_era_picker.tooltip_text = Copy.ERA_LORE.get(current_era, "为当前街坊指定建筑与器乐时代风貌")
	if district.is_empty(): selected_district = ""
	district_name.editable = not district.is_empty()
	if district.is_empty():
		if not district_name.has_focus(): district_name.text = ""
		district_description.tooltip_text = ""
		district_description.text = "沿房屋与庭院画一笔，把它们留在同一片街坊。\n五种声音共用晨曲节拍，留白与和声自然相融。"
	else:
		if not district_name.has_focus(): district_name.text = str(district.name)
		district_style = str(district.style)
		district_style_picker.select(DISTRICT_STYLES.find(district_style))
		district_style_picker.tooltip_text = str(Copy.DISTRICT_STYLE_INSTRUMENTS.get(district_style, ""))
		district_adaptive = bool(district.get("adaptive", false))
		district_adaptive_button.set_pressed_no_signal(district_adaptive)
		var members: Array = state.district_members(selected_district)
		var counts := {"residential":0, "bakery":0, "venue":0, "workshop":0, "garden_cafe":0, "atelier":0,"clockmaker":0,"symphony_hall":0}
		var reachable := {"bakery":0, "venue":0, "garden_cafe":0}
		for house: Dictionary in state.houses:
			if str(house.id) not in members: continue
			var role := str(house.role)
			counts[role] = int(counts[role]) + 1
			if role == "residential":
				for service: String in ["bakery", "venue", "garden_cafe"]:
					if _district_home_has_service(str(house.id), service): reachable[service] = int(reachable[service]) + 1
		district_description.text = "%d 房屋 · %d 居所 · %d 面包坊 · %d 演奏庭\n可沿路抵达 · 面包坊 %d / %d · 演奏庭 %d / %d" % [members.size(), int(counts.residential), int(counts.bakery), int(counts.venue), int(reachable.bakery), int(counts.residential), int(reachable.venue), int(counts.residential)]
		district_description.tooltip_text = "可沿路抵达的服务包含街坊外的真实连通地点。"
		var planning:Dictionary=state.synergy_buffs();var voice:Dictionary=planning.districts.get(selected_district,{})
		district_description.text+="\n♫ 声部%d栋 · 理想8～16栋\n%s"%[int(voice.get("count",0)),"主题纯净 · 生产+25%" if voice.get("pure",false) else "同一时代编制，可获生产+25%"]
		district_description.text+="\n"+str(planning.label)
		var echo:Dictionary=state.regional_echo();district_description.text+="\n"+str(echo.label)
		if echo.nodes.has(selected_district):district_description.tooltip_text+="\n地形声区 · "+str(State.RegionalEcho.REGIONS[echo.nodes[selected_district].region])
		for chord:String in State.SynergyBuffs.CHORD_NAMES:
			for scope:Dictionary in planning.chord_scopes.values():
				if selected_district in scope.district_ids and chord in scope.chords:
					district_description.text+="\n♫ "+str(State.SynergyBuffs.CHORD_NAMES[chord])
					district_description.tooltip_text+="\n\n"+str(State.SynergyBuffs.CHORD_DETAILS[chord]);break
		if int(counts.symphony_hall)>0:district_description.text+="\n交响音乐厅 %d"%int(counts.symphony_hall)
		if int(counts.workshop)>0 or int(counts.garden_cafe)>0:
			district_description.text += "\n制琴坊 %d · 茶座 %d（可达 %d/%d）" % [int(counts.workshop),int(counts.garden_cafe),int(reachable.garden_cafe),int(counts.residential)]
		if district_adaptive: district_description.text += "\n保留基调，随邻里用途添上伴奏。"
		if int(counts.residential) == 0: district_description.text += "\n先为这片庭园留下自己的声音。"
	var report: Dictionary = music.district_music_report()
	if not district.is_empty():
		var linked:=0
		for link:Dictionary in state.musical_links:
			if link.from==selected_district or link.to==selected_district: linked+=1
		district_description.text+="\n♫ 共鸣连线 · %d片街坊" % linked
	var audible_name: String = str(report.get("mix_label", DISTRICT_STYLE_NAMES[str(report.style)]))
	district_music_status.text = "♫ 正在听见 · " + audible_name if bool(report.audible) else "♫ 晨曲静候 · " + audible_name
	if bool(report.audible):
		for source: Dictionary in state.houses:
			if str(source.id) == str(report.source_id):
				district_music_status.text += "\n" + str(source.name) + " 正在演奏"
				break
	var reply: Dictionary=music.reply.report()
	if bool(reply.audible):
		district_music_status.text+="\n邻里对答 · "+("回应" if str(reply.phase)=="answer" else "轻唤")
	elif bool(reply.enabled) and int(reply.pair_count)>0:
		district_music_status.text+="\n%d 对相邻街坊 · 等下一短句" % int(reply.pair_count)
	if bool(report.pending): district_music_status.text += "\n" + str(report.get("pending_label", DISTRICT_STYLE_NAMES[str(report.pending_style)])) + " · 等待下一乐句"
	district_name.tooltip_text="街坊名称 · 按 Enter 保存\n"+district_description.text+"\n"+district_music_status.text

func _district_home_has_service(home_id: String, role: String) -> bool:
	if not life.house_connected(home_id): return false
	var start: String = str(life.connected_houses[home_id])
	for house: Dictionary in state.houses:
		if (str(house.role) != role and not (role=="venue" and house.role=="symphony_hall")) or not life.house_connected(str(house.id)): continue
		if not life._route(start, str(life.connected_houses[house.id])).is_empty(): return true
	return false

func _after_edit(result: Dictionary, kind: String, rebuild_geometry: bool=true, pluck_house: String="") -> void:
	_message(str(result.message))
	if not result.ok or bool(result.get("no_op",false)): return
	preload("res://scripts/ui/city_creation_juice_feedback.gd").edited(self,result,kind)
	if whisper_keycaps!=null and kind!="history":whisper_keycaps.record_action(tool)
	if music!=null:music.attention.notify_sculpt_action(music._playback_clock())
	var started := Time.get_ticks_usec()
	var colors: Array=result.get("appearance_house_ids",[]).duplicate()
	if result.has("appearance_house_id"): colors.append(str(result.appearance_house_id))
	if not _edit_pending and not colors.is_empty():
		var applied := true
		var color_ms := 0.0
		for id: String in colors:
			var update: Dictionary=town.try_update_house_colors(id)
			applied=applied and bool(update.applied)
			color_ms+=float(update.get("elapsed_ms",0.0))
		if not applied:rebuild_geometry=true
		if applied:
			# Only color fields changed, so existing metre heights, courtyard
			# plans and routes remain the published truth for this revision.
			state._ground_revision=state.revision
			state._raw_ground_revision=state.revision
			state._courtyard_revision=state.revision
			state._prosperity_revision=state.revision
			state._synergy_revision=state.revision
			state._special_site_key=[state.revision,state.revision]
			state._region_visibility_revision=state.revision
			state._region_network_revision=state.revision
			state._regional_echo_revision=state.revision
			life.last_revision=state.revision
			town.retain_geometry_views()
			_color_ui_pending=true
			save_delay=3.0
			music.play_edit(kind)
			for id: String in colors: town.animate_house_bounce(id,0.04)
			var elapsed: float=(Time.get_ticks_usec()-started)/1000.0
			_edit_report={"mode":"colors","revision":state.revision,"request_ms":elapsed,"color_ms":color_ms,"poll_max_ms":0.0,"latency_ms":elapsed}
			edit_samples.append(elapsed)
			return
	music.clear_travel()
	_life_commit_render.clear()
	if not pluck_house.is_empty(): town.touch.queue(pluck_house)
	if budgeted_edits and (_edit_pending or rebuild_geometry):
		_edit_pending=true
		_edit_revision=state.revision
		_edit_started_usec=started
		_edit_poll_max_ms=0.0
		_edit_polls=0
		pending_modules.sync(town,kind in ["room","terrace","house"])
		life.set_budget_hold(true)
		life.begin_budget_sync()
		town.request_budget_rebuild()
		preview_key=""
		if pluck_house.is_empty(): music.play_edit(kind)
		else: music.Construction.house(music,pluck_house)
		save_delay=3.0
		_refresh_ui()
		_edit_request_ms=float(Time.get_ticks_usec()-started)/1000.0
		edit_samples.append(_edit_request_ms)
		return
	if _edit_pending:
		life.cancel_budget_sync()
		town.cancel_budget_rebuild()
		_edit_pending=false
	pending_modules.clear()
	life._sync()
	if not selected_house.is_empty() and town._house_record(selected_house).is_empty():
		selected_house=""
		place_panel.visible=false
	town.clear_preview()
	if tool==3: removal_info.text=REMOVAL_HINT
	if rebuild_geometry: town.rebuild()
	elif town.districts_visible: town._rebuild_districts()
	town.touch.publish(town)
	_rendered_waters=state.waters.duplicate(true)
	_rendered_terrain=state.terrain_strokes.duplicate(true)
	life.set_budget_hold(false)
	preview_key = ""
	if pluck_house.is_empty(): music.play_edit(kind)
	else: music.Construction.house(music,pluck_house)
	save_delay = 3.0
	_refresh_ui()
	edit_samples.append(float(Time.get_ticks_usec()-started)/1000.0)
	if _save_requested:
		_save_requested=false
		save_city()

func edit_pending() -> bool: return _edit_pending
func edit_budget_report() -> Dictionary: return _edit_report.duplicate(true)

func _poll_edit_budget() -> void:
	if not _edit_pending: return
	if not _life_commit_render.is_empty():
		var render := _life_commit_render
		_life_commit_render = {}
		_finish_edit_publication(render,Time.get_ticks_usec())
		return
	town.preview.set_meta("live_road_draft",road_drawing)
	var started:=Time.get_ticks_usec()
	var life_ready: bool=life.poll_budget_sync(false)
	var spent: float=(Time.get_ticks_usec()-started)/1000.0
	var render: Dictionary={"committed":false}
	if spent<3.5: render=town.poll_budget_rebuild(3.5-spent,life_ready)
	_edit_polls+=1
	_edit_poll_max_ms=maxf(_edit_poll_max_ms,(Time.get_ticks_usec()-started)/1000.0)
	if not bool(render.get("committed",false)): return
	pending_modules.clear()
	if float(render.get("work_ms",0.0)) > 2.2:
		_life_commit_render=render
		return
	_finish_edit_publication(render,started)

func _finish_edit_publication(render: Dictionary, started: int) -> void:
	if town.budget_rebuild!=null:
		town.budget_rebuild.hold_retirement_this_frame()
		if life.budget_sync_pending():town.budget_rebuild.retired_values.append(state._frontage_cache)
	life.commit_budget_sync()
	town.refresh_ecology()
	town.touch.publish(town)
	# State truth, visible/collision geometry and resident routes now describe
	# the same latest revision. Until here every actor stayed at its real point.
	_edit_pending=false
	_rendered_waters=state.waters.duplicate(true)
	_rendered_terrain=state.terrain_strokes.duplicate(true)
	if not selected_house.is_empty() and town._house_record(selected_house).is_empty():
		selected_house=""
		place_panel.visible=false
	preview_key=""
	life.set_budget_hold(false)
	# Keep UI work in the following frame rather than stacking it onto the
	# atomic geometry/collision and route publication.
	_edit_ui_pending=true
	_edit_poll_max_ms=maxf(_edit_poll_max_ms,(Time.get_ticks_usec()-started)/1000.0)
	_edit_report={"mode":"budget","revision":_edit_revision,"request_ms":_edit_request_ms,"poll_max_ms":_edit_poll_max_ms,"polls":_edit_polls,"latency_ms":(Time.get_ticks_usec()-_edit_started_usec)/1000.0,"life_prepare_ms":life.budget_prepare_ms,"life_commit_ms":life.budget_commit_ms,"render":render}
	save_delay=3.0

func _history(forward: bool) -> void:
	_cancel_draft()
	var result:Dictionary=state.redo() if forward else state.undo()
	if result.ok:pending_modules.tracking=true
	_after_edit(result, "history")

func _cancel_draft() -> void:
	if has_meta("road_tool"):get_meta("road_tool").reset()
	if signatures!=null:signatures.cancel()
	var cancelled_house := house_drawing
	if terrain_brush!=null: terrain_brush.cancel()
	house_drawing=false
	house_stroke.cells.clear()
	house_stroke_result.clear()
	house_stroke_key=""
	road_drawing = false
	road_points.clear()
	road_preview.clear()
	road_gesture.clear()
	road_locked_segments = 0
	road_draft_straight = false
	vegetation_drawing = false
	vegetation_points.clear()
	water_drawing = false
	water_points.clear()
	district_drawing = false
	district_points.clear()
	district_start_id = ""
	district_distance = 0.0
	district_link_drawing=false
	district_link_start=""
	candidate.clear()
	preview_key = ""
	if removal_info!=null: removal_info.text=REMOVAL_HINT
	if town != null: town.clear_preview()
	if cancelled_house: _refresh_ui()

func save_city() -> void:
	if save_blocked:
		_message("原作品读取失败，已保留原文件；当前试玩可继续编辑。")
		return
	if _edit_pending:
		_save_requested=true
		_message(Copy.SAVE_PENDING_TOAST)
		return
	_capture_journeys()
	var result: Dictionary = state.save_city(SAVE_PATH)
	if result.ok and sundial_hud!=null:sundial_hud.saved()
	_message(Copy.SAVE_SUCCESS_TOAST if result.ok else str(result.message))

func _toggle_music() -> void:
	music.set_muted(not music.muted)
	ambience.set_muted(music.muted)
	if not music_button.get_meta("vector_seal",false):music_button.text = "♫ 静音" if music.muted else "♫ 音乐"

func _strum_house(id: String) -> bool:
	if not music.play_house(id): return false
	town.animate_house_bounce(id,0.045)
	life.greet_house(id)
	return true

func _toggle_light() -> void:
	_set_light_phase((light_phase+1)%3)

func _toggle_microclimate()->void:
	if edit_pending():return
	var index:=State.Microclimate.IDS.find(state.microclimate)
	_after_edit(state.set_microclimate(State.Microclimate.IDS[(index+1)%4]),"weather",false)

func _set_light_phase(value:int)->void:
	light_phase=value
	evening = light_phase>=1
	environment_rig.apply(light_phase)
	town.set_light_phase(light_phase)
	music.set_night(light_phase==2)
	life.tram.set_night(light_phase==2)
	if ambience != null: ambience.set_view(Vector2(focus.x,focus.z),zoom,light_phase)
	if subtitle_label != null:
		subtitle_label.text = Copy.LIGHT_PHASE_SUBTITLES[clampi(light_phase, 0, 2)]
	if light_button != null:
		light_button.tooltip_text = Copy.LIGHT_PHASE_TOOLTIPS[clampi(light_phase, 0, 2)]

func _refresh_place() -> void:
	if selected_house.is_empty() or place_name == null: return
	if journal!=null: journal.refresh_palette()
	for house: Dictionary in state.houses:
		if str(house.id) != selected_house: continue
		if not place_name.has_focus(): place_name.text = str(house.get("name", "无名小屋"))
		if not house_style_picker.get_popup().visible: house_style_picker.select(State.HOUSE_STYLES.find(str(house.get("style","classic"))))
		var role := str(house.get("role", "residential"))
		for i in range(State.Eras.IDS.size()): house_era_picker.set_item_disabled(i+1,not state.can_build_era(State.Eras.IDS[i]))
		house_era_picker.select(State.Eras.IDS.find(str(house.era_theme))+1 if house.has("era_theme") else 0)
		house_style_picker.disabled=house.has("signature")
		house_era_picker.disabled=house.has("signature")
		for role_key: String in role_buttons:
			role_buttons[role_key].disabled=(house.has("signature") and role_key!=role) or not state.can_assign_role(role_key)
		place_description.text = str(Copy.ROLE_DESCRIPTIONS.get(role, ""))
		if str(house.get("style","classic"))=="round_tower": place_description.text+="\n独立房柱长出圆塔，向上加层就成望楼。"
		var tier: int=state.level_tier(str(house.id))
		place_description.text+="\n♫ 品质 %d / 5 · %s"%[tier,State.Quality.NAMES[tier-1]]
		place_description.tooltip_text = "Lv.%d %s · %s" % [tier, State.Quality.NAMES[tier-1], Copy.QUALITY_TIER_DETAILS[clampi(tier-1, 0, Copy.QUALITY_TIER_DETAILS.size()-1)]]
		var improvement := int(state.improvement_level(str(house.id)))
		if improvement>0: place_description.text += "\n♫ 匠作 %d / 3 · 邻屋送来的永久木饰" % improvement
		var culture := int(state.culture_level(str(house.id)))
		if culture>0: place_description.text += "\n♫ 丹青 %d / 2 · 书院送来的挂毯与彩窗" % culture
		var clockwork := int(state.mechanism_level(str(house.id)))
		if clockwork>0: place_description.text += "\n♫ 钟表 %d / 2 · 钟表匠送来的八音盒与风向标" % clockwork
		place_description.text += "\n门前小路已接通。" if life.house_connected(selected_house) else "\n拉一条小路到门前，让居民能走来。"
		var site:Dictionary=state.special_site(selected_house)
		if not str(site.get("label","")).is_empty():place_description.text+="\n"+str(site.label).strip_edges()
		if life.tram.corridor_house(selected_house):place_description.text+="\n轨街黄金走廊 · 轨交直达"
		_refresh_household()
		concert_button.visible = role in ["venue","symphony_hall"]
		_refresh_bakeries()
		_refresh_workshops()
		_refresh_cafes()
		_refresh_concert()
		return

func _refresh_household() -> void:
	if household_info==null or _edit_pending: return
	var house: Dictionary=town._house_record(selected_house)
	household_info.visible=not house.is_empty() and str(house.role)=="residential"
	if not household_info.visible: return
	var text_value := HouseholdFeedback.describe(state,life,selected_house)
	if household_info.text!=text_value: household_info.text=text_value

func _refresh_bakeries() -> void:
	if _edit_pending: return
	var statuses := {}
	for house: Dictionary in state.houses:
		if str(house.role)=="bakery": statuses[str(house.id)]=life.bakery_status(str(house.id))
	town.update_bakery_supply(statuses)
	if bakery_info == null: return
	var selected: Dictionary = statuses.get(selected_house,{})
	bakery_info.visible = not selected.is_empty()
	bakery_progress.visible = not selected.is_empty()
	bakery_button.visible = not selected.is_empty()
	if selected.is_empty(): return
	bakery_info.text = "柜台面包 %d / %d · 每炉 %d份\n累计出炉 %d份 · 街坊买走 %d份" % [int(selected.stock),int(selected.capacity),int(selected.batch_size),int(selected.produced),int(selected.served)-int(selected.gifted)]
	if int(selected.gifted)>0:bakery_info.text+=" · 赠粮 %d份"%int(selected.gifted)
	var phase := str(selected.worker_phase)
	var activity: String = {"walking":"正在沿路来开炉","baking":"正在揉面、烘焙","returning":"正在沿路回家","resting":"正在家里小歇","paused":"等小路重新接通","unassigned":"接通一处居所，让街坊来当面包师"}.get(phase,"等街坊来开炉")
	if not bool(selected.open): activity = "炉火小歇，柜台面包仍能买走"
	elif int(selected.stock)+int(selected.batch_size)>int(selected.capacity): activity = "面包已备好，等街坊来买"
	bakery_info.text += "\n" + (str(selected.worker_name)+" · " if not str(selected.worker_name).is_empty() else "") + activity
	if float(selected.get("afterglow_remaining",0.0))>0.0:
		bakery_info.text += "\n♫ 共鸣余韵 · 劳作快25%% · 还剩%d秒" % ceili(float(selected.afterglow_remaining))
	bakery_info.text += "\n扩出房间能增加每炉份数与柜台容量。"
	bakery_progress.max_value = float(selected.duration)
	bakery_progress.value = float(selected.elapsed)
	bakery_button.text = "暂停烘焙" if bool(selected.open) else "继续开炉"

func _refresh_workshops() -> void:
	if _edit_pending: return
	var statuses := {}
	for house: Dictionary in state.houses:
		if str(house.role) in ["workshop","atelier","clockmaker"]: statuses[str(house.id)]=life.workshop_status(str(house.id))
	town.update_workshop_supply(statuses)
	town.update_craft_progress()
	var selected: Dictionary = statuses.get(selected_house,{})
	workshop_info.visible = not selected.is_empty()
	workshop_progress.visible = not selected.is_empty()
	workshop_button.visible = not selected.is_empty()
	if selected.is_empty(): return
	var activities := {"to_workshop":"沿路前来开工", "crafting":"打磨木饰、制作风铃", "to_target":"携着风铃送往邻屋", "installing":"正在邻屋门前安装", "returning":"沿路返回工坊", "to_home":"收工回家小憩", "resting":"在家小歇", "paused":"等小路重新接通", "unassigned":"需要一处有空闲匠人且可达的居所"}
	var activity: String = activities.get(str(selected.worker_phase),"等待邻屋需要新的木饰")
	if not bool(selected.open) and str(selected.worker_phase)=="crafting": activity="制作小歇，架上成品仍会送往邻屋"
	workshop_info.text = "架上木饰 %d / %d · 每批 %d件\n已制 %d件 · 已交付 %d件" % [int(selected.stock),int(selected.capacity),int(selected.batch_size),int(selected.produced),int(selected.delivered)]
	workshop_info.text += "\n"+str(selected.worker_name)+(" · " if not str(selected.worker_name).is_empty() else "")+activity
	if not str(selected.target_id).is_empty():
		for target: Dictionary in state.houses:
			if str(target.id)==str(selected.target_id): workshop_info.text += ("\n节庆委托 · " if selected.delivery_kind=="festival" else "\n这件送给 · ")+str(target.name)
	if float(selected.get("afterglow_remaining",0.0))>0.0: workshop_info.text += "\n♫ 共鸣余韵 · 劳作快25%"
	workshop_info.text += "\n每处邻屋三阶木饰，点亮新的泛音。\n演出后会接到节庆委托，布置下一场更久的余韵。"
	if str(town._house_record(selected_house).role)=="atelier":
		workshop_info.text=workshop_info.text.replace("木饰","画作").replace("打磨画作、制作风铃","绘制挂毯、彩窗").replace("携着风铃","携着画作").replace("工坊","书院")
		workshop_info.text=workshop_info.text.get_slice("\n每处邻屋",0)+"\n每处民居先挂艺术织毯，再装彩绘玻璃窗。"
	if str(town._house_record(selected_house).role)=="clockmaker":
		workshop_info.text=workshop_info.text.replace("木饰","钟表工艺").replace("打磨钟表工艺、制作风铃","制作八音盒与风向标").replace("携着风铃","携着八音盒")
		workshop_info.text=workshop_info.text.get_slice("\n每处邻屋",0)+"\n先送发条八音盒，再装报时风向标。"
	workshop_progress.max_value=float(selected.duration)
	workshop_progress.value=float(selected.elapsed)
	workshop_button.text="暂停制作" if bool(selected.open) else "继续制作"

func _on_era_unlocked(era: String)->void:
	preload("res://scripts/ui/city_creation_era_ceremony.gd").announce(self,era)

func _on_quality_changed(events: Array) -> void:
	if town.quality_visual.layer==null:return
	var began:=Time.get_ticks_usec() if life.profile_tick else 0
	town.quality_visual.schedule_flash(town,events)
	if life.profile_tick:life.tick_profile.quality_enqueue_us=Time.get_ticks_usec()-began;life.tick_profile.quality_queued=events.size();began=Time.get_ticks_usec()
	music.update_quality(state,events)
	_music_catalog_key=_music_catalog_signature()
	for event: Dictionary in events: music.play_quality_upgrade(str(event.house_id),int(event.to))
	if life.profile_tick:life.tick_profile.quality_music_us=Time.get_ticks_usec()-began;began=Time.get_ticks_usec()
	if not events.is_empty():
		var event: Dictionary=events[-1]
		_message("♫ 共鸣品质 %d / 5 · %s"%[int(event.to),State.Quality.NAMES[int(event.to)-1]])
	_refresh_place();save_delay=3.0
	if life.profile_tick:life.tick_profile.quality_ui_us=Time.get_ticks_usec()-began

func _on_site_wish_completed(house_id:String,kind:String,quantity:int)->void:
	preload("res://scripts/visual/city_creation_blessing_burst.gd").play(self,house_id)
	get_meta("juice_feedback").wish(house_id,kind)
	_message(preload("res://scripts/world/city_creation_debut_encore.gd").copy(kind,quantity))

func _on_bread_produced(house_id:String,_quantity:int)->void:
	music.queue_bakery_cue("baked",house_id)
	_show_largo_completion(house_id)

func _show_largo_completion(house_id:String)->void:
	if _edit_pending or music.muted or music.acoustic.weight(house_id)<=0. or state.house_temperament(house_id)!="largo":return
	var row:Dictionary=music._house_music.get(house_id,{})
	if not row.is_empty():town.living_music.emit_production(house_id,row,music._playback_clock())

func _on_craft_event(kind: String, _shop_id: String, target_id: String, level: int) -> void:
	preload("res://scripts/visual/city_creation_prototype_activity.gd").craft(self,kind,_shop_id,target_id)
	music.record_life_activity(kind,_shop_id)
	if kind=="crafted":_show_largo_completion(_shop_id)
	if kind=="mechanism_installed":
		_refresh_house_music_traits([target_id])
		_message("♫ 邻屋收到钟表匠送来的"+("发条八音盒" if level==1 else "报时风向标"))
		_refresh_place()
	if kind=="art_installed":
		_refresh_house_music_traits([target_id])
		_message("♫ 邻屋收到书院送来的"+("艺术挂毯" if level==1 else "彩绘玻璃窗"))
		_refresh_place()
	if kind=="installed":
		_refresh_house_music_traits([target_id])
		var glass:=state.has_chord(target_id,"renaissance_fugue") and state.culture_level(target_id)>0
		for house: Dictionary in state.houses:
			if str(house.id)==target_id: _message("♫ %s 收到街坊送来的木饰%s · 匠作%d阶" % [str(house.name),"与彩绘玻璃窗" if glass else "",level])
		_refresh_place()
	elif kind=="festival":
		for house: Dictionary in state.houses:
			if str(house.id)==target_id: _message("♫ %s 节庆木饰已备妥 · 下场成功演出余韵90秒" % str(house.name))
		_refresh_concert()
	_refresh_workshops()
	save_delay=3.0

func _refresh_cafes() -> void:
	if _edit_pending: return
	if cafe_info==null: return
	var selected: Dictionary=life.cafe_status(selected_house)
	var visible_cafe := str(town._house_record(selected_house).get("role",""))=="garden_cafe"
	cafe_info.visible=visible_cafe
	cafe_progress.visible=visible_cafe
	if not visible_cafe: return
	var names: Array[String]=[]
	for home: String in selected.get("participants",[]):
		for house: Dictionary in state.houses:
			if str(house.id)==home: names.append(str(house.name))
	var descriptions := {"closed":"茶座已经收起。", "disconnected":"茶座门前尚未接路；把茶座、住户和面包坊接到相通的小路。", "waitsecond":"一位买过面包的街坊已入座，等第二位沿路来品茶。", "no_space":"为桌椅留出不挡门路的空地。", "waiting":"先买一份面包，再约街坊来品茶。", "gathering":"有人在花下等你，沿小路来坐。", "tea":"街坊正在围坐品茶。", "leaving":"一盏茶喝完，街坊沿小路继续散步。"}
	if str(selected.phase)=="waiting" and int(selected.arrived)==1: descriptions.waiting="一位街坊已入座，等另一位来喝茶。"
	cafe_info.text=descriptions.get(str(selected.phase),"街坊正在赴约。")
	cafe_info.text+="\n入座 %d / %d · 最多三位街坊" % [int(selected.arrived),int(selected.invited)]
	if not names.is_empty(): cafe_info.text+="\n"+"、".join(names)
	cafe_info.text+="\n已聚 %d桌 · %d人次品茶" % [int(selected.groups),int(selected.visits)]
	var remaining: float=state.afterglow_remaining(selected_house)
	if remaining>0.0: cafe_info.text+="\n♫ 暖灯余韵 · 还剩%d秒" % ceili(remaining)
	cafe_info.text+=("\n相伴6秒完成小聚，植物宫使共鸣余韵持续180秒。" if not str(state.signature_bonuses().palace_id).is_empty() else "\n相伴6秒完成小聚，已有余韵+%d秒，最多120秒。" % int(state.cafe_afterglow_extension(selected_house)))
	cafe_progress.max_value=float(selected.duration)
	cafe_progress.value=float(selected.elapsed)

func _on_cafe_event(_cafe_id: String, homes: Array) -> void:
	preload("res://scripts/visual/city_creation_prototype_activity.gd").gather(self,_cafe_id,homes)
	music.record_life_activity("tea",_cafe_id)
	_message("☕ %d位街坊在花下喝完一盏茶。" % homes.size())
	_refresh_cafes()
	save_delay=3.0

func _capture_journeys() -> void:
	if _edit_pending: return
	state.set_journey_checkpoint(life.checkpoint())

func _invite_concert() -> void:
	var active: Dictionary = life.concert_status()
	var relay: Dictionary = life.relay_status()
	var hall:bool=town._house_record(selected_house).get("role","")=="symphony_hall"
	var result: Dictionary = life.cancel_concert() if bool(relay.active) or (str(active.phase) != "idle" and str(active.venue_id) == selected_house) else life.invite_landmark_movement(selected_house) if town._house_record(selected_house).has("signature") else life.invite_grand_festival(selected_house) if hall else life.invite_concert(selected_house)
	_message(str(result.message))
	if result.ok:
		if str(life.concert_status().phase)=="gathering": music.play_edit("concert")
		_capture_journeys()
		save_delay = 3.0
	_refresh_concert()

func _toggle_relay() -> void:
	var relay: Dictionary = life.relay_status()
	var result: Dictionary = life.cancel_concert() if bool(relay.active) else life.start_relay(selected_house)
	_message(str(result.message))
	if result.ok:
		if str(life.concert_status().phase)=="gathering": music.play_edit("concert")
		_capture_journeys()
		save_delay=3.0
	_refresh_concert()

func _refresh_relay() -> void:
	if relay_info==null: return
	var is_venue: bool = str(town._house_record(selected_house).get("role","")) in ["venue","symphony_hall"]
	var relay: Dictionary = life.relay_status()
	# The ordinary concert action already ends the whole active relay.
	# Show a second action only when it offers the distinct start choice.
	relay_button.visible=is_venue and not bool(relay.active)
	relay_info.visible=is_venue or bool(relay.active)
	relay_button.text="从这里开始庆典接力"
	# Keep the entry available so a lone or disconnected venue explains what
	# is missing through the same real Life planner used by the start action.
	relay_button.disabled=false
	if bool(relay.active):
		var name_value: String="演奏庭"
		for house: Dictionary in state.houses:
			if str(house.id)==str(relay.venue_id): name_value=str(house.name)
		relay_info.text="庆典接力 · 第%d / 共%d站\n当前：%s\n每站到齐后演奏24秒。结束会同时停止当前场与后续站。" % [int(relay.index)+1,int(relay.total),name_value]
	elif is_venue:
		var candidates: Array=life.relay_candidates(selected_house)
		if candidates.size()<2:
			relay_info.text="再建一处演奏庭，并用同一条能步行相通的小路连接两庭，就能接力。"
		else:
			relay_info.text="从这里出发，沿小路依次走访%d处演奏庭。每站到齐后，完整演奏24秒。" % candidates.size()
	else: relay_info.text=""

func _on_concert_event(event: String, venue_id: String) -> void:
	if event=="started":life.greet_house(venue_id)
	var name_value := "演奏庭"
	for house: Dictionary in state.houses:
		if house.id == venue_id: name_value = str(house.name)
	_message({"invited":"街坊在茶座聊起新曲，自发相约前往 %s。","started":"街坊到齐了，%s 与整条街共同奏响。","finished":"%s 的演出落幕，暖灯余韵留在街坊，面包师愉快劳作。","cancelled":"%s 的演出已结束，街坊继续自己的日常。"}[event] % name_value)
	if event=="finished":gallery.observe_archive(life.last_completed_movement)
	if event=="finished" and not life.finale_view().is_empty():_message("盛典落幕 · 金色声浪向河湾展开 · %d栋房屋晋升"%life.finale_view().changes.size())
	life_info.text = life.summary()
	_capture_journeys()
	save_delay = 3.0
	_refresh_concert()

func _toggle_matinee() -> void:
	var current: Dictionary=life.matinee_status(selected_house)
	_after_edit(state.set_auto_matinee(selected_house,not bool(current.enabled)),"concert",false)

func _refresh_matinee() -> void:
	if matinee_info==null: return
	var venue := str(town._house_record(selected_house).get("role","")) in ["venue","symphony_hall"]
	matinee_info.visible=venue
	matinee_button.visible=venue
	if not venue: return
	var status: Dictionary=life.matinee_status(selected_house)
	matinee_button.text="暂停后续巡演" if bool(status.enabled) else "开启常驻巡演"
	var messages := {"disabled":"开启后，街坊会为新曲自发相约。", "waiting":"等两位买过面包、喝过茶的街坊有了新灵感。", "cooldown":"让街坊歇一会儿，再酝酿下一首。", "busy":"这一场结束后，再听街坊的新曲。", "gathering":"街坊带着新曲，正沿小路来赴约。", "playing":"这场是街坊自发相约的合奏。", "disconnected":"接通小路，让街坊能走到演奏庭。", "tea":"先让大家喝完这盏茶。"}
	matinee_info.text=messages.get(str(status.phase),"街坊正在酝酿下一首新曲。")
	matinee_info.text+="\n灵感 %d / %d位 · 已自发 %d场" % [int(status.ready),int(status.required),int(status.completed)]
	if float(status.cooldown)>0.0: matinee_info.text+="\n还有%d秒，留一段街坊日常。" % ceili(float(status.cooldown))

func _refresh_concert() -> void:
	if concert_info == null: return
	var status: Dictionary = life.concert_view()
	var relay: Dictionary = life.relay_status()
	music.set_concert_view(status)
	concert_button.text = "结束整场庆典接力" if bool(relay.active) else ("结束这场演出" if str(status.phase) != "idle" and str(status.venue_id) == selected_house else "♫ 邀请街坊演出")
	if str(status.phase)=="idle" and town._house_record(selected_house).get("role","")=="symphony_hall":concert_button.text="♫ 发起全城跨时代盛典"
	concert_button.disabled = not bool(relay.active) and ((str(status.phase) != "idle" and str(status.venue_id) != selected_house) or not life.house_connected(selected_house))
	concert_info.visible = concert_button.visible or str(status.phase) != "idle"
	concert_progress.visible = str(status.phase) != "idle"
	concert_progress.max_value = float(status.duration) if str(status.phase) == "playing" else maxi(1,int(status.invited))
	concert_progress.value = float(status.elapsed) if str(status.phase) == "playing" else int(status.arrived)
	concert_info.text = "邀请街坊沿路来听一场演出。\n整条街亮窗应答，落幕后暖灯余韵留60秒，面包师劳作快25%。"
	if str(status.phase) == "gathering":
		concert_info.text = "街坊正在沿路赶来 · %d / %d 已抵达" % [int(status.arrived),int(status.invited)]
		if int(status.arrived)==int(status.invited): concert_info.text="街坊已到齐，静候下一句一起奏响。"
	elif str(status.phase) == "playing": concert_info.text = "♫ 街坊合奏 · %d 位听众\n还有 %d 秒落幕" % [int(status.invited),ceili(float(status.duration)-float(status.elapsed))]
	if str(status.phase)!="idle" and str(status.get("source","manual"))=="auto": concert_info.text="♫ 街坊自发相约\n"+concert_info.text
	if str(status.phase)=="playing": concert_info.text += "\n%d栋房屋一起应和" % status.chorus_house_ids.size()
	if status.get("grand_festival",false):concert_info.text+="\n田园 → 人文 → 钟表 → 现代 → 全城终章"
	elif not status.afterglow.is_empty():
		var remaining := 0.0
		for value: float in status.afterglow.values(): remaining=maxf(remaining,value)
		concert_info.text += "\n♫ %d栋暖灯余韵 · 还剩%d秒" % [status.afterglow.size(),ceili(remaining)]
	if str(status.phase) == "playing":
		var source: Dictionary = music.active_source()
		if bool(source.get("audible",false)):
			for house: Dictionary in state.houses:
				if house.id == source.source_id: concert_info.text += "\n全街合奏，共同收束最后一乐句" if str(source.role)=="finale" else "\n"+str(house.name)+(" 正在主奏" if str(source.role) == "lead" else " 正在应答")
	var supply_venue := str(status.venue_id) if str(status.phase)!="idle" else selected_house
	if str(town._house_record(supply_venue).get("role","")) in ["venue","symphony_hall"]:
		var festival: Dictionary=state.festival_status(supply_venue)
		if festival.ready:
			concert_info.text += "\n✿ 节庆木饰已备妥 · 成功落幕余韵90秒"
		elif festival.pending:
			concert_info.text += "\n节庆委托待配送 · 工坊有匠人和成品、与这里路网相通，就会沿路送来"
		else:
			concert_info.text += "\n完整演出后，街坊会向制琴坊订一件节庆木饰。"
		if int(festival.delivered)>0: concert_info.text += "\n已布置 %d次 · 已用于演出 %d次" % [int(festival.delivered),int(festival.used)]
	town.show_concert(status)
	_refresh_relay()
	_refresh_matinee()

func _message(text_value: String) -> void:
	if preload("res://scripts/ui/city_creation_reward_whisper.gd").submit(self,text_value):return
	if toast == null: return
	toast.text = text_value
	toast.visible = true
	toast_time = 4.0

func _notification(what: int) -> void:
	if what in [NOTIFICATION_APPLICATION_FOCUS_OUT,NOTIFICATION_WM_WINDOW_FOCUS_OUT]:strum_hold.cancel()
	if what == NOTIFICATION_WM_CLOSE_REQUEST:
		if persistence and not save_blocked:
			if _edit_pending:
				# Closing may finish synchronously; never save stale journeys
				# against new authored geometry or drop the last transaction.
				life.cancel_budget_sync()
				town.cancel_budget_rebuild()
				_edit_pending=false
				life._sync()
				town.rebuild()
				life.set_budget_hold(false)
			_capture_journeys()
			if state.dirty: state.save_city(SAVE_PATH)

func diagnostics() -> Dictionary:
	var sorted := frame_samples.duplicate()
	sorted.sort()
	return {"engine":Engine.get_version_info().string,"fps":Engine.get_frames_per_second(),
		"frame_p95_ms":sorted[int((sorted.size()-1)*0.95)] if not sorted.is_empty() else 0.0,
		"edit_rebuild_ms":edit_samples.duplicate(),"draw_calls":Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME),
		"render_updates":town.rebuild_stats.duplicate(),"plants":state.plants.size(),"water_updates":town.water_edit_stats.duplicate(),
		"meadow":town.meadow.diagnostics(),
		"shore":town.shore.diagnostics(),"water_field":town.water_field.diagnostics(),
		"triangles":Performance.get_monitor(Performance.RENDER_TOTAL_PRIMITIVES_IN_FRAME),
		"audio":music.audio_report,"life":{"residents":life.residents.size(),"purchases":life.purchases,"gatherings":life.gatherings},
		"concert":life.concert_status(),"concert_music":music.music_report(),
		"milestones":completed.duplicate(),"world":state.snapshot()}
