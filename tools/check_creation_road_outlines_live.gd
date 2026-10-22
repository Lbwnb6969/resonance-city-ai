extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Fixture=preload("res://tests/test_city_creation_road_outline_consistency.gd")
var demo
var output:="res://验证记录/道路边界核对_2026-10-22/live"
var checks:=0
var failures:Array[String]=[]
var facts:Dictionary={}
var sampling:=false
var frame_ms:Array[float]=[]
var last_usec:=0
func _initialize()->void:run.call_deferred()
func _process(_delta:float)->bool:
	var now:=Time.get_ticks_usec()
	if sampling:frame_ms.append(float(now-last_usec)/1000.)
	last_usec=now;return false
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.music._loading:await process_frame
	for i in range(10):await process_frame
func inside(at:Vector2)->bool:
	for contours:Array in demo.town.road_outlines.values():
		var covered:=false
		for contour:PackedVector2Array in contours:
			if Geometry2D.is_point_in_polygon(at,contour):covered=not covered
		if covered:return true
	return false
func hit(at:Vector2,triangle:PackedVector3Array,i:int)->bool:
	var a:=Vector2(triangle[i].x,triangle[i].z);var b:=Vector2(triangle[i+1].x,triangle[i+1].z);var c:=Vector2(triangle[i+2].x,triangle[i+2].z)
	var x:float=(b-a).cross(at-a);var y:float=(c-b).cross(at-b);var z:float=(a-c).cross(at-c)
	return (x>0. and y>0. and z>0.) or (x<0. and y<0. and z<0.)
func run()->void:
	var fixture:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):output=arg.trim_prefix("--out-dir=")
		if arg.begins_with("--fixture="):fixture=arg.trim_prefix("--fixture=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var original:PackedByteArray=FileAccess.get_file_as_bytes(fixture) if not fixture.is_empty() else PackedByteArray()
	var city:=State.new();city.initialize_empty();var targets:Array[Vector2]=[]
	if fixture.is_empty():
		var index:=0
		for style:String in ["path","promenade","avenue","tram"]:
			var shift:=Vector2(-13.+float(index%2)*15.,-26.+float(index/2)*14.)
			var points:Array[Vector2]=[]
			for point:Vector2 in Fixture.curve():points.append(point+shift)
			points.push_front(points[0]+Vector2(-3.,2.));points.append(points[-1]+Vector2(3.,2.))
			check(city.add_road(points,style,"none").ok,"actual public curved stroke: "+style)
			var at:Vector2=Fixture.curve()[4]+shift;targets.append(at)
			check(city.add_road([at+Vector2(-3.,.6),at+Vector2(3.,.6)] as Array[Vector2],style,"none").ok,"actual intersecting street: "+style)
			index+=1
	else:
		check(city.restore(JSON.parse_string(original.get_string_from_utf8())).ok,"read-only actual authored curve work validates")
		targets=[Vector2(-14.82,1.935),Vector2(-17,-4.5),Vector2(-11,1.5),Vector2(-19.35,3.4)]
	var authored:Dictionary=city.snapshot()
	demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=output+"/works_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false);await settle()
	demo._after_edit(demo.state.restore(authored),"history");await settle();demo.life.set_process(false);demo.life_save_timer=10000.
	check(demo.state.roads==authored.roads,"normal background publication retains all exact authored points and widths")
	var triangles:=PackedVector3Array();var finite:=true;var surface_count:=0
	for road:Dictionary in demo.state.roads:
		var layer:Node3D=demo.town.road_roots[road.id]
		for node:MeshInstance3D in layer.find_children("*Surface","MeshInstance3D",true,false):
			if node.name not in ["PathSurface","PromenadeSurface"]:continue
			var faces:PackedVector3Array=node.mesh.get_faces();triangles.append_array(faces);surface_count+=1
			for point:Vector3 in faces:finite=finite and point.is_finite()
	check(finite and surface_count==demo.state.roads.size(),"all actual installed paving meshes have finite native vertices")
	var covered:=0;var holes:=0;var duplicate:=0
	for center:Vector2 in targets:
		for z in range(-8,9):
			for x in range(-8,9):
				var at:=center+Vector2(float(x)*.137+.031,float(z)*.139+.017)
				if not inside(at):continue
				var hits:=0
				for i in range(0,triangles.size(),3):
					if hit(at,triangles,i):hits+=1
				covered+=1
				if hits==0:holes+=1
				if hits>1:duplicate+=1
	check(covered>300 and holes==0 and duplicate==0,"real uploaded tight curves and junctions have exactly one paved face per covered probe")
	facts.paving={"triangles":triangles.size()/3,"covered_probes":covered,"holes":holes,"duplicate":duplicate}
	demo.focus=Vector3(-21,.7,-16) if fixture.is_empty() else Vector3(-14,.7,0);demo.zoom=32. if fixture.is_empty() else 24.;demo.pitch=1.1;demo.yaw=.62;demo._update_camera();demo.toast.hide();demo.toast_time=0.
	for resolution:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=resolution;for i in range(10):await process_frame
		demo.town.clear_preview()
		await RenderingServer.frame_post_draw;check(root.get_texture().get_image().save_png(output+"/roads_"+str(resolution.x)+".png")==OK,"native curve/junction view captured at "+str(resolution))
	# PNG encoding above blocks the caller; start a fresh render-frame clock
	# after that work so its disk/codec time cannot become the first sample.
	for i in range(2):await process_frame
	frame_ms.clear();last_usec=Time.get_ticks_usec();sampling=true
	for i in range(120):await process_frame
	sampling=false;frame_ms.sort()
	facts.frame_sample={"frames":frame_ms.size(),"resolution":root.size,"limit":Engine.max_fps,"p95_ms":frame_ms[int(frame_ms.size()*.95)],"max_ms":frame_ms[-1]}
	var road_id:=str(demo.state.roads[-1].id);demo._after_edit(demo.state.remove_road(road_id),"erase");await settle()
	demo._history(false);await settle()
	check(demo.state.roads==authored.roads and demo.town.road_roots.has(road_id),"actual road deletion and undo restore the original full curve data and rendered root")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()) and (fixture.is_empty() or original==FileAccess.get_file_as_bytes(fixture)),"personal save and actual source work remain byte-identical")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"fixture":fixture}
	FileAccess.open(output+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("ROAD_OUTLINES_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
