extends SceneTree
const Document=preload("res://scripts/audio/city_creation_score_document.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var path:="res://数据/原创谱材/河湾练习_v1/score.json"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--score="):path=arg.trim_prefix("--score=")
	var result:=Document.read(path);check(result.ok,"actual authored JSON schema loads")
	if not result.ok:push_error(str(result));quit(1);return
	var original:Dictionary=result.document
	for item:Array in [["schema",true],["style","../code"],["bpm",125],["events",[]],["id","res://run.gd"],["harmony_mode",100],["features_sha256","wrong"]]:
		var changed:=original.duplicate(true);changed[item[0]]=item[1];check(not Document.validate(changed).ok,"reject document "+str(item[0]))
	for item:Array in [["midi",128],["gain",INF],["beat",NAN],["beats",100000],["timbre","res://bad.gd"],["role","code"],["layer",1]]:
		var changed:=original.duplicate(true);changed.events[0][item[0]]=item[1];check(not Document.validate(changed).ok,"reject event "+str(item[0]))
	var unknown:=original.duplicate(true);unknown.code="ignored?";check(not Document.validate(unknown).ok,"unknown fields do not hide executable references")
	check(result.events.any(func(e):return e.midi==64 and e.role=="lead") and result.events.filter(func(e):return e.role=="lead").size()>16,"explicit authored passing material retained in formal event ledger")
	var render:Dictionary=preload("res://scripts/audio/city_creation_authored_score.gd").render(result)
	check(render.size()==4 and render.values().all(func(row):return row.stream.loop_end==529200 and row.stream.mix_rate==22050 and row.peak<=.180001),"validated JSON renders through exact production synth into four pooled roles")
	var music:=preload("res://scripts/audio/city_creation_music.gd").new();var state=preload("res://scripts/world/city_creation_state.gd").new();state.initialize_free();music._pluck_city=state
	var meta:={"signature":result.signature,"city":state.get_instance_id(),"revision":state.revision};music.set_meta("authored_score",meta)
	state.apply_archive_unlocks(["century_symphony"]);state.set_music_mode("impressionist_major7");music._biome_mode=9
	check(not preload("res://scripts/audio/city_creation_authored_score.gd").apply(music,{},"wood") and music._biome_mode==9,"revision invalidation preserves current authoritative city mode")
	music.set_meta("authored_score",meta);var other=preload("res://scripts/world/city_creation_state.gd").new();other.initialize_free();music._pluck_city=other;music._biome_mode=4
	check(not preload("res://scripts/audio/city_creation_authored_score.gd").apply(music,{},"wood") and not music.has_meta("authored_score") and music._biome_mode==4,"cross-city import metadata is retired without overriding new mode")
	var answer:String="study1/"+str(result.signature)+"/answer";music.set_meta("chamber_roles",{"roles":{"terrace":{"id":answer,"layer":2,"role":"answer","active":true}}});music._variation_active.terrace=answer
	check(preload("res://scripts/audio/city_creation_chamber_roles.gd").gain(music,"terrace",-60.)== -28.,"imported answer receives the same pooled-role mix floor as core score")
	var mix:=preload("res://scripts/audio/city_creation_phonograph.gd").reconstruct(state,{})
	check(preload("res://scripts/audio/city_creation_phonograph.gd").valid(mix) and mix.tracks.values().all(func(row):return not str(row.key).begins_with("study1/")),"persisted work reconstructs cold-loadable city music instead of transient developer import")
	mix.tracks.terrace={"bank":"harmony","key":answer,"db":-28.}
	check(not preload("res://scripts/audio/city_creation_phonograph.gd").valid(mix),"ephemeral imported stream hash cannot enter persisted phonograph schema")
	music.free()
	print("SCORE_DOCUMENT ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"signature":result.signature}));quit(0 if failures.is_empty() else 1)
