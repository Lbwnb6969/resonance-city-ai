extends SceneTree

const State := preload("res://scripts/world/city_creation_state.gd")
const Intent := preload("res://scripts/world/city_creation_road_intent.gd")
var failures: Array[String] = []
var checks := 0


func _initialize() -> void:
	_test_joints()
	_test_banks()
	_test_rejections()
	if failures.is_empty():
		print("CITY_CREATION_ROAD_INTENT PASS: %d checks; nearest joints, original bridge intent, atomic validation and idempotence" % checks)
		quit(0)
	else:
		for failure in failures: push_error(failure)
		quit(1)


func _test_joints() -> void:
	var city := _empty_city()
	city.roads = [_road("r1", [Vector2(-12, 0), Vector2(-6, 0)])]
	var points: Array[Vector2] = [Vector2(-10, -2), Vector2(-9, -1), Vector2(-8, 0.6)]
	var before := city.snapshot()
	var source := points.duplicate()
	var joint := Intent.resolve(city, points)
	_check(joint.snapped_end and not joint.snapped_start, "nearby end joins true center segment")
	_check(joint.points[-1] == Vector2(-8, 0) and joint.points[1] == points[1], "joint changes only endpoint, not curve samples")
	_check(points == source and city.snapshot() == before, "resolve does not mutate caller array, city, history or identities")
	_check(Intent.resolve(city, joint.points).points == joint.points, "centerline joint is idempotent")
	var exact: Array[Vector2] = [Vector2(-10, -2), Vector2(-8.123456, 0)]
	_check(Intent.resolve(city, exact).points == exact, "existing centerline retains original float32 endpoint")
	var distant: Array[Vector2] = [Vector2(-10, -4), Vector2(-8, -1)]
	_check(Intent.resolve(city, distant).points == distant, "outside 0.9m snap radius preserves intent")
	city.roads = [_road("r9", [Vector2(-12, 0), Vector2(-6, 0)]), _road("r2", [Vector2(-12, 1.2), Vector2(-6, 1.2)])]
	var tie: Array[Vector2] = [Vector2(-9, -3), Vector2(-8, 0.6)]
	var tied := Intent.resolve(city, tie)
	city.roads.reverse()
	_check(tied.points == Intent.resolve(city, tie).points, "equidistant road tie independent of road array order")
	_check(tied.points[-1] == Vector2(-8, 1.2), "stable road ID breaks exact-distance tie")
	city.roads = [_road("r1", [Vector2(-12, 0), Vector2(-6, 0)])]
	var short: Array[Vector2] = [Vector2(-10, 0.4), Vector2(-10, 0.2)]
	_check(not Intent.resolve(city, short).snapped_start, "soft joint cannot invert a short approach")
	var same: Array[Vector2] = [Vector2(-10, 0.4), Vector2(-10, 0.4)]
	_check(Intent.resolve(city, same).points == same, "same-point stroke is preserved for original validation")
	city.houses = [{"id": "h1", "origin": [-8.0, 0.0], "cells": [{"id": "c1", "x": 0, "z": 0, "level": 0, "kind": "room"}]}]
	city.roads = [_road("r1", [Vector2(-12, 2.1), Vector2(-6, 2.1)])]
	var door: Array[Vector2] = [Vector2(-12, 1.55), Vector2(-8, 1.55)]
	_check(not Intent.resolve(city, door).snapped_end, "original door-side endpoint is not dragged away")
	var inside: Array[Vector2] = [Vector2(-12, 0), Vector2(-8, 0)]
	_check(Intent.resolve(city, inside).points == inside, "invalid partial room crossing is not silently repaired")


func _test_banks() -> void:
	var city := _empty_city()
	var bridge: Array[Vector2] = [Vector2(0.3, 0), Vector2(5.7, 0)]
	var source := bridge.duplicate()
	var anchored := Intent.resolve(city, bridge)
	_check(anchored.anchored_start and anchored.anchored_end, "true crossing near both banks anchors both ends")
	_check(anchored.points.size() == 2 and bridge == source, "straight bridge remains two points without modifying input")
	_check(city.water_clearance(anchored.points[0]) >= 0.665 and city.water_clearance(anchored.points[-1]) >= 0.665, "anchors include complete half-road dry clearance")
	_check(city.preview_road(anchored.points).ok, "anchored bridge passes unmodified complete State validation")
	_check(Intent.resolve(city, anchored.points).points == anchored.points, "bank bisection is float32 idempotent")
	var single: Array[Vector2] = [Vector2(-2, 0), Vector2(5.7, 0)]
	var one := Intent.resolve(city, single)
	_check(not one.anchored_start and one.anchored_end and one.points[0] == single[0], "far dry bank retained while near bank extends")
	var curve: Array[Vector2] = [Vector2(0.3, 0), Vector2(2, 0.2), Vector2(4, 0.2), Vector2(5.7, 0)]
	var curved := Intent.resolve(city, curve)
	_check(curved.anchored_start and curved.anchored_end, "transverse curved crossing anchors along terminal tangents")
	_check(curved.points[1] == curve[1] and curved.points[2] == curve[2], "intermediate curve samples remain exact")
	_check(Intent.resolve(city, curved.points).points == curved.points, "curved bridge remains idempotent")
	# Editable canal and pond crossings use the same authoritative clearance,
	# rather than assuming bridges always cross the immutable river's X axis.
	city.waters = [{"id": "w1", "kind": "channel", "points": [[-12.0, 0.0], [-5.0, 0.0]], "width": 2.4, "seed": 1, "source": "player"}]
	var canal: Array[Vector2] = [Vector2(-8, -1.5), Vector2(-8, 1.5)]
	var canal_result := Intent.resolve(city, canal)
	_check(canal_result.anchored_start and canal_result.anchored_end and city.preview_road(canal_result.points).ok, "editable canal supports orthogonal bank anchors")
	var too_long: Array[Vector2] = [Vector2(-10.5, -0.8), Vector2(-8.5, 0.8)]
	_check(Intent.resolve(city, too_long).points == too_long, "dry anchor requiring more than 1.4m stays rejected")
	city.waters = [{"id": "w1", "kind": "pond", "points": [[-8.0, 0.0]], "width": 2.4, "seed": 1, "source": "player"}]
	var pond: Array[Vector2] = [Vector2(-9.5, 0), Vector2(-6.5, 0)]
	_check(Intent.resolve(city, pond).anchored_start and Intent.resolve(city, pond).anchored_end, "pond crossing uses actual capsule shore")
	city.roads = [_road("r1", [Vector2(-12, -1.5), Vector2(-5, -1.5)])]
	var combined := Intent.resolve(city, canal)
	_check(combined.points[0].y < -1.8, "bank anchor cannot be snapped back onto an insufficiently dry deck")
	_check(Intent.resolve(city, combined.points).points == combined.points, "bank and centerline assistance together remain idempotent")


func _test_rejections() -> void:
	var city := _empty_city()
	for points in [
		[Vector2(3, 0), Vector2(5.7, 0)],
		[Vector2(0.3, 0), Vector2(3, 0)],
		[Vector2(3, -2), Vector2(3, 2)],
		[Vector2(0.2, -1), Vector2(0.2, 1)],
	]:
		var stroke: Array[Vector2] = []
		stroke.assign(points)
		var resolved := Intent.resolve(city, stroke)
		_check(resolved.points == stroke and not resolved.anchored_start and not resolved.anchored_end, "water-start, half crossing, along-water or bank skim is not manufactured into a bridge")
	var edge: float=city.WORLD_RECT.position.x
	city.waters = [{"id": "w1", "kind": "pond", "points": [[edge+1.7, 0.0]], "width": 2.4, "seed": 1, "source": "player"}]
	var boundary: Array[Vector2] = [Vector2(edge+.2, 0), Vector2(edge+3.2, 0)]
	_check(Intent.resolve(city, boundary).points == boundary, "dry bank outside world fails atomically, retaining original error")
	city.waters.clear()
	city.houses = [{"id": "h1", "origin": [-0.9, 0.0], "cells": [{"id": "c1", "x": 0, "z": 0, "level": 0, "kind": "room"}]}]
	var blocked: Array[Vector2] = [Vector2(0.3, 0), Vector2(5.7, 0)]
	_check(Intent.resolve(city, blocked).anchored_start, "legitimate bank anchor may approach a real exterior door without entering its room")
	city.houses[0].origin = [-0.65, 0.0]
	_check(Intent.resolve(city, blocked).points == blocked, "bank extension cannot cut into a ground room")
	var invalid: Array[Vector2] = [Vector2(NAN, 0), Vector2(1, 0)]
	_check(not Intent.resolve(city, invalid).anchored_start, "nonfinite input stays with State validation")


func _empty_city() -> CityCreationState:
	var city := State.new()
	city.initialize()
	city.houses.clear()
	city.roads.clear()
	city.plants.clear()
	return city


func _road(id: String, points: Array[Vector2]) -> Dictionary:
	var encoded: Array = []
	for point in points: encoded.append([point.x, point.y])
	return {"id": id, "points": encoded, "width": 1.25, "bridge": false, "source": "seed"}


func _check(condition: bool, label: String) -> void:
	checks += 1
	if not condition: failures.append(label)
