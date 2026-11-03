extends "res://tools/check_creation_detail_eras_live.gd"
const GhatFixture=preload("res://tests/test_city_creation_water_ghat.gd")
const Ghat=preload("res://scripts/world/city_creation_water_ghat.gd")
const Seats=preload("res://scripts/world/city_creation_bench_seats.gd")
const Targets=preload("res://scripts/ui/city_creation_sitting_targets.gd")
const Visits=preload("res://scripts/world/city_creation_bench_visits.gd")
func gpu()->Array:
	var rows:Array=[]
	for mesh:MeshInstance3D in demo.town.roads_layer.find_children("*","MeshInstance3D",true,false):
		for i in range(mesh.mesh.get_surface_count()):
			var data:Dictionary=RenderingServer.mesh_get_surface(mesh.mesh.get_rid(),i);rows.append(var_to_bytes([mesh.mesh.surface_get_arrays(i),data.get("vertex_data"),data.get("attribute_data")]).hex_encode().sha256_text())
	rows.sort();return rows
func hover_choice()->void:
	demo.select_tool(2);var row:Dictionary=demo.state.roads[0];var p:=Vector2(row.points[-1][0],row.points[-1][1]);var event:=InputEventMouseMotion.new();event.device=92;event.position=demo.camera.unproject_position(Vector3(p.x,demo.state.street_height(p),p.y));event.global_position=event.position;root.push_input(event);await create_timer(.2).timeout
	var button:Button=demo.get_meta("water_ghat_control").button;check(button.is_visible_in_tree(),"original road tool reveals contextual water-edge choice");await ui_click(button);await settle();quiet()
func physical()->void:
	await physics_frame;var plans:=Ghat.all(demo.state);var hits:=true;var count:=0;var aligned:=true
	for plan:Dictionary in plans:
		for rank in range(4):
			var step:Dictionary=plan.steps[rank];var tangent:=Vector2(-plan.normal.y,plan.normal.x)
			for lateral:float in [-.75,0.,.75]:
				var p:Vector2=step.center+tangent*lateral;var query:=PhysicsRayQueryParameters3D.create(Vector3(p.x,step.y+.035,p.y),Vector3(p.x,step.y-.035,p.y),1);var hit:Dictionary=demo.town.get_world_3d().direct_space_state.intersect_ray(query);hits=hits and not hit.is_empty() and hit.collider.get_meta("water_ghat","")==plan.id and hit.collider.get_meta("ghat_step",0)==rank+1;count+=1
		for body:StaticBody3D in demo.town.roads_layer.find_children("*","StaticBody3D",true,false):
			if body.get_meta("water_ghat","")!=plan.id:continue
			var rank:int=body.get_meta("ghat_step")-1;var step:Dictionary=plan.steps[rank];var shape:CollisionShape3D=body.get_child(0);aligned=aligned and absf(shape.global_position.y+shape.shape.size.y*.5-float(step.y))<.0001
	check(plans.size()==1 and count==12 and hits,"actual Jolt hits all four stone treads across width; original road cap cannot cover the second dry step")
	check(aligned,"physical upper faces match derived visible stone box heights")
	facts.get_or_add("physics",[]).append({"rays":count,"hits":hits,"plans":plans})
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	for yaw:float in [0.,.4,PI*.5]:
		var f:=GhatFixture.fixture(yaw);check(f.ok,"public dry road and pond sample");await show(f.city,Vector2(-30,-20),"显式亲水石埠");quiet();demo.focus=Vector3(-30,0,-20);demo.zoom=12.;demo.yaw=.8+yaw;demo.pitch=.7;demo._update_camera();await settle();var before:Dictionary=demo.state.snapshot();var control:Node=demo.get_meta("water_ghat_control")
		await hover_choice();check(demo.state.roads[0].get("water_ghat",false) and demo.state.snapshot().schema==33,"native explicit water-edge choice adopts schema33")
		var backup:Dictionary=demo.gallery.library.read(str(control.last_backup.get("id","")));check(backup.ok and backup.world.roads==before.roads and backup.world.schema==before.schema,"first native adoption stores the exact original road and old schema")
		await physical();demo.town.clear_preview();await capture("ghat_"+str(yaw));var seats:=Targets.plans(demo);check(seats.size()==1,"existing B view exposes actual second dry stone step")
		var seat:Dictionary=seats.values()[0];var oldview:=[demo.focus,demo.yaw,demo.pitch,demo.zoom,demo.camera.projection];var point:=Vector3(seat.at.x,seat.y+.6,seat.at.y);demo.pointer=demo.camera.unproject_position(point);await key(KEY_B);check(demo.camera_rig.bench_view.seat_id==seat.id and demo.camera.projection==Camera3D.PROJECTION_PERSPECTIVE,"native B enters actual water-facing low eye-height listening anchor");await capture("listening_"+str(yaw));await key(KEY_ESCAPE);check([demo.focus,demo.yaw,demo.pitch,demo.zoom,demo.camera.projection]==oldview,"native Escape restores the exact original camera")
		var hot:=gpu();var saved:Dictionary=demo.state.snapshot();var path:=OUT+"/ghat_"+str(yaw)+".json";check(demo.state.save_city(path).ok,"actual schema33 city save");var reader:=State.new();check(reader.load_city(path).ok and reader.snapshot()==saved,"actual disk cold work preserves author road/intent");await show(reader,Vector2(-30,-20),"石埠冷读");quiet();check(gpu()==hot,"actual cold road and stone GPU buffers equal incremental publication")
		demo._after_edit(Ghat.choose(demo.state,"r1",false),"history");await settle();quiet();check(Ghat.all(demo.state).is_empty() and Targets.plans(demo).is_empty(),"disabling retires both geometry and listening anchor");await key(KEY_Z,true);await settle();quiet();check(gpu()==hot and Ghat.all(demo.state).size()==1,"native Undo restores exact stone and paving GPU")
	var f:=GhatFixture.fixture();var city:RefCounted=f.city;check(city.add_house(Vector2(-34,-18.4)).ok and city.rotate_house("h1",PI).ok and Ghat.choose(city,"r1",true).ok,"public household and authored stone step for actual resident")
	await show(city,Vector2(-30,-20),"居民干阶看水");quiet();check(await wait_for(func():return not demo.life.budget_sync_pending(),5000),"actual asynchronous network publication settles")
	var life:Node=demo.life;life.set_process(false);life.time=30.;var r:Dictionary=life.residents[0];r.wait=0.;r.paused=true;r.dwell_id="";r.index=r.route.size();var seats:=Seats.plans(demo.state);var id:String=seats.keys()[0];var economy:=[demo.state.cozy_progression.duplicate(true),demo.state.bakery_supply.duplicate(true),demo.state.life_progress.duplicate(true)]
	check(Visits.start(life,r,id),"actual resident reserves prebound second dry step")
	for i in range(600):
		Visits.tick(life,r,.05)
		if r.get("bench_visit",{}).get("phase","")=="seated":break
	check(r.get("bench_visit",{}).get("phase","")=="seated" and Targets.occupied(demo,id),"resident actually arrives, takes seated pose and owns the stone anchor")
	demo.focus=Vector3(-29.5,.1,-20);demo.zoom=7.;demo.yaw=.6;demo.pitch=.6;demo._update_camera();demo.town.clear_preview();await settle();await capture("resident_seated")
	check(economy==[demo.state.cozy_progression,demo.state.bakery_supply,demo.state.life_progress],"real rendered water rest awards no XP, goods or service receipts")
	Visits.release(life,r);check(not Targets.occupied(demo,id),"leaving releases the existing B listening anchor")
	check(personal==FileAccess.get_file_as_bytes(State.DEFAULT_PATH),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"facts":facts};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("WATER_GHAT_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if report.ok else 1)
