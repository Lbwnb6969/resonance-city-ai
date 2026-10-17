extends SceneTree
## Focused CPU reproduction using the preserved actual three-minute city.
const State = preload("res://scripts/world/city_creation_state.gd")
const SOURCE := "res://验证记录/经营河湾_2026-10-16/实际三分钟河湾.json"
const OUT := "res://验证记录/经营河湾_2026-10-16/storage"
var differences: Array = []
var numeric_type_changes := 0
var checks: Array = []

func _check(ok: bool, label: String) -> void:
	checks.append({"ok":ok,"label":label})
	if not ok: push_error(label)

func _compare(a: Variant, b: Variant, path: String="$") -> void:
	if (a is int or a is float) and (b is int or b is float):
		if typeof(a)!=typeof(b): numeric_type_changes+=1
		if a!=b: differences.append({"path":path,"before":a,"after":b,"absolute_error":absf(float(a)-float(b)),"type_before":typeof(a),"type_after":typeof(b)})
	elif a is Dictionary and b is Dictionary:
		for key: Variant in a:
			if not b.has(key): differences.append({"path":path+"/"+str(key),"missing":true})
			else: _compare(a[key],b[key],path+"/"+str(key))
		for key: Variant in b:
			if not a.has(key): differences.append({"path":path+"/"+str(key),"added":true})
	elif a is Array and b is Array:
		if a.size()!=b.size(): differences.append({"path":path,"before_size":a.size(),"after_size":b.size()})
		for index in range(mini(a.size(),b.size())): _compare(a[index],b[index],path+"/"+str(index))
	elif a!=b: differences.append({"path":path,"before":a,"after":b,"type_before":typeof(a),"type_after":typeof(b)})

func _initialize() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var original := FileAccess.get_file_as_bytes(SOURCE)
	var authored: Dictionary = JSON.parse_string(original.get_string_from_utf8())
	var first := State.new()
	var restored: Dictionary = first.load_city(SOURCE)
	_check(restored.ok,"preserved actual three-minute city passes strict production load")
	if not restored.ok:
		print("TOWN_STORAGE_FAILURE ",restored);quit(1);return
	var before: Dictionary = first.snapshot()
	var path := OUT+"/roundtrip_"+str(Time.get_ticks_usec())+".json"
	var written: Dictionary = first.save_city(path)
	var second := State.new()
	var read: Dictionary = second.load_city(path) if written.ok else {"ok":false}
	_check(written.ok and read.ok,"fresh CPU state saves and reloads through production temp validation and publish")
	var after: Dictionary = second.snapshot()
	_compare(before,after)
	var direct_equal := before==after
	var authored_differences: Array = []
	var actual_differences: Array = differences.duplicate(true)
	differences=[];_compare(authored,before);authored_differences=differences.duplicate(true)
	differences=actual_differences
	var ledger_keys := ["life_progress","bakery_supply","workshop_supply","cafe_credits","cafe_progress","matinee_credits","matinee_progress","matinee_pending","house_improvements","venue_commissions","growth_memories"]
	var ledgers_equal := true
	for key: String in ledger_keys:
		if before.get(key)!=after.get(key): ledgers_equal=false
	_check(ledgers_equal,"all stock credits improvements festival memories pending matinee and actual in-flight parcel IDs survive exactly")
	var roundoff_only := true
	for row: Dictionary in actual_differences:
		if row.get("type_before")!=TYPE_FLOAT or row.get("type_after")!=TYPE_FLOAT or not row.has("absolute_error") or float(row.get("absolute_error",INF))>1.0e-12: roundoff_only=false
	_check(roundoff_only,"complete city structure and actor checkpoint survive with float-only decimal roundoff at most 1e-12")
	var corrupt: Dictionary = before.duplicate(true)
	corrupt.workshop_supply.h2.stock=int(corrupt.workshop_supply.h2.stock)+1
	var invalid_stock: Dictionary = State.new().restore(corrupt)
	_check(not invalid_stock.ok,"strict load rejects one fabricated workshop stock unit without production")
	corrupt=before.duplicate(true)
	corrupt.workshop_supply.h2.transit.target_id="h999999"
	var invalid_transit: Dictionary = State.new().restore(corrupt)
	_check(not invalid_transit.ok,"strict load rejects an actual in-flight parcel retargeted to nonexistent house")
	_check(FileAccess.get_file_as_bytes(SOURCE)==original,"preserved failed-run source bytes remain unchanged")
	var ok := true
	for row: Dictionary in checks: ok=ok and row.ok
	var report := {"ok":ok,"checks":checks,"direct_snapshot_equal":direct_equal,"differences":actual_differences,"source_to_normalized_differences":authored_differences,"numeric_type_changes":numeric_type_changes,"written":written,"read":read,"source":SOURCE,"roundtrip_path":path,"scope":"CPU only, restored actual 180-second evidence, no new live run or invented ledgers","command":"D:/GODOT/Godot_v4.7.2-stable_win64_console.exe --headless --path . --script tools/check_creation_town_storage.gd"}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true))
	print("TOWN_STORAGE ",JSON.stringify(report))
	quit(0 if ok else 1)
