extends SceneTree

const State := preload("res://scripts/world/city_creation_state.gd")
const Mask := preload("res://scripts/visual/city_creation_grass_mask.gd")
var failures: Array[String] = []
var checked := 0

func _initialize() -> void:
	var city := State.new()
	city.houses.append({"origin": [-8.35, -8.55], "cells": [
		{"x": 0, "z": 0, "level": 0, "kind": "room"},
		{"x": 1, "z": 0, "level": 0, "kind": "terrace"},
		{"x": 1, "z": 1, "level": 0, "kind": "room"},
		{"x": 0, "z": 0, "level": 1, "kind": "room"}]})
	city.roads.append({"points": [[-15.8, -2.2], [-10.1, -3.4], [-7.1, -1.1], [-5.3, -0.2]], "width": 1.05})
	city.roads.append({"points": [[-16.0, 3.0], [-16.0, 3.0]], "width": 1.2})
	city.waters.append({"points": [[-8.3, 7.8], [-5.7, 8.6], [-4.5, 10.8]], "width": 1.6})
	city.waters.append({"points": [[10.0, -8.1]], "width": 1.4})
	var before := city.snapshot()
	var masks: Dictionary = {}
	# Brute-force oracle has no bins and uses nearest rectangle boundary points
	# rather than the implementation's box-SDF formula.
	for z in range(-140, 141):
		for x in range(-175, 166):
			_compare(city, masks, Vector2(x, z) * 0.1)
	# Continuous influence must cross metre and 8m block borders; epsilon probes
	# cover corners, capsule ends and the exact 0.65m end of the visual band.
	for clearance in [0.0, 0.00001, 0.05, 0.105, 0.3, 0.55, 0.64999, 0.65, 0.65001]:
		for angle in [0.0, 0.31, 0.77, 1.57, 2.41, 3.14, 4.71, 5.52]:
			var outward := Vector2.from_angle(angle)
			_compare(city, masks, Vector2(10, -8.1) + outward * (0.7 + clearance))
			_compare(city, masks, Vector2(-16, 3) + outward * (1.05 + clearance))
			_compare(city, masks, Vector2(-8.35, -7.0) + outward * (0.95 + clearance))
		_compare(city, masks, Vector2(-9.25 - clearance, -8.55))
		_compare(city, masks, Vector2(-9.25, -9.45) + Vector2(-1, -1).normalized() * clearance)
		_compare(city, masks, Vector2(State.river_x(2.8) + State.RIVER_HALF_WIDTH + clearance, 2.8))
	_check(city.snapshot() == before, "visual queries preserve authored state")
	var mask := Mask.new()
	mask.setup(city, Vector2i(-2, -2))
	var start := Time.get_ticks_usec()
	for z in range(31):
		for x in range(31):
			mask.continuous_edge(Vector2(-16, -16) + Vector2(x + 0.5, z + 0.5) * 0.26)
	var elapsed := float(Time.get_ticks_usec() - start) / 1000.0
	if failures.is_empty():
		print("CITY_CREATION_GRASS_EDGE PASS: %d brute-force distance/direction comparisons; 961 local edge queries %.3f ms" % [checked, elapsed])
		quit(0)
	else:
		for failure in failures:
			push_error(failure)
		quit(1)

func _compare(city: RefCounted, masks: Dictionary, at: Vector2) -> void:
	var block := Vector2i(floori(at.x / 8.0), floori(at.y / 8.0))
	if not masks.has(block):
		var mask := Mask.new()
		mask.setup(city, block)
		masks[block] = mask
	var actual: Dictionary = masks[block].continuous_edge(at)
	var expected := _oracle(city, at)
	var direction_matches := false
	for direction: Vector2 in expected.directions:
		if actual.push.distance_to(direction) <= 0.00005:
			direction_matches = true
	if absf(float(actual.clearance) - float(expected.clearance)) > 0.000003:
		_check(false, "distance at %s: %.8f != %.8f" % [at, actual.clearance, expected.clearance])
	# Interior medial axes have more than one equally short escape direction;
	# no grass is emitted there. Check unit length there and compare the unique
	# direction throughout the exterior band where blades actually use it.
	elif actual.clearance > 0.000005 and actual.clearance < 0.649995 and not direction_matches:
		_check(false, "outward direction at %s: %s != %s" % [at, actual.push, expected.push])
	elif actual.clearance < 0.649995 and absf(actual.push.length() - 1.0) > 0.000005:
		_check(false, "non-unit obstacle push at %s" % at)
	checked += 1

func _oracle(city: RefCounted, at: Vector2) -> Dictionary:
	var result := {"clearance": 0.65, "push": Vector2.ZERO, "directions": [Vector2.ZERO]}
	var offset := at.x - State.river_x(at.y)
	_take(result, absf(offset) - State.RIVER_HALF_WIDTH, Vector2.LEFT if offset < 0 else Vector2.RIGHT)
	for house: Dictionary in city.houses:
		for cell: Dictionary in house.cells:
			if int(cell.level) != 0:
				continue
			var center := Vector2(float(house.origin[0]), float(house.origin[1])) + Vector2(cell.x, cell.z) * State.CELL_UNIT
			var rect := Rect2(center - Vector2.ONE * 0.9, Vector2.ONE * 1.8)
			var clamped := Vector2(clampf(at.x, rect.position.x, rect.end.x), clampf(at.y, rect.position.y, rect.end.y))
			var delta := at - clamped
			if delta.length_squared() > 0:
				_take(result, delta.length(), delta.normalized())
			else:
				# Match the deterministic tie convention at a rectangle centre.
				var dx := minf(at.x - rect.position.x, rect.end.x - at.x)
				var dz := minf(at.y - rect.position.y, rect.end.y - at.y)
				var direction := Vector2.ZERO
				if dx <= dz:
					direction = Vector2.LEFT if at.x < center.x else Vector2.RIGHT
				else:
					direction = Vector2.UP if at.y < center.y else Vector2.DOWN
				_take(result, -minf(dx, dz), direction)
			if cell.kind != "room":
				continue
			var occupied := false
			for neighbor: Dictionary in house.cells:
				if neighbor.level == 0 and neighbor.x == cell.x and neighbor.z == cell.z + 1:
					occupied = true
			if not occupied:
				_circle(result, at, center + Vector2(0, 1.55), 0.95)
	for road: Dictionary in city.roads:
		for index in range(1, road.points.size()):
			_segment(result, at, road.points[index - 1], road.points[index], float(road.width) * 0.5 + 0.45)
	for water: Dictionary in city.waters:
		for index in range(maxi(1, water.points.size() - 1)):
			_segment(result, at, water.points[index], water.points[mini(index + 1, water.points.size() - 1)], float(water.width) * 0.5)
	return result

func _segment(result: Dictionary, at: Vector2, row_a: Array, row_b: Array, radius: float) -> void:
	var a := Vector2(float(row_a[0]), float(row_a[1]))
	var b := Vector2(float(row_b[0]), float(row_b[1]))
	var nearest := a
	if a.distance_squared_to(b) > 0.000001:
		nearest = Geometry2D.get_closest_point_to_segment(at, a, b)
	var delta := at - nearest
	var direction := delta.normalized()
	if delta.length_squared() <= 0.000001:
		direction = Vector2(-(b - a).y, (b - a).x).normalized() if a.distance_squared_to(b) > 0.000001 else Vector2.RIGHT
	_take(result, delta.length() - radius, direction)

func _circle(result: Dictionary, at: Vector2, center: Vector2, radius: float) -> void:
	var delta := at - center
	_take(result, delta.length() - radius, delta.normalized() if delta.length_squared() > 0.000001 else Vector2.RIGHT)

func _take(result: Dictionary, distance: float, direction: Vector2) -> void:
	if distance < float(result.clearance) - 0.000003:
		result.clearance = distance
		result.push = direction
		result.directions = [direction]
	elif absf(distance - float(result.clearance)) <= 0.000003:
		result.clearance = minf(distance, float(result.clearance))
		result.directions.append(direction)

func _check(condition: bool, message: String) -> void:
	if not condition and failures.size() < 16:
		failures.append(message)
