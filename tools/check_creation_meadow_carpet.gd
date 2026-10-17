extends SceneTree
## Stable cameras and frozen meadow wind only; Music stays on real transport.
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Mask=preload("res://scripts/visual/city_creation_grass_mask.gd")
const OUT="res://验证记录/草毯校色_2026-10-16"
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={"views":[]}
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _identity()->Array:
	var rows:Array=[]
	for id:String in demo.music.STEMS:
		var p:AudioStreamPlayer=demo.music._players[id];rows.append([id,p.get_instance_id(),p.stream.get_instance_id()])
	for p:AudioStreamPlayer in demo.music._effects:rows.append(p.get_instance_id())
	for id:String in demo.ambience.players:
		var p:AudioStreamPlayer=demo.ambience.players[id];rows.append([id,p.get_instance_id(),p.stream.get_instance_id()])
	return rows
func _freeze()->void:
	for key:String in ["lawn","grass"]:
		if demo.town.meadow.materials.has(key):demo.town.meadow.materials[key].set_shader_parameter("meadow_time_override",7.5)
func _clear(at:Vector2)->bool:
	if demo.state.water_clearance(at)<-.00001:return false
	for house:Dictionary in demo.state.houses:
		for cell:Dictionary in house.cells:
			if int(cell.level)!=0:continue
			var center:=Vector2(house.origin[0],house.origin[1])+Vector2(cell.x,cell.z)*1.8
			if Rect2(center-Vector2.ONE*.9,Vector2.ONE*1.8).has_point(at):return false
	for road:Dictionary in demo.state.roads:
		for index in range(road.points.size()-1):
			var a:=Vector2(road.points[index][0],road.points[index][1]);var b:=Vector2(road.points[index+1][0],road.points[index+1][1])
			if at.distance_to(Geometry2D.get_closest_point_to_segment(at,a,b))<float(road.width)*.5:return false
	return true
func _carpet_checks()->void:
	var meadow=demo.town.meadow;var mesh:Mesh=meadow._mesh("lawn");var arrays:Array=mesh.surface_get_arrays(0)
	var vertices:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];var uvs:PackedVector2Array=arrays[Mesh.ARRAY_TEX_UV]
	var triangles:int=arrays[Mesh.ARRAY_INDEX].size()/3;var count:=0;var batches:=0;var roots_clear:=true;var contained:=true;var edge_rows:Array=[]
	var pattern:=RegEx.new();pattern.compile("sqrt\\(detail\\)\\*mix\\(([0-9.]+),1\\.0,edge_height\\)")
	var match_value:RegExMatch=pattern.search(FileAccess.get_file_as_string("res://scripts/visual/shaders/creation_lawn.gdshader"))
	var edge_factor:float=float(match_value.get_string(1)) if match_value!=null else -1
	var radius:=0.0
	for vertex:Vector3 in vertices:radius=maxf(radius,Vector2(vertex.x,vertex.z).length())
	for block:Vector2i in meadow.blocks:
		var node:Node3D=meadow.blocks[block];var mask:=Mask.new();mask.setup(demo.state,block)
		var lawn:MultiMeshInstance3D=node.get_node_or_null("Meadow_lawn")
		if lawn==null:continue
		batches+=1;var multi:MultiMesh=lawn.multimesh;count+=multi.instance_count
		for index in range(multi.instance_count):
			var transform:Transform3D=multi.get_instance_transform(index);var world:Vector3=node.global_transform*transform.origin
			roots_clear=roots_clear and mask.visible(Vector2(world.x,world.z),.18)
			contained=contained and multi.custom_aabb.grow(.00001).encloses(transform*mesh.get_aabb())
			var custom:Color=multi.get_instance_custom_data(index)
			if custom.b<.95:edge_rows.append([node.global_transform,transform,custom,multi.custom_aabb])
	edge_rows.sort_custom(func(a:Array,b:Array)->bool:
		var ta:Transform3D=a[1];var tb:Transform3D=b[1]
		return ta.basis.x.length()>tb.basis.x.length())
	edge_rows=edge_rows.slice(0,48)
	var wind:=Vector3(.82,0,.57).normalized();var edges_clear:=true;var samples:=0
	for row:Array in edge_rows:
		var frame:Transform3D=row[0];var transform:Transform3D=row[1];var custom:Color=row[2]
		var h:float=clampf(custom.b,0,1);var species:float=clampf(custom.a,0,1)
		for index in range(vertices.size()):
			var tip:float=clampf(uvs[index].y,0,1)
			for gust:float in [-1.0,1.0]:
				var vertex:Vector3=vertices[index];vertex.y*=h*lerpf(1,1.2,species);vertex.z*=lerpf(1,.46,species)
				vertex.x*=lerpf(edge_factor,1,h);vertex.z*=lerpf(edge_factor,1,h)
				var push_tip:float=clampf(tip*255*.011764707043766975,0,1)
				vertex+=transform.basis.inverse()*Vector3(custom.r,0,custom.g)*4*(1-h)*h*push_tip*push_tip*.045
				vertex+=transform.basis.inverse()*wind*(-gust*.09*tip*tip*.25*1.1144999265670776)*h
				var local:Vector3=transform*vertex;contained=contained and AABB(row[3]).grow(.00001).has_point(local)
				var world:Vector3=frame*local;edges_clear=edges_clear and _clear(Vector2(world.x,world.z));samples+=1
	_check(triangles==60 and radius>.12 and radius<.14,"actual twelve thin leaves retain sixty triangles within the reduced mother footprint")
	_check(meadow.blocks.size()==100 and batches==100 and count>0,"actual eighty-metre canvas carries one hundred batched lawn blocks")
	_check(roots_clear and edges_clear and samples>0 and edge_factor>0,"actual roots and widest boundary-clump extreme wind vertices clear houses paths and water")
	_check(contained,"actual source mesh and sampled wind expansion fit installed MultiMesh bounds")
	var texture:Texture2D=demo.town.ground_material.get_shader_parameter("grass2_world_tint");var shared:bool=texture!=null
	for material:ShaderMaterial in [demo.town.water_material,demo.town.path_edge.material,meadow.materials.lawn,meadow.materials.grass]:
		shared=shared and material.get_shader_parameter("grass2_world_tint")==texture and bool(material.get_shader_parameter("grass2_world_tint_enabled"))
	_check(shared,"ground grass road feathering and water share the same enabled world tint")
	facts.carpet={"triangles":triangles,"vertices":vertices.size(),"mother_radius":radius,"blocks":meadow.blocks.size(),"lawn_batches":batches,"instances":count,"edge_instances":edge_rows.size(),"extreme_vertex_samples":samples,"edge_factor":edge_factor}
func _sample()->Dictionary:
	var wall:Array[float]=[];var draws:Array[float]=[];var previous:=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();wall.append(float(now-previous)/1000);previous=now;draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	wall.sort();draws.sort();return {"frames":120,"p95_ms":wall[113],"max_ms":wall[-1],"draw_median":draws[60]}
func _view(prefix:String,label:String,focus:Vector3,zoom_value:float,pitch_value:float,profile:bool)->void:
	demo.focus=focus;demo.zoom=zoom_value;demo.pitch=pitch_value;demo.yaw=.62;demo._update_camera();demo.town.clear_preview();_freeze()
	for ignored in range(6):await process_frame
	var triangles_drawn:=0;var hidden:=0;var installed_triangles:=0
	if profile and prefix=="after":
		for block:Node3D in demo.town.meadow.blocks.values():
			var multi:MultiMesh=block.get_node("Meadow_lawn").multimesh
			installed_triangles=multi.mesh.surface_get_arrays(0)[Mesh.ARRAY_INDEX].size()/3
			if multi.visible_instance_count==0:hidden+=1
			else:triangles_drawn+=installed_triangles*multi.instance_count
		_check((hidden==100 and triangles_drawn==0) if zoom_value>=48 else (hidden==0 and installed_triangles==(60 if zoom_value<24 else 30)),"actual installed grass LOD and visibility match camera: "+label)
	var performance:Dictionary=await _sample() if profile else {}
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+prefix+"_"+label+".png")==OK,"actual fixed-view capture saved: "+label)
	facts.views.append({"label":label,"focus":focus,"zoom":zoom_value,"pitch":pitch_value,"yaw":.62,"evening":demo.evening,"performance":performance,"lawn_triangles":triangles_drawn,"hidden_lawn_batches":hidden})
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var baseline:bool="--baseline" in OS.get_cmdline_user_args()
	var profile_baseline:bool="--profile-baseline" in OS.get_cmdline_user_args()
	var prefix:String=("before_profile" if profile_baseline else "before") if baseline else "after"
	var personal:PackedByteArray=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false);demo.ui_layer.visible=false
	var deadline:=Time.get_ticks_msec()+30000
	while (demo.music.audio_report.is_empty() or not demo.ambience.report().ready) and Time.get_ticks_msec()<deadline:await process_frame
	var identity:Array=_identity();var clock:float=demo.music._playback_clock();var snapshot:Dictionary=demo.state.snapshot()
	if not baseline:_carpet_checks()
	await _view(prefix,"01_日间草地近景",Vector3(-8,.7,2),14,.82,not baseline or profile_baseline)
	await _view(prefix,"02_日间初城中景",Vector3(-3,.7,0),25,.72,not baseline or profile_baseline)
	demo.home_camera();await _view(prefix,"03_完整画布全景",demo.focus,demo.zoom,demo.pitch,not baseline or profile_baseline)
	demo._toggle_light();await _view(prefix,"04_夕光初城中景",Vector3(-3,.7,0),25,.72,false)
	_check(demo.state.snapshot()==snapshot,"fixed-view lighting changes leave complete authored city unchanged")
	_check(_identity()==identity and demo.music.get_child_count()==demo.music.STEMS.size()+4 and demo.ambience.players.size()==2 and demo.music._playback_clock()>clock and (FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"fixed wind captures preserve fixed music Players two ambient voices advancing transport and personal city")
	facts.wind_time=7.5;facts.baseline=baseline
	var result:Dictionary={"ok":failures.is_empty(),"checks":checks,"count":checks.size(),"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/"+prefix+".json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("MEADOW_CARPET ",JSON.stringify(result))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for p:AudioStreamPlayer in demo.music._players.values():p.stop()
	for p:AudioStreamPlayer in demo.music._effects:p.stop()
	for p:AudioStreamPlayer in demo.ambience.players.values():p.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout;quit(0 if failures.is_empty() else 1)
