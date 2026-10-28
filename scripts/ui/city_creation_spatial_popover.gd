extends RefCounted

const UI=preload("res://scripts/ui/valley_ui_theme.gd")
const Seal=preload("res://scripts/ui/city_creation_seal_button.gd")
const ROLE_LABELS:Dictionary={
	"residential":"居所","bakery":"面包","workshop":"制琴","garden_cafe":"茶座",
	"venue":"演奏","atelier":"书院","clockmaker":"钟表","symphony_hall":"交响"
}
const ROLE_GLYPHS:Dictionary={"residential":"house","bakery":"bakery","workshop":"workshop",
	"garden_cafe":"garden_cafe","venue":"venue","atelier":"atelier","clockmaker":"clockmaker","symphony_hall":"symphony_hall"}
const PALETTE_COLORS:Array[Color]=[Color("#b85c3e"),Color("#347e88"),Color("#c3a65c"),Color("#63865b")]

var demo
var root:Control
var overlay:Control
var card:Control
var ring=preload("res://scripts/ui/city_creation_roof_ring.gd").new()
var inspector:Node
var name_field:LineEdit
var tier:Label
var status:Label
var style_button:Button
var architecture_button:Button
var era_button:Button
var choir_button:Button
var temperament_button:Button
var concert_button:Button
var parade_button:Button
var expand_button:Button
var reward_buttons:Dictionary={}
var color_panel:VBoxContainer
var wall_picker:ColorPickerButton
var roof_picker:ColorPickerButton
var role_buttons:Dictionary={}
var swatches:Array[Button]=[]
var target_house_id:=""
var _tween:Tween
var _last_position:=Vector2.ZERO

func setup(owner,ui_root:Control)->void:
	demo=owner;root=ui_root
	overlay=Control.new();overlay.name="SpatialBuildingPopover"
	overlay.set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT)
	overlay.mouse_filter=Control.MOUSE_FILTER_IGNORE;root.add_child(overlay)
	card=PanelContainer.new();card.name="RoofCompass"
	var panel_style:=UI.panel(14);panel_style.bg_color=Color(UI.PAPER,.97);panel_style.border_color=UI.GOLD
	panel_style.set_border_width_all(1);panel_style.set_corner_radius_all(12)
	card.add_theme_stylebox_override("panel",panel_style);card.custom_minimum_size=Vector2(388,0)
	card.mouse_filter=Control.MOUSE_FILTER_STOP;overlay.add_child(card)
	var column:=VBoxContainer.new();column.add_theme_constant_override("separation",5);card.add_child(column)
	var heading:=HBoxContainer.new();heading.add_theme_constant_override("separation",7);column.add_child(heading)
	name_field=LineEdit.new();name_field.size_flags_horizontal=Control.SIZE_EXPAND_FILL
	name_field.placeholder_text="为这栋房子命名";name_field.tooltip_text="输入名字后按 Enter 保存"
	name_field.text_submitted.connect(_rename_house);heading.add_child(name_field)
	tier=Label.new();tier.vertical_alignment=VERTICAL_ALIGNMENT_CENTER
	tier.add_theme_color_override("font_color",UI.GREEN);heading.add_child(tier)
	var finish_row:=HBoxContainer.new();finish_row.add_theme_constant_override("separation",4);column.add_child(finish_row)
	style_button=_seal(finish_row,"house","风貌",_cycle_style);style_button.custom_minimum_size=Vector2(76,42)
	architecture_button=_seal(finish_row,"house","随形生长",_cycle_architecture);architecture_button.custom_minimum_size=Vector2(76,42)
	era_button=_seal(finish_row,"district","时代",_cycle_era);era_button.custom_minimum_size=Vector2(76,42)
	var swatch_box:=HBoxContainer.new();swatch_box.add_theme_constant_override("separation",5);finish_row.add_child(swatch_box)
	for index:int in range(PALETTE_COLORS.size()):
		var swatch:=Button.new();swatch.name="Palette_%d"%index;swatch.custom_minimum_size=Vector2(32,32)
		swatch.tooltip_text="选择建筑配色 %d"%(index+1);swatch.focus_mode=Control.FOCUS_NONE
		var style:=StyleBoxFlat.new();style.bg_color=PALETTE_COLORS[index];style.set_corner_radius_all(16)
		style.border_color=UI.PAPER;style.set_border_width_all(2);swatch.add_theme_stylebox_override("normal",style)
		var hover:=style.duplicate();hover.border_color=UI.GOLD;hover.set_border_width_all(3)
		swatch.add_theme_stylebox_override("hover",hover)
		swatch.pressed.connect(_set_palette.bind(index));swatch_box.add_child(swatch);swatches.append(swatch)
	expand_button=_seal(finish_row,"palette","更多",_toggle_colors);expand_button.custom_minimum_size=Vector2(48,42)
	color_panel=VBoxContainer.new();color_panel.name="ExpandedPalette";column.add_child(color_panel)
	var color_row:=HBoxContainer.new();color_row.add_theme_constant_override("separation",8);color_panel.add_child(color_row)
	var wall_label:=Label.new();wall_label.text="墙面";color_row.add_child(wall_label)
	wall_picker=ColorPickerButton.new();wall_picker.name="WallColor";wall_picker.custom_minimum_size=Vector2(64,34);wall_picker.edit_alpha=false;color_row.add_child(wall_picker)
	var roof_label:=Label.new();roof_label.text="屋顶";color_row.add_child(roof_label)
	roof_picker=ColorPickerButton.new();roof_picker.name="RoofColor";roof_picker.custom_minimum_size=Vector2(64,34);roof_picker.edit_alpha=false;color_row.add_child(roof_picker)
	for button:ColorPickerButton in [wall_picker,roof_picker]:
		var picker:=button.get_picker()
		picker.picker_shape=ColorPicker.SHAPE_HSV_WHEEL
		picker.color_modes_visible=false
		picker.sliders_visible=false
		_hide_color_menus(picker)
		button.get_popup().about_to_popup.connect(_hide_color_menus.bind(picker))
	var apply:=Button.new();apply.text="换上配色";apply.name="ApplyColors";apply.pressed.connect(_apply_colors);color_row.add_child(apply)
	var reward_row:=HBoxContainer.new();reward_row.add_theme_constant_override("separation",6);color_panel.add_child(reward_row)
	var reward_label:=Label.new();reward_label.text="珍藏";reward_row.add_child(reward_label)
	for id:String in demo.TownRenderer.FINISH_PALETTES:
		var palette:Array=demo.TownRenderer.FINISH_PALETTES[id]
		var reward:=Button.new();reward.name="Finish_"+id;reward.custom_minimum_size=Vector2(34,34)
		var swatch:=StyleBoxFlat.new();swatch.bg_color=palette[0];swatch.border_color=palette[1];swatch.set_border_width_all(5);swatch.set_corner_radius_all(17)
		reward.add_theme_stylebox_override("normal",swatch);reward.add_theme_stylebox_override("disabled",swatch)
		reward.pressed.connect(func()->void:demo._after_edit(demo.state.set_house_finish(target_house_id,id),"terrace",false);refresh())
		reward_row.add_child(reward);reward_buttons[id]=reward
	color_panel.hide()
	var roles:=GridContainer.new();roles.name="RoofCompassRoles";roles.columns=4
	roles.add_theme_constant_override("h_separation",4);roles.add_theme_constant_override("v_separation",4);column.add_child(roles)
	for role:String in ROLE_LABELS:
		var role_button:=_seal(roles,str(ROLE_GLYPHS[role]),str(ROLE_LABELS[role]),_set_role.bind(role))
		role_button.name="Role_"+role;role_button.custom_minimum_size=Vector2(88,46)
		role_buttons[role]=role_button
	var summary:=HBoxContainer.new();summary.add_theme_constant_override("separation",5);column.add_child(summary)
	status=Label.new();status.size_flags_horizontal=Control.SIZE_EXPAND_FILL
	status.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;status.add_theme_font_size_override("font_size",12)
	status.add_theme_color_override("font_color",UI.MUTED);summary.add_child(status)
	var actions:=HBoxContainer.new();actions.add_theme_constant_override("separation",5);column.add_child(actions)
	var extend:=_seal(actions,"house","加建",_extend_house);extend.name="ExtendHouse";extend.custom_minimum_size=Vector2(76,42)
	choir_button=_seal(actions,"district","曲风",_cycle_cluster_style);choir_button.custom_minimum_size=Vector2(76,42)
	temperament_button=_seal(actions,"music","律动",_cycle_temperament);temperament_button.custom_minimum_size=Vector2(76,42)
	concert_button=_seal(actions,"audition","邀演",_invite);concert_button.custom_minimum_size=Vector2(76,42)
	parade_button=_seal(actions,"music","绘巡游",func()->void:demo.conductor_gesture.arm(target_house_id));parade_button.custom_minimum_size=Vector2(76,42)
	ring.setup(self)
	var sample:=Button.new();sample.name="SampleHouseAppearance";sample.text="沿用此屋外观";sample.add_theme_font_size_override("font_size",12);sample.pressed.connect(_sample_appearance);ring.left.get_child(0).add_child(sample)
	inspector=preload("res://scripts/ui/city_creation_house_inspector.gd").new();inspector.setup(self,ring)

func _hide_color_menus(picker:Node)->void:
	# The expanded palette is a color wheel. Keep precise hex entry, sampling
	# and recent swatches without exposing the engine's mode/shape menus.
	for child:Node in picker.get_children(true):
		if child is MenuButton:child.hide()
		_hide_color_menus(child)

func _seal(parent:Control,glyph:String,caption:String,action:Callable)->Button:
	var button:=Button.new();button.set_script(Seal);button.configure(glyph,42.)
	button.caption=caption;button.tooltip_text=caption;button.pressed.connect(action);parent.add_child(button)
	return button

func open_for_house(house_id:String)->void:
	if inspector!=null and inspector.roles.paint(house_id):return
	if target_house_id!=house_id:
		if inspector!=null:inspector.close()
		target_house_id=house_id;name_field.release_focus();color_panel.hide()
		card.scale=Vector2.ONE*.88;card.modulate.a=0.;card.show()
		if _tween!=null and _tween.is_valid():_tween.kill()
		_tween=card.create_tween().set_parallel(true)
		_tween.tween_property(card,"scale",Vector2.ONE,.20).set_trans(Tween.TRANS_BACK).set_ease(Tween.EASE_OUT)
		_tween.tween_property(card,"modulate:a",1.,.14)
	refresh()

func close()->void:
	if inspector!=null:inspector.close()
	target_house_id="";card.hide();name_field.release_focus()

func refresh()->void:
	if target_house_id.is_empty() or not is_instance_valid(demo):return
	for id:String in reward_buttons:
		reward_buttons[id].disabled=not demo.state.finish_available(id)
		reward_buttons[id].modulate.a=1. if demo.state.finish_available(id) else .35
		reward_buttons[id].tooltip_text=str(demo.state.Growth.FINISHES[id].name)+( "" if demo.state.finish_available(id) else " · 手记/图鉴解锁")
	if demo.tool not in [0,4] or not demo.ui_layer.visible:
		card.hide();return
	var house:Dictionary=demo.town._house_record(target_house_id)
	if house.is_empty():close();return
	card.show()
	if not name_field.has_focus():name_field.text=str(house.get("name","河湾小屋"))
	var level:int=demo.state.level_tier(target_house_id)
	tier.text="★ %d"%level;tier.tooltip_text="品质等级 %d / 5"%level
	for role:String in role_buttons:
		var button:Button=role_buttons[role]
		button.active=str(house.get("role","residential"))==role
		button.disabled=(house.has("signature") and role!=str(house.get("role",""))) or not demo.state.can_assign_role(role)
		button.modulate.a=.42 if button.disabled else 1.;button.queue_redraw()
	var style_key:=str(house.get("style","classic"));var style_index:int=demo.State.HOUSE_STYLES.find(style_key)
	style_button.caption=["灰泥","木构","石砌","圆塔"][maxi(0,style_index)]
	style_button.disabled=house.has("signature");style_button.queue_redraw()
	var architecture=preload("res://scripts/world/city_creation_architecture_choice.gd")
	var available:Array=architecture.choices(demo.state,house);var selected:String=str(house.get("architecture",""))
	architecture_button.caption=preload("res://scripts/ui/city_creation_prototype_caption.gd").caption(self,house);architecture_button.tooltip_text="当前原型 · "+architecture_button.caption+(" · 随房形自动生长" if selected.is_empty() else " · 手选")+"；打开剪影册直接选择"
	architecture_button.disabled=available.is_empty();architecture_button.queue_redraw()
	architecture_button.kind="prototype/"+preload("res://scripts/ui/city_creation_prototype_stamp.gd").key(self,house)
	var era:=str(house.get("era_theme","district"));era_button.caption=_era_name(era);era_button.tooltip_text="轮换到已开启时代；当前跟随街坊" if era=="district" else "轮换房屋时代风貌"
	era_button.disabled=house.has("signature");era_button.caption={"pastoral":"古典","renaissance":"文艺","clockwork":"蒸汽","modern_eco":"生态"}[demo.state.house_era(house)];era_button.tooltip_text="仅改选中房屋 · "+str(demo.State.Eras.NAMES[demo.State.Eras.IDS.find(demo.state.house_era(house))]);era_button.queue_redraw()
	choir_button.disabled=house.has("signature")
	choir_button.caption={"warm":"暖庭","deep":"深流","weave":"织机","market":"市集","sylvan":"林间"}.get(demo.state.house_acoustic_style(house),"曲风");choir_button.tooltip_text="轮换整片自然聚落的共同曲风";choir_button.queue_redraw()
	var palette:=int(house.get("palette",0))
	for index:int in range(swatches.size()):
		var style:=swatches[index].get_theme_stylebox("normal") as StyleBoxFlat
		style.border_color=UI.GOLD if index==palette and not house.has("custom_colors") else UI.PAPER
		style.set_border_width_all(3 if index==palette and not house.has("custom_colors") else 2)
	var temperament:=str(house.get("temperament","andante"))
	temperament_button.caption={"andante":"温润","allegro":"轻快","largo":"深邃"}.get(temperament,"温润")
	temperament_button.queue_redraw()
	var role:=str(house.get("role","residential"))
	concert_button.visible=house.get("signature","") in demo.State.Signatures.IDS
	concert_button.caption="停奏" if str(demo.life.concert_status().get("venue_id",""))==target_house_id else "奏乐章"
	concert_button.tooltip_text="奏响传世共鸣乐章：聚落接力，末两乐句齐奏";concert_button.queue_redraw()
	parade_button.visible=concert_button.visible and demo.life.ConductorParade.eligible(demo.state)
	parade_button.disabled=demo.life.concert_status().phase!="idle"
	parade_button.tooltip_text="手绘指挥顺序：划过聚落与地标，街坊沿真实街道提灯巡游"
	status.text=str(demo.HouseholdFeedback.describe(demo.state,demo.life,target_house_id)).replace("\n"," · ")
	if demo.state.transit_efficiency(target_house_id)>1.:status.text+="\n轨交直达 · "+("品茶效率+30%" if role=="garden_cafe" else "制作效率+30%")
	var biome_label:=str(demo.state.biome_bonus(target_house_id).get("label",""))
	if not biome_label.is_empty():status.text+="\n"+biome_label
	status.tooltip_text=status.text;status.text=ring.status_caption(self,house)
	_update_anchor(house)

func follow()->void:
	if target_house_id.is_empty() or demo.tool not in [0,4] or not demo.ui_layer.visible:return
	var house:Dictionary=demo.town._house_record(target_house_id)
	if house.is_empty():close();return
	card.show();_update_anchor(house)

func _update_anchor(house:Dictionary)->void:
	ring.follow(self,house)

func _toggle_colors()->void:
	color_panel.visible=not color_panel.visible
	if color_panel.visible:
		var house:Dictionary=demo.town._house_record(target_house_id)
		var colors:Array=demo.town.HouseColors.base_palette(demo.town,house)
		wall_picker.color=colors[0];roof_picker.color=colors[1]
	card.reset_size()

func _apply_colors()->void:
	var result:Dictionary=demo.state.set_house_colors(target_house_id,wall_picker.color,roof_picker.color)
	demo._after_edit(result,"terrace",false);refresh()

func _extend_house()->void:
	demo.house_module_mode=true;close();demo.preview_key="";demo._update_hover()
	demo._message("点击屋顶加层、侧墙扩建；拖动可连续加建。Esc 返回选房。")

func _set_role(role:String)->void:
	var result:Dictionary=demo.state.set_house_role(target_house_id,role)
	demo._after_edit(result,"room",true,target_house_id)
	refresh()

func _cycle_style()->void:
	var house:Dictionary=demo.town._house_record(target_house_id);if house.is_empty() or house.has("signature"):return
	var styles:Array=demo.State.HOUSE_STYLES;var start:int=styles.find(str(house.get("style","classic")))
	for offset:int in range(1,styles.size()+1):
		var next:String=str(styles[posmod(start+offset,styles.size())])
		var result:Dictionary=demo.state.set_house_style(target_house_id,next)
		if bool(result.get("ok",false)) and not bool(result.get("no_op",false)):
			demo._after_edit(result,"room",true,target_house_id);break
	refresh()

func _cycle_architecture()->void:
	preload("res://scripts/ui/city_creation_prototype_book.gd").obtain(demo).for_house(self)

func _sample_appearance()->void:
	var result:Dictionary=preload("res://scripts/world/city_creation_build_brush.gd").sample(demo.state,target_house_id)
	demo._message(str(result.message))
	if result.ok:close();demo.select_tool(0);demo.house_module_mode=false;demo.tactile_dock.house_options=true;demo.tactile_dock.active_tool=-1;demo.tactile_dock.refresh()

func _set_palette(index:int)->void:
	var result:Dictionary=demo.state.set_house_palette(target_house_id,index)
	demo._after_edit(result,"terrace",false);refresh()

func _cycle_cluster_style()->void:
	var house:Dictionary=demo.town._house_record(target_house_id)
	if house.is_empty() or house.has("signature"):return
	var styles:Array=demo.State.DISTRICT_STYLES
	var next:String=styles[posmod(styles.find(demo.state.house_acoustic_style(house))+1,styles.size())]
	demo._after_edit(demo.state.set_cluster_style(target_house_id,next),"room",false);refresh()

func _cycle_era()->void:
	var house:Dictionary=demo.town._house_record(target_house_id)
	if house.is_empty() or house.has("signature"):return
	var choices:Array=demo.state.CreationPolicy.eras(demo.state)
	var next:String=choices[posmod(choices.find(demo.state.house_era(house))+1,choices.size())]
	demo._after_edit(demo.state.set_house_era(target_house_id,next),"room",true,target_house_id);refresh()

func _cycle_temperament()->void:
	var house:Dictionary=demo.town._house_record(target_house_id);if house.is_empty():return
	var modes:Array[String]=["andante","allegro","largo"]
	var next:String=modes[posmod(modes.find(str(house.get("temperament","andante")))+1,modes.size())]
	var result:Dictionary=demo.state.set_house_temperament(target_house_id,next)
	var ids:Array[String]=[target_house_id]
	demo._after_edit(result,"room",false,target_house_id);demo._refresh_house_music_traits(ids);refresh()

func _rename_house(value:String)->void:
	var result:Dictionary=demo.state.set_house_name(target_house_id,value)
	demo._after_edit(result,"room",false);name_field.release_focus();refresh()

func _invite()->void:
	demo._invite_concert()

func _era_name(era:String)->String:
	if era=="district":return "街坊"
	var index:int=demo.State.Eras.IDS.find(era)
	return ["古典田园","文艺复兴","蒸汽花房","现代生态"][index] if index>=0 else "街坊"
