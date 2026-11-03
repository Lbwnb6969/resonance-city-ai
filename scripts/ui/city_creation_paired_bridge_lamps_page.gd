extends VBoxContainer
const Plan=preload("res://scripts/world/city_creation_paired_bridge_lamps.gd")
var demo:Node3D
var choice:CheckBox
var detail:Label
var stamp:Array=[]
static func install(owner:Node3D,parent:Control)->void:
	var page=load("res://scripts/ui/city_creation_paired_bridge_lamps_page.gd").new();page.demo=owner;parent.add_child(page);owner.set_meta("paired_bridge_lamps_page",page)
func _ready()->void:
	choice=CheckBox.new();choice.name="PairedBridgeLamps";choice.text="双排桥灯 · 可选外观";add_child(choice)
	detail=demo._label("",12);detail.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;add_child(detail)
	choice.toggled.connect(change);refresh()
func refresh()->void:
	var city:RefCounted=demo.state;visible=city.CreationPolicy.is_free(city)
	choice.disabled=not Plan.unlocked(city) or demo.edit_pending() or demo.gallery.busy
	choice.set_pressed_no_signal(bool(city.creative_settings.get("presentation",{}).get("paired_bridge_lamps",false)))
	detail.text=("新账期等级2可选。" if not Plan.unlocked(city) else "已得外观 · 暂停保留。")+"至少3.2米的石拱桥栏侧添双排灯；保留原桥头灯。可单独或随自动装饰收起。"
func change(value:bool)->void:
	var result:=Plan.set_enabled(demo.state,value)
	if result.ok:
		if not result.get("no_op",false):demo._after_edit(result,"history")
	else:demo._message(str(result.message))
	refresh()
func _process(_delta:float)->void:
	var city:RefCounted=demo.state;var current:=[city.get_instance_id(),city.revision,Plan.key(city),demo.edit_pending(),demo.gallery.busy]
	if current!=stamp:stamp=current;refresh()
