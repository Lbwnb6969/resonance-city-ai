extends RefCounted
## Reuse the gameplay controls; only their spatial arrangement changes.
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
var heading:PanelContainer
var left:PanelContainer
var right:PanelContainer
var bottom:PanelContainer
var rotation_hint:Label
var action_island:Control
var colors:PanelContainer
var roles:Array=[]
var extra_controls:Array=[]
var hole:=Rect2()
var house_rect:=Rect2()
var _placement_key:Variant=null
var _placed:Dictionary={}
var placement_ok:=true
func paper(parent:Control,child:Control)->PanelContainer:
	var panel:=PanelContainer.new();var style:=UI.panel(5)
	style.bg_color=Color(UI.PAPER,.87);style.shadow_size=4;style.set_corner_radius_all(18)
	panel.add_theme_stylebox_override("panel",style);parent.add_child(panel);child.reparent(panel)
	return panel
func setup(pop:RefCounted)->void:
	var old:Control=pop.card;var column:Control=old.get_child(0)
	var title:Control=column.get_child(0);var actions:Control=column.get_child(5)
	pop.card=Control.new();pop.card.name="RoofCompassRing";pop.card.mouse_filter=Control.MOUSE_FILTER_IGNORE
	pop.overlay.add_child(pop.card)
	heading=paper(pop.card,title);heading.name="HouseNameCapsule";pop.name_field.custom_minimum_size.x=170
	var left_column:=VBoxContainer.new();pop.card.add_child(left_column)
	for button:Button in [pop.architecture_button,pop.style_button,pop.era_button,pop.choir_button]:button.reparent(left_column)
	left=paper(pop.card,left_column);left.name="StyleWing"
	var right_column:=VBoxContainer.new();pop.card.add_child(right_column)
	var palette:=GridContainer.new();palette.columns=2;right_column.add_child(palette)
	palette.add_theme_constant_override("h_separation",5);palette.add_theme_constant_override("v_separation",5)
	for button:Button in pop.swatches:button.reparent(palette)
	pop.expand_button.reparent(right_column);pop.temperament_button.reparent(right_column)
	right=paper(pop.card,right_column);right.name="PaletteWing"
	for button:Button in pop.role_buttons.values():
		button.reparent(pop.card);button.custom_minimum_size=Vector2(48,48);button.size=Vector2(48,48);roles.append(button)
	bottom=paper(pop.card,pop.status);bottom.name="HouseStatusCapsule"
	pop.status.autowrap_mode=TextServer.AUTOWRAP_OFF;pop.status.clip_text=true;pop.status.text_overrun_behavior=TextServer.OVERRUN_TRIM_ELLIPSIS;pop.status.horizontal_alignment=HORIZONTAL_ALIGNMENT_CENTER
	rotation_hint=Label.new();rotation_hint.name="RotationHint";rotation_hint.text="↻ Q/E · R";rotation_hint.horizontal_alignment=HORIZONTAL_ALIGNMENT_CENTER;rotation_hint.add_theme_font_size_override("font_size",10);rotation_hint.add_theme_color_override("font_color",UI.INK);rotation_hint.add_theme_stylebox_override("normal",UI.badge(Color(UI.PAPER,.78)));pop.card.add_child(rotation_hint)
	actions.reparent(pop.card);actions.alignment=BoxContainer.ALIGNMENT_CENTER;action_island=actions
	colors=paper(pop.card,pop.color_panel);colors.name="ColorWingDetails"
	old.hide();old.queue_free();pop.card.hide()
func project(pop:RefCounted,house:Dictionary)->Rect2:
	var low:=Vector2(INF,INF);var high:=-low
	for cell:Dictionary in house.cells:
		for dx:float in [-.96,.96]:
			for dz:float in [-.96,.96]:
				for dy:float in [0.,2.8]:
					var world:Vector3=preload("res://scripts/world/city_creation_house_frame.gd").world3(house,Vector3(float(house.origin[0])+int(cell.x)*1.8+dx,float(house.get("base_y",0.))+int(cell.level)*1.7+dy,float(house.origin[1])+int(cell.z)*1.8+dz))
					if pop.demo.camera.is_position_behind(world):return Rect2()
					var p:Vector2=pop.demo.camera.unproject_position(world);low=low.min(p);high=high.max(p)
	return Rect2(low,high-low)
func follow(pop:RefCounted,house:Dictionary)->void:
	house_rect=project(pop,house)
	if house_rect.size==Vector2.ZERO:pop.card.hide();return
	var viewport:Vector2=pop.overlay.get_viewport_rect().size
	var clear_size:=house_rect.size+Vector2(24,20)
	clear_size=clear_size.max(Vector2(180,180))
	var width:=maxf(430.,clear_size.x+204.)
	var dimensions:=Vector2(width,clear_size.y+248.)
	var origin:=house_rect.get_center()-Vector2(width*.5,150.+clear_size.y*.5)
	origin.x=clampf(origin.x,10.,maxf(10.,viewport.x-width-10.))
	origin.y=clampf(origin.y,68.,maxf(68.,viewport.y-dimensions.y-120.))
	pop.card.position=origin;pop.card.size=dimensions
	hole=Rect2(Vector2((width-clear_size.x)*.5,150.),clear_size)
	heading.position=Vector2((width-246.)*.5,0.);heading.size=Vector2(246,34)
	var radius:=maxf(200.,clear_size.x*.5+35.)
	for i in range(roles.size()):
		var angle:=lerpf(PI*1.12,PI*1.88,float(i)/maxi(1,roles.size()-1))
		roles[i].position=Vector2(width*.5+cos(angle)*radius-24.,150.+sin(angle)*65.-24.)
	left.position=Vector2(0.,hole.position.y+maxf(0.,(clear_size.y-98.)*.5));left.size=Vector2(88,98)
	right.position=Vector2(width-88.,hole.position.y+maxf(0.,(clear_size.y-112.)*.5));right.size=Vector2(88,112)
	bottom.position=Vector2((width-300.)*.5,hole.end.y+12.);bottom.size=Vector2(300,28)
	rotation_hint.position=Vector2((width-76.)*.5,hole.end.y+44.);rotation_hint.size=Vector2(76,18)
	action_island.size=action_island.get_combined_minimum_size();action_island.position=Vector2((width-action_island.size.x)*.5,hole.end.y+66.)
	colors.visible=pop.color_panel.visible and pop.inspector==null
	if colors.visible:
		colors.size=Vector2(300,96)
		colors.position=Vector2(clampf(origin.x+width+6.,10.,viewport.x-310.)-origin.x,clampf(origin.y+hole.end.y+10.,68.,viewport.y-colors.size.y-120.)-origin.y)
	var neighbors:Array=[];var reserved:Array=[]
	var at:=Vector2(house.origin[0],house.origin[1])
	for other:Dictionary in pop.demo.state.houses:
		if other.get("id","")==house.get("id","") or at.distance_to(Vector2(other.origin[0],other.origin[1]))>6.:continue
		var rect:=project(pop,other)
		if rect.size!=Vector2.ZERO:neighbors.append(rect)
	if pop.demo.has_meta("inspiration_draft"):
		var badge:Control=pop.demo.get_meta("inspiration_draft").badge
		if badge.visible:reserved.append(badge.get_global_rect())
		if pop.demo.journal.scrollbook.visible:reserved.append(pop.demo.journal.scrollbook.get_global_rect())
		var dock:RefCounted=pop.demo.tactile_dock
		if dock.bubble_rows.is_visible_in_tree():reserved.append(dock.bubble_rows.get_global_rect())
		if dock.nature_row.is_visible_in_tree():reserved.append(dock.nature_row.get_global_rect())
	var islands:=controls();var key:=[house_rect,viewport,neighbors,reserved,colors.visible,pop.card.scale,islands.map(func(item:Control)->Array:return [item.get_instance_id(),item.size])]
	if key!=_placement_key:
		placement_ok=preload("res://scripts/ui/city_creation_ring_placement.gd").fit(islands,house_rect,Rect2(Vector2(10,68),viewport-Vector2(20,188)),neighbors,reserved)
		_placement_key=key;_placed.clear()
		for item:Control in islands:_placed[item.get_instance_id()]=item.global_position
	else:
		for item:Control in islands:item.global_position=_placed[item.get_instance_id()]
	var bounds:=house_rect
	for item:Control in islands:bounds=bounds.merge(item.get_global_rect())
	var positions:Array=islands.map(func(item:Control)->Vector2:return item.global_position)
	pop.card.global_position=bounds.position;pop.card.size=bounds.size
	for i in range(islands.size()):islands[i].global_position=positions[i]
	hole=Rect2(house_rect.get_center()-clear_size*.5-pop.card.global_position,clear_size)
	pop._last_position=pop.card.position
func controls()->Array:
	return ([heading,left,right,bottom,rotation_hint,action_island]+roles+extra_controls+([colors] if colors.visible else [])).filter(func(item:Control)->bool:return item.is_visible_in_tree())
func status_caption(pop:RefCounted,house:Dictionary)->String:
	var role:=str(house.get("role","residential"));var level:int=pop.demo.state.level_tier(str(house.id))
	var family=preload("res://scripts/world/city_creation_prototype_resonance.gd")
	var key:String=family.prototype(pop.demo.state,house);var caption:String=family.family_caption(key) if not key.is_empty() else str(pop.ROLE_LABELS.get(role,"街坊"))
	if role=="residential":return "%s · %s"%[caption,"✦".repeat(level)]
	var step:=preload("res://scripts/ui/city_creation_business_step.gd").describe(pop.demo,str(house.id))
	if not step.text.is_empty():pop.status.tooltip_text=step.text;return step.text
	var civic:=preload("res://scripts/world/city_creation_civic_supply.gd").status(pop.demo.state,str(house.id))
	pop.status.tooltip_text="品质 %d · %s\n供需详见L工坊手记；Q/E每次90°，R拖动自由转向。"%[level,"门路相连" if pop.demo.life.house_connected(str(house.id)) else "等待接路"]
	return preload("res://scripts/ui/city_creation_tactile_ui_theme.gd").format_compass_supply_capsule(role,civic,caption)
