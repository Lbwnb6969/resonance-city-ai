extends RefCounted
## Capture actual glass before batching; resonance emits panes only on that glass.
static func record(root:Node3D)->void:
	var windows:Array=[];var inverse:=root.global_transform.affine_inverse()
	for mesh:MeshInstance3D in root.find_children("*","MeshInstance3D",true,false):
		var frame:Transform3D=inverse*mesh.global_transform;var bounds:=mesh.mesh.get_aabb();var at:=frame*bounds.get_center();var normal:=frame.basis.z.normalized();var size:=Vector2.ZERO
		if str(mesh.name).begins_with("AncientShutter"):
			size=Vector2(bounds.size.x-.04,bounds.size.y-.04);at+=normal*(bounds.size.z*.5+.006)
		elif str(mesh.name).begins_with("BasilicaArchedRecess"):
			size=Vector2(.32,.34);at=frame*Vector3(0,.80,.025)
		elif str(mesh.name).begins_with("BasilicaClerestoryGlass"):
			normal=Vector3(signf(mesh.position.x),0,0);size=Vector2(bounds.size.z-.02,bounds.size.y-.02);at+=normal*.015
		else:continue
		windows.append({"at":at,"normal":normal,"size":size})
	root.set_meta("civic_windows",windows)
static func face(rig,root:Node3D,house:Dictionary,cell:Dictionary,side:Vector2i,surface:SurfaceTool,windows:Array)->bool:
	if not root.get_meta("ancient_extension",{}).get("rectangular",false):return false
	if str(cell.id)==str(house.cells[0].id) and side==Vector2i.LEFT:
		for window:Dictionary in root.get_meta("civic_windows",[]):
			var normal:Vector3=window.normal;var frame:=Transform3D(Basis(Vector3.UP,atan2(normal.x,normal.z)),window.at)
			rig._panel(surface,frame,Vector3.ZERO,window.size,0);windows.append(window)
	return true
