extends "res://tools/check_creation_entry_road_surface_live.gd"
const Bank=preload("res://tools/fixtures/city_creation_bank_entry_fixture.gd")
var local_faces:Array=[]
func cache_faces(bounds:Rect2)->void:
	local_faces.clear()
	for node:MeshInstance3D in demo.town.find_children("*","MeshInstance3D",true,false):
		if not node.is_visible_in_tree() or node.mesh==null:continue
		if demo.town.preview.is_ancestor_of(node):continue
		var vertices:=node.mesh.get_faces()
		for i in range(0,vertices.size(),3):
			var a:Vector3=node.global_transform*vertices[i];var b:Vector3=node.global_transform*vertices[i+1];var c:Vector3=node.global_transform*vertices[i+2]
			var box:=Rect2(Vector2(a.x,a.z),Vector2.ZERO).expand(Vector2(b.x,b.z)).expand(Vector2(c.x,c.z))
			if box.intersects(bounds,true):local_faces.append([a,b,c])
func mesh_support(at:Vector2,wanted:float)->float:
	var best:=INF
	for face:Array in local_faces:
		var hit:Variant=Geometry3D.segment_intersects_triangle(Vector3(at.x,wanted+.025,at.y),Vector3(at.x,wanted-.025,at.y),face[0],face[1],face[2])
		if hit!=null:best=minf(best,absf(float(hit.y)-wanted))
	return best
func full_corridor(f:Dictionary)->void:
	var city:RefCounted=demo.state;var house:Dictionary=city.houses[0];var entry:Dictionary=city.house_entrances("h1")[0]
	var road:Dictionary=city.roads[0];var profile:Dictionary=city.road_profile(road);var plan:Dictionary=city.Frontage.porch_plan(city,house,entry) if entry.active else {}
	cache_faces(Rect2(Vector2(-25.6,-19.1),Vector2(1.2,1.7)))
	var samples:=[];var path:PackedVector2Array=f.access.corridor.path
	for i in range(1,path.size()):
		var tangent:=Vector2(-(path[i]-path[i-1]).normalized().y,(path[i]-path[i-1]).normalized().x)
		var count:=ceili(path[i-1].distance_to(path[i])/.04)
		for row in range(count+1):
			for column in range(19):samples.append(path[i-1].lerp(path[i],float(row)/count)+tangent*lerpf(-.35,.35,float(column)/18))
	for z in range(-9,10):
		for x in range(-9,10):
			if x*x+z*z<=81:samples.append(Vector2(entry.at)+Vector2(x,z)*(.35/9.))
	var missing:=0;var max_gap:=0.
	for at:Vector2 in samples:
		var surface:=Access._surface(city,house,entry,at,road,profile,plan)
		var gap:=mesh_support(at,float(surface.y))
		if not is_finite(gap):missing+=1
		else:max_gap=maxf(max_gap,gap)
	check(missing==0 and max_gap<.012,"entire two-leg width and turning disk have real visible support")
	facts.full_corridor={"samples":samples.size(),"missing":missing,"max_gap":max_gap}
func rejected_geometry(access:Dictionary,target:Vector2)->void:
	var city:RefCounted=demo.state;var entry:Dictionary=city.house_entrances("h1")[0];var house:Dictionary=city.houses[0];var road:Dictionary=city.roads[0]
	var profile:Dictionary=city.road_profile(road);var blocked:Vector2=access.get("corridor",access).blocked_at
	var direction:Vector2=(Vector2(entry.at)-Vector2(entry.wall_at)).normalized()
	if not access.has("corridor"):direction=(target-(Vector2(entry.wall_at)+direction*.18)).normalized()
	cache_faces(Rect2(blocked-Vector2.ONE*.3,Vector2.ONE*.6))
	var heights:Array=[];var supported:=true
	for at:Vector2 in [blocked-direction*.04,blocked]:
		var surface:=Access._surface(city,house,entry,at,road,profile,{})
		heights.append(surface.y);supported=supported and is_finite(mesh_support(at,float(surface.y)))
	check(supported,"rejected height break is present in the real visible geometry")
	facts.get_or_add("rejected_geometry",[]).append({"blocked_at":blocked,"heights":heights,"rise":absf(float(heights[1])-float(heights[0]))})
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	for kind:String in ["bridge","bridge_edge","wet_corner"]:
		var f:=Bank.build(kind);check(f.ok,"public bank scene "+kind);await show(f.city,Vector2(-23,-18),kind);quiet();demo.life.set_process(false)
		demo.focus=Vector3(-23,.6,-18);demo.zoom=19.;demo.pitch=.8;demo.yaw=.35;demo._update_camera();await settle()
		var city:RefCounted=demo.state;var before:Dictionary=city.snapshot();var access:=Access.assess(city,city.houses[0],city.house_entrances("h1")[0],f.target,city.roads[0])
		check(access==f.access,"published approach equals CPU proof "+kind)
		if kind=="bridge":full_corridor(f)
		else:
			check(not access.ok,"unsupported bank approach remains unavailable "+kind)
			rejected_geometry(access,f.target)
		await key(KEY_L);await refresh_page();check(demo.ledger.visible(),"native L bank inspection "+kind);await key(KEY_ESCAPE);await capture(kind)
		check(city.snapshot()==before,"native inspection preserves bank authorship "+kind)
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("BANK_ENTRY_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
