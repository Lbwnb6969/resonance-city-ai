extends SceneTree
## Same current city, shader-only A/B; music transport remains live.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const OUT = "res://验证记录/草地调色_2026-10-17"
const PALETTE = "res://scripts/visual/shaders/creation_meadow_palette.gdshaderinc"
var demo
var checks: Array = []
var failures: Array[String] = []
var materials: Array[ShaderMaterial] = []
var originals: Array[Shader] = []
var old_shaders: Array[Shader] = []
var facts: Dictionary = {"views":[]}

func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _geometry() -> Array:
	var rows: Array = []
	for node: Node in demo.town.find_children("*","MeshInstance3D",true,false):
		rows.append([node.get_instance_id(),node.mesh.get_instance_id(),hash(node.mesh.surface_get_arrays(0))])
	for node: Node in demo.town.find_children("*","MultiMeshInstance3D",true,false):
		rows.append([node.get_instance_id(),node.multimesh.get_instance_id(),hash(node.multimesh.buffer),node.multimesh.custom_aabb])
	return rows
func _audio() -> Array:
	var rows: Array = []
	for player: AudioStreamPlayer in demo.music._players.values(): rows.append([player.get_instance_id(),player.stream.get_instance_id()])
	for player: AudioStreamPlayer in demo.music._effects: rows.append(player.get_instance_id())
	return rows
func _capture(label: String,old: bool) -> void:
	for i in range(materials.size()): materials[i].shader=old_shaders[i] if old else originals[i]
	for ignored in range(8): await process_frame
	var frames: Array[float] = []
	var previous := Time.get_ticks_usec()
	for ignored in range(90):
		await process_frame
		var now := Time.get_ticks_usec();frames.append(float(now-previous)/1000.0);previous=now
	frames.sort()
	await RenderingServer.frame_post_draw
	var name_value := ("旧色_" if old else "新色_")+label
	_check(root.get_texture().get_image().save_png(OUT+"/"+name_value+".png")==OK,"actual GL image saved: "+name_value)
	facts.views.append({"label":name_value,"p95_ms":frames[85],"max_ms":frames[-1],"frames":90})
func _run() -> void:
	if DisplayServer.get_name()=="headless":
		push_error("This shader A/B needs a real GL viewport");quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal := FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo)
	demo.life.set_process(false);demo.ui_layer.visible=false
	var deadline := Time.get_ticks_msec()+20000
	while (demo.music.audio_report.is_empty() or not demo.ambience.report().ready) and Time.get_ticks_msec()<deadline: await process_frame
	_check(not demo.music.audio_report.is_empty() and demo.ambience.report().ready,"production music and ambience ready")
	demo.set_process(false);demo.town.set_process(false);demo.town.wildlife.set_process(false)
	demo.town.clear_preview()
	materials.assign([demo.town.ground_material,demo.town.water_material,demo.town.path_edge.material,demo.town.meadow.materials.lawn,demo.town.meadow.materials.grass])
	var old_palette := FileAccess.get_file_as_string("res://废弃/草地调色前_2026-10-17_creation_meadow_palette.gdshaderinc.txt")
	_check(not old_palette.is_empty(),"archived pre-change palette available")
	for material: ShaderMaterial in materials:
		originals.append(material.shader)
		var shader := Shader.new()
		shader.code=material.shader.code.replace('#include "'+PALETTE+'"',old_palette).replace("vec3(0.88,0.90,0.86)","vec3(0.86,0.90,0.85)").replace("vec3(1.05,1.06,0.97)","vec3(1.09,1.10,0.98)")
		old_shaders.append(shader)
	for material: ShaderMaterial in [materials[3],materials[4]]: material.set_shader_parameter("meadow_time_override",7.5)
	var state_before: Dictionary=demo.state.snapshot();var geometry_before := _geometry();var audio_before := _audio();var clock: float=demo.music._playback_clock()
	for phase in range(3):
		demo.light_phase=phase;demo.environment_rig.apply(phase);demo.town.set_light_phase(phase)
		demo.focus=Vector3(-2,.2,5.5);demo.zoom=9;demo.pitch=.74;demo.yaw=.62;demo._update_camera()
		for old: bool in [true,false]: await _capture(["日间近景","夕光近景","夜间近景"][phase],old)
	_check(demo.state.snapshot()==state_before,"shader and light changes preserve the complete city state")
	_check(_geometry()==geometry_before,"shader A/B preserves all mesh resources instance buffers and bounds")
	_check(_audio()==audio_before and demo.music._playback_clock()>clock,"nine long voices and four short slots retain identity and advancing transport")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal save bytes preserved")
	facts["wind_time"]=7.5;facts["shared_materials"]=materials.size()
	var report := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/结果.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("MEADOW_TONE ",JSON.stringify(report))
	demo.music.set_process(false);demo.ambience.set_process(false)
	for player: AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player: AudioStreamPlayer in demo.music._effects: player.stop()
	for player: AudioStreamPlayer in demo.ambience.players.values(): player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame
	materials.clear();originals.clear();old_shaders.clear()
	await create_timer(.15).timeout;quit(0 if failures.is_empty() else 1)
