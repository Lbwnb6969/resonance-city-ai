extends RefCounted
## Preserve low classical roof geometry; use the metric shingle chart, not plaster.
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
static func surface(renderer,parent:Node3D,patch:Dictionary,faces:Array[Vector3],color:Color,tile:bool)->MeshInstance3D:
	if not tile:return Wall.apply(renderer._triangles(parent,faces,color),Wall.Kind.STONE)
	return tiles(renderer,parent,faces,color,patch.coordinates)
static func tiles(renderer,parent:Node3D,faces:Array,color:Color,coordinates:PackedVector2Array=PackedVector2Array())->MeshInstance3D:
	var mesh:MeshInstance3D=renderer._roof_surface(parent,faces,color,coordinates)
	var key:="ancient_low_tiles/"+str(color)
	if not renderer.materials.has(key):
		var material:=ShaderMaterial.new();material.shader=renderer.JoinedRoofShader
		material.set_shader_parameter("roof_color",color);renderer.materials[key]=material
	mesh.material_override=renderer.materials[key]
	return mesh
