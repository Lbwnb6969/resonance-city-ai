extends Node
## Overview camera distance is fixed at >=42m: use its orthographic size.
var meshes:Array[MeshInstance3D]=[]
var last:Variant=null
func _process(_delta:float)->void:
	var host:=get_parent() as Node3D
	if not host.is_visible_in_tree():return
	var camera:=get_viewport().get_camera_3d()
	if camera==null:return
	if meshes.is_empty():
		for mesh:MeshInstance3D in host.find_children("*","MeshInstance3D",true,false):
			if mesh.get_meta("balcony_rail",false):meshes.append(mesh)
	var show_detail:=camera.size<=28. if camera.projection==Camera3D.PROJECTION_ORTHOGONAL else camera.global_position.distance_squared_to(host.global_transform*host.get_meta("balcony_center",Vector3.ZERO))<784.
	if last==show_detail:return
	last=show_detail
	for mesh:MeshInstance3D in meshes:mesh.visible=show_detail
