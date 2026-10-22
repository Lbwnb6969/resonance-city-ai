extends SceneTree
const Plans = preload("res://scripts/world/city_creation_chemistry_preview.gd")
const Fixture = preload("res://tools/fixtures/city_creation_chemistry_fixture.gd")
var checks := 0
var failures: Array[String] = []
func _initialize() -> void: _run.call_deferred()
func check(ok: bool, label: String) -> void:
	checks += 1
	if not ok: failures.append(label); push_error(label)
func _run() -> void:
	for kind: String in ["courtyard","arcade","conservatory","skybridge","bridge","stairs"]:
		var data := Fixture.building(kind) if kind in ["courtyard","arcade","conservatory","skybridge"] else Fixture.road(kind)
		var city: RefCounted = data.city
		var before := var_to_bytes(city.snapshot()); var history: int = city._undo.size()
		var profiles := var_to_bytes(city._road_heights.profiles)
		var started := Time.get_ticks_usec()
		var rows: Array = Plans.building(city,data.candidate) if data.has("candidate") else Plans.road(city,data.points,data.width,data.style,true)
		check(rows.any(func(row: Dictionary) -> bool: return row.kind == kind),"actual rule detects "+kind)
		check(var_to_bytes(city.snapshot()) == before and city._undo.size() == history,"hover leaves authored rows transactions and ID high-water unchanged: "+kind)
		check(var_to_bytes(city._road_heights.profiles)==profiles,"preview cannot leak a temporary road into published profiles: "+kind)
		for row: Dictionary in rows:
			check(row.at.is_finite() and not row.lines.is_empty(),"finite semantic outline "+str(row.kind))
			for line: Array in row.lines:
				check(line.size() >= 2 and line.all(func(at: Vector3) -> bool: return at.is_finite()),"finite ghost geometry")
		var invalid := {"valid":false}
		check(Plans.building(city,invalid).is_empty() and Plans.road(city,[],data.get("width",1.25),"path",false).is_empty(),"invalid brush cannot promise a recipe")
		print("CHEMISTRY_CASE ",kind," ",float(Time.get_ticks_usec()-started)/1000.,"ms")
	print("CHEMISTRY_PREVIEW ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}))
	quit(0 if failures.is_empty() else 1)
