extends RefCounted
## Original arrangements on the existing eight-bar, D-pentatonic town loop.
## Each returned event is the same dictionary used to call the PCM renderer.
const BAR_SECONDS := 3.0
const BEAT_SECONDS := 0.75
const PITCH_CLASSES := [2, 4, 6, 9, 11]
# Nearest D / E / F# / A / B; equal-distance ties take the lower note.
const PENTATONIC_OFFSETS := [-1, 1, 0, -1, 0, -1, 0, -1, 1, 0, -1, 0]

static func quantize(midi: int) -> int:
	return midi + PENTATONIC_OFFSETS[posmod(midi, 12)]

static func render(samples: PackedFloat32Array, key: String, chords: Array,
		melody: Array, add_note: Callable, _add_pulse: Callable) -> Array[Dictionary]:
	var events: Array[Dictionary] = []
	for bar in range(chords.size()):
		var start := float(bar) * BAR_SECONDS
		match key:
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
		gain: float, timbre: String) -> void:
	var event := {"start": start, "duration": duration, "midi": quantize(midi),
		"gain": gain, "timbre": timbre}
	add_note.call(samples, event.start, event.duration, event.midi,
		event.gain, event.timbre, true)
	events.append(event)
