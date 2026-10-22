extends PanelContainer
## One nonmodal sheet. Empty city space keeps normal input and simulation.
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
var demo:Node3D
var pages:Dictionary={}
var tabs:Dictionary={}
var content:Control
var current:=""
var tween:Tween
static func obtain(owner:Node3D,parent:Control)->PanelContainer:
	var existing:=parent.get_node_or_null("RiverPaperScroll")
	if existing!=null:return existing
	var book=load("res://scripts/ui/city_creation_paper_scroll.gd").new()
	book.setup(owner,parent);return book
func setup(owner:Node3D,parent:Control)->void:
	demo=owner;name="RiverPaperScroll";parent.add_child(self);theme=UI.make_theme()
	var style:=UI.panel(12);style.bg_color=Color(UI.PAPER,.88);style.shadow_size=5
	add_theme_stylebox_override("panel",style)
	var column:=VBoxContainer.new();column.add_theme_constant_override("separation",10);add_child(column)
	var heading:=HBoxContainer.new();heading.add_theme_constant_override("separation",4);column.add_child(heading)
	for id:String in ["journal","landmarks","ledger"]:
		var tab:=Button.new();tab.text={"journal":"手记","landmarks":"名胜","ledger":"账本"}[id]
		tab.custom_minimum_size=Vector2(68,34);tab.toggle_mode=true;tab.focus_mode=Control.FOCUS_NONE
		tab.pressed.connect(show_page.bind(id));heading.add_child(tab);tabs[id]=tab
	var close:=Button.new();close.text="×";close.tooltip_text="合上手卷 · Esc";close.custom_minimum_size=Vector2(32,34)
	close.pressed.connect(close_all);heading.add_child(close)
	content=Control.new();content.name="ScrollPages";content.size_flags_vertical=Control.SIZE_EXPAND_FILL
	content.mouse_filter=Control.MOUSE_FILTER_IGNORE;column.add_child(content)
	parent.resized.connect(fit);fit();hide()
func attach(page:Control,id:String)->void:
	content.add_child(page);page.set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT)
	pages[id]=page;page.visibility_changed.connect(_page_visibility.bind(id));page.hide()
func fit()->void:
	position=Vector2(0.,68.) if visible else Vector2(-310.,68.)
	size=Vector2(310.,maxf(240.,get_parent().size.y-188.))
func show_page(id:String)->void:
	current=id
	for key:String in pages:
		pages[key].visible=key==id;tabs[key].button_pressed=key==id
	if tween!=null:tween.kill()
	var was_visible:=visible;show();size=Vector2(310.,maxf(240.,get_parent().size.y-188.))
	if not was_visible:position=Vector2(-310.,68.)
	tween=create_tween();tween.tween_property(self,"position:x",0.,.22).set_trans(Tween.TRANS_CUBIC).set_ease(Tween.EASE_OUT)
	var presenter:RefCounted=demo.get({"journal":"journal","landmarks":"signatures","ledger":"ledger"}[id])
	presenter.refresh()
func close_page(id:String)->void:
	if current==id:close_all()
func close_all()->void:
	current=""
	for page:Control in pages.values():page.hide()
	if tween!=null:tween.kill()
	hide();position.x=-310.
	demo.preview_key=""
func _page_visibility(id:String)->void:
	if visible and current==id and not pages[id].visible:close_all()
func blocks_world(event:InputEvent)->bool:
	if not visible:return false
	if event is InputEventMouse:return get_global_rect().has_point(event.position)
	return false
func _input(event:InputEvent)->void:
	if not visible or not (event is InputEventKey and event.pressed and not event.echo):return
	if get_viewport().gui_get_focus_owner() is LineEdit:return
	if event.keycode==KEY_ESCAPE:close_all()
	elif event.keycode==KEY_J:demo.journal.open_panel()
	elif event.keycode==KEY_L:demo.ledger.open_panel()
	else:return
	get_viewport().set_input_as_handled()
