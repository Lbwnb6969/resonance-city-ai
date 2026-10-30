extends SceneTree
## Compare all payloads after a runtime-only music change requires a new stamp.
const Cache = preload("res://scripts/audio/city_creation_bank_cache.gd")
func _initialize() -> void: run.call_deferred()
func run() -> void:
	var before := ""
	for arg: String in OS.get_cmdline_user_args():
		if arg.begins_with("--before-bank="): before = arg.trim_prefix("--before-bank=")
	if before.is_empty(): push_error("Pass --before-bank=res://... to the preserved PCM bank"); quit(1); return
	var old: Dictionary = ResourceLoader.load(before).get_meta("bank")
	var current := Cache.load_bank_at(Cache.PATH); var compared := 0; var failures: Array = []
	if current.is_empty(): push_error("Current stamped PCM bank unavailable"); quit(1); return
	for group: String in ["streams","edits","variations","harmony"]:
		if old[group].keys()!=current[group].keys(): failures.append(group+" catalogue")
		for key: String in old[group]:
			if not current[group].has(key): continue
			var a: AudioStreamWAV = old[group][key]; var b: AudioStreamWAV = current[group][key]
			if a.data!=b.data or a.format!=b.format or a.mix_rate!=b.mix_rate or a.stereo!=b.stereo or a.loop_mode!=b.loop_mode or a.loop_begin!=b.loop_begin or a.loop_end!=b.loop_end: failures.append(key)
			compared += 1
	var result := {"ok":failures.is_empty() and compared==["streams","edits","variations","harmony"].reduce(func(n,g):return n+old[g].size(),0),"compared":compared,"failures":failures}
	print("BANK_REVISION ",JSON.stringify(result)); quit(0 if result.ok else 1)
