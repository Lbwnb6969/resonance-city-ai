extends RefCounted
const Fixture=preload("res://tools/fixtures/city_creation_alpine_fixture.gd")
const Stamp=preload("res://scripts/ui/city_creation_postcard_stamp.gd")
static func settle(demo)->void:
	var tree:SceneTree=demo.get_tree();var end:=Time.get_ticks_msec()+45000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<end:await tree.process_frame
	for i in range(4):await tree.process_frame
	await tree.physics_frame
static func shot(demo,out:String,name:String)->bool:
	demo.toast.hide();demo.toast_time=0.;demo.town.clear_preview()
	var frame:Image=await Stamp.scene_frame(demo)
	return frame.save_png(out+"/"+name+".png")==OK
static func audio_identity(demo)->Array:
	var result:Array=demo.music.get_children().map(func(n):return n.get_instance_id())
	for key:String in demo.music.STEMS:
		var pcm:AudioStreamWAV=demo.music._original_streams[key]
		var digest:=HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(pcm.data)
		result.append([key,pcm.get_instance_id(),digest.finish().hex_encode()])
	return result
static func capture(demo,out:String)->Dictionary:
	var tree:SceneTree=demo.get_tree();var data:=Fixture.build();var city:RefCounted=data.city
	var checks:Dictionary={};var facts:Dictionary={}
	demo.life.set_process(false);demo.spatial_popover.close()
	demo._after_edit(demo.state.restore(city.snapshot()),"history");await settle(demo)
	var voice_ids:=audio_identity(demo)
	demo.get_meta("inspiration_draft").poll();demo.get_meta("vignette_journey").poll()
	var world:Dictionary=demo.state.snapshot();var signatures:Dictionary={};var representatives:Dictionary={}
	var paper:=0;var finite:=true;var shapes:=0;var supports:=0;var eco:Dictionary={};var glass:=0;var basins:=0
	for house:Dictionary in demo.state.houses:
		var root:Node3D=demo.town.house_roots[house.id];var records:Array=root.get_meta("modern_roofs",[]);signatures[house.id]=records.duplicate(true)
		for row:Dictionary in records:representatives[int(row.alpine_kind)]=house.id
		shapes+=root.find_children("AlpineRoofPick","CollisionShape3D",true,false).size()
		for mesh:MeshInstance3D in root.find_children("*","MeshInstance3D",true,false):
			if mesh.material_override.get_meta("creation_wall_batch",false):paper+=1;finite=finite and float(mesh.material_override.get_shader_parameter("micro_normal_strength"))>0
			if mesh.material_override==demo.town.conservatory.ensure_material(true) or mesh.material_override==demo.town.conservatory.ensure_roof_material():glass+=1
			if mesh.name=="EcoRoofBasin":basins+=1
			for point:Vector3 in mesh.mesh.surface_get_arrays(0)[Mesh.ARRAY_VERTEX]:finite=finite and point.is_finite()
		for node:Node3D in root.find_children("*","Node3D",true,false):
			if node.has_meta("roof_kind"):eco[int(node.get_meta("roof_kind"))]=house.id
			if node.has_meta("support_samples"):supports+=1
	checks.three_true_alpine_masses=representatives.size()==3
	checks.original_four_eco_objects=eco.size()==4 and glass>0 and basins>0
	checks.paper_finite_and_pickable=finite and paper>12 and shapes>=demo.state.houses.size()
	checks.actual_terrain_supports=supports>0
	var road:Dictionary=demo.state.roads.filter(func(r):return r.id==data.stairs)[0]
	checks.real_stone_stair_approach=not demo.state.road_profile(road).treads.is_empty()
	var chalet:Array=signatures[data.chalet]
	checks.joined_chalet_ridge=chalet.size()==3 and chalet[0].joined_ends==[false,true] and chalet[1].joined_ends==[true,true] and chalet[2].joined_ends==[true,false]
	var shots:Array=[]
	for kind:int in representatives:shots.append({"kind":"alpine%d"%kind,"id":representatives[kind],"low":true})
	for kind:int in eco:shots.append({"kind":"eco%d"%kind,"id":eco[kind],"low":false})
	demo.ui_layer.hide();demo.yaw=.58;var images:=0;var angle_ok:=true;var picks:=true
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		tree.root.size=size
		for row:Dictionary in shots:
			var house:Dictionary=demo.town._house_record(row.id)
			demo.focus=Vector3(house.origin[0],float(house.get("base_y",0.))+1.,house.origin[1]);demo.zoom=12. if row.id==data.chalet else 9.
			for phase in range(3):
				demo._set_light_phase(phase);demo.pitch=.68;demo._update_camera()
				if await shot(demo,out,"alpine_%d_%s_phase%d"%[size.x,row.kind,phase]):images+=1
			for angle:int in ([5,10,15] if row.low else [10]):
				demo._set_light_phase(0);demo.pitch=deg_to_rad(angle);demo._update_camera()
				angle_ok=angle_ok and absf(rad_to_deg(asin(demo.camera.global_basis.z.y))-angle)<.01
				if await shot(demo,out,"alpine_%d_%s_low%d"%[size.x,row.kind,angle]):images+=1
			var center:=Vector3(house.origin[0],float(house.get("base_y",0.)),house.origin[1])
			var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(center+Vector3(0,12,0),center+Vector3(0,.5,0),1))
			picks=picks and not hit.is_empty() and str(hit.collider.get_meta("house_id",""))==row.id
		var target:Dictionary=demo.town._house_record(representatives[0]);demo.focus=Vector3(target.origin[0],1.,target.origin[1]);demo.pitch=.8;demo.zoom=18.;demo._update_camera();demo.ui_layer.show()
		demo.spatial_popover.open_for_house(str(target.id));await tree.create_timer(.25).timeout
		checks["compass_fits_%d"%size.x]=demo.spatial_popover.ring.placement_ok
		await RenderingServer.frame_post_draw;tree.root.get_texture().get_image().save_png(out+"/alpine_compass_%d.png"%size.x)
		demo.spatial_popover.close();demo.ui_layer.hide()
	checks.actual_camera_angles=angle_ok;checks.real_roof_cell_picking=picks;checks.native_images=images==68
	checks.readonly_views=demo.state.snapshot()==world
	# Rebuild from the actual isolated world after a real era transaction/undo.
	var id:String=representatives[0]
	demo._after_edit(demo.state.set_house_era(id,"pastoral"),"terrace");await settle(demo)
	checks.era_changes_remove_alpine=not demo.town.house_roots[id].has_meta("modern_roofs")
	demo._after_edit(demo.state.undo(),"history");await settle(demo)
	checks.undo_restores_alpine=demo.town.house_roots[id].get_meta("modern_roofs",[])==signatures[id]
	var saved:Dictionary=demo.state.snapshot();checks.isolated_atomic_save=demo.state.save_city(out+"/alpine_city.json").ok
	var restored:Dictionary=demo.state.restore(JSON.parse_string(FileAccess.get_file_as_string(out+"/alpine_city.json")))
	demo._after_edit(restored,"history");await settle(demo)
	checks.disk_json_and_render=restored.ok and demo.state.snapshot()==saved
	for house_id:String in signatures:checks.disk_json_and_render=checks.disk_json_and_render and demo.town.house_roots[house_id].get_meta("modern_roofs",[])==signatures[house_id]
	var terrace:String=representatives[2]
	demo._after_edit(demo.state.add_cell(terrace,0,0,1),"room");await settle(demo)
	checks.upper_floor_keeps_ground_deck=demo.town.house_roots[terrace].find_children("TerrainSupportedDeck","Node3D",true,false).size()>0
	demo._after_edit(demo.state.undo(),"history");await settle(demo)
	checks.undo_floor_restores_original_recipe=demo.town.house_roots[terrace].get_meta("modern_roofs",[])==signatures[terrace]
	checks.original_fixed_audio_pool=audio_identity(demo)==voice_ids and demo.music._players.size()==12 and demo.music._effects.size()==4 and demo.music.spatial._names.size()==6 and demo.ambience.get_child_count()==2
	demo.ui_layer.show();demo.pitch=.8;demo._update_camera()
	facts={"images":images,"kinds":representatives,"eco_objects":eco,"paper_batches":paper,"roof_shapes":shapes,"decks":supports,"glass":glass,"basins":basins}
	var result:={"ok":checks.values().all(func(v):return v),"checks":checks,"facts":facts}
	FileAccess.open(out+"/alpine_live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));return result
