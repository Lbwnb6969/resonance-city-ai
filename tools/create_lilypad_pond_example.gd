extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Lilypads=preload("res://scripts/visual/city_creation_lilypads.gd")
const SOURCE="res://数据/地貌河湾样例.json"
const DEST="res://数据/睡莲池塘样例.json"
func _initialize()->void: _run.call_deferred()
func _run()->void:
	assert(not FileAccess.file_exists(DEST),"Preserve existing authored samples; move obsolete output to 废弃 before regeneration.")
	var original:=FileAccess.get_file_as_bytes(SOURCE)
	var city=State.new();assert(city.restore(JSON.parse_string(original.get_string_from_utf8())).ok)
	var before:Dictionary=city.snapshot()
	var points:Array[Vector2]=[Vector2(-14.5,4)]
	var added:Dictionary=city.add_water(points,5.4,"pond");assert(added.ok,str(added))
	var lilies=Lilypads.new();lilies.state=city;lilies.record_only=true;lilies.rebuild()
	var counts:Dictionary=lilies.diagnostics();assert(counts.leaves>0 and counts.flowers>0);lilies.free()
	for field:String in ["houses","roads","plants","terrain_strokes","districts","life_progress","bakery_supply","workshop_supply","venue_commissions","journey_checkpoint"]: assert(city.snapshot()[field]==before[field],field)
	assert(city.growth_memories.is_empty())
	assert(city.save_city(DEST).ok)
	var restored=State.new();assert(restored.load_city(DEST).ok and restored.waters==city.waters)
	assert(FileAccess.get_file_as_bytes(SOURCE)==original)
	print("LILYPAD_POND_EXAMPLE ",JSON.stringify({"ok":true,"path":DEST,"new_pond_id":added.water_id,"counts":counts,"scope":"One public State add_water only; original buildings roads plants terrain districts and all progress unchanged; original source bytes preserved; no handwritten lily list or seed edits."}))
	quit()
