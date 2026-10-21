extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/地图打开优化_2026-10-22"
var demo
var reports:Dictionary={}
func _initialize()->void:run.call_deferred()
func settled()->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy or demo.music._loading:await process_frame
	for i in range(5):await process_frame
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=OUT+"/isolated_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false);await settled()
	for id:String in ["sunny_banks","misty_archipelago","daily_resonance"]:
		var city:=State.new();var began:=Time.get_ticks_usec();var created:Dictionary=city.Biomes.create(city,id)
		var create_ms:=float(Time.get_ticks_usec()-began)/1000.
		if not created.ok:push_error(str(created));quit(1);return
		var chosen:Dictionary={"ok":true,"id":id,"title":id,"world":city.snapshot(),"view":{"focus":[-3.,0.,0.],"yaw":demo.yaw,"pitch":demo.pitch,"zoom":42.,"light_phase":0,"evening":false}}
		began=Time.get_ticks_usec();await demo.gallery._open_chosen(chosen);demo.life.set_process(false)
		var open_ms:=float(Time.get_ticks_usec()-began)/1000.;await settled()
		var valid:bool=demo.state.biome_seed.get("id","")==id and demo.state.snapshot().houses==chosen.world.houses and demo.state.snapshot().waters==chosen.world.waters
		reports[id]={"create_ms":create_ms,"open_ms":open_ms,"valid":valid,"render":demo.town.rebuild_stats.duplicate(true),"terrain":demo.state._ground_terrain.stats.duplicate(true),"terrain_surface":demo.town.terrain_surface.stats.duplicate(true)}
		print("BIOME_OPEN_PROFILE ",id," ",JSON.stringify(reports[id]))
		if not valid:push_error("Actual opened world differs");quit(1);return
		await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/"+id+".png")
	var label:="before"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--label="):label=arg.trim_prefix("--label=")
	FileAccess.open(OUT+"/"+label+".json",FileAccess.WRITE).store_string(JSON.stringify(reports,"\t"))
	demo.queue_free();await process_frame;quit()
