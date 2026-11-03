extends Node
## Read the published shell; do not infer a tower, water or coverage from a label.
const Choice=preload("res://scripts/world/city_creation_architecture_variants.gd")
const Facts=preload("res://scripts/visual/city_creation_detail_status.gd")
const ROWS:={"windows":["WindowDetailChoices","WindowDetail_",Choice.LABELS,"窗部"],"dormer":["DormerChoices","DormerChoice_",Choice.DORMER_LABELS,"天窗"],"chimney":["ChimneyChoices","ChimneyChoice_",Choice.CHIMNEY_LABELS,"烟囱"],"gable_trim":["GableTrimChoices","GableTrimChoice_",Choice.TRIM_LABELS,"檐口"],"porch":["PorchChoices","PorchChoice_",Choice.PORCH_LABELS,"门廊"]}
const REASONS:={"top_roof_span_missing":"最高层缺少相邻完整瓦顶；同层扩一格或移除覆盖层后自动显露。","shape_unsupported":"当前屋式、风貌或折翼不支持此细部；恢复原屋式后自动显露。","exposed_window_missing":"没有可安装的深窗外墙；留出暴露实墙后自动显露。","exposed_trim_missing":"没有可安装且避开邻屋的檐边；留出端部檐边后自动显露。","entry_wall_missing":"没有可摆放小景的入口墙面；恢复入口墙面后自动显露。"}
const REJECTS:={"no_roof_surface":"无可用瓦顶","ridge_intersection":"屋脊或屋谷穿过落位","roof_support_missing":"坡面不足以完整支撑","roof_too_steep":"坡面高差过大","roof_obstructed":"屋顶构件占位","neighbor_obstructed":"邻屋占位","water_tight":"临水净空不足","house_obstructed":"房屋占位","entry_clearance":"需保留门口通路","road_tight":"道路贴近落位","furniture_obstructed":"街具占位","landmark_obstructed":"地标占位","plant_obstructed":"植物占位","ground_support_missing":"地面或门阶高差不足以平放","frontage_obstructed":"门前构件占位"}
var pop:RefCounted
var text:Label
var context:Array=[]
func setup(owner:RefCounted,parent:Control)->void:
	pop=owner;pop.demo.add_child(self);text=Label.new();text.name="DormantDetailReasons";text.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;text.custom_minimum_size.x=330;text.add_theme_color_override("font_color",Color("a36924"));parent.add_child(text);text.hide()
static func reason(data:Dictionary)->String:
	var key:=str(data.get("dormant_reason",""))
	if REASONS.has(key):return REASONS[key]
	var reasons:PackedStringArray=[]
	for id:String in data.get("rejected",{}):
		if REJECTS.has(id):reasons.append(REJECTS[id])
	return "落位检查："+"、".join(reasons)+"。调整这些位置后自动恢复。"
func _process(_delta:float)->void:
	if not pop.card.visible:text.hide();context=[];return
	var root:Node=pop.demo.town.house_roots.get(pop.target_house_id)
	if not is_instance_valid(root):return
	var next:=[pop.demo.state.get_instance_id(),pop.target_house_id,pop.demo.state.revision,root.get_instance_id()]
	if next==context:return
	context=next;var house:Dictionary=pop.demo.town._house_record(pop.target_house_id);var messages:PackedStringArray=[]
	for slot:String in ROWS:
		var record:=Choice.record(house,slot);var selected:=str(record.get("windows" if slot=="windows" else "id",""));var spec:Array=ROWS[slot]
		var row:Control=pop.inspector.appearance.find_child(spec[0],true,false)
		var supported:=Facts.supported(pop.demo.state,house,slot);row.visible=supported or not selected.is_empty()
		var data:Dictionary=root.get_meta("architecture_detail_status",{}).get(slot,{});var dormant:bool=selected!="" and selected!="off" and not data.is_empty() and not data.get("active",false)
		for id:String in spec[2]:
			var suffix:String=("original" if slot=="windows" else "automatic") if id.is_empty() else id
			var button:Button=row.find_child(spec[1]+suffix,true,false);button.text=spec[2][id]+(" [!]" if dormant and id==selected else "");button.set_pressed_no_signal(id==selected);button.disabled=not supported and id!=""
			for color:String in ["font_color","font_pressed_color","font_disabled_color"]:
				if dormant and id==selected:button.add_theme_color_override(color,Color("a36924"))
				else:button.remove_theme_color_override(color)
			if dormant and id==selected:
				if not button.has_meta("before_dormant_tooltip"):button.set_meta("before_dormant_tooltip",button.tooltip_text)
				button.tooltip_text="手选已保留 · "+reason(data)
			elif button.has_meta("before_dormant_tooltip"):
				button.tooltip_text=button.get_meta("before_dormant_tooltip");button.remove_meta("before_dormant_tooltip")
		if dormant:messages.append("[!] "+spec[3]+" · "+reason(data))
	text.text="\n".join(messages);text.visible=not messages.is_empty();pop.inspector.fit()
