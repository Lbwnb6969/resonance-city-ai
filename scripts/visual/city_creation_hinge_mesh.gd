extends RefCounted
const Cut=preload("res://scripts/visual/city_creation_corner_mesh.gd")
const RoofUV=preload("res://scripts/visual/city_creation_hinge_roof_uv.gd")
static func at(vertex:Dictionary,plan:Dictionary)->float:return (Vector2(vertex.p.x,vertex.p.z)-Vector2(plan.pivot)).dot(plan.axis)
static func moved(p:Vector3,plan:Dictionary)->Vector3:
	var q:Vector2=Vector2(plan.pivot)+(Vector2(p.x,p.z)-Vector2(plan.pivot)).rotated(-float(plan.angle))
	return Vector3(q.x,p.y,q.y)
static func vertex(source:Dictionary,plan:Dictionary,wing:bool)->Dictionary:
	if not wing:return source
	var result:=source.duplicate(false);result.p=moved(source.p,plan);result.n=Basis(Vector3.UP,float(plan.angle))*source.n
	if source.has("roof_u"):result.uv=RoofUV.shifted(source,Vector3(result.p)-Vector3(source.p))
	return result
static func triangles(tri:Array,plan:Dictionary,owner_wing:bool)->Array:
	var low:=INF;var high:=-INF
	for v:Dictionary in tri:var d:=at(v,plan);low=minf(low,d);high=maxf(high,d)
	var plane:=Vector3(plan.axis.x,plan.axis.y,Vector2(plan.pivot).dot(plan.axis));var parts:Array=[]
	if low<-.000001 and high>.000001:parts=[{"poly":Cut.half(tri,plane,-1.),"wing":false},{"poly":Cut.half(tri,plane,1.),"wing":true}]
	else:parts=[{"poly":tri,"wing":high>.000001 or low>=-.000001 and owner_wing}]
	var output:Array=[]
	for part:Dictionary in parts:
		var poly:Array=part.poly
		for k in range(1,poly.size()-1):output.append([vertex(poly[0],plan,part.wing),vertex(poly[k],plan,part.wing),vertex(poly[k+1],plan,part.wing)])
		if part.wing or low>=-.000001 and high<=.000001:continue
		# Sweep only the opening side of the hinge. The inner side is already
		# covered by the two rigid volumes, and receives no crossing roof flap.
		for k in range(poly.size()):
			var a:Dictionary=poly[k];var b:Dictionary=poly[(k+1)%poly.size()]
			if absf(at(a,plan))>.00001 or absf(at(b,plan))>.00001:continue
			var across:=Vector2(-float(plan.axis.y),float(plan.axis.x))*signf(float(plan.angle))
			var da:float=(Vector2(a.p.x,a.p.z)-Vector2(plan.pivot)).dot(across);var db:float=(Vector2(b.p.x,b.p.z)-Vector2(plan.pivot)).dot(across)
			if maxf(da,db)<=.000001:continue
			if da<0.:a=Cut.interpolate(a,b,da/(da-db))
			elif db<0.:b=Cut.interpolate(a,b,da/(da-db))
			var aa:=vertex(a,plan,true);var bb:=vertex(b,plan,true)
			var normal:Vector3=(a.n+b.n+aa.n+bb.n).normalized()
			for bridge:Array in [[a,b,bb],[a,bb,aa]]:
				if (Vector3(bridge[1].p)-Vector3(bridge[0].p)).cross(Vector3(bridge[2].p)-Vector3(bridge[0].p)).length_squared()<.0000000001:continue
				var face:Array=[]
				for v:Dictionary in bridge:var copy:=v.duplicate(false);copy.n=normal;face.append(copy)
				if (Vector3(face[1].p)-Vector3(face[0].p)).cross(Vector3(face[2].p)-Vector3(face[0].p)).dot(normal)>0.:face.reverse()
				output.append(face)
	return output
static func build(source:Mesh,transform:Transform3D,plan:Dictionary,owner_wing:bool,roof_surfaces:PackedInt32Array=PackedInt32Array())->ArrayMesh:
	var result:=ArrayMesh.new();var inverse:=transform.affine_inverse();var normal_basis:=transform.basis.inverse().transposed()
	for surface in range(source.get_surface_count()):
		var arrays:=source.surface_get_arrays(surface);var positions:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];var normals:PackedVector3Array=arrays[Mesh.ARRAY_NORMAL]
		var uvs:PackedVector2Array=arrays[Mesh.ARRAY_TEX_UV] if arrays[Mesh.ARRAY_TEX_UV]!=null else PackedVector2Array();var colors:PackedColorArray=arrays[Mesh.ARRAY_COLOR] if arrays[Mesh.ARRAY_COLOR]!=null else PackedColorArray()
		var indices:PackedInt32Array=arrays[Mesh.ARRAY_INDEX] if arrays[Mesh.ARRAY_INDEX]!=null else PackedInt32Array()
		var gradients:Array=RoofUV.field(arrays,transform) if surface in roof_surfaces else []
		var tool:=SurfaceTool.new();tool.begin(Mesh.PRIMITIVE_TRIANGLES)
		for i in range(0,indices.size() if not indices.is_empty() else positions.size(),3):
			var tri:Array=[]
			for k in range(3):
				var index:int=indices[i+k] if not indices.is_empty() else i+k
				var vertex:={"p":transform*positions[index],"n":normal_basis*normals[index],"uv":uvs[index] if not uvs.is_empty() else Vector2.ZERO,"color":colors[index] if not colors.is_empty() else Color.WHITE}
				if not gradients.is_empty():vertex.roof_u=gradients[index][0];vertex.roof_v=gradients[index][1]
				tri.append(vertex)
			for piece:Array in triangles(tri,plan,owner_wing):
				for v:Dictionary in piece:
					tool.set_normal((transform.basis.transposed()*Vector3(v.n)).normalized());tool.set_uv(v.uv)
					if not colors.is_empty():tool.set_color(v.color)
					tool.add_vertex(inverse*Vector3(v.p))
		tool.index();tool.commit(result);result.surface_set_material(result.get_surface_count()-1,source.surface_get_material(surface))
	return result
static func faces(source:PackedVector3Array,transform:Transform3D,plan:Dictionary,owner_wing:bool)->PackedVector3Array:
	var result:=PackedVector3Array();var inverse:=transform.affine_inverse()
	for i in range(0,source.size(),3):
		var tri:Array=[];var normal:=-(source[i+1]-source[i]).cross(source[i+2]-source[i]).normalized()
		for k in range(3):tri.append({"p":transform*source[i+k],"n":transform.basis*normal,"uv":Vector2.ZERO,"color":Color.WHITE})
		for piece:Array in triangles(tri,plan,owner_wing):
			for v:Dictionary in piece:result.append(inverse*Vector3(v.p))
	return result
