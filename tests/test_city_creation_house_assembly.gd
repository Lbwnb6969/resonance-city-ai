extends SceneTree
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const Compare=preload("res://tests/test_city_creation_incremental_mesh_batch.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func values_only(value:Variant)->bool:
	if value is Object:return false
	if value is Array:
		for child:Variant in value:
			if not values_only(child):return false
	if value is Dictionary:
		for key:Variant in value:
			if not values_only(key) or not values_only(value[key]):return false
	return true
func renderer(city:RefCounted)->Node3D:
	var town:=Renderer.new();root.add_child(town);town.set_process(false);town.state=city
	town.buildings=Node3D.new();town.buildings.visible=false;town.add_child(town.buildings);town.building_context.prepare(city.houses,city.roads)
	return town
func cancellation()->void:
	var city:=State.new();city.initialize();var id:=str(city.houses[0].id)
	for level in range(3):
		for x in range(2):
			var exists:=false
			for cell:Dictionary in city.houses[0].cells:
				if cell.x==x and cell.z==0 and cell.level==level:exists=true
			if not exists:assert(city.add_cell(id,x,0,level).ok)
	var town:=Renderer.new();root.add_child(town);town.setup(city)
	var original:int=town.house_roots[id].get_instance_id()
	assert(city.add_cell(id,0,0,3).ok);town.request_budget_rebuild()
	var deadline:=Time.get_ticks_msec()+15000;var found:=false
	while Time.get_ticks_msec()<deadline:
		town.poll_budget_rebuild(.05,false)
		if town.budget_rebuild.staging!=null and town.budget_rebuild.staging.house_assemblies.has(id):found=true;break
		await process_frame
	check(found and town.house_roots[id].get_instance_id()==original,"real budget publication retains the original house during unfinished geometry generation")
	var staged:WeakRef=weakref(town.budget_rebuild.staging);var job:WeakRef=weakref(town.budget_rebuild.staging.house_assemblies[id])
	town.cancel_budget_rebuild()
	check(staged.get_ref()==null and job.get_ref()==null and town.house_roots[id].get_instance_id()==original,"cancellation frees the incomplete assembly and private scene without publishing them")
	check(city.undo().ok and city.redo().ok,"ordinary authoring history remains usable after cancellation")
	town.request_budget_rebuild();deadline=Time.get_ticks_msec()+15000;var complete:=false
	while Time.get_ticks_msec()<deadline:
		var progress:Dictionary=town.poll_budget_rebuild(3.5,true)
		if not progress.pending:complete=true;break
		await process_frame
	var picking:=true
	for body:StaticBody3D in town.house_roots[id].find_children("*","StaticBody3D",true,false):picking=picking and body.collision_layer==int(body.get_meta("pending_collision_layer",body.collision_layer))
	check(complete and town.house_roots[id].get_instance_id()!=original and picking and town.budget_rebuild.staging==null,"the replacement generation completes all geometry and restores actual picking only when it publishes")
	town.queue_free();await process_frame
func run()->void:
	var city:=State.new();assert(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))).ok)
	var authored:Dictionary=city.snapshot();var reference:Node3D=renderer(city);var incremental:Node3D=renderer(city);var compare:=Compare.new()
	var bridges_seen:=0
	for id:String in ["h61","h4","h53","h54","h125","h165","h52"]:
		var house:Dictionary=city.houses.filter(func(row:Dictionary)->bool:return row.id==id)[0]
		var expected:Node3D=reference._house(house);var prepared:Array=[];var modern:Dictionary={}
		if city.house_era(house)=="clockwork":
			var worker:=Thread.new();worker.start(func()->Array:return Renderer.Clockwork.prepare(city,house))
			while worker.is_alive():await process_frame
			prepared=worker.wait_to_finish();check(not prepared.is_empty() and values_only(prepared),"actual worker emits only complete CPU roof arrays and collision values")
			incremental.set_meta("clockwork_roofs",{id:prepared})
		if city.house_era(house)=="modern_eco":
			var worker:=Thread.new();worker.start(func()->Dictionary:return Renderer.Modern.prepare(city,house))
			while worker.is_alive():await process_frame
			modern=worker.wait_to_finish();bridges_seen+=modern.bridges.size();check(values_only(modern),"actual worker emits only complete modern roof and bridge plans")
			incremental.set_meta("modern_parts",{id:modern})
		var planner:=Thread.new();planner.start(func()->Dictionary:return incremental._prepare_house_assembly(house))
		while planner.is_alive():await process_frame
		var plan:Dictionary=planner.wait_to_finish();check(values_only(plan),"actual assembly planning returns only CPU values: "+id)
		incremental.set_meta("house_assembly_plans",{id:plan})
		var complete:bool=incremental._house_budgeted(house,.0001);check(not complete and incremental.house_assemblies.has(id),"a real authored house yields after its first construction unit: "+id)
		if not prepared.is_empty():check(is_same(incremental.house_assemblies[id].clockwork_roofs,prepared),"clockwork assembly adopts the exact worker-prepared roof arrays")
		if not modern.is_empty():check(is_same(incremental.house_assemblies[id].modern_parts,modern),"modern assembly adopts the exact worker-prepared roof and bridge plans")
		var safe:=true;var steps:=1
		while not complete:
			if incremental.house_roots.has(id):
				var partial:Node3D=incremental.house_roots[id];safe=safe and not partial.is_visible_in_tree()
				for body:StaticBody3D in partial.find_children("*","StaticBody3D",true,false):safe=safe and body.collision_layer==0 and body.collision_mask==0
			await process_frame;complete=incremental._house_budgeted(house,.0001);steps+=1
		var actual:Node3D=incremental.house_roots[id]
		check(safe and steps>5 and incremental.house_assemblies.is_empty(),"all intermediate geometry stays hidden and unpickable and the completed job is released: "+id)
		check(compare.signature(expected)==compare.signature(actual),"full real geometry normals UV indices colors materials transforms and cull state match the synchronous house: "+id)
		check(int(actual.get_meta("house_assembly").units)>5,"completed house retains actual per-part work evidence: "+id)
		expected.queue_free();actual.queue_free();incremental.house_roots.erase(id);await process_frame
	check(bridges_seen>0,"actual flagship cases exercise real skybridge installation and picking")
	check(city.snapshot()==authored,"complete authored flagship and ledgers remain unchanged by synchronous worker and incremental construction")
	var cleanup:=Renderer.BudgetRebuild.new();cleanup._dispose_context(reference);cleanup._dispose_context(incremental);cleanup.close();compare.free();await process_frame
	await cancellation()
	print("HOUSE_ASSEMBLY ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
