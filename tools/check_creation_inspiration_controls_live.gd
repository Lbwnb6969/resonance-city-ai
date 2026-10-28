extends "res://tools/check_creation_reference_music_live.gd"
const Fixture=preload("res://tests/test_city_creation_inspiration_samples.gd")
const Samples=preload("res://scripts/world/city_creation_inspiration_samples.gd")
func run()->void:
	OUT="res://验证记录/M82/controls_first";DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));Engine.max_fps=60
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:
		root.size=size;await show(Fixture.fixture(),Vector2(-30,-20),"手札外观控制");quiet()
		demo.guide.open_panel();await settle();var letters:Node=demo.get_meta("city_letters");var controls:Node=letters.get_node("SecondStudyControls")
		check(controls.get_children().all(func(c):return Rect2(Vector2.ZERO,Vector2(size)).encloses(c.get_global_rect())),"real sample controls fit "+str(size.x))
		var ranks:Dictionary=demo.state.harmony_journey.ranks.duplicate();var rows:=Samples.plans(demo.state)
		await ui_click(controls.get_child(1));await settle()
		check(await wait_for(func():return not demo.get_node("TraditionScenery/SecondStudyScenery").visible),"native appearance toggle hides sample subtree "+str(size.x))
		check(demo.state.harmony_journey.ranks==ranks and Samples.plans(demo.state)==rows,"appearance control preserves rank and music positions "+str(size.x))
		await ui_click(controls.get_child(1));await settle()
		check(demo.get_node("TraditionScenery/SecondStudyScenery").visible,"native toggle restores visible sample "+str(size.x))
		letters.sample_cursor=0;await ui_click(controls.get_child(0));await settle()
		check(not demo.guide.visible() and demo.focus.distance_to(rows[0].position+Vector3.UP*.7)<.01,"native locate focuses exact sample geometry "+str(size.x))
		await capture("located_sample_"+str(size.x))
	var city:RefCounted=preload("res://tools/fixtures/city_creation_era_ceremony_fixture.gd").before("clockwork")
	city.creative_settings=city.CreationPolicy.Save.defaults();await show(city,Vector2(-14,-2),"真实时代纪念");quiet()
	check(not demo.state.era_unlocks.has("clockwork"),"fixture has not earned clockwork before actual era edit")
	var result:Dictionary=demo.state.set_district_era(str(demo.state.districts[1].id),"renaissance");demo._after_edit(result,"history");await settle()
	check(result.ok and demo.state.era_unlocks.has("clockwork"),"real occupied era change earns clockwork through existing rules")
	var ceremony:Node=demo.get_meta("era_ceremony")
	check("clockwork" in demo.state.harmony_journey.celebrated_eras and ceremony.pending.is_empty() and ceremony.active.is_empty() and not ceremony.panel.visible and not ceremony.focus.visible,"free city records earned era without another popup or forced focus")
	var frames:Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(120):
		await process_frame;var now:=Time.get_ticks_usec();frames.append((now-last)/1000.);last=now
	frames.sort()
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"frames":frames.size(),"frame_p95_ms":frames[113],"frame_max_ms":frames[-1],"cap_for_observation":60}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("INSPIRATION_CONTROLS ",JSON.stringify(report));demo.queue_free();await process_frame;await create_timer(.2).timeout;quit(0 if failures.is_empty() else 1)
