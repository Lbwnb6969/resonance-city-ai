extends "res://tools/check_creation_mixed_detail_journey_live.gd"
const Cloud=preload("res://tools/fixtures/city_creation_cloud_gallery_fixture.gd")
const Span=preload("res://scripts/world/city_creation_skybridge_span.gd")
func ready_geometry()->void:
	await settle();quiet();check(await wait_for(func():return demo.town.touch.active.is_empty(),1500),"touch settles before final geometry probe");await physics_frame
func native_cloud(enabled:bool)->void:
	demo.select_tool(0);demo.spatial_popover.open_for_house("h2");await settle();await ui_click(demo.spatial_popover.inspector.appearance_button);await settle()
	var button:Button=demo.find_child("SkybridgeChoice_"+("nine" if enabled else "original"),true,false)
	check(button!=null and button.is_visible_in_tree(),"native cloud-gallery choice is discoverable in house appearance sheet")
	if button!=null:check(root.get_visible_rect().encloses(button.get_global_rect()),"native span choice fits actual viewport without clipping")
	if button!=null:await ui_click(button);await ready_geometry()
	await key(KEY_ESCAPE);await key(KEY_ESCAPE);await ready_geometry()
func physical_span(label:String)->void:
	var plans:Array=demo.town.house_roots.h1.get_meta("skybridges",[]);check(plans.size()==1,"one real published bridge under stable lower-ID owner")
	if plans.is_empty():return
	var plan:Dictionary=plans[0];var axis:Vector2=(plan.b-plan.a).normalized();var across:=Vector2(-axis.y,axis.x);var meshes:Array=[]
	var deck_edge:float=(float(plan.width)+.16)*.5-.01;var inner_edge:float=float(plan.width)*.48
	for house:Node3D in demo.town.house_roots.values():
		for mesh:MeshInstance3D in house.find_children("*","MeshInstance3D",true,false):meshes.append({"faces":mesh.mesh.get_faces(),"inverse":mesh.global_transform.affine_inverse()})
	var samples:=0;var missing:=0;var pick_missing:=0
	for i in range(1,35):
		var center:Vector2=Vector2(plan.a).lerp(plan.b,float(i)/35.)
		for offset:float in [-deck_edge,-inner_edge,0.,inner_edge,deck_edge]:
			var at:=center+across*offset;var a:=Vector3(at.x,plan.floor_y+.14,at.y);var b:=Vector3(at.x,plan.floor_y-.12,at.y);var found:=false;samples+=1
			for row:Dictionary in meshes:
				for face in range(0,row.faces.size(),3):
					var hit:Variant=Geometry3D.segment_intersects_triangle(row.inverse*a,row.inverse*b,row.faces[face],row.faces[face+1],row.faces[face+2])
					if hit!=null and absf((row.inverse.affine_inverse()*hit).y-plan.floor_y-.07)<.002:found=true;break
				if found:break
			if not found:missing+=1
			var hit:Dictionary=demo.town.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(a,b,1))
			if hit.is_empty() or absf(hit.position.y-plan.floor_y-.07)>.002:pick_missing+=1
	check(samples==170 and missing==0 and pick_missing==0,"actual final bridge deck and both inner passage edges retain visible support with matching Jolt height")
	facts[label]={"samples":samples,"deck_edge_offset":deck_edge,"inner_edge_offset":inner_edge,"missing_gpu":missing,"missing_collision":pick_missing,"plan":plan}
func cloud_picture(label:String)->void:
	demo.focus=Vector3(-26,2.6,-21.1);demo.zoom=14.;demo.pitch=.5;demo.yaw=.65;demo._update_camera();demo.set_process(false);demo.town.clear_preview()
	var poem:Label=demo.find_child("SeasonMomentPoem",true,false)
	if poem!=null:poem.hide()
	for phase in [0,1,2]:demo._set_light_phase(phase);await settle();await capture(label+"_"+str(phase))
	demo.set_process(true)
func case(yaw:float)->void:
	root.size=Vector2i(1440,900) if yaw==0. else Vector2i(1024,768)
	var city:=Cloud.city(8.5,yaw);await show(city,Vector2(-26,-20),"自由九米云廊");await ready_geometry();var original:Dictionary=demo.state.snapshot();var initial:=row_arrays()
	check(demo.town.house_roots.h1.get_meta("skybridges",[]).is_empty(),"ordinary free opening never expands original seven-metre bridge automatically")
	await native_cloud(true);check(demo.state.houses[1].has(Span.FIELD) and demo.state.snapshot().schema==31 and demo.town.house_roots.h1.get_meta("skybridges",[]).size()==1,"actual higher-ID native choice publishes new span on lower-ID renderer")
	var choice:Node=demo.find_children("*","Node",true,false).filter(func(n):return n.get_script()!=null and n.get_script().resource_path=="res://scripts/ui/city_creation_skybridge_choices.gd")[0]
	var backup:Dictionary=demo.gallery.library.read(str(choice.last_backup.get("id","")))
	check(choice.last_backup.get("ok",false) and backup.ok and backup.world.houses==original.houses and backup.world.schema==original.schema,"first native adoption stores immutable original city before schema upgrade")
	var bent:=row_arrays();var saved:Dictionary=demo.state.snapshot();physical_span("span_"+str(yaw))
	check(demo.state.harmony_journey==original.harmony_journey and demo.state.era_modifiers==original.get("era_modifiers",[]),"native selection grants no historical card, reward, receipt or XP")
	await key(KEY_Z,true);await ready_geometry();check(demo.state.houses==original.houses and row_arrays()==initial,"native Undo restores both endpoint authors and all original GPU geometry")
	await key(KEY_Y,true);await ready_geometry();check(row_arrays()==bent,"native Redo restores complete bridge and endpoint GPU buffers")
	var path:=OUT+"/cloud_"+str(yaw)+".json";var cold:=State.new();saved=demo.state.snapshot();check(demo.state.save_city(path).ok and cold.load_city(path).ok and cold.snapshot()==saved,"actual schema31 disk roundtrip preserves complete author world")
	await show(cold,Vector2(-26,-20),"云廊磁盘冷读");await ready_geometry();check(row_arrays()==bent,"whole endpoint GPU matches independent disk cold publication")
	if yaw==0.:await cloud_picture("cloud_gallery")
	var blocker:Dictionary=demo.state.add_house(Vector2(-25.75,-20) if yaw==0. else Vector2(-30,-20)+Vector2.RIGHT.rotated(-yaw)*4.25)
	var id:String=blocker.get("house_id","")
	check(blocker.ok and demo.state.set_house_era(id,"pastoral").ok and demo.state.add_cell(id,0,0,1).ok,"public real intervening house obstruction")
	var top:Dictionary=demo.state.add_cell(id,0,0,2);check(top.ok,"actual blocker third floor completes")
	demo._after_edit(top,"room");await ready_geometry();check(demo.town.house_roots.h1.get_meta("skybridges",[]).is_empty() and demo.state.houses[1].has(Span.FIELD),"actual intervening house withdraws bridge while keeping explicit author intent")
	demo._after_edit(demo.state.remove_house(id),"erase");await ready_geometry();check(row_arrays()==bent,"removing real blocker restores exact bridge GPU through incremental invalidation")
	await native_cloud(false);check(demo.state.houses==original.houses and row_arrays()==initial,"native original-span choice restores exact two-house author geometry")
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	for yaw:float in [0.,.4]:await case(yaw)
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal default save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("FREE_CLOUD_GALLERY_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
