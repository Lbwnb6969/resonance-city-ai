extends SceneTree
## Minimal fixed-camera actual GL baseline; visual judgement stays separate.
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Mask=preload("res://scripts/visual/city_creation_grass_mask.gd")
const OUT="res://验证记录/草甸综合色_2026-10-16"
const SOURCES=["res://scripts/visual/shaders/creation_meadow_palette.gdshaderinc","res://scripts/visual/shaders/creation_lawn.gdshader"]
const VIEWS=[{"id":"01_默认河湾全景","focus":Vector3(-3,.7,0),"zoom":28.0,"yaw":.62,"pitch":.78},{"id":"02_草地与街屋近景","focus":Vector3(-2,.2,5.5),"zoom":9.0,"yaw":.62,"pitch":.74}]
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={"views":[]}
var destination:String
func _initialize()->void:
	if "--light-sweep" in OS.get_cmdline_user_args(): _light_sweep.call_deferred()
	else: _run.call_deferred()
func _light_sweep()->void:
	var path:String=OUT+"/light_sweep"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(path))
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=path+"/临时作品库";root.add_child(demo);demo.life.set_process(false);demo.ui_layer.visible=false
	var row:Dictionary=VIEWS[1];demo.focus=row.focus;demo.zoom=row.zoom;demo.yaw=row.yaw;demo.pitch=row.pitch;demo._update_camera();demo.town.clear_preview()
	var environment:Environment=demo.get_world_3d().environment
	var results:Array=[]
	for setting:Array in [["A",.72,3.0,.50,1.0],["B",.78,3.5,.48,.88],["C",.80,3.0,.46,.80]]:
		environment.tonemap_exposure=setting[1];environment.tonemap_white=setting[2];environment.ambient_light_energy=setting[3];demo.sun.light_energy=setting[4]
		for ignored in range(4): await process_frame
		await RenderingServer.frame_post_draw
		var image:Image=root.get_texture().get_image();image.save_png(path+"/"+str(setting[0])+".png")
		var clipped:=0;var any_clipped:=0;var samples:=0
		for y in range(0,image.get_height(),3):
			for x in range(0,image.get_width(),3):
				var color:Color=image.get_pixel(x,y);samples+=1
				if color.r>=.98 and color.g>=.98 and color.b>=.98: clipped+=1
				if maxf(color.r,maxf(color.g,color.b))>=.98: any_clipped+=1
		results.append({"id":setting[0],"exposure":environment.tonemap_exposure,"white":environment.tonemap_white,"ambient":environment.ambient_light_energy,"sun":demo.sun.light_energy,"sampled_pixels":samples,"all_rgb_ge_98_percent":100.0*clipped/samples,"any_rgb_ge_98_percent":100.0*any_clipped/samples})
	FileAccess.open(path+"/sweep.json",FileAccess.WRITE).store_string(JSON.stringify({"camera":row,"settings":results,"method":"Actual GL same near camera;4 warmframes each, every3rd pixel all/any RGB>=.98 whole-image rough clipping proxy; visual review decides."},"\t",true,true));print("MEADOW_LIGHT_SWEEP ",JSON.stringify(results))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false)
	for player:AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player:AudioStreamPlayer in demo.music._effects: player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout;quit()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _sha(bytes:PackedByteArray)->String:
	var context:=HashingContext.new();context.start(HashingContext.HASH_SHA256);context.update(bytes);return context.finish().hex_encode()
func _identity()->Array:
	var rows:Array=[]
	for id:String in demo.music.STEMS:
		var player:AudioStreamPlayer=demo.music._players[id]
		var pcm:PackedByteArray=player.stream.data
		rows.append([id,player.get_instance_id(),player.stream.get_instance_id(),_sha(pcm)])
	for player:AudioStreamPlayer in demo.music._effects: rows.append(player.get_instance_id())
	return rows
func _geometry()->Dictionary:
	var rows:Array[String]=[];var identities:Array=[]
	for node:Node in demo.town.find_children("*","MeshInstance3D",true,false):
		rows.append(var_to_bytes([str(demo.town.get_path_to(node)),node.transform,node.mesh.surface_get_arrays(0)]).hex_encode())
		identities.append([node.get_instance_id(),node.mesh.get_instance_id()])
	for node:Node in demo.town.find_children("*","MultiMeshInstance3D",true,false):
		rows.append(var_to_bytes([str(demo.town.get_path_to(node)),node.transform,node.multimesh.buffer,node.multimesh.mesh.surface_get_arrays(0)]).hex_encode())
		identities.append([node.get_instance_id(),node.multimesh.get_instance_id(),node.multimesh.mesh.get_instance_id()])
	rows.sort();identities.sort()
	return {"sha256":"\n".join(rows).sha256_text(),"identities":identities}
func _solid_geometry()->String:
	var rows:Array[String]=[]
	for type_name:String in ["MeshInstance3D","MultiMeshInstance3D","CollisionShape3D"]:
		for node:Node in demo.town.find_children("*",type_name,true,false):
			if node.name in ["Meadow_lawn","Meadow_grass"]: continue
			var data:Variant
			if node is MeshInstance3D: data=node.mesh.surface_get_arrays(0)
			elif node is MultiMeshInstance3D: data=[node.multimesh.buffer,node.multimesh.mesh.surface_get_arrays(0)]
			else: data=node.shape.get_faces() if node.shape is ConcavePolygonShape3D else var_to_str(node.shape)
			rows.append(var_to_bytes([str(demo.town.get_path_to(node)),node.transform,data]).hex_encode())
	rows.sort();return "\n".join(rows).sha256_text()
func _meadow_checks()->void:
	var meadow=demo.town.meadow
	var mesh:Mesh=meadow._mesh("lawn")
	var arrays:Array=mesh.surface_get_arrays(0)
	var vertices:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];var uvs:PackedVector2Array=arrays[Mesh.ARRAY_TEX_UV]
	var triangles:int=arrays[Mesh.ARRAY_INDEX].size()/3
	var radius:=0.0
	for vertex:Vector3 in vertices: radius=maxf(radius,Vector2(vertex.x,vertex.z).length())
	var shader:String=FileAccess.get_file_as_string("res://scripts/visual/shaders/creation_lawn.gdshader")
	var factor_pattern:=RegEx.new();factor_pattern.compile("sqrt\\(detail\\)\\*mix\\(([0-9.]+),1\\.0,edge_height\\)")
	var factor_match:RegExMatch=factor_pattern.search(shader)
	var edge_factor:float=float(factor_match.get_string(1)) if factor_match!=null else -1
	var count:=0;var batches:=0;var batched:=true;var masks:Dictionary={};var clear:=true;var contained:=true;var edge_samples:=0
	var edge_rows:Array=[]
	for block:Vector2i in meadow.blocks:
		var node:Node3D=meadow.blocks[block]
		for child:Node in node.get_children():
			batched=batched and child is MultiMeshInstance3D and child.get_child_count()==0
			if child.name!="Meadow_lawn": continue
			batches+=1;var multi:MultiMesh=child.multimesh;count+=multi.instance_count
			if not masks.has(block): var mask:=Mask.new();mask.setup(demo.state,block);masks[block]=mask
			for index in range(multi.instance_count):
				var transform:Transform3D=multi.get_instance_transform(index)
				var world:Vector3=node.global_transform*transform.origin;var at:=Vector2(world.x,world.z)
				clear=clear and masks[block].visible(at,.18)
				contained=contained and multi.custom_aabb.grow(.00001).encloses(transform*mesh.get_aabb())
				var custom:Color=multi.get_instance_custom_data(index)
				if custom.b<.95 and edge_rows.size()<64: edge_rows.append([node.global_transform,transform,custom,multi.custom_aabb])
	# Actual edge instances at both extreme gusts. Shore retreat only shrinks
	# further, so the unretreated edge_height is the conservative footprint.
	var wind:=Vector3(.82,0,.57).normalized()
	for row:Array in edge_rows:
		var global_transform:Transform3D=row[0];var transform:Transform3D=row[1];var custom:Color=row[2]
		var h:float=clampf(custom.b,0,1);var species:float=clampf(custom.a,0,1)
		for index in range(vertices.size()):
			var tip:float=clampf(uvs[index].y,0,1)
			for gust:float in [-1.0,1.0]:
				var vertex:Vector3=vertices[index];vertex.y*=h*lerpf(1,1.2,species);vertex.z*=lerpf(1,.46,species)
				vertex.x*=lerpf(edge_factor,1,h);vertex.z*=lerpf(edge_factor,1,h)
				var push_tip:float=clampf(tip*255*.011764707043766975,0,1)
				var local_push:Vector3=transform.basis.inverse()*Vector3(custom.r,0,custom.g)
				vertex+=local_push*4*(1-h)*h*push_tip*push_tip*.045
				vertex+=transform.basis.inverse()*wind*(-gust*.09*tip*tip*.25*1.1144999265670776)*h
				var local:Vector3=transform*vertex;contained=contained and AABB(row[3]).grow(.00001).has_point(local)
				var world:Vector3=global_transform*local;clear=clear and _footprint_clear(Vector2(world.x,world.z));edge_samples+=1
	_check(is_equal_approx(meadow.BASE_SPACING,.52) and triangles==60 and radius>.12 and radius<.14,"actual .52m mother lattice installs twelve thin curved leaves with60 triangles")
	_check(count>0 and batches>0 and batched,"actual meadow remains shared MultiMesh batches with no individual leaf Nodes")
	_check(clear and edge_samples>0 and edge_factor>0,"actual lawn roots and sampled widest wind-edge vertices preserve house-road-water clearance")
	_check(contained,"actual new mother bounds and sampled wind/species expansion fit installed MultiMesh AABBs")
	facts.meadow={"base_spacing":meadow.BASE_SPACING,"triangles":triangles,"vertices":vertices.size(),"mother_radius":radius,"edge_factor":edge_factor,"lawn_instances":count,"lawn_batches":batches,"edge_instances":edge_rows.size(),"edge_vertex_samples":edge_samples}
func _footprint_clear(at:Vector2)->bool:
	if demo.state.water_clearance(at)<-.00001: return false
	for house:Dictionary in demo.state.houses:
		for cell:Dictionary in house.cells:
			if int(cell.level)!=0: continue
			var center:=Vector2(house.origin[0],house.origin[1])+Vector2(cell.x,cell.z)*1.8
			if Rect2(center-Vector2.ONE*.9,Vector2.ONE*1.8).has_point(at): return false
	for road:Dictionary in demo.state.roads:
		for index in range(road.points.size()-1):
			var a:=Vector2(road.points[index][0],road.points[index][1]);var b:=Vector2(road.points[index+1][0],road.points[index+1][1])
			if at.distance_to(Geometry2D.get_closest_point_to_segment(at,a,b))<float(road.width)*.5: return false
	return true
func _sample()->Dictionary:
	for ignored in range(15): await process_frame
	var wall:Array[float]=[];var draws:Array[float]=[];var previous:=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();wall.append(float(now-previous)/1000.0);previous=now;draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	wall.sort();draws.sort()
	return {"frames":120,"warm_frames":15,"wall_p95_ms":wall[113],"wall_max_ms":wall[-1],"draw_median":draws[60],"draw_max":draws[-1]}
func _run()->void:
	var before:bool="--before" in OS.get_cmdline_user_args()
	destination=OUT+("/before" if before else "/after")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(destination))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=destination+"/临时作品库_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false);demo.ui_layer.visible=false
	var deadline:=Time.get_ticks_msec()+25000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(DisplayServer.get_name()!="headless" and not demo.music.audio_report.is_empty(),"actual default GL scene with paused Life and original production PCM ready")
	var audio:Array=_identity();var clock:float=demo.music._playback_clock()
	var snapshot:Dictionary=demo.state.snapshot();var geometry:Dictionary=_geometry();var solids:String=_solid_geometry()
	if not before: _meadow_checks()
	if not before:
		var texture:Texture2D=demo.town.ground_material.get_shader_parameter("grass2_world_tint")
		var shared:bool=texture!=null
		for material:ShaderMaterial in [demo.town.water_material,demo.town.path_edge.material,demo.town.meadow.materials.lawn,demo.town.meadow.materials.grass]:
			shared=shared and material.get_shader_parameter("grass2_world_tint")==texture and bool(material.get_shader_parameter("grass2_world_tint_enabled"))
		_check(shared,"ground lawn grass road feathering and water bind the same enabled world-tint texture identity")
	var environment:Environment=demo.get_world_3d().environment
	facts.lighting={"tone_mapper":environment.tonemap_mode,"exposure":environment.tonemap_exposure,"white":environment.tonemap_white,"ambient_energy":environment.ambient_light_energy,"ambient_source":environment.ambient_light_source,"sky_material":environment.sky.sky_material.get_class() if environment.sky else "","sun_energy":demo.sun.light_energy,"sun_color":demo.sun.light_color}
	var sources:Dictionary={}
	for path:String in SOURCES:
		var bytes:=FileAccess.get_file_as_bytes(path);sources[path]=_sha(bytes)
		if before: FileAccess.open(destination+"/"+path.get_file()+".txt",FileAccess.WRITE).store_buffer(bytes)
	for row:Dictionary in VIEWS:
		demo.select_tool(0);demo.focus=row.focus;demo.zoom=row.zoom;demo.yaw=row.yaw;demo.pitch=row.pitch;demo._update_camera();demo.town.clear_preview()
		var performance:Dictionary=await _sample()
		await RenderingServer.frame_post_draw
		_check(root.get_texture().get_image().save_png(destination+"/"+row.id+".png")==OK,"actual fixed-camera image saved: "+row.id)
		facts.views.append({"camera":row,"performance":performance,"capture_clock":demo.music._playback_clock()})
	if not before:
		var row:Dictionary=VIEWS[0];demo.focus=row.focus;demo.zoom=row.zoom;demo.yaw=row.yaw;demo.pitch=row.pitch;demo._update_camera();demo._toggle_light()
		for ignored in range(15): await process_frame
		await RenderingServer.frame_post_draw
		_check(root.get_texture().get_image().save_png(destination+"/03_夕光河湾全景.png")==OK,"actual evening whole-city image saved")
		_check(_solid_geometry()==solids,"day-evening views keep all non-grass geometry and terrain collision bytes unchanged")
		var old:Dictionary=JSON.parse_string(FileAccess.get_file_as_string(OUT+"/before/live.json"))
		_check(_sha(var_to_bytes(snapshot))==old.facts.state_sha256,"complete actual default State matches preserved before baseline")
		facts.lighting.evening_sun_energy=demo.sun.light_energy
	_check(demo.state.snapshot()==snapshot and _geometry()==geometry,"fixed-camera viewing changes neither actual State nor mesh vertices instance buffers or identities")
	_check(_identity()==audio and demo.music.get_child_count()==13 and demo.music._playback_clock()>clock,"original nine PCM and thirteen Players keep identity while actual transport advances")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal city bytes preserved")
	facts.source_sha256=sources;facts.geometry_sha256=geometry.sha256;facts.state_sha256=_sha(var_to_bytes(snapshot));facts.window=[1440,900];facts.life_paused=true;facts.vsync=0;facts.max_fps=180
	var result:Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"count":checks.size(),"facts":facts,"scope":"Actual fixed-camera default-city ground/grass images; paused Life/live Music. Capped wall reference and integrity only; passing checks do not establish visual acceptance. Wind/water/GPU TIME remain live.","command":"Godot_v4.7.2-stable_win64_console.exe --path . --audio-driver Dummy --max-fps 180 --script tools/check_creation_meadow_palette_live.gd"+(" -- --before" if before else "")}
	FileAccess.open(destination+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("MEADOW_PALETTE_LIVE ",JSON.stringify(result))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false)
	for player:AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player:AudioStreamPlayer in demo.music._effects: player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout;quit(0 if failures.is_empty() else 1)
