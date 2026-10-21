extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/合订自然引导_2026-10-21"
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
	check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"capture "+label)
func layout()->void:
	var visible:Array=[]
	for button:Button in demo.tool_buttons:
		if button.is_visible_in_tree():visible.append(button.caption)
	check(visible==["筑屋","修路","烟火","林水","地形"],"exactly five primary paints at "+str(root.size))
	var bounds:=Rect2(Vector2.ZERO,Vector2(root.size))
	check(bounds.encloses(demo.ui_layer.get_node("Root/Toolbar").get_global_rect()),"five-key dock fits window")
	for option:OptionButton in demo.ui_layer.find_children("*","OptionButton",true,false):check(not option.is_visible_in_tree(),"no visible native dropdown: "+str(option.name))
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=120
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=OUT+"/隔离作品";root.add_child(demo)
	demo.life.set_process(false);demo.focus=Vector3(-11,.7,-6);demo.zoom=24.;demo.pitch=.95;demo._update_camera();await settle()
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
	check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal save remains byte-identical")
	var report:Dictionary={"checks":checks,"failures":failures,"ok":failures.is_empty(),"houses":demo.state.houses.size(),"roads":demo.state.roads.size(),"stage":guide.stage}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("INTUITIVE_GUIDANCE ",JSON.stringify(report))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
