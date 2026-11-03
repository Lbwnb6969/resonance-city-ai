extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Plan=preload("res://scripts/world/city_creation_plaza_pergola.gd")
const Network=preload("res://scripts/world/city_creation_network.gd")
const Loops=preload("res://tests/test_city_creation_plaza_loops.gd")
const Counters=preload("res://scripts/world/city_creation_epoch_counters.gd")
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
static func fixture(path:String,yaw:float=0.)->RefCounted:
	var f:=Loops.fixture(8.,yaw);var city:RefCounted=f.city;city.begin_progression_epoch(path);var row:Dictionary=Plan.Plazas.faces(city)[0];Plan.Plazas.choose(city,row.loop_key,"fan_stone")
	# Explicit isolated earned-level fixture, not a claim of live XP awarded.
	city.cozy_progression.level=3;return city
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var facts:Array=[]
	for yaw:float in [0.,.4,PI*.5]:
		var city:RefCounted=fixture(out+"/epoch_"+str(yaw)+".json",yaw);var old:Dictionary=city.snapshot();city.cozy_progression.level=2;var low:Dictionary=city.snapshot();check(not Plan.set_enabled(city,true).ok and city.snapshot()==low,"Lv2 cannot enable the new optional furnishing "+str(yaw));city.cozy_progression.level=3
		var spaces:Array=Plan.Plazas.spaces(city);var counters:Dictionary=Counters.current(city);check(Plan.plans(city).is_empty(),"eligible paved plaza keeps existing appearance until explicitly selected "+str(yaw))
		var base:=Network.new();base.prepare(city.snapshot(),{},[]);check(Plan.set_enabled(city,true).ok and Plan.plans(city).size()==1,"Lv3 existing preference enables one real unobstructed plaza furnishing "+str(yaw))
		if Plan.plans(city).is_empty():continue
		var row:Dictionary=Plan.plans(city)[0]
		check(Plan.Plazas.spaces(city)==spaces and Counters.current(city)==counters and city.houses==old.houses and city.roads==old.roads and city.plants==old.plants and city.plaza_loops==old.plaza_loops,"pure scenery choice changes neither author geometry nor civic/music receipts "+str(yaw))
		var network:=Network.new();network.prepare(city.snapshot(),{},[]);var seats:Dictionary=network.get_meta("plaza_seats",{});check(seats.size()==4 and network.road_edges==base.road_edges,"isolated worker copies actual choices and adds four rest points without inventing road edges "+str(yaw));var ids:Array=seats.keys();var safe:=true;var obstacles:=Plan.Obstacles.collect(city)
		for a:String in network.graph:
			if not a.begins_with("plaza_rest/") or a.ends_with("/street"):continue
			for b:String in network.graph[a]:
				var from:=Vector2(network.positions[a].x,network.positions[a].z);var to:=Vector2(network.positions[b].x,network.positions[b].z)
				if not Plan.clear_leg(city,row,from,to,obstacles):safe=false
		check(safe,"actual rest graph edges clear basin posts water and authored volumes "+str(yaw))
		var port:String=ids[0].get_slice("/",0)+"/"+ids[0].get_slice("/",1)+"/"+ids[0].get_slice("/",2)+"/street"
		var actor:={"current":port,"previous":network.road_edges.keys()[0],"origin":network.positions[port]};var next:String=preload("res://scripts/world/city_creation_plaza_pergola_network.gd").next_key(network,actor);check(seats.has(next),"actual branch discovery directs an arriving real walker into the plaza "+str(yaw));actor.previous=next;check(preload("res://scripts/world/city_creation_plaza_pergola_network.gd").next_key(network,actor).is_empty(),"returning visitor exits normally onto the original street "+str(yaw))
		var snapshot:Dictionary=city.snapshot();check(snapshot.schema==34 and city.save_city(out+"/plaza_"+str(yaw)+".json").ok,"existing schema34 saves presentation choice without redundant plaza state "+str(yaw));var cold:=State.new();check(cold.load_city(out+"/plaza_"+str(yaw)+".json").ok and cold.snapshot()==snapshot and Plan.plans(cold)==Plan.plans(city),"atomic cold read reproduces exact real furnishing plans "+str(yaw))
		check(city.undo().ok and Plan.plans(city).is_empty() and city.redo().ok and Plan.plans(city).size()==1,"one preference Undo Redo exactly withdraws and restores derived geometry "+str(yaw))
		check(city.CreationPolicy.set_progression_enabled(city,false,out+"/paused_"+str(yaw)+".json").ok and Plan.plans(city).size()==1,"pausing the current account retains earned optional appearance "+str(yaw))
		var prefs:Dictionary=city.creative_settings.presentation.duplicate(true);prefs.automatic_decoration=false;check(city.CreationPolicy.set_preferences(city,{"presentation":prefs}).ok and Plan.plans(city).is_empty() and Plan.Plazas.spaces(city)==spaces,"automatic scenery off preserves paved civic eligibility "+str(yaw));city.undo()
		var center:Vector2=row.center;check(city.add_house(center).ok and Plan.plans(city).is_empty() and city.creative_settings.presentation[Plan.FIELD],"real authored house wins center clearance while optional intent is retained "+str(yaw));check(city.undo().ok and Plan.plans(city).size()==1,"Undo authored obstruction restores the original furnishing "+str(yaw))
		check(city.place_plant(center,"weeping_willow").ok and Plan.plans(city).is_empty() and city.creative_settings.presentation[Plan.FIELD],"player-authored plant wins actual center clearance without being deleted "+str(yaw));check(city.undo().ok and Plan.plans(city).size()==1,"Undo restores furnishing after original plant returns to prior author state "+str(yaw))
		check(city.add_water([center+Vector2(-.5,0),center+Vector2(.5,0)] as Array[Vector2],1.8,"pond").ok and Plan.plans(city).is_empty(),"actual water interrupts furnishing instead of growing a false dry basin foundation "+str(yaw));check(city.undo().ok and Plan.plans(city).size()==1,"Undo water restores original optional furnishing "+str(yaw))
		check(city.PlacedLandmarks.place(city,"riverbank",center,float(row.yaw)).ok and Plan.plans(city).is_empty(),"real authored landmark takes priority over derived furnishing "+str(yaw));var blocked:=Network.new();blocked.prepare(city.snapshot(),{},[]);check(blocked.get_meta("plaza_seats",{}).is_empty(),"isolated route worker withdraws all rests from actual landmark-blocked center "+str(yaw));check(city.undo().ok and Plan.plans(city).size()==1,"landmark Undo restores same optional furnishing "+str(yaw));facts.append({"yaw":yaw,"seats":seats.size(),"road_edges_unchanged":true})
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"facts":facts};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("PLAZA_PERGOLA_CPU ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
