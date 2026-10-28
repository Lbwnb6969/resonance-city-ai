extends SceneTree
const Sample=preload("res://scripts/audio/city_creation_pastoral_score.gd")
const Events=preload("res://scripts/audio/city_creation_score_events.gd")
const Register=preload("res://scripts/audio/city_creation_score_register.gd")
const Score=preload("res://scripts/audio/city_creation_chamber_score.gd")
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
const Transition=preload("res://scripts/audio/city_creation_stream_transition.gd")
const Encoder=preload("res://tools/bake_creation_portable_bank.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func wave(hz:float)->AudioStreamWAV:
	var w:=AudioStreamWAV.new();w.mix_rate=22050;w.format=AudioStreamWAV.FORMAT_16_BITS;w.loop_mode=AudioStreamWAV.LOOP_FORWARD;w.loop_end=529200
	var d:=PackedByteArray();d.resize(1058400)
	for i in range(529200):d.encode_s16(i*2,roundi(sin(TAU*hz*i/22050.)*4000.))
	w.data=d;return w
func run()->void:
	for variant in range(3):
		for night:bool in [false,true]:
			var notes:=Sample.lead(variant,night)
			check(Events.valid(notes),"finite grid event contract "+str([variant,night]))
			check(notes.all(func(e):return e.role=="lead" and e.layer==3 and e.midi>=69 and e.midi<=86),"planned melodic range retained")
			check(notes[-1].midi==74 and notes[-1].duration>=1.3,"authored tonic cadence")
			check(notes.any(func(e):return e.passing and e.midi==76 and e.passing_from==74 and e.resolves_to==78),"weak E passing D to Fsharp survives")
	check(Sample.lead(0)!=Sample.lead(1),"A and B contain different authored rhythms and pitches")
	for kind:String in ["foundation","air","terrace"]:check(Events.valid(Sample.accompaniment(kind,Palette.chords(0))),"validated supporting role "+kind)
	var pulse:=Sample.accompaniment("air",Palette.chords(0))
	check(pulse.size()<32 and pulse.map(func(e):return e.midi).count(pulse[0].midi)<pulse.size()/2,"guitar uses voicings and rests")
	check(Register.plan([72,74,76,79,81],Vector2i(48,60),[0,2,4,7,9]).all(func(n):return n>=48 and n<=60 and n%12 in [0,2,4,7,9]),"whole pentatonic path fits exact degrees")
	check(Register.plan([72,73],Vector2i(48,60),[0,2,4,7,9]).is_empty(),"illegal pentatonic pitch rejected")
	check(Register.plan([72,74],Vector2i(60,60),[0,2,4,7,9]).is_empty(),"impossible phrase rejected without clamping")
	for pitch:int in [48,84]:check(Score.note(0.,1.,pitch,.04,"flute",3,{"register_planned":true}).midi==pitch,"planned low/high lead not folded")
	for field:String in ["midi","duration","gain","start","role","timbre"]:
		var notes:=Sample.lead(0);notes[0][field]={"midi":128,"duration":INF,"gain":NAN,"start":-1.,"role":"script","timbre":"../x"}[field]
		check(not Events.valid(notes),"reject malformed event "+field)
	var host:=preload("res://scripts/audio/city_creation_music.gd").new();var roles:={"wood":{"id":"wood/0"}}
	preload("res://scripts/audio/city_creation_score_sample_routing.gd").apply(host,roles,"wood",0,0)
	check(roles.wood.id=="wood/0" and not Transition.request(host,"wood","unknown",null,0.),"missing preset retains old route and never assigns a null stream");host.free()
	var node:=Transition.new();var old:=wave(101.);var target:=wave(197.);var encoded:=Encoder.encode(old)
	var decoded:=node.decode(encoded);var source:=node.decode(old);var power:=0.;var difference:=0.
	for i in range(2000,22050):power+=source[i]*source[i];difference+=pow(decoded[i]-source[i],2.)
	check(10.*log(power/difference)/log(10.)>35.,"native QOA decoder retains exact pitch and sample phase at22050")
	var rendered:=node.render({"old":old,"target":target,"boundary":3.})
	check(rendered.loop_begin==529200 and rendered.loop_end==1058400 and rendered.get_length()==48.,"transition has exact24second stable loop after first cycle")
	var bytes:=rendered.data;var a:=old.data;var b:=target.data;var equal:=true;var maximum:=0.
	for i in range(1058400):
		if i<66150:equal=equal and bytes.decode_s16(i*2)==a.decode_s16(i*2)
		if i>69458:equal=equal and bytes.decode_s16(i*2)==b.decode_s16((i%529200)*2)
		if i>0:maximum=maxf(maximum,absf(bytes.decode_s16(i*2)-bytes.decode_s16(i*2-2))/32768.)
	check(equal,"old before boundary and exact target after fade including entire loop")
	check(maximum<.01,"sample derivative has no switch impulse")
	var cache=preload("res://scripts/audio/city_creation_bank_cache.gd")
	var bank:Dictionary=cache.load_bank_at(cache.PATH)
	check(not bank.is_empty() and cache.source_signature()==cache.Stamp.SIGNATURE,"baked source dependencies and exported stamp match")
	var seams:Array=[]
	if not bank.is_empty():
		var foundation:AudioStreamWAV=bank.harmony[Sample.ID+"/foundation"];var bed:PackedByteArray=foundation.data
		for bar in range(8):
			var sum:=0.
			for frame in range(-220,221):sum+=pow(bed.decode_s16(posmod(bar*66150+frame,529200)*2)/32768.,2.)
			var rms:=sqrt(sum/441.);seams.append(rms);check(rms>.0005,"authored foundation spans actual bar/loop boundary "+str(bar))
		var lead:AudioStreamWAV=bank.harmony[Sample.ID+"/lead/0"]
		check(lead.loop_begin==0 and lead.loop_end==529200 and bank.report.harmony_notes[Sample.ID+"/lead/0"]==Sample.lead(0),"actual stable loop and authored event ledger agree")
		DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path("res://验证记录/M78/stems"))
		for key:String in ["foundation","air","lead/0","night"]:bank.harmony[Sample.ID+"/"+key].save_to_wav("res://验证记录/M78/stems/"+key.replace("/","_")+".wav")
	node.free()
	print("SCORE_SAMPLE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"qoa_snr_db":10.*log(power/difference)/log(10.),"max_step":maximum,"foundation_seam_rms":seams}));quit(0 if failures.is_empty() else 1)
