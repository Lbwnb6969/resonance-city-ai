extends RefCounted
## This game's .12m treads/.22 grade follow Phase 2 design, not recovered TG
## constants. TG's sampled support/tangent approach informs the layout only.

static func prepare(renderer,road: Dictionary,profile: Dictionary,other_cuts: Array) -> Dictionary:
	var cuts: Array = []
	var faces: Array[Vector3] = []
	var rails: Array = []
	var width := float(road.width)
	var count := 0
	for tread: Dictionary in profile.treads:
		var a: Vector2 = tread.a
		var b: Vector2 = tread.b
		var tangent := (b-a).normalized()
		var normal := Vector2(-tangent.y,tangent.x)
		# Neighbouring curved sections meet at shared mitered boundaries.
		var n0: Vector2 = tread.get("offset_a",normal*width*0.5)
		var n1: Vector2 = tread.get("offset_b",normal*width*0.5)
		var polygon := PackedVector2Array([a+n0,b+n1,b-n1,a-n0])
		if Geometry2D.is_polygon_clockwise(polygon): polygon.reverse()
		cuts.append([polygon])
		var pieces: Array = []
		for outline: PackedVector2Array in renderer.road_outlines[road.id]:
			pieces.append_array(Geometry2D.intersect_polygons(polygon,outline))
		for group: Array in other_cuts:
			for cut: PackedVector2Array in group:
				var remaining: Array = []
				for piece: PackedVector2Array in pieces: remaining.append_array(Geometry2D.clip_polygons(piece,cut))
				pieces=remaining
		var y := float(tread.y)
		var bottom := minf(float(tread.bottom),y-0.10)
		for piece: PackedVector2Array in pieces:
			var indices := Geometry2D.triangulate_polygon(piece)
			for index in range(0,indices.size(),3):
				renderer._append_water_triangle(faces,piece[indices[index]],piece[indices[index+1]],piece[indices[index+2]],y)
			for index in range(piece.size()):
				var p: Vector2 = piece[index]
				var q: Vector2 = piece[(index+1)%piece.size()]
				faces.append_array([Vector3(p.x,y,p.y),Vector3(q.x,bottom,q.y),Vector3(p.x,bottom,p.y),Vector3(p.x,y,p.y),Vector3(q.x,y,q.y),Vector3(q.x,bottom,q.y)])
			count+=1
		for side: int in [-1,1]:
			var p := a+n0*float(side)
			var q := b+n1*float(side)
			if renderer._inside_other_road((p+q)*0.5,str(road.id)): continue
			# Cap and body are a low continuous stone parapet, not picket posts.
			var center := Vector3((p.x+q.x)*0.5,y+0.16,(p.y+q.y)*0.5)
			var yaw := atan2(q.x-p.x,q.y-p.y)
			rails.append([Vector3(0.12,0.32,p.distance_to(q)+0.012),center,Color("b6b199"),Vector3(0,yaw,0)])
			rails.append([Vector3(0.16,0.055,p.distance_to(q)+0.012),center+Vector3.UP*0.16,Color("d5cbb1"),Vector3(0,yaw,0)])
	return {"cuts":cuts,"faces":faces,"rails":rails,"count":count}

static func install(renderer,parent: Node3D,data: Dictionary,road: Dictionary) -> void:
	if data.faces.is_empty(): return
	var root := Node3D.new()
	root.name="RoadStairs"
	parent.add_child(root)
	var surface: MeshInstance3D = renderer._triangles(root,data.faces,Color("c4bda5"))
	surface.name="StoneTreads"
	var body := StaticBody3D.new()
	body.name="StairGroundPick"
	body.collision_layer=2
	body.set_meta("ground",true)
	body.set_meta("road_id",str(road.id))
	var collider := CollisionShape3D.new()
	collider.shape=surface.mesh.create_trimesh_shape()
	body.add_child(collider)
	root.add_child(body)
	root.set_meta("treads",data.count)
