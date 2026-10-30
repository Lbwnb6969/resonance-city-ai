extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Plan=preload("res://scripts/world/city_creation_placed_landmarks.gd")
const Legend=preload("res://scripts/world/city_creation_legendary_wonder_plan.gd")
const Street=preload("res://scripts/world/city_creation_street_wonder_plan.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
static func fixture()->RefCounted:
	var city:RefCounted=preload("res://tests/test_city_creation_legendary_wonders.gd").fixture()
	preload("res://tests/test_city_creation_legendary_wonders.gd").choose_crowns(city)
	city.creative_settings=city.CreationPolicy.Save.defaults();city.revision+=1;return city
static func empty_site(city:RefCounted,family:String,except_id:String="")->Vector2:
	for x:float in [-40.,-30.,-20.,20.,30.,40.]:
		for z:float in [-28.,-18.,-8.,8.,18.,28.]:
			if Plan.preview(city,family,Vector2(x,z),0.,except_id).ok:return Vector2(x,z)
	return Vector2(INF,INF)
func _initialize()->void:run.call_deferred()
func run()->void:
	var city:=fixture();check(Legend.unlocked(city).size()==4 and Legend.derive(city).crowns.is_empty(),"earned rights survive while free city never invents rooftop crowns")
	var legacy:RefCounted=preload("res://tests/test_city_creation_legendary_wonders.gd").fixture();preload("res://tests/test_city_creation_legendary_wonders.gd").choose_crowns(legacy)
	check(Legend.derive(legacy).crowns.size()==4 and not Plan.preview(legacy,"riverbank",Vector2(-40,-28)).ok,"classic city preserves four original crowns and requires explicit conversion")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path("res://验证记录/M81/units"))
	var converted:Dictionary=legacy.CreationPolicy.convert(legacy,"res://验证记录/M81/units/converted.json");var old_reader:=State.new()
	check(converted.ok and old_reader.load_city(converted.get("backup","")).ok and Legend.derive(old_reader).crowns.size()==4,"conversion preserves a real cold-loadable original crown city backup")
	check(Legend.unlocked(legacy).size()==4 and Legend.derive(legacy).crowns.is_empty() and legacy.placed_landmarks.is_empty(),"conversion presents permanent blueprints without automatic ground occupation")
	var pristine:Dictionary=city.snapshot();var fresh:=State.new();fresh.initialize_free();check(Plan.place(fresh,"riverbank",empty_site(fresh,"riverbank")).ok and Legend.unlocked(fresh).is_empty(),"free access places a landmark without manufacturing historical earned rights")
	var locations:Dictionary={}
	for family:String in Plan.SIZES:
		var at:=empty_site(city,family);check(is_finite(at.x),"find actual clear site "+family)
		if not is_finite(at.x):continue
		var result:=Plan.place(city,family,at);check(result.ok,"public place "+family)
		if not result.ok:continue
		var id:String=result.landmark_id;locations[family]=at
		var reader:=State.new();var snapshot:Dictionary=city.snapshot();var loaded:=reader.restore(JSON.parse_string(JSON.stringify(snapshot)))
		if not loaded.ok:print("LANDMARK_COLD_FAILURE ",loaded)
		check(loaded.ok and reader.placed_landmarks==city.placed_landmarks,"actual entity cold restore "+family)
		check(not Plan.place(city,family,at+Vector2(0,8)).ok,"one entity per earned family "+family)
		check(Plan.place(city,family,at,PI*.5,id).ok and is_equal_approx(float(Plan.row(city,id).yaw),PI*.5),"actual rotate transaction "+family)
		check(city.undo().ok and is_zero_approx(float(Plan.row(city,id).yaw)) and city.redo().ok and is_equal_approx(float(Plan.row(city,id).yaw),PI*.5),"rotate UndoRedo "+family)
		var moving:=empty_site(city,family,id);check(Plan.place(city,family,moving,0.,id).ok and Plan.position(Plan.row(city,id))==moving,"actual move preserves identity "+family)
		check(Plan.remove(city,id).ok and Legend.unlocked(city).has(family) and city.undo().ok and not Plan.row(city,id).is_empty() and city.redo().ok and Plan.row(city,id).is_empty(),"remove UndoRedo and permanent blueprint "+family)
		var issued:int=city._landmark_high_watermark
		check(Plan.place(city,family,at).ok and city._landmark_high_watermark>issued,"deleted or undone IDs never reused "+family)
	check(city.placed_landmarks.size()==4,"all four independent ground entities coexist")
	var first:Dictionary=city.placed_landmarks[0];var fp:=Plan.footprint(first);var at:=Plan.position(first)
	check(city.Rotation.Frame.contains(fp,at+Vector2(0,Plan.SIZES[first.blueprint].y*.5+.48)),"footprint includes physical entrance steps")
	check(not city.add_house(at).ok,"future house placement cannot overwrite landmark")
	check(not city.add_road([at-Vector2(4,0),at+Vector2(4,0)] as Array[Vector2],"path","none").ok,"future roads respect landmark footprint")
	check(not city.add_water([at] as Array[Vector2],2.4,"pond").ok,"future ponds respect landmark footprint")
	check(not city.add_terrain_stroke([at] as Array[Vector2],"raise",3.5).ok,"sculpting cannot dislodge authored foundation")
	var retained:Dictionary=city.snapshot()
	var malformed:=retained.duplicate(true);malformed.harmony_journey="bad"
	check(not city.restore(malformed).ok and city.snapshot()==retained,"malformed achievement payload fails before blueprint lookup without changing world")
	for field:Array in [["id","lm0"],["blueprint","unknown"],["yaw",INF],["position",[0,0]],["base_y",100.]]:
		var bad:=retained.duplicate(true);bad.placed_landmarks[0][field[0]]=field[1]
		check(not city.restore(bad).ok and city.snapshot()==retained,"invalid entity preserves open city "+str(field[0]))
	var duplicate:=retained.duplicate(true);duplicate.placed_landmarks[1].id=duplicate.placed_landmarks[0].id
	check(not city.restore(duplicate).ok,"duplicate landmark identity rejected")
	var overlap:=retained.duplicate(true);overlap.placed_landmarks[1].position=overlap.placed_landmarks[0].position
	check(not city.restore(overlap).ok,"cold restore cannot bypass overlapping footprints")
	var dry:=State.new();dry.initialize_free();check(not Plan.preview(city,"riverbank",Vector2(city.river_x(0),0),0.,first.id).ok,"water site rejected")
	check(not Plan.preview(city,"riverbank",Vector2(city.WORLD_RECT.end.x-.2,20),0.,first.id).ok,"out-of-bounds footprint rejected")
	var sloped:=fixture();check(sloped.add_terrain_stroke([Vector2(30,18)] as Array[Vector2],"raise",1.,1.).ok,"actual isolated sculpted slope")
	check(not Plan.preview(sloped,"riverbank",Vector2(30,18)).ok,"footprint samples reject actual raised slope")
	var crossing:=fixture();var river:float=crossing.river_x(0.)
	check(crossing.add_road([Vector2(river-7.,0),Vector2(river+7.,0)] as Array[Vector2],"path","none").ok and crossing.roads[-1].bridge,"actual isolated cross-river bridge")
	var bridge_site:=Plan.preview(crossing,"riverbank",Vector2(river+5.,0))
	check(not bridge_site.ok and str(bridge_site.message).contains("桥头"),"dry bridgehead remains reserved for real road access")
	var door:Dictionary=city.house_entrances("h1")[0]
	check(not Plan.preview(city,"riverbank",Vector2(door.at)+city.Frontage.Frame.normal(door)*1.2,0.,first.id).ok,"existing house doorway and approach cannot be occupied")
	var free:=State.new();free.initialize_free();free.add_house(Vector2(-25,-25));free.rotate_house("h1",.58)
	check(Street.derive(free).pockets.is_empty(),"rotated house alone cannot generate a free-city street pocket")
	free.rotate_house("h1",0.);check(free.add_road([Vector2(-29,-21.7),Vector2(-21,-21.7)] as Array[Vector2],"path","none").ok and not Street.derive(free).pockets.is_empty(),"real adjacent road and clear ground allow an unrotated pocket")
	var Index=preload("res://scripts/visual/city_creation_ground_obstacle_bins.gd");var Mask=preload("res://scripts/visual/city_creation_grass_mask.gd");var Meadow=preload("res://scripts/visual/city_creation_meadow.gd")
	var meadow:=Meadow.new();meadow.state=city;var entrances:Dictionary=meadow._entrances_by_house();var index:=Index.new();index.prepare(city,entrances)
	var block:=Vector2i((at/8.).floor());var before:=Mask.new();before.setup(city,block,entrances);var after:=Mask.new();after.setup(city,block,entrances,index)
	check(not before.visible(at,.25) and not after.visible(at,.25) and index.fingerprint(block)==meadow._local_obstacles(block,entrances),"actual authored footprint suppresses grass in both full and indexed ground paths");meadow.free()
	var network:=preload("res://scripts/world/city_creation_network.gd").new();network.prepare(city.snapshot(),{},[] as Array[Dictionary])
	check(network.state.placed_landmarks==city.placed_landmarks,"actual isolated navigation preparation retains authored entities")
	check(network._attachment_crosses_wall(at-Vector2(4,0),at+Vector2(4,0)),"live navigation attachment rejects a leg through actual landmark footprint")
	var support_before:Dictionary=Street.derive(city).support.duplicate();var presentation:Dictionary=city.creative_settings.presentation.duplicate();presentation.automatic_decoration=false
	check(city.CreationPolicy.set_preferences(city,{"presentation":presentation}).ok and Street.derive(city).support==support_before,"hiding automatic presentation preserves actual support")
	var hidden_network:=preload("res://scripts/world/city_creation_network.gd").new();hidden_network.prepare(city.snapshot(),{},[] as Array[Dictionary])
	check(network.graph==hidden_network.graph and network.connected_houses==hidden_network.connected_houses,"hidden presentation preserves actual published reachability graph")
	check(city.restore(retained).ok,"four-entity snapshot remains reusable after preferences")
	print("PLACED_LANDMARKS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"entities":city.placed_landmarks,"high":city._landmark_high_watermark}));quit(0 if failures.is_empty() else 1)
