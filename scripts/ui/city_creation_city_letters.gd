extends VBoxContainer
## Explicit access to existing drafts, letters and needs; no second reward ledger.
const Journey=preload("res://scripts/world/city_creation_harmony_journey.gd")
const Unified=preload("res://scripts/world/city_creation_unified_rewards.gd")
const Vignettes=preload("res://scripts/world/city_creation_vignettes.gd")
var demo
var summary:Label
var claim:Button
var stamp:Array=[]
static func install(owner:Node3D,parent:Control)->void:
	var node=load("res://scripts/ui/city_creation_city_letters.gd").new();node.demo=owner;parent.add_child(node);owner.set_meta("city_letters",node)
func _ready()->void:
	name="CityLetters";summary=Label.new();summary.text="城中来信";summary.size_flags_horizontal=Control.SIZE_EXPAND_FILL;add_child(summary)
	var view:=Button.new();view.name="ReadCityLetters";view.text="查看来信与心愿";view.pressed.connect(read_letters);add_child(view)
	claim=Button.new();claim.name="OpenPendingDraft";claim.text="翻开待选手札";claim.pressed.connect(open_draft);add_child(claim)
	var look:=Button.new();look.text="定位来信空地";look.pressed.connect(locate);add_child(look)
func wishes()->Array:
	var pins:Node=demo.ui_layer.get_child(0).get_node_or_null("CitizenWishPins")
	return pins.offers() if pins!=null else []
func read_letters()->void:
	var lines:PackedStringArray=["城中来信与心愿","\n手札可以稍后再选。"]
	var quest:Dictionary=demo.state.harmony_journey.get("active_vignette",{})
	if not quest.is_empty():
		var template:=Vignettes.template(str(quest.id));lines.append("\n"+str(template.title)+"\n"+str(template.prompt))
	else:lines.append("\n当前没有待办来信，继续随意造城。")
	for row:Dictionary in wishes().slice(0,6):lines.append("· "+str(row.house_id)+"："+str(row.caption)+"，选中这栋建筑可查看与调整。")
	lines.append("\n指向道路长椅按B，可坐下听城；Esc或V回到原视角。")
	demo.guide.body.text="\n".join(lines)
func open_draft()->void:
	if not demo.has_meta("inspiration_draft"):return
	demo.guide.close_panel();var draft:Node=demo.get_meta("inspiration_draft");draft.postponed=false;draft.refresh(true)
func locate()->void:
	if not demo.has_meta("vignette_journey"):return
	demo.guide.close_panel();demo.get_meta("vignette_journey").look_at()
func _process(_delta:float)->void:
	if not is_visible_in_tree():return
	var key:Array=[demo.state.get_instance_id(),demo.state.revision,demo.state.harmony_journey]
	if key==stamp:return
	stamp=key.duplicate(true)
	var count:=Journey.credits(demo.state.harmony_journey)+Unified.pending(demo.state).size()
	summary.text="城中来信 · 待选手札%d"%count;claim.disabled=count==0
