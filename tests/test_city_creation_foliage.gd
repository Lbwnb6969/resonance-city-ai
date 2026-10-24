extends SceneTree
const Foliage=preload("res://scripts/visual/city_creation_foliage.gd")
const Bough=preload("res://scripts/visual/city_creation_bough_curve.gd")
var count:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	count+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:
	var foliage:=Foliage.new();var curves:Dictionary={}
	for kind:String in ["olive","cypress","golden_tree"]:
		var data:Dictionary=foliage._geometry();var start:=Vector3.ZERO;var end:=Vector3(.1,1.35,.03)
		Bough.append(data,start,end,.1,.04,kind)
		check(data.vertices.size()==28 and data.indices.size()==126,"four full seven-sided rings "+kind)
		var centers:Array[Vector3]=[]
		for ring in range(4):
			var center:=Vector3.ZERO
			for side in range(7):center+=data.vertices[ring*7+side]
			centers.append(center/7.)
		check(centers[0].distance_to(start)<.00001 and centers[-1].distance_to(end)<.00001,"curved branch keeps both attachment points "+kind)
		var deviation:float=Geometry3D.get_closest_point_to_segment(centers[1],start,end).distance_to(centers[1]);curves[kind]=deviation
		check(deviation>.015,"intermediate ring is visibly off original straight axis "+kind)
		check((data.vertices[0]-centers[0]).length()>.13 and (data.vertices[7]-centers[1]).length()<.1,"root flare returns smoothly to tapered branch "+kind)
		check(Array(data.normals).all(func(n):return n.is_finite() and absf(n.length()-1.)<.001),"finite unit normals "+kind)
		check(data.colors[0].get_luminance()<data.colors[-1].get_luminance(),"warm bark lightens towards upper branches "+kind)
	check(curves.cypress<curves.olive and curves.olive<curves.golden_tree,"cypress upright,olive bent,golden broadly arched")
	var baseline:RefCounted
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--baseline="):baseline=load(arg.trim_prefix("--baseline=")).new()
	for kind:String in ["olive","cypress","golden_tree","pink_flower","white_flower","yellow_flower"]:
		for variant in range(3):
			var parts:Dictionary=foliage.parts(kind,variant);var trunk:Array=parts.trunk.surface_get_arrays(0)
			check(parts==foliage.parts(kind,variant) and parts.trunk==foliage.parts(kind,variant).trunk,"cached trunks and crowns are shared "+kind+str(variant))
			check(Array(trunk[Mesh.ARRAY_VERTEX]).all(func(v):return v.is_finite()) and Array(trunk[Mesh.ARRAY_NORMAL]).all(func(n):return n.is_finite() and n.length_squared()>.99),"all generated branch vertices and normals finite "+kind+str(variant))
			check(trunk[Mesh.ARRAY_INDEX].size()>0 and trunk[Mesh.ARRAY_INDEX].size()%3==0,"complete branch triangles "+kind+str(variant))
			if baseline!=null:
				check(var_to_bytes(parts.canopy.surface_get_arrays(0))==var_to_bytes(baseline.parts(kind,variant).canopy.surface_get_arrays(0)),"original leaf geometry and random sequence remain byte-identical "+kind+str(variant))
	print("FOLIAGE_CURVES ",JSON.stringify({"checks":count,"failures":failures,"ok":failures.is_empty(),"curve_deviations":curves}));quit(0 if failures.is_empty() else 1)
