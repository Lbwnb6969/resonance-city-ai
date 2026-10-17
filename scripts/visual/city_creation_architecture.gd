extends RefCounted
## Derived wall cutouts. The same extruded triangles render and pick the arch;
## no dark decal or invisible full-cell picking box closes the passage.
const HALF := 0.9
const HEIGHT := 1.7
const SPRING := 0.76
const RISE := 0.55
const SEGMENTS := 14

static func wall_opening(passages: Array, side: Vector2i) -> Dictionary:
	for passage: Dictionary in passages:
		var axis: Vector2i = passage.axis
		if side != axis and side != -axis: continue
		return {"offset":float(passage.offset)*float(side.y-side.x),"half_width":float(passage.half_width)}
	return {}

static func build_wall(renderer: Node3D, wall: Node3D, body: StaticBody3D, opening: Dictionary, color: Color, trim: Color) -> void:
	var offset := float(opening.offset)
	var radius := float(opening.half_width)
	var polygons: Array[PackedVector2Array] = []
	polygons.append(PackedVector2Array([Vector2(-HALF,0),Vector2(offset-radius,0),Vector2(offset-radius,HEIGHT),Vector2(-HALF,HEIGHT)]))
	polygons.append(PackedVector2Array([Vector2(offset+radius,0),Vector2(HALF,0),Vector2(HALF,HEIGHT),Vector2(offset+radius,HEIGHT)]))
	for index in range(SEGMENTS):
		var a := _arch(offset,radius,float(index)/SEGMENTS)
		var b := _arch(offset,radius,float(index+1)/SEGMENTS)
		polygons.append(PackedVector2Array([a,b,Vector2(b.x,HEIGHT),Vector2(a.x,HEIGHT)]))
	var faces: Array[Vector3] = []
	for polygon: PackedVector2Array in polygons: faces.append_array(_extrude(polygon,0.13))
	var mesh: MeshInstance3D = renderer._triangles(wall,faces,color)
	mesh.name = "ArchWallSurface"
	# Mesh.get_faces returns the final production winding, including soffits.
	var shape := CollisionShape3D.new()
	var concave := ConcavePolygonShape3D.new()
	concave.backface_collision = true
	concave.set_faces(mesh.mesh.get_faces())
	shape.shape = concave
	shape.transform = wall.transform
	body.add_child(shape)
	build_rim(renderer,wall,opening,trim,false)
	wall.set_meta("arch_opening",opening.duplicate(true))
	wall.set_meta("arch_clear_height",SPRING+RISE)

static func build_rim(renderer: Node3D, wall: Node3D, opening: Dictionary, color: Color, preview: bool) -> void:
	var offset := float(opening.offset)
	var radius := float(opening.half_width)
	var thickness := 0.075
	var depth := 0.24 if preview else 0.19
	for sign_value in [-1.0,1.0]:
		var width := minf(thickness,HALF-absf(offset+sign_value*radius))
		if width <= 0.001: continue
		for course in range(4):
			var height := SPRING/4.0-0.012
			renderer._box(wall,Vector3(width,height,depth),Vector3(offset+sign_value*(radius+width*0.5),float(course)*SPRING/4.0+height*0.5,0.028),renderer._material(color.darkened(float(course%2)*0.035)))
	for index in range(SEGMENTS):
		var t0 := (float(index)+0.045)/SEGMENTS
		var t1 := (float(index+1)-0.045)/SEGMENTS
		var a := _arch(offset,radius,t0)
		var b := _arch(offset,radius,t1)
		var c := _arch(offset,radius+thickness,t1,RISE+thickness)
		var d := _arch(offset,radius+thickness,t0,RISE+thickness)
		# Outer voussoirs stay within the room width, leaving the clear hole intact.
		c.x = clampf(c.x,-HALF,HALF)
		d.x = clampf(d.x,-HALF,HALF)
		renderer._triangles(wall,_extrude(PackedVector2Array([a,b,c,d]),depth),color.darkened(float(index%3)*0.025))

static func floor_pieces(passages: Array) -> Array[Rect2]:
	var xs: Array[float] = [-HALF,HALF]
	var zs: Array[float] = [-HALF,HALF]
	for passage: Dictionary in passages:
		var edges := xs if passage.axis == Vector2i(0,1) else zs
		edges.append(clampf(float(passage.offset)-float(passage.half_width),-HALF,HALF))
		edges.append(clampf(float(passage.offset)+float(passage.half_width),-HALF,HALF))
	xs.sort()
	zs.sort()
	var result: Array[Rect2] = []
	for x in range(xs.size()-1):
		for z in range(zs.size()-1):
			var rectangle := Rect2(Vector2(xs[x],zs[z]),Vector2(xs[x+1]-xs[x],zs[z+1]-zs[z]))
			if rectangle.size.x < 0.001 or rectangle.size.y < 0.001: continue
			var blocked := false
			for passage: Dictionary in passages:
				var lateral := rectangle.get_center().x if passage.axis == Vector2i(0,1) else rectangle.get_center().y
				if absf(lateral-float(passage.offset)) < float(passage.half_width)-0.0001:
					blocked = true
					break
			if not blocked: result.append(rectangle)
	return result

static func _arch(offset: float, radius: float, t: float, rise: float = RISE) -> Vector2:
	var angle := PI*(1.0-t)
	return Vector2(offset+cos(angle)*radius,SPRING+sin(angle)*rise)

static func _extrude(polygon: PackedVector2Array, depth: float) -> Array[Vector3]:
	var result: Array[Vector3] = []
	var indices := Geometry2D.triangulate_polygon(polygon)
	if indices.is_empty(): return result
	for index in range(0,indices.size(),3):
		var a := polygon[indices[index]]
		var b := polygon[indices[index+1]]
		var c := polygon[indices[index+2]]
		result.append_array([Vector3(a.x,a.y,depth*0.5),Vector3(b.x,b.y,depth*0.5),Vector3(c.x,c.y,depth*0.5),Vector3(c.x,c.y,-depth*0.5),Vector3(b.x,b.y,-depth*0.5),Vector3(a.x,a.y,-depth*0.5)])
	for index in range(polygon.size()):
		var a := polygon[index]
		var b := polygon[(index+1)%polygon.size()]
		result.append_array([Vector3(a.x,a.y,-depth*0.5),Vector3(b.x,b.y,-depth*0.5),Vector3(b.x,b.y,depth*0.5),Vector3(a.x,a.y,-depth*0.5),Vector3(b.x,b.y,depth*0.5),Vector3(a.x,a.y,depth*0.5)])
	return result
