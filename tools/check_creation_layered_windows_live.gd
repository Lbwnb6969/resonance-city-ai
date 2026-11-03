extends "res://tools/check_creation_three_road_modes_live.gd"
const Fixture=preload("res://tools/fixtures/city_creation_layered_window_fixture.gd")
const Book=preload("res://scripts/ui/city_creation_prototype_book.gd")
func arrays()->Array:
	var result:Array=[]
	for mesh:MeshInstance3D in demo.town.house_roots.h1.find_children("*","MeshInstance3D",true,false):
		for i in range(mesh.mesh.get_surface_count()):
			var raw:Dictionary=RenderingServer.mesh_get_surface(mesh.mesh.get_rid(),i)
			var material:Material=mesh.material_override;var appearance:Array=[]
			if material is StandardMaterial3D:appearance=[material.albedo_color,material.get_meta("creation_facade_glass",-1)]
			elif material is ShaderMaterial:
				for parameter:String in ["albedo_color","roof_color","brick_color","surface_kind"]:appearance.append(material.get_shader_parameter(parameter))
			# Resource/node ids and response pivots vary; compare actual buffers and material colors.
			result.append(var_to_bytes([mesh.mesh.surface_get_arrays(i),raw.get("attribute_data",PackedByteArray()),appearance]).hex_encode().sha256_text())
	result.sort()
	return result
func visible_glass()->void:
	var house:Node3D=demo.town.house_roots.h1;var meshes:Array=house.find_children("*","MeshInstance3D",true,false);var rays:=0;var blocked:=0;var panes:=0;var blockers:Array=[]
	for node:Node3D in house.find_children("*","Node3D",true,false):
		if not node.has_meta("layered_window"):continue
		for hole:Dictionary in node.get_meta("layered_window").openings:
			for x:float in [float(hole.x)-.07,float(hole.x)+.07]:
				for y:float in [float(hole.bottom)+.04,float(hole.spring)-.03]:
					var start:Vector3=node.to_global(Vector3(x,y,.40));var finish:Vector3=node.to_global(Vector3(x,y,-.02));rays+=1
					for mesh:MeshInstance3D in meshes:
						if mesh.material_override.has_meta("creation_facade_glass"):continue
						var faces:=mesh.mesh.get_faces();var inverse:=mesh.global_transform.affine_inverse();var a:=inverse*start;var b:=inverse*finish
						for i in range(0,faces.size(),3):
							var hit:Variant=Geometry3D.segment_intersects_triangle(a,b,faces[i],faces[i+1],faces[i+2])
							if hit!=null:
								blocked+=1
								if blockers.size()<5:blockers.append({"mesh":str(mesh.name),"local_hit":node.to_local(mesh.to_global(hit)),"x":x,"y":y})
								break
			var target:Vector3=node.to_global(Vector3(hole.x+.07,hole.bottom+.08,-.035));var seen:=false
			for mesh:MeshInstance3D in meshes:
				if not mesh.material_override.has_meta("creation_facade_glass"):continue
				var inverse:=mesh.global_transform.affine_inverse();var a:Vector3=inverse*(target+node.global_basis.z*.1);var b:Vector3=inverse*(target-node.global_basis.z*.1);var faces:=mesh.mesh.get_faces()
				for i in range(0,faces.size(),3):
					if Geometry3D.segment_intersects_triangle(a,b,faces[i],faces[i+1],faces[i+2])!=null:seen=true;break
			if seen:panes+=1
	check(rays>0 and blocked==0 and panes==rays/4,"complete merged facade has clear window quadrants and actual glass behind every opening")
	facts.get_or_add("geometry",[]).append({"rays":rays,"blocked":blocked,"panes":panes,"blockers":blockers})
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var f:=Fixture.build("pastoral",.4,false);check(f.ok,"existing old townhouse before explicit sample choice");await show(f.city,Vector2(-28,-20),"深窗街屋样板");quiet();demo.life.set_process(false)
	demo.focus=Vector3(-28,1.4,-20);demo.zoom=7.;demo.pitch=.60;demo.yaw=.9;demo._update_camera();await settle()
	var old:=arrays();var original:Dictionary=demo.state.snapshot();var entrances:Array=demo.state.house_entrances("h1").duplicate(true)
	demo.select_tool(0);demo.spatial_popover.open_for_house("h1");var book:Node=Book.obtain(demo);book.for_house(demo.spatial_popover);await settle()
	var button:Button=book.buttons.recessed_townhouse;var scroll:ScrollContainer=book.grid.get_parent();scroll.ensure_control_visible(button);await settle();await ui_click(button);await settle();quiet()
	check(demo.state.houses[0].architecture=="recessed_townhouse" and not book.panel.visible,"native architecture catalogue selects deep window house")
	check(preload("res://scripts/ui/city_creation_prototype_caption.gd").caption(demo.spatial_popover,demo.state.houses[0])=="深窗街屋" and preload("res://scripts/ui/city_creation_prototype_stamp.gd").key(demo.spatial_popover,demo.state.houses[0])=="recessed_townhouse","published prototype caption and card identify the actual deep window recipe")
	check(demo.state.houses[0].seed==original.houses[0].seed and demo.state.house_entrances("h1")==entrances,"native choice preserves authored seed and public entrances")
	await key(KEY_ESCAPE);visible_glass()
	for phase in range(3):demo._set_light_phase(phase);await settle();await capture("layered_phase_"+str(phase))
	var changed:Dictionary=demo.state.set_house_colors("h1",Color("c1ad86"),Color("5f7a68"));demo._after_edit(changed,"colors");await settle();quiet();check(changed.ok,"author recolors actual window frame and surrounding house")
	visible_glass();var saved:Dictionary=demo.state.snapshot();var colored:=arrays();var tint_ok:=true
	for mesh:MeshInstance3D in demo.town.house_roots.h1.find_children("*","MeshInstance3D",true,false):
		if mesh.material_override.has_meta("creation_facade_glass"):tint_ok=tint_ok and mesh.material_override.albedo_color==Color("344e53")
	check(tint_ok,"glass tint remains independent of author palette")
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(saved))).ok,"ordinary cold read of explicit architecture and author colors")
	await show(cold,Vector2(-28,-20),"深窗冷读");quiet();facts["incremental"]=colored;facts["cold"]=arrays();check(arrays()==colored,"actual recolored arrays cold-equal incremental publication")
	var before:Dictionary=demo.state.snapshot();demo._after_edit(demo.state.set_house_architecture("h1","townhouse"),"room");await settle();quiet();await key(KEY_Z,true);await settle();quiet();check(demo.state.houses==before.houses and arrays()==colored,"native Undo restores complete deep window geometry and colors")
	var special:=Fixture.build("renaissance",.4,true,2,true);check(special.ok,"actual terrace-adjacent sample");await show(special.city,Vector2(-28,-20),"庭院窗楣净空");quiet();visible_glass();await capture("terrace_window")
	var joined:=Fixture.build("pastoral",0.);check(joined.city.add_house_stroke(Vector2(-26.2,-20),[{"x":0,"z":0,"level":0,"kind":"room"},{"x":0,"z":0,"level":1,"kind":"room"}]).ok,"public adjacent house establishes real structural join")
	await show(joined.city,Vector2(-28,-20),"联排窗洞动态净空");quiet();var rig:Dictionary=demo.town.resonance.rigs.h1
	demo.town.resonance.update({"audible":true,"lead_id":"h1","beat_pulse":1.,"clock_sec":.2})
	check(demo.town.house_roots.h1.get_meta("structural_joined",false) and rig.pivot.scale==Vector3.ONE and rig.material.get_shader_parameter("response")==1.,"real joined house keeps aperture-aligned geometry under maximum visual pulse and retains uniform glow")
	visible_glass()
	await physics_frame;var picked:=false
	for wall:Node3D in demo.town.house_roots.h1.find_children("*","Node3D",true,false):
		if not wall.has_meta("layered_window"):continue
		var hole:Dictionary=wall.get_meta("layered_window").openings[0];var target:=Vector3(hole.x,(hole.bottom+hole.spring)*.5,0)
		var query:=PhysicsRayQueryParameters3D.create(wall.to_global(target+Vector3(0,0,1.)),wall.to_global(target-Vector3(0,0,1.)),1)
		var hit:Dictionary=demo.town.get_world_3d().direct_space_state.intersect_ray(query)
		picked=not hit.is_empty() and hit.collider.get_meta("house_id","")=="h1";break
	check(picked,"actual layer1 physics ray through visible aperture retains house picking")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("LAYERED_WINDOWS_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
