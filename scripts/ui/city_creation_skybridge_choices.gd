extends Node
const Span=preload("res://scripts/world/city_creation_skybridge_span.gd")
var pop:RefCounted
var row:HBoxContainer
var buttons:Dictionary={}
var choosing:=false
var last_backup:Dictionary={}
func setup(owner:RefCounted,parent:Control)->void:
	pop=owner;pop.demo.add_child(self);row=HBoxContainer.new();row.name="SkybridgeChoices";parent.add_child(row)
	var label:=Label.new();label.text="云廊";row.add_child(label)
	for enabled:bool in [false,true]:
		var button:=Button.new();button.name="SkybridgeChoice_"+("nine" if enabled else "original");button.text="九米云廊" if enabled else "原跨度";button.toggle_mode=true;row.add_child(button);buttons[enabled]=button;button.pressed.connect(choose.bind(enabled))
	row.hide()
func choose(enabled:bool)->void:
	var demo=pop.demo
	if choosing or not row.is_visible_in_tree() or demo.edit_pending() or demo.gallery.busy:return
	if demo.save_blocked:demo._message("原作品读取失败，云廊未更改。");return
	var city:RefCounted=demo.state;var id:String=pop.target_house_id;var revision:int=city.revision;var epoch:int=city._wish_epoch
	if Span.selected(demo.town._house_record(id))==enabled:return
	choosing=true
	if enabled and city.snapshot().schema<Span.SCHEMA:
		demo.gallery._set_busy(true);last_backup=await demo.gallery._capture("选用九米云廊前的城市","before_skybridge_span");demo.gallery._set_busy(false)
		if not last_backup.ok:choosing=false;demo._message("原城未能收藏，云廊未更改。");return
		if demo.state!=city or city.revision!=revision or city._wish_epoch!=epoch:choosing=false;return
	var result:Dictionary=city.set_house_skybridge_span(id,enabled);choosing=false;demo._after_edit(result,"room",true,id);pop.refresh()
func _process(_delta:float)->void:
	var house:Dictionary=pop.demo.town._house_record(pop.target_house_id)
	row.visible=pop.card.visible and not house.is_empty() and (Span.supported(pop.demo.state,house) or Span.selected(house))
	if not row.visible:return
	for enabled:bool in buttons:
		buttons[enabled].set_pressed_no_signal(Span.selected(house)==enabled);buttons[enabled].disabled=choosing
		buttons[enabled].tooltip_text="两端房间中心最远九米；同高对齐并留足净空时相接，可撤销。" if enabled else "保留原跨度规则；已获章程权益保持。"
