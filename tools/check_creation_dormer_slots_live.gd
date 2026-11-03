extends "res://tools/check_creation_layered_windows_live.gd"
const Dormers=preload("res://tests/test_city_creation_dormer_slots.gd")
const Choice=preload("res://scripts/world/city_creation_architecture_variants.gd")
var pcm_done:=false
var measuring:=false
var last_frame:=0
var edit_frames:Array[float]=[]
func observe_frame()->void:
	var now:=Time.get_ticks_usec()
	if measuring and last_frame>0:edit_frames.append((now-last_frame)/1000.)
	last_frame=now
func record_edit()->void:
	facts["edit_pcm"]=await Probe.record(OUT+"/dormer_edit_Master.wav",3.2);pcm_done=true
func parts()->Array:
	var result:Array=[]
	for mesh:MeshInstance3D in demo.town.house_roots.h1.find_children("*","MeshInstance3D",true,false):
		var material:Material=mesh.material_override;var color:Variant=material.albedo_color if material is StandardMaterial3D else material.get_shader_parameter("roof_color") if material is ShaderMaterial else null
		result.append({"name":str(mesh.name),"faces":var_to_bytes(mesh.mesh.get_faces()).hex_encode().sha256_text(),"color":str(color),"aabb":str(mesh.get_aabb())})
	return result
func focus_roof()->void:
	demo.focus=Vector3(-27.2,2.6,-20);demo.zoom=6.5;demo.pitch=.72;demo.yaw=.7;demo._update_camera()
func counts()->Dictionary:
	var meshes:Array=demo.town.house_roots.h1.find_children("*","MeshInstance3D",true,false);var triangles:=0;var surfaces:=0
	for mesh:MeshInstance3D in meshes:triangles+=mesh.mesh.get_faces().size()/3;surfaces+=mesh.mesh.get_surface_count()
	return {"meshes":meshes.size(),"surfaces":surfaces,"triangles":triangles,"whole_frame_draw_calls":RenderingServer.get_rendering_info(RenderingServer.RENDERING_INFO_TOTAL_DRAW_CALLS_IN_FRAME)}
func native_dormer(id:String)->void:
	demo.select_tool(0);demo.spatial_popover.open_for_house("h1");await settle();await ui_click(demo.spatial_popover.inspector.appearance_button);await settle()
	var button:Button=demo.find_child("DormerChoice_"+("automatic" if id.is_empty() else id),true,false)
	check(button!=null and button.is_visible_in_tree(),"actual roof detail is reachable in the native house appearance sheet")
	if button!=null:measuring=true;await ui_click(button);await settle();quiet();measuring=false
	await key(KEY_ESCAPE);await key(KEY_ESCAPE)
func physical_detail()->void:
	await physics_frame
	var house:Node3D=demo.town.house_roots.h1;var detail:Node3D=house.find_child("DormerDetail_*",true,false)
	if detail==null:check(false,"actual chosen dormer exists for the physical probe");return
	var pane:MeshInstance3D=detail.find_child("DormerGlass",true,false);var key:String=house.get_meta("roof_detail").id
	var normal:=Vector3.BACK if key=="gable_light" else Vector3.UP;var at:=Vector3(.13,.04,0) if key=="gable_light" else Vector3(.13,0,.08)
	var hit:Dictionary=demo.town.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(pane.to_global(at+normal*.15),pane.to_global(at-normal*.06),1))
	check(not hit.is_empty() and hit.collider.get_meta("house_id","")=="h1" and hit.collider.get_meta("roof_detail","")==key,"actual Jolt picking reaches the chosen visible glass under its original house identity")
	if key=="gable_light":
		var site:Dictionary=detail.get_meta("roof_detail");var y:float=site.high-site.low+.015+.44
		hit=demo.town.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(detail.to_global(Vector3(0,y,-.7)),detail.to_global(Vector3(0,y,-.2)),1))
		check(not hit.is_empty() and hit.collider.get_meta("roof_detail","")==key,"actual rear gable infill has solid thickness and matching physical picking")
	var rig:Dictionary=demo.town.resonance.rigs.h1;demo.town.resonance.update({"audible":true,"lead_id":"h1","beat_pulse":1.});check(rig.pivot.scale==Vector3.ONE,"maximum response keeps actual glass, stone curb and picking aligned")
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	process_frame.connect(observe_frame)
	var city:RefCounted=Dormers.fixture();city.set_house_architecture_variant("h1","timber_shutters");await show(city,Vector2(-27.2,-20),"瓦顶天窗细部");quiet();focus_roof();await settle()
	var original:Dictionary=demo.state.houses[0].duplicate(true);var old:=arrays()
	facts["original_counts"]=counts()
	for key:String in ["gable_light","shed_light"]:
		await native_dormer(key);focus_roof();await settle()
		check(Choice.selected(demo.state.houses[0])=="timber_shutters" and Choice.record(demo.state.houses[0])==original.architecture_variant and demo.state.houses[0].seed==original.seed,"native roof choice preserves independent window recipe and author seed")
		check(demo.town.house_roots.h1.get_meta("roof_detail",{}).get("active",false) and arrays()!=old,"actual selected roof detail replaces the original automatic recipe")
		facts[key+"_counts"]=counts()
		await physical_detail()
		demo.set_process(false);demo.town.clear_preview()
		for phase in range(3):demo._set_light_phase(phase);await settle();await capture(key+"_phase_"+str(phase))
		if key=="gable_light":demo.yaw+=PI;demo._update_camera();demo._set_light_phase(0);await settle();await capture("gable_light_back");focus_roof()
		demo.set_process(true)
	demo._after_edit(demo.state.set_house_colors("h1",Color("c4ae88"),Color("344e53")),"colors");await settle();quiet();var colored:=arrays();var saved:Dictionary=demo.state.snapshot()
	check(demo.state.save_city(OUT+"/roof.json").ok,"actual multi-slot and author colors publish through the ordinary atomic file API")
	var cold:=State.new();check(cold.load_city(OUT+"/roof.json").ok and cold.snapshot()==saved,"actual schema27 cold read preserves the full authored work");await show(cold,Vector2(-27.2,-20),"天窗冷读");quiet();focus_roof();await settle();check(arrays()==colored,"all actual GPU arrays and material colors cold-equal incremental publication")
	demo._after_edit(demo.state.set_house_colors("h1",Color("d3c5a2"),Color("986649")),"colors");await settle();quiet()
	var glass:Array=demo.town.house_roots.h1.find_children("DormerGlass*","MeshInstance3D",true,false);check(glass.size()==1 and glass[0].material_override.albedo_color==Color("344e53"),"glass stays fixed after cold-loading an exact author-palette RGB collision and recoloring again")
	colored=arrays();saved=demo.state.snapshot();record_edit.call_deferred()
	await native_dormer("off");check(Choice.dormer(demo.state.houses[0])=="off" and not demo.town.house_roots.h1.get_meta("roof_detail",{}).get("active",false) and demo.town.house_roots.h1.find_child("TerracottaRoofLight*",true,false)==null,"native no-dormer choice explicitly suppresses both new and automatic geometry")
	await key(KEY_Z,true);await settle();quiet();check(demo.state.houses==saved.houses and arrays()==colored,"native Undo restores the exact selected roof and independent colored windows")
	await key(KEY_Y,true);await settle();quiet();check(Choice.dormer(demo.state.houses[0])=="off","native Redo restores the explicit empty roof")
	await native_dormer("");check(demo.state.houses[0].architecture_variant==original.architecture_variant and demo.town.house_roots.h1.get_meta("terracotta_skylights",0)>0,"native original roof restores its old automatic dormer and unchanged v1 window recipe")
	var automatic:=arrays();var original_city:=State.new();var original_data:Dictionary=demo.state.snapshot();check(original_city.restore(original_data).ok,"independent original-roof source restores");await show(original_city,Vector2(-27.2,-20),"原瓦顶冷算");quiet();check(arrays()==automatic,"explicit original is content-equal to a cold work without a roof slot")
	await native_dormer("gable_light");focus_roof();await settle();var complete:=arrays();var identity:Dictionary=demo.state.houses[0].architecture_variant.duplicate(true)
	demo._after_edit(demo.state.add_cell("h1",0,0,2),"room");await settle();quiet();check(not demo.town.house_roots.h1.has_meta("roof_detail") and demo.state.houses[0].architecture_variant==identity,"partial higher room preserves dormant roof intent and returns to the ordinary actual roof")
	await key(KEY_Z,true);await settle();quiet();check(arrays()==complete and demo.town.house_roots.h1.get_meta("roof_detail",{}).get("active",false),"native Undo restores complete supported roof, detail placement and colors")
	demo._after_edit(demo.state.rotate_house("h1",PI*.5),"room");await settle();quiet();await physical_detail();var rotated:=arrays();var rotated_city:=State.new();check(rotated_city.restore(demo.state.snapshot()).ok,"rotated roof source cold restores");await show(rotated_city,Vector2(-27.2,-20),"旋转天窗");quiet();check(arrays()==rotated,"rotated supported roof, frames and glass cold-equal incremental publication")
	var axis:RefCounted=Dormers.fixture("renaissance",0.,1,2);axis.set_house_dormer("h1","gable_light");await show(axis,Vector2(-28,-19.1),"纵向瓦顶天窗");quiet();focus_roof();await settle();await physical_detail();await capture("opposite_axis_roof")
	var adjacent:Dictionary=demo.state.add_house_stroke(Vector2(-26.2,-20),[{"x":0,"z":0,"level":0,"kind":"room"},{"x":0,"z":0,"level":1,"kind":"room"}]);demo._after_edit(adjacent,"room");await settle();quiet();check(adjacent.ok and demo.town.house_roots.h1.get_meta("roof_detail",{}).get("active",false),"actual adjacent room recomputes a supported roof detail against the changed continuous roof")
	var joined:=arrays();var hot_parts:=parts();var hot_site:Dictionary=demo.town.house_roots.h1.get_meta("roof_detail",{});var neighbor:=State.new();check(neighbor.restore(demo.state.snapshot()).ok,"adjacent roof source cold restores");await show(neighbor,Vector2(-28,-19.1),"邻接天窗冷算");quiet();facts["neighbor"]={"hot_site":hot_site,"cold_site":demo.town.house_roots.h1.get_meta("roof_detail",{}),"exact_gpu_match":arrays()==joined};check(arrays()==joined,"neighbor-triggered incremental dormer publication equals independent cold geometry")
	if arrays()!=joined:facts["neighbor_parts"]={"hot":hot_parts,"cold":parts()}
	check(await wait_for(func():return pcm_done,6000) and facts.edit_pcm.ok,"actual WASAPI Master during native construction remains non-silent and unclipped")
	edit_frames.sort();facts["native_edit_frames"]={"count":edit_frames.size(),"max_ms":edit_frames[-1],"p95_ms":edit_frames[floori(edit_frames.size()*.95)]}
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal default save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("DORMER_SLOTS_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
