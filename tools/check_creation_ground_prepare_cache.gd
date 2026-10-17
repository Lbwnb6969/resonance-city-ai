extends SceneTree
## Same-revision ground preparation and full old/new road profile parity.
const State = preload("res://scripts/world/city_creation_state.gd")
const RoadHeights = preload("res://scripts/world/city_creation_road_heights.gd")
const ROAD_PATH := "res://scripts/world/city_creation_road_heights.gd"
var failures: Array[String] = []
var checks := 0
var compared_roads := 0

func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks += 1
	if not ok:
		failures.append(label)
		push_error(label)

func _old_script() -> GDScript:
	# Run the entire previous profile pipeline, replacing only the optimized
	# sample-independent loop with its original per-sample pair scan.
	var source := FileAccess.get_file_as_string(ROAD_PATH)
	var optimized := "\t\tfor interval: Dictionary in flat_intervals:\n\t\t\tif float(sample.distance)>=float(interval.low) and float(sample.distance)<=float(interval.high): weight=1.0;target=float(interval.y)"
	var original := "\t\tfor first: Dictionary in anchors:\n\t\t\tfor second: Dictionary in anchors:\n\t\t\t\tif first.house_id!=second.house_id or first.y!=second.y: continue\n\t\t\t\tvar low := minf(float(first.distance),float(second.distance))\n\t\t\t\tvar high := maxf(float(first.distance),float(second.distance))\n\t\t\t\tif high-low>4.0: continue\n\t\t\t\tif float(sample.distance)>=low and float(sample.distance)<=high: weight=1.0;target=float(first.y)"
	_check(source.contains(optimized),"old profile oracle replaces the actual optimized loop")
	source=source.replace("\tvar flat_intervals := _flat_anchor_intervals(anchors)\n","").replace(optimized,original)
	var script := GDScript.new()
	script.source_code=source
	_check(script.reload()==OK,"complete old road profile algorithm compiles")
	return script

func _full_profiles(city: RefCounted,old_script: GDScript,label: String) -> void:
	var current := RoadHeights.new()
	var previous: RefCounted = old_script.new()
	current.prepare(city)
	previous.prepare(city)
	for id: String in current.profiles:
		compared_roads += 1
		_check(current.profiles[id]==previous.profiles.get(id,{}),label+" complete samples/treads/stepping/signature parity: "+id)

func _old_flat(anchors: Array,arc: float) -> float:
	var result := -99.0
	for first: Dictionary in anchors:
		for second: Dictionary in anchors:
			if first.house_id!=second.house_id or first.y!=second.y: continue
			var low := minf(float(first.distance),float(second.distance))
			var high := maxf(float(first.distance),float(second.distance))
			if high-low>4.0: continue
			if arc>=low and arc<=high: result=float(first.y)
	return result

func _interval_order() -> void:
	var anchors: Array = [
		{"house_id":"a","distance":0.0,"y":1.0},
		{"house_id":"b","distance":1.0,"y":2.0},
		{"house_id":"a","distance":3.0,"y":1.0},
		{"house_id":"b","distance":4.0,"y":2.0},
		{"house_id":"a","distance":2.0,"y":3.0},
		{"house_id":"a","distance":8.0,"y":1.0}]
	var heights := RoadHeights.new()
	for order in range(2):
		var intervals: Array[Dictionary] = heights._flat_anchor_intervals(anchors)
		var matched := true
		for step in range(-1,82):
			var arc := float(step)*0.1
			var actual := -99.0
			for interval: Dictionary in intervals:
				if arc>=float(interval.low) and arc<=float(interval.high): actual=float(interval.y)
			matched=matched and actual==_old_flat(anchors,arc)
		_check(matched,"overlapping households, levels, self-pairs and >4m gaps preserve original override order "+str(order))
		anchors.reverse()

func _run() -> void:
	var previous := _old_script()
	if not failures.is_empty(): quit(1);return
	_interval_order()
	for sample: String in ["经营河湾样例","地貌河湾样例"]:
		var city := State.new()
		var source: Dictionary = JSON.parse_string(FileAccess.get_file_as_string("res://数据/"+sample+".json"))
		_check(bool(city.restore(source).ok),sample+" restores")
		city.prepare_ground_height()
		_full_profiles(city,previous,sample)
		var before_stats: Dictionary = city._ground_terrain.stats.duplicate()
		var before_generation: int = city._ground_terrain.generation
		var unchanged := true
		for repeat in range(5): unchanged=not city.prepare_ground_height() and unchanged
		_check(unchanged and city._ground_terrain.stats==before_stats and city._ground_terrain.generation==before_generation,"same-revision layers reuse ground field without touching stats: "+sample)
		var brush: Array[Vector2] = [Vector2(-7,-5)]
		_check(bool(city.add_terrain_stroke(brush,"raise",2.0,0.3).ok),"terrain transaction increments revision: "+sample)
		city.prepare_ground_height()
		_check(city._ground_revision==city.revision and city._ground_terrain.generation>before_generation,"new edit invalidates prepared revision: "+sample)
		_full_profiles(city,previous,sample+" edited")
		var edited: PackedFloat32Array = city._ground_terrain.vertices.duplicate()
		city.undo();city.prepare_ground_height()
		_check(city._ground_revision==city.revision and city._ground_terrain.vertices!=edited,"undo invalidates prepared field: "+sample)
		city.redo();city.prepare_ground_height()
		_check(city._ground_terrain.vertices==edited,"redo reconstructs exact prepared field: "+sample)
		var snapshot: Dictionary = city.snapshot()
		_check(bool(city.restore(snapshot).ok) and city._ground_revision==-1,"restore invalidates even an equal saved revision: "+sample)
		city.prepare_ground_height()
		_check(city._ground_terrain.vertices==edited,"same-revision restore reconstructs exact terrain: "+sample)
	print("GROUND_PREPARE_CACHE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"compared_roads":compared_roads,"failures":failures}))
	quit(0 if failures.is_empty() else 1)
