extends SceneTree
## Actual production UI; Window input injection, paused Life, no invented goals.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const Growth = preload("res://scripts/world/city_creation_growth.gd")
const SOURCE := "res://验证记录/经营河湾_2026-10-16/实际三分钟河湾.json"
const OUT := "res://验证记录/经营刷新_2026-10-16/journal"
var demo
var checks: Array = []
var failures: Array[String] = []
var facts: Dictionary = {}
var personal := PackedByteArray()
var original := PackedByteArray()

func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _key(code: int) -> void:
	for down: bool in [true,false]:
		var event := InputEventKey.new();event.keycode=code;event.pressed=down
		root.push_input(event);await process_frame
func _mouse(at: Vector2,button: int=MOUSE_BUTTON_LEFT) -> void:
	var motion := InputEventMouseMotion.new();motion.position=at;motion.global_position=at
	root.push_input(motion);await process_frame
	for down: bool in [true,false]:
		var event := InputEventMouseButton.new();event.position=at;event.global_position=at;event.button_index=button;event.pressed=down
		root.push_input(event);await process_frame
func _wait() -> void:
	var deadline := Time.get_ticks_msec()+25000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline: await process_frame
	for ignored in range(4): await process_frame
	_check(not demo.edit_pending() and not demo._edit_ui_pending,"real edit and following UI refresh publish completely")
func _ids() -> Array:
	var result: Array = []
	for card: Node in demo.journal.cards.get_children(): result.append(card.get_instance_id())
	for button: Button in demo.journal.goal_buttons: result.append(button.get_instance_id())
	return result
func _text() -> Array:
	var result: Array = []
	for node: Node in demo.journal.cards.find_children("*","Label",true,false): result.append(node.text)
	for button: Button in demo.journal.goal_buttons: result.append(button.text)
	return result
func _display_matches() -> bool:
	var rows: Array = demo.journal.rows
	if rows!=Growth.report(demo.state) or rows.size()!=3: return false
	var index := 0
	for chapter in range(rows.size()):
		var row: Dictionary = rows[chapter]
		var title := "%02d  %s%s" % [chapter+1,str(row.title)," · 已收录" if bool(row.earned) else ""]
		var reward := ("已获得 · " if bool(row.earned) else "这一章的纪念 · ")+str(row.reward_name)
		if demo.journal._chapter_titles[chapter].text!=title or demo.journal._chapter_rewards[chapter].text!=reward: return false
		for goal_index in range(row.goals.size()):
			var goal: Dictionary = row.goals[goal_index]
			var label := ("✓ " if bool(goal.done) else "○ ")+str(goal.label)+"  %d / %d" % [mini(int(goal.value),int(goal.target)),int(goal.target)]
			if demo.journal._goal_labels[chapter][goal_index].text!=label or demo.journal.goal_buttons[index].text!=("去看看" if bool(goal.done) else "试一试"): return false
			index+=1
	return index==demo.journal.goal_buttons.size()
func _audio_identity() -> Array:
	var result: Array = []
	for key: String in demo.music.STEMS:
		var player: AudioStreamPlayer = demo.music._players[key]
		var pcm: PackedByteArray = player.stream.data
		var digest := HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(pcm)
		result.append([key,player.get_instance_id(),player.stream.get_instance_id(),digest.finish().hex_encode()])
	for player: AudioStreamPlayer in demo.music._effects: result.append(player.get_instance_id())
	return result
func _capture(name_value: String) -> void:
	await process_frame;await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+name_value+".png")==OK,"actual GL journal screenshot saved: "+name_value)

func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	personal=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	original=FileAccess.get_file_as_bytes(SOURCE)
	var source: Dictionary = JSON.parse_string(original.get_string_from_utf8())
	_check(source.get("growth_memories",[])==["dawn","tide"] and int(source.life_progress.concerts)>0,"input is preserved actual operating-city evidence with two earned chapters and a completed performance")
	root.size=Vector2i(1024,768);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库_"+str(Time.get_ticks_usec())
	root.add_child(demo);demo.life.set_process(false)
	var initial_ids := _ids()
	demo.selected_house="h1"
	var restored: Dictionary = demo.state.restore(source)
	demo._after_edit(restored,"history");await _wait()
	var deadline := Time.get_ticks_msec()+25000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(DisplayServer.get_name()!="headless" and restored.ok and not demo.music.audio_report.is_empty() and not demo.life.is_processing(),"production GL scene restores real city with isolated persistence and Life paused")
	if not restored.ok or demo.music.audio_report.is_empty(): await _finish();return
	var audio := _audio_identity();var clock: float = demo.music._playback_clock()
	var progress: Dictionary = demo.state.life_progress.duplicate(true)
	demo.journal.refresh_palette()
	for ignored in range(4): demo.journal.refresh()
	_check(not demo.journal.panel.visible and demo.journal.rows==Growth.report(demo.state) and demo.journal.button.text=="河湾手记 · 街坊成歌","hidden refresh updates real rows and header to the two earned chapters")
	_check(_ids()==initial_ids,"loading real progress and repeated hidden refresh preserve all existing chapter cards and goal-button IDs")
	var picker: OptionButton = demo.journal.picker
	_check(picker.item_count==7 and not picker.is_item_disabled(4) and not picker.is_item_disabled(5) and picker.is_item_disabled(6) and picker.get_item_text(4)=="晨杏与陶红" and picker.get_item_text(5)=="海盐与青瓦","four base palettes and two actually earned finishes stay available while third finish remains locked")
	await _key(KEY_J)
	_check(demo.journal.panel.visible and demo.journal.close_button.has_focus() and _display_matches(),"real J opens latest three chapters, actual goal counts and both earned reward labels")
	await _key(KEY_ENTER)
	_check(not demo.journal.panel.visible,"real Enter returns through the freshly focused journal close button")
	await _key(KEY_J)
	var paper: Control = demo.journal.panel.get_node("JournalPaper")
	var scroll: ScrollContainer = paper.find_child("Chapters",true,false)
	var bar: VScrollBar = scroll.get_v_scroll_bar()
	var bounds := Rect2(Vector2.ZERO,Vector2(root.size))
	_check(bounds.encloses(paper.get_global_rect()) and paper.get_global_rect().encloses(scroll.get_global_rect()) and bounds.encloses(demo.journal.close_button.get_global_rect()),"1024 window keeps actual paper, chapter scroll and return control inside viewport")
	await _capture("01_真实两章手记_1024")
	var scroll_before := bar.value
	for ignored in range(5): await _mouse(scroll.get_global_rect().get_center(),MOUSE_BUTTON_WHEEL_DOWN)
	_check(bar.max_value>bar.page and bar.value>scroll_before,"actual Window wheel events scroll the three-chapter journal")
	var visible_text := _text();var visible_ids := _ids()
	var focused: Control = root.gui_get_focus_owner()
	var focus_id := focused.get_instance_id() if focused!=null else 0
	var scroll_after := bar.value
	for ignored in range(3): demo.journal.refresh()
	await process_frame
	var focused_after: Control = root.gui_get_focus_owner()
	_check(_ids()==visible_ids and _text()==visible_text and bar.value==scroll_after and (focused_after.get_instance_id() if focused_after!=null else 0)==focus_id,"visible refresh preserves text, all card/button IDs, actual focus and scroll position")
	await _key(KEY_ESCAPE)
	_check(not demo.journal.panel.visible,"real Escape returns after scrolling without requiring button focus")
	var old_bakery: String = str(demo.journal.rows[0].goals[1].house_id)
	var result: Dictionary = demo.state.set_house_role(old_bakery,"residential")
	demo._after_edit(result,"room");await _wait()
	demo.journal.refresh()
	var new_bakery: String = str(demo.journal.rows[0].goals[1].house_id)
	_check(result.ok and old_bakery=="h8" and new_bakery=="h9" and _ids()==initial_ids and not demo.journal.panel.visible,"hidden role edit updates live bread-goal target to another actual bakery without replacing any goal button")
	await _key(KEY_J)
	_check(_display_matches() and _ids()==initial_ids,"reopening renders current state through the same fixed chapter controls")
	var bread_goal: Button = demo.journal.goal_buttons[1]
	scroll.ensure_control_visible(bread_goal)
	for ignored in range(3): await process_frame
	await _capture("02_更新后的真实目标")
	await _mouse(bread_goal.get_global_rect().get_center())
	var expected := Vector3.ZERO
	for house: Dictionary in demo.state.houses:
		if str(house.id)==new_bakery: expected=Vector3(float(house.origin[0]),0.7,float(house.origin[1]))
	_check(not demo.journal.panel.visible and demo.tool==4 and demo.selected_house==new_bakery and demo.focus.distance_to(expected)<0.001,"actual click on original bread-goal button navigates to latest h9 and correct camera focus, not stale h8 closure")
	_check(demo.state.life_progress==progress and demo.state.growth_memories==["dawn","tide"],"all UI refreshes and actual role edit preserve original completed-business counters and earned memories")
	for ignored in range(20): await process_frame
	_check(_audio_identity()==audio and demo.music.get_child_count()==13 and demo.music._playback_clock()>clock,"journal UI preserves original nine PCM resources, thirteen players and advancing production clock")
	facts={"source":SOURCE,"life_process_paused":not demo.life.is_processing(),"original_card_and_goal_ids":initial_ids,"live_goal_old_bakery":old_bakery,"live_goal_new_bakery":new_bakery,"actual_progress_unchanged":progress,"scroll_before":scroll_before,"scroll_after":scroll_after,"window":[1024,768],"panel_bounds":paper.get_global_rect(),"scope":"Actual operating-city archive restored through State; no production, tea, completed concert or earned chapter is fabricated. Real role API edit tests navigation only."}
	await _finish()

func _finish() -> void:
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal and FileAccess.get_file_as_bytes(SOURCE)==original,"personal city and preserved real operating-city evidence bytes remain untouched")
	var report := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"count":checks.size(),"facts":facts,"input":"Godot Window key/mouse injection, not OS input","command":"Godot_v4.7.2-stable_win64_console.exe --path . --audio-driver Dummy --max-fps 180 --script tools/check_creation_journal_refresh_live.gd"}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("JOURNAL_REFRESH_LIVE ",JSON.stringify(report))
	demo.life.set_process(false);demo.music.set_process(false)
	for player: AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player: AudioStreamPlayer in demo.music._effects: player.stop()
	await create_timer(0.15).timeout
	demo.queue_free();await process_frame;await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
