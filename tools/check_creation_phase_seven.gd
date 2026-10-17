extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const Fixture=preload("res://tests/test_city_creation_water_ecology.gd")
const Plan=preload("res://scripts/world/city_creation_bridge_plan.gd")
const OUT="res://验证记录/四库路线_2026-10-17/Phase7"
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _wait()->void:
	var end:=Time.get_ticks_msec()+30000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<end:await process_frame
	await physics_frame;await process_frame
func _camera(at:Vector3,zoom_value:float,yaw_value:float=.3,pitch_value:float=.65)->void:
	demo.focus=at;demo.zoom=zoom_value;demo.yaw=yaw_value;demo.pitch=pitch_value;demo._update_camera();demo.town.clear_preview()
func _capture(name_value:String)->void:
	await process_frame;await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+name_value+".png")
func _ray(a:Vector3,b:Vector3)->Dictionary:
	return demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(a,b,2))
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:PackedByteArray=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var fixture:=Fixture.city_fixture();var city:RefCounted=fixture.city
	var points:Array[Vector2]=[Vector2(9,4.55),Vector2(12,6),Vector2(12,9)]
	var spur:Dictionary=city.add_road(points)
	_check(spur.ok,"actual east-bank house receives a connecting road to classical river bridge")
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false);demo.ui_layer.visible=false
	demo._after_edit(demo.state.restore(JSON.parse_string(JSON.stringify(city.snapshot()))),"history");await _wait()
	var deadline:=Time.get_ticks_msec()+25000
	while (demo.music.audio_report.is_empty() or not demo.ambience.report().ready) and Time.get_ticks_msec()<deadline:await process_frame
	var road:Dictionary={}
	for row:Dictionary in demo.state.roads:
		if row.id==fixture.road.road_id:road=row
	var profile:Dictionary=demo.state.road_profile(road)
	var run:Dictionary=profile.bridge_runs[0]
	var bridge:Node3D=demo.town.roads_layer.get_node(str(road.id)+"/ClassicalDoubleArchBridge")
	_check(bridge.get_node("BridgeGroundPick")!=null and bridge.get_meta("runs")[0].arch_count==2,"actual renderer publishes double stone barrel bridge with picking collision")
	var center:Vector2=Plan._point(run.samples,(float(run.start)+float(run.end))*.5).at
	_camera(Vector3(center.x,.35,center.y),10.,.15,.5)
	await _capture("01_classical_double_arch")
	var quarter:Dictionary=Plan._point(run.samples,lerpf(float(run.start),float(run.end),.25))
	var at:Vector2=quarter.at;var normal:=Vector2(-quarter.tangent.y,quarter.tangent.x)
	var open_a:=at-normal*2.;var open_b:=at+normal*2.
	var hole:Dictionary=_ray(Vector3(open_a.x,.02,open_a.y),Vector3(open_b.x,.02,open_b.y))
	var pier_a:=center-normal*2.;var pier_b:=center+normal*2.
	var pier:Dictionary=_ray(Vector3(pier_a.x,.02,pier_a.y),Vector3(pier_b.x,.02,pier_b.y))
	_check(hole.is_empty() and not pier.is_empty() and pier.collider.get_meta("road_id","")==str(road.id),"real lateral physics ray passes through arch opening while middle pier blocks it")
	var top:Dictionary=_ray(Vector3(at.x,4,at.y),Vector3(at.x,-1,at.y))
	_check(not top.is_empty() and top.collider.get_meta("road_id","")==str(road.id) and absf(float(top.position.y)-float(run.deck_y))<.02,"actual bridge deck collision agrees with walker street profile within two centimetres")
	facts.bridge={"start":run.start,"end":run.end,"deck_y":run.deck_y,"hole_clear":hole.is_empty(),"pier":pier.get("position",Vector3.ZERO),"top":top.get("position",Vector3.ZERO)}
	var leaves:=0;var flowers:=0;var source_triangles:Dictionary={};var band:=true
	for layer:Node3D in demo.town.lilypads.blocks.values():
		for row:Dictionary in layer.get_meta("candidates",[]):
			var water:Dictionary={}
			for candidate:Dictionary in demo.state.waters:
				if candidate.id==row.pond_id:water=candidate
			var distance:float=demo.state._water_stroke_distance(row.position,water.points)-float(water.width)*.5
			band=band and water.kind=="pond" and distance>=-.85 and distance<=-.25
			if row.part=="leaf":leaves+=1
			else:flowers+=1
		for child:Node in layer.get_children():
			if child is MultiMeshInstance3D:
				var arrays:Array=child.multimesh.mesh.surface_get_arrays(0)
				source_triangles[str(child.name)]=arrays[Mesh.ARRAY_INDEX].size()/3
	_check(band and leaves>0 and flowers>0 and source_triangles.values().has(10) and source_triangles.values().has(60),"actual pond-only MultiMeshes preserve recovered ten-triangle leaves and sixty-triangle flowers in shallow bank band")
	facts.lilypads={"leaves":leaves,"flowers":flowers,"source_triangles":source_triangles}
	_camera(Vector3(-14.5,0,-10),20.,.1,.9);await _capture("02_shallow_pond_lilypads")
	# Native production resident follows actual invitation through the bridge;
	# accelerated fixed steps retain movement, route and activity ownership.
	var invitation:Dictionary=demo.life.invite_concert("h4")
	var steps:=0;var valid_height:=true;var crossed:=false;var arrived:=false
	for index in range(3000):
		demo.life._process(.05)
		for resident:Dictionary in demo.life.residents:
			if str(resident.home_id)!="h6":continue
			var position:Vector3=resident.node.position
			var start:Vector2=Plan._point(run.samples,float(run.start)).at
			var finish:Vector2=Plan._point(run.samples,float(run.end)).at
			if position.x>minf(start.x,finish.x)+.1 and position.x<maxf(start.x,finish.x)-.1 and absf(position.z-center.y)<.25:
				steps+=1;crossed=true
				valid_height=valid_height and absf(position.y-.10-demo.state.street_height(Vector2(position.x,position.z)))<.02
			if crossed and str(resident.dwell_id)=="h4":arrived=true
		if arrived:break
		if index%10==0:await process_frame
	_check(invitation.ok and steps>20 and valid_height and arrived,"real east-bank audience walks raised bridge at shared deck height and reaches west-bank concert")
	facts.journey={"steps_on_bridge":steps,"height_valid":valid_height,"arrived":arrived}
	demo.life.cancel_concert()
	# Real camera frustum, independent from the radial query, must gate every
	# sampled water point and authored visible tree (wind remains a quiet bed).
	_camera(Vector3(11,.7,7),18.)
	await create_timer(.35).timeout
	var day:Dictionary=demo.ambience.report()
	demo._toggle_light();await create_timer(.35).timeout
	var sunset:Dictionary=demo.ambience.report()
	demo._toggle_light();await create_timer(.35).timeout
	var night:Dictionary=demo.ambience.report()
	_check(day.weights.birds>0 and day.weights.insects==0 and sunset.weights.birds>0 and sunset.weights.insects>0 and night.weights.birds==0 and night.weights.insects>0,"actual day sunset night switches smoothly crossfade birds and insects with the same forest voice")
	demo.ambience.set_frustum_source(func(_at:Vector2)->bool:return false)
	await create_timer(.35).timeout
	var hidden:Dictionary=demo.ambience.report()
	_check(hidden.water_samples==0 and hidden.visible_trees==0 and hidden.weights.water==0 and hidden.weights.birds==0 and hidden.weights.insects==0,"production frustum gate excludes all offscreen water and tree contributions")
	demo.ambience.set_frustum_source(demo._acoustic_point_in_view)
	_camera(Vector3(0,.7,0),100.)
	await create_timer(.35).timeout
	var overview:Dictionary=demo.ambience.report()
	_check(overview.water_samples>0 and overview.weights.water>0 and overview.visible_trees>0,"actual hundred-metre full-city camera samples visible water and forest beyond close-view radius")
	facts.overview=overview
	_camera(Vector3(center.x,.35,center.y),10.,.15,.5)
	await _capture("03_bridgehead_night_lanterns")
	var before:Dictionary=demo.ambience.report();var frames:Array[float]=[];var previous:=Time.get_ticks_usec()
	for ignored in range(180):
		await process_frame
		var now:=Time.get_ticks_usec();frames.append(float(now-previous)/1000.);previous=now
	var after:Dictionary=demo.ambience.report()
	frames.sort()
	_check(after.player_count==2 and after.forest_skips==before.forest_skips and after.forest_frames_pushed>before.forest_frames_pushed and after.theoretical_peak<.035,"two continuous native ambience voices advance with no new forest underrun and stay within mix bound")
	facts.audio={"day":day,"sunset":sunset,"night":night,"hidden":hidden,"end":after}
	facts.performance={"frames":180,"p95_ms":frames[170],"max_ms":frames[-1]}
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated full production validation preserves personal save bytes")
	var report:Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("PHASE7 ",JSON.stringify({"ok":report.ok,"count":checks.size(),"failures":failures,"bridge":facts.bridge,"journey":facts.journey,"performance":facts.performance}))
	demo.queue_free();await process_frame;await create_timer(.1).timeout;quit(0 if failures.is_empty() else 1)
