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
		result="【五大画具 · 自由营造】\n\n从喜欢的位置落下第一座房屋，也可先画路、种树或塑造地形。底部的筑屋、修路、水岸、林木、地形开局即可选择，没有固定建造顺序。\n\n• 筑屋\n空地点击或拖拽建屋；点已有房屋打开卡片，调整屋式、风貌、配色与细部。选择「加建」后，点侧墙扩房、点屋顶加层；Esc退出。筑屋内可选露台、拆除和独立地标，具体形态仍需合适的房形、地形与入口。\n\n• 修路\n随手画拖动松开即铺；直路点起终点，曲路再定中间控制点。定点后Tab切直路/曲路，右键或Esc取消。道路跨水派生桥或汀步，沿坡形成真实门阶与石阶。按Shift选裁路段，Enter确认；Alt+Shift可自选两切点。\n\n• 水岸与林木\n水岸画具开池塘、引支渠；林木画具单株摆放或成片种植，Shift临时擦除。圆章选择样式和尺寸。生活用途在选屋「详情」内查看与调整，原快捷键5仍可进入用途与试听。\n\n• 地形\n塑造草丘、洼地、露岩与平顶台地，也可按定高修整。台地建屋保留实际海拔，修路按实际坡面接合。\n\nCtrl+Z撤销，Ctrl+Y或Ctrl+Shift+Z重做。下方「教学提示」可随时关闭；接路等真实失败原因仍在选中卡片显示。"
	elif index==1:
		result="【自由营造 · 空间、当期成长与历史权益】\n\n普通房屋可选八种生活用途，也可随形选择四时代风貌。建筑、邻接、道路、水岸和高程形成庭院、水岸、百工与礼乐场所；用途标签不代替真实空间。\n\n基础营造与音乐不要求买面包、茶聚、库存或指定顾客。街坊生活与已发生的装饰、收益记录继续保留。\n\n轻量经营可在J手记启用、暂停或恢复。正式新城默认开启；旧城转换后由作者主动启用。开启时只累计新账期真实完成事件的营造点与等级，历史建筑和事件不补发。暂停不积累营造点、不派新经营任务；在途人员与货物保留，恢复沿用原账期，不补算暂停时间。\n\n新账成长与历史手札分账。旧等级、小数余量、已得卡与稀有度在J手记查看；原待选手札仍可在F1翻开，未完成旧来信可在J手记继续或领取。查看历史权益不会领取或重抽；启用经营不重置旧额度，也不把新账营造点换成旧手札。\n\n栈桥小灯与田园爱奥尼长馆细藤按真实几何出现，无需二阶手札；本页下方可查看、定位和收起装饰。新增开花紫藤、双排桥灯和屋脊彩幡可在J手记查看资格并自选，暂停经营保留已得资格。"
	elif index==2:
		result="四时代普通风貌开局即可选择。旧时代纪念与地标权益保留在J手记，不限制普通风貌选择。\n\n"+result
		result=result.replace("一两座孤屋平时只有溪流、鸟鸣和落笔轻音。邻近三四屋唤醒根音与轻拨伴奏，五屋起流淌同一条旋律，十五屋的大聚落加入更丰富的室内乐层。","从一座房屋开始聆听；建筑、道路、水岸与高程组织声部，居民活动点缀其间。基础音乐不以生活库存或指定顾客为前置。")
		result=result.replace("14 屋、茶聚与跨区问答后开启；","")
		result=result.replace("28 屋与两种时代街坊；","")
		result=result.replace("50 屋、贯通三时代共鸣；","")
		result=result.replace("新时代开启后，老街坊保留原风貌","选择风貌时，其他老街坊保留原风貌")
		result=result.replace("在烟火画具中仍可直接浏览","用原快捷键5仍可进入用途与试听")
	elif index==3:
		result=result.replace("筑屋 / 修路 / 烟火 / 林水 / 地形","筑屋 / 修路 / 水岸 / 林木 / 地形")
		result=result.replace("水岸 / 街坊 / 地形","水岸 / 道路（兼容8） / 地形")
		result=result.replace("L 生活账本","L 城市总谱")
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
	convert_button.tooltip_text="先备份并结算已发生的共鸣，再开放普通风貌、用途与画具。旧成长截止，原手札额度、邀约和旧来信奖励保留；转换后可在J手记另启轻量经营新账期。"
	convert_button.pressed.connect(_convert);add_child(convert_button);refresh()

func refresh()->void:
	var free:=Policy.is_free(demo.state)
	description.text="自由创作 · 四时代与画具已开放" if free else "经典成长 · 风貌随城市逐步开启"
	if free:
		var account:Dictionary=demo.state.cozy_progression
		description.text="自由创作 · "+("经营未启用" if account.is_empty() else ("经营开启" if account.enabled else "经营暂停"))+" · 旧权益保留"
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
