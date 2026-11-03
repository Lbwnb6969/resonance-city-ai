extends VBoxContainer
## Explicit current-account controls; browsing never settles or creates an epoch.
const Ledger=preload("res://scripts/world/city_creation_progression_ledger.gd")
var demo:Node3D
var heading:Label
var summary:Label
var action:Button
var feedback:Label
var locations:Button
var paths:Label
var working_path:=""
var last_result:Dictionary={}
var context:Array=[]
static func install(owner:Node3D,parent:Control)->void:
	var page=load("res://scripts/ui/city_creation_progression_page.gd").new();page.demo=owner;parent.add_child(page);owner.set_meta("progression_page",page)
func _ready()->void:
	name="ProgressionPage";add_theme_constant_override("separation",6)
	preload("res://scripts/ui/city_creation_creative_prompts_page.gd").install(demo,self)
	heading=leaf("",15);heading.name="CurrentProgression"
	summary=leaf("",13)
	action=demo._button("",change_policy);action.name="ChangeProgression";add_child(action)
	feedback=leaf("",12)
	locations=demo._button("查看存档与备份位置",func()->void:paths.visible=not paths.visible);locations.name="ProgressionLocations";add_child(locations)
	paths=leaf("",12);paths.name="ProgressionPaths"
	preload("res://scripts/ui/city_creation_scenery_foldout.gd").install(demo,self)
	refresh()
func leaf(text:String,size:int)->Label:
	var label:Label=demo._label(text,size);label.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;label.size_flags_horizontal=Control.SIZE_EXPAND_FILL;add_child(label);return label
func refresh()->void:
	var city:RefCounted=demo.state
	var current:=[city.get_instance_id(),city._wish_epoch]
	if context!=current:
		context=current;working_path="";last_result.clear();feedback.text="";paths.text="";paths.hide()
	visible=city.CreationPolicy.is_free(city) and city.harmony_journey.has("growth_cutoff")
	if not visible:return
	var account:Dictionary=city.cozy_progression
	if account.is_empty():
		heading.text="新经营成长 · 尚未启用"
		summary.text="启用前备份并保存当前城市。已有建筑和历史事件不补发营造点；原手札与来信在下方保留。"
		action.text="备份并启用轻量经营"
	else:
		heading.text="当期经营 · "+("已开启" if account.enabled else "已暂停")
		summary.text="新账期 · 等级%d · 营造点%d / %d"%[account.level,account.xp,Ledger.threshold(int(account.level))]
		if float(account.xp_remainder)>0.:summary.text+=" · 余量%.6f"%account.xp_remainder
		summary.text+="\n"+("只累计新账期真实完成的事件；历史权益另列，不混用额度。" if account.enabled else "暂停期间不积累营造点、不派新经营任务；在途人员与货物保留。恢复沿用本账期，不补算暂停时间。")
		action.text="暂停轻量经营" if account.enabled else "恢复轻量经营"
	action.tooltip_text="每次更改都会先备份，再保存城市。营造和基础音乐始终可自由使用。"
	action.disabled=demo.edit_pending() or demo.gallery.busy
	locations.visible=last_result.get("ok",false) and last_result.has("backup")
func change_policy()->void:
	if demo.edit_pending() or demo.gallery.busy:return
	if demo.save_blocked:
		feedback.text="原作品读取失败，已保留原文件；当前城市可继续编辑，经营未更改。";return
	var city:RefCounted=demo.state
	if working_path.is_empty():working_path=default_path()
	last_result=city.begin_progression_epoch(working_path) if city.cozy_progression.is_empty() else city.CreationPolicy.set_progression_enabled(city,not city.cozy_progression.enabled,working_path)
	if last_result.ok:
		feedback.text="已保存当前城市，并完成原城备份。"
		paths.text="城市存档：\n"+ProjectSettings.globalize_path(working_path)+"\n原城备份：\n"+ProjectSettings.globalize_path(str(last_result.backup))
	else:
		feedback.text="未更改经营 · "+str(last_result.message)
		paths.text="";paths.hide()
	refresh();demo.journal.refresh(false)
func default_path()->String:
	return preload("res://scripts/ui/city_creation_new_city.gd").path_for(demo,true)
func _process(_delta:float)->void:
	if is_visible_in_tree():refresh()
