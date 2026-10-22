extends RefCounted
const Fixture=preload("res://tools/fixtures/city_creation_juice_fixture.gd")
const OUT="res://验证记录/M09/多米诺连锁"
static func finish(demo:Node,kind:String)->Dictionary:
	var tree:SceneTree=demo.get_tree();DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var juice:Node=demo.get_meta("juice_feedback");var before:int=juice.serial;var before_hits:int=demo.score_ribbon.juice_hits
	var width:=1024 if kind in ["renaissance_fugue","chrono_counterpoint"] else 1440
	tree.root.size=Vector2i(width,768 if width==1024 else 900)
	for i in range(24):await tree.process_frame
	var phase:int=["pastoral_triad","highland_fifth","renaissance_fugue","clockwork_waltz","chrono_counterpoint"].find(kind)%3
	while demo.light_phase!=phase:demo._toggle_light()
	if kind=="highland_fifth":demo.pitch=deg_to_rad(10.);demo._update_camera()
	var images:Array[Dictionary]=[]
	var changed:Dictionary=Fixture.apply(demo.state,kind,true);demo._after_edit(changed,"room")
	var snapshots:Array=[];var captures:Dictionary={};var heights:Dictionary={};var collision_static:=true;var arc_valid:=true
	var deadline:=Time.get_ticks_msec()+18000
	while Time.get_ticks_msec()<deadline:
		await tree.process_frame
		for id:String in demo.town.touch.active:
			var row:Dictionary=demo.town.touch.active[id]
			if not is_instance_valid(row.pivot):continue
			heights[id]=maxf(float(heights.get(id,0.)),float(row.pivot.position.y)-float(row.base_y))
			for body:Node in demo.town.house_roots[id].find_children("*","StaticBody3D",true,false):collision_static=collision_static and not row.pivot.is_ancestor_of(body)
		var active_arcs:Array=juice.arcs.slots.filter(func(row):return row.node.visible)
		if active_arcs.any(func(row):return juice._clock()-float(row.clock)>.28 and float(row.node.material_override.get_shader_parameter("metronome_strength"))>.8) and not captures.has("arc"):
			for row:Dictionary in active_arcs:
				arc_valid=arc_valid and row.node.mesh!=null and row.node.material_override.shader.code.contains("micro_normal_strength")
				for at:Vector3 in row.node.mesh.surface_get_arrays(0)[Mesh.ARRAY_VERTEX]:arc_valid=arc_valid and at.is_finite()
			captures.arc=true;demo.toast.hide();demo.toast_time=0.
			await RenderingServer.frame_post_draw
			images.append({"label":kind+"_arc_"+str(width),"image":tree.root.get_texture().get_image()})
		var flying:Array=juice.flight.slots.filter(func(row):return not row.arrived)
		if flying.any(func(row):return juice._clock()-float(row.clock)>.45) and not captures.has("flight"):
			captures.flight=true;await RenderingServer.frame_post_draw
			images.append({"label":kind+"_flight_"+str(width),"image":tree.root.get_texture().get_image()})
		if juice.serial>before and juice.chains.is_empty() and demo.score_ribbon.juice_hits>before_hits:break
	await RenderingServer.frame_post_draw
	var staff:Rect2=demo.score_ribbon.staff.get_global_rect()
	images.append({"label":kind+"_staff_pluck","image":tree.root.get_texture().get_image().get_region(Rect2i(staff))})
	for row:Dictionary in images:row.image.save_png(OUT+"/"+row.label+".png")
	var serial:=-1
	for row:Dictionary in juice.journal:
		if row.phase=="queued" and int(row.serial)>before and row.kind=="chord":serial=int(row.serial);snapshots.append(row.duplicate(true))
	var bounces:Array=[]
	for row:Dictionary in juice.journal:
		if int(row.serial)==serial and row.phase=="bounce":bounces.append(row.duplicate(true))
	var timing:=not bounces.is_empty();var error:=0.
	for row:Dictionary in bounces:error=maxf(error,absf(float(row.clock)-float(row.scheduled)))
	for i in range(1,bounces.size()):timing=timing and absf(float(bounces[i].scheduled)-float(bounces[i-1].scheduled)-.1875)<.00001
	var check:={"actual_authoring_completion":changed.ok,"true_chord_chain":serial>before and not snapshots.is_empty(),"sixteenth_schedule":timing and error<.04,
		"actual_four_cm_hops":heights.values().any(func(height):return height>.035 and height<=.04001),"stable_pick_bodies":collision_static,
		"lit_finite_gold_arcs":captures.has("arc") and arc_valid,"flying_seal_arrives_and_plucks":captures.has("flight") and demo.score_ribbon.juice_hits>before_hits}
	var report:={"kind":kind,"ok":check.values().all(func(ok):return ok),"checks":check,"bounces":bounces,"max_clock_error":error,"height_peaks":heights,"queued":snapshots,"staff_hits":demo.score_ribbon.juice_hits-before_hits}
	FileAccess.open(OUT+"/"+kind+".json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("JUICE_CHAIN ",JSON.stringify(report));return report
