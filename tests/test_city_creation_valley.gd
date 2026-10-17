extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Valley=preload("res://scripts/visual/city_creation_valley.gd")
const Bounds=preload("res://scripts/world/city_creation_bounds.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var city:=State.new();city.initialize();city.prepare_ground_height();var original:Dictionary=city.snapshot()
	var began:=Time.get_ticks_usec();var valley:=Valley.new();root.add_child(valley);valley.build();var build_ms:float=(Time.get_ticks_usec()-began)/1000.
	_check(valley.find_children("*","CollisionObject3D",true,false).is_empty() and not valley.is_processing(),"distant valley adds neither physics nor per-frame simulation")
	var ground:MeshInstance3D=valley.get_node("ValleyGround");var arrays:Array=ground.mesh.surface_get_arrays(0)
	var vertices:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];var indices:PackedInt32Array=arrays[Mesh.ARRAY_INDEX];var maximum:=0.;var outside:=true;var seam_points:=0
	for vertex:Vector3 in vertices:
		outside=outside and (absf(vertex.x)>=48.-.00001 or absf(vertex.z)>=48.-.00001)
		if maxf(absf(vertex.x),absf(vertex.z))<=48.00001 and (is_equal_approx(absf(vertex.x),48.) or is_equal_approx(absf(vertex.z),48.)):
			maximum=maxf(maximum,absf(city.ground_height(Vector2(vertex.x,vertex.z))-vertex.y));seam_points+=1
	_check(outside and seam_points>=768 and maximum<.00001,"every valley vertex remains outside existing land and the complete sampled rim shares original ground height")
	var winding:=true
	for index:int in range(0,indices.size(),3):
		var a:=vertices[indices[index]];var b:=vertices[indices[index+1]];var c:=vertices[indices[index+2]]
		winding=winding and (c-a).cross(b-a).y>0.
	_check(winding,"all exterior ground triangles face upward with no reversed panels")
	var unchanged:=true;var slope_gap:=0.
	for index:int in range(-480,481):
		var z:=index*.1;unchanged=unchanged and is_equal_approx(Valley.river_x(z),State.river_x(z))
	for z:float in [-48.,48.]:slope_gap=maxf(slope_gap,absf((Valley.river_x(z+.001)-Valley.river_x(z-.001))-(State.river_x(z+.001)-State.river_x(z-.001))))
	_check(unchanged and slope_gap<.000001,"visual river retains every existing centreline point and its boundary tangent")
	_check(absf(Valley.river_x(100.)-State.river_x(100.))>4.,"the river actually meanders across the extended valley")
	var river:MeshInstance3D=valley.get_node("ValleyRiver");var river_vertices:PackedVector3Array=river.mesh.surface_get_arrays(0)[Mesh.ARRAY_VERTEX];var joins:=0;var water_ok:=true
	for vertex:Vector3 in river_vertices:
		water_ok=water_ok and absf(vertex.z)>=48. and absf(vertex.y+.16)<.000001
		if is_equal_approx(absf(vertex.z),48.):joins+=1
	_check(water_ok and joins==4,"both water extensions meet the exact existing river ends and elevation")
	var mountains:MultiMeshInstance3D=valley.get_node("MountainSilhouette");var clear:=true;var aabb:AABB=mountains.multimesh.mesh.get_aabb()
	for i:int in mountains.multimesh.instance_count:
		# Dummy rendering does not retain MultiMesh GPU transforms. The native
		# viewport fixture separately reads back the actual uploaded instances.
		var transform:=Valley.mountain_transform(i);var bounds:AABB=transform*aabb
		clear=clear and not (bounds.position.x<48. and bounds.end.x> -48. and bounds.position.z<48. and bounds.end.z> -48.)
	_check(clear and mountains.multimesh.instance_count==10 and mountains.multimesh.mesh.surface_get_array_index_len(0)==5625,"ten shared source mountains remain beyond the complete original land")
	valley.set_light(2)
	_check(valley.water_material.get_shader_parameter("night")==1. and valley.water_material.get_shader_parameter("scenery_river")==true,"extended water uses the original night palette and the dedicated analytic shore")
	_check(city.snapshot()==original,"creating and lighting scenery leaves every authored city field intact")
	print("VALLEY ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures,"build_ms":build_ms,"ground_vertices":vertices.size(),"ground_triangles":indices.size()/3,"seam_points":seam_points,"maximum_rim_gap":maximum}));valley.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
