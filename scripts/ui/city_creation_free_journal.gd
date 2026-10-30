extends RefCounted
## Free journals show authoring and earned history, without polling classic goals.
const Growth=preload("res://scripts/world/city_creation_growth.gd")
static func refresh(widget:RefCounted)->bool:
	var free:bool=widget.demo.state.CreationPolicy.is_free(widget.demo.state)
	var summary:Label=widget.cards.get_node_or_null("FreeJournalSummary")
	if free and summary==null:
		summary=widget.demo._label("",13);summary.name="FreeJournalSummary";summary.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;widget.cards.add_child(summary)
	for child:Control in widget.cards.get_children():
		if child==summary or child.name=="HistoricalTasks":continue
		if free:
			if not child.has_meta("before_free_journal"):child.set_meta("before_free_journal",child.visible)
			child.hide()
		elif child.has_meta("before_free_journal"):
			child.visible=child.get_meta("before_free_journal");child.remove_meta("before_free_journal")
	if summary!=null:summary.visible=free
	if not free:return false
	var memories:Array=[]
	for id:String in widget.demo.state.growth_memories:memories.append(str(Growth.FINISHES[id].name))
	summary.text="从房屋、道路、水或树任意开始，按自己的想法营造。\n空间与合奏可在总谱 · L查看；已有来信在上方手动继续。\n"+("已保留的经典纪念："+"、".join(memories) if not memories.is_empty() else "经典纪念随原作品保留。")
	widget.cards.move_child(widget.demo.get_meta("historical_tasks"),0);widget.cards.move_child(summary,1)
	widget.era_label.text="自由营造 · 历史记录保留"
	widget.button.tooltip_text="自由营造与历史记录 · J";widget.next_label.hide();widget.next_button.hide()
	return true
