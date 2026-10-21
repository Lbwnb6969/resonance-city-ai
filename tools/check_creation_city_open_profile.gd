extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const Examples=preload("res://scripts/world/city_creation_examples.gd")
const OUT="res://验证记录/整城打开优化_2026-10-22"
var demo
func _initialize()->void:run.call_deferred()
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=OUT+"/isolated_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false)
	while demo.music._loading:await process_frame
	var chosen:Dictionary=Examples.read("example_flagship")
	if not chosen.ok:push_error(str(chosen));quit(1);return
	var began:=Time.get_ticks_usec();await demo.gallery._open_chosen(chosen);demo.life.set_process(false)
	var total:=float(Time.get_ticks_usec()-began)/1000.
	var world:Dictionary=demo.state.snapshot()
	var same_world:bool=true
	for key:String in ["houses","roads","plants","waters","terrain_strokes","districts"]:
		same_world=same_world and world.get(key,[])==chosen.world.get(key,[])
	var report:Dictionary={"open_ms":total,"render":demo.town.rebuild_stats.duplicate(true),"meadow":demo.town.meadow.stage_ms.duplicate(),"shore_ms":demo.town.shore.elapsed_ms,"terrain":demo.state._ground_terrain.stats.duplicate(true),"houses":demo.state.houses.size(),"roads":demo.state.roads.size(),"same_world":same_world,"life_revision":demo.life.last_revision,"revision":demo.state.revision,"valid":same_world and demo.life.last_revision==demo.state.revision}
	var label:="before"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--label="):label=arg.trim_prefix("--label=")
	FileAccess.open(OUT+"/"+label+".json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("CITY_OPEN_PROFILE ",JSON.stringify(report))
	await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/"+label+".png")
	demo.queue_free();await process_frame;quit(0 if report.valid else 1)
