extends SceneTree
const Junctions = preload("res://scripts/world/city_creation_junctions.gd")
const State = preload("res://scripts/world/city_creation_state.gd")
var checks := 0
var failures: Array[String]=[]

class City:
	extends RefCounted
	const WORLD_RECT := Rect2(-18,-15,35,30)
	var roads: Array[Dictionary]=[]
	var houses: Array[Dictionary]=[]
	var waters: Array[Dictionary]=[]
	var entrances: Array[Dictionary]=[]
	func house_entrances(_id: String) -> Array[Dictionary]: return entrances
	func water_clearance(p: Vector2) -> float:
		var result:=absf(p.x-12.0)-2.0
		for water: Dictionary in waters:
			var first:=Vector2(float(water.points[0][0]),float(water.points[0][1]))
			var distance:=p.distance_to(first)
			for index in range(1,water.points.size()):
				var a:=Vector2(float(water.points[index-1][0]),float(water.points[index-1][1]))
				var b:=Vector2(float(water.points[index][0]),float(water.points[index][1]))
				distance=minf(distance,p.distance_to(Geometry2D.get_closest_point_to_segment(p,a,b)))
			result=minf(result,distance-float(water.width)*0.5)
		return result

func _initialize() -> void:
	var city:=City.new()
	city.roads=[_road("r1",[Vector2(-3,0),Vector2(3,0)]),_road("r2",[Vector2(0,-3),Vector2(0,3)])]
	var context:=Junctions.new()
	var bend:=City.new()
	bend.roads=[_road("r1",[Vector2(0,-3),Vector2(0,0),Vector2(3,0)]),_road("r2",[Vector2(-3,-.8),Vector2(3,-.8)])]
	var bend_context:=Junctions.new();bend_context.prepare(bend)
	_check(bend_context.at(Vector2(-.47,.47))=="r1","tight curved mouth joins its round core without an exposed grass slit")
	var original: Array=city.roads.duplicate(true)
	context.prepare(city)
	_check(city.roads==original,"derivation preserves authored IDs, points and widths")
	_check(not context.additions("r1").is_empty() and not context.additions("r2").is_empty(),"true X crossing gives both real local mouths")
	_check(context.at(Vector2(0.7,0.7))=="r1","extra footprint query uses stable lowest road ID")
	_check(context.at(Vector2(2,0.7))=="","profile returns to original road outside 1.4m reach")
	_check(context.stats.junctions==2,"X is one deduplicated junction per road")
	_check(context.additions("r1").size()<=4 and context.additions("r2").size()<=4,"contiguous sample bands merge into at most four positive pieces per X road")
	var signature_a: Variant=context.signature("r1")
	var signature_b: Variant=context.signature("r2")
	_verify_coverage(context,city)
	# Reversal and inserted redundant points cannot seed additional flares.
	city.roads=[_road("r2",[Vector2(0,3),Vector2(0,1),Vector2(0,0),Vector2(0,-3)]),_road("r1",[Vector2(3,0),Vector2(1.2,0),Vector2(-1,0),Vector2(-3,0)])]
	context.prepare(city)
	_check(context.signature("r1")==signature_a and context.signature("r2")==signature_b,"collinear point density, reversal and road order preserve exact derived coverage")
	_check(context.stats.regenerated==0,"equivalent geometry hits immutable local caches")
	var worker:=Junctions.new()
	worker.copy_cache_from(context)
	worker.prepare(city)
	_check(not worker.stats.has("graph_ms") and worker.stats.regenerated==0 and worker.signature("r1")==signature_a and worker.additions("r2")==context.additions("r2") and worker.at(Vector2(.7,.7))==context.at(Vector2(.7,.7)),"background context reuses the complete prepared mouths and query bins without rebuilding their graph")
	# True T and a width-connected terminal use the unchanged Network rule.
	city.roads=[_road("r1",[Vector2(-3,0),Vector2(3,0)]),_road("r2",[Vector2(0,0),Vector2(0,3)])]
	context.prepare(city)
	_check(context.stats.junctions==2 and not context.additions("r2").is_empty(),"true T terminal creates one local mouth")
	city.roads[1]=_road("r2",[Vector2(0,0.4),Vector2(0,3)])
	context.prepare(city)
	_check(context.stats.junctions==2,"existing endpoint half-width connector can receive a mouth")
	city.roads[1]=_road("r2",[Vector2(0,0.7),Vector2(0,3)])
	context.prepare(city)
	_check(context.additions("r1").is_empty() and context.additions("r2").is_empty(),"visually nearby but graph-disconnected T does not invent a junction")
	city.roads=[_road("r1",[Vector2(-3,0),Vector2(3,0)]),_road("r2",[Vector2(-3,0.45),Vector2(3,0.45)])]
	context.prepare(city)
	_check(context.additions("r1").is_empty(),"parallel overlap does not widen into a plaza")
	city.roads[1]=_road("r2",[Vector2(-3,-0.1),Vector2(3,0.1)])
	context.prepare(city)
	_check(context.additions("r1").is_empty(),"nearly parallel true crossing does not produce a noisy flare")
	# An unrelated parallel island road is close enough for an unconstrained
	# .38m widening to touch, yet its endpoints are remote from the X network.
	city.roads=[_road("r1",[Vector2(-3,0),Vector2(3,0)]),_road("r2",[Vector2(0,-3),Vector2(0,3)]),_road("r9",[Vector2(-3,1.35),Vector2(-0.8,1.35)])]
	context.prepare(city)
	for id: String in ["r1","r2"]:
		for polygon: PackedVector2Array in context.additions(id):
			for point: Vector2 in polygon:
				var nearest:=Geometry2D.get_closest_point_to_segment(point,Vector2(-3,1.35),Vector2(-0.8,1.35))
				_check(point.distance_to(nearest)>=0.674,"extra keeps visible 5cm gap from disconnected capsule")
	_check(context.additions("r9").is_empty(),"isolated nearby road receives no false joint")
	# A building can claim optional extra coverage and make it retreat without
	# changing or hiding the road's original physical capsule.
	city.roads=[_road("r1",[Vector2(-3,0),Vector2(3,0)]),_road("r2",[Vector2(0,-3),Vector2(0,3)])]
	city.houses=[{"id":"h1","origin":[1.68,1.68],"cells":[{"id":"c1","x":0,"z":0,"level":0,"kind":"room"}]}]
	city.entrances=[{"clearance_at":Vector2(0.7,-0.7)}]
	context.prepare(city)
	for id: String in ["r1","r2"]:
		for polygon: PackedVector2Array in context.additions(id):
			for point: Vector2 in polygon:
				_check(not Rect2(0.7601,0.7601,1.8398,1.8398).has_point(point),"extra never enters actual ground house shell")
				_check(not Rect2(0.4201,-0.9799,0.5598,0.5598).has_point(point),"extra preserves protected actual door approach")
	_check(city.roads[0].points==[[-3.0,0.0],[3.0,0.0]],"obstacles retreat the optional flare, never alter core")
	city.houses.clear()
	city.entrances.clear()
	city.waters=[{"id":"w1","points":[[1.05,1.05]],"width":0.5}]
	context.prepare(city)
	_verify_coverage(context,city)
	city.waters.clear()
	context.prepare(city)
	_check(context.signature("r1")==signature_a,"removing obstruction restores deterministic original mouth")
	# Local group caches survive unrelated distant edits.
	city.roads.append(_road("r3",[Vector2(-14,-10),Vector2(-10,-10)]))
	context.prepare(city)
	_check(context.signature("r1")==signature_a and context.stats.cache_hits>=2,"remote road preserves existing mouth cache")
	var held: Variant=worker.signature("r1")
	city.roads.remove_at(1)
	context.prepare(city)
	_check(context.additions("r1").is_empty() and context.at(Vector2(0.7,0.7))=="","deleting branch removes the mouth and query bins")
	_check(worker.signature("r1")==held and not worker.additions("r1").is_empty(),"later publication cannot mutate independent worker snapshot")
	# Many far segments exercise candidate buckets instead of all-pair scans.
	city.roads.clear()
	for row in range(12):
		for col in range(12):
			var point:=Vector2(-16+col*2.6,-13+row*2.2)
			city.roads.append(_road("r%d"%(row*12+col+1),[point,point+Vector2(0.25,0)]))
	context.prepare(city)
	_check(context.stats.pairs<500,"spatial candidate bins avoid 10296 global segment pairs")
	# Loop islands are deliberately left exact, rather than widening across holes.
	city.roads=[_road("r1",[Vector2(-2,-2),Vector2(2,-2),Vector2(2,2),Vector2(-2,2),Vector2(-2,-2)]),_road("r2",[Vector2(-3,0),Vector2(-2,0)])]
	context.prepare(city)
	_check(context.additions("r1").is_empty(),"compound loop outlines retain original island geometry")
	var ring: Array[PackedVector2Array]=[_rectangle(Rect2(0,0,3,1)),_rectangle(Rect2(0,1,1,2)),_rectangle(Rect2(2,1,1,2)),_rectangle(Rect2(1,2,1,1))]
	var ring_merged: Array[PackedVector2Array]=context._merge_simple(ring)
	_check(ring_merged.size()>=2,"a union with a real hole retains positive pieces instead of dropping its hole contour")
	_check(not _covered(ring_merged,Vector2(1.5,1.5)),"ring centre stays a real uncovered island")
	for y in range(31):
		for x in range(31):
			var point:=Vector2(float(x)/10.0+0.017,float(y)/10.0+0.023)
			_check(_covered(ring,point)==_covered(ring_merged,point),"positive merge preserves complete ring union coverage")
	var overlap: Array[PackedVector2Array]=[_rectangle(Rect2(0,0,2,2)),_rectangle(Rect2(1,0,2,2))]
	var overlap_merged: Array[PackedVector2Array]=context._merge_simple(overlap)
	_check(overlap_merged.size()==1 and is_equal_approx(_area(overlap_merged[0]),6.0),"overlap uses positive union, does not XOR out its shared area")
	_check(_covered(overlap_merged,Vector2(1.5,1)),"shared interior remains covered after merging")
	_preview_cases()
	print("JUNCTIONS_RESULT ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}))
	quit(0 if failures.is_empty() else 1)

func _road(id: String,points: Array) -> Dictionary:
	var encoded: Array=[]
	for point: Vector2 in points: encoded.append([point.x,point.y])
	return {"id":id,"points":encoded,"width":1.25,"bridge":false}

func _verify_coverage(context: RefCounted,city: RefCounted) -> void:
	for road: Dictionary in city.roads:
		for polygon: PackedVector2Array in context.additions(str(road.id)):
			var indices:=Geometry2D.triangulate_polygon(polygon)
			_check(not indices.is_empty(),"optional extra is a triangulable simple polygon")
			for triangle in range(0,indices.size(),3):
				var a: Vector2=polygon[indices[triangle]]
				var b: Vector2=polygon[indices[triangle+1]]
				var c: Vector2=polygon[indices[triangle+2]]
				for u in range(5):
					for v in range(5-u):
						var p:=a+(b-a)*(float(u)/4.0)+(c-a)*(float(v)/4.0)
						_check(city.WORLD_RECT.has_point(p),"entire extra stays inside real world")
						_check(float(city.water_clearance(p))>=-0.0001,"extra samples do not enter actual water")
						var nearest:=INF
						for index in range(1,road.points.size()):
							var start:=Vector2(float(road.points[index-1][0]),float(road.points[index-1][1]))
							var finish:=Vector2(float(road.points[index][0]),float(road.points[index][1]))
							nearest=minf(nearest,p.distance_to(Geometry2D.get_closest_point_to_segment(p,start,finish)))
						_check(nearest>=0.624,"extra contains no authored capsule interior")
						_check(nearest<=1.006,"extra never widens by more than design 38cm")

func _check(condition: bool,label: String) -> void:
	checks+=1
	if not condition: failures.append(label)

func _rectangle(rect: Rect2) -> PackedVector2Array:
	return PackedVector2Array([rect.position,Vector2(rect.end.x,rect.position.y),rect.end,Vector2(rect.position.x,rect.end.y)])

func _covered(polygons: Array[PackedVector2Array],point: Vector2) -> bool:
	for polygon: PackedVector2Array in polygons:
		if Geometry2D.is_point_in_polygon(point,polygon): return true
	return false

func _area(polygon: PackedVector2Array) -> float:
	var sum:=0.0
	for index in range(polygon.size()): sum+=polygon[index].cross(polygon[(index+1)%polygon.size()])
	return absf(sum)*0.5

func _preview_cases() -> void:
	var city:=State.new()
	city.roads=[_road("r1",[Vector2(-11,-5.4),Vector2(-5,-5.4)])]
	city.houses=[{"id":"h1","origin":[-8.0,-7.0],"cells":[{"id":"c1","x":0,"z":0,"level":0,"kind":"room"}]}]
	var porch: Array[Vector2]=[Vector2(-8,-6.08),Vector2(-8,-4)]
	_preview_matches(city,porch,"porch terminal")
	var through: Array[Vector2]=[Vector2(-8,-10),Vector2(-8,-4)]
	_preview_matches(city,through,"real through-room passage")
	# Existing far houses use the unchanged source entrances, rather than
	# re-running their full passage derivation for every preview pointer tick.
	city.houses.append({"id":"h2","origin":[-14.0,9.0],"cells":[{"id":"c2","x":0,"z":0,"level":0,"kind":"room"}]})
	_preview_matches(city,porch,"near portal with remote cached house")
	city.houses.clear()
	city.roads=[_road("r1",[Vector2(-11,-7),Vector2(-5,-7)]),_road("r9",[Vector2(-11,-5.65),Vector2(-8.8,-5.65)])]
	_preview_matches(city,through,"foreign disconnected road")
	city.waters=[{"id":"w1","kind":"pond","points":[[-7.1,-6.1]],"width":0.5,"seed":1}]
	_preview_matches(city,through,"local water restriction with foreign road")
	# Old roads already have their own mouths; preview must never recompute or
	# publish those outputs while preparing one new road's extra coverage.
	city.waters.clear()
	city.roads.append(_road("r2",[Vector2(-10,-10),Vector2(-10,-4)]))
	_preview_matches(city,through,"existing populated mouth cache")

func _preview_matches(city: RefCounted,points: Array[Vector2],label: String) -> void:
	var source: RefCounted=city.road_junctions()
	var source_polygons:= {}
	var source_cache: Dictionary=source._cache.duplicate(true)
	for road: Dictionary in city.roads: source_polygons[str(road.id)]=source.additions(str(road.id))
	var preview:=Junctions.new()
	preview.copy_cache_from(source)
	var expected_city:=State.new()
	expected_city.houses.assign(city.houses)
	expected_city.waters.assign(city.waters)
	expected_city.roads.assign(city.roads)
	var encoded: Array=[]
	for point: Vector2 in points: encoded.append([point.x,point.y])
	expected_city.roads.append({"id":"draft","points":encoded,"width":1.25})
	var full:=Junctions.new()
	full.copy_cache_from(source)
	full.prepare(expected_city)
	var before_city: Dictionary=city.snapshot()
	var actual: Array[PackedVector2Array]=preview.preview_additions(city,points,1.25)
	var expected: Array[PackedVector2Array]=full.additions("draft")
	_check(actual==expected,label+": targeted preview equals full draft polygon arrays and ordering")
	_check(not expected.is_empty(),label+": oracle has actual visible mouth coverage")
	_check(preview.stats.regenerated<=1,label+": only new road can rebuild polygons")
	_check(city.snapshot()==before_city,label+": targeted preview preserves authored state")
	_check(source._cache==source_cache,label+": preview cannot replace or mutate live mouth cache")
	for road: Dictionary in city.roads:
		_check(source.additions(str(road.id))==source_polygons[str(road.id)],label+": source old road polygons remain independently published")
		_check(preview.additions(str(road.id)).is_empty(),label+": preview publishes no old-road geometry")
	var reversed: Array[Vector2]=points.duplicate()
	reversed.reverse()
	_check(preview.preview_additions(city,reversed,1.25)==expected,label+": repeated reversed preview remains exact without copying live cache again")
	if label=="porch terminal":
		var active:=false
		for entrance: Dictionary in expected_city.house_entrances("h1"): active=active or (entrance.active and str(entrance.road_id)=="draft")
		_check(active,label+": fixture genuinely changes real porch entrance")
	if label=="real through-room passage":
		var active:=false
		for entrance: Dictionary in expected_city.house_entrances("h1"): active=active or bool(entrance.get("passage",false))
		_check(active,label+": fixture genuinely creates real arch portals")
