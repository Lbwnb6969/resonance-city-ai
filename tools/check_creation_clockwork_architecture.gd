extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const Fixture=preload("res://tests/test_city_creation_clockwork.gd")
const OUT="res://验证记录/四库路线_2026-10-17/Phase8"
var demo
var checks:Array=[]
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _wait()->void:
	var end:=Time.get_ticks_msec()+30000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<end:await process_frame
	await physics_frame;await process_frame
func _capture(name_value:String)->void:
	await process_frame;await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+name_value+".png")
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:PackedByteArray=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var city:RefCounted=Fixture.fixture();city.set_house_era("h1","clockwork")
	city.add_cell("h1",1,0,0);city.add_cell("h1",0,0,1);city.add_cell("h1",1,0,1)
	city.set_house_era("h3","clockwork");city.add_cell("h3",0,0,1)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false);demo.ui_layer.visible=false
	demo._after_edit(demo.state.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))),"history");await _wait()
	demo.focus=Vector3(-9,2,-2);demo.zoom=15;demo.yaw=.35;demo.pitch=.65;demo._update_camera();demo.town.clear_preview()
	var house_root:Node3D=demo.town.buildings.get_node("h1")
	var record:Array=house_root.get_meta("clockwork_mansards",[])
	var greenhouse:Dictionary=house_root.get_meta("conservatory",{})
	_check(record.size()==2 and greenhouse.get("on_roof",false) and greenhouse.arch_segments==10,"actual renderer builds joined two-storey mansard and automatic curved roof greenhouse")
	_check(house_root.get_meta("era_theme")=="clockwork" and demo.town.buildings.get_node("h2").get_meta("era_theme")=="renaissance" and demo.town.buildings.get_node("h4").get_meta("era_theme")=="pastoral","actual town retains three independent era silhouettes")
	var ray:=PhysicsRayQueryParameters3D.create(Vector3(-14,10,-2),Vector3(-14,0,-2),1)
	var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(ray)
	_check(not hit.is_empty() and hit.collider.get_meta("house_id","")=="h1" and hit.collider.get_meta("cell_id","") in greenhouse.cell_ids and float(hit.position.y)>5.7,"actual vertical picking ray hits the glazed rooftop with original house and room identity")
	await _capture("01_clockwork_brick_mansard_roof_garden")
	var before:Dictionary=house_root.get_meta("house_color_cache");var changed:Dictionary=demo.state.set_house_palette("h1",2)
	demo._after_edit(changed,"palette");await _wait()
	var updated:Node3D=demo.town.buildings.get_node("h1")
	_check(changed.ok and updated.get_meta("era_theme")=="clockwork" and updated.get_meta("house_color_cache").index==2,"actual palette edit updates brick recipe and keeps clockwork architecture")
	while demo.light_phase!=2:demo._toggle_light()
	var material:ShaderMaterial=demo.town.conservatory.clockwork_glass_material
	_check(material!=null and float(material.get_shader_parameter("warmth"))==1. and float(material.get_shader_parameter("evening"))==1.,"actual night switch illuminates clockwork plants through warm glass shader")
	await _capture("02_clockwork_night_winter_garden")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated third-era building validation preserves personal save bytes")
	var report:Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"roof":record,"greenhouse":greenhouse}
	FileAccess.open(OUT+"/architecture.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("CLOCKWORK_ARCH ",JSON.stringify({"ok":report.ok,"count":checks.size(),"failures":failures}))
	demo.queue_free();await process_frame;await create_timer(.1).timeout;quit(0 if failures.is_empty() else 1)
