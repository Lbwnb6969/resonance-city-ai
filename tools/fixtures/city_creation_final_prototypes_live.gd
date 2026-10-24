extends RefCounted
## Rebuild all twelve real recipes with current shaders, routes and roof UI.
const Civic=preload("res://tools/fixtures/city_creation_civic_fixture.gd")
const Alpine=preload("res://tools/fixtures/city_creation_alpine_fixture.gd")
const Choice=preload("res://scripts/world/city_creation_architecture_choice.gd")
const Live=preload("res://tools/fixtures/city_creation_alpine_live.gd")
static func signature(demo,ids:Array)->Array:
	var result:Array=[]
	for id:String in ids:
		var root:Node3D=demo.town.house_roots[id];var marks:Array=[]
		for node:Node3D in root.find_children("*","Node3D",true,false):
			for key:String in ["neoclassical_kind","civic_archetype"]:
				if node.has_meta(key):marks.append([key,node.get_meta(key),node.transform])
		marks.sort_custom(func(a,b):return str(a)<str(b))
		result.append([id,marks,root.get_meta("modern_roofs",[]),root.get_meta("domes",[])])
	return result
static func capture(c,resolution:int)->Dictionary:
	var demo=c.demo;var out:String=c.out+"/twelve_prototypes";var checks:Dictionary={};var images:=0
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));c.tree.root.size=Vector2i(resolution,900 if resolution==1440 else 768)
	var voices:=Live.audio_identity(demo)
	var classical:=neoclassical_fixture()
	var alps:=Alpine.build()
	for i in range(6):
		assert(alps.city.set_house_architecture(alps.flat[i],Choice.ALPINE[i]).ok)
		if i in [3,4]:assert(alps.city.add_cell(alps.flat[i],0,0,1).ok)
	for group:Dictionary in [classical,{"city":alps.city,"ids":alps.flat,"keys":Choice.ALPINE}]:
		demo.journal.close_panel();demo.spatial_popover.close();demo._after_edit(demo.state.restore(group.city.snapshot()),"history");await Live.settle(demo)
		demo.life.set_process(false);demo.get_meta("inspiration_draft").poll();demo.get_meta("vignette_journey").poll();await Live.settle(demo)
		var before:Dictionary=demo.state.snapshot();var geometry:=signature(demo,group.ids)
		for i in range(6):
			var id:String=group.ids[i];var key:String=group.keys[i];var house:Dictionary=demo.town._house_record(id)
			demo.select_tool(0);demo.ui_layer.show();demo.camera.projection=Camera3D.PROJECTION_ORTHOGONAL
			demo.focus=Vector3(house.origin[0],1.7,house.origin[1]);demo.zoom=25.;demo.pitch=.8;demo.yaw=.62;demo._update_camera()
			demo.spatial_popover.open_for_house(id);await demo.get_tree().create_timer(.22).timeout;await Live.settle(demo)
			var pop=demo.spatial_popover
			checks["actual_published_caption_"+key]=pop.architecture_button.caption==Choice.label(key)
			checks["clear_roof_ui_"+key]=pop.ring.placement_ok and pop.ring.controls().all(func(p):return not p.get_global_rect().intersects(pop.ring.house_rect))
			demo.spatial_popover.close();demo.ui_layer.hide();demo.zoom=11.
			for phase:int in [0,1,2]:
				demo._set_light_phase(phase);demo.pitch=.58;demo._update_camera()
				if await Live.shot(demo,out,"prototype_%d_%s_%d"%[resolution,key,phase]):images+=1
			demo._set_light_phase(0);demo.pitch=deg_to_rad(10.);demo._update_camera()
			if await Live.shot(demo,out,"prototype_%d_%s_low10"%[resolution,key]):images+=1
			await c.tree.physics_frame;var at:=Vector3(house.origin[0],0,house.origin[1])
			var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(at+Vector3.UP*14,at+Vector3.UP*.5,1))
			checks["real_roof_pick_"+key]=not hit.is_empty() and hit.collider.get_meta("house_id","")==id
		checks["read_only_"+str(group.keys[0])]=demo.state.snapshot()==before
		var file:String=out+"/"+str(group.keys[0])+".json"
		checks["save_"+str(group.keys[0])]=demo.state.save_city(file).ok
		var restored:Dictionary=demo.state.restore(JSON.parse_string(FileAccess.get_file_as_string(file)))
		demo._after_edit(restored,"history");await Live.settle(demo)
		checks["cold_roundtrip_"+str(group.keys[0])]=restored.ok and demo.state.snapshot()==before and signature(demo,group.ids)==geometry
	demo.ui_layer.show();checks.images=images==48;checks.original_pool=Live.audio_identity(demo)==voices
	var result:={"ok":checks.values().all(func(v):return v),"checks":checks,"images":images,"resolution":resolution}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("FINAL_PROTOTYPES ",JSON.stringify(result));return result

static func neoclassical_fixture()->Dictionary:
	var data:=Civic.build();var city:RefCounted=data.city;var neo:Array=[]
	for x:float in [14.,22.,30.]:
		var built:Dictionary=city.add_house(Vector2(x,-14));assert(built.ok);neo.append(str(built.house_id))
	assert(city.add_cell(neo[1],1,0,0).ok)
	for x:int in [0,1]:assert(city.add_cell(neo[1],x,0,1).ok)
	for level in range(1,4):assert(city.add_cell(neo[2],0,0,level).ok)
	assert(city.add_road([Vector2(10,-11.5),Vector2(36,-11.5)] as Array[Vector2],"cobble").ok)
	assert(city.add_road([Vector2(28.3,-20),Vector2(28.3,-8)] as Array[Vector2],"cobble").ok)
	neo.append(data.court_ids[0]);neo.append(data.studio_ids[0]);neo.append(data.hall_ids[0])
	for i in range(6):assert(city.set_house_architecture(neo[i],Choice.NEO[i]).ok)
	return {"city":city,"ids":neo,"keys":Choice.NEO}
