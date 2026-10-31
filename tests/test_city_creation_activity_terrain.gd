extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Layout=preload("res://scripts/world/city_creation_cafe_layout_context.gd")
const Surface=preload("res://scripts/world/city_creation_activity_surface.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const OUT:="res://验证记录/M84/activity_terrain_20261031"
var checks:=0
var failures:Array=[]
var facts:Dictionary={}
class GateCafe extends "res://scripts/world/city_creation_cafe.gd":
	var blocked_home:="h5"
	func try_visit(person:Dictionary,reached:String="")->bool:
		return false if person.home_id==blocked_home else super.try_visit(person,reached)
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func make_life(city:RefCounted)->Node3D:
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);return life
func until(life:Node3D,predicate:Callable,seconds:float=250.)->bool:
	for i in range(ceili(seconds/.05)):
		if predicate.call():return true
		life._process(.05)
	return predicate.call()
func cold(city:RefCounted,label:String)->RefCounted:
	city.prepare_ground_height();var other:=State.new();check(other.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok,label+" full JSON restore")
	other.prepare_ground_height()
	check(other.snapshot()==city.snapshot(),label+" complete normalized snapshot")
	if other.snapshot()!=city.snapshot():
		for key:String in city.snapshot():
			if city.snapshot()[key]!=other.snapshot().get(key):print("ACTIVITY_COLD_DIFF ",key," ",JSON.stringify(city.snapshot()[key],"",true,true)," -> ",JSON.stringify(other.snapshot().get(key),"",true,true))
	for key:String in ["raw_vertices","raw_offsets","vertices","offsets"]:check(city._ground_terrain.get(key)==other._ground_terrain.get(key),label+" exact "+key)
	check(city._road_heights.profiles==other._road_heights.profiles,label+" exact road profiles")
	return other
func late_guest()->void:
	var city:=State.new();city.initialize_empty()
	for x:float in [-30.,-24.,-18.,-12.,-6.]:city.add_house(Vector2(x,-12))
	city.set_house_role("h2","bakery");city.set_house_role("h4","garden_cafe");city.add_road([Vector2(-32,-10.1),Vector2(-4,-10.1)] as Array[Vector2],"path","none")
	var life:=make_life(city);life.cafe=GateCafe.new(life);life.cafe.sync()
	check(until(life,func():return life.cafe.groups.has("h4") and life.cafe.groups.h4.phase=="tea"),"two real purchasers can sit while third participant is held outside invitation")
	life._process(2.);check(until(life,func():return city.has_cafe_credit("h5"),100.),"third prospective visitor earns real purchase qualification")
	# Keep this actual seated checkpoint before it can finish its six seconds.
	var measured:float=life.cafe.groups.h4.elapsed
	city.set_journey_checkpoint(life.checkpoint());check(city.CreationPolicy.convert(city,OUT+"/late_guest.json").ok,"late guest fixture uses real converted ledgers")
	city.apply_terrain_policy(city.plan_terrain_policy());life._process(0.)
	var at:Vector2=life.cafe.layouts.h4.center;city.add_terrain_stroke([at] as Array[Vector2],"raise",1.,.4);life._process(0.)
	var guest:Dictionary=life.cafe._resident("h5")
	check(not life.cafe.layouts.h4.is_empty() and life.cafe.terrain_resume.has("h4") and life.cafe.terrain_resume.h4.phase=="tea","real relocating two-person party preserves its measured dwell")
	check(city.has_cafe_credit("h5") and not guest.has("cafe_visit") and not life.cafe._approach(guest.node.position,"h4",2).is_empty(),"late guest has unused real credit and a physical approach to spare chair")
	life.cafe.blocked_home="";check(not life.cafe.try_visit(guest) and life.cafe.groups.h4.participants.size()==2,"late qualified visitor cannot inherit prior party dwell")
	check(life.cafe.terrain_resume.h4.elapsed==measured,"rejecting late guest keeps exactly the original dwell")
	life.queue_free()
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));var began:=Time.get_ticks_msec()
	var fresh:=State.new();fresh.initialize_free();check(fresh.terrain_policy==2 and fresh.snapshot().schema==23,"new free cities use versioned liberated activity terrain")
	var city:=State.new();city.initialize();city.set_house_role("h4","garden_cafe");var life:=make_life(city)
	check(until(life,func():return life.cafe_status("h4").phase=="tea"),"real stocked bread purchases produce a genuine seated party")
	life._process(2.);check(city.set_journey_checkpoint(life.checkpoint()).ok,"actual mid-tea checkpoint validates")
	check(city.CreationPolicy.convert(city,OUT+"/converted.json").ok and city.terrain_policy==1,"conversion preserves old terrain policy and backs up real legacy records")
	life._process(0.);var before:Dictionary=city.snapshot();var elapsed:float=life.cafe.groups.h4.elapsed
	var old_plan:Dictionary=life.cafe.layouts.h4.duplicate(true);var positions:Dictionary={}
	for person:Dictionary in life.residents:positions[person.home_id]=person.node.position
	var plan:=city.plan_terrain_policy();check(plan.ok and city.snapshot()==before,"policy preview preserves all author and earned records")
	check(city.apply_terrain_policy(plan).ok and city.snapshot().schema==23,"explicit policy commit records schema23")
	life._process(0.)
	check(life.cafe.groups.has("h4") and life.cafe.groups.h4.phase=="tea" and life.cafe.groups.h4.elapsed==elapsed,"same physical seats retain in-progress normalized tea time")
	for person:Dictionary in life.residents:check(Vector2(person.node.position.x,person.node.position.z)==Vector2(positions[person.home_id].x,positions[person.home_id].z),"adoption never teleports residents in plan view")
	for key:String in ["houses","plants","roads","cafe_credits","cafe_progress","life_progress","harmony_journey","house_concerts","matinee_credits"]:check(city.snapshot().get(key)==before.get(key),"adoption retains actual "+key)
	check(city.set_journey_checkpoint(life.checkpoint()).ok,"adopted live checkpoint validates")
	var loaded:=cold(city,"adoption");var resumed:=make_life(loaded)
	check(resumed.cafe.groups.has("h4") and resumed.cafe.groups.h4.elapsed==elapsed,"cold adopted city resumes actual seated dwell")
	resumed.queue_free()
	var at:Vector2=old_plan.center;check(city.add_terrain_stroke([at] as Array[Vector2],"raise",3.,1.).ok,"sculpt through former cafe pad")
	life._process(0.);check(city.ground_height(at)>.25,"former broad cafe pad no longer flattens the hill")
	var new_plan:Dictionary=life.cafe.layouts.get("h4",{});facts.layouts={"before":old_plan,"after":new_plan};facts.migration=life.cafe.terrain_resume.duplicate(true)
	check(new_plan.is_empty() or new_plan!=old_plan,"terrain-only edit invalidates physical layout cache")
	if not new_plan.is_empty():
		var copy:Dictionary=new_plan.duplicate(true);check(Surface.fit(city,copy),"replanned table and all chairs have real terrain support")
		for seat:Vector2 in new_plan.seats:
			var route:Array[Vector2]=life.cafe.layout_api.route(city,"h4",new_plan.entrance,seat)
			check(not route.is_empty(),"actual new seats have legal approaches")
			for i in range(1,route.size()):check(Surface.walkable(city,route[i-1],route[i]),"approach follows walkable final heights")
	check(life.cafe.groups.has("h4"),"terrain edit retains the original party intent")
	if life.cafe.terrain_resume.has("h4"):check(life.cafe.terrain_resume.h4.elapsed==elapsed,"relocation or suspension keeps earned dwell without spending credits")
	check(city.set_journey_checkpoint(life.checkpoint()).ok,"migrating or suspended checkpoint validates")
	var saved:Dictionary=city.snapshot();check(city.save_city(OUT+"/suspended.json").ok,"real migration checkpoint saves atomically")
	loaded=cold(city,"terrain edit");resumed=make_life(loaded)
	check(resumed.cafe.groups.has("h4") and resumed.cafe.terrain_resume==life.cafe.terrain_resume,"cold migration retains phase, pending time and suspension")
	check(loaded.life_progress==city.life_progress and loaded.cafe_credits==city.cafe_credits,"cold resume invents no completions or spending");resumed.queue_free()
	check(city.undo().ok,"Undo sculpt restores former surface");life._process(0.)
	check(life.cafe.groups.has("h4") and life.cafe.groups.h4.elapsed==elapsed and life.cafe.groups.h4.phase=="tea","Undo restores chairs under actual residents and resumes the retained dwell")
	check(city.set_journey_checkpoint(life.checkpoint()).ok,"post-Undo checkpoint validates")
	var departure_world:Dictionary=city.snapshot()
	check(city.redo().ok,"Redo sculpt");life._process(0.);check(city.set_journey_checkpoint(life.checkpoint()).ok,"post-Redo checkpoint validates")
	var data:Dictionary=city.snapshot()
	for change:Callable in [func(d):d.schema=22,func(d):d.terrain_policy=3,func(d):d.creative_settings.creation_policy="legacy",func(d):d.terrain_policy=2.5]:
		var bad:Dictionary=data.duplicate(true);change.call(bad);check(not State.new().restore(bad).ok,"invalid policy payload rejected")
	if data.journey_checkpoint.has("cafe_terrain"):
		var bad:Dictionary=data.duplicate(true);bad.journey_checkpoint.cafe_terrain.groups.h4.elapsed=6.;check(not State.new().restore(bad).ok,"forged completed pending dwell rejected")
	var old:=State.new();old.initialize_free(false);var legacy_free:Dictionary=old.snapshot();legacy_free.erase("terrain_policy");legacy_free.schema=20
	check(old.restore(legacy_free).ok and old.terrain_policy==1 and old.snapshot()==legacy_free,"Schema20 free load preserves original policy and snapshot")
	old.set_house_role("h4","garden_cafe");var context:=Layout.new();var table:Dictionary=context.layout(old,"h4");old.add_terrain_stroke([Vector2(table.center)] as Array[Vector2],"raise",3.,1.)
	check(old.ground_height(table.center)<.01,"old free cafe pad remains intact until explicit adoption")
	var original:Dictionary=old.snapshot();var pending:=old.plan_terrain_policy();old.add_house(Vector2(-32,-24));check(not old.apply_terrain_policy(pending).ok,"stale policy preview rejected")
	var legacy:=State.new();legacy.initialize();check(not legacy.plan_terrain_policy().ok,"legacy operating city cannot silently adopt free terrain")
	var departing:=State.new();check(departing.restore(departure_world).ok,"real seated progress restored for departure regression");var exits:=make_life(departing)
	check(until(exits,func():return exits.cafe.groups.has("h4") and exits.cafe.groups.h4.phase=="leaving",10.),"actual remaining dwell settles before departure")
	check(exits.cafe.TerrainVisits.replan(exits.cafe,"h4",exits.cafe.layouts.h4),"real departure replans after furniture changes")
	check(until(exits,func():return not exits.cafe.groups.has("h4"),70.),"all actual departing visitors finish their exit")
	check(exits.cafe.terrain_resume.is_empty() and departing.set_journey_checkpoint(exits.checkpoint()).ok,"last departure clears pending intent and saves valid checkpoint");exits.queue_free()
	var open:=State.new();open.initialize_free();open.add_house(Vector2(-24,-12));open.set_house_role("h1","garden_cafe")
	var shared:=Layout.new();var first:Dictionary=shared.layout(open,"h1");check(not first.is_empty(),"new free cafe initially has a supported table")
	open.add_terrain_stroke([Vector2(first.center)] as Array[Vector2],"raise",1.5,1.)
	var shifted:Dictionary=shared.layout(open,"h1");check(not shifted.is_empty() and shifted.center!=first.center,"available open land produces actual furniture relocation instead of closure")
	check(shifted==Layout.new().layout(open,"h1"),"terrain-aware hot layout equals independent cold layout")
	if not shifted.is_empty():
		var support:Dictionary=shifted.duplicate(true);check(Surface.fit(open,support),"relocated furniture fits the final protected field")
		for seat:Vector2 in shifted.seats:
			var route:Array[Vector2]=shared.route(open,"h1",shifted.entrance,seat);check(not route.is_empty(),"relocated open-land chair remains reachable")
	check(not Surface.walkable(open,first.center,first.center+Vector2(2,0)),"steep former furniture footprint is not a false walking shortcut")
	var hollow:=Vector2(-30,-18);open.add_terrain_stroke([hollow] as Array[Vector2],"lower",2.,.8)
	var frozen_life:=make_life(open);frozen_life._capture_published_surface()
	check(open.street_height(hollow)<0. and frozen_life._published_surface.street_height(hollow)==open.street_height(hollow),"frozen published surface preserves physical negative elevation")
	var fork:RefCounted=preload("res://scripts/world/city_creation_chemistry_preview.gd").fork(open)
	check(fork.terrain_policy==open.terrain_policy and fork.street_height(hollow)==open.street_height(hollow),"detached construction preview keeps city terrain semantics");frozen_life.queue_free()
	var venue:=State.new();venue.initialize_free();venue.add_house(Vector2(-24,-24));venue.set_house_role("h1","venue")
	var entry:Dictionary=venue.house_entrances("h1")[0];var gather:Vector2=entry.wall_at+Frame.normal(entry)*2.2
	venue.add_terrain_stroke([gather] as Array[Vector2],"raise",2.,.8);check(venue.ground_height(gather)>.25,"new free venue gathering area no longer flattens the sculpted surface")
	var preserved:=State.new();preserved.initialize_empty();preserved.add_house(Vector2(-24,-24));preserved.set_house_role("h1","venue");preserved.add_terrain_stroke([gather] as Array[Vector2],"raise",2.,.8)
	check(preserved.ground_height(gather)<.01,"legacy venue keeps its original physical gathering pad")
	for value:Variant in [null,"invalid",[]]:
		var bad:Dictionary=saved.duplicate(true);bad.journey_checkpoint=value;check(not State.new().restore(bad).ok,"malformed checkpoint returns validation failure")
	for arg:String in OS.get_cmdline_user_args():
		if not arg.begins_with("--baseline-protection="):continue
		var baseline=load(arg.trim_prefix("--baseline-protection=")).new();var previous:Array=baseline.build(old,old._road_heights.profiles);var actual:Array=old._terrain_protection.build(old,old._road_heights.profiles)
		check(previous==actual,"old free protection rows match exact pre-change source")
	late_guest();life.queue_free();await process_frame
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/cpu.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("ACTIVITY_TERRAIN ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
