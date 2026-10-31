extends "res://tools/check_creation_meadow_light_live.gd"
## Export baseline Fold from 278f277ae099caa027a56d14e96f7edfd1e4c7af.
const Mask=preload("res://scripts/visual/city_creation_grass_mask.gd")
func instances()->String:
	var rows:Array=[]
	for block:Vector2i in demo.town.meadow.blocks:
		for node:MultiMeshInstance3D in demo.town.meadow.blocks[block].get_children():
			if node.name in ["Meadow_lawn","Meadow_grass"]:rows.append([block,str(node.name),node.multimesh.get_instance_id(),node.multimesh.buffer])
	return var_to_bytes(rows).hex_encode().sha256_text()
func replace_near(mesh:Mesh)->void:
	for block:Vector2i in demo.town.meadow.blocks:
		for node:MultiMeshInstance3D in demo.town.meadow.blocks[block].get_children():
			if node.name in ["Meadow_lawn","Meadow_grass"] and node.multimesh.mesh!=demo.town.meadow._mesh("lawn_lod"):node.multimesh.mesh=mesh
func records()->String:
	var rows:Array=[];var blocks:Array=demo.town.meadow.base_records.keys();blocks.sort()
	for block:Vector2i in blocks:rows.append([block,demo.town.meadow.base_records[block]])
	return var_to_bytes(rows).hex_encode().sha256_text()
func edge_bounds()->void:
	var mesh:Mesh=demo.town.meadow._mesh("lawn");var arrays:=mesh.surface_get_arrays(0)
	var vertices:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];var uvs:PackedVector2Array=arrays[Mesh.ARRAY_TEX_UV]
	var rows:Array=[];var contained:=true;var clear:=true;var roots:=0;var samples:=0
	for block:Vector2i in demo.town.meadow.blocks:
		var parent:Node3D=demo.town.meadow.blocks[block];var node:=parent.get_node_or_null("Meadow_lawn") as MultiMeshInstance3D
		if node==null:continue
		var mask:=Mask.new();mask.setup(demo.state,block)
		for i in range(node.multimesh.instance_count):
			var transform:=node.multimesh.get_instance_transform(i);var custom:=node.multimesh.get_instance_custom_data(i)
			var world:=parent.global_transform*transform.origin
			clear=clear and mask.visible(Vector2(world.x,world.z),.18);roots+=1
			contained=contained and node.multimesh.custom_aabb.grow(.00001).encloses(transform*mesh.get_aabb())
			if custom.b<.95 and rows.size()<64:rows.append([parent.global_transform,transform,custom,node.multimesh.custom_aabb,block])
	for row:Array in rows:
		var transform:Transform3D=row[1];var custom:Color=row[2];var h:=clampf(custom.b,0.,1.);var species:=clampf(custom.a,0.,1.)
		var mask:=Mask.new();mask.setup(demo.state,row[4])
		for i in range(vertices.size()):
			for gust:float in [-1.,1.]:
				var v:Vector3=vertices[i];var tip:=clampf(uvs[i].y,0.,1.)
				# Shader seed width <=1, height <=1.07. Their upper bound is conservative.
				v.y*=1.07*h*lerpf(1.,1.2,species);v.y-=(1.-smoothstep(0.,.30,tip))*.020
				v.z*=lerpf(1.,.46,species);v.x*=lerpf(.20,1.,h);v.z*=lerpf(.20,1.,h)
				var push_tip:=clampf(tip*255.*.011764707043766975,0.,1.)
				v+=transform.basis.inverse()*Vector3(custom.r,0.,custom.g)*4.*(1.-h)*h*push_tip*push_tip*.045
				v+=transform.basis.inverse()*Vector3(.82,0.,.57)*(-gust*.09*tip*tip*.25*1.1144999265670776)*h
				var local:=transform*v;contained=contained and AABB(row[3]).grow(.00001).has_point(local)
				var world:Vector3=Transform3D(row[0])*local;clear=clear and mask.continuous_edge(Vector2(world.x,world.z)).clearance>=-.00001;samples+=1
	check(contained,"actual installed AABBs contain full blades and sampled wind/species extremes")
	check(clear and samples>0,"actual roots and sampled edge blade vertices stay outside house road and water footprints")
	facts.bounds={"roots":roots,"edge_instances":rows.size(),"vertex_extremes":samples}
func run()->void:
	OUT="res://验证记录/M84/grass_ridge_20261031/live_final"
	var baseline:="res://验证记录/M84/grass_ridge_20261031/before_meadow_fold.gd"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
		if arg.begins_with("--baseline="):baseline=arg.trim_prefix("--baseline=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var voices:=pool()
	var city:RefCounted=Fixture.courtyard("ring","none").city
	check(city.add_road([Vector2(-33,-10),Vector2(-26,-9),Vector2(-17,-10)] as Array[Vector2],"path","none").ok,"actual curved road fixture")
	check(city.add_water([Vector2(-33,-17)] as Array[Vector2],2.,"pond").ok,"actual pond fixture")
	await show(city,Vector2(-24,-13),"四段折脊草叶");quiet();demo.life.set_process(false);demo.ui_layer.hide();demo.set_process(false);demo.town.wildlife.set_process(false);demo.town.set_process(false)
	var saved:Dictionary=demo.state.snapshot();var buffers:=instances();var recording:=Span.start();edge_bounds()
	var meadow=demo.town.meadow;var after:Mesh=meadow._mesh("lawn");var old=load(baseline)
	if old==null:check(false,"baseline Fold exported");quit(1);return
	var surface:=SurfaceTool.new();surface.begin(Mesh.PRIMITIVE_TRIANGLES)
	for blade in range(7):old.blade(meadow,surface,blade,true)
	old.base(surface);surface.index();var before:Mesh=surface.commit()
	check(before.get_faces().size()/3==908 and after.get_faces().size()/3==110,"actual baseline908 versus final110 triangles per near clump")
	facts.views=[]
	for subject:String in ["court","close","side","far"]:
		demo.focus=Vector3(-24,.3,-10);demo.yaw=.25;demo.pitch=.8;demo.zoom=18.
		if subject=="close":demo.zoom=5.;demo.pitch=.48
		elif subject=="side":demo.zoom=7.;demo.pitch=.09;demo.yaw=2.5
		elif subject=="far":demo.zoom=36.
		demo._update_camera();freeze(0.)
		facts.views.append({"subject":subject,"zoom":demo.zoom,"pitch":demo.pitch,"detail":meadow.detail})
		for phase in [0,1,2]:
			demo._set_light_phase(phase)
			for stage in ["before","final"]:
				replace_near(before if stage=="before" else after)
				for i in range(4):await process_frame
				await capture(subject+"_"+str(phase)+"_"+stage)
	check(instances()==buffers,"before and final meshes share exactly the authored instance buffers and nodes")
	# Sample camera traversal through the actual near/far switch; no pixel pass score.
	demo.pitch=.3;demo.yaw=.25;demo._set_light_phase(0);facts.zoom_samples=[]
	for i in range(41):
		demo.zoom=20.+i*.2;demo._update_camera();freeze(i/20.)
		await process_frame
		facts.zoom_samples.append({"zoom":demo.zoom,"detail":meadow.detail,"far":meadow.detail<=.84375})
		if i%5==0:await capture("zoom_"+str(i))
	check(instances()==buffers,"camera traversal and shared wind preserve instance uploads")
	check(saved==demo.state.snapshot(),"mesh and camera comparisons preserve author state and rights")
	# Native Undo/Redo after a production road edit must restore the grass mask.
	var original_records:=records();var original_roads:Array=demo.state.roads.duplicate(true)
	var record_copy:Dictionary=demo.town.meadow.base_records.duplicate(true)
	demo.set_process(true)
	demo._after_edit(demo.state.add_road([Vector2(-30,-6),Vector2(-25,-6)] as Array[Vector2],"path","none"),"road");await settle()
	check(records()!=original_records,"actual road publication remasks the V-blade instance records")
	await key(KEY_Z,true);await settle()
	facts.undo_diagnostic={"roads_equal":demo.state.roads==original_roads,"records_equal":records()==original_records,"blocks":[]}
	for block:Vector2i in record_copy:
		if record_copy[block]!=demo.town.meadow.base_records.get(block,[]):facts.undo_diagnostic.blocks.append({"block":block,"old_count":record_copy[block].size(),"new_count":demo.town.meadow.base_records.get(block,[]).size()})
	check(records()==original_records and demo.state.roads==original_roads,"native Ctrl Z restores exact grass records and road authorship")
	await key(KEY_Y,true);await settle();var edited_records:=records();var edited:Dictionary=demo.state.snapshot()
	check(edited_records!=original_records,"native Ctrl Y reapplies actual obstacle mask")
	var path:=OUT+"/isolated_world.json";var file:=FileAccess.open(path,FileAccess.WRITE);file.store_string(JSON.stringify(edited));file.close()
	var cold:=State.new();check(cold.restore(JSON.parse_string(FileAccess.get_file_as_string(path))).ok,"isolated disk world restores")
	await show(cold,Vector2(-24,-13),"折脊草叶冷读");quiet();demo.life.set_process(false)
	check(records()==edited_records and demo.state.snapshot()==edited,"independent cold publication equals incremental grass records and authorship")
	edge_bounds();await capture("cold_final")
	facts.pcm=Span.finish(recording,OUT+"/grass_Master.wav");check(facts.pcm.ok,"actual mixed PCM audible and unclipped")
	check(pool()==voices,"original audio pool unchanged")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("GRASS_RIDGE_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
