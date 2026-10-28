extends SceneTree
const Wind=preload("res://scripts/visual/city_creation_soft_wind.gd")
const Canopy=preload("res://scripts/visual/city_creation_terrace_canopy.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Promenade=preload("res://scripts/visual/city_creation_promenade.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var city=preload("res://scripts/world/city_creation_state.gd").new();city.initialize_free()
	var town:=Renderer.new();root.add_child(town);town.setup(city)
	var host:=Node3D.new();root.add_child(host);var body:=StaticBody3D.new();host.add_child(body)
	Canopy.build(town,host,body,1.89,[Color.WHITE,Color.WHITE,Color("89755f")])
	var cloth:MeshInstance3D=host.get_node("TerraceCanopyCloth")
	var arrays:Array=cloth.mesh.surface_get_arrays(0);var points:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];var weights:PackedColorArray=arrays[Mesh.ARRAY_COLOR]
	var edges:=0;var moving:=0;var bounded:=true
	for i in range(points.size()):
		bounded=bounded and weights[i].a>=0. and weights[i].a<=1.
		if absf(absf(points[i].z)-.61)<.00001:
			edges+=1;bounded=bounded and is_zero_approx(weights[i].a)
		elif weights[i].a>.5:moving+=1
	check(bounded and edges>0 and moving>0,"actual canvas pins both support edges while its middle can move")
	var collision:ConcavePolygonShape3D=body.get_node("CanopyPick").shape
	check(collision.get_faces()==cloth.mesh.get_faces(),"real cloth pick collider retains byte-identical authored triangles")
	var promenade:=Promenade.new();var parent:=Node3D.new();root.add_child(parent)
	promenade.install(town,parent,[{"kind":"flower","at":Vector2(4,7),"y":.2,"yaw":1.3}])
	var moving_materials:=0;var static_materials:=0;var max_weight:=0.;var min_weight:=1.
	for node:MeshInstance3D in parent.find_children("*","MeshInstance3D",true,false):
		if node.material_override is ShaderMaterial and node.material_override.shader==Wind.WindShader:
			moving_materials+=1
			var colors:PackedColorArray=node.mesh.surface_get_arrays(0)[Mesh.ARRAY_COLOR]
			for color:Color in colors:max_weight=maxf(max_weight,color.a);min_weight=minf(min_weight,color.a)
		else:static_materials+=1
	check(moving_materials==3 and static_materials>0,"production flower boxes animate only leaves and two bloom colors, stone and soil retain static materials")
	check(is_zero_approx(min_weight) and max_weight>.99,"actual transformed batched blooms retain pinned roots and movable tips")
	var sphere:=SphereMesh.new();var source:Array=sphere.surface_get_arrays(0);var result:Array=Wind.weighted_mesh(sphere).surface_get_arrays(0)
	for attribute:int in [Mesh.ARRAY_VERTEX,Mesh.ARRAY_TEX_UV,Mesh.ARRAY_INDEX]:check(source[attribute]==result[attribute],"authored source attribute unchanged "+str(attribute))
	var normals:=true;var worst:=0.;var original_normal:=Vector3.ZERO;var packed_normal:=Vector3.ZERO
	for i in range(source[Mesh.ARRAY_NORMAL].size()):
		var error:float=Vector3(source[Mesh.ARRAY_NORMAL][i]).distance_to(result[Mesh.ARRAY_NORMAL][i])
		if error>worst:worst=error;original_normal=source[Mesh.ARRAY_NORMAL][i];packed_normal=result[Mesh.ARRAY_NORMAL][i]
		normals=normals and error<.0002
	check(normals,"ArrayMesh normal repacking retains direction within 0.0002 (measured baseline packing error)")
	host.free();parent.free();town.queue_free();await process_frame
	print("SOFT_WIND ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"pinned_edge_vertices":edges,"moving_vertices":moving,"normal_repacking_max_error":worst,"worst_original":original_normal,"worst_packed":packed_normal}));quit(0 if failures.is_empty() else 1)
