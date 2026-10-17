extends RefCounted
## CPU-only cut/fill geometry derived from the same road profile as walkers.
## No State mutation or GPU resources: usable in the budget rebuild worker.
const Highland = preload("res://scripts/visual/city_creation_highland.gd")
const THRESHOLD := 0.35
const THICKNESS := 0.22

static func prepare(renderer, road: Dictionary, profile: Dictionary) -> Dictionary:
	var faces: Array[Vector3] = []
	var sections: Array = []
	var samples: Array = profile.get("samples", [])
	var offsets: Array[Vector2] = []
	var points: Array[Vector2] = []
	for sample: Dictionary in samples: points.append(sample.xz)
	if points.size()<2: return {"faces":faces,"sections":sections}
	offsets=renderer._road_offsets(points,float(road.width))
	var blockers: Array[Rect2]=[]
	var doors: Array=[]
	for house: Dictionary in renderer.state.houses:
		for cell: Dictionary in house.cells:
			if int(cell.level)!=0: continue
			var center := Vector2(house.origin[0],house.origin[1])+Vector2(cell.x,cell.z)*1.8
			blockers.append(Rect2(center-Vector2.ONE*0.9,Vector2.ONE*1.8).grow(0.30))
		for entry: Dictionary in renderer.state.house_entrances(str(house.id)): doors.append([entry.wall_at,entry.at])
	for index in range(points.size()-1):
		if samples[index].bridge or samples[index+1].bridge: continue
		if bool(samples[index].get("stepping",false)) or bool(samples[index+1].get("stepping",false)): continue
		for side: int in [-1,1]:
			var outward0 := offsets[index].normalized()*float(side)
			var outward1 := offsets[index+1].normalized()*float(side)
			var edge0 := points[index]+offsets[index]*float(side)
			var edge1 := points[index+1]+offsets[index+1]*float(side)
			var terrain0: float=renderer.state.raw_terrain_height(edge0+outward0*1.15)
			var terrain1: float=renderer.state.raw_terrain_height(edge1+outward1*1.15)
			var y0: float=renderer.state.street_height(points[index])
			var y1: float=renderer.state.street_height(points[index+1])
			var delta := (terrain0+terrain1-y0-y1)*0.5
			if absf(delta)<=THRESHOLD: continue
			var cut := delta>0.0
			# Cut walls stand at the far edge of the excavated shoulder. Fill
			# walls carry the deck itself and descend into the natural slope.
			var a := edge0+outward0*(0.72 if cut else 0.10)
			var b := edge1+outward1*(0.72 if cut else 0.10)
			if not _clear(renderer,a,b,str(road.id),blockers,doors): continue
			var low0: float=minf(renderer.state.ground_height(a),renderer.state.raw_terrain_height(a))-0.12
			var low1: float=minf(renderer.state.ground_height(b),renderer.state.raw_terrain_height(b))-0.12
			var top0 := maxf(y0+0.10,terrain0+0.08) if cut else y0+0.04
			var top1 := maxf(y1+0.10,terrain1+0.08) if cut else y1+0.04
			low0=minf(low0,y0-0.12);low1=minf(low1,y1-0.12)
			var outer0 := a+outward0*THICKNESS
			var outer1 := b+outward1*THICKNESS
			var v := [Vector3(a.x,low0,a.y),Vector3(b.x,low1,b.y),Vector3(b.x,top1,b.y),Vector3(a.x,top0,a.y),
				Vector3(outer0.x,low0,outer0.y),Vector3(outer1.x,low1,outer1.y),Vector3(outer1.x,top1,outer1.y),Vector3(outer0.x,top0,outer0.y)]
			var flip := Vector3(b.x-a.x,0,b.y-a.y).cross(Vector3(outward0.x,0,outward0.y)).y<0.0
			for quad: Array in [[0,1,2,3],[5,4,7,6],[3,2,6,7],[4,0,3,7],[1,5,6,2]]:
				if flip: quad.reverse()
				faces.append_array([v[quad[0]],v[quad[1]],v[quad[2]],v[quad[0]],v[quad[2]],v[quad[3]]])
			sections.append({"kind":"cut" if cut else "fill","a":a,"b":b,"top_a":top0,"top_b":top1,"bottom_a":low0,"bottom_b":low1,"road_y_a":y0,"road_y_b":y1})
	return {"faces":faces,"sections":sections}

static func _clear(renderer,a: Vector2,b: Vector2,road_id: String,blockers: Array[Rect2],doors: Array) -> bool:
	for at: Vector2 in [a,(a+b)*0.5,b]:
		if renderer.state.water_clearance(at)<0.15 or renderer._inside_other_road(at,road_id): return false
		for rect: Rect2 in blockers:
			if rect.has_point(at): return false
		for entry: Array in doors:
			if Geometry2D.get_closest_point_to_segment(at,entry[0],entry[1]).distance_to(at)<0.65: return false
	return true

static func install(renderer,parent: Node3D,data: Dictionary,road: Dictionary) -> void:
	if data.faces.is_empty(): return
	var mesh: MeshInstance3D=renderer._triangles(parent,data.faces,Color("b9b49b"))
	mesh.name="RoadCutFillMasonry"
	mesh.material_override=Highland.masonry_material(renderer,Color("b9b49b"))
	mesh.set_meta("sections",data.sections)
	var body := StaticBody3D.new()
	body.name="EarthworksGroundPick"
	body.collision_layer=2
	body.set_meta("ground",true)
	body.set_meta("road_id",str(road.id))
	var shape := CollisionShape3D.new()
	shape.shape=mesh.mesh.create_trimesh_shape()
	body.add_child(shape)
	parent.add_child(body)
