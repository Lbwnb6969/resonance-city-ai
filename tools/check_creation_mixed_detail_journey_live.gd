extends "res://tools/check_creation_porch_slots_live.gd"
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
func mixed_city()->RefCounted:
	var city:RefCounted=Porches.porch_fixture();city.set_house_architecture_variant("h1","flower_pots","porch")
	for i in range(2):
		Brush.select(city,"renaissance" if i==0 else "pastoral","recessed_townhouse")
		var cells:Array=[]
		for x in range(2):
			for level in range(2):cells.append({"x":x,"z":0,"level":level,"kind":"room"})
		check(city.add_house_stroke(Vector2(-24.4+i*3.6,-20),cells).ok,"public adjacent two-storey mixed-era house")
		var id:="h"+str(i+2)
		for pair:Array in [["windows","stone_pediment"],["dormer","shed_light"],["chimney","copper_cowl"],["gable_trim","stone_dentils"],["porch","firewood_crate"]]:
			var result:Dictionary=city.set_house_dormer(id,pair[1]) if pair[0]=="dormer" else city.set_house_chimney(id,pair[1]) if pair[0]=="chimney" else city.set_house_architecture_variant(id,pair[1],pair[0])
			check(result.ok,"independent mixed-row choice "+id+str(pair))
	for id:String in ["h1","h3"]:check(city.set_house_role(id,"residential").ok,"real residential role "+id)
	check(city.set_house_role("h2","bakery").ok,"real central bakery role")
	check(city.add_road([Vector2(-31,-17.86),Vector2(-15,-17.86)] as Array[Vector2],"path","none",1.25).ok,"shared real street along all three entrances")
	return city
func row_arrays()->Dictionary:
	var result:Dictionary={}
	for id:String in demo.town.house_roots:
		var buffers:Array=[];var house:Node3D=demo.town.house_roots[id]
		for mesh:MeshInstance3D in house.find_children("*","MeshInstance3D",true,false):
			var material:Material=mesh.material_override;var appearance:Array=[]
			if material is StandardMaterial3D:appearance=[material.albedo_color,material.roughness,material.metallic]
			elif material is ShaderMaterial:
				for parameter:String in ["albedo_color","roof_color","brick_color","surface_kind"]:appearance.append(material.get_shader_parameter(parameter))
			for i in range(mesh.mesh.get_surface_count()):
				var raw:Dictionary=RenderingServer.mesh_get_surface(mesh.mesh.get_rid(),i)
				buffers.append(var_to_bytes([house.global_transform.affine_inverse()*mesh.global_transform,mesh.mesh.surface_get_arrays(i),raw.get("attribute_data",PackedByteArray()),appearance,mesh.visibility_range_end]).hex_encode().sha256_text())
		buffers.sort();result[id]=buffers
	return result
func row_cold(label:String)->void:
	check(await wait_for(func():return demo.town.touch.active.is_empty(),1500),label+" touch animation settles")
	var hot:=row_arrays();var city:=State.new();check(city.restore(demo.state.snapshot()).ok,label+" source restores")
	await show(city,Vector2(-23.5,-20),label);quiet();await settle()
	check(row_arrays()==hot,label+" all houses final GPU buffers, transforms, LOD and palette match independent cold publication")
func native_slot(house:String,slot:String,id:String)->void:
	var prefixes:={"windows":"WindowDetail_","dormer":"DormerChoice_","chimney":"ChimneyChoice_","gable_trim":"GableTrimChoice_","porch":"PorchChoice_"}
	var original:Dictionary=demo.town._house_record(house).duplicate(true)
	demo.select_tool(0);demo.spatial_popover.open_for_house(house);await settle();await ui_click(demo.spatial_popover.inspector.appearance_button);await settle()
	var button:Button=demo.find_child(prefixes[slot]+id,true,false)
	check(button!=null and button.is_visible_in_tree(),"mixed row native choice reachable "+house+" "+slot)
	if button!=null:await ui_click(button);await settle();quiet()
	await key(KEY_ESCAPE);await key(KEY_ESCAPE)
	check(Choice.record(demo.town._house_record(house),slot).get("windows" if slot=="windows" else "id","")==id,"native choice authors only requested row slot "+slot)
	for other:String in prefixes:
		if other!=slot:check(Choice.record(demo.town._house_record(house),other)==Choice.record(original,other),"native "+slot+" edit preserves exact independent "+other+" record")
func walk_probe(label:String)->void:
	var samples:=0;var collisions:=0;var body_hits:=0;var moving:Dictionary={};var served_before:int=demo.state.bakery_status("h2").served
	var previous:Dictionary={};var space:PhysicsDirectSpaceState3D=demo.town.get_world_3d().direct_space_state
	var capsule:=CapsuleShape3D.new();capsule.radius=.16;capsule.height=.90
	var query:=PhysicsShapeQueryParameters3D.new();query.shape=capsule;query.collision_mask=1;query.margin=.001
	for i in range(1500):
		demo.life._process(.1)
		for resident:Dictionary in demo.life.residents:
			demo.life.flush_citizen(resident);var at:Vector3=demo.life.citizen_position(resident);var id:String=resident.home_id
			if previous.has(id) and at.distance_to(previous[id])>.001:
				moving[id]=true;samples+=1
				var hit:Dictionary=space.intersect_ray(PhysicsRayQueryParameters3D.create(previous[id]+Vector3.UP*.32,at+Vector3.UP*.32,1))
				if not hit.is_empty():collisions+=1
				query.transform=Transform3D(Basis.IDENTITY,previous[id]+Vector3.UP*.55);query.motion=at-previous[id]
				var sweep:PackedFloat32Array=space.cast_motion(query)
				query.transform.origin=at+Vector3.UP*.55;query.motion=Vector3.ZERO
				if sweep[0]<1. or not space.intersect_shape(query,1).is_empty():body_hits+=1
			previous[id]=at
		if i%25==0:await process_frame
	check(samples>100 and moving.size()>=2,label+" actual residents move through the shared row")
	check(collisions==0,label+" every observed walking segment clears actual layer1 building and detail solids")
	check(body_hits==0,label+" swept 0.32m wide 0.90m tall body and endpoint overlap clear actual solids")
	check(demo.state.bakery_status("h2").served>served_before,label+" actual resident reaches central shop and consumes real bread")
	facts[label]={"segments":samples,"solid_hits":collisions,"body_hits":body_hits,"body_radius":.16,"body_height":.90,"moving_homes":moving.keys(),"served_before":served_before,"served_after":demo.state.bakery_status("h2").served}
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var city:=mixed_city();check(city.begin_progression_epoch(OUT+"/epoch.json").ok,"isolated backed-up real economy for walking evidence")
	await show(city,Vector2(-23.5,-20),"混合联排细部旅程");quiet();await settle()
	check(demo.town.house_roots.size()==3 and demo.town.house_roots.h1.get_meta("structural_joined",false),"three real published houses include actual structural adjacency")
	facts["published_details"]={}
	for id:String in ["h1","h2","h3"]:
		var house:Node3D=demo.town.house_roots[id];var active:Array=[]
		for meta:String in ["roof_detail","chimney_detail","gable_trim","porch_detail"]:
			if house.get_meta(meta,{}).get("active",false):active.append(meta)
		facts.published_details[id]=active
		check(Choice.valid(demo.town._house_record(id).architecture_variant),"mixed-row five-slot author record valid "+id)
	check(facts.published_details.h1.size()==4,"first joined house actually publishes all four added geometry categories alongside windows")
	var before:Array=demo.state.houses.duplicate(true);var seed_value:int=demo.state.houses[1].seed
	for pair:Array in [["windows","timber_shutters"],["dormer","gable_light"],["chimney","brick_twin_pots"],["gable_trim","timber_verge"],["porch","flower_pots"]]:
		await native_slot("h2",pair[0],pair[1]);check(demo.state.houses[0]==before[0] and demo.state.houses[2]==before[2] and demo.state.houses[1].seed==seed_value,"native central choice preserves neighbor authors and house seed")
	await row_cold("五槽编辑冷算")
	var hot:=row_arrays();var authors:Dictionary=demo.state.snapshot();var side:Dictionary=Porches.road_beside(demo.state,-28.77);demo._after_edit(side,"road");await settle();quiet()
	check(side.ok and row_arrays()!=hot,"actual near-door road changes mixed-row decoration geometry")
	var changed_roads:Array=demo.state.roads.duplicate(true)
	await key(KEY_Z,true);await settle();quiet();check(demo.state.houses==authors.houses and demo.state.roads==authors.roads and row_arrays()==hot,"native Undo restores exact road authors and complete mixed row after approach edit")
	await key(KEY_Y,true);await settle();quiet();check(demo.state.roads==changed_roads,"native Redo restores exact changed road authors");await row_cold("门路变化冷算")
	var lower:=row_arrays()
	var edit:Dictionary=demo.state.add_cell("h2",0,0,2);demo._after_edit(edit,"room");await settle();quiet();check(edit.ok,"actual taller central neighbor alters shared roof boundary")
	var taller:=row_arrays();await key(KEY_Z,true);await settle();quiet();check(demo.state.houses==authors.houses and row_arrays()==lower,"native Undo restores original volumes and GPU after neighboring addition")
	await key(KEY_Y,true);await settle();quiet();check(row_arrays()==taller,"native Redo restores all neighboring taller geometry")
	await row_cold("邻屋增层冷算")
	await walk_probe("mixed_row_walk")
	var path:=OUT+"/row.json";var saved:Dictionary=demo.state.snapshot();var buffers:=row_arrays();check(demo.state.save_city(path).ok,"mixed five-slot row and actual Life receipts save")
	var reader:=State.new();check(reader.load_city(path).ok and reader.snapshot()==saved,"disk cold read preserves exact schema30 authors and real receipts")
	await show(reader,Vector2(-23.5,-20),"混合街屋冷读");quiet();await settle();check(row_arrays()==buffers,"all three final GPU houses match disk cold publication")
	demo.focus=Vector3(-23.5,1.4,-19.5);demo.zoom=12.;demo.pitch=.65;demo.yaw=.25;demo._update_camera();demo.set_process(false);demo.town.clear_preview()
	var moment:Node=demo.find_child("RiverSeasonMoment",true,false)
	if moment!=null:moment.set_process(false)
	var poem:Label=demo.find_child("SeasonMomentPoem",true,false)
	if poem!=null:poem.hide()
	for phase in range(3):demo._set_light_phase(phase);await settle();await capture("mixed_row_phase_"+str(phase))
	demo.set_process(true)
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal default save unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("MIXED_DETAIL_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
