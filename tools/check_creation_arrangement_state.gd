extends SceneTree
## Real State ownership/history/JSON; no audio device, renderer or personal save.
const State = preload("res://scripts/world/city_creation_state.gd")
const Arrangement = preload("res://scripts/audio/city_creation_arrangement.gd")
const OUT := "res://验证记录/街坊自动配器_2026-10-16/state.json"
var checks: Array = []
var failures: Array[String] = []
var evidence: Dictionary = {}

func _initialize() -> void:
	_run.call_deferred()

func _check(condition: bool,label: String) -> void:
	checks.append({"label":label,"passed":condition})
	if not condition:
		failures.append(label)
		push_error(label)

func _compose(city,id: String) -> Dictionary:
	var members: Array = []
	var ids: Array = city.district_members(id)
	for house: Dictionary in city.houses:
		if str(house.id) in ids: members.append(house)
	var row: Dictionary = city.districts[city._district_index(id)]
	return Arrangement.compose(members,str(row.style),bool(row.get("adaptive",false)))

func _bounded(report: Dictionary) -> bool:
	var total := 0.0
	for value in report.weights.values():
		if float(value)<0.0: return false
		total += float(value)
	return report.weights.size()<=2 and absf(total-1.0)<0.000001 and float(report.secondary_weight)<=0.45 and float(report.weights[report.base_style])>=0.55

func _run() -> void:
	var city = State.new()
	city.initialize()
	var initial := city.snapshot()
	var painted: Dictionary = city.add_district([Vector2(-6,-8),Vector2(-6,8)],10.0,"warm",true)
	_check(bool(painted.ok),"adaptive district created through State API")
	var first := str(painted.get("district_id",""))
	_check(city.district_members(first)==["h1","h2","h3","h4","h5"],"real capsule district owns five left-bank houses")
	var before := _compose(city,first)
	_check(before.roles.residential==3 and before.roles.bakery==1 and before.roles.venue==1 and is_equal_approx(float(before.scores.warm),3.4),"real room counts exclude h5 terrace and count roles once per house")
	_check(before.secondary=="deep" and is_equal_approx(float(before.secondary_weight),1.2/5.8) and _bounded(before),"equal deep/market scores use fixed style order and normalized amplitude")
	_check(city.set_house_role("h3","workshop").ok,"actual house role changes to workshop")
	var working := _compose(city,first)
	_check(working.roles.workshop==1 and is_equal_approx(float(working.scores.weave),1.2) and working.scores.warm<before.scores.warm,"actual role change moves weighted score to weave")
	_check(city.set_workshop_open("h3",false).ok and city.set_bakery_open("h2",false).ok,"actual businesses pause through State APIs")
	var closed := _compose(city,first)
	_check(is_equal_approx(float(closed.scores.weave),0.42) and is_equal_approx(float(closed.scores.market),0.42) and closed.roles.workshop==1,"paused businesses retain membership with 35 percent score")
	_check(city.add_cell("h3",0,0,1).ok,"actual workshop gains a supported room")
	_check(is_equal_approx(float(_compose(city,first).scores.weave),0.49),"new real room increases closed workshop score")
	var covering: Dictionary = city.add_district([Vector2(-8,-6)],3.2,"sylvan",true)
	var second := str(covering.get("district_id",""))
	_check(bool(covering.ok) and city.district_members(second)==["h1"] and not city.district_members(first).has("h1"),"later paint owns overlap without double membership")
	var covered := _compose(city,second)
	_check(covered.secondary=="warm" and is_equal_approx(float(covered.secondary_weight),0.45) and _bounded(covered),"single residential house caps answer at 45 percent and keeps chosen sylvan base")
	_check(city.remove_district(second).ok and city.district_for_house("h1").id==first,"removing overlay restores earlier arrangement membership")
	_check(city.set_house_role("h5","garden_cafe").ok and _compose(city,first).scores.sylvan==1.0,"actual tea courtyard contributes sylvan without counting terrace")
	for style: String in Arrangement.STYLES:
		var manual := Arrangement.compose(city.houses,style,false)
		_check(manual.weights=={style:1.0} and manual.secondary.is_empty() and manual.secondary_weight==0.0,"manual preset remains exact single style: "+style)
	var empty := Arrangement.compose([],"market",true)
	_check(empty.adaptive and empty.weights=={"market":1.0} and empty.secondary.is_empty(),"empty adaptive district keeps chosen base")
	var tall: Dictionary = city.houses[0].duplicate(true)
	tall.role = "bakery"
	for i in range(7): tall.cells.append({"kind":"room"})
	var capped := Arrangement.compose([tall],"warm",true)
	_check(is_equal_approx(float(capped.scores.market),1.8) and _bounded(capped),"room contribution saturates at five rooms without extra voices")
	var saved := city.snapshot()
	var restored = State.new()
	_check(restored.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok and restored.snapshot()==saved and _compose(restored,first)==_compose(city,first),"full precision JSON preserves adaptive flag and real arrangement")
	_check(city.set_district_adaptive(first,false).ok and not bool(city.district_for_house("h1").get("adaptive",false)),"State toggles adaptive off")
	var unchanged := city.snapshot()
	var history := [city._undo.size(),city._redo.size()]
	_check(city.set_district_adaptive(first,false).ok and city.snapshot()==unchanged and [city._undo.size(),city._redo.size()]==history,"unchanged adaptive toggle consumes no history")
	_check(city.undo().ok and bool(city.district_for_house("h1").adaptive) and city.redo().ok and not bool(city.district_for_house("h1").get("adaptive",false)),"undo and redo restore adaptive intent")
	var legacy := saved.duplicate(true)
	for row: Dictionary in legacy.districts: row.erase("adaptive")
	_check(restored.restore(legacy).ok and not bool(restored.district_for_house("h1").get("adaptive",false)) and _compose(restored,first).weights=={"warm":1.0},"legacy district defaults to unchanged manual preset")
	var preserved := restored.snapshot()
	var invalid := saved.duplicate(true)
	invalid.districts[0].adaptive = 1
	_check(not restored.restore(invalid).ok and restored.snapshot()==preserved,"non-boolean adaptive flag rejects atomically")
	_check(city.roads==initial.roads and city.plants==initial.plants and city.waters==initial.waters,"music changes preserve authored roads and nature")
	evidence = {"initial":before,"working":working,"closed":closed,"overlap":covered,"capped":capped,"final":_compose(city,first)}
	var report := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"evidence":evidence,"scope":"Pure helper and real State ownership, room/role/closed-business edits, history and JSON. No renderer, audio playback or personal save access."}
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT.get_base_dir()))
	var file := FileAccess.open(OUT,FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t"))
	file.close()
	print("CREATION_ARRANGEMENT_STATE ",JSON.stringify(report))
	quit(0 if failures.is_empty() else 1)
