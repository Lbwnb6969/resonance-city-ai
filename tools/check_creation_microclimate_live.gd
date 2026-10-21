extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/四时声学_2026-10-21"
var demo
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	var until:=Time.get_ticks_msec()+30000
	while (demo.edit_pending() or demo._edit_ui_pending or demo.music._loading or not demo.ambience._ready_pcm) and Time.get_ticks_msec()<until:await process_frame
	for i:int in range(15):await process_frame
func click(button:Control)->void:
	var at:=button.get_global_rect().get_center();var move:=InputEventMouseMotion.new();move.position=at;root.push_input(move);await process_frame
	for pressed:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=pressed;root.push_input(event);await process_frame
	await settle()
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=120
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/隔离作品";root.add_child(demo);demo.life.set_process(false)
	await settle();demo.focus=Vector3(0.,.7,0.);demo.zoom=26.;demo._update_camera();demo.toast.hide();demo.toast_time=0.
	var panel:Control=demo.ui_layer.get_child(0).get_node("Actions")
	var authored:Dictionary=demo.state.snapshot();var clock:float=demo.music._playback_clock()
	var music_ids:Array=[];var nature_ids:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():music_ids.append(player.get_instance_id())
	for player:AudioStreamPlayer in demo.ambience.players.values():nature_ids.append(player.get_instance_id())
	var screenshots:Dictionary={}
	for mode:String in demo.State.Microclimate.IDS:
		await click(panel.weather);demo.life.set_process(false);await create_timer(.65).timeout
		check(demo.state.microclimate==mode and demo.weather_visual._mode==mode,"real season seal selects "+mode)
		check(demo.light_phase==demo.State.Microclimate.LIGHTS[demo.State.Microclimate.IDS.find(mode)],"season applies actual environment light")
		var multi:MultiMesh=demo.weather_visual.particles.multimesh
		check(multi.instance_count==192 and multi.visible_instance_count==192 and demo.weather_visual.particles.visible,"finite populated particle batch is visible")
		var valid:=true
		for i:int in range(multi.instance_count):
			var transform:=multi.get_instance_transform(i)
			valid=valid and transform.origin.is_finite() and is_equal_approx(transform.basis.determinant(),1.)
		check(valid and is_equal_approx(float(demo.weather_visual.material.get_shader_parameter("music_clock")),demo.music._playback_clock()),"instances remain finite and firefly phase follows real PCM clock")
		check(float(demo.town.ground_material.get_shader_parameter("season_gold"))==(1. if mode=="autumn_gold" else 0.),"actual meadow material receives season color")
		check(float(demo.town.water_material.get_shader_parameter("season_rain"))==(1. if mode=="sun_shower" else 0.),"actual water material receives summer rain rings")
		if mode=="sun_shower":check(demo.ambience._rain_mix>.7 and demo.ambience._pcm.samples.rain!=demo.ambience._pcm.samples.wind,"actual nature mixer crossfades into distinct rain PCM")
		await RenderingServer.frame_post_draw
		var shot:=root.get_texture().get_image();screenshots[mode]=shot
		shot.save_png(OUT+"/"+mode+".png")
	check(screenshots.spring_breeze.get_data()!=screenshots.autumn_gold.get_data() and screenshots.sun_shower.get_data()!=screenshots.starlight_fireflies.get_data(),"four actual rendered scenes differ")
	var now:Dictionary=demo.state.snapshot()
	check(now.houses==authored.houses and now.roads==authored.roads and demo.state.life_progress==authored.life_progress,"season clicks preserve construction and earned life ledger")
	var old_gain:float=demo.state.cafe_afterglow_extension("h1")
	demo._after_edit(demo.state.undo(),"history");await settle();demo.life.set_process(false)
	check(demo.state.microclimate=="autumn_gold" and demo.weather_visual._mode=="autumn_gold" and demo.light_phase==1,"undo restores actual season particles and lighting")
	demo._after_edit(demo.state.redo(),"history");await settle();demo.life.set_process(false)
	check(demo.state.microclimate=="starlight_fireflies" and demo.light_phase==2,"redo restores starry weather")
	for resolution:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=resolution;await process_frame;await process_frame
		check(Rect2(Vector2.ZERO,Vector2(resolution)).encloses(panel.get_global_rect()) and panel.weather.is_visible_in_tree(),"five top seals fit "+str(resolution))
	var final_music:Array=[];var final_nature:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():final_music.append(player.get_instance_id())
	for player:AudioStreamPlayer in demo.ambience.players.values():final_nature.append(player.get_instance_id())
	check(music_ids==final_music and nature_ids==final_nature and final_music.size()==12 and demo.music._effects.size()==4 and final_nature.size()==2 and demo.music._playback_clock()>clock,"weather preserves fixed audio nodes and continuous transport")
	var result:Dictionary={"checks":checks,"failures":failures,"ok":failures.is_empty(),"rain_mix":demo.ambience._rain_mix}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("MICROCLIMATE_LIVE ",JSON.stringify(result))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
