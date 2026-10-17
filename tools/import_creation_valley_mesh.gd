extends SceneTree
const SOURCE:="res://参考资料/Foundation逆向成品-2026-10-13/outputs/foundation-models/glb/game/asset/Terrain/Edges/MountainFar.glb"
const TARGET:="res://资源/自然参考/远山/山脉.res"
func _initialize()->void:
	if FileAccess.file_exists(TARGET):push_error("Valley mesh already exists; preserve it before importing a replacement");quit(1);return
	var scene:PackedScene=load(SOURCE);var model:=scene.instantiate();var meshes:=model.find_children("*","MeshInstance3D",true,false)
	var mesh:Mesh=meshes[0].mesh.duplicate()
	for index:int in mesh.get_surface_count():mesh.surface_set_material(index,null)
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(TARGET.get_base_dir()))
	var error:=ResourceSaver.save(mesh,TARGET,ResourceSaver.FLAG_COMPRESS)
	print("VALLEY_MESH ",JSON.stringify({"error":error,"source_sha256":FileAccess.get_sha256(SOURCE),"vertices":mesh.surface_get_array_len(0),"triangles":mesh.surface_get_array_index_len(0)/3}));model.free();quit(0 if error==OK else 1)
