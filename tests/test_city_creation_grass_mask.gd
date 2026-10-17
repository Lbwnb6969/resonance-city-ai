extends SceneTree

const State := preload("res://scripts/world/city_creation_state.gd")
const Mask := preload("res://scripts/visual/city_creation_grass_mask.gd")
var failures: Array[String] = []

func _initialize() -> void:
	var city := State.new()
	city.initialize()
	# Dense curved strokes, diagonal segments and degenerate endpoints exercise
	# broad-phase inclusion. The visibility contract is independent of whether
	# construction validation would accept these deliberately overlapping rows.
	for row in range(3):
		var points: Array = []
		for step in range(49):
			var t := float(step) / 48.0
			points.append([-17.0 + t * 30.0, -11.0 + row * 6.0 + sin(t * TAU * 1.5) * 2.3])
		city.roads.append({"points": points, "width": 0.85 + row * 0.4})
	city.roads.append({"points": [[-15.0, 8.0], [12.0, -13.0], [12.0, -13.0]], "width": 1.4})
	city.waters.append({"points": [[-14.0, 10.0]], "width": 2.6})
	city.waters.append({"points": [[-13.0, -13.0], [-10.0, -11.0], [-8.0, -13.0], [-5.0, -10.0]], "width": 1.8})
	# A south neighbour outside a queried bin suppresses the room's door. The
	# complete house must be retained rather than clipping its cell collection.
	city.houses.append({"origin": [-15.5, 6.6], "cells": [
		{"x": 0, "z": 0, "level": 0, "kind": "room"},
		{"x": 0, "z": 1, "level": 0, "kind": "terrace"},
		{"x": 1, "z": 0, "level": 1, "kind": "room"}]})
	var before := city.snapshot()
	var query := {"id": "pcomparison", "position": [0.0, 0.0], "kind": "shrub", "scale": 0.1, "seed": 0, "source": "seed"}
	var checked := 0
	var largest_query_ms := 0.0
	var largest_setup_ms := 0.0
	var largest_meadow_query_ms := 0.0
	for block in [Vector2i(-3, -2), Vector2i(-2, -2), Vector2i(-2, -1), Vector2i(-1, -1), Vector2i(-2, 0), Vector2i(-1, 0), Vector2i(0, 0), Vector2i(1, 1)]:
		var mask := Mask.new()
		mask.setup(city, block)
		largest_setup_ms = maxf(largest_setup_ms, float(mask.stats().setup_ms))
		var positions: Array[Vector2] = []
		var expected: Array[bool] = []
		for scale_value in [0.1, 0.18, 0.25]:
			query.scale = scale_value
			positions.clear()
			expected.clear()
			for z in range(64):
				for x in range(64):
					var at := Vector2(block) * 8.0 + Vector2(x, z) * 0.125
					query.position = [at.x, at.y]
					positions.append(at)
					expected.append(city.vegetation_visible(query))
			var started := Time.get_ticks_usec()
			for index in range(positions.size()):
				var visible := mask.visible(positions[index], scale_value)
				if visible != expected[index]:
					failures.append("visibility mismatch at %s scale %.2f" % [positions[index], scale_value])
					break
				checked += 1
			largest_query_ms = maxf(largest_query_ms, float(Time.get_ticks_usec() - started) / 1000.0)
		_check(not mask.visible(Vector2(block) * 8.0 + Vector2(8, 0), 0.18), "block end belongs to next mask")
		# Existing deterministic short meadow uses roughly 31 x 31 candidates.
		# Report this workload separately from the much denser equality grid.
		var meadow_started := Time.get_ticks_usec()
		for z in range(31):
			for x in range(31):
				mask.visible(Vector2(block) * 8.0 + Vector2(x + 0.5, z + 0.5) * 0.26, 0.18)
		largest_meadow_query_ms = maxf(largest_meadow_query_ms, float(Time.get_ticks_usec() - meadow_started) / 1000.0)
	_check(city.snapshot() == before, "index building and queries do not alter authored state or identities")
	checked += _check_boundaries()
	if failures.is_empty():
		print("CITY_CREATION_GRASS_MASK PASS: %d exact comparisons; densest 4096 queries %.3f ms; 961 meadow queries %.3f ms; max setup %.3f ms" % [checked, largest_query_ms, largest_meadow_query_ms, largest_setup_ms])
		quit(0)
	else:
		for failure in failures:
			push_error(failure)
		quit(1)

func _check(condition: bool, label: String) -> void:
	if not condition:
		failures.append(label)

func _check_boundaries() -> int:
	var count := 0
	var city := State.new()
	city.houses.append({"origin": [-12.123456789, 6.45], "cells": [
		{"x": 0, "z": 0, "level": 0, "kind": "room"}]})
	city.roads.append({"points": [[-16.0, -13.0], [-16.0, -9.0]], "width": 1.25})
	city.roads.append({"points": [[-13.0, -9.0], [-13.0, -9.0]], "width": 1.25})
	city.roads.append({"points": [[-17.0, 1.0], [-17.0, 3.0]], "width": 0.89})
	city.waters.append({"points": [[-5.0, -5.0]], "width": 2.4})
	var query := {"id": "pboundary", "position": [0.0, 0.0], "kind": "shrub", "scale": 0.1, "seed": 0, "source": "seed"}
	# Test the same room with / without a southern neighbour. Its door is
	# exactly on the block border, and the neighbour's centre is outside it.
	for occupied in [false, true]:
		if occupied:
			city.houses[0].cells.append({"x": 0, "z": 1, "level": 0, "kind": "terrace"})
		var masks: Dictionary = {}
		for scale_value in [0.1, 0.18, 0.25]:
			var clearance: float = 0.42 * scale_value
			var center := Vector2(float(city.houses[0].origin[0]), float(city.houses[0].origin[1]))
			var footprint := Rect2(center - Vector2.ONE * 0.9, Vector2.ONE * 1.8).grow(clearance)
			var door := center + Vector2(0, 1.55)
			var probes: Array[Vector2] = []
			probes.append(Vector2(-16, 2))
			for epsilon in [-0.00001, -0.000001, 0.0, 0.000001, 0.00001]:
				probes.append(Vector2(footprint.position.x + epsilon, center.y))
				probes.append(Vector2(footprint.end.x + epsilon, center.y))
				probes.append(Vector2(center.x, footprint.position.y + epsilon))
				probes.append(Vector2(center.x, footprint.end.y + epsilon))
				for angle in [0.0, 0.37, 1.57, 3.14, 4.7]:
					probes.append(door + Vector2.from_angle(angle) * (0.95 + clearance + epsilon))
					probes.append(Vector2(-13, -9) + Vector2.from_angle(angle) * (1.25 * 0.5 + 0.45 + clearance + epsilon))
					probes.append(Vector2(-5, -5) + Vector2.from_angle(angle) * (1.2 + clearance + epsilon))
				probes.append(Vector2(-16.0 + 1.25 * 0.5 + 0.45 + clearance + epsilon, -11.0))
				probes.append(Vector2(State.river_x(10) + State.RIVER_HALF_WIDTH + clearance + epsilon, 10))
			for at in probes:
				var block := Vector2i(floori(at.x / 8.0), floori(at.y / 8.0))
				if not masks.has(block):
					var mask := Mask.new()
					mask.setup(city, block)
					masks[block] = mask
				query.position = [at.x, at.y]
				query.scale = scale_value
				_check(masks[block].visible(at, scale_value) == city.vegetation_visible(query), "exact epsilon boundary at %s scale %.2f occupied=%s" % [at, scale_value, occupied])
				count += 1
	return count
