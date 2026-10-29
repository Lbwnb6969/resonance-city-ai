extends SceneTree
const Master=preload("res://scripts/audio/city_creation_master_score.gd")
const Import=preload("res://scripts/audio/city_creation_authored_score.gd")
const Solo=preload("res://scripts/audio/city_creation_score_solo.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
class Demo extends Node:
	var music:Node
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:
	var music:=preload("res://scripts/audio/city_creation_music.gd").new();var city:=State.new();city.initialize_free();music._pluck_city=city
	check(Solo.voice(music).is_empty(),"ordinary city retains original solo path")
	var data:=Master.section(0,4);var rendered:=Import.render(data);var id:="study1/"+str(data.signature)+"/lead";var player:=AudioStreamPlayer.new()
	player.stream=rendered.lead.stream;music._players.wood=player;music._harmony_streams[id]=rendered.lead.stream;music._variation_active.wood=id;music.audio_report.harmony_peaks={id:rendered.lead.peak};music.set_meta("chamber_roles",{"lead_track":"wood"})
	var meta:={"city":city.get_instance_id(),"revision":city.revision,"signature":data.signature,"document":data.document};music.set_meta("authored_score",meta)
	check(Solo.voice(music).is_empty(),"old M80 schema1 without internal mother harmony keeps original solo")
	meta.harmony=data.harmony;music.set_meta("authored_score",meta)
	var chosen:=Solo.voice(music);check(chosen.player==player and chosen.stem=="wood" and chosen.peak==rendered.lead.peak,"mother solo selects actual pooled lead and measured PCM peak")
	var target:AudioStreamWAV=player.stream;player.stream=AudioStreamWAV.new();check(Solo.voice(music).get("pending",false),"unsettled transition cannot start an unrelated old-theme solo");player.stream=target
	var demo:=Demo.new();demo.music=music;var spot:=preload("res://scripts/ui/city_creation_solo_spotlight.gd").new();spot.demo=demo;spot.player=player;spot.source="h1";spot.started=3.;spot.ends=15.;spot._score_voice=chosen
	var previous:=preload("res://scripts/ui/city_creation_solo_spotlight.gd").new();previous.demo=demo
	check(not Solo.follow(previous),"publishing a mother score retires an already-active independent legacy solo")
	previous.free()
	check(Solo.adopt(spot) and spot.stream==target and player.stream==target,"adopt leaves the original sounding wave on its original player")
	check(Solo.context(music).source=="h1" and Solo.context(music).stem=="wood","read-only source context pins one existing lead")
	spot.pcm_peak=.1;check(Solo.adopt(spot) and spot.pcm_peak==.1,"repeat adoption never resets a transition peak bound or restarts audio")
	Solo.gain(spot,4.);check(is_equal_approx(player.volume_linear,.18/.1),"foreground normalization uses actual bound on same voice")
	var next:=Master.section(1,8);var next_rendered:=Import.render(next);var next_id:="study1/"+str(next.signature)+"/lead"
	meta.signature=next.signature;meta.document=next.document;meta.harmony=next.harmony;music.set_meta("authored_score",meta);music._variation_active.wood=next_id;music.audio_report.harmony_peaks[next_id]=next_rendered.lead.peak;player.stream=next_rendered.lead.stream
	check(Solo.follow(spot) and spot.stream==player.stream and spot.pcm_peak>=next_rendered.lead.peak,"active solo follows the original player's new mother stream without another theme")
	check(Solo.release(spot) and player.stream==next_rendered.lead.stream and not music.has_meta("score_solo") and spot._score_voice.is_empty(),"release restores routing context without stopping or replacing the long wave")
	check(chosen.has("player"),"release never mutates another reference to the selected voice dictionary")
	spot._score_voice=chosen;Solo.adopt(spot);city.add_house(Vector2(-20,-20));check(Solo.context(music).is_empty() and not Solo.follow(spot),"author edit invalidates old solo context immediately")
	check(Solo.voice(music).get("pending",false),"stale mother epoch cannot fall back to an unrelated classic theme")
	Solo.release(spot);check(not Solo.release(spot),"ordinary legacy release remains owned by original short-player implementation")
	spot.free();demo.free();player.free();music.free();print("SCORE_SOLO ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
