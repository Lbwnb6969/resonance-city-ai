extends SceneTree
## Paired actual-GL view of the rocky slope/wet-sand toe on the pond example.
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/岩坡湿砂交界_2026-10-16"
var demo
var checks:Array=[]
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _capture(label:String)->void:
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"captured actual GL view: "+label)
func _smooth_edge(a:float,b:float,value:float)->float:
	var t:=clampf((value-a)/(b-a),0.0,1.0);return t*t*(3.0-2.0*t)
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo)
	var deadline:=Time.get_ticks_msec()+30000
	while (demo.music.audio_report.is_empty() or not demo.ambience.report().ready) and Time.get_ticks_msec()<deadline: await process_frame
	var restored:Dictionary=demo.state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/地貌河湾样例.json")))
	_check(restored.ok,"real pond/ridge example restores through State")
	demo._after_edit(restored,"history")
	deadline=Time.get_ticks_msec()+30000
	while demo.edit_pending() and Time.get_ticks_msec()<deadline: await process_frame
	demo.life.set_process(false);demo.ui_layer.visible=false;demo.town.clear_preview()
	demo.focus=Vector3(12.4,0.2,8.8);demo.zoom=13.0;demo.pitch=.78;demo.yaw=.62;demo._update_camera()
	var material:ShaderMaterial=demo.town.ground_material
	_check(material.get_shader_parameter("bank_sand_enabled")==true,"terrain material uses the shared recovered wet-sand palette")
	var best:=0.0;var best_sample:Dictionary={}
	for z in range(-48,48):
		for x in range(-48,48):
			var at:=Vector2(x*0.5,z*0.5)
			var distance:float=demo.town.water_field.sample_world(at)
			var height:float=demo.state.ground_height(at)
			var rock:float=demo.state._ground_terrain.rockiness_at(at)
			var toe:=rock*(1.0-_smooth_edge(.16,1.12,distance))*(1.0-_smooth_edge(-.10,.34,height))
			if toe>best: best=toe;best_sample={"at":at,"distance":distance,"height":height,"rock":rock,"toe":toe}
	material.set_shader_parameter("cliff_shore_toe_enabled",false)
	_check(material.get_shader_parameter("cliff_shore_toe_enabled")==false,"live terrain shader exposes the shore-toe A/B control")
	for ignored in range(8):await process_frame
	await _capture("01_露岩与湿砂分离")
	material.set_shader_parameter("cliff_shore_toe_enabled",true)
	for ignored in range(8):await process_frame
	await _capture("02_坡脚渐入湿砂")
	_check(demo.state.waters.size()==1 and demo.state.terrain_strokes.size()==12,"paired view retains the real authored pond and terrain strokes")
	var cliff:Texture2D=material.get_shader_parameter("cliff_surface")
	_check(cliff!=null and cliff.resource_path=="res://资源/自然参考/层理岩壁.png","shared Foundation cliff texture remains bound")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal city bytes remain unchanged")
	var result:Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":{"ponds":demo.state.waters.size(),"terrain_strokes":demo.state.terrain_strokes.size(),"best_toe_sample":best_sample,"bank_sand_enabled":material.get_shader_parameter("bank_sand_enabled"),"paired_camera":{"focus":demo.focus,"zoom":demo.zoom,"pitch":demo.pitch,"yaw":demo.yaw}}}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("SHORE_ROCK_TOE ",JSON.stringify(result))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for p:AudioStreamPlayer in demo.music._players.values():p.stop()
	for p:AudioStreamPlayer in demo.music._effects:p.stop()
	for p:AudioStreamPlayer in demo.ambience.players.values():p.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout;quit(0 if failures.is_empty() else 1)
