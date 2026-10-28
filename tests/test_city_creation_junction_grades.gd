extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
var checks:=0
var failures:Array=[]
var facts:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var verify:bool="--verify-grades" in OS.get_cmdline_user_args()
	for case:Dictionary in [{"gap":0.,"z":-8.},{"gap":.25,"z":-8.},{"gap":.5,"z":-8.},{"gap":.25,"z":-7.9}]:
		var gap:float=case.gap;var z:float=case.z
		var city:=State.new();city.initialize_free()
		check(city.add_terrain_stroke([Vector2(-18,z-2.5)] as Array[Vector2],"raise",4.,.45).ok,"actual authored gentle bank")
		check(city.add_road([Vector2(-22,z),Vector2(-14,z)] as Array[Vector2],"path","none").ok,"actual T trunk")
		check(city.add_road([Vector2(-18,z-4.),Vector2(-18,z-gap)] as Array[Vector2],"path","none").ok,"actual nearby T stem")
		var before:Dictionary=city.snapshot();var town:=Renderer.new();root.add_child(town);town.setup(city)
		var shared:Dictionary={};var count:=0;var error:=0.;var worst:Dictionary={}
		for road:Dictionary in city.roads:
			var mesh:MeshInstance3D=town.road_roots[road.id].get_node("PathSurface")
			var points:PackedVector3Array=mesh.mesh.surface_get_arrays(0)[Mesh.ARRAY_VERTEX]
			for p:Vector3 in points:
				var at:=Vector2(p.x,p.z).snapped(Vector2.ONE*.00001)
				if shared.has(at) and shared[at].road!=road.id:
					count+=1;var delta:float=absf(p.y-float(shared[at].y))
					if delta>error:error=delta;worst={"at":at,"first_y":shared[at].y,"next_y":p.y}
				else:shared[at]={"road":road.id,"y":p.y}
		var anchors:Dictionary=city._road_heights._junctions(city)
		check(city.snapshot()==before,"junction mesh preparation leaves all authored data unchanged")
		check(count>0,"installed T surfaces share actual contact vertices")
		if verify:check(error<.0001 and anchors.size()==2,"actual connected T surface vertices have one shared height, including cross-bin endpoints")
		facts.append({"gap":gap,"z":z,"shared_vertices":count,"max_height_gap_m":error,"worst":worst,"anchored_roads":anchors.size()})
		town.queue_free();await process_frame
	var isolated:=State.new();isolated.initialize_free()
	check(isolated.add_road([Vector2(-22,-8),Vector2(-14,-8)] as Array[Vector2],"cobble","none",2.1).ok,"actual broad trunk")
	check(isolated.add_road([Vector2(-18,-12),Vector2(-18,-8.5)] as Array[Vector2],"path","none",.8).ok,"actual narrow disconnected stem")
	isolated.prepare_ground_height();check(isolated._road_heights._junctions(isolated).is_empty(),"larger road width cannot invent a link beyond the smaller half width")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--report="):FileAccess.open(arg.trim_prefix("--report="),FileAccess.WRITE).store_string(JSON.stringify(report,"\t"))
	print("JUNCTION_GRADES ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
