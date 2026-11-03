extends "res://tools/check_creation_three_road_modes_live.gd"
const Shore=preload("res://tools/fixtures/city_creation_shore_road_fixture.gd")
const Bed=preload("res://scripts/visual/city_creation_shore_road_bed.gd")
const OldBanks=preload("res://tools/fixtures/city_creation_bridge_banks_fixture.gd")
const Side=preload("res://tools/fixtures/city_creation_side_shore_fixture.gd")
func bin_mesh(mesh:MeshInstance3D,bins:Dictionary,bounds:Rect2)->void:
	var faces:=mesh.mesh.get_faces()
	for i in range(0,faces.size(),3):
		var a:Vector3=mesh.global_transform*faces[i];var b:Vector3=mesh.global_transform*faces[i+1];var c:Vector3=mesh.global_transform*faces[i+2]
		var box:=Rect2(Vector2(a.x,a.z),Vector2.ZERO).expand(Vector2(b.x,b.z)).expand(Vector2(c.x,c.z))
		if not box.intersects(bounds,true):continue
		for z in range(floori(box.position.y),floori(box.end.y)+1):
			for x in range(floori(box.position.x),floori(box.end.x)+1):
				var key:=Vector2i(x,z)
				if not bins.has(key):bins[key]=[]
				bins[key].append([a,b,c])
func bin_height(bins:Dictionary,at:Vector2,wanted:float=NAN)->float:
	var best:=-INF
	for f:Array in bins.get(Vector2i(floori(at.x),floori(at.y)),[]):
		var a:Vector3=f[0];var b:Vector3=f[1];var c:Vector3=f[2];var ab:=Vector2(b.x-a.x,b.z-a.z);var ac:=Vector2(c.x-a.x,c.z-a.z);var denominator:=ab.cross(ac)
		if absf(denominator)<.0000001:continue
		var offset:=at-Vector2(a.x,a.z);var u:=offset.cross(ac)/denominator;var v:=ab.cross(offset)/denominator
		if u<-.00001 or v<-.00001 or u+v>1.00001:continue
		var y:float=a.y+(b.y-a.y)*u+(c.y-a.y)*v
		if not is_finite(best) or (is_nan(wanted) and y>best) or (not is_nan(wanted) and absf(y-wanted)<absf(best-wanted)):best=y
	return best
func geometry(id:String,label:String)->void:
	var root_road:Node3D=demo.town.road_roots[id];var bed:MeshInstance3D=root_road.get_node("ShoreRoadBed");var floor_mesh:MeshInstance3D=root_road.get_node("PromenadeSurface")
	var road:Dictionary=demo.state.roads.filter(func(r):return r.id==id)[0];var bounds:=Rect2(Vector2(road.points[0][0],road.points[0][1]),Vector2.ZERO)
	for p:Array in road.points:bounds=bounds.expand(Vector2(p[0],p[1]))
	bounds=bounds.grow(float(road.width)+.5)
	var floor_bins:Dictionary={};var bed_bins:Dictionary={};var ground_bins:Dictionary={}
	bin_mesh(floor_mesh,floor_bins,bounds);bin_mesh(bed,bed_bins,bounds)
	for mesh:MeshInstance3D in demo.town.terrain_surface.find_children("GroundMesh","MeshInstance3D",true,false):bin_mesh(mesh,ground_bins,bounds)
	var points:Array[Vector2]=[]
	for z in range(floori(bounds.position.y/.1),ceili(bounds.end.y/.1)+1):
		for x in range(floori(bounds.position.x/.1),ceili(bounds.end.x/.1)+1):points.append(Vector2(x,z)*.1)
	# Final production vertices and edge midpoints explicitly include every cap.
	var faces:=floor_mesh.mesh.get_faces()
	for i in range(0,faces.size(),3):
		for j in range(3):
			var a:Vector3=faces[i+j];var b:Vector3=faces[i+(j+1)%3];points.append(Vector2(a.x,a.z));points.append(Vector2((a.x+b.x)*.5,(a.z+b.z)*.5))
	var count:=0;var missing:=0;var maximum:=0.;var ground_missing:=0;var failures_at:Array=[]
	for at:Vector2 in points:
		if demo.state.water_clearance(at)>.5+float(road.width) or demo.state.water_clearance(at)<.025:continue
		var y:=bin_height(floor_bins,at)
		if not is_finite(y):continue
		count+=1;var supporting:=bin_height(bed_bins,at,y-.008)
		if not is_finite(supporting):missing+=1
		else:maximum=maxf(maximum,absf(supporting-(y-.008)))
		if (not is_finite(supporting) or absf(supporting-(y-.008))>.002) and failures_at.size()<8:failures_at.append({"at":at,"y":y,"bed":supporting,"clearance":demo.state.water_clearance(at)})
		var ground_y:=bin_height(ground_bins,at,demo.state.ground_height(at))
		if not is_finite(ground_y) or absf(ground_y-demo.state.ground_height(at))>.002:ground_missing+=1
	check(count>500 and missing==0 and maximum<.002,"entire visible paving grid, corners and round caps have touching full-width masonry "+label)
	check(ground_missing==0,"bed burial uses the actual published ground triangles "+label)
	var material:=bed.material_override as ShaderMaterial
	check(material!=null and material.get_shader_parameter("micro_normal_strength")>0.,"road bed uses existing stone micro normals and contact AO")
	facts.get_or_add("coverage",[]).append({"kind":label,"samples":count,"missing":missing,"max_gap":maximum,"ground_missing":ground_missing,"triangles":bed.mesh.get_faces().size()/3,"failures_at":failures_at})
func wet_regression()->void:
	await show(OldBanks.build("straight"),Vector2(3,0),"既有石桥水孔");quiet()
	var bounds:=Rect2(Vector2(-2,-2),Vector2(10,4));var bins:Dictionary={}
	for mesh:MeshInstance3D in demo.town.road_roots.r1.find_children("ShoreRoadBed","MeshInstance3D",true,false):bin_mesh(mesh,bins,bounds)
	var samples:=0;var filled:=0
	for x in range(-20,80):
		for z in range(-8,9):
			var at:=Vector2(x,z)*.1
			if demo.state.water_clearance(at)>=-.05:continue
			samples+=1
			if is_finite(bin_height(bins,at)):filled+=1
	check(samples>100 and filled==0,"actual old bridge wet footprint receives no new filled masonry")
	var wall:MeshInstance3D=demo.town.road_roots.r1.get_node("RoadCutFillMasonry");var contacts:=OldBanks.measure(demo.state.road_profile(demo.state.roads[0]),wall.get_meta("sections"))
	check(contacts.contacts.size()==4 and contacts.max_gap_m<.0001 and contacts.max_vertical_gap_m<.0001,"four original bridge-bank contacts remain joined")
	await capture("old_bridge_open");facts.wet_bridge={"samples":samples,"filled":filled,"contacts":contacts}
	var f:=Side.build("gap");check(f.ok,"actual stepping gap regression scene");await show(f.city,Vector2(-24,-21),"汀步湿缝");quiet();await physics_frame
	var run:Dictionary=demo.state.road_profile(demo.state.roads[1]).stepping_runs[0];var checked:=0;var closed:=0
	for i in range(1,run.stones.size()):
		var at:Vector2=(Vector2(run.stones[i-1].at)+Vector2(run.stones[i].at))*.5
		if demo.state.water_clearance(at)>=-.05:continue
		checked+=1;var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,3.,at.y),Vector3(at.x,-2.,at.y),2))
		if not hit.is_empty() and float(hit.position.y)>-.16:closed+=1
	check(checked>0 and closed==0,"new shore bed does not close the actual physical inter-stone gaps")
	facts.stepping_gaps={"samples":checked,"closed":closed};await capture("stepping_gaps_open")
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();road_tool=demo.get_meta("road_tool")
	for kind:String in ["straight","bend","junction","middle_pond","slope"]:
		var yaw:=.4 if kind in ["bend","junction"] else 0.;var f:=Shore.build(kind,yaw,false);check(f.ok,"public shore road scene "+kind)
		await show(f.city,Vector2(-28,-21),kind);quiet();demo.life.set_process(false)
		demo.focus=Vector3(-28,.3,-21);demo.zoom=18.;demo.pitch=.85;demo.yaw=0.;demo._update_camera();await settle()
		var before:Dictionary=demo.state.snapshot();var history:int=demo.state._undo.size();var signature:int
		if kind=="straight":
			demo.select_tool(2);await ui_click(demo.tactile_dock.road_palette.heads.RoadStyle);await ui_click(demo.tactile_dock.button_for("RoadStyle",1));await key(KEY_2);await click_world(f.points[0]);await motion(f.points[-1]);await settle()
			check(road_tool.valid.ok and demo.town.preview.has_meta("shore_bed_signature"),"native straight-road gesture displays actual shore support")
			signature=demo.town.preview.get_meta("shore_bed_signature",0);await capture("native_preview")
			check(demo.state.snapshot()==before and demo.state._undo.size()==history,"native bed preview does not consume author IDs or history")
			await click_world(f.points[-1]);await settle()
		else:
			var valid:Dictionary=demo.state.preview_road(f.points,"promenade","none");check(valid.ok,"actual complete candidate "+kind)
			demo.set_process(false);demo.town.preview_road(valid.points,true,valid.width,valid.bridge,valid.style)
			signature=demo.town.preview.get_meta("shore_bed_signature",0);check(signature!=0 and demo.state.snapshot()==before,"candidate support is read-only "+kind)
			facts.get_or_add("preview_ms",[]).append(demo.town.preview.get_meta("shore_bed_ms"));await capture(kind+"_preview")
			var result:Dictionary=demo.state.add_road(f.points,"promenade","none");demo.set_process(true);demo._after_edit(result,"road");await settle();check(result.ok,"public shore road commit "+kind)
		quiet();demo.life.set_process(false);demo.select_tool(0);await physics_frame
		var mesh:MeshInstance3D=demo.town.road_roots[f.road_id].get_node("ShoreRoadBed")
		check(mesh.get_meta("bed_signature")==signature,"preview and asynchronous committed shore bed are identical "+kind)
		geometry(f.road_id,kind)
		if kind=="straight":
			var at:=Shore.point(Vector2(0,-1.925),0.);var height:float=lerpf(demo.state.ground_height(at),demo.state.street_height(Shore.point(Vector2(0,-1.05),0.)),.65)
			var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,height,at.y-.4),Vector3(at.x,height,at.y+.2),2))
			check(not hit.is_empty() and hit.collider.name=="ShoreRoadBedGroundPick","actual water-facing masonry is visible to the real collision ray")
		var saved:Dictionary=demo.state.snapshot();var expected:int=mesh.get_meta("bed_signature")
		demo.focus=Vector3(-28,.1,-21.4);demo.zoom=12.;demo.pitch=.48;demo.yaw=PI;demo._update_camera();await settle();await capture(kind+"_bed")
		await key(KEY_Z,true);await settle();quiet();check(not demo.town.road_roots.has(f.road_id),"native Undo removes the complete bed and road "+kind)
		await key(KEY_Y,true);await settle();quiet();check(demo.town.road_roots[f.road_id].get_node("ShoreRoadBed").get_meta("bed_signature")==expected,"native Redo restores exact shore support "+kind)
		var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(saved))).ok,"isolated shore road cold restore")
		await show(cold,Vector2(-28,-21),"路床冷读");quiet();check(demo.town.road_roots[f.road_id].get_node("ShoreRoadBed").get_meta("bed_signature")==expected,"independent cold publication equals incremental bed "+kind)
	await wet_regression()
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("SHORE_ROAD_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
