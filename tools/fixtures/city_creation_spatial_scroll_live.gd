extends RefCounted
const Legacy=preload("res://tests/test_city_creation_eras.gd")
const Probe=preload("res://tools/fixtures/city_creation_audio_probe.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
var OUT:String="res://验证记录/M08/中空罗盘与手卷"
var demo:Node
var tree:SceneTree
var checks:Dictionary={}
var metrics:Array=[]
func settle(frames:int=35)->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.music._loading:await tree.process_frame
	for i in range(frames):await tree.process_frame
func move(at:Vector2)->void:
	var event:=InputEventMouseMotion.new();event.position=at;event.global_position=at;tree.root.push_input(event);await tree.process_frame
func click(at:Vector2)->void:
	await move(at)
	for pressed:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.button_index=MOUSE_BUTTON_LEFT;event.position=at;event.pressed=pressed;tree.root.push_input(event);await tree.process_frame
	await settle()
func key(code:int,ctrl:bool=false)->void:
	for pressed:bool in [true,false]:
		var event:=InputEventKey.new();event.keycode=code;event.pressed=pressed;event.ctrl_pressed=ctrl;tree.root.push_input(event);await tree.process_frame
	await settle()
func capture(name:String)->void:
	demo.toast.hide();demo.toast_time=0.;await RenderingServer.frame_post_draw
	tree.root.get_texture().get_image().save_png(OUT+"/"+name+".png")
func run(owner:Node)->Dictionary:
	demo=owner;tree=demo.get_tree();
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")+"/spatial_scroll"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var identities:Array=[]
	for node:Node in demo.music.get_children()+demo.ambience.get_children():identities.append(node.get_instance_id())
	var city:RefCounted=Legacy.fixture();var id:=str(city.houses[0].id)
	for level in range(1,4):
		if city.validate_add_cell(id,0,0,level).ok:assert(city.add_cell(id,0,0,level).ok)
	demo._after_edit(demo.state.restore(city.snapshot()),"history");await settle();demo.life.set_process(false)
	demo.get_meta("inspiration_draft").poll();demo.get_meta("vignette_journey").poll();await settle()
	var original:Dictionary=demo.state.snapshot();var history:int=demo.state._undo.size();var built:Array[String]=[]
	var pop:RefCounted=demo.spatial_popover;var book:PanelContainer=demo.journal.scrollbook
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		tree.root.size=size;demo.select_tool(0)
		var house:Dictionary=demo.town._house_record(id)
		demo.focus=Vector3(house.origin[0],3.,house.origin[1]);demo.zoom=28.;demo.yaw=.62;demo.pitch=.85;demo._update_camera()
		pop.open_for_house(id);await settle(60)
		var actual:Rect2=pop.ring.house_rect;var empty:Rect2=pop.ring.hole;empty.position+=pop.card.global_position
		checks["four_storeys_clear_"+str(size.x)]=empty.encloses(actual) and pop.ring.placement_ok and pop.card.mouse_filter==Control.MOUSE_FILTER_IGNORE and pop.ring.controls().all(func(item):return not item.get_global_rect().intersects(actual))
		checks["six_seal_top_arc_"+str(size.x)]=pop.role_buttons.values().all(func(item):return item.get_global_rect().end.y<actual.position.y)
		metrics.append({"size":size,"house":actual,"clear_center":empty,"islands":pop.ring.controls().map(func(item):return {"name":item.name,"rect":item.get_global_rect()})})
		var center:=actual.get_center();await move(center)
		checks["hollow_pointer_passthrough_"+str(size.x)]=tree.root.gui_get_hovered_control()==null
		await click(center)
		checks["real_model_pick_"+str(size.x)]=demo.selected_house==id and demo.state.houses.size()==city.houses.size()
		for phase in range(3):
			while demo.light_phase!=phase:demo._toggle_light()
			await settle();await capture("四层罗盘_"+str(phase)+"_"+str(size.x))
		pop.close();await key(KEY_J)
		checks["shared_310_sheet_"+str(size.x)]=book==demo.ledger.scrollbook and book==demo.signatures.scrollbook and book.size.x==310. and absf(book.position.x)<.01 and demo.journal.panel.visible
		await capture("手记_"+str(size.x))
		await key(KEY_L)
		checks["keyboard_tab_"+str(size.x)]=demo.ledger.visible() and not demo.journal.panel.visible and book.current=="ledger"
		await capture("账本_"+str(size.x))
		await click(book.tabs.landmarks.get_global_rect().get_center())
		var scroll:ScrollContainer=demo.signatures.panel.get_node("LandmarkScroll")
		var last:Button=demo.signatures.buttons.floating_amphitheater;scroll.ensure_control_visible(last);await settle()
		checks["sixth_landmark_reachable_"+str(size.x)]=book.current=="landmarks" and last.is_visible_in_tree() and scroll.get_global_rect().encloses(last.get_global_rect())
		await capture("名胜末页_"+str(size.x))
		await key(KEY_J)
		var blank:=Vector2.ZERO
		for y in range(250,size.y-160,65):
			for x in range(maxi(370,size.x/2),size.x-80,70):
				var at:=Vector2(x,y);var world:Vector2=demo._ground_at(at)
				if demo.state.validate_add_house(world).ok:blank=at;break
			if blank!=Vector2.ZERO:break
		var before:int=demo.state.houses.size();await move(blank)
		checks["outside_gui_free_"+str(size.x)]=blank!=Vector2.ZERO and tree.root.gui_get_hovered_control()==null
		await click(blank)
		checks["build_while_reading_"+str(size.x)]=demo.state.houses.size()==before+1 and book.visible
		built.append(str(demo.state.houses[-1].id))
		await key(KEY_Z,true)
		checks["undo_while_reading_"+str(size.x)]=demo.state.houses.size()==before and book.visible
		pop.close();var yaw:float=demo.yaw
		var right:=InputEventMouseButton.new();right.button_index=MOUSE_BUTTON_RIGHT;right.position=Vector2(size.x-140,300);right.pressed=true;tree.root.push_input(right);await tree.process_frame
		var drag:=InputEventMouseMotion.new();drag.position=right.position+Vector2(35,0);drag.relative=Vector2(35,0);tree.root.push_input(drag);await tree.process_frame
		right.pressed=false;right.position=drag.position;tree.root.push_input(right);await tree.process_frame
		checks["orbit_while_reading_"+str(size.x)]=absf(demo.yaw-yaw)>.1 and book.visible
		await key(KEY_ESCAPE);checks["escape_closes_"+str(size.x)]=not book.visible
		metrics.append({"size":size,"sheet_width":book.size.x,"right_world_fraction":1.-book.size.x/size.x,"real_build_pointer":blank})
	var after:Dictionary=demo.state.snapshot();after.erase("revision");var expected:=original.duplicate(true);expected.erase("revision")
	var changes:Array=[]
	for field:String in expected:
		if expected[field]!=after.get(field):changes.append(field)
	metrics.append({"changed_after_build_undo":changes,"history_before":history,"history_after":demo.state._undo.size(),"journey_before":expected.harmony_journey,"journey_after":after.harmony_journey})
	# New IDs are deliberately never recycled by undo. Compare authored data
	# separately and retain the real high-water counters in the report.
	checks.ids_not_recycled=int(after.high_watermark.house)>int(expected.high_watermark.house) and int(after.high_watermark.cell)>int(expected.high_watermark.cell)
	var journey:Dictionary=expected.harmony_journey.duplicate(true)
	for built_id:String in built:journey.receipts["house/"+built_id]=1
	journey.harmony_xp+=built.size()*2
	checks.real_build_receipts_survive_undo=after.harmony_journey==journey
	expected.harmony_journey=journey
	after.erase("high_watermark");expected.erase("high_watermark")
	checks.authored_and_history_conserved=after==expected and demo.state._undo.size()==history
	var audio:Dictionary=await Probe.record(OUT+"/界面实录.wav",3.2);checks.audible_unclipped=audio.ok
	var after_ids:Array=[]
	for node:Node in demo.music.get_children()+demo.ambience.get_children():after_ids.append(node.get_instance_id())
	checks.fixed_audio_pool=identities==after_ids and demo.music._players.size()==12 and demo.music._effects.size()==4 and demo.music.spatial._names.size()==6 and demo.ambience.get_child_count()==2
	checks.personal_untouched=(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal
	var frames:Array[float]=[];var previous:=Time.get_ticks_usec()
	for i in range(90):
		await tree.process_frame;var now:=Time.get_ticks_usec();frames.append(float(now-previous)/1000.);previous=now
	frames.sort()
	var report:={"ok":checks.values().all(func(ok):return ok),"checks":checks,"metrics":metrics,"audio":audio,"frame_p95_ms":frames[int(frames.size()*.95)],"frame_max_ms":frames[-1]}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("SPATIAL_SCROLL_LIVE ",JSON.stringify(report));return report
