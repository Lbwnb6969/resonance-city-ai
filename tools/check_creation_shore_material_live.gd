extends "res://tools/check_creation_detail_status_live.gd"
const WetStone=preload("res://scripts/visual/city_creation_wet_stone.gd")
func wet_materials()->Array:
	return demo.town.materials.values().filter(func(m):return m is ShaderMaterial and m.shader==WetStone.ShaderSource)
func field_pixel(at:Vector2)->float:
	# Compatibility direct RF readback clamps negative samples. Encode the sign
	# into an ordinary color through the real GPU sampler instead.
	var viewport:=SubViewport.new();viewport.size=Vector2i(4,4);viewport.render_target_update_mode=SubViewport.UPDATE_ALWAYS;root.add_child(viewport)
	var rect:=ColorRect.new();rect.size=Vector2(4,4);viewport.add_child(rect)
	var shader:=Shader.new();shader.code='shader_type canvas_item;\n#include "res://scripts/visual/shaders/creation_tiled_field.gdshaderinc"\nuniform sampler2DArray field : filter_linear,repeat_disable; uniform vec2 at; void fragment(){float d=tiled_field_sample(field,at).r;COLOR=vec4(vec3(.5+d*.25),1.);}'
	var material:=ShaderMaterial.new();material.shader=shader;material.set_shader_parameter("field",demo.town.water_field.texture)
	var bounds:Rect2=demo.town.water_field.FIELD_RECT;material.set_shader_parameter("at",(at-bounds.position)/bounds.size);rect.material=material
	for i in range(3):await process_frame
	await RenderingServer.frame_post_draw;var value:=viewport.get_texture().get_image().get_pixel(2,2).r-.5
	viewport.queue_free();return value
func gpu_signature()->String:
	var rows:Array=[]
	for branch:Node3D in [demo.town.buildings,demo.town.roads_layer]:
		for node:MeshInstance3D in branch.find_children("*","MeshInstance3D",true,false):
			if node.mesh==null:continue
			for surface in range(node.mesh.get_surface_count()):
				var raw:Dictionary=RenderingServer.mesh_get_surface(node.mesh.get_rid(),surface)
				rows.append(var_to_bytes([node.global_transform,node.mesh.surface_get_arrays(surface),raw.get("vertex_data"),raw.get("attribute_data"),raw.get("index_data")]).hex_encode().sha256_text())
	rows.sort();return var_to_bytes(rows).hex_encode().sha256_text()
func wet_probe()->void:
	var materials:=wet_materials();check(materials.size()>=4,"actual bridge and textured plinth use shared wet materials")
	for m:ShaderMaterial in materials:check(m.get_shader_parameter("water_field")==demo.town.water_field.texture,"wet stone binds this town's actual water field")
	demo._set_light_phase(0);demo.focus=Vector3(3.5,0,9);demo.zoom=7.;demo.pitch=.30;demo.yaw=-.8;demo._update_camera()
	for m:ShaderMaterial in materials:m.set_shader_parameter("wet_enabled",false)
	await capture("bridge_dry_control")
	for m:ShaderMaterial in materials:m.set_shader_parameter("wet_enabled",true)
	await capture("bridge_capillary")
	var before:=gpu_signature();var points:Array[Vector2]=[Vector2(-19,-11),Vector2(-17,-11)]
	demo.set_process(true);var edit:Dictionary=demo.state.add_water(points,1.2,"pond");check(edit.ok,"actual isolated water edit succeeds: "+JSON.stringify(edit))
	demo._after_edit(edit,"water");await settle();quiet();check(demo.state.water_clearance(Vector2(-18,-11))<0,"new pond is real water")
	facts.water_probe={"gpu_encoded_sign":await field_pixel(Vector2(-18,-11)),"cpu":demo.town.water_field.sample_world(Vector2(-18,-11)),"diagnostics":demo.town.water_field.diagnostics()}
	print("WATER_PROBE ",JSON.stringify(facts.water_probe))
	check(float(facts.water_probe.gpu_encoded_sign)<0,"actual GPU sampler sees newly excavated water")
	for m:ShaderMaterial in wet_materials():check(m.get_shader_parameter("water_field")==demo.town.water_field.texture,"water edit keeps all wet materials on published field")
	await key(KEY_Z,true);await settle();quiet();check(gpu_signature()==before,"native water Undo restores exact installed mesh buffers")
	check(await field_pixel(Vector2(-18,-11))>0,"native Undo removes water from the same GPU field")
	var saved:Dictionary=demo.state.snapshot();check(demo.state.save_city(OUT+"/riverbank.json").ok,"author city saves through actual atomic API")
	var reader:=State.new();check(reader.load_city(OUT+"/riverbank.json").ok,"real disk cold read restores current schema")
	await show(reader,Vector2(-3,1),"湿线冷读");quiet();check(gpu_signature()==before,"cold publication equals incrementally restored mesh buffers")
	check(saved==reader.snapshot(),"material and field setup never write author records")
	for m:ShaderMaterial in wet_materials():check(m.get_shader_parameter("water_field")==demo.town.water_field.texture,"cold town binds its own field, not previous city texture")
func mesh_facts()->Dictionary:
	var rows:Array=[];var batches:=0
	for branch:Node3D in [demo.town.buildings,demo.town.roads_layer]:
		for node:MeshInstance3D in branch.find_children("*","MeshInstance3D",true,false):
			if node.mesh==null:continue
			batches+=node.mesh.get_surface_count()
			var points:Array=[]
			for p:Vector3 in node.mesh.get_faces():points.append(node.global_transform*p)
			rows.append(var_to_bytes(points).hex_encode().sha256_text())
	rows.sort();return {"geometry":var_to_bytes(rows).hex_encode().sha256_text(),"surfaces":batches}
func run()->void:
	var stage:="before"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
		if arg.begins_with("--stage="):stage=arg.trim_prefix("--stage=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var city:=State.new();check(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/高地河湾样例.json"))).ok,"existing real riverbank work restores")
	var line:Array[Vector2]=[Vector2(-18,9),Vector2(18,9)];check(city.add_road(line,"promenade").ok,"real stone river crossing installs")
	await show(city,Vector2(-3,1),"河湾材质三态");quiet();demo.life.set_process(false);demo.ui_layer.hide();demo.set_process(false);demo.town.wildlife.set_process(false);demo.town.set_process(false)
	for material:Material in demo.town.foliage._materials.values():
		if material is ShaderMaterial:material.set_shader_parameter("wind_time_override",7.5)
	for k:String in ["lawn","grass"]:demo.town.meadow.materials[k].set_shader_parameter("meadow_time_override",7.5)
	demo.focus=Vector3(-1,.35,4);demo.zoom=24.;demo.pitch=.53;demo.yaw=-.55;demo._update_camera();var saved:Dictionary=demo.state.snapshot();var geometry:=mesh_facts();var views:Array=[]
	for phase:int in [0,1,2]:
		demo._set_light_phase(phase)
		for i in range(12):await process_frame
		var draws:Array[int]=[]
		for i in range(12):await process_frame;draws.append(int(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME)))
		draws.sort();await capture(stage+"_"+str(phase));views.append({"phase":phase,"draws":draws[6],"exposure":demo.environment_rig.environment.tonemap_exposure,"white":demo.environment_rig.environment.tonemap_white})
	check(geometry==mesh_facts() and saved==demo.state.snapshot(),"three light states preserve installed geometry and authored city")
	if stage=="after":await wet_probe()
	check(personal==FileAccess.get_file_as_bytes(State.DEFAULT_PATH),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"geometry":geometry,"views":views,"snapshot_sha":JSON.stringify(saved).sha256_text()};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("SHORE_MATERIAL_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if report.ok else 1)
