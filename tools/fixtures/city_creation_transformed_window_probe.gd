extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
## Sample final published triangles, independently locating design-space holes.
static func scan(house:Node3D,source:Dictionary,space:PhysicsDirectSpaceState3D=null)->Dictionary:
	var inverse:=house.global_transform.affine_inverse();var rays:=0;var blocked:=0;var panes:=0;var picked:=0;var meshes:Array=[];var blockers:Array=[]
	for mesh:MeshInstance3D in house.find_children("*","MeshInstance3D",true,false):
		meshes.append({"name":str(mesh.get_path()),"faces":mesh.mesh.get_faces(),"inverse":mesh.global_transform.affine_inverse(),"glass":mesh.material_override.has_meta("creation_facade_glass")})
	for wall:Node3D in house.find_children("*","Node3D",true,false):
		if not wall.has_meta("layered_window"):continue
		var design:=inverse*wall.global_transform
		for hole:Dictionary in wall.get_meta("layered_window").openings:
			for dx:float in [-.07,.07]:
				for y:float in [hole.bottom+.04,hole.spring-.03]:
					var a:=Frame.world3(source,design*Vector3(hole.x+dx,y,.40));var b:=Frame.world3(source,design*Vector3(hole.x+dx,y,-.06));var front:=Frame.world3(source,design*Vector3(hole.x+dx,y,-.02));var glass:=false;var obstruction:=false;rays+=1
					for row:Dictionary in meshes:
						var start:Vector3=row.inverse*a;var end:Vector3=row.inverse*(b if row.glass else front)
						for i in range(0,row.faces.size(),3):
							var hit:Variant=Geometry3D.segment_intersects_triangle(start,end,row.faces[i],row.faces[i+1],row.faces[i+2])
							if hit==null:continue
							if row.glass:glass=true
							else:
								obstruction=true
								if blockers.size()<12:blockers.append({"mesh":row.name,"cell":wall.get_meta("layered_window").cell_id,"hole":hole,"dx":dx,"y":y,"hit":row.inverse.affine_inverse()*hit})
							break
					if glass:panes+=1
					if obstruction:blocked+=1
					if space!=null:
						var hit:=space.intersect_ray(PhysicsRayQueryParameters3D.create(a,b,1))
						if not hit.is_empty() and hit.collider.get_meta("house_id","")==source.id:picked+=1
	return {"rays":rays,"blocked":blocked,"glass":panes,"picked":picked,"blockers":blockers}
