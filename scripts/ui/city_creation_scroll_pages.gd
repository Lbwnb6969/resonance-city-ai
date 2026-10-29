extends RefCounted
const Book=preload("res://scripts/ui/city_creation_paper_scroll.gd")
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
static func base(widget:RefCounted,parent:Control,id:String,label:String)->VBoxContainer:
	widget.scrollbook=Book.obtain(widget.demo,parent)
	widget.panel=Control.new();widget.panel.name=label;widget.panel.mouse_filter=Control.MOUSE_FILTER_IGNORE
	widget.scrollbook.attach(widget.panel,id)
	widget.paper=PanelContainer.new();widget.paper.name="JournalPaper" if id=="journal" else "LedgerPaper"
	widget.panel.add_child(widget.paper);widget.paper.set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT)
	widget.paper.add_theme_stylebox_override("panel",StyleBoxEmpty.new())
	var column:=VBoxContainer.new();column.add_theme_constant_override("separation",8);widget.paper.add_child(column)
	return column
static func label(demo:Node3D,parent:Node,text:String,font:int=13)->Label:
	var leaf:Label=demo._label(text,font);leaf.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART
	leaf.size_flags_horizontal=Control.SIZE_EXPAND_FILL;parent.add_child(leaf);return leaf
static func scroll(parent:Node,name:String)->ScrollContainer:
	var node:=ScrollContainer.new();node.name=name;node.size_flags_vertical=Control.SIZE_EXPAND_FILL
	node.horizontal_scroll_mode=ScrollContainer.SCROLL_MODE_DISABLED;parent.add_child(node);return node
static func journal(widget:RefCounted,parent:Control)->void:
	var demo:Node3D=widget.demo;var column:=base(widget,parent,"journal","GrowthJournal")
	var heading:=HBoxContainer.new();column.add_child(heading)
	label(demo,heading,"河湾手记",19)
	widget.close_button=demo._button("合卷",widget.close_panel);widget.close_button.name="CloseJournal";heading.add_child(widget.close_button)
	widget.close_button.focus_mode=Control.FOCUS_ALL
	widget.guide_button=demo._button("手札 · F1",func()->void:demo.guide.open_panel(0))
	widget.guide_button.name="OpenGuideFromJournal";heading.add_child(widget.guide_button)
	widget.era_label=label(demo,column,"",12);widget.era_label.name="EraChapters"
	widget.next_label=label(demo,column,"",13)
	widget.next_button=demo._button("",widget._follow_next);widget.next_button.name="NextJournalStep"
	UI.primary(widget.next_button);column.add_child(widget.next_button)
	widget.next_button.hide();widget.next_label.hide()
	var chapters:=scroll(column,"Chapters")
	widget.cards=VBoxContainer.new();widget.cards.size_flags_horizontal=Control.SIZE_EXPAND_FILL
	widget.cards.add_theme_constant_override("separation",6);chapters.add_child(widget.cards)
	widget._create_score_cards()
	label(demo,column,"纪念随城保存，营建没有期限。",12)
	widget.refresh(false)
static func ledger(widget:RefCounted,parent:Control)->void:
	var demo:Node3D=widget.demo;var column:=base(widget,parent,"ledger","LifeLedger")
	var heading:=HBoxContainer.new();column.add_child(heading);label(demo,heading,"生活账本",19).name="LedgerHeading"
	widget.close_button=demo._button("合卷",widget.close_panel);widget.close_button.name="CloseLedger";heading.add_child(widget.close_button)
	widget.close_button.focus_mode=Control.FOCUS_ALL
	widget.guide_button=demo._button("经营手札 · F1",func()->void:demo.guide.open_panel(1))
	widget.guide_button.name="OpenGuideFromLedger";column.add_child(widget.guide_button)
	widget.scroll=scroll(column,"LedgerScroll")
	var entries:=VBoxContainer.new();entries.size_flags_horizontal=Control.SIZE_EXPAND_FILL;entries.add_theme_constant_override("separation",10);widget.scroll.add_child(entries)
	preload("res://scripts/ui/city_creation_life_capsules.gd").setup(widget,entries)
	preload("res://scripts/ui/city_creation_ledger_leaves.gd").setup(widget,entries)
	widget.body=RichTextLabel.new();widget.body.name="LedgerEntries";widget.body.fit_content=true;widget.body.scroll_active=false
	widget.body.bbcode_enabled=true
	widget.body.selection_enabled=true;widget.body.size_flags_horizontal=Control.SIZE_EXPAND_FILL
	widget.body.add_theme_font_size_override("normal_font_size",14);widget.body.add_theme_color_override("default_color",UI.INK)
	widget.body.add_theme_constant_override("line_separation",5);entries.add_child(widget.body);widget.body.hide()
	label(demo,column,"空间与记录，随作品保留。",12)
static func landmarks(widget:RefCounted,parent:Control)->VBoxContainer:
	widget.scrollbook=Book.obtain(widget.demo,parent)
	widget.panel=PanelContainer.new();widget.panel.name="SignatureCatalog"
	widget.panel.add_theme_stylebox_override("panel",StyleBoxEmpty.new())
	widget.scrollbook.attach(widget.panel,"landmarks")
	var viewport:=scroll(widget.panel,"LandmarkScroll")
	var column:=VBoxContainer.new();column.size_flags_horizontal=Control.SIZE_EXPAND_FILL
	column.add_theme_constant_override("separation",10);viewport.add_child(column);return column
