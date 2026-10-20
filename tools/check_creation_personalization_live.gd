extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/点屋色盘花园_2026-10-20"
var demo
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	var until:=Time.get_ticks_msec()+60000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<until:await process_frame
	check(not demo.edit_pending(),"edit publishes")
	for i in range(35):await process_frame
func click_at(at:Vector2)->void:
	var motion:=InputEventMouseMotion.new();motion.position=at;root.push_input(motion);await process_frame
	for pressed:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.button_index=MOUSE_BUTTON_LEFT;event.pressed=pressed;event.position=at
		root.push_input(event);await process_frame
	await settle()
func click(button:Control)->void:await click_at(button.get_global_rect().get_center())
func shot(label:String)->void:
	demo.toast.hide();demo.toast_time=0.
	await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/"+label+".png")
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(1440,900);Engine.max_fps=100
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/作品";root.add_child(demo);demo.life.set_process(false)
	await settle()
	var original:Dictionary=demo.state.snapshot();var id:=str(demo.state.houses[0].id)
	var pop=demo.spatial_popover
	for resolution:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=resolution;demo.select_tool(0);demo.focus=Vector3(-7,1,-4);demo.zoom=21.;demo.pitch=.8;demo._update_camera()
		await settle()
		var house:Dictionary=demo.town._house_record(id);var count:int=house.cells.size();var highest:=0
		for cell:Dictionary in house.cells:
			if int(cell.x)==0 and int(cell.z)==0:highest=maxi(highest,int(cell.level))
		var at:=Vector3(house.origin[0],float(house.get("base_y",0.))+float(highest+1)*demo.FLOOR+.2,house.origin[1])
		await click_at(demo.camera.unproject_position(at))
		check(pop.target_house_id==id and pop.card.is_visible_in_tree(),"normal house click opens roof inspector at "+str(resolution))
		check(house.cells.size()==count and not demo.house_drawing,"selection does not add a module")
		check(not demo.tool_buttons[4].is_visible_in_tree(),"purpose is absent from tool palette")
		check(not pop.role_buttons.has("venue") and not pop.concert_button.visible,"ordinary house has daily uses without a concert task")
		await click(pop.expand_button)
		check(pop.color_panel.is_visible_in_tree(),"expanded palette opens")
		check(Rect2(Vector2.ZERO,Vector2(resolution)).encloses(pop.card.get_global_rect()),"expanded card fits screen")
		var previous_colors:Dictionary=house.get("custom_colors",{}).duplicate()
		var root_id:int=demo.town.house_roots[id].get_instance_id()
		var bounds:Dictionary={}
		for node:MeshInstance3D in demo.town.house_roots[id].find_children("*","MeshInstance3D",true,false):bounds[node.get_instance_id()]=node.mesh.get_aabb()
		pop.wall_picker.color=Color("99c6d2");pop.roof_picker.color=Color("75436c" if resolution.x==1440 else "467168")
		await click(pop.card.find_child("ApplyColors",true,false))
		check(house.get("custom_colors",{}).get("roof","")==("75436c" if resolution.x==1440 else "467168"),"actual apply button commits chosen colors")
		check(demo.town.house_roots[id].get_instance_id()==root_id and demo.edit_budget_report().get("mode","")=="colors","custom color keeps the installed house and fast publication")
		var stable:=true
		for node:MeshInstance3D in demo.town.house_roots[id].find_children("*","MeshInstance3D",true,false):stable=stable and bounds[node.get_instance_id()]==node.mesh.get_aabb()
		check(stable,"recolor preserves exact mesh extents")
		var cache:Dictionary=demo.town.house_roots[id].get_meta("house_color_cache")
		check(int(cache.index)==8 and cache.custom_colors==house.custom_colors,"GPU recipe cache receives custom choice")
		await shot("色盘_%d"%resolution.x)
		demo._history(false);await settle();check(house.get("custom_colors",{})==previous_colors,"real undo restores previous colors")
		demo._history(true);await settle();check(house.has("custom_colors"),"real redo restores custom colors")
		await click(pop.card.find_child("ExtendHouse",true,false))
		check(demo.house_module_mode and not pop.card.visible,"add-module action enters construction")
		await click_at(demo.camera.unproject_position(at))
		check(demo.town._house_record(id).cells.size()>count,"actual roof click adds module")
		demo._history(false);await settle();demo.select_tool(0)
	# The planting option uses exact world coordinates, including saved blooms.
	for index:int in range(demo.State.GardenSpecies.IDS.size()):
		var result:Dictionary=demo.state.place_plant(Vector2(-32+index*3.5,21),demo.State.GardenSpecies.IDS[index])
		check(result.ok,"render new garden species "+str(index))
	demo._after_edit({"ok":true,"message":"花园"},"plant");await settle()
	demo.ui_layer.hide();demo.focus=Vector3(-21,.7,21);demo.zoom=22.;demo.pitch=.7;demo.yaw=.2;demo._update_camera();await settle();await shot("金叶与三色花园")
	var source:Dictionary=demo.state.snapshot();var reloaded:RefCounted=demo.State.new();check(reloaded.restore(source).ok,"custom color and garden persist through production serializer")
	var report:Dictionary={"checks":checks,"failures":failures,"ok":failures.is_empty()}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"))
	print("PERSONALIZATION_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
