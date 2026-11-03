extends "res://tools/check_creation_three_road_modes_live.gd"
const Stairs=preload("res://tools/fixtures/city_creation_shallow_stair_fixture.gd")
const Choice=preload("res://scripts/world/city_creation_shallow_stair_keys.gd")
func finished()->void:await settle();quiet();await physics_frame
func road_buffers()->Dictionary:
	var all:Array=[];var solid:Array=[];var keys:Array=[];var road:Node3D=demo.town.road_roots.r1
	for mesh:MeshInstance3D in road.find_children("*","MeshInstance3D",true,false):
		var material:Material=mesh.material_override;var color:Variant=material.albedo_color if material is StandardMaterial3D else null
		for i in range(mesh.mesh.get_surface_count()):
			var data:Dictionary=RenderingServer.mesh_get_surface(mesh.mesh.get_rid(),i);var stamp:=var_to_bytes([mesh.global_transform,mesh.mesh.surface_get_arrays(i),data.get("attribute_data",PackedByteArray()),color,mesh.visibility_range_end]).hex_encode().sha256_text();all.append(stamp)
			if str(mesh.name) in ["PianoIvory","PianoBasalt"]:keys.append(stamp)
			else:solid.append(stamp)
	all.sort();solid.sort();keys.sort();return {"all":all,"solid":solid,"keys":keys}
func native_toggle()->void:
	demo.select_tool(2);await settle()
	if demo.tactile_dock.road_palette.opened!="More":await ui_click(demo.tactile_dock.road_palette.heads.More)
	await settle()
	var button:Button=demo.find_child("ShallowStairKeys",true,false);check(button!=null and button.is_visible_in_tree(),"free shallow keyboard is reachable in native road More menu")
	if button!=null:check(root.get_visible_rect().encloses(button.get_global_rect()),"shallow-key button fits real viewport");await ui_click(button);await finished()
	await key(KEY_ESCAPE);demo.select_tool(0);await finished()
func actual_keys(label:String)->void:
	var sites:Array=demo.life.travel.sites.values().filter(func(s):return s.kind=="stair");var meshes:Array=[]
	for mesh:MeshInstance3D in demo.town.road_roots.r1.find_children("Piano*","MeshInstance3D",true,false):meshes.append({"inverse":mesh.global_transform.affine_inverse(),"faces":mesh.mesh.get_faces()})
	var count:=0;var missing:=0;var pick_missing:=0;var pointer:=true
	for site:Dictionary in sites:
		var normal:=Vector2(-site.axis.y,site.axis.x);pointer=pointer and demo.life.travel.point_stair(site.at).get("id","")==site.id
		for offset:float in [-site.width*.5+.02,-site.width*.25,0.,site.width*.25,site.width*.5-.02]:
			var at:Vector2=site.at+normal*offset;var a:=Vector3(at.x,site.height+.025,at.y);var b:=Vector3(at.x,site.height-.025,at.y);var found:=false;count+=1
			for mesh:Dictionary in meshes:
				for face in range(0,mesh.faces.size(),3):
					if Geometry3D.segment_intersects_triangle(mesh.inverse*a,mesh.inverse*b,mesh.faces[face],mesh.faces[face+1],mesh.faces[face+2])!=null:found=true;break
				if found:break
			if not found:missing+=1
			var hit:Dictionary=demo.town.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(a,b,2))
			if hit.is_empty() or hit.collider.get_meta("road_id","")!="r1" or absf(hit.position.y-site.height)>.002:pick_missing+=1
	check(sites.size()>0 and missing==0 and pick_missing==0,"actual piano overlay and Jolt stair support agree across visible near-edge tread samples")
	check(pointer,"existing pointer sensor resolves every actual key centre to its own stable tread ID")
	facts[label]={"sites":sites.size(),"width":demo.state.roads[0].width,"samples":count,"missing_gpu":missing,"missing_collision":pick_missing}
func pictures(label:String)->void:
	demo.focus=Vector3(-26,.5,-22);demo.zoom=11.;demo.pitch=.7;demo.yaw=.85;demo._update_camera();demo.set_process(false);demo.town.clear_preview()
	var poem:Label=demo.find_child("SeasonMomentPoem",true,false)
	if poem!=null:poem.hide()
	for phase:int in [0,1,2]:demo._set_light_phase(phase);await settle();await capture(label+"_"+str(phase))
	demo.set_process(true)
func case(curved:bool)->void:
	root.size=Vector2i(1024,768) if curved else Vector2i(1440,900);var city:=Stairs.city(.8,curved);await show(city,Vector2(-26,-22),"浅阶琴键");await finished();var original:Dictionary=demo.state.snapshot();var before:=road_buffers();var old_profile:Dictionary=demo.state.road_profile(demo.state.roads[0]).duplicate(true)
	check(before.keys.is_empty() and demo.life.travel.sites.is_empty(),"ordinary shallow free stairs retain old appearance and sensors until explicit selection")
	await native_toggle();var after:=road_buffers();var saved:Dictionary=demo.state.snapshot();var control:Node=demo.get_meta("shallow_stair_control");var backup:Dictionary=demo.gallery.library.read(str(control.last_backup.get("id","")))
	check(saved.schema==32 and Choice.selected(demo.state) and backup.ok and backup.world.creative_settings==original.creative_settings and backup.world.roads==original.roads,"first native choice stores unchanged original preferences and road before schema32")
	check(not after.keys.is_empty() and after.solid==before.solid and demo.state.road_profile(demo.state.roads[0])==old_profile and demo.state.roads==original.roads and demo.state.terrain_strokes==original.terrain_strokes,"actual keyboard appears while all pre-existing road GPU solids, terrain and treads remain identical")
	check(demo.state.harmony_journey==original.harmony_journey and demo.state.era_modifiers==original.get("era_modifiers",[]),"native setting grants no old card, XP, receipt or walking multiplier")
	actual_keys(str(curved));if not curved:await pictures("shallow_keys")
	await key(KEY_Z,true);await finished();check(road_buffers()==before and not Choice.selected(demo.state) and demo.life.travel.sites.is_empty(),"native Undo restores exact original full-road GPU and withdraws shallow sites")
	await key(KEY_Y,true);await finished();check(road_buffers()==after,"native Redo restores exact full-road GPU")
	var path:=OUT+"/stairs_"+str(curved)+".json";var cold:=State.new();saved=demo.state.snapshot();check(demo.state.save_city(path).ok and cold.load_city(path).ok and cold.snapshot()==saved,"actual schema32 disk cold read preserves complete author snapshot")
	await show(cold,Vector2(-26,-22),"浅阶琴键冷读");await finished();check(road_buffers()==after,"full road GPU cold-equals native published geometry");actual_keys(str(curved)+"_cold")
	await native_toggle();check(road_buffers()==before and demo.state.creative_settings==original.creative_settings,"native disable restores original preference format and exact stone appearance")
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	for curved:bool in [false,true]:await case(curved)
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal default save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("FREE_SHALLOW_STAIRS_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
