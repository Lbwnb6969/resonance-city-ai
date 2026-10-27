extends RefCounted
## Extend the original roof chart over the opened hinge. Shared source vertices
## use one area-weighted differential, so both sides of a formerly continuous
## edge still agree after movement. Wall, glass and decorative UVs stay authored.
const RoofShader=preload("res://scripts/visual/shaders/creation_joined_roof.gdshader")
static func surfaces(node:MeshInstance3D)->PackedInt32Array:
	var result:=PackedInt32Array()
	for surface in range(node.mesh.get_surface_count()):
		var material:Material=node.material_override if node.material_override!=null else node.mesh.surface_get_material(surface)
		if material is ShaderMaterial and material.shader==RoofShader:result.append(surface)
	return result
static func field(arrays:Array,transform:Transform3D)->Array:
	var positions:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];var uv:PackedVector2Array=arrays[Mesh.ARRAY_TEX_UV]
	var indices:PackedInt32Array=arrays[Mesh.ARRAY_INDEX] if arrays[Mesh.ARRAY_INDEX]!=null else PackedInt32Array()
	var groups:=PackedInt32Array();groups.resize(positions.size())
	var world:=PackedVector3Array();world.resize(positions.size())
	var sum_u:=PackedVector3Array();sum_u.resize(positions.size())
	var sum_v:=PackedVector3Array();sum_v.resize(positions.size())
	var weights:=PackedFloat64Array();weights.resize(positions.size())
	var lookup:Dictionary={};var next_group:=0
	for i in range(positions.size()):
		world[i]=transform*positions[i]
		var key:Array=[positions[i],uv[i]];var group:int=lookup.get(key,-1)
		if group<0:group=next_group;lookup[key]=group;next_group+=1
		groups[i]=group
	for i in range(0,indices.size() if not indices.is_empty() else positions.size(),3):
		var a:int=indices[i] if not indices.is_empty() else i;var b:int=indices[i+1] if not indices.is_empty() else i+1;var c:int=indices[i+2] if not indices.is_empty() else i+2
		var e1:=world[b]-world[a];var e2:=world[c]-world[a];var normal:=e1.cross(e2);var determinant:=normal.length_squared()
		if determinant<.0000000000000001:continue
		var du1:=uv[b]-uv[a];var du2:=uv[c]-uv[a];var weight:=sqrt(determinant)
		var u:Vector3=(e2.cross(normal)*du1.x+normal.cross(e1)*du2.x)/weight
		var v:Vector3=(e2.cross(normal)*du1.y+normal.cross(e1)*du2.y)/weight
		for k in range(3):
			var id:int=indices[i+k] if not indices.is_empty() else i+k;var group:=groups[id]
			sum_u[group]+=u;sum_v[group]+=v;weights[group]+=weight
	var result:Array=[]
	for i in range(positions.size()):
		var group:=groups[i];var weight:float=weights[group] if weights[group]>0. else 1.
		result.append([sum_u[group]/weight,sum_v[group]/weight])
	return result
static func shifted(vertex:Dictionary,delta:Vector3)->Vector2:
	return Vector2(vertex.uv)+Vector2(Vector3(vertex.roof_u).dot(delta),Vector3(vertex.roof_v).dot(delta))
static func rigid(source:Mesh,transform:Transform3D,plan:Dictionary,roof_surfaces:PackedInt32Array)->ArrayMesh:
	var result:=ArrayMesh.new()
	for surface in range(source.get_surface_count()):
		var arrays:Array=source.surface_get_arrays(surface)
		if surface in roof_surfaces:
			var gradients:=field(arrays,transform);var uv:PackedVector2Array=arrays[Mesh.ARRAY_TEX_UV];var points:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX]
			for i in range(points.size()):
				var p:Vector3=transform*points[i];var next:Vector2=Vector2(plan.pivot)+(Vector2(p.x,p.z)-Vector2(plan.pivot)).rotated(-float(plan.angle))
				var delta:=Vector3(next.x-p.x,0.,next.y-p.z)
				uv[i]+=Vector2(Vector3(gradients[i][0]).dot(delta),Vector3(gradients[i][1]).dot(delta))
			arrays[Mesh.ARRAY_TEX_UV]=uv
		result.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,arrays);result.surface_set_material(surface,source.surface_get_material(surface))
	return result
