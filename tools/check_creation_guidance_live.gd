extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const Guidance=preload("res://scripts/ui/city_creation_guidance.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/成长引导_2026-10-16"
var demo
var failures:Array[String]=[]
var facts:Dictionary={}
func _initialize()->void: _run.call_deferred()
func check(ok:bool,label:String)->void:
	if not ok: failures.append(label);push_error(label)
func capture(label:String)->void:
	await RenderingServer.frame_post_draw
	check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"capture "+label)
func click(control:Control)->void:
	var at:Vector2=control.get_global_rect().get_center()
	var motion:=InputEventMouseMotion.new();motion.position=at;motion.global_position=at;root.push_input(motion);await process_frame
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.button_index=MOUSE_BUTTON_LEFT;event.position=at;event.global_position=at;event.pressed=down;root.push_input(event);await process_frame
func goal(chapter:int,index:int)->void:
	demo.journal.open_panel();await process_frame
	var n:=index
	for i in range(chapter): n+=demo.journal.rows[i].goals.size()
	var button:Button=demo.journal.goal_buttons[n]
	var scroll:ScrollContainer=demo.journal.panel.find_child("Chapters",true,false)
	scroll.ensure_control_visible(button);await process_frame;await process_frame
	check(scroll.get_global_rect().encloses(button.get_global_rect()),"real goal button scrolls into view")
	await click(button)
	check(not demo.journal.panel.visible,"real mouse goal action closes journal")
func layout()->void:
	var screen:=Rect2(Vector2.ZERO,Vector2(root.size))
	for node:Control in demo.ui_layer.get_node("Root/Actions").get_children():
		check(screen.encloses(node.get_global_rect()),"action visible: "+node.text)
	var header:Control=demo.gallery_button.get_parent().get_parent()
	var help:Control=demo.hint.get_parent().get_parent()
	check(not header.get_global_rect().intersects(help.get_global_rect()),"header and instructions do not overlap")
	check(screen.encloses(help.get_global_rect()),"instructions remain within window")
func audio_ids()->Array:
	var ids:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values(): ids.append(player.get_instance_id())
	for player:AudioStreamPlayer in demo.music._effects: ids.append(player.get_instance_id())
	return ids
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false)
	for i in range(30): await process_frame
	var audio:=audio_ids()
	var snapshot:Dictionary=demo.state.snapshot()
	layout();await capture("after_01_初城界面")
	demo.journal.open_panel();await process_frame;await capture("after_02_下一件事")
	check(demo.journal.next_button.text=="画一座桥","journal names concrete next action")
	await click(demo.journal.next_button)
	check(demo.tool==2 and demo.road_style=="path" and demo.hint.text.contains("对岸") and absf(demo.focus.x-demo.state.river_x(2.0))<0.001,"bridge action frames river and explains full drag")
	await capture("after_03_画桥引导")
	await goal(3,1)
	check(demo.tool==8 and demo.terrain_brush.mode=="plateau" and demo.terrain_brush.mode_picker.selected==4 and demo.hint.text.contains("原有房屋不会"),"highland action selects actual plateau and explains new-house elevation")
	check(demo.state.water_clearance(Vector2(demo.focus.x,demo.focus.z))>5.0,"highland action finds dry construction site")
	await capture("after_04_台地引导")
	await goal(3,2)
	var street:CheckButton=demo.road_panel.find_child("RoadPromenade",true,false)
	check(demo.tool==2 and demo.road_style=="promenade" and street.button_pressed,"scenic action sets actual wide-street control")
	await goal(3,4)
	check(demo.tool==7 and demo.district_link_mode and demo.district_link_button.button_pressed and demo.hint.text.contains("两片"),"link action arms actual cross-district gesture")
	await capture("after_05_共鸣引导")
	await goal(1,4)
	check(demo.tool==7 and not demo.district_link_mode and not demo.district_link_button.button_pressed,"district painting leaves link mode explicitly")
	await goal(2,2)
	var house:Dictionary=demo.town._house_record(demo.selected_house)
	check(demo.tool==0 and not house.is_empty() and house.role=="residential" and house.cells.all(func(c):return c.x==0 and c.z==0 and c.kind=="room"),"tower action picks a real viable house column")
	await goal(1,2)
	check(demo.tool==4 and not demo.selected_house.is_empty() and demo.place_panel.visible and demo.hint.text.contains("两位"),"missing cafe goal selects existing home without changing its role")
	check(demo.state.snapshot()==snapshot,"all guidance actions preserve exact city ledger history and authored data")
	demo.select_tool(0)
	check(demo.guided_hint.is_empty() and not demo.hint.text.contains("两位"),"manual tool selection clears stale goal instructions")
	# Presentation fixture only: progression itself is covered by real Life checks.
	demo.state.growth_memories.assign(["dawn"]);demo.journal.refresh(false)
	check(demo.journal.button.text.contains("街坊成歌"),"header advances to the next unfinished chapter")
	root.size=Vector2i(1024,768)
	for i in range(8): await process_frame
	layout()
	demo._message("明信片已保存：C:/Users/Administrator/AppData/Roaming/Godot/app_userdata/共鸣之城/postcards/我的河湾_2026-10-16.png")
	for i in range(3): await process_frame
	var help:Control=demo.hint.get_parent().get_parent()
	var toolbar:Control=demo.ui_layer.get_node("Root/Toolbar")
	check(not demo.toast.get_global_rect().intersects(help.get_global_rect()) and not demo.toast.get_global_rect().intersects(toolbar.get_global_rect()),"long postcard toast stays clear of instructions and tools")
	await capture("after_06_小窗口")
	demo.journal.open_panel();await process_frame
	check(Rect2(Vector2.ZERO,Vector2(root.size)).encloses(demo.journal.panel.find_child("JournalPaper",true,false).get_global_rect()),"journal paper fits smaller window")
	demo.journal.close_panel()
	demo.state.growth_memories.assign(["dawn","tide","festival","nocturne"]);demo.journal.refresh(false)
	root.size=Vector2i(1440,900)
	for i in range(5): await process_frame
	demo.journal.open_panel();await process_frame;await capture("after_07_四章收录")
	check(demo.journal.next_button.text=="星夜漫步" and demo.journal.button.text.contains("四章已收录"),"completed book offers playable epilogue")
	await click(demo.journal.next_button)
	check(demo.camera_rig.strolling and demo.light_phase==2,"epilogue button actually enters night stroll")
	check(audio_ids()==audio and demo.music.get_child_count()==13,"guidance keeps the fixed audio pool")
	# Even a cleared personal city receives an actionable way back into life.
	var ids:Array[String]=[]
	for row:Dictionary in demo.state.houses: ids.append(str(row.id))
	for id:String in ids: demo.state.remove_house(id)
	demo._after_edit({"ok":true,"message":"isolated empty-city fixture"},"history")
	var deadline:=Time.get_ticks_msec()+20000
	while demo.edit_pending() and Time.get_ticks_msec()<deadline: await process_frame
	Guidance.apply(demo,{"action":"tea","house_id":"","tool":4,"done":false,"label":"完成一次茶聚"})
	check(demo.tool==0 and not demo.camera_rig.strolling and demo.hint.text.contains("新屋"),"empty-city life goal returns to actual house construction")
	check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal continue save unchanged")
	facts["actions"]=demo.ui_layer.get_node("Root/Actions").get_child_count()
	facts["goals"]=demo.journal.goal_buttons.size()
	var report:Dictionary={"ok":failures.is_empty(),"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/结果.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"))
	print("GUIDANCE_LIVE "+JSON.stringify(report))
	demo.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for player:AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player:AudioStreamPlayer in demo.music._effects: player.stop()
	for player:AudioStreamPlayer in demo.ambience.players.values(): player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout;quit(0 if failures.is_empty() else 1)
