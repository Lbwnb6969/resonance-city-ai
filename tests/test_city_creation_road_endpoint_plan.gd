extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Plan=preload("res://scripts/world/city_creation_road_endpoint_plan.gd")
const Geometry=Plan.Geometry
var checks:=0
var failures:Array=[]
var out:=""
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func resolve(city:RefCounted,path:Array[Vector2],mode:int,control:Vector2=Vector2.INF,enabled:bool=true)->Dictionary:
	return Plan.plan(city,path,path[-1],control,mode,[],enabled,1.25,"path","")
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec()
	var city:=State.new();city.initialize_free()
	check(city.add_road([Vector2(-32,-15),Vector2(-18,-15)],"path","none").ok,"actual saved reference road")
	var before:=city.snapshot();var a:=Vector2(-28,-25);var b:=Vector2(-25,-15.7);var control:=Vector2(-22,-25)
	for mode in range(3):
		var path:Array[Vector2]=Geometry.freehand([a,Vector2(-27,-22),Vector2(-26,-18),b]) if mode==0 else Geometry.straight(a,b) if mode==1 else Geometry.quadratic(a,control,b)
		var planned:=resolve(city,path,mode,control if mode==2 else Vector2.INF)
		check(planned.valid.ok and planned.points[-1].y==-15.,"mode %d targets the real saved segment"%mode)
		check(city.snapshot()==before,"mode %d preview preserves complete author state and IDs"%mode)
		if mode==1:
			var axis:Vector2=(planned.points[-1]-a).normalized()
			check(planned.points.all(func(p):return absf((p-a).cross(axis))<.00001),"straight target rebuilds all samples on one line")
		if mode==0:check(planned.points[planned.points.size()/2]!=path[path.size()/2],"freehand correction distributes displacement before the terminal sample")
		var off:=resolve(city,path,mode,control if mode==2 else Vector2.INF,false)
		check(off.points==path and off.closure.is_empty(),"Alt removes endpoint assistance for mode %d"%mode)
		var cold:=State.new();check(cold.restore(before).ok,"isolated reference cold restore")
		var result:Dictionary=cold.add_road(planned.points,"path","none")
		check(result.ok and cold.roads[-1].points[-1]==[planned.points[-1].x,planned.points[-1].y],"commit keeps the exact approved endpoint")
		check(cold.undo().ok and cold.roads==city.roads and cold.redo().ok,"one road transaction supports Undo/Redo")
	var hit:=Plan.Targets.pick(city,Vector2(-18.4,-15.2))
	check(hit.kind=="endpoint" and hit.at==Vector2(-18,-15),"saved endpoint has priority over nearer segment interior")
	check(Plan.start(city,Vector2(-25,-15.4),true)==Vector2(-25,-15) and Plan.start(city,Vector2(-25,-15.4),false)==Vector2(-25,-15.4),"all-mode start resolver respects Alt")
	check(city.add_road([Vector2(-25,-22),Vector2(-25,-8)],"path","none").ok,"actual crossing fixture")
	hit=Plan.Targets.pick(city,Vector2(-25.2,-15.2))
	check(hit.kind=="intersection" and hit.at==Vector2(-25,-15),"real segment intersection outranks projection")
	var expected:Dictionary=hit.duplicate();city.roads.reverse()
	check(Plan.Targets.pick(city,Vector2(-25.2,-15.2))==expected,"candidate tie choice is independent of road traversal order")
	var doors:=State.new();doors.initialize_free();check(doors.add_house(Vector2(-25,-10)).ok,"real ground house")
	var entry:Dictionary=doors.house_entrances(str(doors.houses[0].id))[0];var raw:Vector2=entry.at+Vector2(.2,.2)
	hit=Plan.Targets.pick(doors,raw)
	check(hit.kind=="door" and hit.entry_at==entry.at and hit.wall_at==entry.wall_at,"door target retains actual exposed entrance and wall identities")
	var end:Vector2=entry.at+Vector2(0,6);var plan:=resolve(doors,Geometry.straight(end,raw),1)
	check(plan.valid.ok and plan.points[-1]==hit.at and plan.label.contains("门阶"),"whole straight approach validates at a real doorway")
	var parallel:=resolve(doors,Geometry.straight(entry.at+Vector2(6,0),raw),1)
	check(parallel.closure.is_empty() and parallel.points[-1]==raw,"wall-parallel road is not falsely labeled as a door connection")
	check(doors.rotate_house(str(doors.houses[0].id),PI*.5).ok,"public house rotation")
	entry=doors.house_entrances(str(doors.houses[0].id))[0];hit=Plan.Targets.pick(doors,entry.at+entry.outward*.2)
	check(hit.kind=="door" and hit.entry_at==entry.at,"rotated actual frontage supplies endpoint")
	# Use an exact authored centreline: upgrade matching precedes all assistance.
	var original_points:Array[Vector2]=[]
	for p:Array in city.roads[0].points:original_points.append(Vector2(p[0],p[1]))
	var upgrade:=resolve(city,original_points,1)
	check(not str(upgrade.valid.upgrade_road_id).is_empty() and upgrade.closure.is_empty() and upgrade.points==original_points,"retrace keeps exact original identity and points")
	var chain:Array[Vector2]=[Vector2(-30,-25),Vector2(-27,-22)]
	var locked:Array[Vector2]=chain.duplicate();locked.append(Vector2(-25,-15.7))
	var joined:=Plan.plan(city,locked,locked[-1],Vector2.INF,1,chain,true,1.25,"path","")
	check(joined.points[0]==chain[0] and joined.points[1]==chain[1],"held straight chain retains authored intermediate locks")
	var river:=State.new();river.initialize_empty()
	var crossing:=resolve(river,Geometry.straight(Vector2(.3,0),Vector2(5.7,0)),1)
	check(crossing.valid.ok and crossing.valid.bridge and river.water_clearance(crossing.points[0])>=.665 and river.water_clearance(crossing.points[-1])>=.665,"real crossing retains dry bank extension and complete validation")
	var fixed:=State.new();fixed.initialize_free();check(fixed.add_road([Vector2(-31,-20),Vector2(-19.7,-20)],"path","none").ok,"fixed endpoint circle counterexample fixture")
	var fixed_control:=Vector2(-25,-25);var fixed_end:=Vector2(-19.7,-20)
	var arc:=resolve(fixed,Geometry.quadratic(Vector2(-30,-20),fixed_control,fixed_end),2,fixed_control)
	check(arc.valid.ok and arc.points[-1].distance_to(fixed_end)<.0001 and arc.closure.kind=="endpoint","equal-arm lock never slides a selected endpoint into the road segment")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("ROAD_ENDPOINT_PLAN ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
