extends SceneTree
## Run unchanged in two isolated copies of the same runtime project. Only
## cafe Layout / visual helper sources differ; no synthetic historic timings.
const Scene=preload("res://scenes/city_creation.tscn")
var failures: Array[String]=[]
var measurements: Array=[]
var checks:=0

func _initialize() -> void: _run.call_deferred()

func _check(value:bool,label:String) -> void:
	checks+=1
	if not value: failures.append(label)

func _run() -> void:
	root.size=Vector2i(1440,900)
	for sample in range(3):
		var demo=Scene.instantiate()
		demo.persistence=false
		root.add_child(demo)
		demo.life.set_process(false)
		demo.selected_house="h3"
		demo.select_tool(4)
		demo.focus=Vector3(-6,0.7,1)
		demo.zoom=17
		demo.yaw=0.4
		demo._update_camera()
		await physics_frame
		await process_frame
		var timeout:=Time.get_ticks_msec()+20000
		while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<timeout: await process_frame
		_check(not demo.music.audio_report.is_empty(),"normal seven-stem music bank ready")
		var h1:int=demo.town.house_roots.h1.get_instance_id()
		var start:=Time.get_ticks_usec()
		# This is the exact product callback of the visible role button.
		demo.role_buttons.garden_cafe.pressed.emit()
		var role_ms:=float(Time.get_ticks_usec()-start)/1000.0
		_check(str(demo.state.houses[2].role)=="garden_cafe","actual role button commits cafe transaction")
		var plan:Dictionary=demo.life.cafe.layouts.h3
		_check(not plan.is_empty() and demo.town.cafes.roots.h3.get_meta("layout").center==plan.center,"feedback derives and renders the actual shared courtyard")
		_check(demo.town.house_roots.h1.get_instance_id()==h1,"role feedback preserves unrelated house geometry")
		var shortcut:Array[Vector2]=[Vector2(-2.4,-3.45),Vector2(-4.0,-3.45),Vector2(-4,1.55),Vector2(-8,1.55)]
		var road_count:int=demo.state.roads.size()
		start=Time.get_ticks_usec()
		var road:Dictionary=demo.state.add_road(shortcut)
		demo._after_edit(road,"road")
		var road_ms:=float(Time.get_ticks_usec()-start)/1000.0
		_check(road.ok and demo.state.roads.size()==road_count+1,"actual same nearby road transaction and full feedback complete")
		measurements.append({"sample":sample,"role_transaction_and_feedback_ms":role_ms,"near_road_transaction_and_feedback_ms":road_ms,"shared_layout":var_to_str(demo.life.cafe.layouts.h3)})
		demo.queue_free()
		await process_frame
	var mode:="baseline" if "--baseline-source" in OS.get_cmdline_user_args() else "optimized"
	print(JSON.stringify({"mode":mode,"display":DisplayServer.get_name(),"scope":"same runtime sources, complete role button / near-road transaction plus _after_edit CPU time; scene creation excluded","samples":measurements},"\t"))
	if failures.is_empty():
		print("PASS cafe full edit cost ",checks," checks")
		quit()
	else:
		for failure:String in failures: push_error(failure)
		print("FAIL cafe full edit cost ",failures.size()," / ",checks)
		quit(1)
