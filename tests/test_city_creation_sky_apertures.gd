extends SceneTree
const Foliage=preload("res://scripts/visual/city_creation_foliage.gd")
const Fixture=preload("res://tools/fixtures/city_creation_alpine_fixture.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func covered(arrays:Array,at:Vector2)->bool:
	var vertices:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];var indices:PackedInt32Array=arrays[Mesh.ARRAY_INDEX]
	for i in range(0,indices.size(),3):
		if Geometry3D.segment_intersects_triangle(Vector3(at.x,5,at.y),Vector3(at.x,1.,at.y),vertices[indices[i]],vertices[indices[i+1]],vertices[indices[i+2]])!=null:return true
	return false
func run()->void:
	var foliage:=Foliage.new()
	for kind:String in ["olive","golden_tree"]:
		for variant in range(3):
			var mesh:ArrayMesh=foliage.parts(kind,variant).canopy;var arrays:Array=mesh.surface_get_arrays(0)
			var holes:=0;var leaves:=0
			for x:float in [-.12,0.,.12]:
				for z:float in [-.12,0.,.12]:
					if not covered(arrays,Vector2(x,z)):holes+=1
			for i in range(24):
				var phase:float=i*TAU/24.
				if covered(arrays,Vector2(cos(phase),sin(phase))*(.95 if kind=="olive" else 1.10)):leaves+=1
			check(holes==9,"real indexed canopy has a clear central sky aperture "+kind+str(variant))
			check(leaves>=10,"open crown still carries substantial peripheral leaf fans "+kind+str(variant))
			check(foliage.parts(kind,variant).canopy==mesh,"geometry is shared between trees "+kind+str(variant))
	var city:RefCounted=Fixture.build().city;var before:Dictionary=city.snapshot()
	var r:=Renderer.new();r.state=city;city.prepare_ground_height();r._road_layout_key();r._prepare_road_layout()
	var count:=0;var finite:=true;var gap:=0.;var alpha:=Vector2(1,0)
	for road:Dictionary in city.roads:
		var prepared:Dictionary=preload("res://scripts/visual/city_creation_road_stairs.gd").prepare(r,road,city.road_profile(road),[])
		var arrays:Array=prepared.contact
		if arrays.is_empty():continue
		var vertices:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];count+=vertices.size()
		for i in range(0,vertices.size(),3):
			var a:Vector3=vertices[i];var b:Vector3=vertices[i+1];var c:Vector3=vertices[i+2]
			finite=finite and a.is_finite() and b.is_finite() and c.is_finite() and (b-a).cross(c-a).y>0.
			for p:Vector3 in [a,b,c,(a+b+c)/3.]:gap=maxf(gap,absf(p.y-city.ground_height(Vector2(p.x,p.z))-.012))
		for color:Color in arrays[Mesh.ARRAY_COLOR]:alpha.x=minf(alpha.x,color.a);alpha.y=maxf(alpha.y,color.a)
	check(count>0 and finite,"real stairs produce finite upward contact ribbon")
	check(gap<.00002,"contact vertices and triangle interiors match actual terrain to twelve millimetres")
	check(alpha.x<.001 and alpha.y>.999,"contact ribbon fades from full inner alpha to transparent outer edge")
	check(city.snapshot()==before,"canopy and stair contact leave the full authored world unchanged")
	preload("res://scripts/visual/city_creation_budget_rebuild.gd").new()._dispose_context(r)
	print("SKY_APERTURES ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"contact_vertices":count,"terrain_gap_error":gap}));quit(0 if failures.is_empty() else 1)
