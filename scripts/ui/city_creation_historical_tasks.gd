extends VBoxContainer
## Explicit journal access to retained quests. Visibility never evaluates conditions.
const Vignettes=preload("res://scripts/world/city_creation_vignettes.gd")
var demo:Node3D
var heading:Label
var read:Button
var detail:Label
var locate:Button
var stamp:Array=[]
var last_result:Dictionary={}
static func install(owner:Node3D,parent:Control)->void:
	var node=load("res://scripts/ui/city_creation_historical_tasks.gd").new();node.demo=owner;parent.add_child(node);owner.set_meta("historical_tasks",node)
func _ready()->void:
	name="HistoricalTasks";heading=demo._label("历史来信",14);add_child(heading)
	read=demo._button("查看／领取旧来信",open_history);read.name="ReadHistoricalTask";add_child(read)
	detail=demo._label("",12);detail.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;detail.hide();add_child(detail)
	locate=demo._button("继续这封来信 · 定位",look_at);locate.name="ContinueHistoricalTask";locate.hide();add_child(locate)
	preload("res://scripts/ui/city_creation_growth_rights_page.gd").install(demo,self)
func key()->Array:
	return [demo.state.get_instance_id(),demo.state._wish_epoch,demo.state.revision,demo.state.CreationPolicy.is_free(demo.state),demo.state.harmony_journey.get("active_vignette",{}).get("serial",0),demo.state.harmony_journey.get("completed_vignettes",{})]
func open_history()->void:
	if demo.edit_pending() or demo.gallery.busy:return
	last_result=demo.get_meta("vignette_journey").continue_history();stamp=key().duplicate(true)
	heading.text="历史来信 · 待继续" if not demo.state.harmony_journey.get("active_vignette",{}).is_empty() else "历史来信"
	var lines:=PackedStringArray(["自由创作不再自动派发经营来信；已有记录和奖励保留。" if demo.state.CreationPolicy.is_free(demo.state) else "这里保留已经收到的来信与完成记录。"])
	var state:String=last_result.status
	if state=="waiting":lines.append("道路正在更新，稍后再查看旧来信。")
	elif state=="claimed":lines.append("已领取 · %s · +%d ♪"%[Vignettes.template(last_result.reward.id).title,int(last_result.reward.xp)])
	elif state=="progress":
		var quest:Dictionary=last_result.quest;var status:Dictionary=last_result.progress;var template:=Vignettes.template(quest.id)
		lines.append("待继续 · "+str(template.title)+"\n"+str(template.prompt))
		lines.append("原条件进度 %d / %d · 尚未领取"%[mini(int(status.count),int(status.needed)),int(status.needed)])
		if status.has("hint"):lines.append(str(status.hint))
	else:lines.append("当前没有待继续的旧来信。")
	var history:Dictionary=demo.state.harmony_journey.get("completed_vignettes",{})
	for id:String in history:lines.append("已收录 · %s ×%d"%[Vignettes.template(id).title,int(history[id])])
	detail.text="\n".join(lines);detail.show();locate.visible=state=="progress"
func look_at()->void:
	demo.journal.close_panel();demo.get_meta("vignette_journey").look_at()
func _process(_delta:float)->void:
	if not is_visible_in_tree():return
	var current:=key()
	if current==stamp:return
	stamp=current.duplicate(true);detail.hide();locate.hide();last_result.clear()
	heading.text="历史来信 · 待继续" if not demo.state.harmony_journey.get("active_vignette",{}).is_empty() else "历史来信"
