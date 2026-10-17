extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const SAMPLE="res://数据/柱廊河湾样例.json"
const OUT="res://验证记录/连拱柱廊_2026-10-16"
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
func _initialize()->void: _run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _house(city)->Dictionary:
	for house:Dictionary in city.houses:
		if house.id=="h1": return house
	return {}
func _plan(city)->Array: return load("res://scripts/world/city_creation_arcade_plan.gd").for_house(city,_house(city))
func _json(data:Dictionary)->Dictionary: return JSON.parse_string(JSON.stringify(data,"",true,true))
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var source:PackedByteArray=FileAccess.get_file_as_bytes(SAMPLE);var city:=State.new()
	var restored:Dictionary=city.restore(JSON.parse_string(source.get_string_from_utf8()))
	_check(restored.ok,"actual sample restores through strict production State")
	if restored.ok:
		var plan:Array=_plan(city);facts.plan=plan
		_check(plan.size()>=2 and plan.all(func(row):return is_equal_approx(float(row.retreat),.38)),"two real supported ground-floor cells derive colonnades beside a wide street")
		var narrow:Dictionary=city.snapshot()
		for road:Dictionary in narrow.roads:
			if road.get("style","")=="promenade": road.erase("style");road.width=1.25
		var old:=State.new();var loaded:Dictionary=old.restore(_json(narrow))
		_check(loaded.ok and _plan(old).is_empty(),"same real layout with only narrow paths derives no street colonnades")
		var clone:=State.new();var snapshot:Dictionary=city.snapshot()
		_check(clone.restore(_json(snapshot)).ok and _plan(clone)==plan,"actual JSON readback deterministically restores derived arcade faces")
		var upper:String=""
		for cell:Dictionary in _house(city).cells:
			if cell.kind=="room" and int(cell.level)==1: upper=cell.id;break
		var removed:Dictionary=city.remove_cell("h1",upper)
		_check(removed.ok and _plan(city).size()<plan.size(),"actual upper-room removal withdraws its unsupported ground arcade")
		_check(city.undo().ok and _plan(city)==plan,"real undo restores exact original arcade plan")
		var palette:Dictionary=city.set_house_palette("h1",2);var role:Dictionary=city.set_house_role("h1","bakery")
		_check(palette.ok and role.ok and _plan(city)==plan,"real palette and purpose edits preserve supported wide-street geometry")
		_check(not snapshot.has("arcade_faces") and city.houses.all(func(h):return not h.has("arcades")) and city.life_progress.concerts==0 and FileAccess.get_file_as_bytes(SAMPLE)==source,"arcades add no authored field or completed activity and leave sample bytes unchanged")
		var courtyard:=State.new();courtyard.initialize()
		var cells:Array=[]
		for z in range(5):
			for x in range(5):
				if x==0 or z==0 or x==4 or z==4:
					cells.append({"x":x,"z":z,"level":0,"kind":"room"});cells.append({"x":x,"z":z,"level":1,"kind":"room"})
		var ring:Dictionary=courtyard.add_house_stroke(Vector2(8,-12.5),cells)
		var ring_house:Dictionary={}
		for house:Dictionary in courtyard.houses:
			if house.id==ring.get("house_id",""): ring_house=house
		var planner=load("res://scripts/world/city_creation_arcade_plan.gd")
		var closed:Array=planner.for_house(courtyard,ring_house) if ring.ok else []
		var pair:Array=[]
		for cell:Dictionary in ring_house.get("cells",[]):
			if int(cell.x)==0 and int(cell.z)==2: pair.append(cell)
		pair.sort_custom(func(a,b):return int(a.level)>int(b.level))
		var opened:bool=ring.ok
		for cell:Dictionary in pair: opened=bool(courtyard.remove_cell(ring_house.id,cell.id).ok) and opened
		var open_faces:Array=planner.for_house(courtyard,_by_id(courtyard,str(ring.get("house_id","")))) if ring.ok else []
		var undone:bool=courtyard.undo().ok and courtyard.undo().ok if pair.size()==2 else false
		var again:Array=planner.for_house(courtyard,_by_id(courtyard,str(ring.get("house_id","")))) if ring.ok else []
		_check(ring.ok and not closed.is_empty() and closed.any(func(row):return row.source=="courtyard") and opened and open_faces.is_empty() and undone and again==closed,"real closed two-storey courtyard derives inner arcades, opening ring withdraws them and construction undo restores them")
	var result:Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"facts":facts,"command":"Godot --headless --path . --script tools/check_arcade_state.gd"}
	FileAccess.open(OUT+"/state.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("ARCADE_STATE ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)
func _by_id(city,id:String)->Dictionary:
	for house:Dictionary in city.houses:
		if house.id==id: return house
	return {}
