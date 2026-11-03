extends SceneTree
const Harmony=preload("res://scripts/audio/city_creation_game_music_harmony.gd")
const Shorts=preload("res://scripts/audio/city_creation_game_music_shorts.gd")
const Music=preload("res://scripts/audio/city_creation_music.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const Construction=preload("res://scripts/audio/city_creation_construction_walk.gd")
class Cursor:
	extends RefCounted
	var at:=.2
	func get_playback_position()->float:return at
class Candidate:
	extends Node
	var active:=true
	var retired:=false
	var cancelled:=false
	var context_valid:=true
	var paused:=false
	var sequence:Dictionary={"breathing":false}
	var prepared:Dictionary={}
	var player:=Cursor.new()
	var music:Node
	var cues:RefCounted
	func valid_context()->bool:return context_valid
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
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var catalog:Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/音乐资产/游戏音乐包/20261103_harmony_v1/catalog.json"));var valid:=0
	for row:Dictionary in catalog.packs:
		if row.kind!="music":continue
		var manifest:Dictionary=JSON.parse_string(FileAccess.get_file_as_string(row.manifest));var data:Dictionary=JSON.parse_string(FileAccess.get_file_as_string(manifest.timeline.path))
		check(Harmony.valid(data,manifest),"actual derived source/timeline contract "+row.source_id.substr(0,8));valid+=1
	check(valid==57,"all actual complete music timelines validated without reinterpreting four dedicated sessions")
	var untrusted:Dictionary=JSON.parse_string(FileAccess.get_file_as_string(catalog.packs[0].manifest));untrusted.timeline=false;var path:=out+"/malformed_timeline_manifest.json";FileAccess.open(path,FileAccess.WRITE).store_string(JSON.stringify(untrusted));var packet:Dictionary=preload("res://scripts/audio/city_creation_game_music_bundle.gd").read(path);check(packet.ok and packet.timeline.is_empty(),"malformed optional timeline keeps validated music playable with unpitched cues")
	var music:=Music.new();music._pluck_city=State.new();music._pluck_city.initialize_free();check(music._pluck_city.add_house(Vector2(-28,-20)).ok,"public household for real construction-note planner")
	var host:=Candidate.new();host.name="GameMusicPlayer";host.music=music;music.add_child(host);host.cues=Shorts.new();host.cues.setup(host)
	var manifest:={"source_id":"known_signal_fixture","full_mix":{"sha256":"known_signal_pcm"},"frames":132300}
	var data:={"source_id":manifest.source_id,"source_master_sha256":manifest.full_mix.sha256,"frames":manifest.frames,"sample_rate":44100,"harmony":{"schema":"measured_triad_timeline_v1","step_seconds":1.,"segments":[]}}
	for second in range(3):data.harmony.segments.append({"start":second,"end":second+1.,"pitch_classes":[0,4,7] if second==0 else [2,7,11] if second==1 else [],"fit_score":.99,"separation_margin":.2,"top_three_energy_fraction":.9})
	check(Harmony.valid(data,manifest),"known C/G and unresolved fixture contract")
	var wrong:Dictionary=data.duplicate(true);wrong.harmony.segments[0].fit_score={};check(not Harmony.valid(wrong,manifest),"malformed confidence field cannot publish a pitched cue")
	for patch:Dictionary in [{"source_id":"other"},{"frames":1},{"source_master_sha256":"other"}]:check(not Harmony.valid(data.merged(patch,true),manifest),"cross-source or frame mismatch cannot publish harmonic tones")
	host.prepared={"manifest":manifest,"timeline":data,"signature":"known_fixture_signature"};check(absf(music._playback_clock()-.2)<.00001 and absf(music.CueGrid.transport_clock(music)-.2)<.00001,"both real cue clocks follow candidate cursor without requiring old concert player")
	var base:Dictionary=music.PitchPluck.plan(music._pluck_city,"h1",.2,0);var ascending:Array=[]
	for step in range(6):
		var plan:=Construction.plan(music,base,step);ascending.append(plan.midi);check(posmod(int(plan.midi),12) in [0,4,7] and music._edit_streams.has(plan.stream_key),"actual construction-note PCM is available in current chord step "+str(step))
	check(ascending==[60,64,67,72,76,79],"six real construction steps remain ascending in measured C chord")
	var source:AudioStreamWAV=host.cues.wave("piano",72);var first:AudioStreamWAV=host.cues.resolve_wave(source,.2);check(first.get_meta("candidate_harmony").midi==72,"actual generated first-chord PCM metadata")
	first.save_to_wav(out+"/C_note.wav");host.player.at=1.2;var second:AudioStreamWAV=host.cues.resolve_wave(source,1.2);check(second.get_meta("candidate_harmony").midi==71 and second.get_meta("candidate_harmony").pitch_classes==[2,7,11],"queued source crossing actual cursor segment snaps to G-chord B rather than old C")
	second.save_to_wav(out+"/G_note.wav");host.player.at=2.2;var unknown:AudioStreamWAV=host.cues.resolve_wave(source,2.2);check(unknown.get_meta("candidate_harmony").unpitched and unknown.get_meta("candidate_harmony").midi==-1,"unresolved interval produces physical wood without an invented tonic")
	unknown.save_to_wav(out+"/wood.wav");var unknown_plan:=Construction.plan(music,base,0);check(unknown_plan.midi==-1 and music._edit_streams.has(unknown_plan.stream_key),"unknown harmony keeps real native construction plan playable")
	host.player.at=.2;host.paused=true;check(Harmony.current(music).unpitched,"paused candidate cannot leak a pitched queued cue");host.paused=false;host.sequence.breathing=true;check(Harmony.current(music).unpitched and absf(music._playback_clock()-3.)<.00001,"natural song gap is not a wrap to the old first chord")
	for field:String in ["retired","cancelled"]:
		host.set(field,true);check(Harmony.node(music)==null,"released or cancelled owner cannot leak a same-frame cue: "+field);host.set(field,false)
	host.context_valid=false;check(Harmony.node(music)==null,"old city context cannot supply cue harmony before node retirement")
	host.cues.close();check(music._edit_streams.keys().all(func(k):return not str(k).begins_with("candidate_short/")),"retirement removes only owned transient cue keys");music.free()
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("GAME_HARMONY_CPU ",JSON.stringify(report));quit(0 if report.ok else 1)
