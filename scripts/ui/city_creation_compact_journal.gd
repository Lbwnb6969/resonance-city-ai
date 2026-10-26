extends RefCounted
## Keep the next real action above the fold; completed pages remain browsable.
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
var chapters:Dictionary={}
var score_open:Dictionary={}
var _status:Dictionary={}
var active:=""
func create_scores(j)->void:
	j.score_title=j.demo._label("城市手札 · 已收录的传承",14);j.cards.add_child(j.score_title)
	for i in range(j.demo.state.ScoreModifiers.ERAS.size()):
		var era:String=j.demo.state.ScoreModifiers.ERAS[i]
		var row:=VBoxContainer.new();row.name="ScoreCards_"+era;row.add_theme_constant_override("separation",4)
		j.cards.add_child(row);j.score_cards[era]=row
		var header:Button=j.demo._button("",func():score_open[era]=not score_open.get(era,false);scores(j))
		header.name="CharterHeader";header.add_theme_font_size_override("font_size",12);row.add_child(header)
		var grid:=GridContainer.new();grid.columns=2;grid.name="CharterChoices";row.add_child(grid)
		grid.add_theme_constant_override("h_separation",6);grid.add_theme_constant_override("v_separation",4)
		for id:String in j.demo.state.ScoreModifiers.PAIRS[i]:
			var data:Dictionary=j.demo.state.ScoreModifiers.CHOICES[id]
			var choose:Button=j.demo._button(str(data.name).trim_suffix("章程"),j._choose_score.bind(id))
			choose.name="Score_"+id;choose.size_flags_horizontal=Control.SIZE_EXPAND_FILL
			choose.add_theme_font_size_override("font_size",13);choose.custom_minimum_size=Vector2(0,34)
			choose.tooltip_text=str(data.name)+"\n"+str(data.text)+"\n选定后可用Ctrl+Z撤销。"
			grid.add_child(choose);j.score_buttons[id]=choose
func chapter(j,index:int,card:VBoxContainer,title:Button)->void:
	chapters[index]={"card":card,"title":title,"open":false}
	title.pressed.connect(func():chapters[index].open=not chapters[index].open;layout(j))
func scores(j)->void:
	if j.score_title==null:return
	active=""
	j.score_title.visible=j.demo.state.era_unlocks.size()>1
	for era:String in j.score_cards:
		var selected:String=j.demo.state.ScoreModifiers.selected(j.demo.state,era)
		var row:Control=j.score_cards[era];row.visible=era in j.demo.state.era_unlocks
		var header:Button=row.get_child(0);var grid:Control=row.get_child(1)
		header.text=("✓ " if not selected.is_empty() else "○ ")+j.demo.state.Eras.NAMES[j.demo.state.Eras.IDS.find(era)]
		if not selected.is_empty():header.text+=" · "+str(j.demo.state.ScoreModifiers.CHOICES[selected].name).trim_suffix("章程")
		header.disabled=true;header.mouse_filter=Control.MOUSE_FILTER_IGNORE;header.add_theme_color_override("font_disabled_color",UI.GOLD if not selected.is_empty() else UI.INK)
		header.clip_text=true;header.tooltip_text=header.text;header.add_theme_color_override("font_color",UI.GOLD if not selected.is_empty() else UI.INK)
		grid.hide()
		if selected.is_empty():header.text=j.demo.state.Eras.NAMES[j.demo.state.Eras.IDS.find(era)]+" · 建筑已解锁"
		for b:Button in grid.get_children():
			var id:String=str(b.name).trim_prefix("Score_")
			b.disabled=not selected.is_empty() or j.demo.edit_pending() or j.demo.gallery.busy
			b.text=("✓ " if id in j.demo.state.era_modifiers else "")+str(j.demo.state.ScoreModifiers.CHOICES[id].name).trim_suffix("章程")
	layout(j)
func layout(j)->void:
	var order:Array=[j.score_title]
	if not active.is_empty():order.append(j.score_cards[active])
	var current:=-1
	for i in range(j.rows.size()):
		if not j.rows[i].earned:current=i;break
	for i:int in chapters:
		var earned:bool=j.rows[i].earned
		var status:int=1 if earned else (0 if i==current else 2)
		if _status.get(i,-1)!=status:chapters[i].open=i==current;_status[i]=status
		for child:Control in chapters[i].card.get_children():child.visible=child==chapters[i].title or chapters[i].open
		chapters[i].title.add_theme_color_override("font_color",UI.GOLD if earned else UI.INK)
		chapters[i].title.tooltip_text=j.rows[i].title+" · "+j.rows[i].reward_name+" · 点击展开/收起"
	for era:String in j.score_cards:
		if not order.has(j.score_cards[era]):order.append(j.score_cards[era])
	if chapters.has(current):order.append(chapters[current].card)
	for i:int in chapters:
		if i!=current:order.append(chapters[i].card)
	for i in range(order.size()):
		if order[i].get_index()!=i:j.cards.move_child(order[i],i)
func reveal(j,index:int)->void:
	chapters[index].open=true;layout(j)
	var scroll:ScrollContainer=j.cards.get_parent();scroll.ensure_control_visible(chapters[index].title)
static func era_caption(j)->String:
	var index:int=j.demo.state.Eras.IDS.find(j.demo.state.era_unlocks[-1])
	return "时代 %d · %s · 已开启"%[index+1,j.demo.state.Eras.NAMES[index]]
