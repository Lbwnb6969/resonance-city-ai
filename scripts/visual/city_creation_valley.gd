extends Node3D
## Non-editable valley outside the immutable 96m land rim. No State records,
## physics bodies, navigation edges or worker rebuilds belong to this scenery.
const Bounds=preload("res://scripts/world/city_creation_bounds.gd")
const Terrain=preload("res://scripts/world/city_creation_terrain.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const Mountain=preload("res://资源/自然参考/远山/山脉.res")
const GroundShader=preload("res://scripts/visual/shaders/creation_valley.gdshader")
const WaterShader=preload("res://scripts/visual/shaders/creation_water.gdshader")
const Palette=preload("res://scripts/visual/city_creation_shore_palette.gd")
const WorldTint=preload("res://资源/自然参考/grass2_world_albedo_tint.png")
const OUTER:=160.
const MOUNTAIN_COUNT:=10
var water_material:ShaderMaterial
var ground_material:ShaderMaterial
var triangles:=0
var _terrain:=Terrain.new()
static func river_x(z:float)->float:
	var outside:=maxf(absf(z)-Bounds.LAND_RECT.end.y,0.)
	return State.river_x(z)+signf(z)*8.*sin(outside*.038)*smoothstep(0.,18.,outside)
static func mountain_transform(i:int)->Transform3D:
	var angle:=TAU*float(i)/MOUNTAIN_COUNT
	var scale_value:=.044+sin(i*2.4)*.005
	var basis:=Basis(Vector3.UP,angle+.6).scaled(Vector3(scale_value,.078+cos(i*1.7)*.010,scale_value))
	return Transform3D(basis,Vector3(cos(angle)*108.,-.5,sin(angle)*108.))
func _height(at:Vector2)->float:return _terrain._vertex_height(at,absf(at.x-river_x(at.y))-State.RIVER_HALF_WIDTH)
func build()->void:
	name="OuterValley"
	ground_material=ShaderMaterial.new();ground_material.shader=GroundShader;Palette.configure(ground_material)
	ground_material.set_shader_parameter("scenery_river",true);ground_material.set_shader_parameter("grass2_world_tint",WorldTint);ground_material.set_shader_parameter("grass2_world_tint_enabled",true)
	water_material=ShaderMaterial.new();water_material.shader=WaterShader;Palette.configure(water_material)
	water_material.set_shader_parameter("scenery_river",true);water_material.set_shader_parameter("grass2_world_tint",WorldTint);water_material.set_shader_parameter("grass2_world_tint_enabled",true)
	var inner:=Bounds.LAND_RECT.end.x
	var wide:Array[float]=[];var rim:Array[float]=[];var outward:Array[float]=[]
	for x:int in range(-int(OUTER),-int(inner),2):wide.append(float(x))
	for x:int in range(-int(inner*2.),int(inner*2.)+1):wide.append(x*.5);rim.append(x*.5)
	for x:int in range(int(inner)+2,int(OUTER)+1,2):wide.append(float(x))
	for x:int in range(int(inner),65):outward.append(float(x))
	for x:int in range(66,97,2):outward.append(float(x))
	for x:int in range(100,int(OUTER)+1,4):outward.append(float(x))
	var opposite:Array[float]=[]
	for x:float in outward:opposite.push_front(-x)
	var vertices:=PackedVector3Array();var normals:=PackedVector3Array();var indices:=PackedInt32Array()
	_grid(wide,outward,vertices,normals,indices,true);_grid(wide,opposite,vertices,normals,indices,true)
	_grid(outward,rim,vertices,normals,indices,false);_grid(opposite,rim,vertices,normals,indices,false)
	_mesh("ValleyGround",vertices,normals,indices,ground_material)
	var river_vertices:=PackedVector3Array();var river_normals:=PackedVector3Array();var river_indices:=PackedInt32Array()
	for sign_value:float in [-1.,1.]:
		var start:=river_vertices.size()
		for step:int in range(int(OUTER-inner)+1):
			var z:float=sign_value*(inner+step)
			for side:float in [-1.,1.]:river_vertices.append(Vector3(river_x(z)+side*2.3,Terrain.WATER_LEVEL,z));river_normals.append(Vector3.UP)
		for step:int in range(int(OUTER-inner)):
			var a:=start+step*2;river_indices.append_array(PackedInt32Array([a,a+1,a+3,a,a+3,a+2]))
	_mesh("ValleyRiver",river_vertices,river_normals,river_indices,water_material)
	var multimesh:=MultiMesh.new();multimesh.transform_format=MultiMesh.TRANSFORM_3D;multimesh.mesh=Mountain;multimesh.instance_count=MOUNTAIN_COUNT
	for i:int in range(MOUNTAIN_COUNT):
		multimesh.set_instance_transform(i,mountain_transform(i))
	var mountains:=MultiMeshInstance3D.new();mountains.name="MountainSilhouette";mountains.multimesh=multimesh;mountains.material_override=ground_material;mountains.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF;add_child(mountains)
func _grid(xs:Array[float],zs:Array[float],vertices:PackedVector3Array,normals:PackedVector3Array,indices:PackedInt32Array,bend:bool)->void:
	var start:=vertices.size();var columns:=xs.size()
	for z:float in zs:
		for x:float in xs:
			var at:=Vector2(x,z)
			if bend:at.x+=(river_x(z)-State.river_x(z))*exp(-pow((x-3.)/18.,2.))
			vertices.append(Vector3(at.x,_height(at),at.y));normals.append(Vector3.UP)
	for z:int in range(zs.size()):
		for x:int in range(columns):
			var horizontal:=vertices[start+z*columns+mini(x+1,columns-1)]-vertices[start+z*columns+maxi(x-1,0)]
			var vertical:=vertices[start+mini(z+1,zs.size()-1)*columns+x]-vertices[start+maxi(z-1,0)*columns+x]
			normals[start+z*columns+x]=vertical.cross(horizontal).normalized()
	for z:int in range(zs.size()-1):
		for x:int in range(columns-1):
			var a:=start+z*columns+x;indices.append_array(PackedInt32Array([a,a+1,a+columns+1,a,a+columns+1,a+columns]))
func _mesh(label:String,vertices:PackedVector3Array,normals:PackedVector3Array,indices:PackedInt32Array,material:ShaderMaterial)->void:
	var arrays:Array=[];arrays.resize(Mesh.ARRAY_MAX);arrays[Mesh.ARRAY_VERTEX]=vertices;arrays[Mesh.ARRAY_NORMAL]=normals;arrays[Mesh.ARRAY_INDEX]=indices
	var mesh:=ArrayMesh.new();mesh.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,arrays)
	var instance:=MeshInstance3D.new();instance.name=label;instance.mesh=mesh;instance.material_override=material;instance.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF;add_child(instance);triangles+=indices.size()/3
func set_light(phase:int)->void:
	water_material.set_shader_parameter("evening",1. if phase==1 else 0.);water_material.set_shader_parameter("night",1. if phase==2 else 0.)
