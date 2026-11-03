extends "res://tools/check_creation_layered_windows_live.gd"
const Guild=preload("res://tests/test_city_creation_stepped_guildhouse.gd")
const Plan=preload("res://scripts/world/city_creation_stepped_guildhouse.gd")
var pcm_started:=false
var pcm_done:=false
var measuring:=false
var last_frame:=0
var edit_frames:Array[float]=[]
func record_edit()->void:
	pcm_started=true;facts["edit_pcm"]=await Probe.record(OUT+"/guild_edit_Master.wav",3.2);pcm_done=true
func observe_frame()->void:
	var now:=Time.get_ticks_usec()
	if measuring and last_frame>0:edit_frames.append((now-last_frame)/1000.)
	last_frame=now
func neighbor_roof_complete(id:String)->bool:
	var index:int=demo.state._house_index(id);var house:Dictionary=demo.state.houses[index];var meshes:Array=demo.town.house_roots[id].find_children("*","MeshInstance3D",true,false);var base:float=float(house.get("base_y",0.))+3.4;var covered:=0
	for x:float in [-.70,0.,.70]:
		for z:float in [-.70,0.,.70]:
			var a:=Vector3(house.origin[0]+x,base+2.,house.origin[1]+z);var b:=Vector3(a.x,base+.02,a.z);var seen:=false
			for mesh:MeshInstance3D in meshes:
				if mesh.material_override is ShaderMaterial and mesh.material_override.shader==demo.town.resonance.GlowShader:continue
				var inverse:=mesh.global_transform.affine_inverse();var faces:=mesh.mesh.get_faces()
				for i in range(0,faces.size(),3):
					if Geometry3D.segment_intersects_triangle(inverse*a,inverse*b,faces[i],faces[i+1],faces[i+2])!=null:seen=true;break
				if seen:break
			if seen:covered+=1
	facts["ordinary_neighbor_roof_samples"]={"count":9,"covered":covered};return covered==9
func focus_house()->void:
	demo.focus=Vector3(-27.1,2.1,-19.1);demo.zoom=7.5;demo.pitch=.65;demo.yaw=.65;demo._update_camera()
func native_prototype(id:String)->void:
	demo.select_tool(0);demo.spatial_popover.open_for_house("h1");var book:Node=Book.obtain(demo);book.for_house(demo.spatial_popover);await settle()
	var button:Button=book.buttons[id];var scroll:ScrollContainer=book.grid.get_parent();scroll.ensure_control_visible(button);await settle();measuring=true;await ui_click(button);await settle();quiet();await key(KEY_ESCAPE);measuring=false
func counts()->Dictionary:
	var meshes:Array=demo.town.house_roots.h1.find_children("*","MeshInstance3D",true,false);var triangles:=0;var surfaces:=0
	for mesh:MeshInstance3D in meshes:triangles+=mesh.mesh.get_faces().size()/3;surfaces+=mesh.mesh.get_surface_count()
	return {"meshes":meshes.size(),"surfaces":surfaces,"triangles":triangles,"frame_draw_calls":RenderingServer.get_rendering_info(RenderingServer.RENDERING_INFO_TOTAL_DRAW_CALLS_IN_FRAME)}
func physical_roof()->void:
	await physics_frame
	var body:Node3D=demo.town.house_roots.h1.find_child("GuildRoofPick",true,false);var roof:Node3D=body.get_parent();var depth:float=demo.town.house_roots.h1.get_meta("stepped_guildhouse")[0].depth;var space:PhysicsDirectSpaceState3D=demo.town.get_world_3d().direct_space_state
	var hit:Dictionary=space.intersect_ray(PhysicsRayQueryParameters3D.create(roof.to_global(Vector3(.1,1.5,depth*.5-.085)),roof.to_global(Vector3(.1,.90,depth*.5-.085)),1))
	check(not hit.is_empty() and hit.collider.get_meta("house_id","")=="h1","actual physics picks the visible stepped roof under its authored house identity")
	var air:Dictionary=space.intersect_ray(PhysicsRayQueryParameters3D.create(roof.to_global(Vector3(.7875,.70,depth*.5+.2)),roof.to_global(Vector3(.7875,.70,depth*.5-.25)),1))
	check(air.is_empty(),"precise roof collision leaves the real air above a lower riser empty")
func shop_windows()->void:
	var house:Node3D=demo.town.house_roots.h1;var meshes:Array=house.find_children("*","MeshInstance3D",true,false);var rays:=0;var blocked:=0;var count:=0
	for wall:Node3D in house.find_children("*","Node3D",true,false):
		if not wall.has_meta("guild_shop_window"):continue
		count+=1;var center:float=wall.get_meta("recessed_facade").holes[0].x
		for x:float in [center-.25,center+.25]:
			for y:float in [.70,1.18]:
				rays+=1;var a:=wall.to_global(Vector3(x,y,.40));var b:=wall.to_global(Vector3(x,y,-.02))
				for mesh:MeshInstance3D in meshes:
					if mesh.material_override.has_meta("creation_facade_glass"):continue
					var inverse:=mesh.global_transform.affine_inverse();var faces:=mesh.mesh.get_faces()
					for i in range(0,faces.size(),3):
						if Geometry3D.segment_intersects_triangle(inverse*a,inverse*b,faces[i],faces[i+1],faces[i+2])!=null:blocked+=1;break
	check(count>0 and blocked==0,"complete merged house leaves all broad arched shop-window quadrants unobstructed")
	var rig:Dictionary=demo.town.resonance.rigs.h1;check(rig.mesh.get_meta("windows").filter(func(w):return w.get("guild_shop",false)).size()==count,"actual visual response follows the published arched glass instead of painting over stone")
	facts.get_or_add("arch_windows",[]).append({"count":count,"rays":rays,"blocked":blocked})
	if count>0:
		await physics_frame
		for wall:Node3D in house.find_children("*","Node3D",true,false):
			if not wall.has_meta("guild_shop_window"):continue
			var x:float=wall.get_meta("recessed_facade").holes[0].x+.25
			var hit:Dictionary=demo.town.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(wall.to_global(Vector3(x,.95,.4)),wall.to_global(Vector3(x,.95,-.2)),1))
			check(not hit.is_empty() and hit.collider.get_meta("house_id","")=="h1","actual window retains ordinary house picking through its visible opening");break
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	process_frame.connect(observe_frame)
	var city:RefCounted=Guild.fixture(2,2,2,"townhouse");await show(city,Vector2(-27.1,-19.1),"阶梯山墙行会");quiet();focus_house();await settle()
	var original:Dictionary=demo.state.snapshot();var before:=arrays();facts["old_counts"]=counts();await capture("old_townhouse")
	await native_prototype(Plan.ID);focus_house();await settle();check(demo.state.houses[0].architecture==Plan.ID and demo.town.house_roots.h1.get_meta("stepped_guildhouse",[]).size()==2,"native silhouette card publishes two actual stepped roof bays")
	var expected:Dictionary=original.houses[0].duplicate(true);expected.architecture=Plan.ID;check(demo.state.houses[0]==expected and arrays()!=before,"native choice only changes explicit prototype while publishing different geometry")
	check(preload("res://scripts/ui/city_creation_prototype_caption.gd").caption(demo.spatial_popover,demo.state.houses[0])=="阶梯山墙行会","published caption follows actual stepped recipe")
	await shop_windows();await physical_roof()
	facts["new_counts"]=counts();demo.set_process(false);demo.town.clear_preview()
	for phase in range(3):demo._set_light_phase(phase);await settle();await capture("guild_phase_"+str(phase))
	demo.set_process(true)
	demo._after_edit(demo.state.set_house_colors("h1",Color("c4ae88"),Color("8e5f4b")),"colors");await settle();quiet();var colored:=arrays();var saved:Dictionary=demo.state.snapshot();check(demo.state.save_city(OUT+"/guild.json").ok,"actual prototype and author colors save through the ordinary atomic file API")
	var cold:=State.new();check(cold.restore(JSON.parse_string(FileAccess.get_file_as_string(OUT+"/guild.json"))).ok,"actual new prototype cold reads from disk");await show(cold,Vector2(-27.1,-19.1),"阶梯山墙冷读");quiet();focus_house();await settle();check(arrays()==colored,"all actual GPU arrays and material colors cold-equal the incrementally recolored house")
	await native_prototype("townhouse");check(not demo.town.house_roots.h1.has_meta("stepped_guildhouse"),"native old prototype restores ordinary roof")
	await key(KEY_Z,true);await settle();quiet();check(demo.state.houses==saved.houses and arrays()==colored,"native Undo restores chosen stepped house and exact colored geometry")
	await key(KEY_Y,true);await settle();quiet();check(demo.state.houses[0].architecture=="townhouse" and not demo.town.house_roots.h1.has_meta("stepped_guildhouse"),"native Redo restores the prior street-house recipe")
	await native_prototype(Plan.ID);demo._after_edit(demo.state.rotate_house("h1",.4),"room");await settle();quiet();focus_house();await shop_windows();await physical_roof()
	var rotated:=arrays();var rotated_city:=State.new();check(rotated_city.restore(demo.state.snapshot()).ok,"rotated recipe cold source restores");await show(rotated_city,Vector2(-27.1,-19.1),"旋转行会");quiet();check(arrays()==rotated,"rotated roof and broad arched glass cold-equal incremental publication")
	check(demo.town.house_roots.h1.find_children("*","MeshInstance3D",true,false).any(func(m):return m.visibility_range_end==64.),"real batched iron vanes retain their 64m detail range")
	demo._after_edit(demo.state.add_cell("h1",0,0,2),"room");await settle();quiet();check(demo.state.houses[0].architecture==Plan.ID and not demo.town.house_roots.h1.has_meta("stepped_guildhouse"),"local higher room retains author choice and publishes ordinary fallback roof")
	await key(KEY_Z,true);await settle();quiet();check(demo.town.house_roots.h1.has_meta("stepped_guildhouse") and arrays()==rotated,"native Undo restores complete stepped silhouette after structural fallback")
	var side:RefCounted=Guild.fixture(2,3,2);check(side.add_road([Vector2(-21,-18.2),Vector2(-24.8,-18.2)] as Array[Vector2],"path","none").ok,"public side approach reaches a real side entrance")
	await show(side,Vector2(-27.1,-18.2),"侧门阶梯行会");quiet();focus_house();await settle();var roofs:Array=demo.town.house_roots.h1.get_meta("stepped_guildhouse")
	check(roofs.size()==3 and roofs.all(func(b):return is_equal_approx(b.angle,PI*.5)),"actual side approach publishes three rotated roof bays")
	await shop_windows();await physical_roof();await capture("side_frontage")
	record_edit.call_deferred();check(await wait_for(func():return pcm_started),"Master capture starts before native construction edits")
	preload("res://scripts/world/city_creation_build_brush.gd").select(demo.state,"renaissance","townhouse")
	var placed:Dictionary=demo.state.add_house_stroke(Vector2(-24.4,-20),[{"x":0,"z":0,"level":0,"kind":"room"},{"x":0,"z":0,"level":1,"kind":"room"}]);demo._after_edit(placed,"room");await settle();quiet()
	check(placed.ok and neighbor_roof_complete("h2"),"all nine real surface probes cover the complete ordinary adjacent roof")
	var adjacent:=arrays();var source:Dictionary=demo.state.snapshot();var neighbor:=State.new();check(neighbor.restore(source).ok,"new mother and ordinary neighbor share a valid cold source")
	await show(neighbor,Vector2(-27.1,-18.2),"联排冷读");quiet();check(arrays()==adjacent,"neighbor-triggered incremental roof and facade invalidation equals full independent cold publication")
	check(await wait_for(func():return pcm_done,6000) and facts.edit_pcm.ok,"actual WASAPI Master during construction is non-silent and unclipped")
	edit_frames.sort();facts["native_edit_frames"]={"count":edit_frames.size(),"max_ms":edit_frames[-1],"p95_ms":edit_frames[floori(edit_frames.size()*.95)]}
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal default save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("STEPPED_GUILDHOUSE_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
