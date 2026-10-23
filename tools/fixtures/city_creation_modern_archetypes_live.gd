extends RefCounted
const Fixture=preload("res://tools/fixtures/city_creation_modern_fixture.gd")
const Archetypes=preload("res://scripts/visual/city_creation_modern_archetypes.gd")
static func settle(demo:Node)->void:
	while demo.edit_pending() or demo._edit_ui_pending:await demo.get_tree().process_frame
	for i in range(8):await demo.get_tree().process_frame
static func shot(demo:Node,path:String)->void:
	demo.toast.hide();demo.toast_time=0.;await RenderingServer.frame_post_draw
	demo.get_tree().root.get_texture().get_image().save_png(path+".png")
static func capture(demo:Node,out:String)->Dictionary:
	var checks:Dictionary={};var city:RefCounted=Fixture.architecture();var tree:SceneTree=demo.get_tree()
	for i in range(12):
		var id:String=city.houses[i].id;city.set_house_era(id,"modern_eco")
		for level in range(1,1+i%3):
			if city.validate_add_cell(id,0,0,level).ok:city.add_cell(id,0,0,level)
	demo.life.set_process(false);demo.spatial_popover.close()
	demo._after_edit(demo.state.restore(city.snapshot()),"history");await settle(demo);demo.life.set_process(false)
	var representatives:Dictionary={};var signatures:Dictionary={};var finite:=true;var wall_count:=0;var glass_count:=0;var basin_count:=0
	for i in range(12):
		var house:Dictionary=demo.state.houses[i];var node:Node3D=demo.town.house_roots[house.id]
		signatures[house.id]=node.get_meta("modern_roofs",[])
		for record:Dictionary in signatures[house.id]:representatives[int(record.archetype)]={"house":house,"record":record}
		for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
			var material:Material=mesh.material_override
			if material.get_meta("creation_wall_batch",false):
				wall_count+=1;finite=finite and float(material.get_shader_parameter("micro_normal_strength"))>.02
			if material==demo.town.conservatory.ensure_roof_material():glass_count+=1
			if mesh.name=="EcoRoofBasin":basin_count+=1
			for point:Vector3 in mesh.mesh.surface_get_arrays(0)[Mesh.ARRAY_VERTEX]:finite=finite and point.is_finite()
	checks.four_actual_archetypes=representatives.size()==4
	checks.shared_lit_paper_and_finite_geometry=finite and wall_count>12
	checks.live_glass_and_water=glass_count>0 and basin_count>0
	demo.ui_layer.hide();demo.yaw=.6;demo.pitch=.72;demo.zoom=7.
	for kind:int in representatives:
		var entry:Dictionary=representatives[kind];var house:Dictionary=entry.house
		demo.focus=Vector3(house.origin[0],float(entry.record.roof_y)-.35,house.origin[1])
		for phase in range(3):
			demo._set_light_phase(phase);demo.pitch=.72;demo._update_camera();await tree.process_frame
			await shot(demo,out+"/modern_kind_%d_phase_%d"%[kind,phase])
		demo.pitch=deg_to_rad(10.);demo._update_camera();await tree.process_frame;await shot(demo,out+"/modern_kind_%d_low10"%kind)
	checks.night_skylight_consumes_real_light=demo.town.conservatory.ensure_roof_material().get_shader_parameter("evening")==1.
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		tree.root.size=size;demo.focus=Vector3(-10,2,-2);demo.zoom=28.;demo.pitch=.8;demo._update_camera()
		for phase in range(3):
			demo._set_light_phase(phase);await tree.process_frame;await shot(demo,out+"/modern_neighborhood_%d_%d"%[size.x,phase])
		demo.ui_layer.show();demo.focus=Vector3(city.houses[0].origin[0],2.8,city.houses[0].origin[1]);demo.zoom=16.;demo._update_camera()
		demo.spatial_popover.open_for_house(str(city.houses[0].id));await tree.create_timer(.3).timeout
		checks["ui_fits_%d"%size.x]=demo.spatial_popover.ring.placement_ok and Rect2(Vector2.ZERO,Vector2(size)).encloses(demo.spatial_popover.card.get_global_rect())
		await shot(demo,out+"/modern_ui_%d"%size.x);demo.spatial_popover.close();demo.ui_layer.hide()
	var target:String=city.houses[0].id
	demo._after_edit(demo.state.set_house_era(target,"pastoral"),"terrace");await settle(demo)
	checks.public_era_edit_removes_modern=not demo.town.house_roots[target].has_meta("modern_roofs")
	demo._after_edit(demo.state.undo(),"history");await settle(demo)
	checks.undo_reproduces_same_roof=demo.town.house_roots[target].get_meta("modern_roofs",[])==signatures[target]
	var saved:Dictionary=demo.state.snapshot();demo._after_edit(demo.state.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))),"history");await settle(demo)
	checks.reload_reproduces_all_roofs=true
	for id:String in signatures:checks.reload_reproduces_all_roofs=checks.reload_reproduces_all_roofs and demo.town.house_roots[id].get_meta("modern_roofs",[])==signatures[id]
	demo.ui_layer.show();demo.pitch=.8;demo._update_camera()
	var result:={"ok":checks.values().all(func(value):return value),"checks":checks,"representatives":representatives.keys(),"wall_batches":wall_count,"glass":glass_count,"basins":basin_count}
	FileAccess.open(out+"/modern_archetypes.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));return result
