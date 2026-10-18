extends SceneTree
## Fixed before/after shore views; Life paused, original production Music live.
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Shore=preload("res://scripts/visual/city_creation_shore.gd")
const Mask=preload("res://scripts/visual/city_creation_grass_mask.gd")
const OUT="res://验证记录/水岸石簇_2026-10-16"
const SAMPLE="res://数据/地貌河湾样例.json"
const VIEWS=[{"id":"01_池塘岸","focus":Vector3(12,.7,7.8),"zoom":11.0,"yaw":-2.5,"pitch":.95},{"id":"02_主河桥岸","focus":Vector3(4,.7,-9.2),"zoom":13.0,"yaw":.7,"pitch":.9}]
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={"views":[]}
var destination:String
var personal:PackedByteArray
func _initialize()->void: _run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _sha(bytes:PackedByteArray)->String:
	var context:=HashingContext.new();context.start(HashingContext.HASH_SHA256);context.update(bytes);return context.finish().hex_encode()
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
	_check(not demo.edit_pending() and not demo._edit_ui_pending,"real renderer and UI finish publication")
	await physics_frame;await process_frame
func _records()->Array:
	var rows:Array=[]
	var keys:Array=demo.town.shore.blocks.keys();keys.sort()
	for key:Vector2i in keys: rows.append([key,demo.town.shore.blocks[key].get_meta("candidates",[]).duplicate(true)])
	return rows
func _block_ids()->Dictionary:
	var rows:Dictionary={}
	for key:Vector2i in demo.town.shore.blocks: rows[key]=demo.town.shore.blocks[key].get_instance_id()
	return rows
func _layout_checks()->void:
	var groups:Dictionary={};var masks:Dictionary={};var stone_rows:Array=[]
	var batches_ok:=true;var clean:=true;var ground_ok:=true;var residuals:Array=[]
	var color_error:=0.0;var batch_errors:Array=[]
	var parts:Array[String]=[];var grass_count:=0;var stone_count:=0
	var mesh:Mesh=demo.town.shore._mesh("stone")
	var vertices:PackedVector3Array=mesh.surface_get_arrays(0)[Mesh.ARRAY_VERTEX]
	for block:Vector2i in demo.town.shore.blocks:
		var node:Node3D=demo.town.shore.blocks[block]
		var records:Array=node.get_meta("candidates",[])
		var amounts:Dictionary={}
		for record:Dictionary in records:
			amounts[record.part]=int(amounts.get(record.part,0))+1
			if not parts.has(record.part): parts.append(record.part)
			if not record.has("cluster_id"): continue
			var id:=str(record.cluster_id)
			if not groups.has(id): groups[id]=[]
			groups[id].append(record)
			if record.cluster_role=="grass": grass_count+=1;continue
			stone_count+=1
			var transform:Transform3D=record.transform
			var minimum:=INF;var maximum:=-INF
			# Test actual installed mother-mesh vertices, independently of the
			# planner's edge-point array; full projected ellipse comes below.
			for vertex:Vector3 in vertices:
				var world:Vector3=node.global_transform*(transform*vertex)
				var residual:float=world.y-demo.state.ground_height(Vector2(world.x,world.z))
				minimum=minf(minimum,residual);maximum=maxf(maximum,residual)
			ground_ok=ground_ok and minimum<.01 and maximum>.005
			residuals.append({"id":id,"index":record.cluster_index,"min":minimum,"max":maximum})
			for index in range(49):
				var local:=Vector3.ZERO if index==48 else Vector3(cos(index*TAU/48.0),0,sin(index*TAU/48.0))
				var world:Vector3=node.global_transform*(transform*local)
				var at:=Vector2(world.x,world.z)
				var key:=Vector2i(floori(at.x/8.0),floori(at.y/8.0))
				if not masks.has(key):
					var mask:=Mask.new();mask.setup(demo.state,key);masks[key]=mask
				clean=clean and demo.state.water_clearance(at)>.105 and demo.town.shore._visible(masks[key],at)
				for plant:Dictionary in demo.state.plants:
					var trunk:=Vector2(plant.position[0],plant.position[1])
					var radius:float=(.42 if plant.kind=="shrub" else .72)*float(plant.scale)+.105
					clean=clean and at.distance_to(trunk)>radius
		for child:Node in node.get_children():
			batches_ok=batches_ok and child is MultiMeshInstance3D and child.get_child_count()==0
			if child is MultiMeshInstance3D:
				var count:int=child.multimesh.instance_count
				var part:String=str(child.name).trim_prefix("Shore_")
				batches_ok=batches_ok and count==int(amounts.get(part,-1))
				var instance_index:=0
				for record:Dictionary in records:
					if record.part!=part: continue
					var installed:Color=child.multimesh.get_instance_color(instance_index)
					var wanted:Color=record.tint
					var error:float=maxf(maxf(absf(installed.r-wanted.r),absf(installed.g-wanted.g)),maxf(absf(installed.b-wanted.b),absf(installed.a-wanted.a)))
					color_error=maxf(color_error,error)
					var transform_ok:bool=child.multimesh.get_instance_transform(instance_index).is_equal_approx(record.transform)
					batches_ok=batches_ok and transform_ok and error<=1.0/255.0+.000001
					if (not transform_ok or error>.000001) and batch_errors.size()<4: batch_errors.append({"block":block,"part":part,"transform_equal":transform_ok,"wanted":wanted,"installed":installed,"max_channel_error":error})
					instance_index+=1
		batches_ok=batches_ok and node.get_child_count()<=3
	var groups_ok:=not groups.is_empty();var summary:Array=[];var pond_count:=0
	for id:String in groups:
		if Vector2(groups[id][0].root_position).distance_to(Vector2(12,7.8))<3.5: pond_count+=1
		var main:=0;var companion:=0;var grasses:=0;var indices:Array=[]
		for record:Dictionary in groups[id]:
			main+=int(record.cluster_role=="main");companion+=int(record.cluster_role=="companion");grasses+=int(record.cluster_role=="grass")
			groups_ok=groups_ok and not indices.has(record.cluster_index);indices.append(record.cluster_index)
			groups_ok=groups_ok and record.root_position==groups[id][0].root_position
		groups_ok=groups_ok and main==1 and companion in [2,3] and grasses<=2
		summary.append({"id":id,"main":main,"companions":companion,"grass":grasses})
	_check(groups_ok and grass_count>0,"actual fixed-seed shore clusters contain one main and two or three companions, with real optional grass")
	_check(batches_ok and parts.size()<=3,"actual shore instances stay in at most three MultiMesh batches per block with no individual stone Nodes")
	_check(clean,"actual stone full projected ellipse clears water, original house-road-courtyard-door masks and plant trunks")
	_check(ground_ok,"each actual installed stone has visible and buried mother-mesh vertices against true terrain")
	facts.clusters={"count":groups.size(),"pond_clusters":pond_count,"stones":stone_count,"grass":grass_count,"groups":summary,"vertex_height_residuals":residuals,"batch_max_color_error":color_error,"batch_color_samples":batch_errors,"color_tolerance":"<=1/255 linear channel tolerance; measured installed color rounding is recorded separately, transforms still equal_approx. No packing-bit-depth claim."}
func _after_checks()->void:
	_layout_checks()
	var original:Array=_records();var ids:Dictionary=_block_ids()
	var renamed:Dictionary=demo.state.set_house_name("h1","石岸小屋")
	demo._after_edit(renamed,"terrace",false);await _wait();demo.town.shore.rebuild()
	_check(renamed.ok and _records()==original and _block_ids()==ids,"real name edit preserves shore records and cached block identities")
	var pond_points:Array[Vector2]=[Vector2(-14,5)]
	var water:Dictionary=demo.state.add_water(pond_points,2.8,"pond")
	demo._after_edit(water,"terrace");await _wait()
	_check(water.ok and _records()!=original,"real State pond edit regenerates local shore records")
	var far:=0;var far_kept:=true
	for key:Vector2i in ids:
		if Rect2(Vector2(key)*8,Vector2.ONE*8).grow(5).has_point(Vector2(-14,5)): continue
		if demo.town.shore.blocks.has(key): far+=1;far_kept=far_kept and demo.town.shore.blocks[key].get_instance_id()==ids[key]
	_check(far>0 and far_kept,"local water edit retains remote shore block identities")
	demo._after_edit(demo.state.undo(),"history");await _wait()
	_check(_records()==original,"real pond undo restores exact fixed-seed shore records and transforms")
	var points:Array[Vector2]=[]
	for index in range(13): points.append(Vector2(-15,-8+index))
	var road:Dictionary=demo.state.add_road(points);demo._after_edit(road,"road")
	var pending:bool=demo.edit_pending();var first:int=demo.town.budget_rebuild.generation
	demo._after_edit(demo.state.undo(),"history")
	var latest:int=demo.town.budget_rebuild.generation
	await _wait()
	_check(road.ok and pending and latest>first and demo.town.budget_rebuild.committed_generation==latest and _records()==original,"actual long-road edit superseded by real undo publishes only latest Budget shore layout")
	var city:=State.new();var restored:Dictionary=city.restore(demo.state.snapshot())
	var sync:=Shore.new();sync.setup(city);sync.record_only=true;sync.rebuild()
	var synced:Array=[];var keys:Array=sync.prepared_blocks.keys();keys.sort()
	for key:Vector2i in keys:
		if not sync.prepared_blocks[key].is_empty(): synced.append([key,sync.prepared_blocks[key]])
	_check(restored.ok and synced==_records(),"actual latest Budget shore records exactly match independent fresh synchronous derivation")
	facts.budget={"first_generation":first,"latest_generation":latest,"report":demo.edit_budget_report()};sync.free()
func _sample()->Dictionary:
	for ignored in range(15): await process_frame
	var times:Array[float]=[];var draws:Array[float]=[];var previous:=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();times.append(float(now-previous)/1000.0);previous=now
		draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	times.sort();draws.sort()
	return {"frames":120,"warm_frames":15,"wall_p95_ms":times[113],"wall_max_ms":times[-1],"draw_median":draws[60],"draw_max":draws[-1]}
func _view(row:Dictionary)->void:
	demo.focus=row.focus;demo.zoom=row.zoom;demo.yaw=row.yaw;demo.pitch=row.pitch;demo._update_camera();demo.town.clear_preview()
	var performance:Dictionary=await _sample()
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(destination+"/"+row.id+".png")==OK,"actual fixed-camera shore screenshot: "+row.id)
	facts.views.append({"camera":row,"performance":performance,"shore":demo.town.shore.diagnostics()})
func _run()->void:
	var before:bool="--before" in OS.get_cmdline_user_args()
	destination=OUT+("/before" if before else "/after")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(destination))
	personal=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var sample_bytes:=FileAccess.get_file_as_bytes(SAMPLE)
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=destination+"/临时作品库_"+str(Time.get_ticks_usec());root.add_child(demo)
	demo.life.set_process(false);demo.ui_layer.visible=false
	var deadline:=Time.get_ticks_msec()+25000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(DisplayServer.get_name()!="headless" and not demo.music.audio_report.is_empty(),"actual GL and original production PCM ready; Life paused")
	var audio:Array=_identity();var clock:float=demo.music._playback_clock()
	var result:Dictionary=demo.state.restore(JSON.parse_string(sample_bytes.get_string_from_utf8()));demo._after_edit(result,"history");await _wait()
	_check(result.ok,"authored landform sample restores through production State")
	var snapshot:Dictionary=demo.state.snapshot()
	var records:Array=_records()
	if before:
		FileAccess.open(destination+"/shore_before.gd.txt",FileAccess.WRITE).store_buffer(FileAccess.get_file_as_bytes("res://scripts/visual/city_creation_shore.gd"))
		FileAccess.open(destination+"/records.var",FileAccess.WRITE).store_buffer(var_to_bytes(records))
	for row:Dictionary in VIEWS: await _view(row)
	_check(demo.state.snapshot()==snapshot and FileAccess.get_file_as_bytes(SAMPLE)==sample_bytes,"fixed shore viewing preserves authored State and source sample")
	if not before: await _after_checks()
	_check(_identity()==audio and demo.music.get_child_count()==demo.music.STEMS.size()+4 and demo.music._playback_clock()>clock,"all shared PCM and the fixed long-track plus four-short pool keep identities with advancing transport")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal city bytes preserved")
	facts.sample_sha256=_sha(sample_bytes);facts.records_sha256=_sha(var_to_bytes(records));facts.record_blocks=records.size();facts.life_paused=true;facts.vsync=0;facts.max_fps=180
	var report:Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"count":checks.size(),"facts":facts,"scope":"Fixed actual GL views, paused Life/live Music; capped wall reference, not throughput/full-grass/economy acceptance. After adds actual installed geometry, public State water/road/undo and real latest Budget checks.","command":"Godot_v4.7.2-stable_win64_console.exe --path . --audio-driver Dummy --max-fps 180 --script tools/check_creation_shore_clusters_live.gd"+(" -- --before" if before else "")}
	FileAccess.open(destination+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("SHORE_CLUSTERS ",JSON.stringify(report))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false)
	for player:AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player:AudioStreamPlayer in demo.music._effects: player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout;quit(0 if failures.is_empty() else 1)
