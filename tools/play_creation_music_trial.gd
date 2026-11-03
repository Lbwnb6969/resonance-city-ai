extends SceneTree
## Local, editable candidate city. All works stay under this verification session.
const Scene=preload("res://scenes/city_creation.tscn")
const Trial=preload("res://scripts/ui/city_creation_music_trial.gd")
const Probe=preload("res://tools/fixtures/city_creation_audio_probe.gd")
var demo:Node3D
var trial:Node
var out:=""
func _initialize()->void:run.call_deferred()
func ready_city()->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy or demo.music._loading:await process_frame
	for i in range(12):await process_frame
func run()->void:
	if not OS.get_cmdline_user_args().has("--isolated-session"):push_error("Launch with --isolated-session");quit(1);return
	out="res://验证记录/PlayTest/music_trial_"+Time.get_datetime_string_from_system().replace(":","-")
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):push_error("new isolated output directory required");quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));root.size=Vector2i(1440,900)
	demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=out+"/works";root.add_child(demo);await ready_city()
	trial=Trial.new();demo.add_child(trial)
	if not trial.install(demo):push_error("Current candidate catalog unavailable");quit(1);return
	trial.start_selected();demo.ledger.open_panel();print("MUSIC_TRIAL_READY works=",ProjectSettings.globalize_path(demo.collection_directory))
	if OS.get_cmdline_user_args().has("--verify-trial"):await verify()
func click(control:Control)->void:
	var at:=control.get_global_rect().get_center()
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.device=92;event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;root.push_input(event);await process_frame
func verify()->void:
	var checks:Array=[];var personal:=FileAccess.get_file_as_bytes(demo.state.DEFAULT_PATH)
	while is_instance_valid(trial.conductor) and not trial.conductor.active:await process_frame
	checks.append(is_instance_valid(trial.conductor) and trial.conductor.active)
	checks.append(trial.packs.size()==57 and demo.state.houses.is_empty() and not demo.persistence)
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:
		root.size=size;demo.ledger._last_refresh=-500;demo.ledger.refresh();await create_timer(.4).timeout
		checks.append("技术通过 · 待听评" in demo.ledger.body.text and not "第1段 / 六段" in demo.ledger.body.text)
		checks.append(trial.picker.is_visible_in_tree() and trial.stop_button.is_visible_in_tree() and demo.ledger.paper.get_global_rect().encloses(trial.picker.get_global_rect()) and demo.ledger.paper.get_global_rect().encloses(demo.ledger.guide_button.get_global_rect()) and demo.ledger.paper.get_global_rect().encloses(trial.stop_button.get_global_rect()))
		await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(out+"/trial_L_"+str(size.x)+".png")
	await click(trial.pause_button);await process_frame;checks.append(trial.conductor.paused)
	await click(trial.pause_button);await process_frame;checks.append(not trial.conductor.paused)
	checks.append(demo.state.add_house(Vector2(-28,-20)).ok);await ready_city();checks.append(trial.conductor.active)
	await click(trial.stop_button);await process_frame;checks.append(demo.music.get_node_or_null("GameMusicPlayer")==null)
	trial.picker.select(trial.packs.size()-1);await click(trial.play_button)
	while is_instance_valid(trial.conductor) and not trial.conductor.active:await process_frame
	checks.append(is_instance_valid(trial.conductor) and trial.conductor.active and trial.conductor.prepared.manifest.source_id==trial.packs[-1].source_id)
	var pcm:Dictionary=await Probe.record(out+"/new_candidate_Master.wav",3.2);checks.append(pcm.ok)
	# Replace an active candidate through the same real button path.
	trial.picker.select(0);await click(trial.play_button)
	while demo.music.get_node_or_null("GameMusicPlayer")==null or not demo.music.get_node("GameMusicPlayer").active:await process_frame
	checks.append(trial.conductor.prepared.manifest.source_id==trial.packs[0].source_id)
	checks.append(personal==FileAccess.get_file_as_bytes(demo.state.DEFAULT_PATH))
	var report:={"ok":not checks.has(false),"checks":checks.size(),"results":checks,"works":demo.collection_directory,"pcm":pcm,"listening_approved":false}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("MUSIC_TRIAL_VERIFY ",JSON.stringify(report));quit(0 if report.ok else 1)
