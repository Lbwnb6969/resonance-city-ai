extends RefCounted
const Live=preload("res://tools/fixtures/city_creation_alpine_live.gd")
const Visual=preload("res://scripts/visual/city_creation_citizen_visual.gd")
const Props=preload("res://scripts/visual/city_creation_citizen_props.gd")
static func frames(demo,out:String,label:String,actor:Node3D)->int:
	var tree:SceneTree=demo.get_tree();var count:=0
	var processing:bool=demo.is_processing();demo.set_process(false)
	demo.ui_layer.hide();demo.camera_rig.strolling=false;demo.camera.projection=Camera3D.PROJECTION_PERSPECTIVE;demo.camera.fov=48.
	demo.focus=actor.global_position+Vector3.UP*.28;demo.zoom=3.;demo.yaw=.65;demo.pitch=.38
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		tree.root.size=size
		for phase in range(3):
			demo._set_light_phase(phase)
			var target:Vector3=actor.global_position+Vector3.UP*.30
			demo.camera.global_position=target+(actor.global_basis*Vector3(1.8,.90,1.8) if label=="seated_tea" else Vector3(1.8,.70,1.8));demo.camera.look_at(target)
			demo.life._update_citizen_lod(0.);demo.life.flush_workers()
			demo.life.set_meta("citizen_visual_next",0.);Props.update(demo.life)
			if await Live.shot(demo,out,"citizen_%s_%d_%d"%[label,size.x,phase]):count+=1
	if "--gait-sequences" in OS.get_cmdline_user_args() and label in ["workshop","atelier","clockmaker","bread_shopper","seated_tea","night_lantern"]:
		await preload("res://tools/fixtures/city_creation_gait_sequence.gd").capture(demo,out,label,actor)
	demo.camera.projection=Camera3D.PROJECTION_ORTHOGONAL;demo.set_process(processing);demo._update_camera();return count
static func show_world(demo,city)->void:
	await demo.gallery._open_chosen({"ok":true,"id":"citizen_fixture","title":"微观街坊验收","world":city.snapshot(),"view":{"focus":[-8.,.7,-7.5],"zoom":24.,"yaw":.62,"pitch":.8,"light_phase":0,"evening":false}})
	while demo.gallery.busy:await demo.get_tree().process_frame
	await Live.settle(demo);demo.life.set_process(false)
static func capture(demo,out:String)->Dictionary:
	var checks:Dictionary={};var seen:Dictionary={};var images:=0;var draw_ok:=true;var tree:SceneTree=demo.get_tree()
	for role:String in ["workshop","atelier","clockmaker"]:
		var city:RefCounted=preload("res://tests/test_city_creation_clockmaker.gd").fixture();assert(city.set_house_role("h2",role).ok)
		await show_world(demo,city)
		var worker:Dictionary=demo.life.workshop.workers[0]
		for i in range(4000):
			if worker.phase=="to_target":break
			demo.life._process(.05)
		checks["real_cargo_"+role]=worker.phase=="to_target" and worker.carry.visible and not demo.state.workshop_status("h2").transit.is_empty()
		images+=await frames(demo,out,role,worker.node)
		var visible:=0
		for mesh:MeshInstance3D in worker.node.find_children("*","MeshInstance3D",true,false):
			if mesh.is_visible_in_tree() and mesh.mesh!=null:visible+=1
		draw_ok=draw_ok and visible<=2
		seen[role]={"draws":visible,"prop":str(worker.carry.name),"body_mesh":worker.node.get_child(0).get_child(0).mesh.get_instance_id()}
	if "--cargo-only" in OS.get_cmdline_user_args():
		var result:={"ok":checks.values().all(func(v):return v) and draw_ok and images==18,"checks":checks,"images":images,"roles":seen}
		FileAccess.open(out+"/cargo_visual.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));return result
	var city:=preload("res://scripts/world/city_creation_state.gd").new();city.initialize();assert(city.add_house(Vector2(-8,-10.5)).ok)
	await show_world(demo,city)
	var shopper:Dictionary={};var baker:Dictionary={};var meeting:=false
	for i in range(5000):
		demo.life._process(.05)
		for row:Dictionary in demo.life.residents:
			if row.node.get_meta("citizen_prop","")=="bread":shopper=row
		if not shopper.is_empty():break
	checks.actual_purchase_basket=not shopper.is_empty() and int(demo.state.life_progress.purchases)>0
	if not shopper.is_empty():images+=await frames(demo,out,"bread_shopper",shopper.node)
	if not demo.life.bakery.workers.is_empty():
		baker=demo.life.bakery.workers[0];images+=await frames(demo,out,"strawhat_baker",baker.node)
	demo._set_light_phase(0);demo.focus=Vector3(-8.,.7,-7.5);demo.zoom=24.;demo.pitch=.8;demo.yaw=.62;demo._update_camera()
	await Live.settle(demo)
	for i in range(5000):
		demo.life._process(.05)
		for row:Dictionary in demo.life.greetings.active.values():
			if row.has("anchor"):
				meeting=true;images+=await frames(demo,out,"street_meeting",row.resident.node);break
		if meeting:break
	checks.actual_nearby_pair=meeting
	demo._set_light_phase(2);demo.focus=Vector3(-8,.7,-4.5);demo.zoom=14.;demo._update_camera()
	var lanterns:Array=[]
	for i in range(3000):
		demo.life._process(.05)
		lanterns=demo.life.residents.filter(func(row):return row.node.get_meta("citizen_prop","")=="lantern")
		if not lanterns.is_empty():break
	checks.real_night_lantern=not lanterns.is_empty()
	if not lanterns.is_empty():
		demo.focus=lanterns[0].node.global_position+Vector3.UP*.28;demo.zoom=3.;demo._update_camera();await Live.shot(demo,out,"citizen_night_lantern")
		if "--gait-sequences" in OS.get_cmdline_user_args():images+=await frames(demo,out,"night_lantern",lanterns[0].node)
	var tea:=preload("res://scripts/world/city_creation_state.gd").new();tea.initialize();assert(tea.set_house_role("h4","garden_cafe").ok)
	await show_world(demo,tea)
	demo.focus=Vector3(-8,.7,-4.5);demo.zoom=14.;demo._update_camera();var guest:Dictionary={}
	for i in range(6000):
		demo.life._process(.05)
		for row:Dictionary in demo.life.residents:
			if row.get("cafe_visit",{}).get("phase","")=="seated":guest=row
		if not guest.is_empty():break
	checks.actual_seated_cup=not guest.is_empty()
	if not guest.is_empty():
		images+=await frames(demo,out,"seated_tea",guest.node)
		checks.actual_seated_cup=guest.node.get_meta("citizen_prop","")=="cup"
	checks.two_draws_with_real_cargo=draw_ok;checks.images=images>=30
	var result:={"ok":checks.values().all(func(v):return v),"checks":checks,"images":images,"roles":seen,"mesh_pool":Visual.meshes.size(),"material_pool":Visual.materials.size()}
	FileAccess.open(out+"/citizen_visual.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));return result
static func capture_tea(demo,out:String)->Dictionary:
	var tea:=preload("res://scripts/world/city_creation_state.gd").new();tea.initialize();assert(tea.set_house_role("h4","garden_cafe").ok)
	await show_world(demo,tea);demo.focus=Vector3(-8,.7,-4.5);demo.zoom=14.;demo._update_camera();var guest:Dictionary={}
	for i in range(6000):
		demo.life._process(.05)
		for row:Dictionary in demo.life.residents:
			if row.get("cafe_visit",{}).get("phase","")=="seated":guest=row
		if not guest.is_empty():break
	var count:=0
	if not guest.is_empty():count=await frames(demo,out,"seated_tea",guest.node)
	return {"ok":not guest.is_empty() and count==6,"images":count}
