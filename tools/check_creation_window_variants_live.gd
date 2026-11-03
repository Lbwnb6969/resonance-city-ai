extends "res://tools/check_creation_layered_windows_live.gd"
const Variants=preload("res://scripts/world/city_creation_architecture_variants.gd")
func focus_house()->void:
	demo.focus=Vector3(-28,1.4,-20);demo.zoom=6.5;demo.pitch=.60;demo.yaw=.9;demo._update_camera()
func render_counts()->Dictionary:
	var meshes:Array=demo.town.house_roots.h1.find_children("*","MeshInstance3D",true,false);var surfaces:=0;var triangles:=0
	for mesh:MeshInstance3D in meshes:
		surfaces+=mesh.mesh.get_surface_count();triangles+=mesh.mesh.get_faces().size()/3
	return {"house_meshes":meshes.size(),"house_surfaces":surfaces,"house_triangles":triangles,"whole_frame_draw_calls":RenderingServer.get_rendering_info(RenderingServer.RENDERING_INFO_TOTAL_DRAW_CALLS_IN_FRAME)}
func native_detail(id:String)->void:
	demo.select_tool(0);demo.spatial_popover.open_for_house("h1");await settle()
	await ui_click(demo.spatial_popover.inspector.appearance_button);await settle()
	var button:Button=demo.find_child("WindowDetail_"+("original" if id.is_empty() else id),true,false)
	check(button!=null and button.is_visible_in_tree(),"window detail is reachable through native house appearance sheet")
	if button!=null:
		await ui_click(button);await settle();quiet()
		check(await wait_for(func():return not demo.town.touch.active.has("h1")),"native edit feedback finishes before checking stable wall coordinates")
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var authored:Array=[]
	for id:String in Variants.IDS:
		var f:=Fixture.build("pastoral",.4);await show(f.city,Vector2(-28,-20),"深窗细部 · "+str(Variants.LABELS[id]));quiet();focus_house();await settle()
		var original:Dictionary=demo.state.snapshot();var base:=arrays();var entries:Array=demo.state.house_entrances("h1").duplicate(true);var base_counts:=render_counts()
		await native_detail(id)
		var expected:Dictionary=original.houses[0].duplicate(true);expected.architecture_variant={"version":1,"prototype":Variants.PROTOTYPE,"windows":id,"seed":demo.state.houses[0].architecture_variant.seed}
		check(demo.state.houses[0]==expected and demo.state.house_entrances("h1")==entries,"native detail changes only its author override and keeps seed, rooms, entrances")
		var actual:Array=demo.town.house_roots.h1.find_children("WindowVariant_"+id+"*","Node3D",true,false)
		check(actual.size()==7 and arrays()!=base,"native selection actually publishes seven changed facade recipes before any further edit")
		var button:Button=demo.find_child("WindowDetail_"+id,true,false);check(button.button_pressed,"published sheet identifies selected detail")
		await capture(id+"_sheet");await key(KEY_ESCAPE);await key(KEY_ESCAPE);visible_glass()
		for phase:int in [0,1,2]:
			demo._set_light_phase(phase);await settle();await capture(id+"_phase_"+str(phase))
			if phase==0:facts[id]={"base_day":base_counts,"variant_day":render_counts()}
		demo._after_edit(demo.state.set_house_colors("h1",Color("b5c2b6"),Color("925a43")),"colors");await settle();quiet();var signature:=arrays();authored.append(signature);visible_glass()
		var saved:Dictionary=demo.state.snapshot();var path:=OUT+"/"+id+".json";check(demo.state.save_city(path).ok,"actual schema25 work saved inside evidence directory")
		var cold:=State.new();check(cold.load_city(path).ok and cold.snapshot()==saved,"ordinary saved work cold-load restores exact authored city")
		await show(cold,Vector2(-28,-20),"细部冷读");quiet();focus_house();await settle();check(arrays()==signature,"actual mesh, GPU palette bytes and material colors cold-equal incremental variant")
		await native_detail("");await key(KEY_ESCAPE);await key(KEY_ESCAPE);check(not demo.state.houses[0].has("architecture_variant"),"native original choice removes author override")
		await key(KEY_Z,true);await settle();quiet();check(demo.state.houses==saved.houses and arrays()==signature,"native Undo restores chosen variant and complete recolored geometry")
		await key(KEY_Y,true);await settle();quiet();check(not demo.state.houses[0].has("architecture_variant"),"native Redo returns original window recipe")
		# Compare the absent-field recipe against an independently rebuilt original with the same colors.
		var unvaried:=State.new();var clean:Dictionary=saved.duplicate(true);clean.houses[0].erase("architecture_variant");check(unvaried.restore(clean).ok,"independent original recipe source restores")
		var reverted:=arrays();await show(unvaried,Vector2(-28,-20),"原窗冷算");quiet();check(arrays()==reverted,"returning to original is content-equal to a work with no new field")
	check(authored[0]!=authored[1],"two choices publish different complete facade geometry")
	for id:String in Variants.IDS:
		var special:=Fixture.build("renaissance",.4,true,2,true);check(special.city.set_house_architecture_variant("h1",id).ok,"terrace-adjacent variant uses public choice")
		await show(special.city,Vector2(-28,-20),"庭院细部");quiet();focus_house();await settle();visible_glass();await capture(id+"_terrace")
	var joined:=Fixture.build("pastoral",0.);joined.city.set_house_architecture_variant("h1","timber_shutters");joined.city.add_house_stroke(Vector2(-26.2,-20),[{"x":0,"z":0,"level":0,"kind":"room"},{"x":0,"z":0,"level":1,"kind":"room"}])
	await show(joined.city,Vector2(-28,-20),"木百叶联排");quiet();var rig:Dictionary=demo.town.resonance.rigs.h1;demo.town.resonance.update({"audible":true,"lead_id":"h1","beat_pulse":1.})
	check(demo.town.house_roots.h1.get_meta("structural_joined",false) and rig.pivot.scale==Vector3.ONE and rig.material.get_shader_parameter("response")==1.,"joined detail preserves window-aligned visual response under maximum pulse");visible_glass()
	await physics_frame;var picked:=false
	for wall:Node3D in demo.town.house_roots.h1.find_children("*","Node3D",true,false):
		if not wall.has_meta("layered_window"):continue
		var h:Dictionary=wall.get_meta("layered_window").openings[0];var at:=Vector3(h.x,(h.bottom+h.spring)*.5,0)
		var hit:Dictionary=demo.town.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(wall.to_global(at+Vector3(0,0,1)),wall.to_global(at-Vector3(0,0,1)),1))
		picked=not hit.is_empty() and hit.collider.get_meta("house_id","")=="h1";break
	check(picked,"final detailed house still picks through the actual visible window")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("WINDOW_VARIANTS_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
