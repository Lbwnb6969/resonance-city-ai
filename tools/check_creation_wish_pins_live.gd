extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/真实屋顶心愿_2026-10-21"
var demo
var failures:Array[String]=[]
var checks:=0
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	var until:=Time.get_ticks_msec()+30000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<until:await process_frame
	for i:int in range(20):await process_frame
func click(button:Control)->void:
	var at:=button.get_global_rect().get_center()
	var move:=InputEventMouseMotion.new();move.position=at;root.push_input(move);await process_frame
	for pressed:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=pressed;root.push_input(event);await process_frame
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=120
	demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=OUT+"/隔离作品";root.add_child(demo);demo.life.set_process(false)
	var sites:Array[Vector2]=[Vector2(-30,-22),Vector2(-26,-22),Vector2(-22,-22),Vector2(-30,-8),Vector2(-26,-8),Vector2(-22,-8)]
	for at:Vector2 in sites:check(demo.state.add_house(at).ok,"wish home")
	demo.state.set_house_role("h1","bakery");demo.state.set_house_role("h2","workshop");demo.state.set_house_role("h4","garden_cafe")
	demo.state.add_road([Vector2(-33,-21),Vector2(-33,-6)] as Array[Vector2])
	for i:int in range(5):demo.state.add_road([Vector2(-33,sites[i].y+1.55),sites[i]+Vector2(0,1.55)] as Array[Vector2])
	demo.state.place_plant(Vector2(-35,12),"golden_tree")
	demo._after_edit({"ok":true,"message":"真实心愿"},"history");await settle();demo.life.set_process(false)
	demo.focus=Vector3(-27,.7,-15);demo.zoom=30.;demo.pitch=.95;demo._update_camera();await settle()
	var wishes=demo.wish_pins;wishes.refresh();await process_frame
	check(wishes.visible and wishes.pins.size()==2,"two visible genuine needs are offered")
	var types:Array=[]
	for pin:Dictionary in wishes.pins:types.append(pin.row.kind)
	check(types==["road","water"],"unconnected home and dry bakery take priority")
	var before:Dictionary=demo.state.snapshot();await click(wishes.pins[0].button)
	check(demo.tool==2 and wishes.target.kind=="road" and wishes.highlight.visible,"real road wish click selects road tool and highlights actual doorway")
	check(demo.state.snapshot()==before,"tool guidance never invents a connection or reward")
	wishes.elapsed=17.;await process_frame;check(wishes.pins.is_empty(),"new wishes wait for the eighteen-second offer interval")
	wishes.refresh();await process_frame
	var water:Dictionary={}
	for pin:Dictionary in wishes.pins:
		if pin.row.kind=="water":water=pin
	check(not water.is_empty(),"actual dry bakery still requests water")
	if not water.is_empty():
		await click(water.button)
		check(demo.tool==6 and demo.water_kind=="pond" and demo.state.preview_water([wishes.target.at] as Array[Vector2],demo.water_width,"pond").ok,"water wish selects pond mode with a genuinely legal excavation site")
	await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/活水落点.png")
	var result:Dictionary={"checks":checks,"failures":failures,"ok":failures.is_empty(),"target":wishes.target}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("WISH_PINS_LIVE ",JSON.stringify(result))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
