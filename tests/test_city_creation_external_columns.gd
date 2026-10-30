extends SceneTree
const Craft=preload("res://tools/fixtures/city_creation_artisan_contract_fixture.gd")
const Civic=preload("res://tools/fixtures/city_creation_civic_contract_fixture.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Shore=preload("res://tools/fixtures/city_creation_waterfront_contract_fixture.gd")
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func network(city:RefCounted)->void:
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);life.free()
func row(city:RefCounted,kind:String)->Dictionary:
	return city.functional_zones().spaces.filter(func(s):return s.kind==kind and s.members==["h1"])[0]
func run()->void:
	for civic:bool in [false,true]:
		for yaw:float in [0.,.4,PI*.5]:
			var f:=Civic.build("ionic_stoa",yaw) if civic else Craft.build("workshop",yaw);var city:RefCounted=f.city;var kind:="civic" if civic else "artisan"
			network(city);check(f.ok and row(city,kind).eligibility.district,"actual baseline "+kind)
			var multiplier:float=city.functional_benefits().inspiration_multiplier
			Craft.Base.Brush.select(city,"pastoral","ionic_stoa")
			var cells:Array=[{"x":0,"z":0,"level":0,"kind":"room"}]
			if civic:cells.append_array([{"x":1,"z":0,"level":0,"kind":"room"},{"x":2,"z":0,"level":0,"kind":"room"}])
			var at:=Craft.ORIGIN+(Vector2(3.6,4.9) if civic else Vector2(0,4.05)).rotated(-yaw)
			check(city.add_house_stroke(at,cells).ok and city.rotate_house("h2",yaw+PI).ok,"public foreign column body")
			network(city);var blocked:=row(city,kind);var authored:Dictionary=city.snapshot()
			check(not blocked.eligibility.district and blocked.evidence.forecourts.is_empty(),"external plinths block full front despite clear neighbor room cells")
			check(city.snapshot()==authored and city.functional_benefits().inspiration_multiplier==multiplier,"queries retain author data and formal benefits")
			var cold:=Craft.Base.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(authored,"",true,true))).ok,"external obstacle cold restore");network(cold);check(row(cold,kind)==blocked,"cold and incremental exact column evidence")
			check(city.remove_house("h2").ok,"remove real foreign pillars");network(city);check(row(city,kind).eligibility.district,"removal reopens actual front")
			check(city.undo().ok,"Undo foreign pillars");network(city);check(row(city,kind)==blocked,"Undo restores exact obstruction")
	for yaw:float in [0.,.4,PI*.5]:
		var baseline:=Shore.build("shore",yaw);network(baseline.city)
		var original:=row(baseline.city,"waterfront");check(baseline.ok and original.evidence.shore_faces.size()==3,"actual three-face waterfront baseline")
		var f:=Shore.build("shore",yaw,false);var city:RefCounted=f.city
		Craft.Base.Brush.select(city,"pastoral","ionic_stoa")
		var added:Dictionary=city.add_house(Shore.ORIGIN+Vector2(-1.8,3.5).rotated(-yaw));var rotated:Dictionary=city.rotate_house("h2",yaw+PI*.5) if added.ok else {}
		check(added.ok and rotated.get("ok",false),"legal side-facing external shore columns "+str(yaw))
		if not added.ok or not rotated.get("ok",false):print("SHORE_COLUMN_FIXTURE ",yaw," ",added," ",rotated)
		check(city.add_road([Shore.ORIGIN+Vector2(-2,1.9).rotated(-yaw),Shore.ORIGIN+Vector2(6,1.9).rotated(-yaw)] as Array[Vector2],"path","none").ok,"public shore road after rotated neighboring body")
		network(city);var blocked:=row(city,"waterfront")
		check(blocked.evidence.shore_faces.size()==2 and blocked.evidence.shore_faces.all(func(face):return face.cell_id!=city.houses[0].cells[0].id),"only the actual blocked waterfront face withdraws; clear public faces survive")
		check(city.remove_house("h2").ok,"remove foreign shore columns");network(city);check(row(city,"waterfront")==original,"shore source and local extent restore exactly")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures}
	print("EXTERNAL_COLUMNS ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)
