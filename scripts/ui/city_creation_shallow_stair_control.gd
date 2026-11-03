extends Node
const Keys=preload("res://scripts/world/city_creation_shallow_stair_keys.gd")
var demo
var button:Button
var choosing:=false
var last_backup:Dictionary={}
func setup(owner)->void:demo=owner;demo.add_child(self);demo.set_meta("shallow_stair_control",self)
func install(parent:Control)->void:
	if not demo.state.CreationPolicy.is_free(demo.state):return
	button=Button.new();button.name="ShallowStairKeys";button.text="浅阶琴键";button.toggle_mode=true;button.custom_minimum_size=Vector2(86,42);parent.add_child(button);button.pressed.connect(choose)
	button.tooltip_text="把真实高差至少0.65米的石阶坡段呈为琴键；不改变地形、阶面和通路，可撤销。";refresh()
func refresh()->void:
	if is_instance_valid(button):button.set_pressed_no_signal(Keys.selected(demo.state));button.disabled=choosing
func _process(_delta:float)->void:
	if is_instance_valid(button) and button.is_visible_in_tree():refresh()
func choose()->void:
	if choosing or demo.edit_pending() or demo.gallery.busy:return
	if demo.save_blocked:demo._message("原作品读取失败，石阶未更改。");refresh();return
	var city:RefCounted=demo.state;var revision:int=city.revision;var epoch:int=city._wish_epoch;var value:=not Keys.selected(city)
	choosing=true;refresh()
	if value and city.snapshot().schema<Keys.SCHEMA:
		demo.gallery._set_busy(true);last_backup=await demo.gallery._capture("开启浅阶琴键前的城市","before_shallow_stair_keys");demo.gallery._set_busy(false)
		if not last_backup.ok:choosing=false;refresh();demo._message("原城未能收藏，石阶未更改。");return
		if demo.state!=city or city.revision!=revision or city._wish_epoch!=epoch:choosing=false;refresh();return
	var result:=Keys.choose(city,value);choosing=false;demo._after_edit(result,"history");refresh()
