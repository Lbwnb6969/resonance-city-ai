extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Fixture=preload("res://tests/test_city_creation_eras.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/四库路线_2026-10-17/Phase5"
var demo
var checks: Array=[]
var failures: Array[String]=[]
var facts: Dictionary={}
func _initialize()->void:_run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+25000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	await process_frame;await process_frame
func _capture(name_value: String)->void:
	await process_frame
	await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+name_value+".png")
func _identity()->Array:
	var ids: Array=[]
	for player: AudioStreamPlayer in demo.music._players.values():ids.append([player.get_instance_id(),player.stream.get_instance_id()])
	for player: AudioStreamPlayer in demo.music._effects:ids.append(player.get_instance_id())
	return ids
func _ray(at: Vector2)->Dictionary:
	return root.world_3d.direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,10,at.y),Vector3(at.x,0,at.y),1))
func _phase(worker: Dictionary,phase: String)->bool:
	for i in range(2000):
		if worker.phase==phase:return true
		demo.life._process(.1)
	return false
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var city: RefCounted=Fixture.fixture()
	var points: Array[Vector2]=[Vector2(-14,-2),Vector2(-6,-2)]
	var added: Dictionary=city.add_district(points,5.6,"market")
	city.set_district_era(added.district_id,"renaissance")
	for xz: Vector2i in [Vector2i(1,0),Vector2i(0,-1),Vector2i(1,-1)]:city.add_cell("h1",xz.x,xz.y,0)
	for xz: Vector2i in [Vector2i.ZERO,Vector2i(1,0),Vector2i(0,-1),Vector2i(1,-1)]:city.add_cell("h1",xz.x,xz.y,1)
	city.add_cell("h4",0,0,1);city.add_cell("h4",0,0,2);city.set_house_style("h4","round_tower")
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false)
	_check(demo.state.restore(city.snapshot()).ok,"real playable scene accepts schema 13 themed district")
	demo.life.setup(demo.state);demo._after_edit({"ok":true,"message":"fixture"},"history");await _wait()
	demo.focus=Vector3(-10,.7,-2);demo.zoom=19;demo.yaw=.28;demo.pitch=.76;demo._update_camera();demo.town.clear_preview()
	var deadline:=Time.get_ticks_msec()+25000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline:await process_frame
	await create_timer(.4).timeout
	var h1: Node3D=demo.town.house_roots.h1
	var h4: Node3D=demo.town.house_roots.h4
	var old: Node3D=demo.town.house_roots.h3
	var domes: Array=h1.get_meta("domes",[])
	_check(domes.size()==1 and domes[0].cell_ids.size()==4 and h4.get_meta("domes",[]).size()==1,"staged renderer installs 2x2 and three-storey octagonal crowns")
	_check(h1.get_meta("era_theme")=="renaissance" and old.get_meta("era_theme")=="pastoral","old town keeps its original facade alongside renaissance district")
	_check(h1.get_meta("arcade_faces",[]).size()>=4 and h1.get_meta("arcades",[]).size()>=4,"two-storey renaissance facade has real recessed colonnades")
	var lamps:=0
	for wall: Node in h1.find_children("*","Node3D",true,false):
		if wall.has_meta("arcade"):lamps+=1
	_check(lamps>=4,"arcade metadata survives mesh batching with hanging lamps in the production mesh")
	await physics_frame
	if not domes.is_empty():
		var plan: Dictionary=domes[0];var at: Vector2=plan.center+Vector2(.7,.2)
		var hit:=_ray(at)
		_check(not hit.is_empty() and hit.collider.get_meta("house_id","")=="h1" and hit.position.y>float(plan.y)+.8,"actual physics ray picks curved dome and original house identity")
		facts.dome=plan;facts.dome_hit={"height":hit.get("position",Vector3.ZERO).y,"house_id":hit.collider.get_meta("house_id","") if not hit.is_empty() else ""}
	var report: Dictionary=demo.music.renaissance_music_report()
	var player: AudioStreamPlayer=demo.music._players.renaissance_fugue
	_check(report.unlocked and report.weight>0 and player.playing and player.volume_db> -38,"visible atelier unlocks audible shared renaissance fugue")
	var notes: Array=demo.music.audio_report.theme_notes.get("renaissance_fugue",[])
	var timbres: Dictionary={}
	for note: Dictionary in notes:timbres[note.timbre]=true
	_check(notes.size()==54 and timbres.has("harpsichord") and timbres.has("strings") and timbres.has("oboe"),"rendered 24-second bank contains real keyboard subject, imitating strings and oboe")
	_check(player.stream.data.size()==demo.music.FRAMES*2 and player.stream.loop_end==demo.music.FRAMES and demo.music.audio_report.peaks.renaissance_fugue>.01 and demo.music.audio_report.seam_steps.renaissance_fugue<.01,"new PCM is non-silent and seamless on existing global D-pentatonic loop")
	_check(demo.music.get_child_count()==demo.music.STEMS.size()+4 and demo.music.spatial.report().bus_count==6,"current long stems and four shorts reuse existing six owned spatial buses")
	facts.music=report;facts.audio=demo.music.audio_report
	var ids:=_identity()
	var before_color: int = h1.get_instance_id()
	var before_palette: Array = h1.get_meta("palette_colors").duplicate()
	demo.selected_house="h1";demo._after_edit(demo.state.set_house_palette("h1",3),"terrace");await _wait()
	_check(demo.town.house_roots.h1.get_instance_id()==before_color and demo.town.house_roots.h1.get_meta("palette_colors")!=before_palette,"renaissance palette upload changes real colors and preserves dome collision and root")
	_check(demo.place_panel.get_global_rect().end.x<=root.size.x and demo.place_panel.get_global_rect().end.y<800,"service panel fits viewport after adding era and sixth role")
	demo.ui_layer.visible=false;await _capture("01_renaissance_day")
	demo._toggle_light();demo._toggle_light();await create_timer(.15).timeout;await _capture("02_renaissance_night")
	# Exercise the actual UI signal and normal asynchronous publication path.
	demo.ui_layer.visible=true;demo.selected_district=added.district_id;demo.select_tool(7);demo._refresh_district()
	_check(demo.district_era_picker.selected==1 and demo.district_era_picker.is_item_disabled(2) and demo.district_style_picker.selected==3,"district UI keeps market music independent and disables locked later eras")
	await _capture("03_district_era_tools")
	demo.district_era_picker.select(0);demo.district_era_picker.item_selected.emit(0);await _wait()
	_check(demo.state.districts[0].style=="market" and demo.town.house_roots.h1.get_meta("domes",[]).is_empty(),"actual era selector rebuilds only chosen facade while preserving music style")
	demo._after_edit(demo.state.undo(),"history");await _wait()
	_check(demo.town.house_roots.h1.get_meta("domes",[]).size()==1 and demo.state.era_unlocks.has("renaissance"),"normal UI undo republishes crowns and preserves unlock rights")
	demo.selected_house="h2";demo.select_tool(4);demo._refresh_ui()
	_check(demo.role_buttons.has("atelier") and demo.workshop_info.is_visible_in_tree() and demo.workshop_info.text.contains("画作"),"sixth service role shows real artist inventory and activity")
	await _capture("04_atelier_service")
	_check(demo.place_panel.get_global_rect().end.x<=root.size.x-20 and demo.place_panel.get_global_rect().end.y<800,"visible atelier panel retains right margin and fits above toolbar")
	var worker: Dictionary=demo.life.workshop.workers[0]
	_check(_phase(worker,"to_target") and worker.carry.visible,"production artist leaves with an actual canvas node")
	var target:=str(worker.target_id)
	demo.ui_layer.visible=false;await _capture("05_carrying_art")
	_check(_phase(worker,"installing"),"artist reaches actual recipient on route")
	demo.life._process(2.01);demo._refresh_workshops()
	var root_id: int=demo.town.house_roots[target].get_instance_id()
	_check(demo.state.culture_level(target)==1 and demo.town.craft.culture_roots.has(target),"onsite art callback installs independently batched permanent tapestry")
	for i in range(8000):
		if demo.state.culture_level(target)==2:break
		demo.life._process(.1)
	demo._refresh_workshops()
	_check(demo.state.culture_level(target)==2 and demo.town.craft.culture_roots[target].get_meta("culture_level")==2 and demo.town.house_roots[target].get_instance_id()==root_id,"real second delivery adds stained glass while retaining structural mesh identity")
	for house: Dictionary in demo.state.houses:
		if str(house.id)==target: demo.focus=Vector3(float(house.origin[0]),.7,float(house.origin[1]));break
	demo.zoom=8;demo.yaw=.85;demo._update_camera()
	while demo.light_phase!=0:demo._toggle_light()
	await _capture("06_delivered_culture")
	demo.ui_layer.visible=true;demo.journal.open_panel();await _capture("07_four_era_journal")
	_check(demo.journal.era_label.tooltip_text.contains("时代 4") and demo.journal.era_label.tooltip_text.contains("已开启"),"journal presents all four era chapters and earned status")
	demo.journal.close_panel();demo.ui_layer.visible=false
	demo.focus=Vector3(-35,.7,35);demo.zoom=12;demo._update_camera();await create_timer(.4).timeout
	_check(demo.music.renaissance_music_report().weight==0 and player.volume_linear==0,"empty camera exactly silences added era track without stopping transport")
	_check(_identity()==ids,"era editing and delivery retain all long PCM and fixed short-player identities")
	var frames: Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();frames.append((now-last)/1000.0);last=now
	frames.sort();facts.performance={"p95_ms":frames[113],"max_ms":frames[-1]}
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated era verification preserves personal save bytes")
	var result: Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true))
	print("PHASE_FIVE ",JSON.stringify({"ok":result.ok,"checks":checks.size(),"failures":failures,"performance":facts.performance}))
	demo.queue_free();await process_frame;await create_timer(.2).timeout;quit(0 if failures.is_empty() else 1)
