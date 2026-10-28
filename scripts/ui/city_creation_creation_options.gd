extends HBoxContainer
## Explicit legacy conversion and optional teaching live in the existing handbook.
const Policy=preload("res://scripts/world/city_creation_creation_policy.gd")
var demo
var description:Label
var convert_button:Button
var guidance:CheckBox
var _key:Array=[]
var last_conversion:Dictionary={}

static func guide_text(owner:Node3D,index:int,original:String)->String:
	if not Policy.is_free(owner.state):return original
	var result:=original
	if index==0:
		result=result.replace("【五大画具 · 从邻近三屋开始】","【五大画具 · 自由营造】")
		result=result.replace("先在相邻的空地建起三座小屋，再拉通门前的小路。","从喜欢的位置落下第一座房屋，也可先画路、种树或塑造地形。")
		result=result.replace("随着河湾成长，更多画具会陆续出现","自由创作中，五大画具开局即可选择")
	elif index==1:
		result=result.replace("普通房屋的六种生活用途","普通房屋的八种生活用途")
		result=result.replace("居所、麦香面包坊、花圃茶座、制琴木工坊、人文书院、钟表工坊。","居所、麦香面包坊、花圃茶座、制琴木工坊、人文书院、钟表工坊、演奏庭与交响音乐厅。")
	elif index==2:
		result="四时代普通风貌开局即可选择；时代成长条件记录真实纪念与地标权益。\n\n"+result
		result=result.replace("14 屋、茶聚与跨区问答后开启","成长纪念：14 屋、茶聚与跨区问答")
		result=result.replace("28 屋与两种时代街坊；","成长纪念：28 屋与两种时代街坊；")
		result=result.replace("50 屋、贯通三时代共鸣；","成长纪念：50 屋、贯通三时代共鸣；")
		result=result.replace("新时代开启后，老街坊保留原风貌","选择风貌时，其他老街坊保留原风貌")
	return result

static func install(owner:Node3D,parent:Control)->void:
	var row=load("res://scripts/ui/city_creation_creation_options.gd").new()
	row.demo=owner;parent.add_child(row);owner.set_meta("creation_options",row)

func _ready()->void:
	name="CreationOptions";add_theme_constant_override("separation",12)
	description=Label.new();description.name="CreationPolicyDescription";description.size_flags_horizontal=Control.SIZE_EXPAND_FILL
	description.add_theme_font_size_override("font_size",13);add_child(description)
	guidance=CheckBox.new();guidance.name="OptionalCreationGuidance";guidance.text="教学提示";guidance.toggled.connect(_guidance_changed);add_child(guidance)
	convert_button=Button.new();convert_button.name="EnableFreeCreation";convert_button.text="开启自由创作"
	convert_button.tooltip_text="先备份此城，再开放普通风貌、用途与画具；历史纪念、手札和旧展示保留。"
	convert_button.pressed.connect(_convert);add_child(convert_button);refresh()

func refresh()->void:
	var free:=Policy.is_free(demo.state)
	description.text="自由创作 · 四时代与画具已开放" if free else "经典成长 · 风貌随城市逐步开启"
	guidance.disabled=not free
	guidance.set_pressed_no_signal(bool(demo.state.creative_settings.get("guidance",true)))
	guidance.tooltip_text="可随时打开或收起建造建议；所有基础画具始终可用。" if free else "经典成长保留原引导；开启自由创作后可单独选择教学提示。"
	convert_button.visible=not free
	convert_button.disabled=demo.save_blocked or demo.edit_pending() or demo.gallery.busy

func _guidance_changed(enabled:bool)->void:
	var result:=Policy.set_preferences(demo.state,{"guidance":enabled})
	if result.ok:demo._refresh_ui()
	else:demo._message(str(result.get("message","偏好未保存")))
	refresh()

func _convert()->void:
	if demo.edit_pending() or demo.gallery.busy or demo.save_blocked:return
	demo._capture_journeys()
	var path:String=demo.SAVE_PATH
	if not demo.persistence:
		var folder:String=demo.collection_directory.path_join("转换存档")
		if DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(folder))!=OK:
			demo._message("无法保存转换副本，当前城市保留。");return
		path=folder.path_join("自由创作_%d.json"%Time.get_ticks_usec())
	last_conversion=Policy.convert(demo.state,path)
	if last_conversion.ok:
		demo._refresh_ui()
		demo.guide._select_tab(demo.guide.tabs.current_tab)
		# A normal collection item makes a non-persistent demo's converted copy
		# reopenable through the existing gallery, without touching continue-save.
		if not demo.persistence:
			last_conversion.collection=await demo.gallery._capture("自由创作河湾","manual")
			if not last_conversion.collection.ok:last_conversion.message+="；作品收藏暂未成功，转换副本已独立保存。"
	demo._message(str(last_conversion.get("message","转换未完成")));refresh()

func _process(_delta:float)->void:
	if not is_visible_in_tree():return
	var key:=[demo.state.get_instance_id(),demo.state.revision,demo.save_blocked,demo.edit_pending(),demo.gallery.busy]
	if key!=_key:_key=key;refresh()
