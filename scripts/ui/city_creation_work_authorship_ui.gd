extends RefCounted
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
const Metadata=preload("res://scripts/world/city_creation_work_metadata.gd")
var owner
var note:LineEdit
var seal:CheckBox
var source:Label
func setup(authorship)->void:
	owner=authorship;var panel=owner.gallery.panel;var row:Control=panel.title_input.get_parent();note=LineEdit.new();note.name="WorkAuthorNote";note.placeholder_text="添一句作者题跋（可选）";note.tooltip_text="最多48字，随新收藏版本保留。";note.max_length=48;note.clear_button_enabled=true;note.size_flags_horizontal=Control.SIZE_EXPAND_FILL;note.custom_minimum_size.y=44;note.add_theme_stylebox_override("normal",UI.inset(14,9,false));note.add_theme_stylebox_override("focus",UI.inset(14,9,true));row.add_child(note);row.move_child(note,1);note.text_submitted.connect(func(_text):panel._request_save())
	var body:Control=row.get_parent();var choices:=HBoxContainer.new();choices.name="WorkAuthorshipChoices";body.add_child(choices);body.move_child(choices,row.get_index()+1);seal=CheckBox.new();seal.name="WorkGildedSeal";choices.add_child(seal);source=Label.new();source.name="CurrentWorkSource";source.size_flags_horizontal=Control.SIZE_EXPAND_FILL;source.text_overrun_behavior=TextServer.OVERRUN_TRIM_ELLIPSIS;source.add_theme_color_override("font_color",UI.MUTED);choices.add_child(source);panel.set_meta("authorship_ui",self);refresh()
func load_current(text:String,gilded:bool)->void:note.text=text;seal.set_pressed_no_signal(gilded);refresh()
func refresh()->void:
	var gallery=owner.gallery;var earned:bool=Metadata.can_seal({"creative_settings":gallery.demo.state.creative_settings,"cozy_progression":gallery.demo.state.cozy_progression});note.editable=not gallery.busy;seal.disabled=not earned or gallery.busy;seal.text="鎏金题跋章"+("" if earned else " · Lv.5")
	seal.tooltip_text="新账期等级5可在收藏时选用，暂停经营保留资格。"
	if not earned:seal.set_pressed_no_signal(false)
	source.visible=not owner.parent_id.is_empty();source.text="衍生自："+owner.source_title;source.tooltip_text="从「"+owner.source_title+"」继续创作。"
	for button:Button in gallery.panel.get_meta("work_branch_buttons",{}).values():button.disabled=gallery.busy or not button.get_meta("valid",false)
func closed()->void:note.release_focus();seal.release_focus()
static func reset_cards(panel)->void:panel.set_meta("work_branch_buttons",{})
static func card(panel,item:Dictionary,root:PanelContainer,column:VBoxContainer)->void:
	var parent:=str(item.get("parent_work_id",""))
	if not parent.is_empty():
		var title:="先前收藏的版本"
		for other:Dictionary in panel._items:
			if other.id==parent:title=str(other.title);break
		var label:Label=panel._label("衍生自："+title,12);label.name="WorkParent";label.set_meta("parent_work_id",parent);label.tooltip_text="从「"+title+"」继续创作。";label.max_lines_visible=1;label.text_overrun_behavior=TextServer.OVERRUN_TRIM_ELLIPSIS;label.add_theme_color_override("font_color",UI.MUTED);column.add_child(label)
	var note:=str(item.get("author_note",""))
	if not note.is_empty():var label:Label=panel._label("题跋："+note,13);label.name="SavedAuthorNote";label.max_lines_visible=2;label.tooltip_text=note;column.add_child(label)
	if item.get("gilded_seal",false) and item.get("valid",false):
		var style:=UI.card(12);style.border_color=UI.GOLD;style.set_border_width_all(2);root.add_theme_stylebox_override("panel",style);root.set_meta("gilded_seal",true);var label:Label=panel._label("✦ 鎏金题跋章",12);label.name="SavedGildedSeal";label.add_theme_color_override("font_color",UI.GOLD);column.add_child(label)
	var count:int=item.get("chronicle",[]).size()
	if count>0:var label:Label=panel._label("城中小记 · %d则"%count,12);label.name="SavedChronicleCount";label.tooltip_text="\n".join(item.chronicle.map(func(row):return row.caption));column.add_child(label)
	var button:Button=panel._button("以此衍生新分支");button.name="BranchWork";button.set_meta("valid",bool(item.get("valid",false)));button.disabled=panel._busy or not item.get("valid",false);button.pressed.connect(func():
		if not panel._busy:panel.branch_requested.emit(str(item.id)))
	column.add_child(button);var buttons:Dictionary=panel.get_meta("work_branch_buttons",{});buttons[str(item.id)]=button;panel.set_meta("work_branch_buttons",buttons)
