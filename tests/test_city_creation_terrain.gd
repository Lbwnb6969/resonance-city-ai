extends SceneTree
## Incremental terrain must equal a fresh reconstruction of the same city.
## No duplicate terrain/noise/sampling algorithm is used as the oracle.
const State := preload("res://scripts/world/city_creation_state.gd")
var checks := 0
var failures: Array[String] = []

func _initialize() -> void:
	var city := State.new()
	city.prepare_ground_height()
	_check(_matches_fresh(city),"initial complete grid equals fresh snapshot")
	var total: int = city._ground_terrain.vertices.size()
	var result := city.add_water([Vector2(-16.3,12.8)],3.0,"pond")
	city.prepare_ground_height()
	_check(result.ok and city._ground_terrain.stats.changed_vertices<total and _matches_fresh(city),"boundary pond locally updates shore and outer hills exactly")
	result = city.add_water([Vector2(-14,-12),Vector2(0,-3),Vector2(14,12)],1.4,"pond")
	city.prepare_ground_height()
	_check(result.ok and _matches_fresh(city),"long stroke across permanent river equals complete rebuild")
	result = city.add_water([Vector2(-9,5),Vector2(-7,7)],2.6,"pond")
	city.prepare_ground_height()
	_check(result.ok and city.waters.size()==3 and _matches_fresh(city),"third water record keeps other cached areas exact")
	# Fixture-only direct edits publish a revision before explicit preparation,
	# matching State transactions and the worker's revision cache contract.
	city.waters[0].points=[[15.5,-12.0]]
	city.waters[0].width=1.2
	city.revision+=1
	city.prepare_ground_height()
	_check(_matches_fresh(city),"moving and shrinking a pond recomputes both old and new bounds")
	city.waters[1].points=[[-14.0,-10.0],[2.0,3.0],[14.0,10.0]]
	city.waters[1].width=2.8
	city.revision+=1
	city.prepare_ground_height()
	_check(_matches_fresh(city),"changing long stroke shape and width preserves complete grid equality")
	result = city.remove_water_at(Vector2(15.5,-12))
	city.prepare_ground_height()
	_check(result.ok and city.waters.size()==2 and _matches_fresh(city),"deleted moved pond restores its previous shore and hill heights")
	result = city.remove_water_at(Vector2(-14,-10))
	city.prepare_ground_height()
	_check(result.ok and city.waters.size()==1 and _matches_fresh(city),"deleted cross-river stroke restores every affected vertex")
	var worker := State.new()
	var restored := worker.restore(city.snapshot())
	worker._ground_terrain.copy_cache_from(city._ground_terrain)
	worker.prepare_ground_height()
	var worker_grid: PackedFloat32Array = worker._ground_terrain.vertices.duplicate()
	var worker_waters: Array = worker._ground_terrain._previous_waters.duplicate(true)
	var worker_generation: int = worker._ground_terrain.generation
	result = city.add_water([Vector2(-16.3,12.8)],3.0,"pond")
	city.prepare_ground_height()
	_check(restored.ok and worker._ground_terrain.vertices==worker_grid and worker._ground_terrain._previous_waters==worker_waters and worker._ground_terrain.generation==worker_generation,"source edit never mutates copied worker grid or water snapshot")
	_check(result.ok and _matches_fresh(city),"source addition after cache fork remains identical to complete rebuild")
	var source_grid: PackedFloat32Array = city._ground_terrain.vertices.duplicate()
	var source_waters: Array = city._ground_terrain._previous_waters.duplicate(true)
	worker.waters[0].width=3.8
	worker.revision+=1
	worker.prepare_ground_height()
	_check(city._ground_terrain.vertices==source_grid and city._ground_terrain._previous_waters==source_waters and _matches_fresh(worker),"independent worker water edit is exact and leaves source cache immutable")
	var generation: int = city._ground_terrain.generation
	city.revision+=1
	city.ground_height(Vector2(-8,0))
	_check(city._ground_terrain.generation==generation and city._ground_terrain.vertices==source_grid and city._ground_terrain.stats.changed_vertices==0,"dry revision reuses complete height grid without a generation")
	city.waters.clear()
	city.revision+=1
	city.prepare_ground_height()
	_check(_matches_fresh(city),"removing all remaining records restores original complete terrain")
	print("CREATION_TERRAIN_RESULT ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"stats":city._ground_terrain.stats}))
	quit(0 if failures.is_empty() else 1)

func _matches_fresh(city: RefCounted) -> bool:
	var fresh := State.new()
	var restored := fresh.restore(city.snapshot())
	if not restored.ok: return false
	fresh.prepare_ground_height()
	return city._ground_terrain.vertices==fresh._ground_terrain.vertices

func _check(ok: bool,label: String) -> void:
	checks+=1
	if not ok: failures.append(label)
