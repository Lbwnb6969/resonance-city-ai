extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Plan=preload("res://scripts/world/city_creation_water_ghat.gd")
const Seats=preload("res://scripts/world/city_creation_bench_seats.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Bench=preload("res://scripts/world/city_creation_bench_visits.gd")
static func fixture(yaw:float=0.)->Dictionary:
	var city:=State.new();city.initialize_free();var origin:=Vector2(-28,-20);var axis:=Vector2.RIGHT.rotated(-yaw);var side:=Vector2.DOWN.rotated(-yaw)
	var ok:bool=city.add_water([origin-side*4.,origin+side*4.] as Array[Vector2],4.,"pond").ok
	var made:Dictionary=city.add_road([origin-axis*7.,origin-axis*2.8] as Array[Vector2],"path","none");ok=made.ok and ok
	if not ok:print("GHAT_FIXTURE ",JSON.stringify(made))
	return {"city":city,"ok":ok}
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(value:bool,label:String)->void:
	checks+=1
	if not value:failures.append(label);push_error(label)
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var facts:Array=[]
	for yaw:float in [0.,.4,PI*.5]:
		var f:=fixture(yaw);check(f.ok,"public pond and water-facing road source "+str(yaw));var city:RefCounted=f.city;var original:Dictionary=city.snapshot()
		if not f.ok:continue
		check(Plan.all(city).is_empty() and Seats.plans(city).is_empty(),"ordinary old water-side road remains unchanged before explicit adoption")
		var available:Array=Plan.preview(city,city.roads[0]).plans;facts.append({"yaw":yaw,"available":available,"endpoint_clearance":city.water_clearance(Vector2(city.roads[0].points[-1][0],city.roads[0].points[-1][1])),"endpoint_height":city.street_height(Vector2(city.roads[0].points[-1][0],city.roads[0].points[-1][1]))})
		check(not available.is_empty(),"actual low water-edge geometry can host four steps")
		var chosen:=Plan.choose(city,"r1",true);check(chosen.ok and city.snapshot().schema==33 and chosen.before_upgrade==original,"first explicit adoption upgrades only to next free schema and returns original backup snapshot")
		if not chosen.ok:continue
		var plan:Dictionary=Plan.all(city)[0];check(plan.steps.size()==4 and plan.steps[1].y>Plan.WATER+.04 and plan.steps[-1].y<Plan.WATER,"four real treads include second dry step and submerged last step")
		var authors:Dictionary=city.snapshot();var file:=out+"/ghat_"+str(yaw)+".json";check(city.save_city(file).ok,"actual schema33 disk save");var reader:=State.new();check(reader.load_city(file).ok and reader.snapshot()==authors and Plan.all(reader)==Plan.all(city),"schema33 author values and pure geometry equal independent disk cold read")
		check(city.undo().ok and not city.roads[0].has("water_ghat") and city.redo().ok and city.roads[0].water_ghat,"Undo/Redo preserves optional true-only author choice")
		check(Plan.choose(city,"r1",false).ok and not city.roads[0].has("water_ghat"),"disable omits field instead of persisting false")
		for value:Variant in [false,1,"true"]:
			var bad:Dictionary=authors.duplicate(true);bad.roads[0].water_ghat=value;var clean:=State.new();var before:Dictionary=clean.snapshot();check(not clean.restore(bad).ok and clean.snapshot()==before,"malformed optional intent rejects atomically")
		var old:Dictionary=authors.duplicate(true);old.schema=32;check(not State.new().restore(old).ok,"old schema cannot silently accept new authored field")
		var source:=State.new();check(source.restore(original).ok and source.snapshot().schema==original.schema and not source.roads[0].has("water_ghat"),"opening an old work never silently adopts the new geometry rule")
		var forged:Dictionary=authors.duplicate(true);var end:=Vector2(forged.roads[0].points[-1][0],forged.roads[0].points[-1][1]);var axis:=Vector2.RIGHT.rotated(-yaw);end+=axis*.6;forged.roads[0].points[-1]=[end.x,end.y]
		var reject:=State.new();var empty:Dictionary=reject.snapshot();check(not reject.restore(forged).ok and reject.snapshot()==empty,"marked water-edge exception cannot authorize a road penetrating the water core")
	var f:=fixture();var city:RefCounted=f.city
	check(city.add_house(Vector2(-34,-18.4)).ok and city.rotate_house("h1",PI).ok and Plan.choose(city,"r1",true).ok,"real household connects to a source road with explicit dry-step rest")
	var life:=Life.new();root.add_child(life);life.setup(city);life.set_process(false);life.time=30.;var seats:=Seats.plans(city);var id:String=seats.keys()[0]
	check(life._network.ghat_seats.has(id) and life.graph.has(id),"Network publication prebinds actual dry-step node and rest identity")
	var r:Dictionary=life.residents[0];r.wait=0.;r.paused=true;r.route=[];r.index=0;r.dwell_id="";var before:=[city.cozy_progression.duplicate(true),city.bakery_supply.duplicate(true),city.life_progress.duplicate(true)]
	check(Bench.start(life,r,id),"actual resident can reserve a reachable stone step using existing visit flow")
	var arrived:=false
	for i in range(600):
		Bench.tick(life,r,.05)
		if r.get("bench_visit",{}).get("phase","")=="seated":arrived=true;break
	check(arrived and r.node.position.y>Plan.WATER+.04,"actual resident walks to and sits on the real second dry step")
	check(before==[city.cozy_progression,city.bakery_supply,city.life_progress],"stone-step rest creates no XP, goods, sales or life receipt")
	Bench.release(life,r);r.node.position=life.positions[id+"/landing"]+Vector3.UP*.1;var quiet:={"current":id,"turn":0,"wait":0.,"index":1,"route":[r.node.position,life.positions[id]+Vector3.UP*.1],"node":r.node,"origin":life.positions[id],"seed":1,"previous":""}
	for i in range(100):
		life.quiet_walk._advance(quiet,.05)
		if quiet.has("ghat_rest"):break
	check(quiet.get("ghat_rest","")==id and quiet.wait==8.,"quiet walker reaching the prebound dry node looks at the water without an economic visit")
	check(absf(r.node.position.y-float(seats[id].y)-.1)<.0001,"quiet walker follows real dry-tread height instead of the old round road cap")
	life.free()
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"facts":facts};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("WATER_GHAT_CPU ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));quit(0 if report.ok else 1)
