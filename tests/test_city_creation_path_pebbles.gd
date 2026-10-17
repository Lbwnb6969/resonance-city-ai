extends SceneTree
const State := preload("res://scripts/world/city_creation_state.gd")
const Pebbles := preload("res://scripts/visual/city_creation_path_pebbles.gd")
var failures: Array[String] = []
var checks := 0

func _expect(value: bool, label: String) -> void:
	checks += 1
	if not value: failures.append(label)

func _initialize() -> void:
	_run.call_deferred()

func _key(record: Dictionary) -> String:
	return "%d/%.8f" % [record.side, record.arc]

func _full_footprint(helper: RefCounted, road: Dictionary, records: Array) -> void:
	for record: Dictionary in records:
		var transform: Transform3D = record.transform
		var water_clear := true
		var foundation_clear := true
		var door_clear := true
		var junction_clear := true
		for index in range(13):
			var angle := float(index) * TAU / 12.0
			var local := Vector3.ZERO if index == 12 else Vector3(cos(angle), 0, sin(angle))
			var world := transform * local
			var at := Vector2(world.x, world.z)
			water_clear = water_clear and helper.city.water_clearance(at) > 0.64
			for footprint: Rect2 in helper.footprints:
				foundation_clear = foundation_clear and not footprint.grow(0.059).has_point(at)
			for door: Vector2 in helper.doors:
				door_clear = door_clear and at.distance_to(door) > 0.97
			for segment: Dictionary in helper.segments:
				if segment.id == road.id: continue
				junction_clear = junction_clear and at.distance_to(Geometry2D.get_closest_point_to_segment(at, segment.a, segment.b)) > float(segment.radius)
		_expect(water_clear, "whole stone stays clear of bridge ramps/water")
		_expect(foundation_clear, "whole stone stays outside complete ground-room/terrace footprint")
		_expect(door_clear, "whole stone clears default and active door circle")
		_expect(junction_clear, "whole stone stays out of junction interior")

func _run() -> void:
	var city := State.new()
	city.initialize()
	var helper := Pebbles.new()
	helper.prepare(city)
	var road: Dictionary = city.roads[0]
	var original := helper.records(road).duplicate(true)
	var signature := helper.signature(road)
	_expect(original.size() > 12, "baseline has enough actual pebbles")
	_expect(helper.records(road) == original, "same seed repeats exact transform/color/variant")
	var second := Pebbles.new()
	second.prepare(city)
	_expect(second.records(road) == original, "fresh helper repeats exact scatter")
	var redundant := road.duplicate(true)
	redundant.points = [[-11.0, -9.0], [-11.0, -9.0], [-11.0, -3.0], [-11.0, 3.0], [-11.0, 9.0]]
	_expect(helper.layout(redundant) == helper.layout(road), "collinear event density and duplicates do not change scatter")
	var raw_layout := helper.layout(road)
	var earlier := {}
	var varied_spacing := false
	for record: Dictionary in raw_layout:
		if earlier.has(record.side):
			var gap: float = record.arc - earlier[record.side]
			_expect(gap >= 0.4499, "arc intervals respect minimum spacing")
			if gap > 1.0: varied_spacing = true
		earlier[record.side] = record.arc
	_expect(varied_spacing, "random omissions leave non-fence rhythm")
	var saved: Dictionary = JSON.parse_string(JSON.stringify(city.snapshot()))
	var loaded := State.new()
	_expect(loaded.restore(saved).ok, "JSON save payload restores")
	second.prepare(loaded)
	_expect(second.records(loaded.roads[0]) == original, "JSON storage roundtrip preserves exact pebble transforms")
	_expect(city.add_house(Vector2(-12.6, -2)).ok, "new house beside existing road fixture")
	helper.prepare(city)
	_expect(helper.signature(road) != signature and helper.records(road).size() < original.size(), "new room/default-door clearance invalidates affected road decor")
	_expect(city.undo().ok, "undo new roadside house")
	helper.prepare(city)
	_expect(helper.records(road) == original and helper.signature(road) == signature, "undo room restores exact roadside stones")
	var points: Array[Vector2] = [Vector2(13, -12), Vector2(13, 0)]
	_expect(city.add_road(points).ok, "independent remote road fixture")
	helper.prepare(city)
	_expect(helper.records(road) == original and helper.signature(road) == signature, "independent appended road never shifts existing scatter/dependency")
	points = [Vector2(-16, 4), Vector2(-10, 4)]
	_expect(city.add_road(points).ok, "actual intersecting road fixture")
	helper.prepare(city)
	var crossed := helper.records(road)
	_expect(crossed.size() < original.size(), "junction removes stones now inside another road")
	_expect(helper.signature(road) != signature, "junction updates pebble dependency signature")
	var original_by_key := {}
	for record: Dictionary in original: original_by_key[_key(record)] = record
	for record: Dictionary in crossed:
		_expect(original_by_key.has(_key(record)) and original_by_key[_key(record)] == record, "junction does not move surviving stones")
	_expect(city.undo().ok, "undo intersection")
	helper.prepare(city)
	_expect(helper.records(road) == original and helper.signature(road) == signature, "undo restores exact transforms and dependency signature")
	_expect(city.redo().ok, "redo intersection")
	helper.prepare(city)
	_expect(helper.records(road) == crossed, "redo repeats exact masked scatter")
	points = [Vector2(-16, -6), Vector2(-9.15, -6)]
	_expect(city.add_road(points).ok, "west-facing active porch fixture")
	points = [Vector2(-16, 12), Vector2(15, 12)]
	_expect(city.add_road(points).ok and city.roads[-1].bridge, "real cross-river bridge fixture")
	helper.prepare(city)
	var active_door := false
	for entrance: Dictionary in city.house_entrances("h1"):
		if entrance.active and entrance.side == Vector2i(-1, 0): active_door = true
	_expect(active_door, "active side door actually exists in fixture")
	var all_records := 0
	for row: Dictionary in city.roads:
		var records := helper.records(row)
		all_records += records.size()
		_full_footprint(helper, row, records)
	var parent := Node3D.new()
	root.add_child(parent)
	var build_info := helper.build(parent, road, parent)
	var instances := 0
	var mesh_ids := {}
	var material_ids := {}
	for child: Node in parent.get_children():
		_expect(child is MultiMeshInstance3D, "no individual stone MeshInstance/node/light")
		if not child is MultiMeshInstance3D: continue
		instances += child.multimesh.instance_count
		mesh_ids[child.multimesh.mesh.get_instance_id()] = true
		material_ids[child.material_override.get_instance_id()] = true
		_expect(child.multimesh.mesh.get_faces().size() / 3 <= 80, "shared stone mesh stays low polygon")
		for index in range(child.multimesh.instance_count):
			var at: Vector3 = child.multimesh.get_instance_transform(index).origin
			_expect(at.x >= 0 and at.x < 8 and at.z >= 0 and at.z < 8, "stone owned once by final world 8m block")
	_expect(instances == helper.records(road).size() and instances == build_info.instances, "MultiMesh count exactly covers survivors")
	_expect(parent.get_child_count() == build_info.batches and mesh_ids.size() <= 3 and material_ids.size() == 1, "at most three shared meshes and one material across road chunks")
	var old_children := parent.get_children()
	helper.set_view_scale(28)
	_expect(helper.detail == 0.0 and parent.get_children() == old_children, "far zoom collapses stones without rebuilding node tree")
	helper.set_view_scale(12)
	_expect(helper.detail == 1.0 and helper.records(road) == parent.get_meta("path_pebbles_records"), "close zoom recovers unchanged stone scatter")
	print("CITY_CREATION_PATH_PEBBLES ", JSON.stringify({"ok": failures.is_empty(), "failures": failures, "checks": checks,
		"baseline_stones": original.size(), "junction_stones": crossed.size(), "all_fixture_stones": all_records,
		"road_instances": instances, "road_batches": build_info.batches, "shared_meshes": mesh_ids.size()}))
	parent.queue_free()
	await process_frame
	quit(0 if failures.is_empty() else 1)
