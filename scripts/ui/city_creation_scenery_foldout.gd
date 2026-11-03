extends VBoxContainer
const Festival=preload("res://scripts/world/city_creation_festival_scenery.gd")
var demo
var toggle:Button
var preview_toggle:Button
var scroll:ScrollContainer
var content:VBoxContainer
var preview:Label
var choice:CheckBox
var pages:Array=[]
var stamp:Array=[]
static func install(owner,parent)->void:
	var page=load("res://scripts/ui/city_creation_scenery_foldout.gd").new();page.demo=owner;parent.add_child(page);owner.set_meta("scenery_foldout",page)
func _ready()->void:
	name="SceneryFoldout";add_theme_constant_override("separation",4)
	toggle=demo._button("街景风物 ▾",func():scroll.visible=not scroll.visible;refresh());toggle.name="SceneryFoldoutToggle";add_child(toggle)
	scroll=ScrollContainer.new();scroll.name="SceneryChoices";scroll.custom_minimum_size.y=130;scroll.horizontal_scroll_mode=ScrollContainer.SCROLL_MODE_DISABLED;add_child(scroll)
	content=VBoxContainer.new();content.size_flags_horizontal=Control.SIZE_EXPAND_FILL;scroll.add_child(content)
	preload("res://scripts/ui/city_creation_flowering_vines_page.gd").install(demo,content)
	preload("res://scripts/ui/city_creation_paired_bridge_lamps_page.gd").install(demo,content)
	preload("res://scripts/ui/city_creation_window_pennants_page.gd").install(demo,content)
	for key:String in ["flowering_vines_page","paired_bridge_lamps_page","window_pennants_page"]:
		var page:Node=demo.get_meta(key);pages.append(page);page.detail.hide()
	preload("res://scripts/ui/city_creation_plaza_pergola_page.gd").install(demo,content)
	choice=CheckBox.new();choice.name="FestivalBuntingAndLights";choice.text="庆典彩旗与水岸暖灯 · Lv.4";content.add_child(choice);choice.toggled.connect(change)
	preview_toggle=demo._button("待制作风物 · 1项 ▸",func():preview.visible=not preview.visible;refresh());preview_toggle.name="SceneryPreviewToggle";add_child(preview_toggle)
	preview=demo._label("[待制作] Lv.5 作品馆鎏金题跋印章",12);preview.name="SceneryUnmade";preview.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;add_child(preview);preview.hide();refresh()
func refresh()->void:
	var city:RefCounted=demo.state;visible=city.CreationPolicy.is_free(city)
	toggle.text="街景风物 · 暂停经营保留资格 "+("▾" if scroll.visible else "▸")
	for page:Node in pages:
		page.choice.tooltip_text=page.detail.text;page.choice.text=page.choice.text.get_slice(" · ",0)+(" · 已得" if int(city.cozy_progression.get("level",0))>=2 else " · Lv.2可选")
	choice.disabled=not Festival.unlocked(city) or demo.edit_pending() or demo.gallery.busy
	choice.set_pressed_no_signal(city.creative_settings.get("presentation",{}).get(Festival.FIELD,false))
	choice.tooltip_text="新账期等级4可选。" if not Festival.unlocked(city) else "暂停经营保留资格。合适的楼层间悬挂彩旗，临水住宅添暖灯；关闭此项退回原有自动风物，关闭自动装饰收起。"
	preview_toggle.text="待制作风物 · 1项 "+("▾" if preview.visible else "▸")
func change(value:bool)->void:
	var result:=Festival.set_enabled(demo.state,value)
	if result.ok and not result.get("no_op",false):demo._after_edit(result,"history")
	elif not result.ok:demo._message(result.message)
	refresh()
func _process(_delta:float)->void:
	var city:RefCounted=demo.state;var current:=[city.get_instance_id(),city.revision,Festival.key(city),demo.edit_pending(),demo.gallery.busy]
	if current!=stamp:stamp=current;refresh()
