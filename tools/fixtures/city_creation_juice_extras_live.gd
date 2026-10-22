extends RefCounted
const Fixture=preload("res://tools/fixtures/city_creation_juice_fixture.gd")
const Ordinary=preload("res://tests/test_city_creation_signatures.gd")
const Probe=preload("res://tools/fixtures/city_creation_audio_probe.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/M09/多米诺连锁"
var demo:Node
var tree:SceneTree
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.music._loading:await tree.process_frame
	for i in range(30):await tree.process_frame
func show(city:RefCounted)->void:
	demo._after_edit(demo.state.restore(city.snapshot()),"history");await settle();demo.life.set_process(false)
	demo.select_tool(0)
func queued(after:int,kind:String)->Array:
	return demo.get_meta("juice_feedback").journal.filter(func(row):return row.phase=="queued" and int(row.serial)>after and row.kind==kind)
func finish_chain(before:int,label:String)->bool:
	var juice:Node=demo.get_meta("juice_feedback");var hits:int=demo.score_ribbon.juice_hits
	var deadline:=Time.get_ticks_msec()+10000;var shot:=false;var image:Image
	while Time.get_ticks_msec()<deadline:
		await tree.process_frame
		if not shot and juice.arcs.slots.any(func(row):return row.node.visible and juice._clock()-float(row.clock)>.28):
			shot=true;demo.toast.hide();demo.toast_time=0.;await RenderingServer.frame_post_draw
			# Keep readback in memory; disk I/O happens after the sequence.
			image=tree.root.get_texture().get_image()
		if juice.serial>before and juice.chains.is_empty() and demo.score_ribbon.juice_hits>hits:break
	if image!=null:image.save_png(OUT+"/"+label+".png")
	return juice.serial>before and demo.score_ribbon.juice_hits>hits
func run(owner:Node)->Dictionary:
	demo=owner;tree=demo.get_tree();var checks:Dictionary={};var details:Dictionary={}
	var juice:Node=demo.get_meta("juice_feedback");var ids:Array=[]
	for node:Node in demo.music.get_children()+demo.ambience.get_children():ids.append(node.get_instance_id())
	await show(Fixture.wishes());demo.focus=Vector3(-27,.7,-20);demo.zoom=22.;demo.pitch=.85;demo._update_camera()
	var before:int=juice.serial
	demo.life.site_wishes.arm("h1","water")
	var pond:Dictionary=demo.state.add_water([Vector2(-33,-24)] as Array[Vector2],3.2,"pond");demo._after_edit(pond,"water")
	checks.real_wish_chain=await finish_chain(before,"心愿首炉连锁")
	checks.actual_first_batch=pond.ok and int(demo.state.bakery_status("h1").produced)==2 and demo.state.wish_rewards.get("h1",{}).get("water",0)==2 and not queued(before,"wish").is_empty()
	details.wishes=queued(before,"wish")
	before=juice.serial
	checks.real_customer=demo.state.serve_bread("h1","h3")
	var upgrades:Array=demo.life._refresh_quality();details.quality_events=upgrades.duplicate(true)
	checks.real_quality_chain=await finish_chain(before,"品质晋升连锁")
	checks.quality_source=demo.state.level_tier("h3")==2 and not queued(before,"quality").is_empty()
	var snapshot:Dictionary=demo.state.snapshot();var history:int=demo.state._undo.size()
	for i in range(60):await tree.process_frame
	checks.visuals_keep_rewards_and_history=demo.state.snapshot()==snapshot and demo.state._undo.size()==history
	var city:RefCounted=Ordinary.ordinary_city();city.set_house_role("h3","workshop");city.Signatures.refresh(city)
	await show(city);demo.focus=Vector3(-17,.7,0);demo.zoom=27.;demo._update_camera()
	before=juice.serial
	var keep:Dictionary=demo.state.place_signature("bell_keep",Vector2(-18,0));demo._after_edit(keep,"room")
	checks.real_aura_chain=await finish_chain(before,"古钟塔伙伴回响")
	checks.aura_source=keep.ok and queued(before,"aura").any(func(row):return str(keep.house_id) in row.ids and row.ids.size()>1)
	details.auras=queued(before,"aura")
	before=juice.serial;demo._after_edit(demo.state.undo(),"history");await settle()
	demo._after_edit(demo.state.redo(),"history");await settle();await tree.create_timer(.5).timeout
	checks.undo_redo_no_retrigger=juice.serial==before and juice.chains.is_empty()
	var path:=OUT+"/隔离连锁存档.json";var saved:Dictionary=demo.state.save_city(path)
	var copy:=State.new();var loaded:Dictionary=copy.load_city(path)
	demo._after_edit(demo.state.restore(copy.snapshot()),"history");await settle();await tree.create_timer(.5).timeout
	checks.reload_quiet=saved.ok and loaded.ok and juice.serial==before and juice.chains.is_empty()
	var audio:Dictionary=await Probe.record(OUT+"/连锁实录.wav",3.2);checks.audible_unclipped=audio.ok
	var after_ids:Array=[]
	for node:Node in demo.music.get_children()+demo.ambience.get_children():after_ids.append(node.get_instance_id())
	checks.fixed_pool=ids==after_ids and demo.music._players.size()==12 and demo.music._effects.size()==4 and demo.music.spatial._names.size()==6 and demo.ambience.get_child_count()==2
	var report:={"ok":checks.values().all(func(ok):return ok),"checks":checks,"details":details,"audio":audio}
	FileAccess.open(OUT+"/extras.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("JUICE_EXTRAS ",JSON.stringify(report));return report
