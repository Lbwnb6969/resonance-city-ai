extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_two_banks_fixture.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var city:RefCounted=Fixture.build().city
	var town:=Renderer.new();root.add_child(town);town.setup(city)
	var crossing:Dictionary={}
	for road:Dictionary in city.roads:
		if not city.road_profile(road).bridge_runs.is_empty():crossing=road;break
	check(not crossing.is_empty(),"real authored crossing has a supported architectural bridge")
	var profile:Dictionary=city.road_profile(crossing)
	var wet_low:=INF;var wet_high:=-INF
	for sample:Dictionary in profile.samples:
		if sample.bridge:wet_low=minf(wet_low,Vector2(sample.xz).x);wet_high=maxf(wet_high,Vector2(sample.xz).x)
	var data:Dictionary=town._prepare_road_data(crossing)
	var arrays:Array=data.arrays;var points:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];var weights:PackedColorArray=arrays[Mesh.ARRAY_COLOR]
	var normals:PackedVector3Array=arrays[Mesh.ARRAY_NORMAL]
	var deck:=0;var land:=0;var blend:=0;var bounded:=true;var complete:=true;var same:Dictionary={}
	for i in range(points.size()):
		var p:=points[i];var w:=weights[i].r
		bounded=bounded and p.is_finite() and normals[i].is_finite() and is_finite(w) and w>=0 and w<=1
		if same.has(p):complete=complete and is_equal_approx(float(same[p]),w)
		same[p]=w
		if p.x>wet_low+.1 and p.x<wet_high-.1:deck+=1;complete=complete and is_equal_approx(w,1.)
		elif p.x<wet_low-1.3 or p.x>wet_high+1.3:land+=1;complete=complete and is_zero_approx(w)
		elif w>.001 and w<.999:blend+=1
	check(points.size()==weights.size() and bounded,"all actual indexed road vertices have finite bounded linear material data")
	check(complete and deck>0 and land>0 and blend>0,"actual bridge deck is stone, dry land stays original, both approaches carry gradual material values")
	var original:Dictionary=city.snapshot();var before:=var_to_bytes(arrays)
	var stroke:Array[Vector2]=[Vector2(-13,8),Vector2(18,8)]
	var added:Dictionary=city.add_road(stroke,"path")
	check(added.ok and not added.no_op,"ordinary path brush creates a second actual river crossing")
	town.rebuild()
	var road:Dictionary=city.roads.filter(func(r:Dictionary)->bool:return r.id==added.road_id)[0]
	var mesh:MeshInstance3D=town.road_roots[road.id].get_node("PathSurface")
	check(mesh.material_override==town._shared_road_material() and mesh.mesh.surface_get_arrays(0)[Mesh.ARRAY_COLOR].size()>0,"real authored path installs one shared shader with complete bridgehead data")
	var path_data:Dictionary=town._prepare_road_data(road)
	var timber:=false;var dry:=false;var stone:=false
	for color:Color in path_data.arrays[Mesh.ARRAY_COLOR]:
		timber=timber or color.r>.9
		dry=dry or color.r<.01
		stone=stone or color.g>.01
	check(timber and dry and not stone,"actual pastoral crossing preserves timber grammar while land remains dirt")
	var buried:=true;var supports:=0
	for record:Array in path_data.curbs:
		var size:Vector3=record[0];var center:Vector3=record[1]
		if size.x<float(road.width):continue
		supports+=1
		buried=buried and center.y+size.y*.5<=city.street_height(Vector2(center.x,center.z))-.0119
	check(buried and supports>0,"actual timber support tops stay below the authoritative road instead of covering its texture")
	check(city.undo().ok and city.roads==original.roads and city.houses==original.houses and city.waters==original.waters,"ordinary undo restores authored roads houses and water")
	town.rebuild()
	check(var_to_bytes(town._prepare_road_data(crossing).arrays)==before,"undo restores byte-identical geometry normals indices and bridge material weights")
	town.queue_free();await process_frame
	print("BRIDGE_SURFACE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"deck_vertices":deck,"land_vertices":land,"blend_vertices":blend}));quit(0 if failures.is_empty() else 1)

