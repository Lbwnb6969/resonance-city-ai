extends "res://tools/check_creation_physical_material_live.gd"
## Export environment script from 8e0a55325deaeb144db1cd9392a2e0e406b5f73c.
const ENV_KEYS:=["ambient_light_sky_contribution","ambient_light_color","ambient_light_energy","tonemap_exposure","tonemap_white"]
const SUN_KEYS:=["light_energy","shadow_bias","shadow_normal_bias","shadow_opacity","directional_shadow_max_distance"]
func settings()->Dictionary:
	var result:={"environment":{},"sun":{}}
	for field:String in ENV_KEYS:result.environment[field]=demo.environment_rig.environment.get(field)
	for field:String in SUN_KEYS:result.sun[field]=demo.sun.get(field)
	result.context={"background_mode":demo.environment_rig.environment.background_mode,"background_color":demo.environment_rig.environment.background_color,"ambient_source":demo.environment_rig.environment.ambient_light_source,"sun_color":demo.sun.light_color,"sun_rotation_degrees":demo.sun.rotation_degrees,"fog_enabled":demo.environment_rig.environment.fog_enabled,"fog_depth_begin":demo.environment_rig.environment.fog_depth_begin,"fog_depth_end":demo.environment_rig.environment.fog_depth_end,"pitch":demo.pitch,"zoom":demo.zoom}
	return result
func baseline_settings(path:String)->Dictionary:
	var source=load(path)
	if source==null:return {}
	# Read the old rig before opening the live scene, in its own viewport.
	# Late baseline construction triggers texture-exit diagnostics in this probe.
	var sandbox:=SubViewport.new();sandbox.own_world_3d=true;sandbox.render_target_update_mode=SubViewport.UPDATE_DISABLED;root.add_child(sandbox)
	var prior=source.new();var holder:=Node3D.new();sandbox.add_child(holder);prior.setup(holder);var result:Dictionary={}
	for phase in [0,1,2]:
		prior.apply(phase);var row:={"environment":{},"sun":{}}
		for field:String in ENV_KEYS:row.environment[field]=prior.environment.get(field)
		for field:String in SUN_KEYS:row.sun[field]=prior.sun.get(field)
		result[phase]=row
	sandbox.free();return result
func restore_settings(config:Dictionary)->void:
	for field:String in ENV_KEYS:demo.environment_rig.environment.set(field,config.environment[field])
	for field:String in SUN_KEYS:demo.sun.set(field,config.sun[field])
func candidate(group:String,phase:int)->void:
	var env:Environment=demo.environment_rig.environment
	if group in ["fill","combined"]:
		env.ambient_light_sky_contribution=.52;env.ambient_light_color=Color(["bfd4e6","8a86a6","22334d"][phase]);env.ambient_light_energy=[.44,.38,.20][phase]
	if group in ["sun","combined"] and phase==0:demo.sun.light_energy=1.12
	if group in ["tone","combined"]:
		env.tonemap_exposure=[.80,.86,1.02][phase];env.tonemap_white=[2.35,2.20,1.95][phase]
	if group in ["shadow","combined"]:
		demo.sun.shadow_bias=.018;demo.sun.shadow_normal_bias=1.15;demo.sun.shadow_opacity=.82;demo.sun.directional_shadow_max_distance=92.
func run()->void:
	OUT="res://验证记录/M84/environment_20261031/groups"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var baseline:="res://验证记录/M84/environment_20261031/before_environment.gd"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--baseline="):baseline=arg.trim_prefix("--baseline=")
	var baselines:=baseline_settings(baseline);check(not baselines.is_empty(),"original environment script exported")
	if baselines.is_empty():quit(1);return
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var voices:=pool()
	var city:RefCounted=Fixture.courtyard("ring","none").city
	for row:Array in [[Vector2(-17,-15),"olive"],[Vector2(-17,-20),"golden_tree"],[Vector2(-19,-23),"cypress"]]:check(city.place_plant(row[0],row[1]).ok,"actual plant fixture "+row[1])
	check(city.add_road([Vector2(-32,-10),Vector2(-17,-10)] as Array[Vector2],"path","none").ok,"actual foreground path")
	await show(city,Vector2(-24,-16),"环境光分组样板");quiet();demo.ui_layer.hide();demo.life.set_process(false);demo.set_process(false);demo.town.wildlife.set_process(false);demo.town.set_process(false);freeze(0.)
	var original:Dictionary=demo.state.snapshot();var solid:=structure();var record:=Span.start()
	facts.groups=[]
	for subject:String in ["court","facade","overview"]:
		demo.focus=Vector3(-24.4,.8,-16.4);demo.zoom=16.;demo.pitch=.8;demo.yaw=.25
		if subject=="facade":demo.focus=Vector3(-24,.8,-12);demo.zoom=9.;demo.pitch=.22
		elif subject=="overview":demo.zoom=30.
		demo._update_camera()
		for phase in [0,1,2]:
			demo._set_light_phase(phase)
			for group:String in ["baseline","fill","sun","tone","shadow","combined"]:
				restore_settings(baselines[phase]);candidate(group,phase)
				for frame in range(6):await process_frame
				await capture(subject+"_"+str(phase)+"_"+group)
				facts.groups.append({"subject":subject,"phase":phase,"group":group,"settings":settings()})
	check(structure()==solid and demo.state.snapshot()==original,"all candidate groups preserve actual court geometry and author rights")
	facts.pcm=Span.finish(record,OUT+"/group_Master.wav");check(facts.pcm.ok,"candidate drawing retains audible unclipped Master")
	check(pool()==voices,"audio pool unchanged")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("ENVIRONMENT_GROUPS_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
