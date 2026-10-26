extends "res://tools/check_creation_three_road_modes_live.gd"
const Form=preload("res://scripts/world/city_creation_organic_form.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
class FrameProbe extends Node:
	var samples:Array[float]=[]
	var last:=0
	func _process(_delta:float)->void:
		var now:=Time.get_ticks_usec()
		if last!=0:samples.append(float(now-last)/1000.)
		last=now
func record_house(id:String)->Dictionary:return demo.town._house_record(id)
func body_ray(house:Dictionary,at:Vector2)->Dictionary:
	var a:Vector3=Frame.world3(house,Vector3(float(house.origin[0])+at.x,float(house.get("base_y",0.))+1.2,float(house.origin[1])+at.y))
	var query:=PhysicsRayQueryParameters3D.create(a,a-Vector3.UP*.6,1);query.hit_from_inside=true
	return demo.get_world_3d().direct_space_state.intersect_ray(query)
func roof_ray(house:Dictionary,at:Vector2)->Dictionary:
	var a:Vector3=Frame.world3(house,Vector3(float(house.origin[0])+at.x,float(house.get("base_y",0.))+6.,float(house.origin[1])+at.y))
	return demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(a,Vector3(a.x,float(house.get("base_y",0.))+1.71,a.z),1))
func select_house(id:String)->void:
	var house:=record_house(id);var p:Vector3=Frame.world3(house,Vector3(house.origin[0],float(house.get("base_y",0.))+1.85,house.origin[1]));var position:Vector2=demo.camera.unproject_position(p)
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.device=92;event.position=position;event.global_position=position;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;root.push_input(event);await process_frame
	await settle();check(demo.spatial_popover.target_house_id==id,"native roof click selects actual host "+id)
func stamp()->Button:return demo.spatial_popover.card.find_child("OrganicCarvingStamp",true,false) as Button
func round_mesh_stats(id:String)->Dictionary:
	var node:Node3D=demo.town.house_roots[id];var surfaces:=0;var triangles:=0;var walls:=0;var shapes:=0
	for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
		surfaces+=mesh.mesh.get_surface_count();triangles+=mesh.mesh.get_faces().size()/3
		if mesh.material_override is ShaderMaterial and mesh.material_override.get_meta("creation_wall_batch",false):walls+=1
	for shape:CollisionShape3D in node.find_children("*","CollisionShape3D",true,false):
		if shape.shape is ConvexPolygonShape3D or shape.shape is ConcavePolygonShape3D:shapes+=1
	return {"surfaces":surfaces,"triangles":triangles,"wall_batches":walls,"shapes":shapes,"corners":node.get_meta("organic_corners",{})}
func run()->void:
	OUT="res://验证记录/M62/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	var city:=State.new();city.initialize_empty()
	for at:Vector2 in [Vector2(-25,-15),Vector2(-20,-15),Vector2(-15,-15)]:check(city.add_house(at).ok,"authored corner house")
	check(city.add_road([Vector2(-29,-18),Vector2(-12,-18)]).ok,"real frontage street")
	for x:float in [-25.,-20.,-15.]:check(city.add_road([Vector2(x,-16.),Vector2(x,-18)]).ok,"actual terminal approaches original door")
	check(city.add_cell("h2",1,0,0).ok and city.add_cell("h2",0,0,1).ok and city.add_cell("h2",1,0,1).ok,"real two-storey joined wing")
	check(Form.set_corner(city,"h2",2).ok and Form.set_corner(city,"h3",1).ok,"rounded and chamfer comparison homes")
	await show(city,Vector2(-21,-15),"有机微雕街坊");quiet();demo.select_tool(0);demo.house_module_mode=false
	demo.focus=Vector3(-21,1.,-15);demo.zoom=14.;demo.pitch=.62;demo.yaw=.45;demo._update_camera();await settle()
	check(DisplayServer.get_name()!="headless" and demo.music.audio_report.get("bank_source","")=="precompiled","actual GL with unchanged precompiled PCM bank")
	check(not body_ray(record_house("h1"),Vector2(.88,.88)).is_empty(),"old straight body really occupies its original pointed corner")
	facts.authored=demo.state.houses.duplicate(true);facts.connections=demo.life.connected_houses.duplicate(true)
	var baseline:=round_mesh_stats("h1");await capture("straight_round_chamfer_street")
	await select_house("h1");check(stamp()!=null and stamp().is_visible_in_tree() and not stamp().disabled,"one actual micro-carving seal beside era and prototype")
	var undo_count:int=demo.state._undo.size();var before:=Time.get_ticks_msec();var frame_probe:=FrameProbe.new();root.add_child(frame_probe)
	await ui_click(stamp());await settle()
	frame_probe.samples.sort();facts.edit_frames={"count":frame_probe.samples.size(),"max_ms":frame_probe.samples[-1],"p95_ms":frame_probe.samples[int(frame_probe.samples.size()*.95)]};frame_probe.queue_free()
	check(record_house("h1").get("corner_bevel",0)==2 and demo.state._undo.size()==undo_count+1,"native stamp authors one rounded transaction")
	facts.round_edit_ms=Time.get_ticks_msec()-before;facts.original=baseline;facts.rounded=round_mesh_stats("h1");facts.joined=round_mesh_stats("h2");facts.joined_meta={"joined":demo.town.house_roots.h2.get_meta("joined_roof",false),"era":demo.state.house_era(record_house("h2")),"body_names":demo.town.house_roots.h2.find_children("*","StaticBody3D",true,false).map(func(node):return str(node.name)),"patches":demo.town.building_context.roof_patches("h2").size()}
	check(demo.town.house_roots.h1.has_meta("organic_corners") and facts.rounded.wall_batches>0 and facts.rounded.shapes>0,"actual published cut mesh, micro-normal AO batches and shaped collisions")
	check(body_ray(record_house("h1"),Vector2(.88,.88)).is_empty() and not body_ray(record_house("h1"),Vector2(.82,.82)).is_empty(),"actual collision removes pointed corner and retains the rounded wall")
	facts.roof_rays={"outside":str(roof_ray(record_house("h1"),Vector2(.96,.96))),"inside":str(roof_ray(record_house("h1"),Vector2(.78,.78)))}
	check(roof_ray(record_house("h1"),Vector2(.96,.96)).is_empty() and not roof_ray(record_house("h1"),Vector2(.78,.78)).is_empty(),"actual roof picking follows the cut eave, no square AABB corner remains")
	demo.life._sync();facts.real_entrances=demo.state.house_entrances("h1");facts.connections_after=demo.life.connected_houses.duplicate(true)
	check(demo.life.house_connected("h1") and demo.life.house_connected("h2"),"original real doors and street routes remain connected")
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size;await settle();demo.spatial_popover.refresh();await settle()
		check(stamp().is_visible_in_tree() and demo.spatial_popover.ring.placement_ok,"roof seal layout clears the selected house at"+str(size.x))
		await capture("organic_stamp_"+str(size.x))
	root.size=Vector2i(1440,900);await settle()
	await key(KEY_Z,true);await settle();check(not record_house("h1").has("corner_bevel") and not demo.town.house_roots.h1.has_meta("organic_corners"),"native CtrlZ restores exact original shell")
	await key(KEY_Y,true);await settle();check(record_house("h1").get("corner_bevel",0)==2 and demo.town.house_roots.h1.has_meta("organic_corners"),"native CtrlY restores real rounded mesh")
	await ui_click(stamp());await settle();check(record_house("h1").get("corner_bevel",0)==1,"native second click makes actual chamfer")
	await capture("chamfer_selected")
	await ui_click(stamp());await settle();check(not record_house("h1").has("corner_bevel"),"native third click returns exact default field absence")
	await ui_click(stamp());await settle();await key(KEY_E);await settle()
	check(absf(Frame.yaw(record_house("h1")))>1.5 and body_ray(record_house("h1"),Vector2(.88,.88)).is_empty(),"native 90degree rotation transforms the cut collision with its host")
	var root_id:int=demo.town.house_roots.h1.get_instance_id();await ui_click(demo.spatial_popover.swatches[2]);await settle()
	check(record_house("h1").get("corner_bevel",0)==2 and demo.town.house_roots.h1.get_instance_id()==root_id,"native palette change retains cut mesh through existing color fast path")
	var choice=preload("res://scripts/world/city_creation_architecture_choice.gd")
	var changed:Dictionary=choice.set_choice(demo.state,"h1","rotunda");check(changed.ok,"public actual round hall prototype switch")
	demo._after_edit(changed,"room");await settle();demo.spatial_popover.refresh();await settle()
	check(record_house("h1").get("corner_bevel",0)==2 and not demo.town.house_roots.h1.has_meta("organic_corners") and stamp().caption=="原貌","dedicated rotunda keeps its actual round architecture and authored preference dormant")
	await ui_click(stamp());await settle();check(not record_house("h1").has("corner_bevel"),"unsupported prototype can clear dormant carving through the same actual seal")
	await key(KEY_Z,true);await settle();check(record_house("h1").get("corner_bevel",0)==2,"dormant preference clear is undoable")
	changed=choice.set_choice(demo.state,"h1","townhouse");check(changed.ok,"public return to ordinary street house")
	demo._after_edit(changed,"room");await settle();check(demo.town.house_roots.h1.has_meta("organic_corners") and record_house("h1").corner_bevel==2,"supported prototype restores the retained carving preference")
	var saved:Dictionary=demo.state.snapshot();var copy:=State.new();check(copy.restore(JSON.parse_string(JSON.stringify(saved))).ok,"rounded plus chamfer and yaw JSON cold read")
	var frozen:Dictionary=copy.snapshot();await show(copy,Vector2(-21,-15),"圆角街坊冷读");quiet();demo.select_tool(0);demo.house_module_mode=false;await settle()
	check(demo.state.houses==frozen.houses and demo.town.house_roots.h1.has_meta("organic_corners") and demo.town.house_roots.h2.has_meta("organic_corners"),"cold publication retains both actual cut houses and original cells")
	demo.spatial_popover.close();demo.set_process(false);demo.town.clear_preview();demo.focus=Vector3(-25,.9,-15);demo.zoom=6.;demo.yaw=-.7;demo.pitch=.46;demo._update_camera();await capture("round_wall_eaves_close")
	facts.master=await Probe.record(OUT+"/rounded_neighborhood_Master.wav",3.2);check(facts.master.ok,"actual rounded neighborhood Master has no clipping")
	demo.focus=Vector3(-19,2.,-15);demo.zoom=8.;demo.yaw=.55;demo.pitch=.5;demo._update_camera();await capture("joined_rounded_upper_eaves")
	facts.published=demo.state.houses.duplicate(true)
	check(not roof_ray(record_house("h2"),Vector2(-.78,.78)).is_empty() and roof_ray(record_house("h2"),Vector2(-1.02,1.02)).is_empty(),"joined roof patches have true cut triangle picking")
	await finish(personal,voices)
