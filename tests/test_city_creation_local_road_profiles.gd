extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Roads=preload("res://scripts/world/city_creation_road_heights.gd")
const Terrain=preload("res://scripts/world/city_creation_terrain.gd")
const EraFixture=preload("res://tools/fixtures/city_creation_era_street_fixture.gd")
var checks:=0
var failures:Array[String]=[]
var samples:Array=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _compare(city:RefCounted,full:RefCounted,label:String)->void:
	# _build is unchanged; discard all reference caches so every road is
	# recomputed. This detects omissions in the incremental invalidation key.
	full._road_heights=Roads.new();full._ground_revision=-1
	city.prepare_ground_height();full.prepare_ground_height()
	_check(city._road_heights.profiles==full._road_heights.profiles and city._road_heights._bins==full._road_heights._bins,"all exact profiles/treads/bridges/query bins match full recomputation: "+label)
	samples.append({"label":label,"stats":city._road_heights.stats.duplicate()})
func _run()->void:
	var city:=State.new();var full:=State.new();var source:Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/经营河湾样例.json"))
	_check(city.restore(source).ok and full.restore(source).ok,"authored twenty-eight-house town restores twice")
	_compare(city,full,"original city")
	var source_bytes:=var_to_bytes(city._road_heights.profiles);var worker_city:=State.new();worker_city.restore(source)
	worker_city._ground_terrain=Terrain.new();worker_city._ground_terrain.copy_cache_from(city._ground_terrain)
	worker_city._road_heights=Roads.new();worker_city._road_heights.copy_cache_from(city._road_heights)
	var near:Array[Vector2]=[Vector2(-12,-10.45)]
	worker_city.add_terrain_stroke(near,"raise",2,1,2);worker_city.prepare_ground_height()
	_check(var_to_bytes(city._road_heights.profiles)==source_bytes,"preparing a private worker leaves every shared published road record unchanged")
	_check(worker_city._road_heights.stats.reused>0 and worker_city._road_heights.stats.rebuilt>0,"real local sculpt reuses distant road profiles and rebuilds affected roads")
	for current:RefCounted in [city,full]:_check(current.add_terrain_stroke(near,"raise",2,1,2).ok,"actual near-road sculpt")
	_compare(city,full,"raised junction")
	for current:RefCounted in [city,full]:_check(current.undo().ok,"actual sculpt undo")
	_compare(city,full,"undo")
	for current:RefCounted in [city,full]:_check(current.redo().ok,"actual sculpt redo")
	_compare(city,full,"redo")
	var lower:Array[Vector2]=[Vector2(-6.75,-4)]
	for current:RefCounted in [city,full]:_check(current.add_terrain_stroke(lower,"lower",3.,.8,2).ok,"actual second crossing sculpt")
	_compare(city,full,"lowered second crossing")
	var pond:Array[Vector2]=[Vector2(27,29)]
	for current:RefCounted in [city,full]:_check(current.add_water(pond,3.,"pond").ok,"actual new water record")
	_compare(city,full,"water invalidation")
	var first:Array[Vector2]=[Vector2(-16.200000762939453,-10.449999809265137),Vector2(-3,-10.449999809265137)]
	for current:RefCounted in [city,full]:_check(current.add_road(first,"cobble").ok,"actual in-place street upgrade")
	_compare(city,full,"upgraded street")
	for current:RefCounted in [city,full]:
		var cross_x:Array[Vector2]=[Vector2(-32,25),Vector2(-18,25)];var cross_z:Array[Vector2]=[Vector2(-25,18),Vector2(-25,33)]
		_check(current.add_road(cross_x).ok and current.add_road(cross_z).ok,"actual open-space crossing streets")
		_check(current.add_roundabout(Vector2(-25,25)).ok,"actual shared roundabout")
	_compare(city,full,"roundabout")
	var circle:Array[Vector2]=[Vector2(-25,25)]
	for current:RefCounted in [city,full]:_check(current.add_terrain_stroke(circle,"raise",2.,1.,2).ok,"actual roundabout terrain sculpt")
	_compare(city,full,"raised roundabout centre")
	var fixture:=EraFixture.build();city=fixture.city;full=State.new();_check(full.restore(city.snapshot()).ok,"actual four-era street fixture restores")
	_compare(city,full,"modern arched bridge")
	for era:String in ["clockwork","renaissance","modern_eco"]:
		for current:RefCounted in [city,full]:_check(current.set_district_era(fixture.bridge_district,era).ok,"actual bridge district era edit")
		_compare(city,full,"bridge era "+era)
	print("LOCAL_ROAD_PROFILES ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures,"samples":samples}));quit(0 if failures.is_empty() else 1)
