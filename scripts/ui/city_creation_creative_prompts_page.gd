extends VBoxContainer
const Prompts=preload("res://scripts/world/city_creation_creative_prompts.gd")
var demo:Node3D
var previews:Array[Button]=[]
var preview_index:=0
var detail:Label
var active:Label
var take:Button
var leave:Button
var feedback:Label
var context:Array=[]
var last_backup:Dictionary={}
var choosing:=false
static func install(owner:Node3D,parent:Control)->void:
	var page=load("res://scripts/ui/city_creation_creative_prompts_page.gd").new();page.demo=owner;parent.add_child(page);owner.set_meta("creative_prompts_page",page)
func leaf(text:String)->Label:
	var label:Label=demo._label(text,13);label.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;add_child(label);return label
func _ready()->void:
	name="CreativePrompts";add_theme_constant_override("separation",6)
	leaf("创作题签 · 随心选一件想做的事")
	active=leaf("")
	for i in range(Prompts.IDS.size()):
		var button:Button=demo._button("看看 · "+str(Prompts.CARDS[Prompts.IDS[i]].title),func()->void:preview_index=i;preview();refresh())
		add_child(button);previews.append(button)
	detail=leaf("")
	take=demo._button("选作本城题签",choose);add_child(take)
	leave=demo._button("暂不选题签",clear_choice);add_child(leave)
	leaf("只给灵感，不设期限、不发营造点；不选也能自由营造。")
	feedback=leaf("");refresh()
func preview()->void:detail.text=Prompts.CARDS[Prompts.IDS[preview_index]].text
func refresh()->void:
	var city:RefCounted=demo.state
	var current:=[city.get_instance_id(),city._wish_epoch]
	if current!=context:
		context=current;last_backup={};feedback.text=""
		var index:int=Prompts.IDS.find(Prompts.selected(city));preview_index=maxi(0,index);preview()
	visible=city.CreationPolicy.is_free(city)
	var id:=Prompts.selected(city)
	active.text="本城题签 · "+str(Prompts.CARDS[id].title) if not id.is_empty() else "尚未选题签，按自己的想法造城。"
	var busy:bool=choosing or demo.edit_pending() or demo.gallery.busy
	for button:Button in previews:button.disabled=busy
	take.disabled=busy or id==Prompts.IDS[preview_index];leave.disabled=busy or id.is_empty()
func choose()->void:
	if choosing or demo.edit_pending() or demo.gallery.busy:return
	if demo.save_blocked:feedback.text="原作品读取失败，题签未更改。";return
	var city:RefCounted=demo.state;var revision:int=city.revision;var epoch:int=city._wish_epoch
	var id:String=Prompts.IDS[preview_index]
	choosing=true;refresh()
	if int(city.creative_settings.version)==1:
		demo.gallery._set_busy(true)
		last_backup=await demo.gallery._capture("选用题签前的城市","before_creative_prompt")
		demo.gallery._set_busy(false)
		if not last_backup.ok:choosing=false;feedback.text="原城未能收藏，题签未更改。";refresh();return
		if demo.state!=city or city.revision!=revision or city._wish_epoch!=epoch:choosing=false;refresh();return
	var result:=Prompts.choose(city,id);choosing=false
	if result.ok and not result.get("no_op",false):demo._after_edit(result,"history")
	feedback.text=result.get("message","");refresh()
func clear_choice()->void:
	if choosing or demo.edit_pending() or demo.gallery.busy:return
	var result:=Prompts.choose(demo.state,"")
	if result.ok and not result.get("no_op",false):demo._after_edit(result,"history")
	feedback.text=result.get("message","");refresh()
func _process(_delta:float)->void:
	if get_parent().is_visible_in_tree():refresh()
