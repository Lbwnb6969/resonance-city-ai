extends RefCounted
## Metric planar roof charts reuse the continuous tile shader and palette cache.
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Arch=preload("res://scripts/visual/city_creation_architecture.gd")
static func stone(color:Color)->Material:return Wall.source(color,null,"component",Wall.Kind.STONE)
static func roof(r,parent:Node3D,faces:Array[Vector3],color:Color,name:String,axis:int,ridge:float)->MeshInstance3D:
	var uv:=PackedVector2Array()
	for p:Vector3 in faces:
		var across:=p.z if axis==0 else p.x
		uv.append(Vector2((p.x if axis==0 else p.z)/.22,signf(across)*Vector2(across,p.y-ridge).length()/.28))
	return tiled(r,parent,faces,uv,color,name)
static func tiled(r,parent:Node3D,faces:Array[Vector3],uv:PackedVector2Array,color:Color,name:String)->MeshInstance3D:
	var mesh:MeshInstance3D=r._roof_surface(parent,faces,color,uv);mesh.name=name
	var material:=ShaderMaterial.new();material.shader=r.JoinedRoofShader;material.set_shader_parameter("roof_color",color);mesh.material_override=material
	return mesh
static func gable(r,parent:Node3D,polygon:PackedVector2Array,at:Vector3,color:Color,yaw:float=0.)->void:
	var node:=Node3D.new();parent.add_child(node);node.position=at;node.rotation.y=yaw
	Wall.apply(r._triangles(node,Arch._extrude(polygon,.12),color),Wall.Kind.STONE).name="CivicClosedGable"
static func pick(parent:Node3D,house:Dictionary)->void:
	var groups:Dictionary={};var inverse:=parent.global_transform.affine_inverse()
	for mesh:MeshInstance3D in parent.find_children("*","MeshInstance3D",true,false):
		var transform:=inverse*mesh.global_transform;var source:=mesh.mesh.get_faces()
		for i in range(0,source.size(),3):
			var a:Vector3=transform*source[i];var b:Vector3=transform*source[i+1];var c:Vector3=transform*source[i+2];var center:Vector3=(a+b+c)/3.+parent.position
			var nearest:Dictionary=house.cells[0];var distance:=INF
			for cell:Dictionary in house.cells:
				var at:=Vector3(house.origin[0]+cell.x*1.8,float(house.get("base_y",0.))+cell.level*1.7+.85,house.origin[1]+cell.z*1.8)
				var d:=center.distance_squared_to(at)
				if d<distance:distance=d;nearest=cell
			if not groups.has(str(nearest.id)):groups[str(nearest.id)]={"cell":nearest,"faces":PackedVector3Array()}
			groups[str(nearest.id)].faces.append_array(PackedVector3Array([a,b,c]))
	for group:Dictionary in groups.values():
		var body:=StaticBody3D.new();parent.add_child(body);body.set_meta("house_id",house.id);body.set_meta("cell_id",group.cell.id);body.set_meta("cell",group.cell)
		var shape:=ConcavePolygonShape3D.new();shape.backface_collision=true;shape.set_faces(group.faces)
		var collision:=CollisionShape3D.new();collision.shape=shape;body.add_child(collision)
