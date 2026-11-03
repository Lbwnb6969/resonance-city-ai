extends Node
const Choice=preload("res://scripts/world/city_creation_architecture_variants.gd")
var pop:RefCounted
var row:HBoxContainer
var buttons:Dictionary={}
var context:Array=[]
func setup(owner:RefCounted,parent:Control)->void:
	pop=owner;pop.demo.add_child(self);row=HBoxContainer.new();row.name="ChimneyChoices";parent.add_child(row)
	var label:=Label.new();label.text="烟囱";row.add_child(label)
	for id:String in [""]+Choice.CHIMNEYS:
		var button:=Button.new();button.name="ChimneyChoice_"+("automatic" if id.is_empty() else id);button.text=Choice.CHIMNEY_LABELS[id];button.toggle_mode=true;button.custom_minimum_size=Vector2(74,32);row.add_child(button);buttons[id]=button
		button.pressed.connect(func()->void:
			if not row.is_visible_in_tree():return
			pop.demo._after_edit(pop.demo.state.set_house_chimney(pop.target_house_id,id),"room",true,pop.target_house_id);pop.refresh();context=[])
	row.hide()
func _process(_delta:float)->void:
	if not pop.card.visible:row.hide();context=[];return
	var next:=[pop.demo.state.get_instance_id(),pop.target_house_id,pop.demo.state.revision]
	if context==next:return
	context=next;var house:Dictionary=pop.demo.town._house_record(pop.target_house_id)
	row.visible=not house.is_empty() and Choice.chimney_supported(pop.demo.state,house)
	if not row.visible:return
	for id:String in buttons:buttons[id].set_pressed_no_signal(Choice.chimney(house)==id);buttons[id].tooltip_text="选择"+str(Choice.CHIMNEY_LABELS[id])+"；沿真实屋顶避让。炉烟随实际开炉工作，可撤销。"
