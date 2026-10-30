extends VBoxContainer
## An explicit, read-only view of rights already stored in this city.
const Rights=preload("res://scripts/world/city_creation_growth_rights.gd")
const Journey=preload("res://scripts/world/city_creation_harmony_journey.gd")
var demo:Node3D
var read:Button
var detail:Label
var last_report:Dictionary={}
var context:Array=[]
static func install(owner:Node3D,parent:Control)->void:
	var page=load("res://scripts/ui/city_creation_growth_rights_page.gd").new();page.demo=owner;parent.add_child(page);owner.set_meta("growth_rights_page",page)
func _ready()->void:
	name="GrowthRightsPage"
	read=demo._button("查看已得手札与历史权益",open_rights);read.name="ReadGrowthRights";add_child(read)
	detail=demo._label("",12);detail.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;detail.hide();add_child(detail)
func open_rights()->void:
	if demo.edit_pending() or demo.gallery.busy:return
	last_report=Rights.report(demo.state)
	context=key()
	var lines:=PackedStringArray(["已有记录 · 等级%d · 营造点%d"%[last_report.level,last_report.xp],"待选手札%d · 旧城传承邀约%d"%[last_report.credits,last_report.legacy_invitations.size()],"待选内容可在手札 · F1中翻开。"])
	if not last_report.pending.is_empty():
		var titles:Array=[]
		for id:String in last_report.pending:titles.append(str(Journey.cards()[id].name))
		lines.append("保留的邀约："+"、".join(titles))
	lines.append("\n已得手札 · 原有条件与效果保留")
	if last_report.cards.is_empty():lines.append("本城尚无已得手札，基础营造与基础音乐均可自由使用。")
	for row:Dictionary in last_report.cards:
		var status:="研习%d阶"%row.rank if row.rank>0 else "旧城章程"
		if row.rarity>0:status+=" · "+str(Journey.Rarity.NAMES[row.rarity])
		lines.append("%s · %s\n%s"%[row.name,status,row.text])
		if row.sample:lines.append("原二阶记录保留；自由创作的微景与回答按真实空间启用。在F1可查看、定位或收起装饰。")
	lines.append("\n建筑和弦 · 当前空间与既有收录分别保留")
	for row:Dictionary in last_report.chords:
		if row.active or row.recorded:lines.append(row.name+" · "+("当前成立" if row.active else "当前未成立")+(" · 已有记录" if row.recorded else ""))
	if not last_report.chords.any(func(row):return row.active or row.recorded):lines.append("本城暂无成立或收录的建筑和弦。")
	if last_report.inspiration_multiplier>1.:lines.append("百工正式营造点收益 +35% · 当前来源成立")
	lines.append("查看不会领取奖励；历史收录不会替代当前空间条件。")
	detail.text="\n".join(lines);detail.show()
func key()->Array:
	var journey:Dictionary=demo.state.harmony_journey
	return [demo.state.get_instance_id(),demo.state._wish_epoch,demo.state.revision,demo.state._region_network_revision,journey.get("harmony_xp",0),journey.get("harmony_level",1),journey.get("receipts",{}).size()]
func _process(_delta:float)->void:
	if not detail.visible:return
	if context!=key():detail.hide();last_report.clear()
