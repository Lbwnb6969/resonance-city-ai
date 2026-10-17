extends SceneTree
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Tower=preload("res://scripts/visual/city_creation_tower.gd")
const Round=preload("res://scripts/visual/city_creation_round_tower.gd")
var failures:Array[String]=[]
var checks:=0
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var renderer:=Renderer.new();root.add_child(renderer)
	var shapes:Dictionary={"square_tower":Tower.roof_vertices(Vector3(26,1,-30)),"round_tower":Round.roof_vertices(Vector3(-31,3,27))}
	for kind:String in shapes:
		var faces:Array=shapes[kind];var reference:MeshInstance3D=renderer._triangles(renderer,faces,Color.WHITE);var roof:MeshInstance3D=renderer._roof_surface(renderer,faces,Color.WHITE)
		_check(roof.mesh.get_faces()==reference.mesh.get_faces(),kind+" retains every authored roof and picking triangle")
		var arrays:Array=roof.mesh.surface_get_arrays(0);var positions:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];var normals:PackedVector3Array=arrays[Mesh.ARRAY_NORMAL];var uv:PackedVector2Array=arrays[Mesh.ARRAY_TEX_UV];var index:PackedInt32Array=arrays[Mesh.ARRAY_INDEX]
		var fixed:=positions.size()==uv.size();var outward:=true
		var max_uv_error:=0.
		for i in range(0,index.size(),3):
			var a:int=index[i];var b:int=index[i+1];var c:int=index[i+2]
			var normal:Vector3=(positions[c]-positions[a]).cross(positions[b]-positions[a]).normalized()
			var contour:=Vector3(normal.z,0,-normal.x)
			if contour.length_squared()<.0001:contour=Vector3.RIGHT
			contour=contour.normalized();var downhill:=contour.cross(normal).normalized()
			for vertex:int in [a,b,c]:max_uv_error=maxf(max_uv_error,uv[vertex].distance_to(Vector2(positions[vertex].dot(contour)/.22,positions[vertex].dot(downhill)/.28)))
			outward=outward and normal.dot(normals[a])>.999 and normal.dot(normals[b])>.999 and normal.dot(normals[c])>.999
		fixed=fixed and max_uv_error<.0005
		print("UV_PRECISION ",kind," ",max_uv_error)
		_check(fixed,kind+" has fixed 22 by 28 centimetre face coordinates at distant world positions")
		_check(outward,kind+" stores the actual geometric face normal without camera-derived projection")
		var group:=Node3D.new();renderer.add_child(group)
		var instance:MeshInstance3D=renderer._roof_surface(group,faces,Color.WHITE);var material:=ShaderMaterial.new();material.shader=renderer.JoinedRoofShader;instance.material_override=material
		var before:PackedVector2Array=instance.mesh.surface_get_arrays(0)[Mesh.ARRAY_TEX_UV]
		var before_faces:PackedVector3Array=instance.mesh.get_faces()
		renderer._merge_meshes(group)
		var meshes:Array=group.find_children("*","MeshInstance3D",true,false)
		var merged:MeshInstance3D=meshes[0]
		_check(meshes.size()==1 and merged.mesh.get_faces()==before_faces and merged.mesh.surface_get_arrays(0)[Mesh.ARRAY_TEX_UV]==before,kind+" retains fixed tile coordinates through production material batching")
		group.free()
		reference.free();roof.free()
	print("ROOF_COORDINATES ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
