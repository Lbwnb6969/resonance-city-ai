extends RefCounted
## Piecewise affine corner cutting: split the ORIGINAL triangles on each
## parameter seam before moving vertices. Shared edges stay closed, including
## windows, foundations and eaves; no overlaid cylinder or CSG operation.
const Form=preload("res://scripts/world/city_creation_organic_form.gd")
static func distance(at:Vector3,plane:Vector3)->float:return at.x*plane.x+at.z*plane.y-plane.z
static func interpolate(a:Dictionary,b:Dictionary,t:float)->Dictionary:
	var result:={"p":a.p.lerp(b.p,t),"n":a.n.lerp(b.n,t),"uv":a.uv.lerp(b.uv,t),"color":a.color.lerp(b.color,t)}
	if a.has("roof_u"):result.roof_u=a.roof_u.lerp(b.roof_u,t);result.roof_v=a.roof_v.lerp(b.roof_v,t)
	return result
static func half(poly:Array,plane:Vector3,sign_value:float)->Array:
	var result:Array=[]
	for i in range(poly.size()):
		var a:Dictionary=poly[i];var b:Dictionary=poly[(i+1)%poly.size()]
		var da:=distance(a.p,plane)*sign_value;var db:=distance(b.p,plane)*sign_value
		if da>=-.000001:result.append(a)
		if da*db<-.0000000001:result.append(interpolate(a,b,da/(da-db)))
	return result
static func split(triangle:Array,sides:Array,value:int)->Array:
	var polys:Array=[triangle]
	for side:Vector2 in sides:
		for plane:Vector3 in Form.planes(side,value):
			var next:Array=[]
			for poly:Array in polys:
				var low:=INF;var high:=-INF
				for vertex:Dictionary in poly:var d:=distance(vertex.p,plane);low=minf(low,d);high=maxf(high,d)
				if low<-.000001 and high>.000001:
					next.append(half(poly,plane,1.));next.append(half(poly,plane,-1.))
				else:next.append(poly)
			polys=next
	return polys
static func normal_at(at:Vector3,normal:Vector3,sides:Array,value:int)->Vector3:
	var h:=.0001;var p:=Form.point(at,sides,value)
	var dx:=(Form.point(at+Vector3.RIGHT*h,sides,value)-Form.point(at-Vector3.RIGHT*h,sides,value))/(h*2.)
	var dz:=(Form.point(at+Vector3.BACK*h,sides,value)-Form.point(at-Vector3.BACK*h,sides,value))/(h*2.)
	var n:Vector3=Basis(dx,Vector3.UP,dz).inverse().transposed()*normal
	if value==2 and absf(normal.y)<.01:
		for side:Vector2 in sides:
			var u:=at.x*side.x-(Form.HALF-Form.RADIUS);var v:=at.z*side.y-(Form.HALF-Form.RADIUS)
			if u<-.0001 or v<-.0001:continue
			if absf(at.x*side.x-Form.HALF)<.001 and normal.x*side.x>.99 or absf(at.z*side.y-Form.HALF)<.001 and normal.z*side.y>.99:
				n=Vector3(p.x-side.x*(Form.HALF-Form.RADIUS),0,p.z-side.y*(Form.HALF-Form.RADIUS));break
	return n.normalized()
static func build(source:Mesh,transform:Transform3D,sides:Array,value:int)->Mesh:
	var bounds:AABB=transform*source.get_aabb();var active:Array=[]
	for side:Vector2 in sides:
		var x:=bounds.end.x if side.x>0 else -bounds.position.x;var z:=bounds.end.z if side.y>0 else -bounds.position.z
		if minf(x,z)>Form.HALF-Form.RADIUS+.000001:active.append(side)
	if active.is_empty():return source
	sides=active
	var result:=ArrayMesh.new();var inverse:=transform.affine_inverse();var normal_transform:=transform.basis.inverse().transposed()
	for surface in range(source.get_surface_count()):
		var arrays:=source.surface_get_arrays(surface);var positions:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX]
		var normals:PackedVector3Array=arrays[Mesh.ARRAY_NORMAL] if arrays[Mesh.ARRAY_NORMAL]!=null else PackedVector3Array()
		var uvs:PackedVector2Array=arrays[Mesh.ARRAY_TEX_UV] if arrays[Mesh.ARRAY_TEX_UV]!=null else PackedVector2Array()
		var colors:PackedColorArray=arrays[Mesh.ARRAY_COLOR] if arrays[Mesh.ARRAY_COLOR]!=null else PackedColorArray()
		var indices:PackedInt32Array=arrays[Mesh.ARRAY_INDEX] if arrays[Mesh.ARRAY_INDEX]!=null else PackedInt32Array()
		var tool:=SurfaceTool.new();tool.begin(Mesh.PRIMITIVE_TRIANGLES);var emitted:=0
		for i in range(0,indices.size() if not indices.is_empty() else positions.size(),3):
			var tri:Array=[]
			for k in range(3):
				var index:=indices[i+k] if not indices.is_empty() else i+k
				tri.append({"p":transform*positions[index],"n":normal_transform*normals[index] if normals.size()>index else Vector3.UP,"uv":uvs[index] if uvs.size()>index else Vector2.ZERO,"color":colors[index] if colors.size()>index else Color.WHITE})
			for poly:Array in split(tri,sides,value):
				for k in range(1,poly.size()-1):
					var a:Vector3=Form.point(poly[0].p,sides,value);var b:Vector3=Form.point(poly[k].p,sides,value);var c:Vector3=Form.point(poly[k+1].p,sides,value)
					if (b-a).cross(c-a).length_squared()<.00000000001:continue
					for vertex:Dictionary in [poly[0],poly[k],poly[k+1]]:
						tool.set_normal((transform.basis.transposed()*normal_at(vertex.p,vertex.n,sides,value)).normalized());tool.set_uv(vertex.uv)
						if not colors.is_empty():tool.set_color(vertex.color)
						tool.add_vertex(inverse*Form.point(vertex.p,sides,value));emitted+=1
		if emitted>0:tool.index();tool.commit(result);result.surface_set_material(result.get_surface_count()-1,source.surface_get_material(surface))
	return result
static func vertices(points:Array,sides:Array,value:int)->Array[Vector3]:
	var result:Array[Vector3]=[]
	for i in range(0,points.size(),3):
		var tri:Array=[]
		for k in range(3):tri.append({"p":points[i+k],"n":Vector3.UP,"uv":Vector2.ZERO,"color":Color.WHITE})
		for poly:Array in split(tri,sides,value):
			for k in range(1,poly.size()-1):
				for vertex:Dictionary in [poly[0],poly[k],poly[k+1]]:result.append(Form.point(vertex.p,sides,value))
	return result
static func surface(points:Array,coordinates:PackedVector2Array,sides:Array,value:int)->Dictionary:
	var result:Array[Vector3]=[];var uv:=PackedVector2Array()
	for i in range(0,points.size(),3):
		var tri:Array=[]
		for k in range(3):tri.append({"p":points[i+k],"n":Vector3.UP,"uv":coordinates[i+k],"color":Color.WHITE})
		for poly:Array in split(tri,sides,value):
			for k in range(1,poly.size()-1):
				for vertex:Dictionary in [poly[0],poly[k],poly[k+1]]:result.append(Form.point(vertex.p,sides,value));uv.append(vertex.uv)
	return {"vertices":result,"coordinates":uv}
