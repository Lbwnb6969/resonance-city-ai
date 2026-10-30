extends SceneTree
const Whole=preload("res://scripts/audio/city_creation_master_performance.gd")
const Import=preload("res://scripts/audio/city_creation_authored_score.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var began:=Time.get_ticks_msec();var data:=Whole.prepare(0)
	check(data.ok and data.sections.size()==6 and data.duration==144.,"full existing version2 score validates all six original sections")
	check(data.events.size()>256 and data.events.all(func(e):return e.start>=0. and e.start<144.),"internal full performance does not weaken external eight-bar schema1")
	check(Whole.source_valid(data),"master and all PCM-affecting runtime source hashes are current")
	var bad:=data.duplicate(true);bad.dsp_signature="changed";check(not Whole.source_valid(bad),"old DSP result cannot publish")
	check(not Import.request_master_continuous(null,4).ok,"public all-mode guard retained")
	var city:=State.new();city.initialize_free();city.add_house(Vector2(-20,-20))
	var music:Node=load("res://scripts/audio/city_creation_music.gd").new();music._pluck_city=city
	data.city=city.get_instance_id();data.revision=city.revision;data.content_context=Whole.context(city)
	var old:Dictionary={"city":data.city,"revision":city.revision}
	check(Whole.valid(music,data) and Whole.valid(music,old),"original context starts valid")
	city.add_house(Vector2(-16,-20));check(Whole.valid(music,data) and not Whole.valid(music,old),"geometry edit keeps continuous content while M80 keeps original revision invalidation")
	city.music_mode="gong_pentatonic";check(not Whole.valid(music,data),"explicit city mode change invalidates the old performance intent")
	music._pluck_city=State.new();music._pluck_city.initialize_free();check(not Whole.valid(music,data),"new city cannot receive another city's prepared performance")
	music.free()
	data.cue_templates={};var rendered:=Import.render(data);var total:=0
	for role:String in Import.ROLES:
		var row:Dictionary=rendered[role];var wave:AudioStreamWAV=row.stream
		check(wave.get_length()==144. and wave.mix_rate==22050 and wave.loop_begin==0 and wave.loop_end==3175200,"actual 144-second pooled stream "+role)
		check(range(6).all(func(p):return row.notes.any(func(n):return n.start>=p*24. and n.start<(p+1)*24.)),"all six written phrases exist in actual PCM ledger "+role)
		check(row.peak>0. and row.peak<=.180001,"one consistent normalization across the whole role "+role)
		total+=wave.data.size()
	check(total==25401600,"four whole-score streams stay one bounded bundle")
	check(rendered.section_cues.size()==6 and rendered.section_cues[0]==rendered.section_cues[5],"identical authored harmony reuses one short catalogue")
	var synth:Node=load("res://scripts/audio/city_creation_music.gd").new();var wrapped:=PackedFloat32Array();wrapped.resize(3175200)
	synth._add_harmony_note(wrapped,143.9,.4,69,.05,"flute",true)
	check(Array(wrapped.slice(0,4400)).any(func(v):return absf(v)>.0001),"same production synthesis carries an end note into the next 144-second loop")
	check(Array(wrapped.slice(529200,533600)).all(func(v):return v==0.),"end tail does not wrap at a false 24-second seam")
	synth.free()
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"pcm_bytes":total}
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path("res://验证记录/M84/continuous_master_20261030"));FileAccess.open("res://验证记录/M84/continuous_master_20261030/cpu.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("MASTER_PERFORMANCE ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)
