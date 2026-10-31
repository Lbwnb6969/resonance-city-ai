extends "res://tools/check_creation_meadow_light_live.gd"
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Batcher=preload("res://scripts/visual/city_creation_mesh_batcher.gd")
func wall_nodes(parent:Node)->Array:
	return parent.find_children("*","MeshInstance3D",true,false).filter(func(n):return n.material_override is ShaderMaterial and n.material_override.get_meta("creation_wall_batch",false))
func material_colors(kind:int)->Array:
	var rows:Array=[]
	for node:MeshInstance3D in wall_nodes(demo.town.house_roots.h1):
		if int(node.material_override.get_shader_parameter("surface_kind"))!=kind:continue
		rows.append(var_to_bytes(node.mesh.surface_get_arrays(0)[Mesh.ARRAY_COLOR]).hex_encode())
	rows.sort();return rows
func structure()->String:
	var rows:Array=[]
	for node:MeshInstance3D in demo.town.house_roots.h1.find_children("*","MeshInstance3D",true,false):
		rows.append(var_to_bytes([node.transform,node.mesh.get_faces()]).hex_encode())
	rows.sort();return "\n".join(rows).sha256_text()
func run()->void:
	OUT="res://验证记录/M84/material_sample_20261031/live"
	var baseline:="res://验证记录/M84/material_sample_20261031/before_creation_wall.gdshader"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
		if arg.begins_with("--baseline="):baseline=arg.trim_prefix("--baseline=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var voices:=pool()
	var city:RefCounted=Fixture.courtyard("ring","none").city
	await show(city,Vector2(-24,-14),"木材金属材质样板");quiet();demo.ui_layer.hide();demo.life.set_process(false);demo.set_process(false);demo.town.wildlife.set_process(false);demo.town.set_process(false);freeze(0.)
	var original:Dictionary=demo.state.snapshot();var solid:=structure();var recording:=Span.start()
	var board:=Node3D.new();board.name="VerificationMaterialSamples";demo.town.add_child(board)
	for kind in range(7):
		var node:=MeshInstance3D.new();var sphere:=SphereMesh.new();sphere.radius=.40;sphere.height=.8;node.mesh=sphere
		node.position=Vector3(-28.+kind*1.15,demo.state.ground_height(Vector2(-28.+kind*1.15,-9.))+.6,-9.);board.add_child(node)
		node.material_override=Wall.source(Color(["e5dfcd","a9aaa0","ba7754","657d78","e0dacf","648274","d6bb74"][kind]),null,"component",kind)
	var batches:=Batcher.new();var stats:=batches.merge(board);check(stats.output_batches==7,"seven material sample kinds remain distinct actual batches")
	var old_code:=FileAccess.get_file_as_string(baseline);check(not old_code.is_empty(),"old wall shader exported for comparison")
	if old_code.is_empty():quit(1);return
	var swaps:Array=[]
	for node:MeshInstance3D in wall_nodes(demo.town):
		var current:ShaderMaterial=node.material_override;var kind:int=current.get_shader_parameter("surface_kind");var before:Material
		if kind in [Wall.Kind.TIMBER,Wall.Kind.METAL]:
			var plain:=StandardMaterial3D.new();plain.vertex_color_use_as_albedo=true;plain.vertex_color_is_srgb=true;plain.roughness=.88;before=plain
		else:
			var shader:=Shader.new();shader.code=old_code.replace("cull_back","cull_disabled" if current.shader.code.contains("cull_disabled") else "cull_front" if current.shader.code.contains("cull_front") else "cull_back")
			var copy:ShaderMaterial=current.duplicate();copy.shader=shader;before=copy
		swaps.append([node,current,before])
	facts.sample_order=["plaster","stone","terracotta","slate","cantilever","timber","metal"];facts.batching=stats
	for subject in ["court","samples","low"]:
		demo.focus=Vector3(-24.4,.8,-16.4) if subject=="court" else Vector3(-24.5,.6,-9.)
		demo.zoom=16. if subject=="court" else 9.;demo.pitch=.8 if subject=="court" else .3 if subject=="low" else .55;demo.yaw=.25;demo._update_camera()
		for phase in [0,1,2]:
			demo._set_light_phase(phase)
			for stage in ["before","final"]:
				for row:Array in swaps:row[0].material_override=row[2] if stage=="before" else row[1]
				for i in range(6):await process_frame
				await capture(subject+"_"+str(phase)+"_"+stage)
	check(structure()==solid,"material comparison preserves actual courtyard triangle positions")
	check(demo.state.snapshot()==original,"material samples and lighting never write author fields")
	var metal:=material_colors(Wall.Kind.METAL);var timber:=material_colors(Wall.Kind.TIMBER)
	check(not metal.is_empty() and not timber.is_empty(),"actual door shutters and handles use metal and timber batches")
	# Deliberately collide wall RGB with brass: fixed metal cannot enter recipes.
	demo.set_process(true);demo._after_edit(demo.state.set_house_colors("h1",Color("d6bb74"),Color("527c86")),"terrace",false);await settle()
	check(material_colors(Wall.Kind.METAL)==metal,"wall RGB collision does not recolor fixed brass")
	demo._after_edit(demo.state.set_house_palette("h1",2),"terrace",false);await settle();var changed:=material_colors(Wall.Kind.TIMBER)
	check(changed!=timber and material_colors(Wall.Kind.METAL)==metal,"author palette recolors timber while fixed metal remains identical")
	await key(KEY_Z,true);await settle();await key(KEY_Z,true);await settle()
	check(material_colors(Wall.Kind.TIMBER)==timber and material_colors(Wall.Kind.METAL)==metal,"native two Undos restore exact timber and metal colors")
	await key(KEY_Y,true);await settle();await key(KEY_Y,true);await settle()
	check(material_colors(Wall.Kind.TIMBER)==changed and material_colors(Wall.Kind.METAL)==metal,"native Redos restore final material colors")
	var saved:Dictionary=demo.state.snapshot();var copy:=State.new();check(copy.restore(JSON.parse_string(JSON.stringify(saved))).ok,"isolated cold restore")
	await show(copy,Vector2(-24,-14),"冷读材质样板");quiet();demo.zoom=12.;demo._set_light_phase(0);demo._update_camera()
	check(material_colors(Wall.Kind.TIMBER)==changed and material_colors(Wall.Kind.METAL)==metal,"cold publication equals incremental physical material colors")
	check(demo.state.snapshot()==saved,"cold material build preserves author data")
	await capture("cold_palette");facts.pcm=Span.finish(recording,OUT+"/material_Master.wav");check(facts.pcm.ok,"actual mixed Master audible and unclipped")
	check(pool()==voices,"audio pool unchanged")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("PHYSICAL_MATERIAL_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
