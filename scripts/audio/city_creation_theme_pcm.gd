extends RefCounted
## Original arrangements on the existing eight-bar, D-pentatonic town loop.
## Each returned event is the same dictionary used to call the PCM renderer.
const BAR_SECONDS := 3.0
const BEAT_SECONDS := 0.75
const PITCH_CLASSES := [2, 4, 6, 9, 11]
# Nearest D / E / F# / A / B; equal-distance ties take the lower note.
const PENTATONIC_OFFSETS := [-1, 1, 0, -1, 0, -1, 0, -1, 1, 0, -1, 0]
const VARIATION_PEAK:=.18
const Dyads=preload("res://scripts/audio/city_creation_harmonic_dyads.gd")
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")

## Phrase-local motifs are baked once. Every bar has a short silent seam so
## a native WAV seek can change its texture without cutting an audible tail.
static func render_variations(add_note:Callable,make_stream:Callable,chords:Array,leads:Array,mode:int=-1)->Dictionary:
	return preload("res://scripts/audio/city_creation_chamber_score.gd").variations(add_note,make_stream,chords,leads,mode,Palette)

static func quantize(midi: int) -> int:
	return midi + PENTATONIC_OFFSETS[posmod(midi, 12)]

static func render(samples: PackedFloat32Array, key: String, chords: Array,
		melody: Array, add_note: Callable, _add_pulse: Callable) -> Array[Dictionary]:
	var events: Array[Dictionary] = []
	for bar in range(chords.size()):
		var start := float(bar) * BAR_SECONDS
		match key:
			"modern_symphony":
				for degree in range(3):_emit(samples,events,add_note,start,3.55,int(chords[bar][degree])+12,.013,"warm_pad")
				_emit(samples,events,add_note,start+.12,1.65,int(melody[bar*2]),.053,"felt_piano")
				_emit(samples,events,add_note,start+1.62,1.16,int(melody[bar*2+1]),.042,"felt_piano")
				_emit(samples,events,add_note,start+2.25,.95,int(chords[bar][2])+24,.032,"vibraphone")
				_emit(samples,events,add_note,start+.38,2.40,int(chords[bar][0]),.015,"strings")
			"clockwork_waltz":
				_emit(samples,events,add_note,start+.04,1.15,int(chords[bar][0]),.044,"piano")
				for beat in range(1,3):
					_emit(samples,events,add_note,start+float(beat),.72,int(chords[bar][beat])+12,.031,"piano")
					_emit(samples,events,add_note,start+float(beat)+.04,.64,int(chords[bar][0])+12,.016,"accordion")
				_emit(samples,events,add_note,start+.12,1.55,int(melody[bar*2])-12,.040,"horn")
				_emit(samples,events,add_note,start+1.78,.88,int(melody[bar*2+1]),.036,"clarinet")
				_emit(samples,events,add_note,start+2.52,.39,int(chords[bar][2])+24,.024,"celesta")
			"renaissance_fugue":
				# The keyboard introduces the subject; strings imitate it a bar
				# later, with the current chord beneath the answer.
				for beat in range(4):
					var note := int(chords[bar][[0,1,2,1][beat]])+24
					_emit(samples,events,add_note,start+.08+beat*BEAT_SECONDS,.52,note,.065,"harpsichord")
				if bar>0:
					_emit(samples,events,add_note,start+.30,1.25,int(melody[(bar-1)*2]),.043,"strings")
					_emit(samples,events,add_note,start+1.80,1.05,int(melody[(bar-1)*2+1]),.035,"oboe")
				_emit(samples,events,add_note,start+.06,2.65,int(chords[bar][0]),.022,"strings")
			"wood_market":
				# A short ascending reed answer, then two separated chord jumps.
				# The latter half-bar acts as a pickup into the next reed phrase.
				var phrase_note := int(melody[bar * 2]) - 12
				_emit(samples, events, add_note, start, 0.42,
					phrase_note, 0.089, "accordion")
				_emit(samples, events, add_note, start + BEAT_SECONDS, 0.36,
					phrase_note + 3, 0.072, "accordion")
				_emit(samples, events, add_note, start + BEAT_SECONDS * 2.0, 0.46,
					int(chords[bar][0]) + 12, 0.060, "pluck")
				_emit(samples, events, add_note, start + BEAT_SECONDS * 3.0, 0.36,
					int(chords[bar][2]) + 12, 0.049, "pluck")
			"wood_sylvan":
				# One sustained breath leaves an opening and a quiet end to each
				# bar. Sparse upper bells answer only every other breath.
				_emit(samples, events, add_note, start + BEAT_SECONDS * 0.5, 2.10,
					int(melody[bar * 2]), 0.102 if bar % 2 == 0 else 0.094, "flute")
				if bar % 2 == 1:
					_emit(samples, events, add_note, start + BEAT_SECONDS * 2.5, 1.05,
						int(chords[bar][2]) + 24, 0.024, "bell")
	# Keep the shared pulse callback available for the bank interface, while
	# these two styles leave percussion to the town's existing musical mix.
	return events

static func _emit(samples: PackedFloat32Array, events: Array[Dictionary],
		add_note: Callable, start: float, duration: float, midi: int,
		gain: float, timbre: String,mode:int=-1) -> void:
	Dyads.emit(samples,events,add_note,start,duration,midi,gain,timbre,mode)
