extends "res://tools/check_creation_shore_union_live.gd"
const Side=preload("res://tools/fixtures/city_creation_side_shore_fixture.gd")
const Walk=preload("res://scripts/world/city_creation_public_street_walk.gd")
var face_bins:Dictionary={}
func cache_walk(points:PackedVector2Array)->void:
	var bounds:=Rect2(points[0],Vector2.ZERO)
	for at:Vector2 in points:bounds=bounds.expand(at)
	cache_faces(bounds.grow(1.));face_bins.clear()
	for face:Array in local_faces:
		var a:Vector3=face[0];var b:Vector3=face[1];var c:Vector3=face[2]
		var box:=Rect2(Vector2(a.x,a.z),Vector2.ZERO).expand(Vector2(b.x,b.z)).expand(Vector2(c.x,c.z))
		for z in range(floori(box.position.y),floori(box.end.y)+1):
			for x in range(floori(box.position.x),floori(box.end.x)+1):
				var key:=Vector2i(x,z)
				if not face_bins.has(key):face_bins[key]=[]
				face_bins[key].append(face)
func ground_gap(at:Vector2,wanted:float)->float:
	var best:=INF
	for face:Array in face_bins.get(Vector2i(floori(at.x),floori(at.y)),[]):
		var hit:Variant=Geometry3D.segment_intersects_triangle(Vector3(at.x,wanted+.025,at.y),Vector3(at.x,wanted-.025,at.y),face[0],face[1],face[2])
		if hit!=null:best=minf(best,absf(float(hit.y)-wanted))
	return best
func route_geometry(entry:Dictionary)->void:
	var path:PackedVector2Array=entry.street_path.path;cache_walk(path);var points:Array[Vector2]=[]
	for i in range(1,path.size()):
		var direction:Vector2=(path[i]-path[i-1]).normalized();var tangent:=Vector2(-direction.y,direction.x);var count:=maxi(1,ceili(path[i-1].distance_to(path[i])/.04))
		for row in range(count+1):
			for column in range(19):points.append(path[i-1].lerp(path[i],float(row)/count)+tangent*lerpf(-.35,.35,float(column)/18))
	for at:Vector2 in path:
		for z in range(-9,10):
			for x in range(-9,10):
				if x*x+z*z<=81:points.append(at+Vector2(x,z)*(.35/9.))
	var missing:=0;var maximum:=0.
	for at:Vector2 in points:
		var sample:=Walk.surface(demo.state,at);var gap:=ground_gap(at,float(sample.y))
		if not is_finite(gap):missing+=1
		else:maximum=maxf(maximum,gap)
	check(missing==0 and maximum<.012,"all public street width and turning samples have real production triangles")
	facts.get_or_add("street_geometry",[]).append({"samples":points.size(),"missing":missing,"max_gap":maximum,"road_ids":entry.street_path.road_ids})
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	for kind:String in ["wrap","arch_wrap","disconnected","gap"]:
		var f:=Side.build(kind,.4 if kind=="arch_wrap" else 0.);check(f.ok,"public side/back shore city "+kind)
		await show(f.city,Vector2(-25,-21),kind);quiet();demo.life.set_process(false)
		demo.focus=Vector3(-25,.6,-21);demo.zoom=22.;demo.pitch=.85;demo.yaw=.3;demo._update_camera();await settle();await physics_frame
		var before:Dictionary=demo.state.snapshot();var report:Dictionary=demo.state.functional_zones();var row:Dictionary=report.spaces.filter(func(s):return s.kind=="waterfront" and s.members==["h1"])[0]
		if kind in ["wrap","arch_wrap"]:
			check(row.eligibility.district and row.source_ids.has("r1") and row.source_ids.has("r2"),"published independent entry-to-shore street route qualifies")
			route_geometry(row.evidence.public_entries[0])
			var entry:Dictionary=row.evidence.public_entries[0];check(entry.street_at!=entry.face_street_at and entry.street_path.path.size()>2,"published entry and shore interface are distinct real places")
			if kind=="arch_wrap":
				var clear:=true
				for offset:float in [-.3,0.,.3]:
					var a:=Side.point(Vector2(6.5+offset,-2.0),.4);var b:=Side.point(Vector2(6.5+offset,1.),.4)
					for height:float in [.3,.8,1.1]:
						var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(a.x,height,a.y),Vector3(b.x,height,b.y),1))
						clear=clear and hit.is_empty()
				check(clear and row.source_ids.has("h2"),"real rotated passage stays open across physical body heights and retains structure source")
		else:
			check(not row.eligibility.district,"no public shore qualification through missing road or real stepping gaps")
			if kind=="gap":
				var run:Dictionary=demo.state.road_profile(demo.state.roads[1]).stepping_runs[0];var verified:=false
				for i in range(1,run.stones.size()):
					var at:Vector2=(Vector2(run.stones[i-1].at)+Vector2(run.stones[i].at))*.5
					if demo.state.water_clearance(at)>=-.05:continue
					var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,3.,at.y),Vector3(at.x,-2.,at.y),2))
					verified=verified or hit.is_empty() or float(hit.position.y)<-.16
				check(row.connected and verified,"same published street component has an actual physical inter-stone gap")
		await key(KEY_L);await refresh_page();check(demo.ledger.visible(),"native L reads the resulting public shore evidence");await capture(kind+"_ledger");await key(KEY_ESCAPE)
		check(demo.state.snapshot()==before,"public shore inspection preserves author content")
		var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(before))).ok,"independent side/back shore cold restore")
		await show(cold,Vector2(-25,-21),"公共到岸冷读");quiet();demo.life.set_process(false);check(demo.state.functional_zones()==report,"cold and incremental complete route evidence agree")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("SIDE_SHORE_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
