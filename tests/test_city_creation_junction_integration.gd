extends SceneTree
## Actual scene / uploaded mesh contract. Never reads or writes personal saves.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
var checks := 0
var failures: Array[String] = []
var demo: Node3D

func _initialize() -> void: _run.call_deferred()

func _check(value: bool, label: String) -> void:
	checks += 1
	if not value: failures.append(label)

func _run() -> void:
	demo = Scene.instantiate()
	demo.persistence = false
	root.add_child(demo)
	demo.life.set_process(false)
	demo.state.houses.clear()
	demo.state.roads.clear()
	demo.state.plants.clear()
	var city: State = demo.state
	var town: Node3D = demo.town
	_check(city.add_road([Vector2(-14,-8),Vector2(-6,-8)]).ok,"author T horizontal")
	_check(city.add_road([Vector2(-10,-12),Vector2(-10,-8)]).ok,"author T stem")
	_check(city.add_road([Vector2(-14,0),Vector2(-6,0)]).ok,"author X horizontal")
	_check(city.add_road([Vector2(-10,-3),Vector2(-10,3)]).ok,"author X vertical")
	_check(city.add_road([Vector2(-16,10),Vector2(-12,10)]).ok,"author remote road")
	var authored: Array = city.roads.duplicate(true)
	var ids: Array[String] = []
	for road: Dictionary in city.roads: ids.append(str(road.id))
	town.rebuild()
	demo.life._sync()
	var context: RefCounted = city.road_junctions()
	_check(city.roads == authored,"derivation leaves real IDs, widths and control points unchanged")
	_check(not context.additions(ids[0]).is_empty() and not context.additions(ids[2]).is_empty(),"actual T and X publish optional paved mouths")
	_check(context.additions(ids[4]).is_empty(),"isolated road has no invented mouth")
	var probe := Vector2(-9.3,-0.7)
	_check(_core_distance(city,probe)>0.015,"probe lies outside every original capsule")
	_check(not str(city.road_at(probe)).is_empty(),"actual eraser query reaches optional paved mouth")
	_check(_inside_outlines(town,probe),"published renderer outlines contain same eraser probe")
	var surfaces: Array = _road_triangles(town,false)
	var edges: Array = _road_triangles(town,true)
	_check(_hits(surfaces,probe)==1,"uploaded real road mesh covers extra mouth exactly once")
	# Offset samples avoid shared triangle diagonals. This reads the installed
	# ArrayMesh buffers, rather than invoking the production triangulator again.
	var surface_ok := true
	var pavement_samples := 0
	for junction: Vector2 in [Vector2(-10,-8),Vector2(-10,0)]:
		for x in range(-8,9):
			for y in range(-8,9):
				var at := junction+Vector2(float(x)*0.137+0.031,float(y)*0.139+0.017)
				if not _inside_outlines(town,at): continue
				pavement_samples += 1
				if _hits(surfaces,at)!=1: surface_ok=false
	_check(pavement_samples>100 and surface_ok,"T/X actual uploaded paving has no holes or duplicate faces")
	_check(_hits(edges,Vector2(-10.031,-8.023))==0 and _hits(edges,Vector2(-10.031,0.023))==0,"soft edge does not paint internal intersection seams")
	var field: RefCounted = town.ground_contact_field
	field._rebuild_bins()
	_check(is_zero_approx(float(field.exact_at(probe).y)),"contact field exact road distance is zero on real extra paving")
	_check(float(field.sample_world(probe).y)<=field.INTERPOLATION_ERROR,"uploaded filtered contact mask agrees within documented texel error")
	var original_signature: Variant = context.signature(ids[0])
	var far_root: int = town.road_roots[ids[4]].get_instance_id()
	# The house shell enters only the optional diagonal corner, leaving original
	# capsules legal. The derived mouth must retreat rather than block building.
	_check(city.add_house(Vector2(-8.44,-9.56)).ok,"real home can claim an optional T corner without crossing original cores")
	town.rebuild()
	_check(city.roads==authored,"house adaptation preserves complete authored road data")
	_check(city.road_junctions().signature(ids[0])!=original_signature,"nearby real shell invalidates local junction footprint")
	var shell := Rect2(Vector2(-8.44,-9.56)-Vector2.ONE*0.92,Vector2.ONE*1.84).grow(-0.0002)
	var clear := true
	for road_id: String in ids:
		for polygon: PackedVector2Array in city.road_junctions().additions(road_id):
			for point: Vector2 in polygon:
				if shell.has_point(point): clear=false
	_check(clear,"all derived paving retreats outside actual house shell")
	_check(town.road_roots[ids[4]].get_instance_id()==far_root,"local house/junction edit preserves remote real road root")
	_check(city.undo().ok,"undo corner home")
	town.rebuild()
	_check(city.road_junctions().signature(ids[0])==original_signature,"undo restores exact derived corner signature")
	# Preview is read-only; commit stores its real resolved endpoints. Bridge
	# assistance remains subject to the existing complete-road validator.
	var river: float = city.river_x(8.0)
	var intended: Array[Vector2] = [Vector2(river-2.4,8),Vector2(river+2.4,8)]
	var before_preview: Dictionary = city.snapshot()
	var preview: Dictionary = city.preview_road(intended)
	_check(preview.ok and preview.has("points"),"near-bank preview returns legal real anchored endpoints")
	_check(city.snapshot()==before_preview,"preview does not mutate authoritative city")
	var resolved: Array[Vector2] = []
	resolved.assign(preview.get("points",intended))
	_check(resolved.size()==2 and resolved[0].x<intended[0].x and resolved[-1].x>intended[-1].x,"both short bridge endpoints actually extend onto dry ground")
	_check(city.add_road(resolved).ok,"commit preview's anchored bridge")
	var bridge: Dictionary = city.roads[-1].duplicate(true)
	_check(bool(bridge.bridge) and _points(bridge)==resolved,"saved bridge points exactly match the preview")
	_check(city.undo().ok and city.roads==authored,"undo removes exactly the anchored road")
	_check(city.redo().ok and city.roads[-1]==bridge,"redo restores identical bridge ID and geometry")
	var restored := State.new()
	var encoded: Dictionary = JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))
	_check(restored.restore(encoded).ok and restored.roads==city.roads,"JSON roundtrip passes unchanged save validator with exact real bridge points")
	# Ready hidden work and cancellation must not leak meshes or uploaded masks.
	var visible_texture: Texture2D = town.ground_contact_field.texture
	var visible_root: int = town.road_roots[ids[0]].get_instance_id()
	town.request_budget_rebuild()
	var report: Dictionary = await _poll(town,false)
	_check(bool(report.get("ready",false)),"budget preparation reaches ready within finite deadline")
	_check(town.ground_contact_field.texture==visible_texture and town.road_roots[ids[0]].get_instance_id()==visible_root,"ready stage preserves published texture and road root")
	if bool(report.get("ready",false)):
		var staging: Node3D = town.budget_rebuild.staging
		_check(staging.state.road_junctions()!=city.road_junctions(),"worker owns independent derived context")
		_check(staging.state.road_junctions().signature(ids[0])==city.road_junctions().signature(ids[0]),"worker derived signature equals current authoritative geometry")
	town.cancel_budget_rebuild()
	_check(town.ground_contact_field.texture==visible_texture,"cancel keeps old uploaded contact texture")
	# Latest replacement includes the bridge and a real additional endpoint snap.
	var snap_preview: Dictionary = city.preview_road([Vector2(-14,6),Vector2(-14,9.4)])
	var snapped: Array[Vector2] = []
	snapped.assign(snap_preview.get("points",[]))
	_check(snap_preview.ok and snapped.size()==2 and snapped[-1].distance_to(Vector2(-14,10))<0.0001,"nearby road endpoint preview snaps to real centerline")
	_check(city.add_road(snapped).ok,"commit actual snapped connector")
	var latest: int = town.request_budget_rebuild()
	report = await _poll(town,true)
	_check(bool(report.get("committed",false)) and int(report.get("committed_generation",-1))==latest,"latest budget generation commits after cancellation")
	_check(town.road_roots.size()==city.roads.size() and town.road_roots.has(bridge.id),"latest publication includes every pending real road")
	_check(town.road_roots[ids[4]].get_instance_id()!=far_root,"actually connected remote road invalidates its previous isolated geometry")
	var sync_field: RefCounted = town.ground_contact_field.get_script().new()
	sync_field.prepare(city)
	_check(sync_field.pixels==town.ground_contact_field.pixels,"published worker road/contact polygons equal synchronous current city")
	print("JUNCTION_INTEGRATION_RESULT ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"pavement_samples":pavement_samples,"road_triangles":surfaces.size(),"edge_triangles":edges.size(),"budget":report.get("stats",{})}))
	demo.queue_free()
	await process_frame
	quit(0 if failures.is_empty() else 1)

func _poll(town: Node3D, commit: bool) -> Dictionary:
	var deadline := Time.get_ticks_msec()+20000
	var report: Dictionary = {}
	while Time.get_ticks_msec()<deadline:
		report = town.poll_budget_rebuild(3.5,commit)
		if bool(report.get("committed",false)) or (not commit and bool(report.get("ready",false))): return report
		await process_frame
	return report

func _points(road: Dictionary) -> Array[Vector2]:
	var result: Array[Vector2] = []
	for p: Array in road.points: result.append(Vector2(float(p[0]),float(p[1])))
	return result

func _core_distance(city: RefCounted, at: Vector2) -> float:
	var result := INF
	for road: Dictionary in city.roads:
		var points := _points(road)
		for index in range(1,points.size()):
			result=minf(result,at.distance_to(Geometry2D.get_closest_point_to_segment(at,points[index-1],points[index]))-float(road.width)*0.5)
	return result

func _inside_outlines(town: Node3D, at: Vector2) -> bool:
	for contours: Array in town.road_outlines.values():
		var inside := false
		for contour: PackedVector2Array in contours:
			if Geometry2D.is_point_in_polygon(at,contour): inside=not inside
		if inside: return true
	return false

func _road_triangles(town: Node3D, edge: bool) -> Array:
	var triangles: Array = []
	for road_root: Node3D in town.road_roots.values():
		for child: Node in road_root.get_children():
			if not child is MeshInstance3D: continue
			if edge and child.name!="SoftRoadEdge": continue
			if not edge and child.material_override!=town.road_material: continue
			for surface in range(child.mesh.get_surface_count()):
				var arrays: Array = child.mesh.surface_get_arrays(surface)
				var vertices: PackedVector3Array = arrays[Mesh.ARRAY_VERTEX]
				var indices: PackedInt32Array = arrays[Mesh.ARRAY_INDEX]
				for offset in range(0,indices.size() if not indices.is_empty() else vertices.size(),3):
					var polygon := PackedVector2Array()
					for vertex in range(3):
						var point: Vector3 = vertices[indices[offset+vertex] if not indices.is_empty() else offset+vertex]
						polygon.append(Vector2(point.x,point.z))
					triangles.append(polygon)
	return triangles

func _hits(triangles: Array, at: Vector2) -> int:
	var result := 0
	for triangle: PackedVector2Array in triangles:
		if Geometry2D.is_point_in_polygon(at,triangle): result+=1
	return result
