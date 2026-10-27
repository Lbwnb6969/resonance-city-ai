extends Node
## One roof seal, one undoable change. Later organic forms reuse this stamp.
const Hinge=preload("res://scripts/world/city_creation_hinge_actions.gd")
const Hug=preload("res://scripts/world/city_creation_curve_hug.gd")
const Balcony=preload("res://scripts/world/city_creation_balcony_plan.gd")
const Form=preload("res://scripts/world/city_creation_organic_form.gd")
var pop:RefCounted
var button:Button
var key:Variant=null
func setup(owner:RefCounted)->void:
	pop=owner;pop.demo.add_child(self)
	button=pop._seal(pop.ring.left.get_child(0),"leaf","微雕",cycle);button.name="OrganicCarvingStamp";button.gui_input.connect(adjust)
func cycle()->void:
	var house:Dictionary=pop.demo.town._house_record(pop.target_house_id)
	if house.is_empty():return
	var current:=int(house.get("corner_bevel",0));var bend:=float(house.get("bend_angle_deg",0.));var result:Dictionary
	var facade:=Balcony.authored(house)
	if facade>0 and Balcony.plan(pop.demo.state,house).is_empty():result=Balcony.set_mode(pop.demo.state,pop.target_house_id,0)
	elif facade==4 and Hinge.supported(pop.demo.state,house):result=Hinge.set_angle(pop.demo.state,pop.target_house_id,15.)
	elif facade>0:result=Balcony.set_mode(pop.demo.state,pop.target_house_id,facade+1 if facade<4 else 0)
	elif current==1 and not Balcony.choose(pop.demo.state,house).is_empty() and Form.supported(pop.demo.state,house):result=Balcony.set_mode(pop.demo.state,pop.target_house_id,1)
	elif bend!=0. and not Hinge.supported(pop.demo.state,house):result=Hinge.corner(pop.demo.state,pop.target_house_id,0,Form.LABELS[0])
	elif bend>0.:result=Hinge.set_angle(pop.demo.state,pop.target_house_id,-15.)
	elif bend<0.:result=Hinge.corner(pop.demo.state,pop.target_house_id,0,Form.LABELS[0])
	elif current==1 and Hinge.supported(pop.demo.state,house) or not Form.supported(pop.demo.state,house) and Hinge.supported(pop.demo.state,house):result=Hinge.set_angle(pop.demo.state,pop.target_house_id,15.)
	else:
		var next:=2 if current==0 else 1 if current==2 else 0
		if not Form.supported(pop.demo.state,house):next=0
		result=Form.set_corner(pop.demo.state,pop.target_house_id,next)
	apply(result)
func apply(result:Dictionary)->void:
	pop.demo._after_edit(result,"room",true,pop.target_house_id);pop.refresh();key=null
func adjust(event:InputEvent)->void:
	if not event is InputEventMouseButton or not event.pressed:return
	var house:Dictionary=pop.demo.town._house_record(pop.target_house_id)
	if house.is_empty():return
	if event.button_index==MOUSE_BUTTON_RIGHT:
		button.accept_event();var hug:=Hug.sample(pop.demo.state,house)
		if hug.is_empty():pop.demo._message("靠近弯街后可随路微折")
		else:apply(Hinge.set_angle(pop.demo.state,pop.target_house_id,float(hug.angle)))
	elif event.button_index in [MOUSE_BUTTON_WHEEL_UP,MOUSE_BUTTON_WHEEL_DOWN]:
		button.accept_event();var step:=5. if event.button_index==MOUSE_BUTTON_WHEEL_UP else -5.
		apply(Hinge.set_angle(pop.demo.state,pop.target_house_id,clampf(float(house.get("bend_angle_deg",0.))+step,-28.,28.)))

func _process(_delta:float)->void:
	if not pop.card.visible:return
	var next:=[pop.target_house_id,pop.demo.state.revision]
	if key==next:return
	key=next
	var house:Dictionary=pop.demo.town._house_record(pop.target_house_id)
	if house.is_empty():return
	var value:=int(house.get("corner_bevel",0));var supported:=Form.supported(pop.demo.state,house);var can_bend:=Hinge.supported(pop.demo.state,house);var bend:=float(house.get("bend_angle_deg",0.))
	var facade:=Balcony.authored(house)
	button.disabled=not supported and not can_bend and value==0 and bend==0. and facade==0
	button.caption=(Balcony.LABELS[facade] if not Balcony.plan(pop.demo.state,house).is_empty() else "原貌") if facade>0 else "微折 %.0f°"%bend if bend!=0. and can_bend else ("原貌" if value!=0 or bend!=0. else "微雕") if not supported else "微雕" if value==0 else Form.LABELS[value]
	button.tooltip_text="轻点轮换：直墙 / 圆角 / 斜切 / 外挑 / 飘窗 / 半圆与转角阳台"+(" / 侧翼微折；滚轮微调，右键随路" if can_bend else "") if supported or can_bend else "此屋保留原型轮廓"+(" · 轻点收起微雕" if value!=0 or bend!=0. else "");button.queue_redraw()
