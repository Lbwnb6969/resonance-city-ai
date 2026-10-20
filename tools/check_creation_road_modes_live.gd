extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/道路模式与尺寸_2026-10-20"
var demo
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending:await process_frame
	for i in range(30):await process_frame
func motion(at:Vector2)->void:
	var event:=InputEventMouseMotion.new();event.position=at;root.push_input(event);await process_frame
func mouse(at:Vector2,down:bool)->void:
	var event:=InputEventMouseButton.new();event.button_index=MOUSE_BUTTON_LEFT;event.position=at;event.pressed=down;root.push_input(event);await process_frame
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/作品";root.add_child(demo);demo.life.set_process(false);await settle()
	var empty:RefCounted=demo.State.new();empty.initialize();empty.houses.clear();empty.roads.clear();empty.plants.clear();empty.districts.clear();empty.revision+=1
	var snapshot:Dictionary=empty.snapshot()
	for style_index:int in range(4):
		for straight:bool in [false,true]:
			var restored:Dictionary=demo.state.restore(snapshot);demo._after_edit(restored,"history");await settle();demo.life.set_process(false)
			demo.select_tool(2);demo.focus=Vector3(-23,.2,-20);demo.zoom=19.;demo.yaw=0.;demo.pitch=1.1;demo._update_camera();await settle()
			demo.tactile_dock.button_for("RoadStyle",style_index).pressed.emit()
			demo.tactile_dock.button_for("RoadMode",1 if straight else 0).pressed.emit()
			demo.tactile_dock.button_for("RoadSize",1+style_index%3).pressed.emit();await settle()
			var points:Array[Vector2]=[Vector2(-28,-20),Vector2(-26,-18.4),Vector2(-23,-17.8),Vector2(-20,-19),Vector2(-17,-20)]
			var a:Vector2=demo.camera.unproject_position(Vector3(points[0].x,-.02,points[0].y))
			await motion(a);await mouse(a,true)
			for point:Vector2 in points.slice(1):await motion(demo.camera.unproject_position(Vector3(point.x,-.02,point.y)))
			check(demo.road_drawing and demo.road_draft_straight==straight,"real input begins selected road mode")
			var preview:Array=demo.road_preview.duplicate()
			var end:Vector2=demo.camera.unproject_position(Vector3(points[-1].x,-.02,points[-1].y));await mouse(end,false);await settle()
			var label:String=demo.road_style+(" straight" if straight else " curve")
			check(demo.state.roads.size()==1,"road commits: "+label)
			if demo.state.roads.is_empty():continue
			var road:Dictionary=demo.state.roads[0]
			check(is_equal_approx(float(road.width),demo._selected_road_width()),"chosen width reaches mesh and save: "+label)
			check(road.points.size()==2 if straight else road.points.size()>3,"straight stays straight, curve follows mouse: "+label)
			var exact:bool=road.points.size()==preview.size()
			for i:int in range(mini(road.points.size(),preview.size())):exact=exact and Vector2(road.points[i][0],road.points[i][1]).distance_to(preview[i])<.001
			check(exact,"released road equals visible preview: "+label)
			var reloaded:RefCounted=demo.State.new();check(reloaded.restore(demo.state.snapshot()).ok,"width and mode geometry survive reload: "+label)
			var root_id:int=demo.town.road_roots[str(road.id)].get_instance_id();demo._history(false);await settle()
			check(demo.state.roads.is_empty(),"real undo removes road: "+label)
			demo._history(true);await settle();check(demo.state.roads.size()==1,"real redo restores road: "+label)
			await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/"+demo.road_style+("_直线" if straight else "_曲线")+".png")
	var report:Dictionary={"checks":checks,"failures":failures,"ok":failures.is_empty()}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("ROAD_MODES_LIVE ",JSON.stringify(report))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
