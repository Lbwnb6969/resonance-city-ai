extends RefCounted
## A narrow ring inside the real street footprint. Exact neighbour cuts remove
## internal junction edges; the original single road surface stays authoritative.
const WIDTH := 0.16
const EdgeShader = preload("res://scripts/visual/shaders/creation_road_edge.gdshader")
const ShorePalette = preload("res://scripts/visual/city_creation_shore_palette.gd")
var material: ShaderMaterial

func prepare(renderer: Node3D, road: Dictionary, extra_cuts: Array = []) -> Dictionary:
	var outlines: Array = renderer.road_outlines[road.id]
	var cuts: Array = []
	for contours: Array in extra_cuts:
		var bounds:=Rect2(contours[0][0],Vector2.ZERO)
		for polygon: PackedVector2Array in contours:
			for point: Vector2 in polygon: bounds=bounds.expand(point)
		cuts.append({"contours":contours,"bounds":bounds})
	for other: Dictionary in renderer.state.roads:
		if other.id != road.id and renderer._roads_touch(road,other):
			var contours: Array = renderer.road_outlines[other.id]
			var bounds := Rect2(contours[0][0],Vector2.ZERO)
			for contour: PackedVector2Array in contours:
				for point: Vector2 in contour: bounds = bounds.expand(point)
			cuts.append({"contours":contours,"bounds":bounds})
	var vertices: Array[Vector3] = []
	for contour: PackedVector2Array in outlines:
		var inner := PackedVector2Array()
		for index in range(contour.size()):
			var incoming := (contour[index]-contour[(index-1+contour.size())%contour.size()]).normalized()
			var outgoing := (contour[(index+1)%contour.size()]-contour[index]).normalized()
			var n0 := Vector2(-incoming.y,incoming.x)
			var n1 := Vector2(-outgoing.y,outgoing.x)
			var miter := (n0+n1).normalized()
			inner.append(contour[index]+miter*minf(WIDTH/maxf(miter.dot(n1),0.1),WIDTH*2.5))
		for index in range(contour.size()):
			var next := (index+1)%contour.size()
			var quad := PackedVector2Array([contour[index],contour[next],inner[next],inner[index]])
			var bounds := Rect2(quad[0],Vector2.ZERO)
			for point: Vector2 in quad: bounds = bounds.expand(point)
			var applicable: Array = []
			var complex_cut := false
			for cut: Dictionary in cuts:
				if not bounds.intersects(cut.bounds,true): continue
				applicable.append(cut.contours)
				complex_cut = complex_cut or cut.contours.size()>1
			if complex_cut:
				# Only the part inside this tiny strip can remove its surface. Clip
				# each even/odd contour against a conservative rectangle first, so
				# loop holes remain holes without scanning a whole road per quad.
				var local_cuts: Array = []
				var box := bounds.grow(0.0001)
				var rectangle := PackedVector2Array([box.position,Vector2(box.end.x,box.position.y),box.end,Vector2(box.position.x,box.end.y)])
				for cut: Array in applicable:
					var local_contours: Array = []
					for polygon: PackedVector2Array in cut:
						local_contours.append_array(Geometry2D.intersect_polygons(polygon,rectangle))
					if not local_contours.is_empty(): local_cuts.append(local_contours)
				vertices.append_array(renderer._water_scanline_union([[quad]],0,local_cuts))
				continue
			var polygons: Array = [quad]
			for cut: Array in applicable:
				var clipped: Array = []
				for polygon: PackedVector2Array in polygons:
					clipped.append_array(Geometry2D.clip_polygons(polygon,cut[0]))
				polygons=clipped
			for polygon: PackedVector2Array in polygons:
				var indices := Geometry2D.triangulate_polygon(polygon)
				for triangle in range(0,indices.size(),3):
					renderer._append_water_triangle(vertices,polygon[indices[triangle]],polygon[indices[triangle+1]],polygon[indices[triangle+2]],0)
	if bool(road.get("bridge",false)): vertices = renderer._subdivide_road(vertices)
	if vertices.is_empty(): return {"arrays":[],"stats":{"triangles":0,"vertices":0}}
	var edge_segments: Array = []
	for contour: PackedVector2Array in outlines:
		for index in range(contour.size()): edge_segments.append([contour[index],contour[(index+1)%contour.size()]])
	var samples: Array[Vector2] = renderer._road_geometry(road).samples
	var center_segments: Array = []
	for index in range(samples.size()-1): center_segments.append([samples[index],samples[index+1]])
	var edge_bins := _bins(edge_segments,WIDTH*2.5+0.001)
	var center_bins := _bins(center_segments,float(road.width)*0.5+WIDTH*2.5+0.01)
	var values := {}
	var surface := SurfaceTool.new()
	surface.begin(Mesh.PRIMITIVE_TRIANGLES)
	for triangle in range(0,vertices.size(),3):
		for offset in [0,2,1]:
			var point: Vector3 = vertices[triangle+offset]
			var at := Vector2(point.x,point.z)
			if not values.has(at):
				var bin := Vector2i(floori(at.x),floori(at.y))
				var distance := INF
				for segment: Array in edge_bins.get(bin,edge_segments):
					distance = minf(distance,at.distance_to(Geometry2D.get_closest_point_to_segment(at,segment[0],segment[1])))
				var nearest := samples[0]
				var near_distance := INF
				for segment: Array in center_bins.get(bin,center_segments):
					var candidate := Geometry2D.get_closest_point_to_segment(at,segment[0],segment[1])
					if at.distance_squared_to(candidate)<near_distance:
						near_distance=at.distance_squared_to(candidate)
						nearest=candidate
				values[at] = Vector2(clampf(distance/WIDTH,0,1),renderer._street_height(nearest)+0.001)
			var value: Vector2 = values[at]
			point.y = value.y
			surface.set_normal(Vector3.UP)
			surface.set_uv(Vector2(value.x,0.0))
			surface.add_vertex(point)
	surface.index()
	return {"arrays":surface.commit_to_arrays(),"stats":{"triangles":vertices.size()/3,"vertices":values.size()}}

func install(renderer: Node3D, data: Dictionary, parent: Node3D) -> Dictionary:
	if data.arrays.is_empty(): return data.stats
	var mesh := ArrayMesh.new()
	mesh.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,data.arrays)
	var node := MeshInstance3D.new()
	node.name = "SoftRoadEdge"
	node.mesh = mesh
	if material==null:
		material=ShaderMaterial.new()
		material.shader=EdgeShader
		ShorePalette.configure(material)
	material.set_shader_parameter("water_field",renderer.water_field.texture)
	node.material_override=material
	node.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	node.set_meta("edge_width",WIDTH)
	parent.add_child(node)
	return data.stats

func build(renderer: Node3D, road: Dictionary, parent: Node3D) -> Dictionary:
	return install(renderer,prepare(renderer,road),parent)

func _bins(segments: Array, margin: float) -> Dictionary:
	var bins := {}
	for segment: Array in segments:
		var bounds := Rect2(segment[0],Vector2.ZERO).expand(segment[1]).grow(margin)
		for z in range(floori(bounds.position.y),floori(bounds.end.y)+1):
			for x in range(floori(bounds.position.x),floori(bounds.end.x)+1):
				var key := Vector2i(x,z)
				if not bins.has(key): bins[key]=[]
				bins[key].append(segment)
	return bins
