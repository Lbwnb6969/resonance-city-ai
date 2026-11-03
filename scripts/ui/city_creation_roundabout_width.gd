extends Node
const Width=preload("res://scripts/world/city_creation_roundabout_width.gd")
var demo
var choosing:=false
var last_backup:Dictionary={}
func setup(owner)->void:demo=owner;demo.add_child(self);demo.set_meta("roundabout_width_control",self)
func install(parent:Control)->void:
	if not demo.state.CreationPolicy.is_free(demo.state):return
	var button:=Button.new();button.name="WideRoundabout";button.text="宽环岛 3.8m";button.tooltip_text="下一次营建采用3.8米半径；既有环岛保持原半径";button.toggle_mode=true;button.set_pressed_no_signal(demo.state.get_meta("roundabout_radius",2.4)==3.8);parent.add_child(button)
	button.pressed.connect(func()->void:demo.state.set_meta("roundabout_radius",3.8 if button.button_pressed else 2.4))
func unhandled(event:InputEvent)->bool:
	if demo.tool!=2 or not demo.road_roundabout or demo.state.get_meta("roundabout_radius",2.4)!=3.8:return false
	if demo.get_meta("road_tool").blocked():return false
	if not event is InputEventMouseButton or not event.pressed or event.button_index!=MOUSE_BUTTON_LEFT or event.shift_pressed:return false
	if choosing or demo.edit_pending() or demo.gallery.busy or demo.save_blocked:return true
	demo.pointer=event.position;var at:Vector2=demo._ground_at(demo.pointer);var city:RefCounted=demo.state;var revision:int=city.revision;var epoch:int=city._wish_epoch
	var valid:Dictionary=Width.Plan.preview(city,at,3.8)
	if not valid.ok:demo._message(valid.message);return true
	choosing=true;place(city,at,revision,epoch);return true
func place(city:RefCounted,at:Vector2,revision:int,epoch:int)->void:
	if city.snapshot().schema<Width.SCHEMA:
		demo.gallery._set_busy(true);last_backup=await demo.gallery._capture("营建宽环岛前的城市","before_plaza_rules");demo.gallery._set_busy(false)
		if not last_backup.ok or demo.state!=city or city.revision!=revision or city._wish_epoch!=epoch:choosing=false;return
	choosing=false;demo._after_edit(Width.add(city,at,3.8),"road")
