extends SceneTree
## Product consumers of the same real optional junction coverage. No GPU/window
## is needed: verifies records, dirty-tile removal and full-radius stone masking.
const State=preload("res://scripts/world/city_creation_state.gd")
const Field=preload("res://scripts/visual/city_creation_contact_field.gd")
const Pebbles=preload("res://scripts/visual/city_creation_path_pebbles.gd")
var checks:=0
var failures: Array[String]=[]

func _initialize() -> void:
	var city:=State.new()
	city.roads=[{"id":"r1","points":[[-11.0,-7.0],[-5.0,-7.0]],"width":1.25,"bridge":false},{"id":"r2","points":[[-8.0,-10.0],[-8.0,-4.0]],"width":1.25,"bridge":false}]
	var field:=Field.new()
	field.prepare(city)
	var original_pixels: PackedByteArray=field.pixels.duplicate()
	var extras:=0
	for key: String in field.records:
		if key.begins_with("j/"):
			extras+=1
			_check(field.records[key].size()==2 and field.records[key][0]==1 and field.records[key][1] is PackedVector2Array,"junction record has stable channel/polygon protocol")
	_check(extras>0 and extras<=8,"merged real mouths enter stable per-road polygon records")
	field._rebuild_bins()
	var inside:=Vector2(-7.3,-6.3)
	_check(is_zero_approx(field.exact_at(inside).y),"road distance is zero inside true extra, outside both core capsules")
	_check(field.exact_at(inside).x==1.0 and field.exact_at(inside).z==1.0,"junction affects road G only")
	var extra_polygons: Array[PackedVector2Array]=[]
	var junctions: RefCounted=city.road_junctions()
	for road: Dictionary in city.roads: extra_polygons.append_array(junctions.additions(str(road.id)))
	for y in range(21):
		for x in range(21):
			var point:=Vector2(-9.5+float(x)*0.15,-8.5+float(y)*0.15)
			var expected:=minf(maxf(absf(point.x+8.0)-0.625,0),maxf(absf(point.y+7.0)-0.625,0))
			for polygon: PackedVector2Array in extra_polygons:
				if Geometry2D.is_point_in_polygon(point,polygon): expected=0.0
				else:
					for edge in range(polygon.size()): expected=minf(expected,point.distance_to(Geometry2D.get_closest_point_to_segment(point,polygon[edge],polygon[(edge+1)%polygon.size()])))
			_check(absf(field.exact_at(point).y*Field.RANGE-minf(expected,Field.RANGE))<0.00001,"exact road channel matches full core-plus-positive-extra union")
	var pebbles:=Pebbles.new()
	pebbles.prepare(city)
	var isolated_record: Dictionary={"at":inside,"radius":0.025}
	# Isolate the new prepared polygon consumer from existing capsule/door masks.
	# The candidate lies in a genuine r1/r2 extra, not inside either core.
	pebbles.segments.clear()
	_check(not pebbles._clear(isolated_record,"r99"),"stone centre in another road's real extra is excluded")
	var edge_record: Dictionary={"at":Vector2(-7.2,-6.2),"radius":0.12}
	_check(not pebbles._clear(edge_record,"r99"),"full-radius pebble cannot overlap another road extra at boundary")
	var before_bins: Dictionary=pebbles._junction_bins.duplicate(true)
	pebbles.prepare(city)
	_check(pebbles._junction_bins==before_bins,"unchanged prepare preserves ready junction masks")
	city.roads.remove_at(1)
	var worker:=Field.new()
	worker.copy_cpu_from(field)
	worker.prepare(city)
	_check(field.pixels==original_pixels,"worker junction removal never mutates visible field byte array")
	_check(worker.stats.texels>0 and worker.stats.texels<8192,"removed local branch dirties bounded old and new contact tiles")
	for key: String in worker.records: _check(not key.begins_with("j/"),"removed connection leaves no ghost junction record")
	worker._rebuild_bins()
	_check(absf(worker.exact_at(inside).y*Field.RANGE-0.075)<0.00001,"removed mouth restores exact original straight capsule distance")
	var fresh:=Field.new()
	fresh.prepare(city)
	_check(worker.pixels==fresh.pixels,"incremental removal equals independent full field rebuild byte-for-byte")
	pebbles.prepare(city)
	pebbles.segments.clear()
	_check(pebbles._clear(isolated_record,"r99"),"removed branch clears prepared pebble extra masks")
	print("JUNCTION_CONTACT_RESULT ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}))
	quit(0 if failures.is_empty() else 1)

func _check(condition: bool,label: String) -> void:
	checks+=1
	if not condition: failures.append(label)
