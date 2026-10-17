extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Bounds=preload("res://scripts/world/city_creation_bounds.gd")
const GrassMask=preload("res://scripts/visual/city_creation_grass_mask.gd")
const Outcrops=preload("res://scripts/visual/city_creation_outcrops.gd")
const OUT="res://验证记录/坡地伴石_2026-10-17"
var checks:Array=[]
var failures:Array[String]=[]
var demo

func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)

func _rows(city:RefCounted)->Dictionary:
	var counts:Dictionary={}
	var hashes:Dictionary={}
	for z in range(floori(Bounds.LAND_RECT.position.y/8.0),ceili(Bounds.LAND_RECT.end.y/8.0)):
		for x in range(floori(Bounds.LAND_RECT.position.x/8.0),ceili(Bounds.LAND_RECT.end.x/8.0)):
			var block:=Vector2i(x,z)
			var mask=GrassMask.new();mask.setup(city,block)
			var plants:Array=Outcrops.plant_rows(city,block)
			var rows:Dictionary=Outcrops.records(city,block,mask,plants)
			var amount:int=rows.boulder_a.size()+rows.boulder_b.size()
			if amount>0:
				counts[block]=amount
				hashes[block]=var_to_bytes(rows).hex_encode()
	return {"counts":counts,"hashes":hashes}

func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var city:=State.new()
	var data:Variant=JSON.parse_string(FileAccess.get_file_as_string("res://数据/地貌河湾样例.json"))
	var loaded:Dictionary=city.restore(data)
	_check(loaded.ok,"landform showcase restores")
	if not loaded.ok:quit(1);return
	city.prepare_ground_height()
	var first:=_rows(city)
	var second:=_rows(city)
	var total:=0;var max_block:=0
	for amount:int in first.counts.values():total+=amount;max_block=maxi(max_block,amount)
	_check(total>6,"sloped showcase gains visible recovered Foundation slope stones")
	_check(first.hashes==second.hashes,"slope-stone transforms are stable across rebuilds")
	_check(max_block<=Outcrops.MAX_PER_BLOCK,"slope-stone density respects the per-block cap")
	var facts={"total":total,"blocks":first.counts.size(),"max_per_block":max_block,"counts":first.counts}
	if DisplayServer.get_name()=="headless":
		_check(false,"actual OpenGL scene is required for slope-stone visual verification")
		print("LANDFORM_SCATTER ",JSON.stringify({"ok":false,"checks":checks,"failures":failures,"facts":facts}));quit(1);return
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo)
	var deadline:=Time.get_ticks_msec()+30000
	while (demo.music.audio_report.is_empty() or not demo.ambience.report().ready) and Time.get_ticks_msec()<deadline:await process_frame
	demo.life.set_process(false)
	var restored:Dictionary=demo.state.restore(data);demo._after_edit(restored,"history")
	deadline=Time.get_ticks_msec()+20000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	_check(not demo.edit_pending(),"landform example visual rebuild completes")
	demo.focus=Vector3(10.5,0.7,9.5);demo.zoom=22.0;demo.pitch=0.80;demo._update_camera()
	for ignored in range(12):await process_frame
	var visible_stones:=0
	for block:Node3D in demo.town.meadow.blocks.values():
		for part:String in ["Meadow_boulder_a","Meadow_boulder_b"]:
			var batch:=block.get_node_or_null(part) as MultiMeshInstance3D
			if batch!=null:visible_stones+=batch.multimesh.instance_count
	_check(visible_stones>0 and visible_stones<=total,"rendered Foundation stones agree with the derived landform batch")
	demo.ui_layer.visible=false;await process_frame;await RenderingServer.frame_post_draw
	var image:Image=root.get_texture().get_image()
	_check(image.save_png(OUT+"/坡地实窗.png")==OK,"actual GL landform image captured")
	var frame_ms:Array[float]=[];var previous:=Time.get_ticks_usec()
	for ignored in range(60):await process_frame;var now:=Time.get_ticks_usec();frame_ms.append(float(now-previous)/1000.0);previous=now
	frame_ms.sort();facts["rendered_stones"]=visible_stones;facts["frame_p95_ms"]=frame_ms[56];facts["frame_max_ms"]=frame_ms[-1]
	var report={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/结果.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("LANDFORM_SCATTER ",JSON.stringify(report))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for player:AudioStreamPlayer in demo.music._players.values():player.stop()
	for player:AudioStreamPlayer in demo.music._effects:player.stop()
	for player:AudioStreamPlayer in demo.ambience.players.values():player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
	quit(0 if failures.is_empty() else 1)
