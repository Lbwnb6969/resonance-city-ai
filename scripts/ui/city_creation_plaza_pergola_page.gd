extends CheckBox
const Plan=preload("res://scripts/world/city_creation_plaza_pergola.gd")
var demo
var stamp:Array=[]
static func install(owner,parent)->void:
	var page=load("res://scripts/ui/city_creation_plaza_pergola_page.gd").new();page.demo=owner;parent.add_child(page);owner.set_meta("plaza_pergola_page",page)
func _ready()->void:
	name="PlazaPergolaFountain";toggled.connect(change);refresh()
func refresh()->void:
	var city=demo.state;disabled=not Plan.unlocked(city) or demo.edit_pending() or demo.gallery.busy
	set_pressed_no_signal(city.creative_settings.get("presentation",{}).get(Plan.FIELD,false));text="广场木花架与涌泉 · "+("已得" if Plan.unlocked(city) else "Lv.3可选")
	tooltip_text="新账期等级3可选，暂停保留。净空足够的石板广场添葡萄藤木花架与八角涌泉；真实居民可停留，零经营点。随本项或自动装饰收起，保留原铺装与空间资格。"
func change(value:bool)->void:
	var result:=Plan.set_enabled(demo.state,value)
	if result.ok and not result.get("no_op",false):demo._after_edit(result,"history")
	elif not result.ok:demo._message(result.message)
	refresh()
func _process(_delta:float)->void:
	if not is_visible_in_tree():return
	var current:=[demo.state.get_instance_id(),demo.state.revision,Plan.key(demo.state),demo.edit_pending(),demo.gallery.busy]
	if current!=stamp:stamp=current;refresh()
