extends SceneTree
## An incremental continuation must match the full ordered replay, byte for byte.
const State=preload("res://scripts/world/city_creation_state.gd")
const Terrain=preload("res://scripts/world/city_creation_terrain.gd")
var checks:=0
var failures:Array=[]
var facts:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func equal(city,label:String)->void:
	city.prepare_ground_height()
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(city.snapshot()))).ok,label+" cold JSON loads")
	cold.prepare_ground_height()
	for key:String in ["raw_vertices","raw_offsets","vertices","offsets"]:
		check(city._ground_terrain.get(key)==cold._ground_terrain.get(key),label+" exact "+key)
func stroke(city,mode:String,at:Vector2,radius:float=2.,strength:float=.7,natural:bool=false)->void:
	var points:Array[Vector2]=[at,at+Vector2(.2,.3)]
	check(city.add_terrain_stroke(points,mode,radius,strength,1,natural).ok,"public "+mode)
	equal(city,mode+str(at))
func row(mode:String,at:Vector2)->Dictionary:
	return {"points":[[at.x,at.y]],"mode":mode,"radius":2.,"strength":.7}
func benchmark()->void:
	var history:Array=[row("raise",Vector2(-25,20)),row("plateau",Vector2(-25,20)),row("smooth",Vector2(-25,20))]
	var times:Array=[];var changed:Array=[];var clearance:=func(_p):return 100.
	for i in range(7):
		var field:=Terrain.new();field.prepare_raw([],clearance,history)
		var next:Array=history.duplicate(true);next.append(row("raise",Vector2(-24,20)))
		var began:=Time.get_ticks_usec();field.prepare_raw([],clearance,next);times.append((Time.get_ticks_usec()-began)/1000.)
		changed.append(field.stats.raw_changed_vertices)
		check(field.stats.raw_changed_vertices<Terrain.COLUMNS*Terrain.ROWS,"append only visits a local height region "+str(i))
		var cold:=Terrain.new();cold.prepare_raw([],clearance,next)
		check(field.raw_vertices==cold.raw_vertices and field.raw_offsets==cold.raw_offsets,"benchmark exact ordered field "+str(i))
	times.sort();facts.append({"case":"append_after_smooth","median_ms":times[3],"max_ms":times[-1],"changed_vertices":changed,"full_vertices":Terrain.COLUMNS*Terrain.ROWS})
func run()->void:
	benchmark()
	var city:=State.new();city.initialize_empty()
	stroke(city,"raise",Vector2(-25,20),5.,1.)
	stroke(city,"plateau",Vector2(-25,20),4.,1.)
	stroke(city,"smooth",Vector2(-25,20),5.)
	for mode:String in ["raise","lower","reset","plateau"]:stroke(city,mode,Vector2(-24,20))
	stroke(city,"raise",Vector2(-25,20),2.,.8,true)
	stroke(city,"lower",Vector2(-39.7,20),2.,1.)
	stroke(city,"raise",Vector2(-2,0),2.,1.)
	check(city.undo().ok,"undo tail");equal(city,"undo")
	check(city.redo().ok,"redo tail");equal(city,"redo")
	var worker:=State.new();check(worker.restore(city.snapshot()).ok,"worker snapshot")
	worker._ground_terrain.copy_cache_from(city._ground_terrain)
	var source_grid:PackedFloat32Array=city._ground_terrain.raw_vertices.duplicate()
	stroke(worker,"reset",Vector2(-25,20))
	check(city._ground_terrain.raw_vertices==source_grid,"forked worker never mutates published source field")
	var points:Array[Vector2]=[Vector2(-25,20)]
	check(city.add_water(points,2.,"pond").ok,"water edit invalidates smoothed base");equal(city,"water change")
	stroke(city,"raise",Vector2(-23.2,20),2.,1.)
	stroke(city,"smooth",Vector2(-24,20),3.)
	stroke(city,"raise",Vector2(-24,20))
	# Full State roundtrip above verifies public commands. These direct ordered
	# histories cover replacement, removal and batch append without UI assumptions.
	var field:=Terrain.new();var clear:=func(_p):return 100.
	var history:Array=[row("raise",Vector2(-20,10)),row("smooth",Vector2(-20,10))]
	field.prepare_raw([],clear,history)
	for next:Array in [history+[row("lower",Vector2(-20,10)),row("reset",Vector2(-21,10))], [row("raise",Vector2(-21,10)),history[1]], [history[0]], history]:
		field.prepare_raw([],clear,next);var cold:=Terrain.new();cold.prepare_raw([],clear,next)
		check(field.raw_vertices==cold.raw_vertices and field.raw_offsets==cold.raw_offsets,"ordered replacement/removal/multiappend equals cold replay")
	var clamped:Array=[]
	for i in range(6):clamped.append(row("raise",Vector2(-20,10)))
	clamped.append(row("smooth",Vector2(-20,10)));field.prepare_raw([],clear,clamped)
	for mode:String in ["raise","lower","reset"]:
		clamped.append(row(mode,Vector2(-20,10)));field.prepare_raw([],clear,clamped)
		var cold:=Terrain.new();cold.prepare_raw([],clear,clamped)
		check(field.raw_vertices==cold.raw_vertices and field.raw_offsets==cold.raw_offsets,"saturation and reset after blur remain byte exact "+mode)
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--report="):FileAccess.open(arg.trim_prefix("--report="),FileAccess.WRITE).store_string(JSON.stringify(result,"\t"))
	print("TERRAIN_APPEND ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)
