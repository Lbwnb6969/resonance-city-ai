extends RefCounted
const Form=preload("res://scripts/world/city_creation_organic_form.gd")
const Cut=preload("res://scripts/visual/city_creation_corner_mesh.gd")
## The existing hidden assembly yields between individual meshes/colliders.
## Published geometry and picking are replaced together after all work completes.
static func step(renderer,job,frame)->bool:
	if frame.organic.is_empty():
		var value:=Form.mode(renderer.state,job.house)
		if value==0:return true
		var sides:=Form.exposed(renderer.state,job.house,frame.cell)
		if sides.is_empty():return true
		frame.organic={"mode":value,"sides":sides,"index":0,"meshes":frame.node.find_children("*","MeshInstance3D",true,false),"shapes":frame.node.find_children("*","CollisionShape3D",true,false),"roof":PackedVector3Array()}
		var stats:Dictionary=job.root.get_meta("organic_corners",{"mode":value,"corners":0,"meshes":0,"triangles":0,"collision_shapes":0,"cpu_ms":0.,"unit_peak_ms":0.})
		stats.corners+=sides.size();job.root.set_meta("organic_corners",stats)
	var data:Dictionary=frame.organic;var stats:Dictionary=job.root.get_meta("organic_corners")
	var began:=Time.get_ticks_usec();var count:int=data.meshes.size()+data.shapes.size()
	if int(data.index)<count:
		var index:=int(data.index)
		if index<data.meshes.size():mesh_unit(frame,data,data.meshes[index],stats)
		else:shape_unit(frame,data,data.shapes[index-data.meshes.size()],stats)
		data.index+=1
		var ms:=float(Time.get_ticks_usec()-began)/1000.;stats.cpu_ms+=ms;stats.unit_peak_ms=maxf(float(stats.unit_peak_ms),ms)
		return false
	if not data.roof.is_empty():
		var collision:=CollisionShape3D.new();collision.name="OrganicRoofSurfacePick"
		var shape:=ConcavePolygonShape3D.new();shape.set_faces(data.roof);shape.backface_collision=true;collision.shape=shape;frame.body.add_child(collision)
	return true
static func mesh_unit(frame,data:Dictionary,mesh:MeshInstance3D,stats:Dictionary)->void:
	var transform:Transform3D=frame.node.global_transform.affine_inverse()*mesh.global_transform
	var source:Mesh=mesh.mesh;mesh.mesh=Cut.build(source,transform,data.sides,int(data.mode))
	if mesh.mesh!=source:stats.meshes+=1
	for surface in range(mesh.mesh.get_surface_count()):
		var arrays:=mesh.mesh.surface_get_arrays(surface);var vertices:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];var indices:PackedInt32Array=arrays[Mesh.ARRAY_INDEX]
		stats.triangles+=indices.size()/3
		if (transform*mesh.get_aabb()).position.y>=float(frame.cell.level)*1.7+1.68:
			for index:int in indices:data.roof.append(transform*vertices[index])
static func shape_unit(frame,data:Dictionary,collision:CollisionShape3D,stats:Dictionary)->void:
	var transform:Transform3D=frame.node.global_transform.affine_inverse()*collision.global_transform
	if collision.shape is ConcavePolygonShape3D:
		var points:Array=[]
		for p:Vector3 in collision.shape.get_faces():points.append(transform*p)
		var faces:=PackedVector3Array();var inverse:=transform.affine_inverse()
		for p:Vector3 in Cut.vertices(points,data.sides,int(data.mode)):faces.append(inverse*p)
		var shape:=ConcavePolygonShape3D.new();shape.set_faces(faces);shape.backface_collision=collision.shape.backface_collision;collision.shape=shape;stats.collision_shapes+=1;return
	if not collision.shape is BoxShape3D:return
	var box:=BoxMesh.new();box.size=collision.shape.size
	# Full room bodies reach the visible outer plaster. Decorative boxes keep
	# their own dimensions and receive the same local corner map as their mesh.
	if is_equal_approx(box.size.x,1.8) and is_equal_approx(box.size.z,1.8) and box.size.y>1.:box.size.x=Form.HALF*2.;box.size.z=Form.HALF*2.
	var mesh:=Cut.build(box,transform,data.sides,int(data.mode));var shape:=ConvexPolygonShape3D.new()
	shape.points=mesh.get_faces();collision.set_meta("organic_source_faces",shape.points);collision.shape=shape;stats.collision_shapes+=1
static func patch(renderer,house:Dictionary,source:Dictionary,parent:Node3D)->Dictionary:
	var value:=Form.mode(renderer.state,house)
	if value==0:return source
	var cell:Dictionary={}
	for candidate:Dictionary in house.cells:
		if str(candidate.id)==str(source.cell_id):cell=candidate;break
	if cell.is_empty():return source
	var sides:=Form.exposed(renderer.state,house,cell)
	if sides.is_empty():return source
	var offset:Vector3=renderer._cell_position(house,cell);offset.y=0.
	var local:Array=[]
	for p:Vector3 in source.vertices:local.append(p-offset)
	var result:=source.duplicate(false);var points:Array
	if source.has("coordinates"):
		var cut:=Cut.surface(local,source.coordinates,sides,value);points=cut.vertices;result.coordinates=cut.coordinates
	else:points=Cut.vertices(local,sides,value)
	for i in range(points.size()):points[i]+=offset
	result.vertices=points
	if parent!=null and source.surface=="roof":
		var name:="OrganicRoofPick_"+str(cell.id);var body:=parent.get_node_or_null(name) as StaticBody3D
		if body==null:
			body=StaticBody3D.new();body.name=name;body.set_meta("house_id",str(house.id));body.set_meta("cell_id",str(cell.id));body.set_meta("cell",cell.duplicate(true));parent.add_child(body)
		var collision:=CollisionShape3D.new();var shape:=ConcavePolygonShape3D.new();shape.set_faces(PackedVector3Array(points));shape.backface_collision=true;collision.shape=shape;body.add_child(collision)
	return result
static func mass_roof(renderer,node:Node3D,house:Dictionary)->void:
	var value:=Form.mode(renderer.state,house)
	if value==0:return
	for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
		# Classical columns keep their order and rigid shafts. Only the roof,
		# raking cornices and entablature follow the wall's exposed corners.
		var design:Transform3D=node.global_transform.affine_inverse()*mesh.global_transform
		if (design*mesh.get_aabb()).end.y<1.72:continue
		for cell:Dictionary in house.cells:
			var sides:=Form.exposed(renderer.state,house,cell)
			if sides.is_empty():continue
			var transform:=mesh.global_transform;transform.origin-=renderer._cell_position(house,cell)
			mesh.mesh=Cut.build(mesh.mesh,transform,sides,value)
