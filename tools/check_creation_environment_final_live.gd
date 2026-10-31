extends "res://tools/check_creation_environment_groups_live.gd"
func run()->void:
	OUT="res://验证记录/M84/environment_20261031/live_release"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var baseline:="res://验证记录/M84/environment_20261031/before_environment.gd"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--baseline="):baseline=arg.trim_prefix("--baseline=")
	var prior:=baseline_settings(baseline);check(not prior.is_empty(),"exact old environment script exported")
	if prior.is_empty():quit(1);return
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var voices:=pool()
	var city:RefCounted=Fixture.courtyard("ring","none").city
	for row:Array in [[Vector2(-17,-15),"olive"],[Vector2(-17,-20),"golden_tree"],[Vector2(-19,-23),"cypress"]]:check(city.place_plant(row[0],row[1]).ok,"actual authored plant "+row[1])
	check(city.add_road([Vector2(-32,-10),Vector2(-17,-10)] as Array[Vector2],"path","none").ok,"actual foreground path")
	check(city.add_water([Vector2(-32,-16)] as Array[Vector2],2.,"pond").ok,"actual water-bank fixture")
	await show(city,Vector2(-24,-16),"昼夕夜环境样板");quiet();demo.ui_layer.hide();demo.life.set_process(false);demo.set_process(false);demo.town.wildlife.set_process(false);demo.town.set_process(false);freeze(0.)
	if "--ui-only" in OS.get_cmdline_user_args():
		var saved_ui:Dictionary=demo.state.snapshot();root.size=Vector2i(1024,768);demo._set_light_phase(2);demo.ui_layer.show()
		for frame in range(12):await process_frame
		demo.town.clear_preview();demo.town.preview.hide();await capture("night_ui_1024_clean")
		check(demo.state.snapshot()==saved_ui,"clean UI image preserves authorship")
		FileAccess.open(OUT+"/ui_report.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures},"\t"))
		demo.queue_free()
		for frame in range(6):await process_frame
		quit(0 if failures.is_empty() else 1);return
	var original:Dictionary=demo.state.snapshot();var solid:=structure();var record:=Span.start()
	facts.views=[]
	for subject:String in ["court","facade","back","overview","grazing"]:
		demo.focus=Vector3(-24.4,.8,-16.4);demo.zoom=16.;demo.pitch=.8;demo.yaw=.25
		if subject=="facade":demo.focus=Vector3(-24,.8,-12);demo.zoom=9.;demo.pitch=.22
		elif subject=="back":demo.focus=Vector3(-21,1.,-18);demo.zoom=9.;demo.pitch=.35;demo.yaw=2.5
		elif subject=="overview":demo.zoom=30.
		elif subject=="grazing":demo.zoom=12.;demo.pitch=.09;demo.yaw=.7
		demo._update_camera()
		for phase in [0,1,2]:
			demo._set_light_phase(phase);var final:=settings()
			check(is_equal_approx(final.environment.tonemap_exposure,prior[phase].environment.tonemap_exposure) and is_equal_approx(final.sun.light_energy,prior[phase].sun.light_energy),"exposure and sun energy unchanged "+subject+str(phase))
			for stage:String in ["before","final"]:
				restore_settings(prior[phase] if stage=="before" else final)
				for frame in range(6):await process_frame
				await capture(subject+"_"+str(phase)+"_"+stage)
				facts.views.append({"subject":subject,"phase":phase,"stage":stage,"settings":settings()})
	check(structure()==solid and demo.state.snapshot()==original,"light and camera comparisons preserve court triangles and author rights")
	demo._set_light_phase(2)
	var night:=settings();check(night.environment.ambient_light_color==prior[2].environment.ambient_light_color and is_equal_approx(night.environment.ambient_light_energy,prior[2].environment.ambient_light_energy) and is_equal_approx(night.environment.ambient_light_sky_contribution,prior[2].environment.ambient_light_sky_contribution),"night fill remains original readable configuration")
	# Edit and history must preserve the light rig and re-publish original geometry.
	demo.set_process(true);demo._after_edit(demo.state.rotate_house("h1",.4),"house");await settle();quiet();demo.life.set_process(false)
	demo._set_light_phase(1);await capture("rotated_evening")
	await key(KEY_Z,true);await settle();var undone:Dictionary=demo.state.snapshot();var content:=undone.duplicate(true);content.revision=original.revision
	check(structure()==solid and content==original and undone.revision==original.revision+2,"native Undo restores geometry and all author content with monotonic revision")
	demo.life.set_process(false);demo._capture_journeys();var saved:Dictionary=demo.state.snapshot()
	check(saved.journey_checkpoint==demo.life.checkpoint(),"cold input includes actual paused life checkpoint through formal save capture")
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(saved))).ok,"isolated cold restore")
	await show(cold,Vector2(-24,-16),"环境冷读");quiet();demo._set_light_phase(2);demo.zoom=16.;demo._update_camera()
	facts.cold={"geometry_equal":structure()==solid,"author_equal":demo.state.snapshot()==saved,"author_differences":{}}
	for field:String in saved:
		if demo.state.snapshot().get(field)!=saved[field]:facts.cold.author_differences[field]={"before":saved[field],"after":demo.state.snapshot().get(field)}
	check(structure()==solid and demo.state.snapshot()==saved,"cold published geometry and all saved data including journey checkpoint equal incremental work")
	check(settings().environment==night.environment,"cold publication retains selected night environment")
	demo.ui_layer.show();root.size=Vector2i(1024,768)
	for frame in range(12):await process_frame
	demo.set_process(false);demo.town.clear_preview();demo.town.preview.hide()
	await capture("night_ui_1024")
	facts.pcm=Span.finish(record,OUT+"/environment_Master.wav");check(facts.pcm.ok,"actual edit and view PCM audible and unclipped")
	check(pool()==voices,"audio pool unchanged")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("ENVIRONMENT_FINAL_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free()
	for frame in range(6):await process_frame
	quit(0 if failures.is_empty() else 1)
