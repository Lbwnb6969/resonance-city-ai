extends SceneTree
## Published chunk edges must agree with each other and an independent cold mesh.
const State=preload("res://scripts/world/city_creation_state.gd")
const Surface=preload("res://scripts/visual/city_creation_terrain_surface.gd")
const Terrain=preload("res://scripts/world/city_creation_terrain.gd")
const EDGE=int(Surface.BLOCK_SIZE/Terrain.STEP)+1
var failures:Array[String]=[]
var facts:Array=[]
var checks:=0

func _initialize()->void:_run.call_deferred()

func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label)

func _publish(surface:Node3D,cache:Dictionary)->Array:
	var changes:Array=surface.prepare_blocks()
	var keys:Array=[]
	for change:Array in changes:
		var arrays:Array=surface.prepare_mesh(change[1]).arrays
		cache[change[0]]=[arrays[Mesh.ARRAY_VERTEX],arrays[Mesh.ARRAY_NORMAL]]
		keys.append(str(change[0]))
	return keys

func _edges(cache:Dictionary)->Dictionary:
	var height_error:=0.;var normal_error:=0.;var samples:=0
	for key:Vector2i in cache:
		for direction:Vector2i in [Vector2i.RIGHT,Vector2i.DOWN]:
			if not cache.has(key+direction):continue
			var first:Array=cache[key];var second:Array=cache[key+direction]
			for offset:int in EDGE:
				var a:=offset*EDGE+EDGE-1 if direction==Vector2i.RIGHT else (EDGE-1)*EDGE+offset
				var b:=offset*EDGE if direction==Vector2i.RIGHT else offset
				height_error=maxf(height_error,Vector3(first[0][a]).distance_to(second[0][b]))
				normal_error=maxf(normal_error,Vector3(first[1][a]).distance_to(second[1][b]))
				samples+=1
	return {"vertex_error":height_error,"normal_error":normal_error,"shared_samples":samples}

func _verify(city:RefCounted,surface:Node3D,cache:Dictionary,label:String)->void:
	var changed:Array=_publish(surface,cache)
	var cold:=Surface.new();cold.state=city
	var fresh:Dictionary={};_publish(cold,fresh);cold.free()
	var stale:Array=[]
	for key:Vector2i in fresh:
		if cache[key][0]!=fresh[key][0] or cache[key][1]!=fresh[key][1]:stale.append(str(key))
	var seams:Dictionary=_edges(cache)
	_check(stale.is_empty(),label+" published chunks equal independent cold meshes")
	_check(seams.vertex_error<=.000001 and seams.normal_error<=.000001,label+" shared vertices and normals agree")
	facts.append({"step":label,"published":changed,"stale_blocks":stale,"edges":seams})

func _case(label:String,at:Vector2)->void:
	var city:=State.new();city.prepare_ground_height()
	var surface:=Surface.new();surface.state=city
	var cache:Dictionary={};_publish(surface,cache)
	_check(cache.size()==36,label+" initial full terrain coverage")
	var original:Dictionary=city.snapshot()
	var points:Array[Vector2]=[at]
	_check(city.add_terrain_stroke(points,"raise",1.,1.).ok,label+" public raise succeeds")
	_verify(city,surface,cache,label+"/raise")
	_check(city.undo().ok and city.snapshot().terrain_strokes==original.terrain_strokes,label+" public undo restores authored strokes")
	_verify(city,surface,cache,label+"/undo")
	_check(city.redo().ok,label+" public redo succeeds")
	_verify(city,surface,cache,label+"/redo")
	surface.free()

func _run()->void:
	_case("east",Vector2(15,20))
	_case("west",Vector2(17,20))
	_case("south",Vector2(20,15))
	_case("north",Vector2(20,17))
	_case("positive_corner",Vector2(15.5,15.5))
	_case("negative_corner",Vector2(-16.5,-16.5))
	print("TERRAIN_CHUNK_SEAMS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"cases":facts}))
	quit(0 if failures.is_empty() else 1)
