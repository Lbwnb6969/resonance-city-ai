extends SceneTree
const Context=preload("res://tools/fixtures/city_creation_long_journey_context.gd")
func _initialize()->void:run.call_deferred()
func run()->void:
	var phase:="day1";var resolution:=1440;var output_root:="res://验证记录/M32"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--phase="):phase=arg.trim_prefix("--phase=")
		if arg.begins_with("--resolution="):resolution=int(arg.trim_prefix("--resolution="))
		if arg.begins_with("--out-dir="):output_root=arg.trim_prefix("--out-dir=")
	var c:=Context.new();await c.setup(self,resolution,phase,output_root)
	var personal:=FileAccess.get_file_as_bytes(Context.State.DEFAULT_PATH) if FileAccess.file_exists(Context.State.DEFAULT_PATH) else PackedByteArray()
	if phase=="day1":await preload("res://tools/fixtures/city_creation_long_journey_day_one.gd").run(c)
	elif phase=="day2":await load("res://tools/fixtures/city_creation_long_journey_day_two.gd").run(c)
	elif phase=="qa":await load("res://tools/fixtures/city_creation_long_journey_qa.gd").run(c)
	var required:Dictionary={"day1":["native_first_house","native_leaf_choice_saved","isolated_atomic_save"],"day2":["real_process_exit_and_restart","natural_six_second_modern_eco","long_actual_master_unclipped","four_era_final_work_reopens"],"qa":["flagship_127","valid_gpu_slots","roof_hollow","stroll_work_saved","unclipped_qa_audio"]}
	c.check(required.has(phase),"known_phase")
	for label:String in required.get(phase,[]):c.check(c.checks.get(label,false),"coverage_"+label)
	c.check(personal==(FileAccess.get_file_as_bytes(Context.State.DEFAULT_PATH) if FileAccess.file_exists(Context.State.DEFAULT_PATH) else PackedByteArray()),"personal_untouched")
	var result:=c.finish();print("LONG_JOURNEY ",JSON.stringify({"ok":result.ok,"phase":phase,"checks":result.checks.size(),"failures":result.checks.keys().filter(func(key):return not result.checks[key]),"audio":result.details.get("audio",{})}));c.demo.queue_free();await process_frame;quit(0 if result.ok else 1)
