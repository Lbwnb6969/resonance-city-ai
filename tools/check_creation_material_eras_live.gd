extends "res://tools/check_creation_physical_material_live.gd"
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
func run()->void:
	OUT="res://验证记录/M84/material_sample_20261031/eras_final"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var voices:=pool()
	var city:=State.new();city.initialize_free();var eras:Array=["pastoral","renaissance","clockwork","modern_eco"]
	for i in range(4):
		check(Brush.select(city,eras[i],Brush.prototypes(eras[i])[0]),"public era brush "+eras[i])
		check(city.add_house(Vector2(-30+i*7,-20)).ok,"public actual house "+eras[i])
	await show(city,Vector2(-20,-20),"四风貌默认BRDF核对");quiet();demo.ui_layer.hide();demo.life.set_process(false);demo.set_process(false)
	var original:Dictionary=demo.state.snapshot();var recording:=Span.start();facts.eras=[]
	for i in range(4):
		demo.focus=Vector3(-30+i*7,.6,-20);demo.zoom=9.;demo.pitch=.55;demo.yaw=.7;demo._update_camera()
		var nodes:=wall_nodes(demo.town.house_roots["h"+str(i+1)])
		check(not nodes.is_empty() and nodes.all(func(n):return not n.material_override.shader.code.contains("void light()")),"actual "+eras[i]+" wall batches compile the complete default BRDF")
		facts.eras.append({"era":eras[i],"house_id":"h"+str(i+1),"wall_batches":nodes.size()})
		for phase in [0,1,2]:
			demo._set_light_phase(phase);for frame in range(6):await process_frame
			await capture(eras[i]+"_"+str(phase))
	check(demo.state.snapshot()==original,"all era lighting views preserve author records")
	facts.pcm=Span.finish(recording,OUT+"/eras_Master.wav");check(facts.pcm.ok,"actual four-era mixed PCM audible and unclipped")
	check(pool()==voices,"actual audio pool unchanged")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("MATERIAL_ERAS_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
