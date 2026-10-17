extends RefCounted
const WaveShader=preload("res://scripts/visual/shaders/creation_festival_tracks.gdshader")
var owner:Node3D
var node:MeshInstance3D
var material:ShaderMaterial
var key:Array=[]
var report:Dictionary={"active":false,"rail_edges":0,"maximum_distance":0.}
func setup(renderer:Node3D)->void:owner=renderer
func update(event:Dictionary,network:RefCounted,rails:Dictionary,port:String)->void:
	var active:bool=event.get("audible",false)
	if not active and not report.active:return
	var origin:=Vector2.ZERO
	var id:String=event.get("venue_id","")
	var index:int=owner.state._house_index(id)
	if index>=0:
		var house:Dictionary=owner.state.houses[index];var plan:Dictionary=owner.state.AmphitheaterPlan.for_house(owner.state,house)
		origin=plan.stage if not plan.is_empty() else Vector2(house.origin[0],house.origin[1])
	for target:ShaderMaterial in [owner.water_material,material]:
		if target==null:continue
		target.set_shader_parameter("festival_origin",origin);target.set_shader_parameter("festival_time",float(event.get("elapsed",0.)));target.set_shader_parameter("festival_strength",1. if active else 0.)
	if node!=null:node.visible=active
	report.active=active
	if not active:return
	var next:Array=[owner.state.revision,network.get_instance_id(),id,origin]
	if next==key:return
	key=next
	if node!=null:node.queue_free();node=null
	var distances:=_distances(network.graph,port)
	var vertices:=PackedVector3Array();var uvs:=PackedVector2Array();var max_distance:=0.;var count:=0
	for edge:Dictionary in rails.get("edges",[]):
		var a:Vector3=edge.a;var b:Vector3=edge.b
		var from:String=network._key(Vector2(a.x,a.z));var to:String=network._key(Vector2(b.x,b.z))
		if not distances.has(from) or not distances.has(to):continue
		var tangent:Vector3=(b-a).normalized();var normal:=Vector3(-tangent.z,0,tangent.x)
		var da:float=distances[from];var db:float=distances[to]
		max_distance=maxf(max_distance,maxf(da,db));count+=1
		for side:float in [-1.,1.]:
			var aa:=a+normal*(side*.40-.026)+Vector3.UP*.055;var ab:=a+normal*(side*.40+.026)+Vector3.UP*.055
			var ba:=b+normal*(side*.40-.026)+Vector3.UP*.055;var bb:=b+normal*(side*.40+.026)+Vector3.UP*.055
			vertices.append_array(PackedVector3Array([aa,bb,ba,aa,ab,bb]));uvs.append_array(PackedVector2Array([Vector2(da,0),Vector2(db,1),Vector2(db,0),Vector2(da,0),Vector2(da,1),Vector2(db,1)]))
	if not vertices.is_empty():
		var arrays:Array=[];arrays.resize(Mesh.ARRAY_MAX);arrays[Mesh.ARRAY_VERTEX]=vertices;arrays[Mesh.ARRAY_TEX_UV]=uvs
		var mesh:=ArrayMesh.new();mesh.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,arrays)
		if material==null:material=ShaderMaterial.new();material.shader=WaveShader
		material.set_shader_parameter("festival_strength",1.);material.set_shader_parameter("festival_time",float(event.elapsed))
		node=MeshInstance3D.new();node.name="ActualRailFestivalWaves";node.mesh=mesh;node.material_override=material;node.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF;owner.house_music_layer.add_child(node)
	report={"active":true,"rail_edges":count,"maximum_distance":max_distance,"origin":origin,"distance_source":"actual_street_graph"}
static func _distances(graph:Dictionary,source:String)->Dictionary:
	if not graph.has(source):return {}
	var result:Dictionary={source:0.};var queue:Array=[source];var done:Dictionary={}
	while not queue.is_empty():
		queue.sort_custom(func(a:String,b:String)->bool:return float(result[a])<float(result[b]))
		var a:String=queue.pop_front()
		if done.has(a):continue
		done[a]=true
		for b:String in graph[a]:
			var next:float=float(result[a])+float(graph[a][b])
			if next<float(result.get(b,INF)):result[b]=next;queue.append(b)
	return result
