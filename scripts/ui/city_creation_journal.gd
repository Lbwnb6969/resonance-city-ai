extends RefCounted
## Optional growth journal. Real city conditions award lasting building finishes.
const Growth=preload("res://scripts/world/city_creation_growth.gd")
const Guidance=preload("res://scripts/ui/city_creation_guidance.gd")
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
const BASE_NAMES=["暖石与陶瓦","白灰与青瓦","沙岩与赭顶","奶油与麦金"]
const FINISH_ORDER=["dawn","tide","festival","nocturne"]
var demo: Node3D
var panel: Control
var cards: VBoxContainer
var button: Button
var picker: OptionButton
var close_button: Button
var goal_buttons: Array[Button]=[]
var rows: Array=[]
var _signature: Array=[]
var _palette_signature: Array=[]
var _icons: Array[Texture2D]=[]
var _chapter_titles: Array[Label]=[]
var _chapter_rewards: Array[Label]=[]
var _goal_labels: Array=[]
var era_label: Label
var next_label: Label
var next_button: Button
var _next_goal: Dictionary = {}

func setup(owner: Node3D,parent: Control) -> void:
	demo=owner
	button=demo._button("河湾手记 · 晨光初聚",open_panel)
	button.name="CityJournal"
	button.clip_text=true
	button.tooltip_text="看看河湾的成长，找一件想做的事 · J"
	demo.gallery_button.get_parent().add_child(button)
	# The existing four render palettes remain directly available. Rewards
	# live in a separate optional finish, preserving every old palette index.
	picker=OptionButton.new()
	picker.name="HousePalette"
	picker.tooltip_text="墙面、屋顶和木饰一起换色；Ctrl+Z可恢复。"
	picker.item_selected.connect(_choose_palette)
	demo.place_name.get_parent().add_child(picker)
	demo.place_name.get_parent().move_child(picker,demo.place_name.get_index()+1)
	var palettes: Array=demo.TownRenderer.PALETTES.duplicate()
	for id: String in FINISH_ORDER: palettes.append(demo.TownRenderer.FINISH_PALETTES[id])
	for palette: Array in palettes:
		var icon:=Image.create(36,16,false,Image.FORMAT_RGBA8)
		icon.fill(palette[0]);icon.fill_rect(Rect2i(18,0,18,16),palette[1])
		_icons.append(ImageTexture.create_from_image(icon))
	panel=Control.new()
	panel.name="GrowthJournal"
	parent.add_child(panel)
	panel.set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT)
	panel.mouse_filter=Control.MOUSE_FILTER_STOP
	var shade:=ColorRect.new()
	shade.color=Color(0.08,0.16,0.14,0.56)
	shade.set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT)
	shade.mouse_filter=Control.MOUSE_FILTER_IGNORE
	panel.add_child(shade)
	var paper:=PanelContainer.new()
	paper.name="JournalPaper"
	panel.add_child(paper)
	paper.set_anchors_and_offsets_preset(Control.PRESET_CENTER)
	paper.offset_left=-350;paper.offset_right=350
	paper.offset_top=-276;paper.offset_bottom=276
	paper.add_theme_stylebox_override("panel",UI.panel(24))
	var column:=VBoxContainer.new()
	column.add_theme_constant_override("separation",10)
	paper.add_child(column)
	var title_row:=HBoxContainer.new()
	column.add_child(title_row)
	var title: Label=demo._label("河湾手记",24)
	title.size_flags_horizontal=Control.SIZE_EXPAND_FILL
	title_row.add_child(title)
	close_button=demo._button("回到河湾 · Esc",close_panel)
	close_button.focus_mode=Control.FOCUS_ALL
	close_button.name="CloseJournal"
	title_row.add_child(close_button)
	column.add_child(demo._label("从一座桥、一炉面包，到有自己声音的城。",15))
	era_label=demo._label("",13)
	era_label.name="EraChapters"
	column.add_child(era_label)
	var next_row:=HBoxContainer.new()
	next_row.add_theme_constant_override("separation",12)
	column.add_child(next_row)
	next_label=demo._label("",14)
	next_label.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART
	next_label.size_flags_horizontal=Control.SIZE_EXPAND_FILL
	next_row.add_child(next_label)
	next_button=demo._button("",_follow_next)
	next_button.name="NextJournalStep"
	next_row.add_child(next_button)
	var scroll:=ScrollContainer.new()
	scroll.name="Chapters"
	scroll.size_flags_vertical=Control.SIZE_EXPAND_FILL
	scroll.horizontal_scroll_mode=ScrollContainer.SCROLL_MODE_DISABLED
	column.add_child(scroll)
	cards=VBoxContainer.new()
	cards.size_flags_horizontal=Control.SIZE_EXPAND_FILL
	cards.add_theme_constant_override("separation",14)
	scroll.add_child(cards)
	column.add_child(demo._label("达成会留下新饰色。随时继续自由建造，没有期限。",13))
	panel.hide()
	refresh(false)

func open_panel() -> void:
	if demo.edit_pending() or demo.gallery.busy: return
	demo._cancel_draft();demo.orbiting=false;demo.panning=false
	demo.town.clear_preview()
	panel.show()
	refresh()
	close_button.grab_focus()

func close_panel() -> void:
	panel.hide();close_button.release_focus();demo.preview_key=""

func refresh(notify: bool=true) -> void:
	var earned: Array=demo.state.refresh_growth()
	rows=Growth.report(demo.state)
	era_label.text=demo.state.Eras.journal(demo.state)
	var stage:=0
	for row: Dictionary in rows:
		if bool(row.earned): stage+=1
	_next_goal={}
	var next_title := "四章已收录"
	for row: Dictionary in rows:
		if row.earned: continue
		next_title=str(row.title)
		for goal: Dictionary in row.goals:
			if not bool(goal.done):
				_next_goal=goal
				break
		break
	button.text="河湾手记 · "+next_title
	button.tooltip_text="已收录%d / %d章 · %s · J" % [stage,rows.size(),next_title]
	next_label.text="下一件事 · "+str(_next_goal.label) if not _next_goal.is_empty() else "四页手记已写成，河湾还可以继续生长。"
	next_button.text=Guidance.caption(_next_goal) if not _next_goal.is_empty() else "星夜漫步"
	next_button.tooltip_text=Guidance.instruction(_next_goal) if not _next_goal.is_empty() else "切到星夜，沿自己的街巷走走；F12留下明信片。"
	if not earned.is_empty():
		refresh_palette()
		if notify:
			var id: String=earned[-1]
			demo._message("手记添了一章 · "+str(Growth.FINISHES[id].name)+"已可选"+(" · 文艺复兴风貌与书院已开启" if id=="dawn" else ""))
			demo.music.play_edit("terrace")
	# Completed goals keep showing target/target while production continues;
	# do not rebuild a browsing player's cards for each additional loaf.
	var signature: Array=rows.duplicate(true)
	for row: Dictionary in signature:
		for goal: Dictionary in row.goals: goal.value=mini(int(goal.value),int(goal.target))
	if signature==_signature: return
	# Hidden journals keep live goals/rewards, while their cards wait for open.
	# Build the fixed chapter controls once at setup; later changes only text.
	if not goal_buttons.is_empty() and not panel.visible: return
	_signature=signature.duplicate(true)
	if goal_buttons.is_empty(): _create_cards()
	var button_index:=0
	for index in range(rows.size()):
		var row: Dictionary=rows[index]
		_chapter_titles[index].text="%02d  %s%s" % [index+1,str(row.title)," · 已收录" if bool(row.earned) else ""]
		_chapter_rewards[index].text=("已获得 · " if bool(row.earned) else "这一章的纪念 · ")+str(row.reward_name)
		for goal_index in range(row.goals.size()):
			var goal: Dictionary=row.goals[goal_index]
			_goal_labels[index][goal_index].text=("✓ " if bool(goal.done) else "○ ")+str(goal.label)+"  %d / %d" % [mini(int(goal.value),int(goal.target)),int(goal.target)]
			goal_buttons[button_index].text=Guidance.caption(goal)
			goal_buttons[button_index].tooltip_text=Guidance.instruction(goal)
			button_index+=1

func _create_cards() -> void:
	for index in range(rows.size()):
		var row: Dictionary=rows[index]
		var card:=VBoxContainer.new()
		card.add_theme_constant_override("separation",5)
		cards.add_child(card)
		var title: Label=demo._label("",18)
		card.add_child(title);_chapter_titles.append(title)
		var reward: Label=demo._label("",13)
		reward.add_theme_color_override("font_color",UI.MUTED)
		card.add_child(reward);_chapter_rewards.append(reward)
		var labels: Array[Label]=[]
		for goal_index in range(row.goals.size()):
			var line:=HBoxContainer.new()
			card.add_child(line)
			var label: Label=demo._label("",14)
			label.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART
			label.size_flags_horizontal=Control.SIZE_EXPAND_FILL
			line.add_child(label);labels.append(label)
			var go: Button=demo._button("",_go_current.bind(index,goal_index))
			go.name="Goal_"+str(index)+"_"+str(goal_buttons.size())
			line.add_child(go);goal_buttons.append(go)
		_goal_labels.append(labels)

func _go_current(chapter: int,goal: int) -> void:
	_go(rows[chapter].goals[goal])

func _go(goal: Dictionary) -> void:
	var action:=str(goal.get("action",""))
	if not bool(goal.done) and action.begins_with("chapter:"):
		var index:=Growth.CHAPTERS.find(action.trim_prefix("chapter:"))
		var scroll: ScrollContainer=panel.find_child("Chapters",true,false)
		scroll.ensure_control_visible(_chapter_titles[index])
		return
	close_panel()
	Guidance.apply(demo,goal)

func _follow_next() -> void:
	if not _next_goal.is_empty():
		_go(_next_goal)
		return
	close_panel()
	while demo.light_phase!=2: demo._toggle_light()
	if not demo.camera_rig.strolling: demo.camera_rig.toggle(demo)

func refresh_palette() -> void:
	var house: Dictionary={}
	for row: Dictionary in demo.state.houses:
		if str(row.id)==demo.selected_house: house=row;break
	if house.is_empty(): return
	var signature: Array=[house.id,house.palette,house.get("finish",""),demo.state.growth_memories.duplicate()]
	if signature==_palette_signature or picker.get_popup().visible: return
	_palette_signature=signature.duplicate(true)
	picker.clear()
	for index in range(BASE_NAMES.size()): picker.add_icon_item(_icons[index],BASE_NAMES[index])
	for index in range(FINISH_ORDER.size()):
		var id: String=FINISH_ORDER[index]
		var earned: bool=demo.state.growth_memories.has(id)
		picker.add_icon_item(_icons[index+4],str(Growth.FINISHES[id].name)+("" if earned else " · 手记第%d章" % (index+1)))
		picker.set_item_disabled(index+4,not earned)
	picker.select(4+FINISH_ORDER.find(str(house.finish)) if house.has("finish") else posmod(int(house.palette),4))

func _choose_palette(index: int) -> void:
	var result: Dictionary=demo.state.set_house_palette(demo.selected_house,index) if index<4 else demo.state.set_house_finish(demo.selected_house,FINISH_ORDER[index-4])
	demo._after_edit(result,"terrace")
	refresh_palette()
