extends RefCounted
const Fixture=preload("res://tools/fixtures/city_creation_alpine_fixture.gd")
const Choice=preload("res://scripts/world/city_creation_architecture_choice.gd")
const Live=preload("res://tools/fixtures/city_creation_alpine_live.gd")
static func capture(demo, out: String, driver)->Dictionary:
	var data:=Fixture.build();var city:RefCounted=data.city;var checks:Dictionary={};var signatures:Dictionary={}
	for index in range(6):
		assert(city.set_house_architecture(data.flat[index],Choice.ALPINE[index]).ok)
		if index in [3,4]:assert(city.add_cell(data.flat[index],0,0,1).ok)
	demo._after_edit(demo.state.restore(city.snapshot()),"history");await Live.settle(demo)
	demo.life.set_process(false);demo.get_meta("inspiration_draft").poll();demo.get_meta("vignette_journey").poll()
	var voices:=Live.audio_identity(demo);var saved:Dictionary=demo.state.snapshot();var picks:=true;var images:=0
	demo.ui_layer.hide();demo.yaw=.58
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		demo.get_tree().root.size=size
		for index in range(6):
			var id:String=data.flat[index];var house:Dictionary=demo.town._house_record(id)
			var records:Array=demo.town.house_roots[id].get_meta("modern_roofs")
			signatures[id]=records;checks["published_"+Choice.ALPINE[index]]=records.all(func(r):return r.alpine_kind==index)
			demo.focus=Vector3(house.origin[0],1.6,house.origin[1]);demo.zoom=10.;demo.pitch=.65;demo._update_camera()
			for phase in range(3):
				demo._set_light_phase(phase);if await Live.shot(demo,out,"choice_%d_%s_%d"%[size.x,Choice.ALPINE[index],phase]):images+=1
			for angle:int in [5,10,15]:
				demo._set_light_phase(0);demo.pitch=deg_to_rad(angle);demo._update_camera()
				if await Live.shot(demo,out,"choice_%d_%s_low%d"%[size.x,Choice.ALPINE[index],angle]):images+=1
			var at:=Vector3(house.origin[0],0,house.origin[1]);await demo.get_tree().physics_frame
			var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(at+Vector3.UP*12,at+Vector3.UP*.5,1))
			picks=picks and not hit.is_empty() and hit.collider.get_meta("house_id","")==id
	checks.native_images=images==72;checks.roof_pick=picks;checks.readonly_views=demo.state.snapshot()==saved
	var bridge:Node3D=demo.town.house_roots[data.flat[3]].find_child("ModernSkybridge_*",true,false)
	checks.actual_twin_airbridge=bridge!=null and not demo.town.house_roots[data.flat[3]].get_meta("skybridges",[]).is_empty()
	if bridge!=null:
		var real:Array=demo.town.house_roots[data.flat[3]].get_meta("skybridges")
		var mid:Vector2=(real[0].a+real[0].b)*.5;await demo.get_tree().physics_frame
		var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(mid.x,.7,mid.y-1),Vector3(mid.x,.7,mid.y+1),1))
		checks.actual_bridge_underpass=hit.is_empty()
	demo.ui_layer.show();demo.select_tool(0);var id:String=data.flat[3];var house:Dictionary=demo.town._house_record(id)
	demo.focus=Vector3(house.origin[0],1.6,house.origin[1]);demo.zoom=22.;demo.pitch=.8;demo._update_camera()
	var pop=demo.spatial_popover;pop.open_for_house(id);await demo.get_tree().create_timer(.3).timeout
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:
		demo.get_tree().root.size=size;await Live.settle(demo);pop.refresh();await demo.get_tree().process_frame
		checks["compass_fits_%d"%size.x]=pop.ring.placement_ok and pop.architecture_button.caption=="全景山居"
		await RenderingServer.frame_post_draw;demo.get_tree().root.get_texture().get_image().save_png(out+"/choice_compass_%d.png"%size.x)
	await driver.click(pop.architecture_button)
	checks.real_style_click=demo.town._house_record(id).architecture=="twin_gable" and demo.town.house_roots[id].get_meta("modern_roofs")[0].alpine_kind==4
	await _key(demo,KEY_Z);checks.native_undo=demo.town._house_record(id).architecture=="panorama" and demo.town.house_roots[id].get_meta("modern_roofs")==signatures[id]
	await _key(demo,KEY_Y);checks.native_redo=demo.town._house_record(id).architecture=="twin_gable"
	var path:=out+"/architecture_city.json";checks.atomic_save=demo.state.save_city(path).ok
	var snapshot:Dictionary=demo.state.snapshot();var restored:Dictionary=demo.state.restore(JSON.parse_string(FileAccess.get_file_as_string(path)))
	demo._after_edit(restored,"history");await Live.settle(demo)
	checks.disk_restore=restored.ok and demo.state.snapshot()==snapshot and demo.town.house_roots[id].get_meta("modern_roofs")[0].alpine_kind==4
	checks.audio_identity=Live.audio_identity(demo)==voices
	var result:={"ok":checks.values().all(func(v):return v),"checks":checks,"images":images}
	FileAccess.open(out+"/architecture_choice.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));return result
static func _key(demo, code: Key)->void:
	for pressed:bool in [true,false]:
		var event:=InputEventKey.new();event.keycode=code;event.physical_keycode=code;event.ctrl_pressed=true;event.pressed=pressed
		demo.get_tree().root.push_input(event);await demo.get_tree().process_frame
	await Live.settle(demo)
