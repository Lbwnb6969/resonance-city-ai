extends RefCounted
## A new work owns fresh contexts. Keep the published city intact while the
## existing CPU workers and hidden GPU staging prepare its replacement.
const STAGING_SLICE_MS:=65.0
var town:Node3D
var life:Node3D
var stats:Dictionary={}

func prepare(demo:Node3D,city:RefCounted,status:Callable)->void:
	var began:=Time.get_ticks_usec()
	town=demo.TownRenderer.new();town.name="OpeningTown";town.visible=false
	town.set_meta("hidden_load",true)
	town.set_process(false)
	demo.add_child(town)
	# Create layer infrastructure now; exact fields and geometry are prepared
	# by the existing worker without borrowing any previous work's identities.
	town.setup(city,true)
	stats.bootstrap_ms=float(Time.get_ticks_usec()-began)/1000.
	stats.bootstrap_parts=town.setup_stats.duplicate()
	status.call("正在铺开街道与屋舍……")
	await demo.get_tree().process_frame
	town.request_budget_rebuild()
	life=demo.Life.new();life.name="OpeningLife";life.visible=false
	demo.add_child(life);life.set_process(false)
	life.setup(city,true);life.set_budget_hold(true);life.begin_budget_sync()
	var poll:Dictionary={}
	var frames:=0
	while not poll.get("committed",false):
		await demo.get_tree().process_frame
		var started:=Time.get_ticks_usec()
		var ready:bool=life.poll_budget_sync(false)
		# This modal load stages an entire hidden work. A fuller slice avoids
		# spending several extra seconds waiting between tiny assembly batches.
		# Interactive edits keep their independent, smaller slice.
		poll=town.poll_budget_rebuild(STAGING_SLICE_MS,ready)
		stats.poll_max_ms=maxf(float(stats.get("poll_max_ms",0.)),float(Time.get_ticks_usec()-started)/1000.)
		frames+=1
		var total:int=town.budget_rebuild.tasks.size()
		status.call("正在安放屋舍与花草……" if total>0 else "正在铺开街道与屋舍……")
	stats.frames=frames
	town.remove_meta("hidden_load")
	stats.render=town.budget_rebuild.stats.duplicate(true)
	status.call("街坊正在回到河湾……")
	await demo.get_tree().process_frame
	var started:=Time.get_ticks_usec()
	life.commit_budget_sync()
	life.finish_initial_setup()
	life.set_budget_hold(false)
	town.refresh_ecology()
	stats.life_commit_ms=float(Time.get_ticks_usec()-started)/1000.
	# Keep completed hidden contexts paused for one frame. Actor/ecology setup
	# and the new city's first visible GPU draw must not occupy the same frame.
	await demo.get_tree().process_frame
	stats.total_ms=float(Time.get_ticks_usec()-began)/1000.
