extends SceneTree
const Sequence=preload("res://scripts/audio/city_creation_game_music_sequence.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
class Host:
	extends Node
	var music:Node
	var clock:=0.
	var spatial_facts:Dictionary={}
	var prepared:Dictionary={}
class Music:
	extends Node
	var _pluck_city:RefCounted
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
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var pointer:Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/音乐资产/active_game_music.json"));var catalog:Dictionary=JSON.parse_string(FileAccess.get_file_as_string(pointer.catalog))
	var host:=Host.new();var music:=Music.new();host.music=music;music._pluck_city=State.new();music._pluck_city.initialize_free();var city:Dictionary=music._pluck_city.snapshot();host.prepared={"manifest":{"source_id":catalog.packs[0].source_id}}
	var sequence:=Sequence.new();sequence.configure(host,catalog.packs);check(sequence.rows.size()==57 and sequence.rows.all(func(row):return row.kind=="music"),"real catalogue excludes two nature and two isolated-note sessions")
	for second in range(60):host.clock=second;host.spatial_facts={"enclosure":1. if second<30 else 0.,"flow":0. if second<30 else 1.,"craft":0. if second<30 else .5};sequence.observe()
	var mean:=sequence.average();check(sequence.history.size()==30 and absf(mean[0])<.00001 and absf(mean[1]-1.)<.00001 and absf(mean[2]-.5)<.00001,"rolling affinity drops prior thirty seconds and averages the latest actual inputs")
	sequence.observe();check(sequence.history.size()==30 and sequence.average()==mean,"same playback second never duplicates a frame sample")
	var selected:=sequence.select_next();check(selected.source_id!=host.prepared.manifest.source_id and selected.kind=="music","auto successor is a different complete music source")
	check(music._pluck_city.snapshot()==city and host.prepared.manifest.source_id==catalog.packs[0].source_id,"selection observes geometry without changing current packet or city")
	var prefs:Dictionary=music._pluck_city.creative_settings.music.duplicate(true);prefs.mode="fixed";prefs.style="warm";check(music._pluck_city.CreationPolicy.set_preferences(music._pluck_city,{"music":prefs}).ok and sequence.select_next().source_id==catalog.packs[0].source_id,"actual fixed preference repeats exactly current source")
	var invalid:Dictionary=catalog.packs[0].duplicate(true);invalid.manifest_sha256="changed";sequence.configure(host,[invalid,catalog.packs[-1]]);check(sequence.rows.size()==1 and sequence.rows[0].source_id==catalog.packs[-1].source_id,"stale manifest cannot enter prepared successor candidates")
	sequence.close();host.free();music.free();var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("GAME_SEQUENCE_CPU ",JSON.stringify(report));quit(0 if report.ok else 1)
