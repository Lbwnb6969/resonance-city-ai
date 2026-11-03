extends RefCounted
## Fill the actual dry paving footprint down into the published terrain.
## Original paving vertices retain round caps, junction cuts and slopes.
## Terrain cells establish dry contact and a conservatively buried bottom.
const Walls=preload("res://scripts/visual/city_creation_wall_material.gd")
const BURIAL:=.08
const REACH:=1.1
static func empty()->Dictionary:return {"faces":[],"pieces":[],"triangles":0}
static func prepare(renderer,road:Dictionary,arrays:Array)->Dictionary:
	var result:=empty()
	if arrays.is_empty():return result
	var city:RefCounted=renderer.state;var near:=false
	for i in range(1,road.points.size()):
		var a:=Vector2(road.points[i-1][0],road.points[i-1][1]);var b:=Vector2(road.points[i][0],road.points[i][1]);var count:=maxi(1,ceili(a.distance_to(b)/.35))
		for j in range(count+1):
			if city.water_clearance(a.lerp(b,float(j)/count))<float(road.width)*.5+REACH:near=true;break
		if near:break
	if not near:return result
	var vertices:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];var indices:PackedInt32Array=arrays[Mesh.ARRAY_INDEX]
	if indices.is_empty():
		for i in range(vertices.size()):indices.append(i)
	var terrain=renderer.Terrain
	for i in range(0,indices.size(),3):
		var source:Array[Vector3]=[vertices[indices[i]],vertices[indices[i+1]],vertices[indices[i+2]]]
		var polygon:=PackedVector2Array()
		for p:Vector3 in source:
			polygon.append(Vector2(p.x,p.z))
		var bounds:=Rect2(polygon[0],Vector2.ZERO).expand(polygon[1]).expand(polygon[2])
		var lo:=Vector2i(((bounds.position-terrain.LAND_RECT.position)/terrain.STEP).floor()).max(Vector2i.ZERO)
		var hi:=Vector2i(((bounds.end-terrain.LAND_RECT.position)/terrain.STEP).floor()).min(Vector2i(terrain.COLUMNS-2,terrain.ROWS-2))
		var bottom:=INF;var supported:=false;var dry:=true
		for at:Vector2 in polygon:
			bottom=minf(bottom,city.ground_height(at)-BURIAL);dry=dry and city.water_clearance(at)>=.02
			supported=supported or city.water_clearance(at)<float(road.width)+REACH
		for x in range(lo.x,hi.x+1):
			for z in range(lo.y,hi.y+1):
				var at:Vector2=terrain.LAND_RECT.position+Vector2(x,z)*terrain.STEP
				var corners:=PackedVector2Array([at,at+Vector2(terrain.STEP,0),at+Vector2.ONE*terrain.STEP,at+Vector2(0,terrain.STEP)])
				for p:Vector2 in corners:bottom=minf(bottom,city.ground_height(p)-BURIAL)
				for part:PackedVector2Array in Geometry2D.intersect_polygons(polygon,corners):
					supported=supported or city.water_clearance(at+Vector2.ONE*terrain.STEP*.5)<float(road.width)+REACH
					for j in range(part.size()):
						for p:Vector2 in [part[j],part[j].lerp(part[(j+1)%part.size()],.5)]:dry=dry and city.water_clearance(p)>=.02
		# Retain original paving vertices exactly: integer polygon clipping can
		# otherwise shrink a curved rim or leave a hairline under its edge.
		if supported and dry:_piece(result,polygon,source,bottom)
	result.triangles=result.faces.size()/3
	return result
static func height(source:Array[Vector3],at:Vector2)->float:
	var a:=Vector2(source[0].x,source[0].z);var b:=Vector2(source[1].x,source[1].z);var c:=Vector2(source[2].x,source[2].z)
	var denominator:float=(b-a).cross(c-a)
	var u:float=(at-a).cross(c-a)/denominator;var v:float=(b-a).cross(at-a)/denominator
	return source[0].y+(source[1].y-source[0].y)*u+(source[2].y-source[0].y)*v
static func _piece(data:Dictionary,polygon:PackedVector2Array,source:Array[Vector3],bottom:float)->void:
	var indices:=PackedInt32Array([0,1,2]) if polygon.size()==3 else Geometry2D.triangulate_polygon(polygon)
	if indices.is_empty():return
	var top:Array[Vector3]=[]
	for at:Vector2 in polygon:top.append(Vector3(at.x,height(source,at)-.008,at.y))
	for i in range(0,indices.size(),3):
		var a:Vector3=top[indices[i]];var b:Vector3=top[indices[i+1]];var c:Vector3=top[indices[i+2]]
		if (b-a).cross(c-a).y<0.:data.faces.append_array([a,c,b])
		else:data.faces.append_array([a,b,c])
	var clockwise:=Geometry2D.is_polygon_clockwise(polygon)
	for i in range(top.size()):
		var a:=top[i];var b:=top[(i+1)%top.size()];var c:=Vector3(b.x,bottom,b.z);var d:=Vector3(a.x,bottom,a.z)
		data.faces.append_array([a,d,c,a,c,b] if clockwise else [a,b,c,a,c,d])
	data.pieces.append({"polygon":polygon,"top":top,"bottom":bottom})
static func install(renderer,parent:Node3D,data:Dictionary,road:Dictionary,preview:bool=false)->void:
	if data.faces.is_empty():return
	var mesh:MeshInstance3D=renderer._triangles(parent,data.faces,Color("b9b49b"));mesh.name="ShoreRoadBed"
	var bounds:=mesh.mesh.get_aabb();var material:=Walls.source(Color("b9b49b"),null,"component",Walls.Kind.STONE)
	mesh.material_override=Walls.merged(material,bounds.position.y,bounds.size.y,Walls.WallShader,Vector2(bounds.position.y,bounds.end.y))
	mesh.material_override.set_shader_parameter("albedo_color",Color("b9b49b"))
	mesh.set_meta("bed_signature",hash(data));mesh.set_meta("road_id",road.id)
	if preview:return
	var body:=StaticBody3D.new();body.name="ShoreRoadBedGroundPick";body.collision_layer=2;body.set_meta("ground",true);body.set_meta("road_id",road.id)
	var shape:=CollisionShape3D.new();shape.shape=mesh.mesh.create_trimesh_shape();body.add_child(shape);parent.add_child(body)
