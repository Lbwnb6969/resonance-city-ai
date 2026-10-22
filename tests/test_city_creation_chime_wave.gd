extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Catalog=preload("res://scripts/audio/city_creation_music_catalog.gd")
const Harmony=preload("res://scripts/audio/city_creation_cluster_harmony.gd")
const Acoustic=preload("res://scripts/audio/city_creation_acoustic_field.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var city:=State.new();city.initialize_empty()
	for x:float in [-28.,-23.5,-19.,-14.5,-10.]:check(city.add_house(Vector2(x,-18.)).ok,"public placement")
	check(city.add_road([Vector2(-31,-16.45),Vector2(-7,-16.45)] as Array[Vector2]).ok and city.set_house_role("h2","workshop").ok,"real connected workshop")
	for id:String in ["h1","h3","h4","h5"]:
		check(city.produce_craft("h2",1) and city.reserve_craft("h2","h3",id) and city.complete_craft("h2","h3",id),"conserved delivery to "+id)
	var town:=Renderer.new();root.add_child(town);town.setup(city);town.set_process(false);town.wildlife.set_process(false)
	var original:=city.snapshot();var identities:Dictionary={}
	for id:String in town.house_roots:identities[id]=town.house_roots[id].get_instance_id()
	check(town.craft.chime_rigs.size()==4,"four actual delivered eave chimes register their household ownership")
	var records:Dictionary=Catalog.prepare(city).houses
	var acoustic:=Acoustic.new();acoustic.set_view(Vector2(-19,-18),32.);acoustic.evaluate(records,[],[])
	var matched:=true;var clocks:=true;var peaks:Dictionary={}
	for row:Dictionary in town.craft.chime_rigs:
		var id:String=row.house_id
		var clock:float=3.*float(records[id].cluster_rank)/float(records[id].cluster_size)+24.
		var wave:Dictionary=Harmony.choral_wave(records,acoustic,clock)
		town.update_city_resonance_visuals({"audible":true,"clock_sec":clock,"choral_wave":wave})
		for binding:Dictionary in town.craft.chime_rigs:
			matched=matched and is_equal_approx(binding.value.g,wave[binding.house_id]) and binding.value.b==1.
			matched=matched and is_equal_approx(float(town.resonance.rigs[binding.house_id].material.get_shader_parameter("response")),wave[binding.house_id])
		clocks=clocks and is_equal_approx(float(town.craft.material.get_shader_parameter("music_clock")),clock)
		peaks[id]=row.value.g
	check(matched and clocks,"eaves and windows consume the identical actual ranked wave and absolute PCM clock across a loop")
	check(peaks.size()==4 and peaks.values().all(func(value):return value>.6),"each delivered household reaches its own sequential crest")
	town.update_city_resonance_visuals({"audible":false,"clock_sec":28.,"choral_wave":Harmony.choral_wave(records,acoustic,28.)})
	check(town.craft.chime_rigs.all(func(row):return row.value.g==0. and row.value.b==0.),"inaudible snapshot clears musical sway even with stale wave input")
	acoustic.set_view(Vector2(35,35),18.);acoustic.evaluate(records,[],[])
	town.update_city_resonance_visuals({"audible":true,"clock_sec":28.,"choral_wave":Harmony.choral_wave(records,acoustic,28.)})
	check(town.craft.chime_rigs.all(func(row):return row.value.b==0.),"actual acoustic exclusion returns all eaves to natural wind")
	check(city.snapshot()==original,"choral motion never writes authored city or earned ledgers")
	city.produce_craft("h2",1);town.update_workshop_supply({"h2":city.workshop_status("h2")})
	var after_stock:=city.snapshot()
	check(town.craft.chime_rigs.size()==4 and town.craft.stock_roots.has("h2"),"stock publication does not bind undelivered goods to the house wave")
	var shelf:Node3D=town.craft.stock_roots.h2;var shelf_id:int=shelf.get_instance_id()
	var retired:Node3D=town.craft.roots.h1;retired.get_parent().remove_child(retired)
	town.craft.update_music({"audible":true,"clock_sec":29.,"choral_wave":{"h1":.74}})
	check(town.craft.chime_rigs.size()==3,"detached retired roots leave the weak registry immediately")
	retired.free();town.craft.roots.erase("h1");town.craft.fingerprints.erase("h1");town.craft.placement_inputs.erase("h1")
	town.craft.progress(town);town.craft.update_music({"audible":true,"clock_sec":29.,"choral_wave":{"h1":.74}})
	check(town.craft.chime_rigs.size()==4 and is_equal_approx(town.craft.chime_rigs.filter(func(row):return row.house_id=="h1")[0].value.g,.74),"rebuilt delivered eave joins the current wave without replacing shared geometry")
	var stable:=true
	for id:String in identities:stable=stable and identities[id]==town.house_roots[id].get_instance_id()
	check(stable and shelf_id==shelf.get_instance_id(),"music updates retain standing buildings and stock objects")
	check(city.snapshot()==after_stock,"retiring and republishing derived eaves never changes the work")
	var output:="res://验证记录/风铃同钟波浪_2026-10-22"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output))
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"peaks":peaks}
	FileAccess.open(output+"/cpu.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("CHIME_WAVE_CPU ",JSON.stringify(result));town.free();quit(0 if failures.is_empty() else 1)
