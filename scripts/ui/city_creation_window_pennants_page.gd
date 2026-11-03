extends VBoxContainer
const Plan=preload("res://scripts/world/city_creation_window_pennants.gd")
var demo:Node3D
var choice:CheckBox
var detail:Label
var stamp:Array=[]
static func install(owner:Node3D,parent:Control)->void:
	var page=load("res://scripts/ui/city_creation_window_pennants_page.gd").new();page.demo=owner;parent.add_child(page);owner.set_meta("window_pennants_page",page)
func _ready()->void:
	choice=CheckBox.new();choice.name="WindowPennants";choice.text="屋脊彩幡 · 新增外观";add_child(choice)
	detail=demo._label("",12);detail.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;add_child(detail)
	choice.toggled.connect(change);refresh()
func refresh()->void:
	var city:RefCounted=demo.state;visible=city.CreationPolicy.is_free(city)
	choice.disabled=not Plan.unlocked(city) or demo.edit_pending() or demo.gallery.busy
	choice.set_pressed_no_signal(bool(city.creative_settings.get("presentation",{}).get("window_pennants",false)))
	detail.text="新账期等级2后可选；为有房间与屋面支撑的房屋添一对彩幡。" if not Plan.unlocked(city) else "已得外观 · 依最高房间的实际屋面挂出一对彩幡；关闭可撤回，暂停保资格。"
func change(value:bool)->void:
	var result:=Plan.set_enabled(demo.state,value)
	if result.ok:
		if not result.get("no_op",false):demo._after_edit(result,"history")
	else:demo._message(str(result.message))
	refresh()
func _process(_delta:float)->void:
	var city:RefCounted=demo.state;var current:=[city.get_instance_id(),city.revision,Plan.key(city),demo.edit_pending(),demo.gallery.busy]
	if current!=stamp:stamp=current;refresh()
