extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
var output:="res://验证记录/合订自然引导_2026-10-21"
var demo
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	var deadline:=Time.get_ticks_msec()+30000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	for frame:int in range(12):await process_frame
func point(at:Vector2)->Vector2:return demo.camera.unproject_position(Vector3(at.x,demo.state.ground_height(at),at.y))
func mouse(at:Vector2,pressed:bool)->void:
	var move:=InputEventMouseMotion.new();move.position=at;move.global_position=at;root.push_input(move);await process_frame
	var event:=InputEventMouseButton.new();event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=pressed;root.push_input(event);await process_frame
func click(control:Control)->void:
	var at:=control.get_global_rect().get_center();await mouse(at,true);await mouse(at,false);await settle()
func ground_click(at:Vector2)->void:
	var p:=point(at);await mouse(p,true);await mouse(p,false);await settle()
func road(a:Vector2,b:Vector2)->void:
	await mouse(point(a),true)
	for i:int in range(1,9):
		var move:=InputEventMouseMotion.new();move.position=point(a.lerp(b,float(i)/8.));root.push_input(move);await process_frame
	await mouse(point(b),false);await settle()
func capture(label:String)->void:
	await RenderingServer.frame_post_draw
	check(root.get_texture().get_image().save_png(output+"/"+label+".png")==OK,"capture "+label)
func layout()->void:
	var visible:Array=[]
	for button:Button in demo.tool_buttons:
		if button.is_visible_in_tree():visible.append(button.caption)
	check(visible==["筑屋","修路","烟火","林水","地形"],"exactly five primary paints at "+str(root.size))
	var bounds:=Rect2(Vector2.ZERO,Vector2(root.size))
	check(bounds.encloses(demo.ui_layer.get_node("Root/Toolbar").get_global_rect()),"five-key dock fits window")
	for option:OptionButton in demo.ui_layer.find_children("*","OptionButton",true,false):check(not option.is_visible_in_tree(),"no visible native dropdown: "+str(option.name))
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):output=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output));root.size=Vector2i(1440,900);Engine.max_fps=120
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=output+"/隔离作品";root.add_child(demo)
	demo.set_meta("validation_out_dir",output)
	demo.life.set_process(false);demo.focus=Vector3(-11,.7,-6);demo.zoom=24.;demo.pitch=.95;demo._update_camera();await settle()
	if "--poems-only" in OS.get_cmdline_user_args():
		var poems:Dictionary=await preload("res://tools/fixtures/city_creation_poems_live.gd").new().run(demo)
		for label:String in poems.checks:check(bool(poems.checks[label]),"M18: "+label)
		print("INTUITIVE_POEMS ",checks," ",failures);demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1);return
	if "--vignettes-only" in OS.get_cmdline_user_args() or "--ceremonies-only" in OS.get_cmdline_user_args():
		var result:Dictionary=await preload("res://tools/fixtures/city_creation_vignette_live.gd").new().run(demo)
		for label:String in result.checks:check(bool(result.checks[label]),"M11: "+label)
		print("INTUITIVE_VIGNETTES ",checks," ",failures);demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1);return
	var guide=demo.intuitive_guidance
	layout();check(demo.state.houses.is_empty() and guide.stage=="houses" and guide.markers.get_child_count()==3,"empty river starts with three real ground rings")
	check(not demo.tool_buttons[0].disabled and demo.tool_buttons[2].disabled,"only building is initially unlocked")
	await capture("01_三枚屋基")
	for i:int in range(3):
		check(not guide.target_points.is_empty(),"valid next house location exists")
		if guide.target_points.is_empty():break
		await ground_click(guide.target_points[0])
	check(demo.state.houses.size()==3 and guide.stage=="road" and not demo.tool_buttons[2].disabled,"three real mouse placements unlock roads")
	await capture("02_三屋成歌")
	await click(demo.tool_buttons[2]);var doors:Array[Vector2]=[]
	var trunk:=INF
	for h:Dictionary in demo.state.houses:trunk=minf(trunk,float(h.origin[0])-2.4);doors.append(Vector2(h.origin[0],h.origin[1]+1.55))
	var low:=INF;var high:=-INF
	for at:Vector2 in doors:low=minf(low,at.y);high=maxf(high,at.y)
	await road(Vector2(trunk,low-.5),Vector2(trunk,high+.5))
	for at:Vector2 in doors:await road(Vector2(trunk,at.y),at)
	check(guide.stage=="bakery" and guide.bubble.visible and demo.state.houses.all(func(h):return demo.life.house_connected(h.id)),"real door connections expose the bakery roof seal")
	await capture("03_一键麦香")
	var bakery_id:String=guide.target_house_id;await click(guide.bubble)
	check(demo.state.houses[demo.state._house_index(bakery_id)].role=="bakery","one actual roof click assigns bakery via State")
	check(demo.state._undo.size()>0 and demo.state.undo().ok and demo.state.houses[demo.state._house_index(bakery_id)].role=="residential" and demo.state.redo().ok,"roof suggestion is undoable and redoable")
	demo._after_edit({"ok":true,"message":"redo"},"history");await settle()
	check(guide.stage=="houses" and guide.banner.text.contains("茶座"),"guide preserves homes and asks for a fourth before the cafe")
	for role:String in ["garden_cafe","workshop"]:
		await click(demo.tool_buttons[0]);await ground_click(guide.target_points[0])
		check(guide.stage=="road" or demo.life.house_connected(str(demo.state.houses[-1].id)),"new life building is either already connected or guided through a real door connection")
		var h:Dictionary=demo.state.houses[-1]
		var at:=Vector2(h.origin[0],h.origin[1]+1.55)
		await click(demo.tool_buttons[2]);await road(Vector2(trunk,at.y),at)
		check(guide.suggested_role==role and guide.bubble.visible,"next real roof suggestion: "+role)
		var id:String=guide.target_house_id;await click(guide.bubble)
		check(demo.state.houses[demo.state._house_index(id)].role==role,"one roof click assigns "+role)
	check(demo.state.houses.filter(func(h):return h.role=="residential").size()==2,"onboarding preserves two genuine worker homes")
	await capture("04_五屋烟火")
	# Verify merged nature modes use the production controls and primary anchor.
	await click(demo.tool_buttons[5]);await settle()
	check(demo.tool==5 and demo.tactile_dock.nature_row.visible,"merged nature paint exposes its three submodes")
	await click(demo.tactile_dock.nature_row.get_child(1));check(demo.tool==6 and demo.water_kind=="pond","pond seal selects the real water tool")
	await click(demo.tactile_dock.nature_row.get_child(2));check(demo.tool==6 and demo.water_kind!="pond","channel seal selects the real channel mode")
	for resolution:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=resolution;await settle();layout();await capture("04_五键林水_%d"%resolution.x)
	if "--complete-path" in OS.get_cmdline_user_args():await complete_path(trunk)
	if "--onboarding-only" in OS.get_cmdline_user_args():
		check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal save remains byte-identical")
		var result:Dictionary={"checks":checks,"failures":failures,"ok":failures.is_empty(),"houses":demo.state.houses.size(),"stage":guide.stage}
		FileAccess.open(output+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true))
		print("INTUITIVE_ONBOARDING ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1);return
	var vignettes:Dictionary=await preload("res://tools/fixtures/city_creation_vignette_live.gd").new().run(demo)
	for label:String in vignettes.checks:check(bool(vignettes.checks[label]),"M11: "+label)
	var poems:Dictionary=await preload("res://tools/fixtures/city_creation_poems_live.gd").new().run(demo)
	for label:String in poems.checks:check(bool(poems.checks[label]),"M18: "+label)
	check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal save remains byte-identical")
	var report:Dictionary={"checks":checks,"failures":failures,"ok":failures.is_empty(),"houses":demo.state.houses.size(),"roads":demo.state.roads.size(),"stage":guide.stage}
	FileAccess.open(output+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("INTUITIVE_GUIDANCE ",JSON.stringify(report))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

func key(code:int)->void:
	for pressed:bool in [true,false]:
		var event:=InputEventKey.new();event.keycode=code;event.pressed=pressed;root.push_input(event);await process_frame
	await settle()

func connect_door(id:String)->void:
	if demo.life.house_connected(id):return
	var entrances:Array=demo.state.house_entrances(id)
	check(not entrances.is_empty(),"new construction exposes a real doorway")
	if entrances.is_empty():return
	var door:Vector2=entrances[0].at;var nearest:=Vector2.INF;var gap:=INF
	for street:Dictionary in demo.state.roads:
		for i in range(1,street.points.size()):
			var at:=Geometry2D.get_closest_point_to_segment(door,Vector2(street.points[i-1][0],street.points[i-1][1]),Vector2(street.points[i][0],street.points[i][1]))
			if at.distance_to(door)<gap:gap=at.distance_to(door);nearest=at
	await click(demo.tool_buttons[2]);await road(nearest,door)
	check(demo.life.house_connected(id),"real drawn road connects "+id)

func complete_path(trunk:float)->void:
	root.size=Vector2i(1440,900);demo.life.set_process(true)
	await key(KEY_H)
	var guide=demo.intuitive_guidance
	if guide.stage=="plants":
		check(not guide.target_points.is_empty(),"starter workshop receives a real planting hint")
		var at:Vector2=guide.target_points[0]
		await click(demo.tool_buttons[5]);await click(demo.tactile_dock.nature_row.get_child(0));await ground_click(at)
		check(not demo.state.plants.is_empty(),"actual nature-tool pointer plants the first living garden")
	check(guide.stage=="bridge" and guide.target_points.size()==3,"five-house life town points to a real river crossing")
	if guide.target_points.size()!=3:return
	var left:Vector2=guide.target_points[0];var right:Vector2=guide.target_points[-1]
	await click(demo.tool_buttons[2]);await road(left,right)
	check(demo.state.roads.any(func(row):return row.get("bridge",false)),"actual pointer lays the first real river bridge")
	await road(Vector2(trunk,-3.85),Vector2(trunk,left.y));await road(Vector2(trunk,left.y),left)
	for i in range(5):
		await click(demo.tool_buttons[0]);await settle()
		check(guide.stage=="houses" and not guide.target_points.is_empty(),"guide offers the next legal house toward the first landmark")
		if guide.target_points.is_empty():return
		var count:int=demo.state.houses.size();await ground_click(guide.target_points[0])
		check(demo.state.houses.size()==count+1,"actual guided pointer adds house "+str(count+1))
		await connect_door(str(demo.state.houses[-1].id))
	await settle()
	check("bell_keep" in demo.state.signature_unlocks and guide.stage=="landmark","ten real houses and the bridge naturally unlock the first landmark")
	await click(demo.journal.button);await click(demo.signatures.button)
	check(demo.signatures.panel.visible and not demo.signatures.buttons.bell_keep.disabled,"journal opens the usable earned landmark catalog")
	await click(demo.signatures.buttons.bell_keep)
	var sites:Array[Vector2]=[];var center:=Vector2.ZERO
	for house:Dictionary in demo.state.houses:center+=Vector2(house.origin[0],house.origin[1])
	center/=float(demo.state.houses.size())
	for z in range(-12,4):
		for x in range(-16,1):sites.append(Vector2(x,z)*1.8)
	sites.sort_custom(func(a:Vector2,b:Vector2):return a.distance_squared_to(center)<b.distance_squared_to(center))
	var chosen:=Vector2.INF
	for at:Vector2 in sites:
		if demo.state.preview_signature("bell_keep",at).ok:chosen=at;break
	check(chosen.is_finite(),"first landmark has a legal real site near the starter town")
	if not chosen.is_finite():return
	await ground_click(chosen)
	var landmarks:Array=demo.state.houses.filter(func(h):return h.get("signature","")=="bell_keep")
	check(landmarks.size()==1,"actual catalog and ground clicks place the earned bell keep")
	if landmarks.is_empty():return
	var landmark:Dictionary=landmarks[0];var id:=str(landmark.id)
	await connect_door(id);await click(demo.tool_buttons[0])
	var roof:=Vector3(chosen.x,float(landmark.get("base_y",0.))+4.*demo.FLOOR+.2,chosen.y)
	await mouse(demo.camera.unproject_position(roof),true);await mouse(demo.camera.unproject_position(roof),false);await settle()
	check(demo.spatial_popover.target_house_id==id and demo.spatial_popover.concert_button.is_visible_in_tree(),"first landmark roof exposes the exclusive movement action")
	var completed:int=demo.state.life_progress.concerts
	await click(demo.spatial_popover.concert_button)
	check(demo.life.concert_status().phase in ["gathering","playing"],"real movement click invites the actual starter-town audience")
	var end:=Time.get_ticks_msec()+90000
	while demo.state.life_progress.concerts==completed and Time.get_ticks_msec()<end:await process_frame
	check(demo.state.life_progress.concerts==completed+1,"real audience journeys and a full movement award exactly one completion")
	await capture("05_首座地标完整乐章")
	demo.life.set_process(false)
	await demo.gallery.save_work("从三屋到第一首乐章")
	var saved:Dictionary=demo.gallery.library.read(demo.gallery.last_saved_id)
	var restored:RefCounted=State.new()
	check(saved.ok and restored.restore(saved.world).ok and restored.life_progress.concerts==demo.state.life_progress.concerts,"full onboarding construction, earned landmark and real concert history persist in an actual collection work")
