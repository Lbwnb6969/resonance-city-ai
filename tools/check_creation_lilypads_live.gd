extends SceneTree
## Bounded production GL; real public water edits, paused Life, unchanged Music.
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/池塘睡莲_2026-10-16"
const SAMPLE="res://数据/地貌河湾样例.json"
const POND=Vector2(-14.5,4)
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
func _initialize()->void:
	if "--pond-probe" in OS.get_cmdline_user_args(): _pond_probe.call_deferred()
	else: _run.call_deferred()
func _pond_probe()->void:
	var rows:Array=[]
	for center:Vector2 in [Vector2(-14.5,-4),Vector2(-14.5,4),Vector2(-14.5,0)]:
		var city:=State.new();var restored:Dictionary=city.restore(JSON.parse_string(FileAccess.get_file_as_string(SAMPLE)))
		var points:Array[Vector2]=[center]
		var result:Dictionary=city.add_water(points,5.4,"pond")
		var leaf:=0;var flower:=0;var locations:Array=[]
		if restored.ok and result.ok:
			var module=load("res://scripts/visual/city_creation_lilypads.gd").new();module.state=city;module.record_only=true;module.rebuild()
			for records:Array in module.prepared_blocks.values():
				for record:Dictionary in records:
					if record.pond_id!=result.water_id: continue
					if record.part=="leaf": leaf+=1
					else: flower+=1;locations.append(record.position)
			module.free()
		rows.append({"center":center,"result":result,"leaf":leaf,"flower":flower,"flower_positions":locations})
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));FileAccess.open(OUT+"/pond_probe.json",FileAccess.WRITE).store_string(JSON.stringify({"scope":"CPU only; each candidate uses a fresh source State and actual add_water without changing seed/probability/source sample.","rows":rows},"\t",true,true));print("LILY_POND_PROBE ",JSON.stringify(rows));quit()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _sha(bytes:PackedByteArray)->String:
	var hash_context:=HashingContext.new();hash_context.start(HashingContext.HASH_SHA256);hash_context.update(bytes);return hash_context.finish().hex_encode()
func _identity()->Array:
	var rows:Array=[]
	for id:String in demo.music.STEMS:
		var player:AudioStreamPlayer=demo.music._players[id]
		var pcm:PackedByteArray=player.stream.data
		rows.append([id,player.get_instance_id(),player.stream.get_instance_id(),_sha(pcm)])
	for player:AudioStreamPlayer in demo.music._effects: rows.append(player.get_instance_id())
	return rows
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+20000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline: await process_frame
	_check(not demo.edit_pending() and not demo._edit_ui_pending,"real renderer and following UI complete publication")
	await physics_frame;await process_frame
func _records()->Array:
	var rows:Array=[];var keys:Array=demo.town.lilypads.blocks.keys();keys.sort()
	for key:Vector2i in keys: rows.append([key,demo.town.lilypads.blocks[key].get_meta("candidates",[]).duplicate(true)])
	return rows
func _segment_distance(at:Vector2,a:Vector2,b:Vector2)->float:
	var delta:=b-a
	return at.distance_to(a+delta*clampf((at-a).dot(delta)/maxf(.0000001,delta.length_squared()),0,1))
func _within_pond(at:Vector2,water:Dictionary)->bool:
	var points:Array=water.points
	for index in range(maxi(1,points.size()-1)):
		var a:=Vector2(points[index][0],points[index][1]);var next:=mini(index+1,points.size()-1)
		var b:=Vector2(points[next][0],points[next][1])
		if _segment_distance(at,a,b)<float(water.width)*.5: return true
	return false
func _obstacle_clear(at:Vector2)->bool:
	for house:Dictionary in demo.state.houses:
		for cell:Dictionary in house.cells:
			var center:=Vector2(house.origin[0],house.origin[1])+Vector2(cell.x,cell.z)*1.8
			if Rect2(center-Vector2.ONE*.9,Vector2.ONE*1.8).grow(.08).has_point(at): return false
	for road:Dictionary in demo.state.roads:
		for index in range(road.points.size()-1):
			var a:=Vector2(road.points[index][0],road.points[index][1]);var b:=Vector2(road.points[index+1][0],road.points[index+1][1])
			if _segment_distance(at,a,b)<=float(road.width)*.5+.08: return false
	return true
func _geometry_checks(pond_id:String)->void:
	# Final record and resource access follows the product module contract;
	# the checked points use the actual installed mesh, not a substitute disk.
	var leaf_count:=0;var flower_count:=0;var wet:=true;var clear:=true;var batches_ok:=true
	var source_rows:Dictionary={};var positions:Array=[]
	var water:Dictionary={}
	for candidate:Dictionary in demo.state.waters:
		if candidate.id==pond_id: water=candidate
	for key:Vector2i in demo.town.lilypads.blocks:
		var node:Node3D=demo.town.lilypads.blocks[key]
		var records:Array=node.get_meta("candidates",[])
		var by_part:Dictionary={"leaf":[],"flower":[]}
		for record:Dictionary in records:
			by_part[record.part].append(record)
			if str(record.get("pond_id",""))!=pond_id: continue
			if record.part=="leaf": leaf_count+=1
			else: flower_count+=1
			positions.append([record.part,record.position])
			var mesh:Mesh=demo.town.lilypads._mesh(record.part)
			var arrays:Array=mesh.surface_get_arrays(0)
			var vertices:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX]
			var indices:PackedInt32Array=arrays[Mesh.ARRAY_INDEX]
			var effective:=0
			for index in range(0,indices.size(),3):
				if (vertices[indices[index+1]]-vertices[indices[index]]).cross(vertices[indices[index+2]]-vertices[indices[index]]).length_squared()>.000000000001: effective+=1
			source_rows[record.part]={"vertices":vertices.size(),"indexed_triangles":indices.size()/3,"effective_triangles":effective,"resource":mesh.resource_path}
			var transform:Transform3D=record.transform
			var world_center:Vector3=node.global_transform*transform.origin
			var radius:=0.0
			for vertex:Vector3 in vertices:
				var world:Vector3=node.global_transform*(transform*vertex)
				var at:=Vector2(world.x,world.z)
				radius=maxf(radius,at.distance_to(Vector2(world_center.x,world_center.z)))
				wet=wet and _within_pond(at,water);clear=clear and _obstacle_clear(at)
			for step in range(48):
				var at:=Vector2(world_center.x,world_center.z)+Vector2.from_angle(step*TAU/48.0)*radius
				wet=wet and _within_pond(at,water);clear=clear and _obstacle_clear(at)
		for child:Node in node.get_children():
			batches_ok=batches_ok and child is MultiMeshInstance3D and child.get_child_count()==0
			if child is MultiMeshInstance3D:
				var part:String=str(child.name).trim_prefix("Lilypads_")
				var wanted:Array=by_part.get(part,[])
				batches_ok=batches_ok and child.multimesh.instance_count==wanted.size()
				for index in range(mini(child.multimesh.instance_count,wanted.size())):
					batches_ok=batches_ok and child.multimesh.get_instance_transform(index).is_equal_approx(wanted[index].transform)
					var expected_seed:float=float(posmod(int(wanted[index].seed),65536))/65535.0
					batches_ok=batches_ok and child.multimesh.use_custom_data and absf(child.multimesh.get_instance_custom_data(index).r-expected_seed)<1.0/255.0
					batches_ok=batches_ok and child.multimesh.use_colors and child.multimesh.get_instance_color(index).is_equal_approx(Color.WHITE)
		batches_ok=batches_ok and node.get_child_count()<=2
	_check(leaf_count>0 and flower_count>0 and flower_count<leaf_count,"real newly drawn open pond derives fixed leaves and fewer actual flowers")
	_check(wet and clear,"all actual source vertices and full circle footprints stay inside their authored pond and clear buildings and road-bridges")
	_check(source_rows.get("leaf",{}).get("vertices",0)==12 and source_rows.get("leaf",{}).get("indexed_triangles",0)==16 and source_rows.get("leaf",{}).get("effective_triangles",0)==10 and source_rows.get("flower",{}).get("vertices",0)==80 and source_rows.get("flower",{}).get("indexed_triangles",0)==60 and source_rows.get("flower",{}).get("effective_triangles",0)==40,"actual installed recovered source topology keeps leaf12v16indextri10effective and flower80v60indextri40effective including original degenerates")
	_check(batches_ok,"leaf and flower are real MultiMesh instances with matching transforms and seeded alpha data, with no per-plant Nodes")
	facts.layout={"leaf_count":leaf_count,"flower_count":flower_count,"source_meshes":source_rows,"positions":positions}
func _source_checks()->void:
	var positions_match:=true;var indices_match:=true
	for part:String in ["leaf","flower"]:
		var path:String="res://资源/自然参考/睡莲/"+("叶.json" if part=="leaf" else "花.json")
		var source:Dictionary=JSON.parse_string(FileAccess.get_file_as_string(path))
		var arrays:Array=demo.town.lilypads._mesh(part).surface_get_arrays(0)
		var vertices:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX]
		for index in range(vertices.size()):
			var row:Array=source.Vertex_Position.buffer[index]
			positions_match=positions_match and vertices[index].is_equal_approx(Vector3(row[0],row[1],row[2]))
		var indices:PackedInt32Array=arrays[Mesh.ARRAY_INDEX]
		for index in range(0,indices.size(),3):
			indices_match=indices_match and indices[index]==source.indices.buffer[index] and indices[index+1]==source.indices.buffer[index+2] and indices[index+2]==source.indices.buffer[index+1]
	_check(positions_match and indices_match,"actual installed vertices and every source triangle match recovered JSON, with only required winding swap")
	var material:ShaderMaterial=demo.town.lilypads._material("leaf")
	var texture:Texture2D=material.get_shader_parameter("leaf_mask")
	var minimum:=1.0;var maximum:=0.0
	if texture!=null:
		var image:Image=texture.get_image()
		for x in range(0,image.get_width(),8):
			for y in range(0,image.get_height(),8):
				var value:float=image.get_pixel(x,y).r;minimum=minf(minimum,value);maximum=maxf(maximum,value)
	var shader_code:String=material.shader.code
	_check(texture!=null and texture.get_width()==256 and texture.get_height()==256 and minimum<.1 and maximum>.9 and shader_code.contains("texture(leaf_mask, UV).r") and shader_code.contains("discard"),"real imported recovered 256-square leaf R mask clips the source mesh instead of showing an opaque circular plate")
	facts.source={"leaf_mask_path":texture.resource_path if texture else "","sampled_mask_r_min":minimum,"sampled_mask_r_max":maximum}
func _sample()->Dictionary:
	for ignored in range(15): await process_frame
	var times:Array[float]=[];var draws:Array[float]=[];var previous:=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();times.append(float(now-previous)/1000.0);previous=now;draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	times.sort();draws.sort()
	return {"frames":120,"wall_p95_ms":times[113],"wall_max_ms":times[-1],"draw_median":draws[60],"scope":"Life paused/Music live, 180FPS VSync0 wall reference; no throughput or DSP CPU claim."}
func _capture(label:String,at:Vector3,zoom_value:float)->void:
	demo.select_tool(0);demo.focus=at;demo.zoom=zoom_value;demo.yaw=-.6;demo.pitch=1.0;demo._update_camera();demo.town.clear_preview()
	await process_frame;await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"actual production GL screenshot: "+label)
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var source:=FileAccess.get_file_as_bytes(SAMPLE)
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false);demo.ui_layer.visible=false
	var deadline:=Time.get_ticks_msec()+25000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(DisplayServer.get_name()!="headless" and not demo.music.audio_report.is_empty(),"actual GL with original production PCM ready")
	var audio:Array=_identity();var clock:float=demo.music._playback_clock()
	var restored:Dictionary=demo.state.restore(JSON.parse_string(source.get_string_from_utf8()));demo._after_edit(restored,"history");await _wait()
	var points:Array[Vector2]=[POND]
	var added:Dictionary=demo.state.add_water(points,5.4,"pond");demo._after_edit(added,"terrace");await _wait()
	_check(restored.ok and added.ok,"authored sample restores and public State draws one real open pond")
	var pond_id:String=str(demo.state.waters[-1].id)
	_source_checks()
	_geometry_checks(pond_id)
	await _capture("01_开阔池塘睡莲与花",Vector3(POND.x,.1,POND.y),9)
	facts.performance=await _sample()
	await _capture("02_原地貌池塘",Vector3(12,.4,7.8),11)
	var original:Array=_records()
	var removed:Dictionary=demo.state.remove_water_at(POND);demo._after_edit(removed,"terrace");await _wait()
	_check(removed.ok and _records()!=original,"real pond removal removes or changes its actual lily instances")
	demo._after_edit(demo.state.undo(),"history");await _wait()
	_check(_records()==original,"real water removal undo restores exact lily seeds transforms and flowers")
	var road_points:Array[Vector2]=[]
	for index in range(13): road_points.append(Vector2(-15,-13+index))
	var road:Dictionary=demo.state.add_road(road_points)
	var pending:=false;var first:=0;var latest:=0
	if road.ok:
		demo._after_edit(road,"road");pending=demo.edit_pending();first=demo.town.budget_rebuild.generation
		demo._after_edit(demo.state.undo(),"history");latest=demo.town.budget_rebuild.generation;await _wait()
	_check(road.ok and pending and latest>first and demo.town.budget_rebuild.committed_generation==latest and _records()==original,"real thirteen-point road superseded by undo publishes latest Budget lilies only")
	var city:=State.new();var valid:Dictionary=city.restore(demo.state.snapshot())
	var sync=demo.town.lilypads.get_script().new();sync.state=city;sync.record_only=true;sync.rebuild()
	var synchronized:Array=[];var keys:Array=sync.prepared_blocks.keys();keys.sort()
	for key:Vector2i in keys:
		if not sync.prepared_blocks[key].is_empty(): synchronized.append([key,sync.prepared_blocks[key]])
	_check(valid.ok and synchronized==_records(),"actual Budget result matches independent fresh synchronous lily derivation")
	facts.budget={"first_generation":first,"latest_generation":latest,"report":demo.edit_budget_report()};sync.free()
	_check(_identity()==audio and demo.music.get_child_count()==13 and demo.music._playback_clock()>clock,"original nine PCM and thirteen Players preserve identity while real clock advances")
	_check(FileAccess.get_file_as_bytes(SAMPLE)==source and (FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"authored sample and personal city bytes remain untouched")
	facts.sample_sha256=_sha(source);facts.records_sha256=_sha(var_to_bytes(original))
	var result:Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"count":checks.size(),"facts":facts,"scope":"Actual GL paused-Life water editing/mesh installation/screenshot/undo/Budget, not complete economy or full vegetation acceptance.","command":"Godot_v4.7.2-stable_win64_console.exe --path . --audio-driver Dummy --max-fps 180 --script tools/check_creation_lilypads_live.gd"}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("LILYPADS_LIVE ",JSON.stringify(result))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false)
	for player:AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player:AudioStreamPlayer in demo.music._effects: player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout;quit(0 if failures.is_empty() else 1)
