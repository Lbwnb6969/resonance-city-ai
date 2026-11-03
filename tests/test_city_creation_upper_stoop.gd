extends "res://tests/test_city_creation_layered_windows.gd"
const Plan=preload("res://scripts/world/city_creation_upper_stoop.gd")
const Network=preload("res://scripts/world/city_creation_network.gd")
static func fixture(yaw:float=0.,target:float=1.8)->Dictionary:
	var f:=Fixture.build("pastoral",yaw,true,2);var city:RefCounted=f.city;var origin:=Vector2(-28,-20);var normal:=Vector2.RIGHT.rotated(-yaw)
	var plateau:Dictionary=city.plan_terrain_target([origin+normal*4.] as Array[Vector2],4.,target);f.ok=f.ok and plateau.ok and city.apply_terrain_target(plateau).ok
	f.ok=f.ok and city.add_road([origin+normal*2.2,origin+normal*6.] as Array[Vector2],"path","none").ok;return f
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var cases:Array=[]
	for yaw:float in [0.,.4,PI*.5]:
		for target:float in [1.4,1.8,2.2,2.8]:
			var f:=fixture(yaw,target);check(f.ok,"public authored plateau/upper room/road source "+str(yaw)+" "+str(target));var city:RefCounted=f.city;var before:Dictionary=city.snapshot();var entries:=Plan.entries(city,city.houses[0]);cases.append({"yaw":yaw,"target":target,"entries":entries,"profile":city.road_profile(city.roads[0]).samples[0]})
			check(entries.is_empty() if target==2.8 else entries.size()==1,"real height threshold accepts only matching second-floor street "+str(target))
			check(city.snapshot()==before,"derived upper entry cannot mutate authored data")
			if entries.is_empty():continue
			var made:=build(city);check(made.house.get_meta("upper_stoops",[]).size()==1,"actual upper stoop publishes under original house");var walls:Array=made.house.find_children("Entrance_*","Node3D",true,false);check(walls.any(func(w):return w.get_meta("entrance",{}).get("upper_stoop",false)),"actual second-floor facade has a door instead of its previous window")
			var network:=Network.new();network.state=city;network._build_graph();check(network.selected_entrances.get("h1",{}).get("upper_stoop",false),"actual graph selects height-matched upper door");var key:String=network.connected_houses.get("h1","");check(network.positions.has(key) and absf(network.positions[key].y-entries[0].sill_y)<.002,"upper graph home stop sits on the actual upper sill")
			made.house.free();made.r.free()
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"cases":cases};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("UPPER_STOOP_CPU ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));quit(0 if report.ok else 1)
