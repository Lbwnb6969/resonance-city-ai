extends Node
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
var demo:Node3D
var reviewed:Dictionary={}
var model:Node3D
var dialog:PanelContainer
var mask:Control
var confirm_button:Button
var cancel_button:Button
var life_was_processing:=false
var accepting:=false
var generation:=0
static func active(owner:Node3D)->bool:
	return owner.has_meta("water_crossing_input") and not owner.get_meta("water_crossing_input").reviewed.is_empty()
static func controller(owner:Node3D):
	if not owner.has_meta("water_crossing_input"):
		var input=load("res://scripts/ui/city_creation_water_crossing_input.gd").new();input.demo=owner;owner.add_child(input);owner.set_meta("water_crossing_input",input)
	return owner.get_meta("water_crossing_input")
static func preview(owner:Node3D,points:Array[Vector2])->bool:
	if owner.water_kind!="channel":return false
	var check:Dictionary=owner.state.preview_water(points,owner.water_width,"channel")
	if check.ok or check.get("conflicts",[]).is_empty() or check.conflicts.any(func(c):return c.kind!="road"):return false
	owner.water_status.text="松开查看过水通路；确认前不改动城市。"
	owner.town.preview_water(points,owner.water_width,false,check.conflicts)
	return true
static func finish(owner:Node3D)->bool:
	if owner.water_kind!="channel" or owner.water_points.is_empty():return false
	var check:Dictionary=owner.state.preview_water(owner.water_points,owner.water_width,"channel")
	if check.ok or check.get("conflicts",[]).is_empty() or check.conflicts.any(func(c):return c.kind!="road"):return false
	var plan:Dictionary=owner.state.preview_water_crossing(owner.water_points,owner.water_width)
	owner.water_drawing=false;owner.water_points.clear();owner.town.clear_preview()
	if not plan.ok:owner._message(str(plan.message));return true
	controller(owner).review(plan)
	return true
static func cancel(owner:Node3D)->void:
	if owner.has_meta("water_crossing_input"):owner.get_meta("water_crossing_input").close()
func review(plan:Dictionary)->void:
	close();reviewed=plan
	life_was_processing=demo.life.is_processing();demo.life.set_process(false)
	model=Renderer.new();model.name="WaterCrossingReview";demo.add_child(model);model.setup(plan.candidate);model.set_light_phase(demo.light_phase)
	demo.town.hide()
	mask=Control.new();mask.name="WaterCrossingModal";demo.ui_layer.add_child(mask);mask.set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT);mask.mouse_filter=Control.MOUSE_FILTER_STOP
	dialog=PanelContainer.new();dialog.name="WaterCrossingConfirm";dialog.theme=UI.make_theme();mask.add_child(dialog);dialog.set_anchors_and_offsets_preset(Control.PRESET_TOP_RIGHT)
	dialog.offset_left=-370;dialog.offset_right=-24;dialog.offset_top=92;dialog.offset_bottom=260;dialog.add_theme_stylebox_override("panel",UI.panel(16))
	var box:=VBoxContainer.new();box.add_theme_constant_override("separation",12);dialog.add_child(box)
	var label:=Label.new();label.text="引水与过水通路\n将调整 %d 条道路的过水形态。\n查看桥面、汀步及接岸后，确认这一步。"%plan.affected_roads.size();box.add_child(label)
	var row:=HBoxContainer.new();box.add_child(row)
	confirm_button=Button.new();confirm_button.text="引水并接通";row.add_child(confirm_button);confirm_button.pressed.connect(accept)
	cancel_button=Button.new();cancel_button.text="保留原城";row.add_child(cancel_button);cancel_button.pressed.connect(close)
func _input(event:InputEvent)->void:
	if reviewed.is_empty() or accepting or not event is InputEventKey or not event.pressed:return
	if event.keycode==KEY_ESCAPE:close();get_viewport().set_input_as_handled()
	elif event.keycode==KEY_ENTER:accept();get_viewport().set_input_as_handled()
func accept()->void:
	if accepting:return
	accepting=true
	var session:=generation;var plan:=reviewed.duplicate(true);var city:RefCounted=demo.state
	var busy_before:bool=demo.gallery.busy;demo.gallery.busy=true
	# The immutable original gets its own thumbnail and world snapshot.
	model.hide();demo.town.show()
	var backup:Dictionary=await demo.gallery._capture("引水改桥前的城市","before_water_crossing",func()->bool:return generation==session and demo.state==city)
	demo.gallery.busy=busy_before
	if session!=generation or demo.state!=city:accepting=false;return
	var result:Dictionary=city.commit_water_crossing(plan) if backup.ok else {"ok":false,"message":"原城收藏失败，未改动水路"}
	close();accepting=false;demo._after_edit(result,"terrace")
func close()->void:
	generation+=1
	if model!=null:model.queue_free();model=null
	if mask!=null:mask.queue_free();mask=null;dialog=null
	if not reviewed.is_empty():demo.town.show();demo.life.set_process(life_was_processing)
	reviewed={}
