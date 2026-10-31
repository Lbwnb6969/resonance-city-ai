extends "res://tools/check_creation_score_playback_live.gd"
## Export both baseline shader bytes from cb354b3555dbf83176346bf0e86dc27aecbfd6c9
## as before_creation_{foliage,lawn}.gdshader in --baseline-dir (defaults to BASE).
## Comparison sources and captured media stay in local verification records.
const Fixture=preload("res://tools/fixtures/city_creation_space_contract_fixture.gd")
const Foliage=preload("res://scripts/visual/shaders/creation_foliage.gdshader")
const Lawn=preload("res://scripts/visual/shaders/creation_lawn.gdshader")
const BASE:="res://验证记录/M84/meadow_light_20261031"
func freeze(time:float)->void:
	for material:Material in demo.town.foliage._materials.values():
		if material is ShaderMaterial:material.set_shader_parameter("wind_time_override",time)
	for key:String in ["lawn","grass"]:
		demo.town.meadow.materials[key].set_shader_parameter("meadow_time_override",time)
func geometry()->String:
	var rows:Array=[]
	for node:Node in demo.town.find_children("*","GeometryInstance3D",true,false):
		if not (demo.town.vegetation_layer.is_ancestor_of(node) or demo.town.meadow.is_ancestor_of(node)):continue
		if node is MeshInstance3D and node.mesh!=null:rows.append([str(demo.town.get_path_to(node)),node.transform,node.mesh.get_instance_id()])
		elif node is MultiMeshInstance3D and node.multimesh!=null:rows.append([str(demo.town.get_path_to(node)),node.transform,node.multimesh.get_instance_id(),node.multimesh.mesh.get_instance_id(),node.multimesh.buffer])
	return var_to_bytes(rows).hex_encode().sha256_text()
func run()->void:
	OUT=BASE+"/live_frozen"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var voices:=pool()
	var city:RefCounted=Fixture.courtyard("ring","none").city
	for row:Array in [[Vector2(-17,-15),"olive"],[Vector2(-16,-19),"golden_tree"],[Vector2(-18,-23),"cypress"],[Vector2(-20,-24),"shrub"]]:check(city.place_plant(row[0],row[1]).ok,"public authored plant "+str(row[1]))
	await show(city,Vector2(-21,-17),"树冠与草地光照");quiet();demo.life.set_process(false);demo.ui_layer.hide();demo.set_process(false);demo.town.wildlife.set_process(false);demo.town.set_process(false)
	var original:Dictionary=demo.state.snapshot();var record:=Span.start()
	var foliage_shader:Shader=Foliage;var lawn_shader:Shader=Lawn
	var current:={"foliage":foliage_shader.code,"lawn":lawn_shader.code}
	var before_dir:=BASE
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--baseline-dir="):before_dir=arg.trim_prefix("--baseline-dir=")
	var before:={"foliage":FileAccess.get_file_as_string(before_dir+"/before_creation_foliage.gdshader"),"lawn":FileAccess.get_file_as_string(before_dir+"/before_creation_lawn.gdshader")}
	check(not before.foliage.is_empty() and not before.lawn.is_empty(),"exact before sources present for controlled comparison")
	if before.foliage.is_empty() or before.lawn.is_empty():
		demo.queue_free();await process_frame;quit(1);return
	facts.views=[]
	for subject:String in ["court","canopy","grass","distant"]:
		if subject=="court":demo.focus=Vector3(-24.4,.8,-16.4);demo.zoom=18.;demo.pitch=.8;demo.yaw=.25
		elif subject=="canopy":demo.focus=Vector3(-17,1.8,-18);demo.zoom=9.;demo.pitch=.48;demo.yaw=2.5
		elif subject=="grass":demo.focus=Vector3(-24,.3,-9);demo.zoom=9.;demo.pitch=.18;demo.yaw=.25
		else:demo.focus=Vector3(-24.4,.8,-16.4);demo.zoom=36.;demo.pitch=.8;demo.yaw=.25
		demo._update_camera();freeze(0.)
		for i in range(3):await process_frame
		var meshes:=geometry()
		facts.views.append({"subject":subject,"focus":demo.focus,"zoom":demo.zoom,"pitch":demo.pitch,"yaw":demo.yaw})
		for phase:int in [0,1,2]:
			demo._set_light_phase(phase)
			for stage:String in ["before","foliage","final"]:
				foliage_shader.code=before.foliage if stage=="before" else current.foliage
				lawn_shader.code=current.lawn if stage=="final" else before.lawn
				for i in range(6):await process_frame
				await capture(subject+"_"+str(phase)+"_"+stage)
		check(geometry()==meshes,subject+" shading preserves mesh identities and instance buffers within its LOD")
	check(demo.state.snapshot()==original,"all shader comparisons preserve authorship and rights")
	foliage_shader.code=current.foliage;lawn_shader.code=current.lawn
	demo.focus=Vector3(-17,1.8,-18);demo.zoom=9.;demo.pitch=.48;demo.yaw=2.5;demo._set_light_phase(0);demo._update_camera();freeze(0.)
	for i in range(3):await process_frame
	var wind_meshes:=geometry();freeze(2.5)
	for i in range(6):await process_frame
	await capture("final_wind_2_5")
	check(geometry()==wind_meshes,"wind shader still leaves CPU instances and mesh identities unchanged")
	facts.pcm=Span.finish(record,OUT+"/meadow_Master.wav");check(facts.pcm.ok,"actual mixed audio remains audible and unclipped")
	check(pool()==voices,"audio pool unchanged")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("MEADOW_LIGHT_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
