extends SceneTree
## Real state/save APIs, isolated files and existing legacy contracts.
const State=preload("res://scripts/world/city_creation_state.gd")
const Policy=preload("res://scripts/world/city_creation_creation_policy.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
const Scene=preload("res://scenes/city_creation.tscn")
var checks:=0
var failures:Array[String]=[]
var OUT:="res://验证记录/M76/cpu"
class FailedSave extends State:
	func save_city(_path:String=DEFAULT_PATH)->Dictionary:return {"ok":false,"message":"injected publication failure"}

func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func same_history(a:Dictionary,b:Dictionary)->bool:
	for key:String in ["era_unlocks","era_answers","district_answers","signature_unlocks","growth_memories","harmony_journey","bakery_supply","workshop_supply","life_progress"]:
		if a.get(key)!=b.get(key):return false
	return true
func cold(city:RefCounted)->bool:
	var data:Dictionary=city.snapshot();var reader:=State.new()
	var result:Dictionary=reader.restore(JSON.parse_string(JSON.stringify(data,"",true,true)))
	if not result.ok:print("CREATIVE_COLD_FAILURE ",JSON.stringify(result))
	elif reader.snapshot()!=data:
		for key in data:
			if reader.snapshot().get(key)!=data[key]:print("CREATIVE_COLD_DIFF ",key," ",JSON.stringify(data[key])," -> ",JSON.stringify(reader.snapshot().get(key)))
	return result.ok and reader.snapshot()==data

func free_city()->void:
	var production=Scene.instantiate();check(production.start_empty,"normal new-city scene defaults to an empty parcel");production.free()
	var city:=State.new();city.initialize_free()
	check(Policy.is_free(city) and city.houses.is_empty() and city.snapshot().schema==20,"explicit new-city entry creates an empty free Schema20 city")
	check(city.era_unlocks==["pastoral"] and city.era_answers.is_empty() and city.growth_memories.is_empty(),"free construction invents no historical era or life progress")
	check(Policy.ERAS==city.Eras.IDS and Policy.eras(city)==city.Eras.IDS,"all four ordinary eras available independently of achievements")
	for i in range(Policy.ERAS.size()):
		var era:String=Policy.ERAS[i];check(city.can_build_era(era) and Brush.select(city,era),"public brush accepts free era "+era)
		var placed:Dictionary=city.add_house(Vector2(-32+i*5.,-22));check(placed.ok,"actual house in free era "+era)
		check(city.house_era(city.houses[-1])==era,"the resulting actual house keeps its selected era "+era)
		check(cold(city),"free era JSON cold load "+era)
	for role:String in city.HOUSE_ROLES:
		check(city.can_assign_role(role) and city.set_house_role("h1",role).ok,"all ordinary purposes available: "+role)
		check(cold(city),"free purpose JSON cold load: "+role)
	check(city.era_unlocks==["pastoral"] and city.era_answers.is_empty(),"building all eras and purposes still does not grant an era achievement")
	var district:Dictionary=city.add_district([Vector2(-32,-22)] as Array[Vector2],3.6,"deep")
	check(district.ok and city.set_district_era(district.district_id,"modern_eco").ok and cold(city),"free painted district uses modern era and cold restores")
	check(city.set_cluster_era("h1","clockwork").ok and cold(city),"free cluster era uses the same permission policy")
	var original:Dictionary=city.snapshot()
	for result:Dictionary in [city.set_house_era("h1","unknown"),city.set_house_role("h1","unknown"),city.set_district_era(district.district_id,"unknown"),city.add_house(Vector2(NAN,-20)),city.add_house(Vector2(-32,-22))]:
		check(not result.ok and city.snapshot()==original,"invalid enum, position or overlap remains atomic under free policy")
	check(not Brush.select(city,"unknown") and not Brush.select(city,"pastoral","not_a_prototype"),"freedom never permits unknown eras or prototypes")
	var prior:Dictionary=city.snapshot();var saved:Dictionary=city.save_city(OUT+"/free.json")
	var reader:=State.new();check(saved.ok and reader.load_city(OUT+"/free.json").ok and reader.snapshot()==prior,"real free save and fresh-process file path roundtrip")
	var forged:Dictionary=prior.duplicate(true);forged.era_unlocks=Policy.ERAS.duplicate()
	check(not reader.restore(forged).ok,"free policy does not waive truth checks on claimed modern achievements")
	var second:Dictionary=city.add_district([Vector2(-17,-22)] as Array[Vector2],3.6,"deep")
	check(second.ok and city.record_district_answer(district.district_id,second.district_id,"clockwork","modern_eco") and cold(city),"completed-answer API can retain valid free-era attribution before the era is earned")
	check(city.era_unlocks==["pastoral"],"recording a cross-era answer alone never grants a modern achievement")
	var voices:Dictionary=city.snapshot()
	voices.regional_trips=[{"from":district.district_id,"to":second.district_id,"from_voice":"clockwork:warm","to_voice":"modern_eco:deep","from_region":"west","to_region":"west"}]
	check(city.SaveValidation._validate_regional_trips(voices,city._high_watermark.district).ok,"conserved free-era regional receipts use build rights rather than fake achievement flags")
	voices.regional_trips[0].to_voice="unknown:deep"
	check(not city.SaveValidation._validate_regional_trips(voices,city._high_watermark.district).ok,"regional receipt validation still rejects unknown era identifiers")

func preferences()->void:
	var city:=State.new();city.initialize_free();city.add_house(Vector2(-25,-20))
	check(Policy.set_preferences(city,{"guidance":true}).ok and city.creative_settings.guidance,"optional tutorial is authored state")
	check(city.undo().ok and not city.creative_settings.guidance and Policy.is_free(city),"undo preference preserves the independent free policy")
	check(city.redo().ok and city.creative_settings.guidance,"redo restores optional teaching preference")
	var music:={"mode":"fixed","style":"future_style_v2","seed":122}
	check(Policy.set_preferences(city,{"music":music}).ok and cold(city),"bounded future music identity and deterministic seed survive without executing code")
	check(city.set_house_palette("h1",3).ok,"real appearance transaction after music preference")
	check(city.undo().ok and city.creative_settings.music==music,"appearance fast path preserves the corresponding authored preferences")
	check(city.undo().ok and city.creative_settings.music.mode=="auto","preferences participate in full snapshot undo")
	var before:Dictionary=city.snapshot()
	for patch:Dictionary in [{"creation_policy":"legacy"},{"guidance":1},{"music":{"mode":"fixed","style":"../x.gd","seed":1}},{"music":{"mode":"fixed","style":"","seed":1}},{"music":{"mode":"auto","style":"","seed":-1}}]:
		check(not Policy.set_preferences(city,patch).ok and city.snapshot()==before,"malformed preference patch is rejected atomically")

func biome_entries()->void:
	for id:String in State.Biomes.IDS:
		var city:=State.new();var result:=Policy.initialize_biome(city,id,"2026-10-28" if id=="daily_resonance" else "")
		check(result.ok and Policy.is_free(city) and city.era_unlocks==["pastoral"],"new biome constructor creates free rights without fake achievements: "+id)
		check(cold(city),"new free biome, real seed gifts and scenery cold restore: "+id)

func invalid_payloads()->void:
	var city:=State.new();city.initialize_free();city.add_house(Vector2(-25,-20));var original:Dictionary=city.snapshot()
	var mutations:Array[Callable]=[
		func(d):d.schema=19,
		func(d):d.schema=21,
		func(d):d.erase("creative_settings"),
		func(d):d.creative_settings.version=2,
		func(d):d.creative_settings.creation_policy="unlocked",
		func(d):d.creative_settings.migration_version=-1,
		func(d):d.creative_settings.guidance="false",
		func(d):d.creative_settings.extra=true,
		func(d):d.creative_settings.music.seed=INF,
		func(d):d.creative_settings.presentation.legacy_crowns=1,
		func(d):d.placed_landmarks=[{"id":"l1","blueprint":"unknown"}],
		func(d):d.next_landmark_id=2,
		func(d):d.landmark_high_watermark=1,
		func(d):d.houses[0].era_theme="unknown",
		func(d):d.houses[0].role="unknown",
		func(d):d.houses[0].origin=[NAN,0]
	]
	for mutate:Callable in mutations:
		var bad:Dictionary=original.duplicate(true);mutate.call(bad)
		check(not city.restore(bad).ok and city.snapshot()==original,"malformed/new-version payload preserves the current city")
	var legacy:=State.new();legacy.initialize_empty();var old:Dictionary=legacy.snapshot()
	old.creative_settings=Policy.Save.defaults()
	check(not legacy.restore(old).ok,"Schema1-19 cannot smuggle creative fields into an old version")

func migration()->void:
	var city:=State.new();city.initialize_empty();city.add_house(Vector2(-25,-20));city.add_house(Vector2(-20,-20))
	check(not Policy.is_free(city) and not city.set_house_era("h1","modern_eco").ok and not city.set_house_role("h1","clockmaker").ok,"legacy recipe still enforces original earned construction rights")
	var path:=OUT+"/legacy.json";check(city.save_city(path).ok,"legacy original saved in isolated directory")
	var original_file:=FileAccess.get_file_as_bytes(path);var before:Dictionary=city.snapshot();var history:int=city._undo.size()
	var result:=Policy.convert(city,path)
	if not result.ok:print("CONVERSION_FAILURE ",JSON.stringify(result))
	check(result.ok and Policy.is_free(city) and city.creative_settings.migration_version==1,"explicit conversion succeeds only after verified backup")
	if not result.ok:return
	check(city._undo.size()==history and same_history(before,city.snapshot()),"conversion preserves geometry history and all earned ledgers")
	check(FileAccess.get_file_as_bytes(result.original_backup)==original_file,"original file retained byte-for-byte")
	var old_reader:=State.new();check(old_reader.load_city(result.backup).ok and old_reader.snapshot()==before and not Policy.is_free(old_reader),"pre-conversion authored city backup is a real cold-loadable legacy save")
	var reader:=State.new();check(reader.load_city(path).ok and Policy.is_free(reader) and cold(reader),"converted target cold loads as free without fake history")
	check(city.undo().ok and city.houses.size()==1 and Policy.is_free(city) and city.creative_settings.migration_version==1,"undo pre-conversion construction keeps permanent free conversion")
	check(city.redo().ok and city.houses.size()==2 and Policy.is_free(city),"redo pre-conversion construction preserves free policy")
	check(Policy.convert(city,path).get("no_op",false),"repeat conversion creates no second migration or reward")
	check(reader.restore(before).ok and not Policy.is_free(reader) and not reader.can_build_era("modern_eco"),"loading a different legacy city resets free policy deterministically")
	var failed:=FailedSave.new();failed.initialize_empty();failed.add_house(Vector2(-25,-20));var retained:Dictionary=failed.snapshot();var dirty:bool=failed.dirty
	check(not Policy.convert(failed,OUT+"/failed.json").ok and failed.snapshot()==retained and failed.dirty==dirty,"failed publication restores policy, revision and dirty state after preserving backup")
	var invalid_path:=OUT+"/bad_original.json";FileAccess.open(invalid_path,FileAccess.WRITE).store_string("broken original")
	var legacy_before:Dictionary=old_reader.snapshot()
	check(not Policy.convert(old_reader,invalid_path).ok and old_reader.snapshot()==legacy_before and FileAccess.get_file_as_string(invalid_path)=="broken original","invalid target original is never overwritten")
	var explicit_legacy:=State.new();explicit_legacy.initialize_empty();explicit_legacy.creative_settings=Policy.Save.defaults("legacy")
	explicit_legacy.creative_settings.music={"mode":"quiet","style":"future_style","seed":56}
	explicit_legacy.creative_settings.presentation.automatic_decoration=false
	var choices:Dictionary=explicit_legacy.creative_settings.duplicate(true)
	check(Policy.convert(explicit_legacy,OUT+"/explicit_legacy.json").ok,"explicit Schema20 legacy policy can also convert with a verified backup")
	check(explicit_legacy.creative_settings.music==choices.music and explicit_legacy.creative_settings.presentation==choices.presentation and explicit_legacy.creative_settings.guidance==choices.guidance,"conversion preserves existing authored preferences instead of resetting them")

func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	free_city();preferences();biome_entries();invalid_payloads();migration()
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures}
	FileAccess.open(OUT+"/creation_policy.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("CREATION_POLICY ",JSON.stringify(report))
	quit(0 if failures.is_empty() else 1)
