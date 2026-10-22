extends RefCounted
## A narrow ring inside the real street footprint. Exact neighbour cuts remove
## internal junction edges; the original single road surface stays authoritative.
const SafeInstances = preload("res://scripts/visual/city_creation_safe_instances.gd")
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
	var edge_segments:Array=_exposed_segments(neighbors)
	var rings:Array=[]
	# Offset the connected exposed boundary rather than each stroke's cap.
	for contour:PackedVector2Array in _boundary_contours(edge_segments):
		var hole:bool=Geometry2D.is_polygon_clockwise(contour)
		var positive:PackedVector2Array=contour.duplicate()
		if hole:positive.reverse()
		var inset:Array=Geometry2D.offset_polygon(positive,WIDTH if hole else -WIDTH,Geometry2D.JOIN_ROUND)
		rings.append([contour]+inset)
	var exclusions:Array=[]
	for cut:Dictionary in cuts:exclusions.append(cut.contours)
	vertices=renderer._water_scanline_union(rings,0,exclusions,outlines)
	if bool(road.get("bridge",false)): vertices = renderer._subdivide_road(vertices)
	if vertices.is_empty(): return {"arrays":[],"stats":{"triangles":0,"vertices":0}}
	var samples: Array[Vector2] = renderer._road_geometry(road).samples
	var center_segments: Array = []
	for index in range(samples.size()-1): center_segments.append([samples[index],samples[index+1]])
	var edge_bins := _bins(edge_segments,WIDTH*2.5+0.001)
	var center_bins := _bins(center_segments,float(road.width)*0.5+WIDTH*2.5+0.01)
	var values := {}
	var surface := SurfaceTool.new()
	surface.begin(Mesh.PRIMITIVE_TRIANGLES)
	surface.set_custom_format(0,SurfaceTool.CUSTOM_RGBA_FLOAT)
	surface.set_custom_format(1,SurfaceTool.CUSTOM_RGBA_FLOAT)
	for triangle in range(0,vertices.size(),3):
		var nearest_edges:Array=[]
		for vertex:int in range(3):
			var vertex_at:=Vector2(vertices[triangle+vertex].x,vertices[triangle+vertex].z)
			var best:Array=[];var best_distance:=INF
			for segment:Array in edge_bins.get(Vector2i(floori(vertex_at.x),floori(vertex_at.y)),edge_segments):
				var distance:float=vertex_at.distance_squared_to(Geometry2D.get_closest_point_to_segment(vertex_at,segment[0],segment[1]))
				if distance<best_distance:best_distance=distance;best=segment
			nearest_edges.append(Color(best[0].x,best[0].y,best[1].x,best[1].y))
		for offset in [0,2,1]:
			var point: Vector3 = vertices[triangle+offset]
			var at := Vector2(point.x,point.z)
			if not values.has(at):
				var bin := Vector2i(floori(at.x),floori(at.y))
				var nearest := samples[0]
				var near_distance := INF
				for segment: Array in center_bins.get(bin,center_segments):
					var candidate := Geometry2D.get_closest_point_to_segment(at,segment[0],segment[1])
					if at.distance_squared_to(candidate)<near_distance:
						near_distance=at.distance_squared_to(candidate)
						nearest=candidate
				values[at] = renderer._street_height(nearest)+0.001
			point.y = float(values[at])
			surface.set_normal(Vector3.UP)
			surface.set_uv(Vector2(nearest_edges[0].r,nearest_edges[0].g))
			surface.set_uv2(Vector2(nearest_edges[0].b,nearest_edges[0].a))
			surface.set_custom(0,nearest_edges[1]);surface.set_custom(1,nearest_edges[2])
			surface.add_vertex(point)
	surface.index()
	return {"arrays":surface.commit_to_arrays(),"stats":{"triangles":vertices.size()/3,"vertices":values.size()}}

func install(renderer: Node3D, data: Dictionary, parent: Node3D) -> Dictionary:
	if data.arrays.is_empty(): return data.stats
	var mesh := ArrayMesh.new()
	var flags:int=(Mesh.ARRAY_CUSTOM_RGBA_FLOAT<<Mesh.ARRAY_FORMAT_CUSTOM0_SHIFT)|(Mesh.ARRAY_CUSTOM_RGBA_FLOAT<<Mesh.ARRAY_FORMAT_CUSTOM1_SHIFT)
	mesh.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,data.arrays,[],{},flags)
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
		# Boundary probes need strict parity. Geometry2D's approximate boundary
		# hit tolerance grows at world coordinates and marks both sides inside.
		for index:int in range(contour.size()):
			var a:Vector2=contour[index];var b:Vector2=contour[(index+1)%contour.size()]
			if (a.y>point.y)==(b.y>point.y):continue
			var cross_x:float=float(a.x)+(float(point.y)-float(a.y))*(float(b.x)-float(a.x))/(float(b.y)-float(a.y))
			if float(point.x)<cross_x:covered=not covered
	return covered

func _exposed_segments(groups:Array)->Array:
	# Measure feathering against the complete local road union, never an
	# internal stroke cap. Split contour edges exactly at neighboring borders.
	var result:Array=[]
	var seen:Dictionary={}
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
					var normal:=Vector2(-delta.y,delta.x).normalized()*.00005
					var left:=false;var right:=false
					for group:Array in groups:
						left=left or _inside(middle+normal,group)
						right=right or _inside(middle-normal,group)
					if left==right:continue
					var start:Vector2=a+delta*breaks[part-1];var finish:Vector2=a+delta*breaks[part]
					if not left:
						var swap:=start;start=finish;finish=swap
					var key:Array=[_key(start),_key(finish)]
					if not seen.has(key):result.append([start,finish]);seen[key]=true
	return result

func _boundary_contours(segments:Array)->Array:
	var starts:Dictionary={};var used:Dictionary={};var result:Array=[]
	var points:Dictionary={}
	# Intersection calculations arrive from opposite segment directions and
	# differ by float32 rounding. Weld only endpoints within 0.05mm.
	for segment:Array in segments:
		for end:int in range(2):
			var at:Vector2=segment[end];var bin:=Vector2i(floori(at.x*10000.),floori(at.y*10000.))
			var found:=false
			for x:int in range(-1,2):
				for y:int in range(-1,2):
					for candidate:Vector2 in points.get(bin+Vector2i(x,y),[]):
						if at.distance_squared_to(candidate)<.0000000025:segment[end]=candidate;found=true;break
					if found:break
				if found:break
			if not found:
				if not points.has(bin):points[bin]=[]
				points[bin].append(at)
	for i:int in range(segments.size()):
		var key:Vector2i=_key(segments[i][0])
		if not starts.has(key):starts[key]=[]
		starts[key].append(i)
	for first:int in range(segments.size()):
		if used.has(first):continue
		var contour:=PackedVector2Array();var current:int=first
		var initial:Vector2i=_key(segments[first][0]);var closed:=false
		while not used.has(current):
			used[current]=true;contour.append(segments[current][0])
			var finish:Vector2i=_key(segments[current][1])
			if finish==initial:closed=true;break
			var next:=-1
			for candidate:int in starts.get(finish,[]):
				if not used.has(candidate):next=candidate;break
			if next<0:break
			current=next
		if closed:
			var clean:=SafeInstances.clean_contour(contour)
			if clean.size()>=3:result.append(clean)
	return result

func _key(at:Vector2)->Vector2i:return Vector2i(roundi(at.x*10000.),roundi(at.y*10000.))

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
