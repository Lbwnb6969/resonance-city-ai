extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/聚落开拓与轨街_2026-10-21"
var demo
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	var until:=Time.get_ticks_msec()+180000
	while (demo.edit_pending() or demo._edit_ui_pending or demo.life.budget_sync_pending() or demo.music._loading) and Time.get_ticks_msec()<until:await process_frame
	for i:int in range(12):await process_frame
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=120
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/隔离作品";root.add_child(demo);demo.life.set_process(false)
	demo._after_edit(demo.state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))),"history");await settle();demo.life.set_process(false);demo.life._process(.001)
	var load_ms:float=demo.edit_budget_report().get("latency_ms",0.)
	var load_report:Dictionary=demo.edit_budget_report().duplicate(true)
	var bonuses:Dictionary=demo.state.synergy_buffs()
	check(demo.state.houses.size()==127 and bonuses.large_cluster_count==6 and bonuses.expansion_multiplier==1.6,"real flagship six independent five-home groups reach the sixty-percent cap")
	check(demo.state.transit_efficiency("h104")==1.3 and demo.state.transit_efficiency("h115")==1.,"published street graph limits depot efficiency to its real corridor")
	demo.ledger.open_panel();demo.ledger.refresh();await process_frame
	check(demo.ledger.body.text.contains("60%") and demo.ledger.body.text.contains("水力工坊带"),"actual operating ledger explains expansion and local water drive")
	demo.ledger.panel.hide();demo.select_tool(4)
	var house:Dictionary=demo.town._house_record("h104");demo.focus=Vector3(house.origin[0],1.,house.origin[1]);demo.zoom=28.;demo._update_camera();demo.selected_house="h104"
	for resolution:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=resolution;demo.spatial_popover.open_for_house("h104");await settle()
		check(demo.spatial_popover.card.visible and demo.spatial_popover.status.text.contains("轨交直达"),"real workshop roof card shows thirty-percent transit efficiency at "+str(resolution))
		check(Rect2(Vector2.ZERO,Vector2(resolution)).encloses(demo.spatial_popover.card.get_global_rect()),"transit information fits actual roof card at "+str(resolution))
		await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/轨街屋顶_%d.png"%resolution.x)
	var authored:Dictionary=demo.state.snapshot()
	demo._after_edit(demo.state.unlink_districts("d6","d7"),"history",false);await settle();demo.life._process(.001)
	check(demo.state.synergy_buffs().expansion_multiplier==1.6 and demo.state.transit_efficiency("h104")==1.3,"changing an audio arc preserves actual independent groups and rail connectivity")
	demo._after_edit(demo.state.undo(),"history",false);await settle();demo.life._process(.001)
	check(demo.state.synergy_buffs().expansion_multiplier==1.6 and demo.state.transit_efficiency("h104")==1.3,"undo republishes the exact graph-derived bonuses")
	var samples:Array[float]=[]
	for i:int in range(60):
		var began:=Time.get_ticks_usec()
		for h:Dictionary in demo.state.houses:demo.state.planning_bonus(str(h.id))
		samples.append(float(Time.get_ticks_usec()-began)/1000.);await process_frame
	samples.sort()
	check(demo.state.bakery_supply==authored.bakery_supply and demo.state.workshop_supply==authored.workshop_supply,"querying and inspecting planning never mints inventory")
	check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"real UI verification preserves personal save bytes")
	var result:Dictionary={"checks":checks,"failures":failures,"ok":failures.is_empty(),"initial_load_report":load_report,"initial_127_house_load_ms":load_ms,"cached_127_queries_p95_ms":samples[int(samples.size()*.95)]}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("SYNERGY_LIVE ",JSON.stringify(result))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
