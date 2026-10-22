extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
var output:="res://验证记录/风铃同钟波浪_2026-10-22/native"
var demo
var checks:=0
var failures:Array[String]=[]
var facts:Dictionary={}
var maximum_upload_error:=0.
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending:await process_frame
	for i in range(5):await process_frame
func bindings()->Dictionary:
	var result:Dictionary={}
	for row:Dictionary in demo.town.craft.chime_rigs:
		var node:MultiMeshInstance3D=row.node.get_ref()
		if node!=null:result[row.house_id]=node
	return result
func uploaded_match()->bool:
	var wave:Dictionary=demo.resonance_snapshot.get("choral_wave",{})
	var ok:=true
	for row:Dictionary in demo.town.craft.chime_rigs:
		var node:MultiMeshInstance3D=row.node.get_ref()
		if node==null:continue
		for i in range(node.multimesh.instance_count):
			var value:=node.multimesh.get_instance_custom_data(i)
			var error:=absf(value.g-float(wave.get(row.house_id,0.)))
			maximum_upload_error=maxf(maximum_upload_error,error)
			ok=ok and error<.001 and value.b==(1. if wave.has(row.house_id) else 0.)
	return ok
func photo(label:String)->void:
	demo.toast.hide();demo.toast_time=0.
	await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(output+"/"+label+".png")
func click(button:Control)->void:
	var at:=button.get_global_rect().get_center();var motion:=InputEventMouseMotion.new();motion.position=at;motion.global_position=at;root.push_input(motion);await process_frame
	for pressed:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=pressed;root.push_input(event);await process_frame
func gpu_closeup(source:MultiMeshInstance3D)->void:
	# Magnify the actual uploaded prefab/material in an isolated viewport. No
	# substitute animation, recolored probe shader or CPU vertex deformation.
	var view:=SubViewport.new();view.size=Vector2i(512,512);view.own_world_3d=true;view.render_target_update_mode=SubViewport.UPDATE_ALWAYS;root.add_child(view)
	var item:=MultiMeshInstance3D.new();item.multimesh=source.multimesh;item.material_override=source.material_override;item.custom_aabb=source.custom_aabb;view.add_child(item)
	var transform:=source.multimesh.get_instance_transform(0);var anchor:=transform.origin
	var camera:=Camera3D.new();camera.projection=Camera3D.PROJECTION_ORTHOGONAL;camera.size=.5;camera.near=.01
	view.add_child(camera);camera.position=anchor+transform.basis*Vector3(0,-.17,1.);camera.look_at(anchor+Vector3.DOWN*.17);camera.current=true
	var environment:=WorldEnvironment.new();environment.environment=Environment.new();environment.environment.background_mode=Environment.BG_COLOR
	environment.environment.background_color=Color("f5f1e9");environment.environment.ambient_light_source=Environment.AMBIENT_SOURCE_COLOR;environment.environment.ambient_light_color=Color.WHITE;environment.environment.ambient_light_energy=.9;view.add_child(environment)
	var sun:=DirectionalLight3D.new();sun.rotation_degrees=Vector3(-30,-20,0);view.add_child(sun)
	var captures:Dictionary={};var deadline:=Time.get_ticks_msec()+7000
	while captures.size()<2 and Time.get_ticks_msec()<deadline:
		await process_frame
		var value:=source.multimesh.get_instance_custom_data(0)
		if value.b<.5 or value.g<.11:continue
		var clock:float=demo.resonance_snapshot.clock_sec;var carrier:=sin(TAU*clock/.75)
		var direction:="right" if carrier>.85 else "left" if carrier<-.85 else ""
		if direction.is_empty() or captures.has(direction):continue
		if direction=="right" and value.g<.5:continue
		await RenderingServer.frame_post_draw
		var image:=view.get_texture().get_image();image.save_png(output+"/chime_"+direction+".png")
		var sum:=Vector2.ZERO;var count:=0
		for y in range(355,465):
			for x in range(90,425):
				var color:=image.get_pixel(x,y)
				if color.r<.85 and color.g<.8:sum+=Vector2(x,y);count+=1
		var beam_sum:=Vector2.ZERO;var beam_count:=0
		for y in range(55,110):
			for x in range(90,425):
				var color:=image.get_pixel(x,y)
				if color.r<.85 and color.g<.8:beam_sum+=Vector2(x,y);beam_count+=1
		captures[direction]={"clock":clock,"wave":value.g,"carrier":carrier,"pixels":count,"centroid":sum/float(maxi(count,1)),"beam_pixels":beam_count,"beam_centroid":beam_sum/float(maxi(beam_count,1))}
	check(captures.size()==2,"actual PCM-driven eave reaches both sway directions in the native shader")
	if captures.size()==2:
		check(captures.left.pixels>20 and captures.right.pixels>20 and absf(captures.left.centroid.x-captures.right.centroid.x)>5.,"native hanging tongue pixels move while the original fixed beam remains mounted")
		check(captures.left.beam_pixels>20 and captures.right.beam_pixels>20 and captures.left.beam_centroid.distance_to(captures.right.beam_centroid)<1.,"fixed timber beam pixels remain stationary during the same native sway")
	facts.gpu=captures;view.queue_free();await process_frame
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):output=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=output+"/works_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false)
	while demo.music._loading:await process_frame
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	for player:AudioStreamPlayer in demo.music._effects:voices.append(player.get_instance_id())
	var city:=State.new();check(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))).ok,"actual earned flagship restores")
	# The old central blocks are pairs 6m apart. Preserve the original fixture
	# and earn the five-house choir through real placements in this copy.
	for at:Vector2 in [Vector2(-16,-10),Vector2(-14,-10),Vector2(-9,-10)]:
		check(city.add_house(at).ok,"public infill joins the actual old eave houses into a choir")
	await demo.gallery._open_chosen({"ok":true,"world":city.snapshot(),"id":"chime_wave","title":"风铃合唱","view":{"focus":[-6.,1.,-1.],"yaw":.3,"pitch":.8,"zoom":23.,"evening":false,"light_phase":0}})
	demo.life.set_process(false);demo.select_tool(4);demo.music.reply.set_enabled(false)
	while demo.music._loading:await process_frame
	var deadline:=Time.get_ticks_msec()+6500
	while demo.resonance_snapshot.get("choral_wave",{}).is_empty() and Time.get_ticks_msec()<deadline:await process_frame
	var saved:Dictionary=demo.state.snapshot();var before:=bindings();var build_count:int=demo.town.craft.build_count
	var quality_id:int=before.h2.get_instance_id()
	check(before.has("h1") and before.has("h2") and before.h1.get_parent().name=="Craft_h1" and before.h2.get_parent().name=="Quality_h2","actual delivered and actual earned quality chimes bind through both production paths")
	var clock_before:float=demo.music._playback_clock();var samples:Array[float]=[];var matched:=true;var peaks:Dictionary={}
	var start:=Time.get_ticks_msec()
	while Time.get_ticks_msec()-start<6300:
		var frame_start:=Time.get_ticks_usec();await process_frame;samples.append(float(Time.get_ticks_usec()-frame_start)/1000.)
		matched=matched and uploaded_match()
		for row:Dictionary in demo.town.craft.chime_rigs:
			var strength:float=row.value.g
			if strength>float(peaks.get(row.house_id,{}).get("wave",0.)):peaks[row.house_id]={"wave":strength,"clock":demo.resonance_snapshot.clock_sec,"rank":demo.music._house_music[row.house_id].cluster_rank}
	check(matched and is_equal_approx(float(demo.town.craft.material.get_shader_parameter("music_clock")),float(demo.resonance_snapshot.clock_sec)),"native MM buffers follow the actual frame snapshot and PCM clock throughout two complete phrases")
	check(float(peaks.get("h1",{}).get("wave",0.))>.25 and float(peaks.get("h2",{}).get("wave",0.))>.25,"both installed and quality-gift eaves visibly receive their ranked envelope")
	check(demo.town.craft.build_count==build_count and bindings()==before,"steady choir updates replace no craft roots or meshes")
	var diagnosis:={"source":demo.music.daily_source(),"snapshot":demo.resonance_snapshot,"focus":demo.music.acoustic.zones,"score":demo.music.emergence.score,"attention":demo.music.attention.report(),"peaks":peaks,"life_processing":demo.life.is_processing(),"records":demo.music._house_music}
	FileAccess.open(output+"/diagnosis.json",FileAccess.WRITE).store_string(JSON.stringify(diagnosis,"\t",true,true))
	for resolution:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=resolution;for i in range(6):await process_frame
		check(uploaded_match(),"actual GPU binding remains correct at "+str(resolution));await photo("street_"+str(resolution.x))
	await gpu_closeup(before.h1)
	await click(demo.music_button);for i in range(4):await process_frame
	check(demo.music.muted and demo.town.craft.chime_rigs.all(func(row):return row.value.b==0. and row.value.g==0.) and uploaded_match(),"actual mute clears native musical weights and leaves natural wind")
	await click(demo.music_button);deadline=Time.get_ticks_msec()+6500
	while demo.resonance_snapshot.get("choral_wave",{}).is_empty() and Time.get_ticks_msec()<deadline:await process_frame
	check(not demo.music.muted and demo.music._playback_clock()>clock_before and uploaded_match(),"unmute rejoins current phase without restarting PCM")
	var changed:Array=[]
	for key:Variant in saved:
		if demo.state.snapshot()[key]!=saved[key]:changed.append(key)
	facts.browse_changed_fields=changed
	FileAccess.open(output+"/browsing_before.json",FileAccess.WRITE).store_string(JSON.stringify(saved,"\t",true,true))
	FileAccess.open(output+"/browsing_after.json",FileAccess.WRITE).store_string(JSON.stringify(demo.state.snapshot(),"\t",true,true))
	check(changed.is_empty(),"browsing, GPU observation and mute never write the authored work")
	check(demo.state.remove_house("h2").ok,"public remove retires the quality-gift house")
	demo._after_edit({"ok":true,"message":"验证移除"},"erase");await settle();demo.life.set_process(false)
	check(not bindings().has("h2") and uploaded_match(),"budget-published removal retires the old quality eave binding")
	check(demo.state.undo().ok,"normal undo restores original authored house and earned quality")
	demo._after_edit({"ok":true,"message":"验证撤销"},"history");await settle();demo.life.set_process(false)
	check(bindings().has("h2") and bindings().h2.get_instance_id()!=quality_id and uploaded_match(),"budget-published undo binds the new quality eave to the current wave")
	var restored:Dictionary=demo.state.snapshot();restored.revision=saved.revision
	FileAccess.open(output+"/restored.json",FileAccess.WRITE).store_string(JSON.stringify(restored,"\t",true,true))
	var authored:=saved.duplicate(true);var actual:=restored.duplicate(true)
	# Existing undo preserves live progress instead of replaying expired
	# afterglow or resurrecting a deleted household's old actor tickets.
	for field:String in ["journey_checkpoint","resonance_afterglow"]:authored.erase(field);actual.erase(field)
	check(actual==authored and demo.state._validate_snapshot(demo.state.snapshot()).ok,"undo restores authored geometry and permanent earned ledgers with valid current journeys")
	check(demo.state.resonance_afterglow.keys().all(func(id):return float(demo.state.resonance_afterglow[id])<=float(saved.resonance_afterglow.get(id,0.))),"undo does not replay or extend a transient afterglow reward")
	var current:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():current.append(player.get_instance_id())
	for player:AudioStreamPlayer in demo.music._effects:current.append(player.get_instance_id())
	check(current==voices and current.size()==16,"eave animation preserves every original long and short audio player")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save stays byte-identical")
	samples.sort();facts.frames={"count":samples.size(),"limit":100,"p95_ms":samples[int(samples.size()*.95)],"max_ms":samples[-1]};facts.peaks=peaks
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	facts.maximum_upload_error=maximum_upload_error
	FileAccess.open(output+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("CHIME_WAVE_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
