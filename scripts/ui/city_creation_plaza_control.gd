extends Node
const Plan=preload("res://scripts/world/city_creation_plaza_loops.gd")
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
var demo
var seal:Button
var panel:PanelContainer
var selected:Dictionary={}
var choosing:=false
var last_backup:Dictionary={}
func setup(owner)->void:
	demo=owner;demo.add_child(self);demo.set_meta("plaza_control",self);seal=demo._button("环内铺装",open);seal.name="PlazaLoopSeal";demo.add_child(seal);seal.hide()
	panel=PanelContainer.new();panel.name="PlazaLoopChoices";panel.add_theme_stylebox_override("panel",UI.panel(8));demo.add_child(panel);panel.hide();var row:=HBoxContainer.new();panel.add_child(row)
	for pair:Array in [["","草坪"],["fan_stone","扇石广场"],["brick_stone","砖石广场"]]:
		var button:Button=demo._button(pair[1],choose.bind(pair[0]));button.name="PlazaChoice_"+("grass" if str(pair[0]).is_empty() else str(pair[0]));row.add_child(button)
func close()->void:panel.hide();seal.hide();selected={}
func _input(event:InputEvent)->void:
	if panel.visible and event is InputEventKey and event.pressed and event.keycode==KEY_ESCAPE:close();demo.get_viewport().set_input_as_handled()
func _process(_delta:float)->void:
	if choosing:return
	if demo.tool!=2 or demo.edit_pending() or demo.get_meta("road_tool").active() or demo.get_meta("road_tool").blocked() or not demo.state.CreationPolicy.is_free(demo.state):close();return
	if panel.visible:
		if not Plan.faces(demo.state).any(func(row):return row.loop_key==selected.get("loop_key","")):close()
		return
	if seal.visible and seal.get_global_rect().grow(10).has_point(demo.pointer):return
	var nearest:=56.;var chosen:Dictionary={};var screen:=Vector2.ZERO
	for face:Dictionary in Plan.faces(demo.state):
		var at:=Vector3(face.center.x,demo.state.ground_height(face.center)+.1,face.center.y)
		if demo.camera.is_position_behind(at):continue
		var position:Vector2=demo.camera.unproject_position(at);var distance:=position.distance_to(demo.pointer)
		if distance<nearest:nearest=distance;chosen=face;screen=position
	if chosen.is_empty():seal.hide();selected={};return
	selected=chosen;seal.reset_size();seal.position=(screen-Vector2(seal.size.x*.5,seal.size.y+12)).clamp(Vector2(8,8),demo.get_viewport().get_visible_rect().size-seal.size-Vector2(8,8));seal.show()
func open()->void:
	if selected.is_empty():return
	panel.reset_size();panel.position=seal.position.clamp(Vector2(8,8),demo.get_viewport().get_visible_rect().size-panel.size-Vector2(8,8));panel.show();seal.hide()
func choose(paving:String)->void:
	if choosing or demo.save_blocked or selected.is_empty():return
	var city:RefCounted=demo.state;var revision:int=city.revision;var epoch:int=city._wish_epoch;var id:String=selected.loop_key;choosing=true
	if not paving.is_empty() and city.snapshot().schema<Plan.SCHEMA:
		demo.gallery._set_busy(true);last_backup=await demo.gallery._capture("铺设石板广场前的城市","before_plaza_rules");demo.gallery._set_busy(false)
		if not last_backup.ok or demo.state!=city or city.revision!=revision or city._wish_epoch!=epoch:choosing=false;close();return
	var result:=Plan.choose(city,id,paving);choosing=false;close();demo._after_edit(result,"history")
