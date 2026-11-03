extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_canon_fixture.gd")
const Canon=preload("res://scripts/audio/city_creation_circular_canon.gd")
const Ornaments=preload("res://scripts/audio/city_creation_chamber_ornaments.gd")
class Focus extends RefCounted:
	var mode:="local"
	var focus:=Vector2(-25,-21)
	func point_weight(_point:Vector2)->float:return 1.
	func focus_weight(_id:String)->float:return 1.
class Owner extends Node:
	var _pluck_city
	var muted:=false
	var concert_active:=false
	var _loading:=false
	var acoustic:=Focus.new()
	func _playback_clock()->float:return 0.
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var fixture:=Fixture.build();var city=fixture.city
	var owner:=Owner.new();owner._pluck_city=city;root.add_child(owner)
	var canon:=Canon.new();canon.setup(owner);canon.sync(city)
	check(canon.groups.size()>=2 and not canon._selected().is_empty(),"legacy real court/ring remains eligible")
	check(not Ornaments.free_city(owner),"legacy ornament policy preserved")
	var out:="res://验证记录/M84/unified_plan_20261101/policy_first"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if DirAccess.dir_exists_absolute(ProjectSettings.globalize_path(out)):
		push_error("Fresh evidence directory required");owner.free();quit(2);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	check(city.CreationPolicy.convert(city,out+"/converted.json").ok,"explicit free conversion backed up")
	canon.sync(city)
	check(canon.groups.size()>=2 and canon._selected().is_empty(),"free disables actual geometric ring without removing it")
	var player:=AudioStreamPlayer.new();root.add_child(player)
	var stream:=AudioStreamWAV.new();stream.data=PackedByteArray([0,0,0,0]);player.stream=stream;player.set_meta("creation_voice_serial",7);player.play()
	canon._player=player;canon._stream=stream;canon._voice_serial=7
	canon.step(0.)
	check(not player.playing and canon._player==null and canon.cues==0,"free stops owned canon tail without new cue")
	player.play();canon._player=player;canon._stream=stream;canon._voice_serial=6;canon.step(.75)
	check(player.playing,"free cleanup preserves a reused manual voice")
	check(Ornaments.route(owner,"bakery",{}),"free intercepts automatic trigger")
	check(not Ornaments.request(owner,"canon","h1",Vector2.ZERO,func():failures.append("callback ran")),"free rejects new ornament request")
	var broker:=Ornaments.ensure(owner);broker.set_process(false)
	broker.pending.append({"callback":func():failures.append("stale callback ran")});broker._process(.1)
	check(broker.pending.is_empty() and broker.played==0,"free drains queued legacy callback without dispatch")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"))
	print("FREE_AUDIO_POLICY ",JSON.stringify(result))
	player.free();owner.free();quit(0 if failures.is_empty() else 1)
