extends "res://tools/check_creation_three_road_modes_live.gd"
## Actual worker publication versus a new renderer opened from the same JSON.
const SEAM_EDGE:=33
var verify_seams:=false

func terrain_pair()->Dictionary:
	var surface:Node3D=demo.town.terrain_surface
	var result:Dictionary={}
	for block:Vector2i in [Vector2i(0,1),Vector2i(1,1)]:
		var mesh:MeshInstance3D=surface.blocks[block].get_node("GroundMesh")
		var arrays:Array=mesh.mesh.surface_get_arrays(0)
		result[block]=[arrays[Mesh.ARRAY_VERTEX],arrays[Mesh.ARRAY_NORMAL]]
	return result

func seam_report(pair:Dictionary)->Dictionary:
	var left:Array=pair[Vector2i(0,1)];var right:Array=pair[Vector2i(1,1)]
	var vertices:=0.;var normals:=0.
	for z:int in SEAM_EDGE:
		var a:=z*SEAM_EDGE+SEAM_EDGE-1;var b:=z*SEAM_EDGE
		vertices=maxf(vertices,Vector3(left[0][a]).distance_to(right[0][b]))
		normals=maxf(normals,Vector3(left[1][a]).distance_to(right[1][b]))
	return {"vertex_error":vertices,"normal_error":normals,"samples":SEAM_EDGE}

func freeze_view(size:Vector2i,phase:int)->void:
	quiet();demo.life.set_process(false);demo.set_process(false);demo.town.set_process(false)
	demo.ui_layer.hide();demo.town.clear_preview()
	# Keep the exact production ground/material and sun/sky. Hide animated
	# vegetation, water, birds and actors so matching pixels measure terrain.
	for child:Node in demo.town.get_children():
		if child is Node3D:child.visible=child==demo.town.terrain_surface
	for child:Node in demo.get_children():
		if child is Node3D and child not in [demo.town,demo.camera,demo.sun]:child.hide()
	root.size=size;demo.focus=Vector3(16.,.15,20.);demo.zoom=9.;demo.yaw=.22;demo.pitch=.75
	demo._set_light_phase(phase);demo._update_camera()
	for ignored in range(3):await process_frame

func transaction(result:Dictionary,label:String)->void:
	check(result.ok,"public terrain transaction: "+label)
	if not result.ok:return
	demo.set_process(true);demo.town.set_process(true)
	var frames:Array[float]=[];var previous:=Time.get_ticks_usec()
	demo._after_edit(result,"terrain" if label=="raise" else "history")
	while demo.edit_pending() or demo._edit_ui_pending:
		await process_frame;var now:=Time.get_ticks_usec();frames.append(float(now-previous)/1000.);previous=now
	await settle();demo.life.set_process(false)
	frames.sort()
	facts.edits.append({"operation":label,"frames":frames.size(),"p95_ms":frames[int((frames.size()-1)*.95)] if not frames.is_empty() else 0.,"max_ms":frames[-1] if not frames.is_empty() else 0.,"budget":demo.edit_budget_report()})

func saved_image(label:String)->Image:
	await capture(label)
	return Image.load_from_file(ProjectSettings.globalize_path(OUT+"/"+label+".png"))

func pixels(first:Image,second:Image,center:Vector2)->Dictionary:
	var rect:=Rect2i(Vector2i(center)-Vector2i(180,150),Vector2i(360,300)).intersection(Rect2i(Vector2i.ZERO,first.get_size()))
	var changed:=0;var maximum:=0.;var total:=0.
	for y in range(rect.position.y,rect.end.y):
		for x in range(rect.position.x,rect.end.x):
			var a:=first.get_pixel(x,y);var b:=second.get_pixel(x,y)
			var delta:=maxf(absf(a.r-b.r),maxf(absf(a.g-b.g),absf(a.b-b.b)))
			if delta>0.:changed+=1
			maximum=maxf(maximum,delta);total+=delta
	return {"roi":[rect.position.x,rect.position.y,rect.size.x,rect.size.y],"changed_pixels":changed,"maximum_rgb_delta":maximum,"mean_max_rgb_delta":total/float(rect.get_area())}

func comparison(size:Vector2i,phase:int)->void:
	var label:=str(size.x)+("_side_light" if phase==1 else "_night")
	demo.set_process(true)
	var city:=State.new();city.initialize_empty()
	await show(city,Vector2(16,20),"地形边界 "+label);quiet()
	var initial:Array=demo.state.snapshot().terrain_strokes.duplicate(true)
	var before_ids:Array=[]
	for block:Vector2i in [Vector2i(0,1),Vector2i(1,1)]:before_ids.append(demo.town.terrain_surface.blocks[block].get_instance_id())
	var points:Array[Vector2]=[Vector2(15,20)]
	await transaction(demo.state.add_terrain_stroke(points,"raise",1.,1.),"raise")
	var first_report:=seam_report(terrain_pair())
	if size.x==1440:
		await transaction(demo.state.undo(),"undo")
		check(demo.state.snapshot().terrain_strokes==initial and seam_report(terrain_pair()).normal_error<=.000001,"actual Undo restores authored terrain and both boundary normals")
		await transaction(demo.state.redo(),"redo")
	var incremental:Dictionary=terrain_pair();var edge:Dictionary=seam_report(incremental)
	check(edge.vertex_error<=.000001,"actual published chunk edge positions agree "+label)
	if verify_seams:check(edge.normal_error<=.000001,"actual incremental shared normals agree "+label)
	var world:Dictionary=JSON.parse_string(JSON.stringify(demo.state.snapshot()))
	FileAccess.open(OUT+"/"+label+"_world.json",FileAccess.WRITE).store_string(JSON.stringify(world))
	var after_ids:Array=[]
	for block:Vector2i in [Vector2i(0,1),Vector2i(1,1)]:after_ids.append(demo.town.terrain_surface.blocks[block].get_instance_id())
	await freeze_view(size,phase)
	var camera:Array=[demo.camera.global_transform,demo.camera.projection,demo.camera.size,root.size]
	var at:Vector2=demo.camera.unproject_position(Vector3(16,0,20))
	var before:Image=await saved_image(label+"_incremental")
	var renderer_id:int=demo.town.get_instance_id()
	var cold:=State.new();check(cold.restore(world).ok,"same actual JSON cold restores "+label)
	demo.set_process(true);await show(cold,Vector2(16,20),"地形冷重绘 "+label)
	await freeze_view(size,phase)
	check(demo.town.get_instance_id()!=renderer_id,"gallery creates a genuinely fresh terrain renderer "+label)
	check([demo.camera.global_transform,demo.camera.projection,demo.camera.size,root.size]==camera,"incremental and cold frames share the exact camera and pixel grid "+label)
	var after:Image=await saved_image(label+"_cold")
	var cold_pair:Dictionary=terrain_pair();var cold_edge:Dictionary=seam_report(cold_pair)
	check(cold_edge.vertex_error<=.000001 and cold_edge.normal_error<=.000001,"independent cold renderer has continuous shared vertices and normals "+label)
	var equal:=true
	for key:Vector2i in incremental:equal=equal and incremental[key][0]==cold_pair[key][0] and incremental[key][1]==cold_pair[key][1]
	var difference:Dictionary=pixels(before,after,at)
	if verify_seams:
		check(equal,"incremental real GPU meshes equal independent cold GPU meshes "+label)
		check(difference.changed_pixels==0,"matching ground pixels equal independent cold rendering "+label)
	facts.comparisons.append({"view":label,"first_raise":first_report,"incremental":edge,"cold":cold_edge,"gpu_arrays_equal":equal,"pixels":difference,"before_chunk_ids":before_ids,"after_chunk_ids":after_ids})

func pool()->Dictionary:
	var long_ids:Array=[];var short_ids:Array=[];var nature_ids:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():long_ids.append(player.get_instance_id())
	for player:AudioStreamPlayer in demo.music._effects:short_ids.append(player.get_instance_id())
	for player:AudioStreamPlayer in demo.ambience.players.values():nature_ids.append(player.get_instance_id())
	return {"long":long_ids,"short":short_ids,"nature":nature_ids,"buses":demo.music.spatial.report().bus_count}

func run()->void:
	OUT="res://验证记录/M69/baseline";verify_seams="--verify-seams" in OS.get_cmdline_user_args()
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	check(DisplayServer.get_name()!="headless" and demo.music.audio_report.get("bank_source","")=="precompiled","production OpenGL and original precompiled audio bank")
	var original:Dictionary=pool();facts={"edits":[],"comparisons":[],"verify_seams":verify_seams}
	await comparison(Vector2i(1440,900),1)
	await comparison(Vector2i(1024,768),2)
	facts.master=await Probe.record(OUT+"/Master.wav",3.1);check(facts.master.ok,"short actual Master has zero clipping")
	check(pool()==original and original.long.size()==12 and original.short.size()==4 and original.nature.size()==2 and original.buses==6,"12 long 4 short 6 buses and 2 nature players retain identity")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save remains byte identical")
	FileAccess.open(OUT+"/terrain_chunk_seams.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts},"\t"))
	print("TERRAIN_CHUNK_SEAMS_LIVE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"comparisons":facts.comparisons,"master":facts.master}))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
