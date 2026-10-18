extends SceneTree
## Resolve real authored era choices and inspect the saved production PCM bank.
const Fixture=preload("res://tools/fixtures/city_creation_modern_fixture.gd")
const Pitch=preload("res://scripts/audio/city_creation_pitch_pluck.gd")
const Cache=preload("res://scripts/audio/city_creation_bank_cache.gd")
const Music=preload("res://scripts/audio/city_creation_music.gd")
var checks:=0
var failures: Array[String]=[]
func _initialize()->void: _run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks+=1
	if not ok: failures.append(label);push_error(label)
func _run()->void:
	var city:=Fixture.earned_city()
	_check(city.era_unlocks.size()==4,"existing earned fixture has four era rights before audition checks")
	var id: String=city.houses[0].id
	var points: Array[Vector2]=[Vector2(city.houses[0].origin[0],city.houses[0].origin[1])]
	var district: Dictionary=city.add_district(points,3.6,"warm")
	_check(district.ok and city.set_district_era(district.district_id,"renaissance").ok,"public district edit assigns an unlocked renaissance neighbourhood")
	_check(Pitch.plan(city,id,0).timbre=="harpsichord","following a renaissance district plays its harpsichord")
	_check(city.set_house_era(id,"pastoral").ok and Pitch.plan(city,id,0).timbre=="pluck","an individually preserved old house keeps its pastoral instrument")
	_check(city.set_house_era(id,"district").ok and Pitch.plan(city,id,0).timbre=="harpsichord","removing the house override follows the real district again")
	var expected: Dictionary={"pastoral":"pluck","renaissance":"harpsichord","clockwork":"piano","modern_eco":"felt_piano"}
	var music:=Music.new()
	var bank:=Cache.load_bank()
	_check(not bank.is_empty() and bank.report.bank_source=="precompiled","changed synthesis is baked and ready without runtime synthesis")
	if bank.is_empty(): music.free();quit(1);return
	var reference_pitch:=Pitch.pitch(0,0,posmod(id.hash(),2))
	var distinct: Array[PackedByteArray]=[]
	for era: String in expected:
		var changed: Dictionary=city.set_house_era(id,era)
		var before: Dictionary=city.snapshot()
		var plan:=Pitch.plan(city,id,0)
		var stream: AudioStreamWAV=bank.edits[plan.stream_key]
		_check(changed.ok and plan.era_theme==era and plan.timbre==expected[era] and plan.midi==reference_pitch and city.snapshot()==before,"era chooses its actual timbre without changing pitch or authored state: "+era)
		_check(stream.data.size()==int(.42*22050)*2 and is_equal_approx(stream.get_length(),.42) and stream.loop_mode==AudioStreamWAV.LOOP_DISABLED,"production era short note lasts .42 seconds without looping: "+era)
		if not distinct.has(stream.data): distinct.append(stream.data)
	_check(distinct.size()==4,"four eras have distinct actual PCM waveforms at the same note")
	var started:=Pitch.plan(city,id,0)
	city.set_house_era(id,"renaissance")
	_check(not music._same_pluck_source(Pitch.plan(city,id,0),started),"era-only repaint invalidates a started cue even when music style and height match")
	city.undo()
	_check(music._same_pluck_source(Pitch.plan(city,id,0),started),"undo reconstructs the same source identity for the next audition")
	city.set_house_era(id,"pastoral")
	var themes:=true
	for style: String in ["warm","deep","weave","market","sylvan"]:
		city.set_district_style(district.district_id,style)
		themes=themes and Pitch.plan(city,id,0).timbre=={"warm":"pluck","deep":"harp","weave":"marimba","market":"accordion","sylvan":"flute"}[style]
	_check(themes,"all five original pastoral theme choices still select their own instruments")
	var floors:=true;var previous:=-1
	for level in range(5):
		if level>0: floors=floors and city.add_cell(id,0,0,level).ok
		var plan:=Pitch.plan(city,id,0)
		floors=floors and plan.band==level and plan.midi>previous
		previous=plan.midi
	_check(floors,"five actual public floor additions keep ascending distinct pitch bands")
	var tail_silent:=true;var timbres: Dictionary={}
	for row: Dictionary in bank.report.house_pluck_notes.values():
		timbres[row.timbre]=true
	for key: String in bank.report.house_pluck_notes:
		var data: PackedByteArray=bank.edits[key].data
		for index in range(data.size()-256,data.size(),2): tail_silent=tail_silent and data.decode_s16(index)==0
	_check(timbres.size()==8 and tail_silent,"all eight timbre families have silent PCM tails before the sample boundary")
	var legacy_compared:=0
	for argument: String in OS.get_cmdline_user_args():
		if not argument.begins_with("--baseline-bank="): continue
		var old: Dictionary=ResourceLoader.load(argument.trim_prefix("--baseline-bank="),"",ResourceLoader.CACHE_MODE_IGNORE).get_meta("bank")
		var unchanged:=true
		for group: String in ["streams","edits"]:
			for key: String in old[group]:
				if group=="edits" and key.begins_with("house_pluck_"): continue
				var a: AudioStreamWAV=old[group][key];var b: AudioStreamWAV=bank[group][key]
				unchanged=unchanged and a.data==b.data and a.loop_mode==b.loop_mode and a.loop_end==b.loop_end
				legacy_compared+=1
		_check(unchanged and legacy_compared>12,"original twelve long tracks and every unrelated short cue remain byte-identical")
	_check(float(bank.report.mix_peaks.absolute_stereo_with_four_short_voices)<1.0,"actual bank keeps headroom for the fixed four short voices")
	music.free()
	print("ERA_PLUCK ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"legacy_compared":legacy_compared,"short_streams":bank.edits.size()}))
	quit(0 if failures.is_empty() else 1)
