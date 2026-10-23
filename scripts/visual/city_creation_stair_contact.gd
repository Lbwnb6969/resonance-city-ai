extends RefCounted
## A terrain-clipped moss/gravel ribbon below the stair flank, without collision.
const Highland=preload("res://scripts/visual/city_creation_highland.gd")
static func prepare(r, edges: Array) -> Array:
	var vertices:=PackedVector3Array();var normals:=PackedVector3Array();var colors:=PackedColorArray();var uv:=PackedVector2Array()
	for edge:Array in edges:
		var a:Vector2=edge[0];var b:Vector2=edge[1];var normal:Vector2=edge[2]
		if r._inside_other_road((a+b)*.5,str(edge[4])):continue
		var polygon:=PackedVector2Array([a+normal*.065,b+normal*.065,b+normal*.23,a+normal*.23])
		var first:=vertices.size();var center:=Vector3(0,float(edge[3]),0)
		Highland._append_ground(r,polygon,Rect2(a,Vector2.ZERO).expand(b),center,vertices,normals,colors,uv)
		for i in range(first,vertices.size()):
			vertices[i]+=center
			var p:=Vector2(vertices[i].x,vertices[i].z)
			var distance:=p.distance_to(Geometry2D.get_closest_point_to_segment(p,a,b))
			colors[i]=Color(1,1,1,1.-clampf((distance-.065)/.165,0.,1.))
	if vertices.is_empty():return []
	var arrays:Array=[];arrays.resize(Mesh.ARRAY_MAX)
	arrays[Mesh.ARRAY_VERTEX]=vertices;arrays[Mesh.ARRAY_NORMAL]=normals;arrays[Mesh.ARRAY_COLOR]=colors;arrays[Mesh.ARRAY_TEX_UV]=uv
	return arrays
static func install(r, root: Node3D, arrays: Array) -> void:
	if arrays.is_empty():return
	var material:ShaderMaterial=r.materials.get("highland_contact")
	if material==null:
		material=ShaderMaterial.new();material.shader=Highland.ContactShader;r.materials["highland_contact"]=material
	var mesh:=ArrayMesh.new();mesh.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,arrays)
	var node:=MeshInstance3D.new();node.name="StairContactSkirt";node.mesh=mesh;node.material_override=material
	node.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF;root.add_child(node)
