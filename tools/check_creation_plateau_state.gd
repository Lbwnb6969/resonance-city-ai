extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/平顶台地_2026-10-16/state.json"
const AT=Vector2(12,-9)
var checks:Array=[]
var failures:Array=[]
func _initialize() -> void: _run.call_deferred()
func _check(ok:bool,label:String) -> void:
	checks.append({"label":label,"passed":ok})
	if not ok: failures.append(label);push_error(label)
func _grid(city) -> PackedFloat32Array:
	city.prepare_ground_height();return city._ground_terrain.vertices
func _fresh(city,label:String) -> void:
	var other=State.new()
	_check(other.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok and _grid(other)==_grid(city),label)
func _run() -> void:
	var city=State.new();city.initialize()
	var baseline=_grid(city)
	_check(city.snapshot().schema==1,"unmodified city keeps schema 1")
	city.add_terrain_stroke([AT],"raise")
	_check(city.snapshot().schema==2,"Gaussian terrain keeps schema 2")
	city.growth_memories.assign(["dawn"]);city.houses[0].finish="dawn"
	_check(city.snapshot().schema==3,"journal terrain keeps schema 3")
	# Frozen production code verifies old brush results rather than copying formulas.
	var zip=ZIPReader.new()
	_check(zip.open("res://备份/平顶台地前_20261016/原源码与设计.zip")==OK,"frozen pre-change terrain readable")
	var previous=GDScript.new()
	previous.source_code=zip.read_file("scripts/world/city_creation_terrain.gd").get_string_from_utf8();zip.close()
	_check(previous.reload()==OK,"frozen terrain compiles")
	var old=previous.new()
	city.add_terrain_stroke([Vector2(10,-8),Vector2(14,-8)],"lower",2,.4)
	city.add_terrain_stroke([Vector2(11,-7)],"reset",2,.65)
	_grid(city)
	old.prepare(city.waters,city.water_clearance,city.terrain_strokes,city._terrain_protection.build(city))
	_check(old.vertices==city._ground_terrain.vertices and old.offsets==city._ground_terrain.offsets,"old raise lower reset grid bytes unchanged")
	var simple=State.new();simple.initialize()
	var before=JSON.stringify(simple.snapshot())
	_check(simple.add_terrain_stroke([AT,AT+Vector2(1,0)],"plateau",3.5,1,2).ok,"two-layer plateau is one valid state operation")
	var raised=_grid(simple)
	_check(simple.snapshot().schema==4 and simple._undo.size()==1 and simple.terrain_strokes.size()==2,"plateau selects schema 4 and one history entry")
	var flat_error=0.0
	for delta:Vector2 in [Vector2.ZERO,Vector2(.5,0),Vector2(0,1),Vector2(0,-1)]: flat_error=maxf(flat_error,absf(simple.ground_height(AT+delta)-1.98))
	_check(flat_error<.000001,"unprotected inner core is flat at two metres above baseline")
	_check(simple.ground_height(AT+Vector2(0,2.5))<1.5 and simple.ground_height(AT+Vector2(0,3.5))<.001,"shoulder tapers and stops at brush radius")
	_check(simple._ground_terrain.rockiness_at(AT+Vector2(0,2))>0,"real shoulder gradient reaches existing rock threshold")
	_fresh(simple,"schema 4 full-precision JSON produces identical fresh height field")
	_check(simple.undo().ok and _grid(simple)==baseline and simple.snapshot().schema==1,"undo removes entire plateau and restores legacy schema")
	_check(simple.redo().ok and _grid(simple)==raised,"redo restores identical plateau bytes")
	city.add_terrain_stroke([AT],"plateau",3.5,1,2)
	_fresh(city,"schema 4 coexists with actual journal memory and earned finish fields")
	var valid=city.snapshot()
	for schema:int in [1,2,3]:
		var malformed=valid.duplicate(true);malformed.schema=schema
		var target=State.new();target.initialize()
		var unchanged=JSON.stringify(target.snapshot())
		_check(not target.restore(malformed).ok and unchanged==JSON.stringify(target.snapshot()),"lower schema rejects plateau atomically: "+str(schema))
	# Exercise the plateau-specific gate without memory/finish validation masking it.
	for schema:int in [2,3]:
		var malformed=simple.snapshot();malformed.schema=schema
		_check(not State.new().restore(malformed).ok,"plain plateau cannot masquerade as old terrain schema "+str(schema))
	var invalid=simple.snapshot();invalid.terrain_strokes[0].mode="unknown"
	_check(not State.new().restore(invalid).ok,"unknown brush rejected under schema 4")
	_check(simple.add_terrain_stroke([AT],"reset",3.5).ok and absf(simple.ground_height(AT)+.02)<.000001,"existing reset clears plateau at its core")
	_fresh(simple,"reset after plateau remains deterministic")
	var output={"ok":failures.is_empty(),"checks":checks,"failures":failures,"flat_max_error":flat_error,"pre_edit_snapshot_sha":before.sha256_text()}
	var file=FileAccess.open(OUT,FileAccess.WRITE);file.store_string(JSON.stringify(output,"\t",true,true));file.close()
	print("PLATEAU_STATE ","PASS" if failures.is_empty() else "FAIL"," checks=",checks.size())
	quit(0 if failures.is_empty() else 1)
