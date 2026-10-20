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
	var neighbors:Array=[outlines]
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
			neighbors.append(contours)
	var vertices: Array[Vector3] = []
	var rings:Array=[]
	for contour: PackedVector2Array in outlines:
		# Boolean offset rings handle concave/short edges and closed islands.
		# The old independent miter quads folded across sharp junction corners.
		var hole:=Geometry2D.is_polygon_clockwise(contour)
		var positive:=contour.duplicate()
		if hole:positive.reverse()
		var inset:Array=Geometry2D.offset_polygon(positive,WIDTH if hole else -WIDTH,Geometry2D.JOIN_ROUND)
		rings.append([contour]+inset)
	var exclusions:Array=[]
	for cut:Dictionary in cuts:exclusions.append(cut.contours)
	vertices=renderer._water_scanline_union(rings,0,exclusions,outlines)
	if bool(road.get("bridge",false)): vertices = renderer._subdivide_road(vertices)
	if vertices.is_empty(): return {"arrays":[],"stats":{"triangles":0,"vertices":0}}
	var edge_segments:Array=_exposed_segments(neighbors)
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

func _inside(point:Vector2,contours:Array)->bool:
	var covered:=false
	for contour:PackedVector2Array in contours:
		if Geometry2D.is_point_in_polygon(point,contour):covered=not covered
	return covered

func _exposed_segments(groups:Array)->Array:
	# Measure feathering against the complete local road union, never an
	# internal stroke cap. Split contour edges exactly at neighboring borders.
	var result:Array=[]
	for own in range(groups.size()):
		for contour:PackedVector2Array in groups[own]:
			for i in range(contour.size()):
				var a:=contour[i];var b:=contour[(i+1)%contour.size()]
				var delta:=b-a;var length2:=delta.length_squared()
				if length2<.00000001:continue
				var breaks:Array[float]=[0.,1.]
				for other in range(groups.size()):
					if other==own:continue
					for neighbor:PackedVector2Array in groups[other]:
						for j in range(neighbor.size()):
							var cross:Variant=Geometry2D.segment_intersects_segment(a,b,neighbor[j],neighbor[(j+1)%neighbor.size()])
							if cross is Vector2:breaks.append(clampf((Vector2(cross)-a).dot(delta)/length2,0.,1.))
				breaks.sort()
				for part in range(1,breaks.size()):
					if breaks[part]-breaks[part-1]<.000001:continue
					var middle:=a+delta*(breaks[part]+breaks[part-1])*.5
					var hidden:=false
					for other in range(groups.size()):
						if other!=own and _inside(middle,groups[other]):hidden=true;break
					if not hidden:result.append([a+delta*breaks[part-1],a+delta*breaks[part]])
	return result

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
