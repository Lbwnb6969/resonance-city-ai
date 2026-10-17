extends SceneTree
const Adapter=preload("res://scripts/visual/city_creation_source_mesh.gd")
var rows: Array=[]
var ok:=true
func _initialize() -> void:
	for path: String in ["res://资源/自然参考/坡地伴石.glb","res://资源/建筑参考/庭院喷泉.glb"]:
		var scene: PackedScene=load(path)
		var source: Node3D=scene.instantiate()
		_visit(source)
		source.free()
	var result: Dictionary={"ok":ok,"parts":rows,"scope":"Imported source positions/normals preserved; adapted indices are clockwise with outward source normals."}
	FileAccess.open("res://验证记录/露岩草丘_2026-10-16/source_winding.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t")+"\n")
	print("SOURCE_WINDING ",JSON.stringify(result));quit(0 if ok else 1)
func _visit(node: Node) -> void:
	if node is MeshInstance3D:
		var corrected: ArrayMesh=Adapter.outward_mesh(node.mesh)
		var arrays: Array=corrected.surface_get_arrays(0)
		var original: Array=node.mesh.surface_get_arrays(0)
		var positions: PackedVector3Array=arrays[Mesh.ARRAY_VERTEX]
		var normals: PackedVector3Array=arrays[Mesh.ARRAY_NORMAL]
		var indices: PackedInt32Array=arrays[Mesh.ARRAY_INDEX]
		var cw:=0
		var opposed:=0
		for t in range(0,indices.size(),3):
			var a:=indices[t];var b:=indices[t+1];var c:=indices[t+2]
			var dot: float=(positions[b]-positions[a]).cross(positions[c]-positions[a]).dot(normals[a]+normals[b]+normals[c])
			if dot< -0.00000001: cw+=1
			if dot>0.00000001: opposed+=1
		var position_error:=0.0
		var normal_error:=0.0
		for index in range(positions.size()):
			position_error=maxf(position_error,positions[index].distance_to(original[Mesh.ARRAY_VERTEX][index]))
			normal_error=maxf(normal_error,normals[index].distance_to(original[Mesh.ARRAY_NORMAL][index]))
		# ArrayMesh re-encodes imported octahedral normals on upload.
		var same: bool=position_error<0.000001 and normal_error<0.001
		ok=ok and same and cw>0 and opposed==0
		rows.append({"part":node.name,"clockwise":cw,"opposed":opposed,"positions_normals_preserved":same,"position_max_error_m":position_error,"normal_max_error":normal_error})
	for child: Node in node.get_children(): _visit(child)
