extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Old=preload("res://tests/test_city_creation_bakery_life.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Colors=preload("res://scripts/visual/city_creation_house_colors.gd")
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var builder:=Old.new();var city:RefCounted=builder._fixture();builder.free()
	check(city.produce_bread("h2",4),"real existing bread stock before choosing a different food")
	var bread:Dictionary=city.bakery_supply.duplicate(true);var seed_value:int=city.houses[1].seed;check(city.set_house_food_kind("h2",city.Grillhouse.KIND).ok,"public roast-house selection")
	check(city.bakery_status("h2").stock==0 and city.bakery_supply==bread and city.houses[1].seed==seed_value,"roast starts with its own empty ledger and keeps old bread and house seed")
	check(not city.produce_bread("h2",0) and city.produce_bread("h2",2) and city.serve_bread("h2","h1"),"real roast batch and consumption use normal food APIs")
	check(city.bakery_status("h2").stock==1 and city.bakery_status("h2").served==1 and city.bakery_supply==bread,"actual roast transaction never converts bread inventory")
	var saved:Dictionary=city.snapshot();var fresh:=State.new();check(saved.schema==26 and fresh.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok and fresh.snapshot()==saved,"schema26 full authored and roast-ledger JSON roundtrip")
	check(city.save_city(out+"/city.json").ok,"new cuisine writes and validates an isolated real save")
	var previous:=FileAccess.get_file_as_bytes(out+"/city.json");check(city.save_city(out+"/city.json").ok and FileAccess.get_file_as_bytes(out+"/废弃/城市存档/city.json.previous")==previous,"real save preserves the previous file byte for byte")
	check(city.set_house_food_kind("h2","").ok and city.bakery_status("h2").stock==4,"switching to bread recovers its exact existing stock")
	check(city.undo().ok and city.bakery_status("h2").stock==1 and city.redo().ok and city.bakery_status("h2").stock==4,"recipe Undo Redo preserves both real food histories")
	check(city.set_house_food_kind("h2",city.Grillhouse.KIND).ok and city.set_bakery_open("h2",false).ok and not city.produce_bread("h2",1) and city.serve_bread("h2"),"paused grill stops cooking while already cooked food can still be served")
	var stable:Dictionary=city.snapshot()
	for bad:Variant in [{"version":true,"shops":{}},{"version":1,"shops":{"h2":{"stock":1,"served":1,"produced":1}}},{"version":1,"shops":{"h9999":{"stock":0,"served":0,"produced":0}}}]:
		var invalid:Dictionary=stable.duplicate(true);invalid.grill_supply=bad;check(not fresh.restore(invalid).ok and fresh.snapshot()==saved,"bad ledger or unissued food identity rejects atomically")
	var invalid:Dictionary=stable.duplicate(true);invalid.schema=25;check(not fresh.restore(invalid).ok,"old format refuses new food identity")
	city.set_bakery_open("h2",true);var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	for ignored in range(800):life._process(.1)
	var status:Dictionary=city.bakery_status("h2");check(status.produced>2 and status.served>2 and city.bakery_supply==bread,"production worker and walking resident actually cook and eat roast instead of bread")
	check(life.bakery.workers.size()==1 and str(life.bakery.status("h2").worker_name).ends_with("烤肉师"),"existing attended-food worker has roast identity")
	var r:=Renderer.new();root.add_child(r);r.state=city;r.buildings=Node3D.new();r.add_child(r.buildings)
	for node in [r.shore,r.lilypads,r.wildlife]:r.add_child(node)
	var house:Node3D=r._house(city.houses[1]);check(house.find_children("CharcoalGrill*","Node3D",true,false).size()==1 and house.find_children("GrillhouseSign*","Node3D",true,false).size()==1,"production house generates a real grill and skewer sign")
	r._merge_meshes(house);Colors.prepare(r,house,city.houses[1]);var fixed:=0
	for mesh:MeshInstance3D in house.find_children("*","MeshInstance3D",true,false):
		if mesh.material_override.get_meta("creation_fixed_color",false):fixed+=1
	check(fixed>0 and not house.get_meta("house_color_cache").materials.any(func(row):return row.material.get_meta("creation_fixed_color",false)),"fixed food colors survive real batching outside author palette recipes")
	check(house.find_child("GrillEmbers",true,false)!=null and house.find_child("BakerySmoke",true,false)!=null,"actual grill carries independent live embers and smoke")
	house.free();r.free();life.queue_free();worker_cases();geometry_cases();policy_cases(out);await process_frame
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"roast":status,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("GRILLHOUSE_CPU ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
func worker_cases()->void:
	var builder:=Old.new();var city:RefCounted=builder._fixture();builder.free();city.set_house_food_kind("h2",city.Grillhouse.KIND)
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);var worker:Dictionary=life.bakery.workers[0]
	for ignored in range(400):
		if worker.phase=="baking":break
		life._process(.1)
	check(worker.phase=="baking","actual cook walks to the grill before hidden-worker regression")
	var camera:=Camera3D.new();life.add_child(camera);camera.position=Vector3(1000,10,1000);life.view_camera=camera
	city.produce_bread("h2",city.bakery_status("h2").capacity-city.bakery_status("h2").stock);life.bakery.tick(.1)
	check(worker.has("worker_work") and not worker.worker_work.active and is_inf(worker.worker_work.due),"full offscreen grill sleeps without cooking")
	city.serve_bread("h2");city.serve_bread("h2");var produced:int=city.bakery_status("h2").produced
	for ignored in range(70):life.time+=.1;life.bakery.tick(.1)
	check(city.bakery_status("h2").produced==produced+2,"actual offscreen customer consumption wakes the cook without a geometry revision")
	life.worker_lod.flush(worker);worker.elapsed=4.;life.worker_lod.after(worker,0.);city.set_house_food_kind("h2","");life.bakery_status("h2")
	check(worker.elapsed==0. and not worker.has("worker_work"),"changing recipe discards settled old cooking time, including deferred work")
	life.view_camera=null
	for ignored in range(300):
		if worker.phase=="returning":break
		life._process(.1)
	check(worker.phase=="returning" and worker.batches==3,"real completed food shift reaches its return journey")
	city.set_house_food_kind("h2",city.Grillhouse.KIND);life.bakery_status("h2");var checkpoint:Array=life.bakery.checkpoint();life.bakery.restore(checkpoint)
	check(life.bakery.checkpoint()==checkpoint and checkpoint[0].batches==3,"recipe switch preserves the legitimate returning worker checkpoint")
	worker=life.bakery.workers[0]
	for ignored in range(300):
		if worker.phase=="resting":break
		life._process(.1)
	city.set_house_food_kind("h2","");life.bakery_status("h2");checkpoint=life.bakery.checkpoint();life.bakery.restore(checkpoint)
	check(life.bakery.checkpoint()==checkpoint and checkpoint[0].phase=="resting","recipe switch preserves the legitimate resting worker checkpoint")
	life.free();city.initialize_empty();check(not city.has_meta("grill_supply"),"starting another city clears the old roast ledger")
func geometry_cases()->void:
	for style:String in ["classic","round_tower"]:
		var f:=preload("res://tools/fixtures/city_creation_layered_window_fixture.gd").build("renaissance",.4,false,2);var city:RefCounted=f.city;city.set_house_style("h1",style);city.set_house_food_kind("h1",city.Grillhouse.KIND);city.produce_bread("h1",3)
		var r:=Renderer.new();root.add_child(r);r.state=city;r.buildings=Node3D.new();r.add_child(r.buildings);r.bread_layer=Node3D.new();r.add_child(r.bread_layer)
		for node in [r.shore,r.lilypads,r.wildlife]:r.add_child(node)
		var house:Node3D=r._house(city.houses[0]);r.house_roots.h1=house;r.update_bakery_supply({"h1":city.bakery_status("h1")});var grill:Node3D=house.find_child("CharcoalGrill",true,false)
		check(grill!=null and r.bread_roots.h1.get_meta("displayed_skewers")==3 and r.bread_roots.h1.global_position.distance_to(grill.global_position)<.00001,"real rotated "+style+" grill and actual stock share the same construction frame")
		if style=="classic":check(grill.get_parent().has_meta("arcade_recess"),"alignment regression covers an actual recessed arcade wall")
		r.free()
	var f:=preload("res://tools/fixtures/city_creation_layered_window_fixture.gd").build("pastoral",PI/4.,false,1);var r:=Renderer.new();root.add_child(r);r.state=f.city
	for node in [r.shore,r.lilypads,r.wildlife]:r.add_child(node)
	var visual=preload("res://scripts/visual/city_creation_grillhouse.gd")
	check(not visual.clear(r,Vector3(-29.4,0,-20.2),"") and visual.clear(r,Vector3(-29.15,0,-20.8),""),"real rotated neighbor corner blocks the grill while empty space beside its diagonal remains usable");r.free()
func policy_cases(out:String)->void:
	var city:=State.new();city.initialize_free();city.add_house(Vector2(-28,-20));var cutoff:Dictionary=city.harmony_journey.growth_cutoff.duplicate(true)
	check(city.set_house_food_kind("h1",city.Grillhouse.KIND).ok and preload("res://scripts/world/city_creation_progression_opening.gd").begin(city,out+"/epoch.json").ok and city.produce_bread("h1",2),"schema26 roast shop enters a real backed-up optional economy epoch")
	check(preload("res://scripts/world/city_creation_progression_toggle.gd").set_enabled(city,false,out+"/epoch.json").ok,"optional economy can pause an actual roast shop")
	var saved:Dictionary=city.snapshot();var fresh:=State.new()
	check(not city.produce_bread("h1",1) and not city.serve_bread("h1") and city.snapshot()==saved and fresh.restore(JSON.parse_string(JSON.stringify(saved))).ok and fresh.harmony_journey.growth_cutoff==cutoff,"paused schema26 keeps actual roast inventory and the historical cutoff through cold read")
	check(preload("res://scripts/world/city_creation_progression_toggle.gd").set_enabled(city,true,out+"/epoch.json").ok and city.serve_bread("h1") and city.bakery_status("h1").stock==1,"same epoch resumes real roast consumption")
