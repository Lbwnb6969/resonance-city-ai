extends RefCounted
## M45: Zero-Clash Musical Architecture — True Diatonic 3rd/6th Dyad Voicing,
## Cadential 4-3 Suspension, Beat-Grid Cue Quantization, Active Chord-Tone Snapping,
## Smart Micro-Ducking & Spatial Life Cue Camera Gate (zoom <= 30.0m).
const ScalePCM = preload("res://scripts/audio/city_creation_theme_pcm.gd")
const Palette = preload("res://scripts/audio/city_creation_harmonic_palette.gd")

const LIFE_CUE_MAX_ZOOM := 30.0
const DYAD_RATIO := 0.32
const SIXTEENTH_GRID_SEC := 0.1875
const EIGHTH_GRID_SEC := 0.375
const CONSONANT_INTERVALS := [0, 3, 4, 7, 8, 9, 12]

static func travel_or_cafe_allowed(zoom: float, muted: bool, concert_active: bool) -> bool:
	return not muted and not concert_active and zoom <= LIFE_CUE_MAX_ZOOM

static func zoom_attenuation(zoom: float) -> float:
	if zoom <= 14.0:
		return 1.0
	return 1.0 - clampf((zoom - 14.0) / 20.0, 0.0, 0.65)

static func quantize_cue_onset(current_clock: float, grid_sec: float = SIXTEENTH_GRID_SEC) -> float:
	var step := maxf(0.0625, grid_sec)
	var rem := fposmod(maxf(0.0, current_clock), step)
	var delay := 0.0 if rem < 0.015 else (step - rem)
	return current_clock + minf(delay, 0.16)

static func snap_to_chord_tone(raw_midi: int, active_root_midi: int = 60, mode: int = -1, bar: int = 0) -> int:
	var modal_midi := quantize_modal(raw_midi, mode, bar)
	var root_pc := posmod(active_root_midi, 12)
	var diff := posmod(modal_midi - root_pc, 12)
	if diff in CONSONANT_INTERVALS:
		return modal_midi
	var best_midi := modal_midi
	var best_dist := 99
	for offset: int in [-2, -1, 1, 2, -3, 3]:
		var candidate := quantize_modal(modal_midi + offset, mode, bar)
		var c_diff := posmod(candidate - root_pc, 12)
		if c_diff in CONSONANT_INTERVALS and absi(candidate - modal_midi) < best_dist:
			best_midi = candidate
			best_dist = absi(candidate - modal_midi)
	return best_midi

static func duck_gain_for_cue(base_gain: float, active_short_cues: int) -> float:
	if active_short_cues <= 0:
		return base_gain
	return base_gain * clampf(1.0 - 0.08 * float(mini(active_short_cues, 3)), 0.76, 1.0)

static func quantize_modal(raw_midi: int, mode: int = -1, bar: int = 0) -> int:
	return ScalePCM.quantize(raw_midi) if mode < 0 else Palette.quantize(raw_midi, mode, bar)

static func companion_midi(midi: int, mode: int = -1, bar: int = 0, prefer_sixth: bool = false) -> int:
	var primary := quantize_modal(midi, mode, bar)
	var semitone_targets: Array[int] = [-8, -9, 8, 9] if prefer_sixth else ([-3, -4, 3, 4] if primary >= 72 else [3, 4, -3, -4])
	if prefer_sixth and primary < 70:
		semitone_targets = [8, 9, -4, -3]
	for delta: int in semitone_targets:
		var candidate := quantize_modal(primary + delta, mode, bar)
		var interval := absi(candidate - primary)
		if interval >= 3 and interval <= 9 and interval != 6:
			return candidate
	var fallback := quantize_modal(primary + (-4 if primary >= 72 else 4), mode, bar)
	return fallback if fallback != primary else quantize_modal(primary - 5, mode, bar)

static func suspension_midi(primary_midi: int, resolved_dyad: int, mode: int = -1, bar: int = 0) -> int:
	var step := 1 if resolved_dyad > primary_midi else 2
	var candidate := quantize_modal(resolved_dyad + step, mode, bar)
	if candidate != primary_midi and candidate != resolved_dyad and absi(candidate - primary_midi) <= 10:
		return candidate
	return resolved_dyad

static func groove_gain(base_gain: float, start_sec: float) -> float:
	var beat_pos := fposmod(maxf(0.0, start_sec), 1.5)
	var downbeat := beat_pos < 0.22
	return base_gain * (1.06 if downbeat else 0.92)

static func groove_duration(base_duration: float, start_sec: float) -> float:
	var beat_pos := fposmod(maxf(0.0, start_sec), 1.5)
	var downbeat := beat_pos < 0.22
	return base_duration * (1.06 if downbeat else 0.94)

static func emit_with_dyad(samples: PackedFloat32Array, events: Array[Dictionary], add_note: Callable,
		start: float, duration: float, midi: int, gain: float, timbre: String, mode: int = -1, bar: int = 0) -> void:
	var primary_midi := quantize_modal(midi, mode, bar)
	var shaped_gain := groove_gain(gain, start)
	var shaped_dur := groove_duration(duration, start)
	add_note.call(samples, start, shaped_dur, primary_midi, shaped_gain, timbre, true, false)
	events.append({"start": start, "duration": shaped_dur, "midi": primary_midi, "gain": shaped_gain, "timbre": timbre})
	if duration >= 0.65 and timbre in ["wood", "felt_piano", "piano", "strings", "flute", "harpsichord"]:
		var prefer_sixth := int(round(start / 0.75)) % 2 == 1
		var dyad_midi := companion_midi(primary_midi, mode, bar, prefer_sixth)
		if dyad_midi != primary_midi:
			var dyad_gain := shaped_gain * DYAD_RATIO
			var dyad_timbre := "strings" if timbre == "harpsichord" else ("warm_pad" if timbre == "felt_piano" else timbre)
			var is_phrase_cadence := duration >= 1.15 and fposmod(maxf(0.0, start), 3.0) >= 1.35
			if is_phrase_cadence:
				var sus_midi := suspension_midi(primary_midi, dyad_midi, mode, bar)
				if sus_midi != dyad_midi:
					var sus_dur := shaped_dur * 0.38
					var res_dur := shaped_dur * 0.56
					add_note.call(samples, start + 0.018, sus_dur, sus_midi, dyad_gain * 0.95, dyad_timbre, true, false)
					add_note.call(samples, start + 0.018 + sus_dur, res_dur, dyad_midi, dyad_gain, dyad_timbre, true, false)
					events.append({"start": start + 0.018, "duration": sus_dur, "midi": sus_midi, "gain": dyad_gain * 0.95, "timbre": dyad_timbre, "dyad": true, "suspension": true})
					events.append({"start": start + 0.018 + sus_dur, "duration": res_dur, "midi": dyad_midi, "gain": dyad_gain, "timbre": dyad_timbre, "dyad": true})
					return
			add_note.call(samples, start + 0.018, shaped_dur * 0.92, dyad_midi, dyad_gain, dyad_timbre, true, false)
			events.append({"start": start + 0.018, "duration": shaped_dur * 0.92, "midi": dyad_midi, "gain": dyad_gain, "timbre": dyad_timbre, "dyad": true})
