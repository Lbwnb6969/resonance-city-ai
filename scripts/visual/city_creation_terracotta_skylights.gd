extends RefCounted
## Small roof lights sit on actual broad, contiguous tiled roof triangles.
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
static func build(r,parent:Node3D,house:Dictionary,palette:Array)->void:
	if house.has("signature") or r.state.house_era(house) not in ["pastoral","renaissance"] or house.get("architecture","")=="rotunda" or house.get("style","")=="round_tower":return
	var top:=-1
	for c:Dictionary in house.cells:
		if c.kind=="room":top=maxi(top,int(c.level))
	var rooms:Array=house.cells.filter(func(c):return c.kind=="room" and int(c.level)==top)
	var seen:Array=[];var count:=0;var roof_faces:Array[Vector3]=[]
	var inverse:=parent.global_transform.affine_inverse()
	for part:MeshInstance3D in parent.find_children("*","MeshInstance3D",true,false):
		if not (str(part.name).begins_with("GreekContinuousTileRoof") or str(part.name).begins_with("AncientLowTileRoof") or str(part.name)=="JoinedRoofSurface"):continue
		var transform:=inverse*part.global_transform
		for v:Vector3 in part.mesh.get_faces():roof_faces.append(transform*v)
	if roof_faces.is_empty():return
	for start:Dictionary in rooms:
		if str(start.id) in seen:continue
		var group:Array=[start];seen.append(str(start.id));var cursor:=0
		while cursor<group.size():
			var current:Dictionary=group[cursor];cursor+=1
			for c:Dictionary in rooms:
				if str(c.id) not in seen and absi(int(c.x)-int(current.x))+absi(int(c.z)-int(current.z))==1:seen.append(str(c.id));group.append(c)
		if group.size()<2:continue
		var cell:Dictionary=group[-1];var at:=Vector2(house.origin[0]+cell.x*1.8-.16,house.origin[1]+cell.z*1.8+.26)
		var low:=INF;var high:=-INF;var valid:=true
		for corner:Vector2 in [Vector2(-.25,-.25),Vector2(.25,-.25),Vector2(-.25,.25),Vector2(.25,.25)]:
			var y:=surface_height(roof_faces,at+corner)
			if not is_finite(y):valid=false;break
			low=minf(low,y);high=maxf(high,y)
		if not valid:continue
		_light(r,parent,house,cell,palette,at,low,high);count+=1
		if count>=2:break
	parent.set_meta("terracotta_skylights",count)
static func surface_height(faces:Array[Vector3],at:Vector2)->float:
	var height:=-INF
	for i in range(0,faces.size(),3):
		var a:Vector3=faces[i];var b:Vector3=faces[i+1];var c:Vector3=faces[i+2]
		var n:Vector3=(b-a).cross(c-a)
		if absf(n.y)<.000001:continue
		if Geometry2D.is_point_in_polygon(at,PackedVector2Array([Vector2(a.x,a.z),Vector2(b.x,b.z),Vector2(c.x,c.z)])):height=maxf(height,a.y-(n.x*(at.x-a.x)+n.z*(at.y-a.z))/n.y)
	return height
static func _light(r,parent:Node3D,house:Dictionary,cell:Dictionary,palette:Array,at:Vector2,low:float,high:float)->void:
	var node:=Node3D.new();node.name="TerracottaRoofLight";parent.add_child(node);node.position=Vector3(at.x,low+.012,at.y)
	var cream:Material=Wall.source(palette[0].lerp(Color("e7d9bd"),.3),null,"component",Wall.Kind.STONE)
	var tile:Material=Wall.source(palette[1],null,"component",Wall.Kind.TERRACOTTA)
	var eave:=high-low+.29;var ridge:=eave+.14
	for x:float in [-.23,.23]:r._box(node,Vector3(.055,eave,.48),Vector3(x,eave*.5,0),cream)
	r._box(node,Vector3(.48,eave,.055),Vector3(0,eave*.5,-.23),cream)
	var glass:Material=r._material(Color("536f73"));glass.roughness=.30
	r._box(node,Vector3(.38,.23,.025),Vector3(0,eave-.13,.245),glass).name="SkylightPane"
	for x:float in [-.20,0.,.20]:r._box(node,Vector3(.022,.25,.04),Vector3(x,eave-.13,.27),cream)
	r._box(node,Vector3(.46,.045,.10),Vector3(0,eave-.26,.265),cream)
	var faces:Array[Vector3]=[Vector3(-.30,eave,-.29),Vector3(-.30,eave,.31),Vector3(0,ridge,.31),Vector3(-.30,eave,-.29),Vector3(0,ridge,.31),Vector3(0,ridge,-.29),Vector3(0,ridge,-.29),Vector3(0,ridge,.31),Vector3(.30,eave,.31),Vector3(0,ridge,-.29),Vector3(.30,eave,.31),Vector3(.30,eave,-.29)]
	var roof:MeshInstance3D=r._triangles(node,faces,palette[1]);roof.material_override=tile;roof.name="SkylightTerracottaPitch"
	var cap:MeshInstance3D=r._cylinder(node,.032,.032,.65,Vector3(0,ridge+.01,.01),tile,8);cap.rotation.x=PI*.5
	var body:=StaticBody3D.new();node.add_child(body);body.set_meta("house_id",house.id);body.set_meta("cell_id",cell.id);body.set_meta("cell",cell)
	for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
		var shape:=ConcavePolygonShape3D.new();shape.backface_collision=true;shape.set_faces(mesh.mesh.get_faces())
		var collider:=CollisionShape3D.new();collider.shape=shape;collider.transform=node.global_transform.affine_inverse()*mesh.global_transform;body.add_child(collider)
	node.set_meta("actual_roof_height",Vector2(low,high))
