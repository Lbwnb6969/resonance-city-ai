extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_shallow_stair_fixture.gd")
const Old=preload("res://tools/fixtures/city_creation_tradition_fixture.gd")
const Plan=preload("res://scripts/world/city_creation_shallow_stair_keys.gd")
const Keys=preload("res://scripts/world/city_creation_stair_keys.gd")
const Travel=preload("res://scripts/world/city_creation_travel.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Network=preload("res://scripts/world/city_creation_network.gd")
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func road_data(city)->Dictionary:
	var renderer:=Renderer.new();root.add_child(renderer)
	for node:Node in [renderer.shore,renderer.lilypads,renderer.wildlife]:renderer.add_child(node)
	renderer.state=city;city.prepare_ground_height();renderer._road_layout_key();renderer._prepare_road_layout();var data:Dictionary=renderer._prepare_road_data(city.roads[0]);renderer.free();return data
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var facts:Array=[]
	for curved:bool in [false,true]:
		var city:=Fixture.city(.8,curved);var original:Dictionary=city.snapshot();var road:Dictionary=city.roads[0];var profile:Dictionary=city.road_profile(road).duplicate(true);var before:=road_data(city);var travel:=Travel.new();travel.sync(city)
		print("SHALLOW_RISES ",curved," ",profile.treads.map(func(t):return t.rise))
		check(not profile.treads.is_empty() and profile.treads.all(func(t):return t.rise>=.65 and t.rise<1.) and before.stairs.key_light.is_empty() and before.stairs.key_dark.is_empty() and travel.sites.is_empty(),"ordinary free shallow slope preserves original stone and has no shallow interactive keys")
		var result:=Plan.choose(city,true);var saved:Dictionary=city.snapshot();travel.sync(city);var after:=road_data(city)
		var sites:Array=travel.sites.values().filter(func(s):return s.kind=="stair")
		check(result.ok and result.before_upgrade==original and saved.schema==32 and Plan.selected(city) and not sites.is_empty(),"explicit free setting creates version32 without card or account prerequisite")
		check(after.stairs.faces==before.stairs.faces and after.stairs.rails==before.stairs.rails and city.road_profile(road)==profile and city.roads==original.roads and city.terrain_strokes==original.terrain_strokes,"underlying terrain/profile, exact stair solids, rails and road authors remain identical")
		check(after.stairs.key_light.size()+after.stairs.key_dark.size()>0 and sites.size()==Keys.layout(road,profile,Keys.Palette.for_city(city),.65).sites.size() and sites.all(func(s):return absf(city.street_height(s.at)-s.height)<.001),"real key overlays and interactive sites consume identical physical treads")
		check(city.harmony_journey==original.harmony_journey and city.era_modifiers==original.get("era_modifiers",[]) and city.cozy_progression.is_empty(),"setting invents no card, growth epoch, XP, receipt or walking right")
		var revision:int=city.revision;check(Plan.choose(city,true).no_op and city.revision==revision,"repeated choice writes no transaction")
		var point:Dictionary=sites[0];check(travel.point_stair(point.at).id==point.id and travel.observe("actual-step",point.at-point.axis*.08,point.at+point.axis*.08,0.).any(func(s):return s.id==point.id),"existing pointer and crossing sensor identifies real shallow tread")
		var worker:=Network.new().prepare(city.snapshot(),{},[]);check(worker.prepared_travel.sites==travel.sites,"background network publishes the same shallow sites from schema32 author settings")
		check(city.undo().ok and city.creative_settings==original.creative_settings,"Undo restores exact original preference format");travel.sync(city);check(travel.sites.is_empty(),"Undo withdraws actual shallow interactive sites")
		check(city.redo().ok,"Redo restores setting");travel.sync(city);check(travel.sites.size()==sites.size(),"Redo restores same sites")
		var path:=out+"/stairs_"+str(curved)+".json";var cold:=Fixture.State.new();check(city.save_city(path).ok and cold.load_city(path).ok and cold.snapshot()==city.snapshot(),"real schema32 file preserves author settings and world")
		var restored:=Travel.new();restored.sync(cold);check(restored.sites==travel.sites,"cold network re-derives identical keys")
		check(Plan.choose(city,false).ok and city.creative_settings==original.creative_settings and city.snapshot().schema==original.schema,"disable removes new field and restores old schema/preferences")
		facts.append({"curved":curved,"treads":profile.treads.size(),"sites":sites.size(),"keys_triangles":(after.stairs.key_light.size()+after.stairs.key_dark.size())/3})
	var city:=Fixture.city();Plan.choose(city,true);var saved:Dictionary=city.snapshot();var reader:=Fixture.State.new();reader.restore(saved)
	for schema:int in [20,23,24,30,31]:
		var bad:Dictionary=saved.duplicate(true);bad.schema=schema;check(not reader.restore(bad).ok and reader.snapshot()==saved,"old schema rejects new shallow setting atomically")
	for value:Variant in [false,0,1,"true",{},null]:
		var bad:Dictionary=saved.duplicate(true);bad.creative_settings.presentation[Plan.FIELD]=value;check(not reader.restore(bad).ok and reader.snapshot()==saved,"noncanonical shallow flag rejected atomically")
	var legacy:=Old.slope();var old:Dictionary=legacy.snapshot();check(not Plan.choose(legacy,true).ok and legacy.snapshot()==old and Keys.minimum_rise(legacy)==1.,"legacy has unchanged original threshold and no free setting")
	check(Old.learn(legacy,"stone_step_carillon").ok and Keys.minimum_rise(legacy)==.65,"real old card retains shallow permission independently")
	var converted:=Old.slope();var original:Dictionary=converted.snapshot();var conversion:Dictionary=converted.CreationPolicy.convert(converted,out+"/converted.json");check(conversion.ok and FileAccess.file_exists(conversion.backup) and Keys.minimum_rise(converted)==1. and converted.roads==original.roads,"backed-up conversion retains ordinary stairs until explicit new choice")
	var low:=Fixture.city(.4);Plan.choose(low,true);var observer:=Travel.new();observer.sync(low);check(observer.sites.is_empty(),"actual below-threshold physical run does not become a keyboard")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("FREE_SHALLOW_STAIRS ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
