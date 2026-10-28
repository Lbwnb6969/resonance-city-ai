extends SceneTree
const Music=preload("res://scripts/audio/city_creation_music.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const Catalog=preload("res://scripts/audio/city_creation_music_catalog.gd")
const Roles=preload("res://scripts/audio/city_creation_chamber_roles.gd")
const Ornaments=preload("res://scripts/audio/city_creation_chamber_ornaments.gd")
const Legato=preload("res://scripts/audio/city_creation_chamber_legato.gd")
const Score=preload("res://scripts/audio/city_creation_chamber_score.gd")
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
class Host extends Node:
	var muted:=false
	var _loading:=false
	var phonograph=preload("res://scripts/audio/city_creation_phonograph.gd").new()
	var acoustic=preload("res://scripts/audio/city_creation_acoustic_field.gd").new()
	var _pluck_city=preload("res://scripts/world/city_creation_state.gd").new()
	var _listener_focus:=Vector2(-25,-12)
	var _players:Dictionary={}
	var _effects:Array[AudioStreamPlayer]=[]
	var clock:=0.
	func _playback_clock()->float:return clock
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var city:=State.new();city.initialize_empty()
	for at:Vector2 in [Vector2(-25,-12),Vector2(-22,-12),Vector2(-19,-12),Vector2(-25,-20),Vector2(-22,-20),Vector2(-19,-20)]:city.add_house(at)
	for i in range(3,6):city.houses[i].acoustic_style="sylvan"
	var music:=Music.new();music._pluck_city=city;music._house_music=Catalog.prepare(city).houses;music.acoustic.set_view(Vector2(-25,-12),18.);music.acoustic.evaluate(music._house_music,[])
	music.emergence.advance(music._house_music,music.acoustic,[],0,false)
	var roles:=Roles.prepare(music);var leader:=str(roles.lead_track)
	check(roles.roles.values().filter(func(row):return row.layer==3).size()==1 and leader in music.HarmonicEmergence.LEADS,"one focused cantor despite two actual different-styled neighbourhoods")
	music._variation_active[leader]=roles.roles[leader].id
	check(Roles.gain(music,leader,-12.)== -12. and Roles.gain(music,"concert",-8.)<=-60.,"regular city permits the real lead and silences the unused stage melody")
	music.acoustic.set_view(Vector2(-25,-20),18.);music.acoustic.evaluate(music._house_music,[]);roles=Roles.prepare(music)
	check(roles.lead_track=="wood_sylvan" and roles.roles.values().filter(func(row):return row.layer==3).size()==1,"real camera movement elects the other neighbourhood without adding a cantor")
	var old_player:=AudioStreamPlayer.new();old_player.volume_db=-12.;music._players[leader]=old_player
	check(not Roles.can_lead(music,"wood_sylvan",roles.roles.wood_sylvan.id),"incoming cantor waits while the old actual melody is audible")
	old_player.volume_db=-46.;check(Roles.can_lead(music,"wood_sylvan",roles.roles.wood_sylvan.id),"handoff admits the new cantor after the old one has faded")
	var pulse:=AudioStreamPlayer.new();pulse.volume_db=-20.;music._players.air=pulse;music._variation_active.air="core1/deep_flow/0/0/0/pulse"
	check(Roles.can_lead(music,"wood_sylvan",roles.roles.wood_sylvan.id),"versioned primary pulse is not mistaken for another melody");pulse.free()
	music._players.clear();old_player.free()
	var curved:Array[Vector2]=[]
	for i in range(25):var angle:=float(i)*PI/48.;curved.append(Vector2(-30,-12)+Vector2(cos(angle),sin(angle))*5.)
	var points:Array=[]
	for p:Vector2 in curved:points.append([p.x,p.y])
	var bins:=preload("res://scripts/audio/city_creation_chamber_context.gd").curves([{"points":points,"width":1.2}])
	check(not bins.is_empty(),"actual saved curved samples produce a local articulation index")
	music.audio_report={"variation_notes":{"wood/0":Score.lead("wood",0,Palette.chords(0),0,Palette)},"harmony_notes":{},"harmony_peaks":{}}
	var ordinary:Array=music.audio_report.variation_notes["wood/0"];var extended:=Legato.ledger(music,"chamber_legato/wood/0")
	check(extended.size()==ordinary.size() and extended[0].duration>ordinary[0].duration and extended.filter(func(e):return e.layer==3).all(func(e):return fposmod(e.start,3.)+e.duration<=2.200001),"real legato recipe lengthens PCM envelopes while retaining the response window")
	var mix:=music.Phonograph.reconstruct(city,{"focus":[-25.,.8,-20.],"zoom":18.,"light_phase":2})
	check(music.Phonograph.valid(mix) and mix.tracks.values().any(func(row):return "chamber_counter" in row.key),"reconstructed night archive accepts real pooled counterpoint identities")
	music.free()
	var host:=Host.new();host._pluck_city.initialize_empty();host.acoustic.set_view(host._listener_focus,18.)
	var reference:=AudioStreamPlayer.new();var wave:=AudioStreamWAV.new();wave.mix_rate=22050;wave.data=PackedByteArray([0,0,0,0]);reference.stream=wave;host._players.concert=reference
	for i in range(4):var player:=AudioStreamPlayer.new();host._effects.append(player)
	var node=Ornaments.ensure(host);node.set_process(false)
	var log:Array=[]
	for row:Dictionary in [{"id":"far","at":Vector2(-20,-12)},{"id":"near","at":Vector2(-24,-12)},{"id":"middle","at":Vector2(-22,-12)}]:
		var id:=str(row.id);Ornaments.request(host,"actual_event",id,row.at,func():host._effects[0].set_meta("creation_voice_serial",int(host._effects[0].get_meta("creation_voice_serial",0))+1);log.append(id))
	host.clock=2.26;node._process(.01);host.clock=2.64;node._process(.01);host.clock=2.85;node._process(.01)
	check(log==["near","middle"] and node.played==2,"global tail slots choose the nearest two actual candidates and leave the farther one silent")
	Ornaments.request(host,"actual_event","edit_cancelled",Vector2(-25,-12),func():log.append("invalid"));host._pluck_city.add_house(Vector2(-25,-12));host.clock=5.26;node._process(.01)
	check(not log.has("invalid") and node.pending.is_empty(),"authoring revision cancels stale queued life sounds")
	Ornaments.request(host,"actual_event","muted",Vector2(-25,-12),func():log.append("muted"));host.muted=true;node._process(.01)
	check(node.pending.is_empty() and not log.has("muted"),"mute clears queued ornament candidates")
	host.muted=false;host.clock=8.26
	Ornaments.request(host,"single","close",Vector2(-25,-12),func():host._effects[0].set_meta("creation_voice_serial",int(host._effects[0].get_meta("creation_voice_serial",0))+1);log.append("single"))
	Ornaments.request(host,"pair","fifth",Vector2(-24,-12),func():
		for index in range(2):host._effects[index].set_meta("creation_voice_serial",int(host._effects[index].get_meta("creation_voice_serial",0))+1)
		log.append("pair"),2)
	node._process(.01);host.clock=8.64;node._process(.01)
	check(node.played==1 and not log.has("pair"),"a two-note closure never overruns the one remaining global ornament slot")
	host.clock=11.26;node._process(.01)
	check(node.played==2 and log[-1]=="pair","the actual reserved pair waits for a full later bar budget")
	host.clock=14.26
	Ornaments.request(host,"district_reply","same_house",Vector2(-25,-12),func():host._effects[0].set_meta("creation_voice_serial",int(host._effects[0].get_meta("creation_voice_serial",0))+1);log.append("call"),1,"call")
	node._process(.01);host.clock=16.5
	check(Ornaments.request(host,"district_reply","same_house",Vector2(-25,-12),func():host._effects[0].set_meta("creation_voice_serial",int(host._effects[0].get_meta("creation_voice_serial",0))+1);log.append("answer"),1,"answer"),"a real answer is independently eligible even when both acoustic directions share the nearest candidate id")
	host.clock=17.26;node._process(.01)
	check(log[-1]=="answer","answer dispatch reaches the following actual bar without the call-source cooldown cancelling it")
	var closure=preload("res://scripts/audio/city_creation_road_closure_audio.gd")
	var fifths_ok:=true
	for mode in range(10):
		for chord:Array in Palette.chords(mode):
			var pair:=closure.closure_notes(chord)
			fifths_ok=fifths_ok and pair.size()==2 and pair[1]-pair[0] in [5,7] and pair.all(func(n):return n>=76 and n<=88 and chord.any(func(c):return posmod(int(c)-n,12)==0))
	check(fifths_ok,"all eighty real chords have a high-register fifth or exact inversion without invented pitches")
	for player:AudioStreamPlayer in host._effects:player.free()
	reference.free();host.free()
	print("CHAMBER_ROUTING ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
