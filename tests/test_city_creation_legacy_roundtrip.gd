extends SceneTree
## Existing published works, real file APIs and edit history; no personal writes.
const State=preload("res://scripts/world/city_creation_state.gd")
const Examples=preload("res://scripts/world/city_creation_examples.gd")
const Ordinary=preload("res://tests/test_city_creation_signatures.gd")
const Clockmaker=preload("res://tests/test_city_creation_clockmaker.gd")
const Modern=preload("res://tools/fixtures/city_creation_modern_fixture.gd")
const OUT="res://验证记录/旧作品兼容_2026-10-22"
var checks:=0
var failures:Array[String]=[]
var works:Array[Dictionary]=[]
var folder:=""
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func authored(snapshot:Dictionary)->Dictionary:
	var result:=snapshot.duplicate(true)
	result.erase("revision");result.erase("high_watermark")
	return result
func preserves(actual:Variant,original:Variant)->bool:
	# Old JSON coordinates become Godot Vector2 (float32). Optional defaults
	# can be added, but no authored field, element or identity can disappear.
	if original is Dictionary:
		if not actual is Dictionary:return false
		for key:Variant in original:
			if not actual.has(key) or not preserves(actual[key],original[key]):return false
		return true
	if original is Array:
		if not actual is Array or actual.size()!=original.size():return false
		for i in range(original.size()):
			if not preserves(actual[i],original[i]):return false
		return true
	if (original is float or original is int) and (actual is float or actual is int):
		return absf(float(actual)-float(original))<=.000002
	return actual==original
func exercise(path:String,id:String)->void:
	var original:=FileAccess.get_file_as_bytes(path)
	var input:Dictionary=JSON.parse_string(original.get_string_from_utf8())
	var untouched:=input.duplicate(true)
	var city:=State.new();var loaded:Dictionary=city.load_city(path)
	check(loaded.ok,id+": original file loads through the public API: "+str(loaded))
	if not loaded.ok:return
	var saved:Dictionary=city.snapshot()
	check(saved.schema==input.schema,id+": old work retains its schema")
	check(preserves(city.houses,input.houses) and preserves(city.roads,input.roads) and preserves(city.plants,input.get("plants",city.plants)),id+": all authored identities/cells/roads/plants retained within Vector2 precision")
	check(not saved.has("automatic_neighborhoods") and not saved.has("biome_seed") and not saved.has("archive_unlocks") and not saved.has("microclimate"),id+": loading invents no new city mode or rewards")
	var local:=folder+"/"+id+".json"
	check(city.save_city(local).ok and not city.dirty,id+": isolated atomic save succeeds")
	var copy:=State.new()
	check(copy.load_city(local).ok and copy.snapshot()==saved,id+": real JSON read/write retains the complete canonical world")
	var target:=str(city.houses[0].id)
	check(city.set_house_name(target,"旧作回访 · "+id).ok,id+": unchanged name API edits an old work")
	var edited:Dictionary=city.snapshot()
	check(city.undo().ok and authored(city.snapshot())==authored(saved),id+": undo restores all authored and life data")
	check(city.redo().ok and authored(city.snapshot())==authored(edited),id+": redo restores the same edit and identities")
	var current:Dictionary=city.snapshot()
	var invalid:Dictionary=current.duplicate(true);invalid.schema=999
	check(not city.restore(invalid).ok and city.snapshot()==current,id+": invalid external restore leaves the full current world intact")
	check(city.restore(input).ok and input==untouched,id+": public restore does not mutate caller-owned nested data")
	if not input.houses.is_empty():
		var before:=city.snapshot();input.houses[0].name="caller mutation"
		check(city.snapshot()==before,id+": caller data stays detached after restoring")
	check(FileAccess.get_file_as_bytes(path)==original,id+": packaged original remains byte-identical")
	works.append({"id":id,"schema":saved.schema,"houses":saved.houses.size()})
func generated(city:RefCounted,schema:int)->void:
	# These are explicit format contracts, separate from frozen historical
	# files. Each field is produced by its real State/ledger API, not by
	# relabelling a new snapshot with an arbitrary older version number.
	var path:=folder+"/schema_%d_input.json"%schema
	check(city.snapshot().schema==schema,"public APIs produce the actual Schema%d feature contract"%schema)
	check(city.save_city(path).ok,"Schema%d contract file validates before publication"%schema)
	exercise(path,"schema%d_contract"%schema)
func schema_contracts()->void:
	var city:=State.new();city.initialize()
	city.add_road([Vector2(-1,-10),Vector2(8,-10)] as Array[Vector2])
	city.produce_bread("h2",1);city.record_concert_completion("h4");city.refresh_growth();city.set_house_finish("h1","dawn")
	generated(city,3)
	city=State.new();city.initialize()
	city.add_terrain_stroke([Vector2(-22,18)] as Array[Vector2],"raise",3.,.8)
	city.add_terrain_stroke([Vector2(-22,18)] as Array[Vector2],"smooth",3.,.4)
	generated(city,10)
	city=State.new();city.initialize()
	city.add_terrain_stroke([Vector2(-22,18)] as Array[Vector2],"raise",3.,.8,1,true)
	generated(city,11)
	city=State.new();city.initialize()
	city.add_road([Vector2(-22,18),Vector2(-14,18)] as Array[Vector2],"avenue")
	generated(city,12)
	city=Ordinary.ordinary_city();city.Signatures.refresh(city)
	generated(city,14)
	generated(Clockmaker.fixture(),15)
	generated(Modern.earned_city(),16)
	city=State.new();city.restore(Examples.read("example_flagship").world)
	for house:Dictionary in city.houses:
		if str(house.get("signature",""))=="watermill":
			city.produce_bread(str(house.id),city.bakery_batch_size(str(house.id)));break
	generated(city,18)
func run()->void:
	folder=OUT+"/run_"+str(Time.get_ticks_usec())
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(folder))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	for row:Dictionary in Examples.CATALOG:
		exercise("res://数据/"+str(row.file),str(row.id))
	exercise("res://tools/fixtures/legacy_renaissance_schema13.json","frozen_schema13")
	schema_contracts()
	var schemas:Array=[]
	for work:Dictionary in works:
		if work.schema not in schemas:schemas.append(work.schema)
	schemas.sort()
	check(schemas==range(1,19),"frozen works and feature-bearing format contracts cover every Schema1–18")
	# Legacy callers may omit the appended optional arguments. Previewing does
	# not allocate IDs, and optional defaults must not switch on new city rules.
	var api:=State.new();api.initialize();var before:=api.snapshot()
	var points:Array[Vector2]=[Vector2(-18,12),Vector2(-12,12)]
	check(api.preview_road(points).ok and api.snapshot()==before,"old one-argument road preview stays pure")
	check(api.add_road(points).ok and not api.snapshot().has("automatic_neighborhoods"),"old one-argument road commit keeps legacy semantics")
	check(api.vegetation_visible(api.plants[0]) is bool,"old vegetation query accepts its original single argument")
	api.refresh_growth()
	api.grant_resonance_afterglow(["h1"],30.)
	check(api.afterglow_remaining("h1")==30.,"old two-argument afterglow call applies the requested duration")
	check(api.add_terrain_stroke([Vector2(-20,18)],"raise",2.,.3,1).ok,"old five-argument terrain call stays valid")
	var invalid_path:=folder+"/broken.json";FileAccess.open(invalid_path,FileAccess.WRITE).store_string("{broken")
	var stable:=api.snapshot()
	check(not api.load_city(invalid_path).ok and api.snapshot()==stable,"malformed external file preserves the current city")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes remain unchanged")
	if checks<375 or works.size()<27:failures.append("旧档覆盖不完整：必须实际执行至少375项并恢复27个作品/格式契约")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"works":works}
	FileAccess.open(folder+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"))
	print("LEGACY_ROUNDTRIP ",JSON.stringify(result))
	quit(0 if failures.is_empty() else 1)
