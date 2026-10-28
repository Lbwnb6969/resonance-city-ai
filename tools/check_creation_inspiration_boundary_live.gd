extends "res://tools/check_creation_reference_music_live.gd"
const Fixture=preload("res://tests/test_city_creation_inspiration_samples.gd")
const Samples=preload("res://scripts/world/city_creation_inspiration_samples.gd")
func run()->void:
	OUT="res://验证记录/M82/boundary_first"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var city:=Fixture.fixture();var vine:Dictionary=Samples.plans(city).filter(func(r):return r.card==Samples.IDS[1])[0];var source:=str(vine.house_id)
	check(city.set_house_architecture(source,"townhouse").ok,"actual removal of column support before playback")
	city.CreationPolicy.set_preferences(city,{"music":{"mode":"fixed","style":"pastoral_breeze","seed":74001}})
	await show(city,Vector2(-31,-32),"手札的真实乐句边界");quiet();demo.zoom=9.;demo.focus=vine.position+Vector3.UP*.7;demo._update_camera();await settle()
	check(await wait_for(func():return demo.music.emergence.score.get("source_id","")==source and demo.music.get_meta("orchestration_plan",{}).get("inspiration","none")==""),"real source starts without unbuilt column variant")
	var clock:float=demo.music._playback_clock();var boundary:float=(floorf(clock/24.)+1.)*24.
	var edit:Dictionary=demo.state.set_house_architecture(source,"ionic_stoa");demo._after_edit(edit,"history");await settle()
	check(edit.ok and Samples.for_source(demo.state,source)==Samples.IDS[1],"actual authored column support activates earned sample eligibility")
	check(demo.music.get_meta("orchestration_plan",{}).get("inspiration","")=="","eligibility does not cut into current phrase")
	var recording:Dictionary=await record_recipe("rank2_column_boundary",maxf(5.,boundary-demo.music._playback_clock()+5.))
	var before:Array=recording.samples.filter(func(r):return r.clock<boundary)
	var after:Array=recording.samples.filter(func(r):return r.clock>=boundary+1.)
	check(not before.is_empty() and before.all(func(r):return r.section.get("inspiration","")==""),"all measured pre-boundary plans retain original answer")
	check(not after.is_empty() and after.all(func(r):return r.section.get("inspiration","")==Samples.IDS[1] and r.section.answer_material!=r.section.material),"measured next phrase uses distinct earned answer material")
	check(after.any(func(r):return r.voices.terrace.stream=="core1/pastoral_breeze/%d/0/0/74001/answer"%r.section.answer_material),"actual original answer player receives the corresponding authored stream")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"edit_clock":clock,"boundary":boundary,"recorded_seconds":recording.seconds}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("INSPIRATION_BOUNDARY ",JSON.stringify(report));demo.queue_free();await process_frame;await create_timer(.2).timeout;quit(0 if failures.is_empty() else 1)
