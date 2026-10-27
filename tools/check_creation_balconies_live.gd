extends "res://tools/check_creation_hinged_wing_live.gd"
const Balcony=preload("res://scripts/world/city_creation_balcony_plan.gd")
const Visits=preload("res://scripts/world/city_creation_balcony_visits.gd")
func ray(a:Vector3,b:Vector3)->Dictionary:return demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(a,b,1))
func verify_route(resident:Dictionary,host:String,tag:String)->void:
	var waypoints:Array[Vector3]=resident.balcony_visit.path;var path:Array[Vector3]=[waypoints[1]]
	for i in range(2,waypoints.size()):
		var steps:=ceili(waypoints[i-1].distance_to(waypoints[i])/.04)
		for j in range(1,steps+1):path.append(waypoints[i-1].lerp(waypoints[i],float(j)/steps))
	var supported:=0;var overlaps:Array=[];var missing_support:Array=[];var capsule:=CapsuleShape3D.new();capsule.radius=.075;capsule.height=.48
	var entry_samples:=ceili(waypoints[0].distance_to(waypoints[1])/.04)
	for i in range(entry_samples+1):
		var at:=waypoints[0].lerp(waypoints[1],float(i)/entry_samples);var query:=PhysicsShapeQueryParameters3D.new();query.shape=capsule;query.transform=Transform3D(Basis.IDENTITY,at+Vector3.UP*.24);query.collision_mask=1
		var blocked:Array=demo.get_world_3d().direct_space_state.intersect_shape(query,4)
		if not blocked.is_empty():overlaps.append({"entry":i,"at":at,"by":blocked.map(func(hit):return str(hit.collider.get_path()))})
	for i in range(1,path.size()):
		var at:Vector3=path[i];var floor_hit:=ray(at+Vector3.UP*.04,at-Vector3.UP*.22)
		if not floor_hit.is_empty() and floor_hit.collider.get_meta("house_id","")==host:supported+=1
		else:missing_support.append({"i":i,"at":at})
		var query:=PhysicsShapeQueryParameters3D.new();query.shape=capsule;query.transform=Transform3D(Basis.IDENTITY,at+Vector3.UP*.24);query.collision_mask=1
		var blocked:Array=demo.get_world_3d().direct_space_state.intersect_shape(query,4)
		if not blocked.is_empty():overlaps.append({"i":i,"at":at,"by":blocked.map(func(hit):return str(hit.collider.get_path()))})
	facts[tag]={"points":path.size()-1,"floor_hits":supported,"entry_body_samples":entry_samples+1,"capsule_overlaps":overlaps,"missing_support":missing_support}
	check(supported==path.size()-1 and overlaps.is_empty(),"every actual stair waypoint has real support and body clearance through both portals")
func run()->void:
	OUT="res://验证记录/M64/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	var city:=State.new();city.initialize_empty()
	for at:Vector2 in [Vector2(-25,-12),Vector2(-20,-12),Vector2(-15,-12),Vector2(-10,-12)]:
		var result:=city.add_house(at);check(result.ok,"actual facade household");var id:=str(result.house_id);city.houses[-1].style="timber";check(city.add_cell(id,0,0,1).ok,"real second floor")
	city.add_road([Vector2(-28,-9),Vector2(-7,-9)])
	for x:float in [-25.,-20.,-15.,-10.]:city.add_road([Vector2(x,-11),Vector2(x,-9)])
	for i in range(4):check(Balcony.set_mode(city,"h"+str(i+1),i+1).ok,"author each actual facade mode")
	await show(city,Vector2(-18,-12),"外挑与阳台街坊");quiet();demo.select_tool(0);demo.house_module_mode=false
	demo.focus=Vector3(-18,1.8,-12);demo.zoom=21.;demo.pitch=.5;demo.yaw=.12;demo._update_camera();await settle()
	check(DisplayServer.get_name()!="headless","native OpenGL window")
	for i in range(4):check(demo.town.house_roots["h"+str(i+1)].has_meta("organic_facade"),"actual facade publishes with its host "+str(i+1))
	await capture("all_four_facades")
	for i in range(4):
		var id:="h"+str(i+1);var h:=record_house(id);var p:=Balcony.plan(demo.state,h)
		demo.focus=Vector3(h.origin[0],1.8,h.origin[1]+.5);demo.zoom=5.5;demo.yaw=-.3;demo.pitch=.42;demo._update_camera();await capture("facade_close_"+str(i+1))
		var portal_x:=.46 if i==3 else 0.;var center:=Balcony.world(h,p,Vector3(portal_x,2.5,1.05));var inside:=Balcony.world(h,p,Vector3(portal_x,2.5,.7));var hit:=ray(center,inside)
		check(hit.is_empty(),"real cut upper wall portal is open "+str(i+1))
		if i<2:
			for x:float in [-.74,.74]:
				var side_a:=Balcony.world(h,p,Vector3(x+signf(x)*.16,2.5,1.04));var side_b:=Balcony.world(h,p,Vector3(x-signf(x)*.16,2.5,1.04));var glass:=ray(side_a,side_b)
				check(not glass.is_empty() and glass.collider.get_meta("house_id","")==id,"both real exterior oriel sides are closed and carry the host")
		var deck:=Balcony.world(h,p,Vector3(.2,1.9,1.10));var floor_hit:=ray(deck+Vector3.UP*.4,deck-Vector3.UP*.2)
		check(not floor_hit.is_empty() and floor_hit.collider.get_meta("house_id","")==id,"slab and oriel carry actual host picking identity")
	# Native same seal cycle, transaction and undo at both sizes.
	await select_house("h1");var count:int=demo.state._undo.size();await ui_click(stamp());await settle()
	check(record_house("h1").get("overhang",0)==2 and demo.state._undo.size()==count+1,"native leaf moves box overhang to six corner oriel atomically")
	await key(KEY_Z,true);await settle();check(record_house("h1").get("overhang",0)==1,"native Undo restores actual overhang")
	await key(KEY_Y,true);await settle();check(record_house("h1").get("overhang",0)==2,"native Redo restores actual oriel")
	await ui_click(stamp());await settle();check(record_house("h1").get("balcony_arc",0)==1,"native leaf grows actual semicircular balcony")
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size;await settle();demo.spatial_popover.refresh();await settle();check(stamp().is_visible_in_tree() and demo.spatial_popover.ring.placement_ok,"single stamp fits actual upper host at "+str(size.x));await capture("balcony_stamp_"+str(size.x))
	root.size=Vector2i(1440,900);demo.spatial_popover.close();await settle()
	# Drive the production resident tick, checking every physical stair segment.
	demo.life._sync();demo.life.set_process(false);demo.set_process(false)
	var resident:Dictionary={}
	for row:Dictionary in demo.life.residents:
		if str(row.home_id)=="h3":resident=row;break
	check(not resident.is_empty(),"actual existing resident belongs to the balcony host")
	if not resident.is_empty():
		facts.resident_before={"paused":resident.paused,"point":resident.node.position,"entrance":demo.life.selected_entrances.get("h3",{}),"plans":Visits.plans(demo.life).keys()}
		var raised:=0;var discontinuity:=0.;var prior:Vector3=resident.node.position;var stair_hits:=0
		for frame in range(700):
			demo.life.time+=.05;demo.life._tick_citizen(resident,.05,.04,false)
			var point:Vector3=resident.node.position;discontinuity=maxf(discontinuity,point.distance_to(prior));prior=point
			if point.y>1.:raised+=1
			if resident.get("balcony_visit",{}).get("phase","")=="listen":break
		check(raised>10 and resident.node.get_meta("balcony_listening",false) and discontinuity<.04,"production resident walks continuously up both actual flights and listens at rail")
		facts.resident={"point":resident.node.position,"raised_frames":raised,"max_step":discontinuity,"visit":resident.get("balcony_visit",{}).duplicate(true),"activity":resident.node.get_meta("visible_activity","")}
		verify_route(resident,"h3","physical_route")
		demo.focus=resident.node.position+Vector3(0,.1,-.35);demo.zoom=3.7;demo.yaw=-.45;demo.pitch=.35;demo._update_camera();await capture("real_resident_listening")
		var checkpoint:Dictionary=demo.life._resident_checkpoint(resident);check(Vector2(checkpoint.position[0],checkpoint.position[1]).distance_to(Vector2(resident.balcony_visit.entry.x,resident.balcony_visit.entry.z))<.001,"save checkpoint normalizes transient visit at its real ground entrance")
		for frame in range(700):demo.life.time+=.05;demo.life._tick_citizen(resident,.05,.04,false)
		check(not resident.has("balcony_visit") and resident.node.position.y<.5,"actual resident descends both flights back to its original doorway")
	for row:Dictionary in demo.life.residents:
		if str(row.home_id)!="h4":continue
		for frame in range(700):
			demo.life.time+=.05;demo.life._tick_citizen(row,.05,.04,false)
			if row.get("balcony_visit",{}).get("phase","")=="listen":break
		check(row.node.get_meta("visible_activity","")=="listening" and row.node.get_meta("balcony_listening",false),"actual corner balcony resident reaches the rail in listening pose")
		if row.has("balcony_visit"):
			verify_route(row,"h4","corner_physical_route");demo.focus=row.node.position+Vector3(0,.1,-.35);demo.zoom=3.7;demo.yaw=-.65;demo.pitch=.35;demo._update_camera();await capture("corner_resident_listening")
			Visits.clear(demo.life,row)
			row.paused=false;row.destination_id=row.home_id;row.index=row.route.size();row.balcony_next=0.
			check(Visits.start(demo.life,row),"resident returning from an ordinary daily trip can also visit its home balcony")
			Visits.clear(demo.life,row)
	demo.set_process(true);demo.focus=Vector3(-20,1.8,-12);demo.zoom=7.;demo.yaw=.2;demo.pitch=.5;demo._update_camera();await settle();await select_house("h2")
	var old_root:int=demo.town.house_roots.h2.get_instance_id();await ui_click(demo.spatial_popover.swatches[2]);await settle()
	check(demo.town.house_roots.h2.get_instance_id()==old_root and demo.town.house_roots.h2.has_meta("organic_facade"),"palette fast path retains exact oriel geometry")
	await key(KEY_E);await settle();var rotated:=record_house("h2");var rotated_plan:=Balcony.plan(demo.state,rotated)
	var front:=Balcony.world(rotated,rotated_plan,Vector3(0,2.5,1.04));var inner:=Balcony.world(rotated,rotated_plan,Vector3(0,2.5,.7));var pick_at:=Balcony.world(rotated,rotated_plan,Vector3(.2,2.,1.1))
	var rotated_floor:=ray(pick_at,pick_at-Vector3.UP*.4)
	check(absf(Frame.yaw(rotated))>1.5 and ray(front,inner).is_empty() and not rotated_floor.is_empty() and rotated_floor.collider.get_meta("house_id","")=="h2","native90degree rotation carries true portal, oriel slab and host picking")
	await capture("rotated_oriel_palette")
	var choice=preload("res://scripts/world/city_creation_architecture_choice.gd")
	var change:Dictionary=choice.set_choice(demo.state,"h2","rotunda");check(change.ok,"switch actual special prototype with dormant facade preference");demo._after_edit(change,"room");await settle();demo.spatial_popover.refresh();await settle()
	check(record_house("h2").get("overhang",0)==2 and not demo.town.house_roots.h2.has_meta("organic_facade") and stamp().caption=="原貌","special rotunda keeps its silhouette and can clear dormant facade")
	await ui_click(stamp());await settle();check(not record_house("h2").has("overhang"),"native leaf clears unsupported facade preference")
	await key(KEY_Z,true);await settle();check(record_house("h2").get("overhang",0)==2,"Undo restores dormant facade preference")
	change=choice.set_choice(demo.state,"h2","townhouse");demo._after_edit(change,"room");await settle();check(demo.town.house_roots.h2.has_meta("organic_facade"),"return to supported street house restores the actual oriel")
	facts.master=await Probe.record(OUT+"/balcony_neighborhood_Master.wav",3.2);check(facts.master.ok,"actual facade neighborhood Master without clipping")
	var saved:Dictionary=demo.state.snapshot();var reader:=State.new();check(reader.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok,"actual facade scene cold restores")
	await show(reader,Vector2(-18,-12),"外挑街坊冷读");quiet();demo.select_tool(0);demo.house_module_mode=false;await settle()
	check(demo.state.houses==saved.houses and demo.town.house_roots.h4.has_meta("organic_facade"),"cold publication preserves original rooms plus true270degree balcony")
	facts.geometry=round_mesh_stats("h4");facts.authored=demo.state.houses.duplicate(true)
	var detail_meshes:Array[MeshInstance3D]=[]
	for mesh:MeshInstance3D in demo.town.house_roots.h4.find_children("*","MeshInstance3D",true,false):
		if mesh.get_meta("balcony_rail",false):detail_meshes.append(mesh)
	check(not detail_meshes.is_empty(),"open rail detail keeps its separate tag through actual material batching")
	demo.zoom=8.;demo._update_camera();await settle();check(detail_meshes.all(func(mesh):return mesh.visible),"real near orthographic view draws open rails despite42m camera distance")
	demo.zoom=32.;demo._update_camera();await settle();check(detail_meshes.all(func(mesh):return not mesh.visible),"32m overview hides fine ironwork without deleting collisions")
	await capture("rail_far32m")
	demo.zoom=8.;demo._update_camera();await settle();check(detail_meshes.all(func(mesh):return mesh.visible),"return near restores exact original rail batches")
	demo.spatial_popover.close();demo.focus=Vector3(-12.5,1.8,-11.6);demo.zoom=8.;demo.yaw=-.4;demo.pitch=.45;demo._update_camera()
	for phase in range(3):demo._set_light_phase(phase);await settle();await capture("balcony_day_dusk_night_"+str(phase))
	await finish(personal,voices)
