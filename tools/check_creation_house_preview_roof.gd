extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/房屋预览屋顶_2026-10-17"
var demo
var checks:Array=[]
var failures:Array[String]=[]

func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)

func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(1440,900)
	demo=Scene.instantiate();demo.persistence=false;root.add_child(demo)
	for ignored in range(8):await process_frame
	demo.life.set_process(false)
	var snapshot:Dictionary=demo.state.snapshot()
	var cells:Array=[
		{"id":"preview_a","x":0,"z":0,"level":0,"kind":"room"},
		{"id":"preview_b","x":1,"z":0,"level":0,"kind":"room"},
		{"id":"preview_c","x":0,"z":1,"level":0,"kind":"room"},
	]
	demo.town.set_house_stroke_preview(Vector2(-5.0,-5.0),cells,true,0.0)
	await process_frame
	var roof_count:int=int(demo.town.preview.get_meta("stroke_roofs",0))
	_check(roof_count==2,"L-shaped room stroke gets two contiguous gable preview groups")
	_check(demo.town.preview.get_meta("stroke_cells",[]).size()==3,"preview keeps all pending room cells")
	_check(demo.state.snapshot()==snapshot,"roof preview does not mutate authoritative city state")
	var mesh_count:int=demo.town.preview.find_children("*","MeshInstance3D",true,false).size()
	_check(mesh_count>=5,"preview contains translucent room volumes, outlines and roof meshes")
	demo.town.set_house_stroke_preview(Vector2(-5.0,-5.0),cells,false,0.0)
	_check(int(demo.town.preview.get_meta("stroke_roofs",0))==2,"invalid stroke keeps roof silhouette for clear feedback")
	if DisplayServer.get_name()!="headless":
		await RenderingServer.frame_post_draw
		_check(root.get_texture().get_image().save_png(OUT+"/L形预览.png")==OK,"actual GL preview image captured")
	var report={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":{"roof_groups":roof_count,"mesh_count":mesh_count}}
	FileAccess.open(OUT+"/结果.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("HOUSE_PREVIEW_ROOF ",JSON.stringify(report))
	demo.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for player:AudioStreamPlayer in demo.music._players.values():player.stop()
	for player:AudioStreamPlayer in demo.music._effects:player.stop()
	for player:AudioStreamPlayer in demo.ambience.players.values():player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
