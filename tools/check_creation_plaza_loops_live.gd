extends "res://tools/check_creation_wide_roundabout_live.gd"
const PlazaFixture=preload("res://tests/test_city_creation_plaza_loops.gd")
const Plaza=preload("res://scripts/world/city_creation_plaza_loops.gd")
func show(city:RefCounted,at:Vector2,title:String)->void:
	await super.show(city,at,title)
	demo.life.set_process(true)
func plaza_root()->Node3D:
	var nodes:Array=demo.get_meta("street_wonders").find_children("PublicPlaza_*","Node3D",true,false)
	return nodes[0] if not nodes.is_empty() else null
func plaza_gpu()->Array:
	var result:Array=[];var node:=plaza_root()
	if node==null:return result
	for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
		for i in range(mesh.mesh.get_surface_count()):
			var data:Dictionary=RenderingServer.mesh_get_surface(mesh.mesh.get_rid(),i);result.append(var_to_bytes([mesh.mesh.surface_get_arrays(i),data.get("vertex_data"),data.get("attribute_data")]).hex_encode().sha256_text())
	result.sort();return result
func grass_inside(center:Vector2)->int:
	var count:=0
	for node:MultiMeshInstance3D in demo.town.meadow.find_children("*","MultiMeshInstance3D",true,false):
		if str(node.name) not in ["Meadow_lawn","Meadow_grass","Meadow_flower"]:continue
		for i in range(node.multimesh.instance_count):
			var p:Vector3=node.to_global(node.multimesh.get_instance_transform(i).origin)
			if Vector2(p.x,p.z).distance_to(center)<2.:count+=1
	return count
func choose_plaza(id:String,center:Vector2)->void:
	demo.select_tool(2);var control:Node=demo.get_meta("plaza_control");var event:=InputEventMouseMotion.new();event.device=92;event.position=demo.camera.unproject_position(Vector3(center.x,demo.state.ground_height(center)+.1,center.y));event.global_position=event.position;root.push_input(event);await create_timer(.2).timeout
	check(control.seal.is_visible_in_tree(),"actual road-tool closed-loop seal is reachable");await ui_click(control.seal);check(control.panel.visible,"native loop seal opens existing-style three-material choices");var button:Button=demo.find_child("PlazaChoice_"+id,true,false);check(button.is_visible_in_tree(),"actual material choice visible: "+id);await ui_click(button);check(await wait_for(func():return not control.choosing,5000),"original-work backup and explicit paving transaction settle");await settle();quiet();check(await wait_for(func():return plaza_root()!=null or id=="grass",5000),"actual scene scenery publication reaches paving selection")
func plaza_physical(center:Vector2)->void:
	await physics_frame;var node:=plaza_root();check(node!=null,"actual explicit plaza mesh is published")
	if node==null:return
	var hits:=true;var count:=0;var raw:=true;var mesh:MeshInstance3D=node.get_node("PlazaPaving");var probes:Array=[]
	for dx:float in [-1.5,0.,1.5]:
		for dz:float in [-1.5,0.,1.5]:
			var at:=center+Vector2(dx,dz);var y:float=demo.state.ground_height(at)+.075;var hit:Dictionary=demo.town.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,y+.2,at.y),Vector3(at.x,y-.2,at.y),2));hits=hits and not hit.is_empty() and hit.collider.has_meta("plaza_loop") and absf(hit.position.y-y)<.01;count+=1;probes.append({"at":at,"expected_y":y,"hit":str(hit.get("position","")),"collider":str(hit.collider.name) if hit.has("collider") else ""})
	for i in range(mesh.mesh.get_surface_count()):raw=raw and not RenderingServer.mesh_get_surface(mesh.mesh.get_rid(),i).get("vertex_data",PackedByteArray()).is_empty()
	check(count==9 and hits and raw,"actual uploaded paving and Jolt floor cover center and eight inner positions at real ground height")
	check(grass_inside(center)==0,"actual meadow instances cannot grow through explicitly paved interior")
	facts.get_or_add("plaza_probes",[]).append(probes)
func terrain_and_obstacles()->void:
	var f:=PlazaFixture.fixture(12.,.17);var city:RefCounted=f.city
	check(city.add_house(f.center+Vector2(-2.5,0)).ok and city.add_water([f.center+Vector2(2.5,0)] as Array[Vector2],2.,"pond").ok,"public house and original pond inside a real road ring")
	check(city.add_terrain_stroke([f.center+Vector2(0,-2)] as Array[Vector2],"raise",2.2,1.,2,true).ok,"public curved terrain across plaza interior")
	check(Plaza.choose(city,Plaza.faces(city)[0].loop_key,"fan_stone").ok,"adopt explicit paving around retained sources");await show(city,f.center,"坡面广场");quiet();check(await wait_for(func():return plaza_root()!=null,5000),"actual sloped paving publication")
	var node:=plaza_root()
	if node==null:return
	var triangles:PackedVector3Array=node.get_node("PlazaPaving").mesh.get_faces();var worst:=0.;var wet:=0;var buried:=0
	for i in range(0,triangles.size(),3):
		var p:Vector3=(triangles[i]+triangles[i+1]+triangles[i+2])/3.;var at:=Vector2(p.x,p.z);worst=maxf(worst,absf(p.y-city.ground_height(at)-.075))
		if city.water_clearance(at)<-.01:wet+=1
		for cell:Dictionary in city.houses[0].cells:
			if Plaza.Frame.contains(Plaza.Frame.footprint(city.houses[0],cell),at):buried+=1
	check(worst<.002,"every real triangle centroid follows exact terrain without burying or bridging ridges");check(wet==0 and buried==0,"actual paving excludes retained pond and house foundations")
	facts.sloped={"triangles":triangles.size()/3,"worst_drape_error":worst,"wet":wet,"buried":buried};demo.set_process(false);demo.town.clear_preview();await capture("slope_house_pond");demo.set_process(true)
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var f:=PlazaFixture.fixture();check(f.ok,"public road ring with original grass interior");await show(f.city,f.center,"环内铺装");quiet();demo.focus=Vector3(f.center.x,0,f.center.y);demo.zoom=15.;demo.pitch=.8;demo.yaw=.4;demo._update_camera();await settle();var original:Dictionary=demo.state.snapshot();var roads_gpu:=gpu();var original_grass:=grass_inside(f.center);check(original_grass>0,"original interior actually contains measurable grass instances")
	await choose_plaza("fan_stone",f.center);check(demo.state.plaza_loops.size()==1 and demo.state.plaza_loops[0].paving=="fan_stone" and demo.state.snapshot().schema==34,"native fan-stone choice creates one explicit schema34 record")
	var control:Node=demo.get_meta("plaza_control");var backup:Dictionary=demo.gallery.library.read(str(control.last_backup.get("id","")));check(backup.ok and backup.world.roads==original.roads and not backup.world.has("plaza_loops"),"first paving stores original road and unadopted lawn work")
	check(gpu()==roads_gpu,"explicit interior paving preserves every actual source-road GPU buffer");await plaza_physical(f.center);demo.set_process(false);demo.town.clear_preview();await capture("fan_stone");demo.set_process(true)
	await choose_plaza("brick_stone",f.center);check(demo.state.plaza_loops[0].paving=="brick_stone","native second paving changes the existing record");await plaza_physical(f.center);var hot:=plaza_gpu();check(not hot.is_empty(),"real brick surface has actual GPU evidence")
	var prefs:Dictionary=demo.state.creative_settings.presentation.duplicate(true);prefs.automatic_decoration=false;demo._after_edit(demo.state.CreationPolicy.set_preferences(demo.state,{"presentation":prefs}),"history");await settle();quiet();check(await wait_for(func():return plaza_root()!=null,3000) and plaza_gpu()==hot,"explicit author paving survives automatic-scenery disable")
	var saved:Dictionary=demo.state.snapshot();check(demo.state.save_city(OUT+"/plaza.json").ok,"actual paving work atomically saves");var reader:=State.new();check(reader.load_city(OUT+"/plaza.json").ok and reader.snapshot()==saved,"actual schema34 disk cold read preserves authored plaza");await show(reader,f.center,"广场冷读");quiet();check(await wait_for(func():return plaza_root()!=null,3000) and plaza_gpu()==hot,"independent scene cold read matches real paving GPU")
	demo._after_edit(demo.state.remove_road("r1"),"road");await settle();quiet();check(demo.state.plaza_loops.is_empty() and await wait_for(func():return plaza_root()==null,3000),"breaking source loop retires record and actual floor");await key(KEY_Z,true);await settle();quiet();check(await wait_for(func():return plaza_root()!=null,3000) and plaza_gpu()==hot,"native Undo restores topology, material and exact GPU")
	root.size=Vector2i(1024,768);demo.focus=Vector3(f.center.x,0,f.center.y);demo.zoom=15.;demo._update_camera();await choose_plaza("grass",f.center);check(demo.state.plaza_loops.is_empty() and await wait_for(func():return plaza_root()==null,3000),"native lawn choice removes optional saved field and explicit paving");await capture("grass_1024")
	check(grass_inside(f.center)==original_grass,"native lawn restoration publishes exact original meadow instance count")
	await terrain_and_obstacles()
	check(personal==FileAccess.get_file_as_bytes(State.DEFAULT_PATH),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"facts":facts};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("PLAZA_LOOPS_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if report.ok else 1)
