extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_space_contract_fixture.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
var checks:=0
var failures:Array=[]
var cases:Array=[]
var started:=0
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func network(city:RefCounted)->void:
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);life.free()
func spaces(city:RefCounted)->Array:
	var before:Dictionary=city.snapshot();var rows:Array=city.functional_zones().spaces
	check(before==city.snapshot(),"pure spatial query preserves author data and history")
	return rows
func run()->void:
	started=Time.get_ticks_msec()
	for yaw:float in [0.,.4,-.65,PI*.5]:
		var f:=Fixture.courtyard("U","none",yaw);var city:RefCounted=f.city
		check(f.ok,"public U room footprint yaw "+str(yaw))
		var pending:=spaces(city)
		check(pending.size()==1 and pending[0].stage=="cluster" and pending[0].evidence.network=="waiting","real half enclosure survives unpublished road graph")
		if pending.is_empty() or pending[0].stage!="cluster":continue
		var row:Dictionary=pending[0]
		check(row.evidence.geometry=="half_enclosure" and row.evidence.usable_tiles==12,"twelve real dry tiles include the open mouth row")
		check(row.evidence.wall_segments.size()>=3 and not row.evidence.mouths.is_empty() and row.evidence.open_access,"three-sided wall pocket and actual open approach")
		check(not row.connected and not row.eligibility.district and not row.eligibility.warm,"local cluster is independent of roads and never grants district/Warm")
		network(city);var initial:=spaces(city)
		var cold:=Fixture.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok,"isolated cold restore U "+str(yaw));network(cold)
		check(spaces(cold)==initial,"rotated independent cold result equals cached incremental")
		cases.append({"yaw":yaw,"spaces":initial})
	var f:=Fixture.courtyard("U","none");var city:RefCounted=f.city;network(city);var initial:=spaces(city)
	var presentation:Dictionary=city.creative_settings.presentation.duplicate();presentation.automatic_decoration=false
	check(city.CreationPolicy.set_preferences(city,{"presentation":presentation}).ok,"public automatic-decoration preference");network(city)
	check(spaces(city)==initial,"decoration switch cannot create or remove enclosure evidence")
	check(city.undo().ok,"Undo decoration preference");network(city);check(spaces(city)==initial,"preference Undo retains exact geometry")
	check(city.add_house_stroke(Fixture.ORIGIN+Vector2(1.8,1.8),[{"x":0,"z":0,"level":0,"kind":"room"}]).ok,"real detached interior obstacle")
	network(city);check(spaces(city).any(func(s):return s.evidence.geometry=="half_enclosure" and s.evidence.usable_tiles<12),"interior room excludes occupied floor instead of hull-fill")
	check(city.undo().ok,"Undo real interior obstacle");network(city);check(spaces(city)==initial,"Undo restores exact half-enclosure source")
	var fill:Array=[]
	for x in range(1,4):
		for z in range(1,5):fill.append({"x":x-1,"z":z-1,"level":0,"kind":"room"})
	check(city.add_house_stroke(Fixture.ORIGIN+Vector2(1.8,1.8),fill).ok,"real other-house fill of all inner floor");network(city)
	check(not spaces(city).any(func(s):return s.evidence.geometry=="half_enclosure"),"solid inner space cannot remain a usable half enclosure")
	check(city.undo().ok,"Undo solid fill");network(city);check(spaces(city)==initial,"Undo restores original dry pocket")
	var water:Dictionary=city.add_water([Fixture.ORIGIN+Vector2(3.6,3.5),Fixture.ORIGIN+Vector2(3.6,7.2)] as Array[Vector2],4.8,"pond")
	check(water.ok,"real editable water floods inner floor");network(city)
	check(not spaces(city).any(func(s):return s.evidence.geometry=="half_enclosure"),"flooded pocket cannot claim usable courtyard floor")
	check(city.undo().ok,"Undo flooding");network(city);check(spaces(city)==initial,"Undo water restores evidence")
	var wall:Array=[]
	for x in range(3):wall.append({"x":x,"z":0,"level":0,"kind":"room"})
	check(city.add_house_stroke(Fixture.ORIGIN+Vector2(1.8,7.45),wall).ok,"detached mouth blocker with real wall geometry");network(city)
	check(spaces(city).any(func(s):return s.evidence.geometry=="half_enclosure" and not s.evidence.open_access),"blocked mouth retained honestly with no open-access claim")
	check(city.undo().ok,"Undo mouth blocker");network(city);check(spaces(city)==initial,"Undo restores accessible opening")
	var rear:String=""
	for cell:Dictionary in city.houses[0].cells:
		if cell.x==0 and cell.z==4:rear=cell.id
	check(city.remove_cell("h1",rear).ok,"remove actual enclosing wing tip");network(city)
	check(not spaces(city).any(func(s):return s.eligibility.district),"new opening never accidentally grants district")
	check(city.undo().ok,"Undo wing-tip room");network(city);check(spaces(city)==initial,"rebuild restores stable geometry signature")
	var corner:=Fixture.State.new();corner.initialize_free();var cells:Array=[]
	for x in range(5):cells.append({"x":x,"z":0,"level":0,"kind":"room"})
	for z in range(1,5):cells.append({"x":0,"z":z,"level":0,"kind":"room"})
	check(corner.add_house_stroke(Fixture.ORIGIN,cells).ok,"public L corner");network(corner)
	check(spaces(corner).size()==1 and spaces(corner)[0].stage=="trait","two-wall L corner cannot become three-sided enclosure")
	var filled:=Fixture.courtyard("filled","none");network(filled.city)
	check(spaces(filled.city)[0].stage=="trait","solid residential volume has no imaginary hull courtyard")
	var out:="res://验证记录/M84/half_enclosure_20261029";DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"cases":cases,"elapsed_seconds":(Time.get_ticks_msec()-started)/1000.}
	FileAccess.open(out+"/cpu.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("OPEN_COURTS ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)
