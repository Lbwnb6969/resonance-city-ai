extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Fixture=preload("res://tools/fixtures/city_creation_regional_echo_fixture.gd")
const OUT="res://验证记录/复调开拓_2026-10-19"
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _edit(result:Dictionary)->void:
	_check(bool(result.ok),"actual planning edit succeeds")
	demo._after_edit(result,"history");var until:=Time.get_ticks_msec()+90000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<until:await process_frame
	_check(not demo.edit_pending(),"visible city and live graph publish together");demo.life.set_process(false)
func _capture(name:String)->void:
	for i in range(3):await process_frame
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+name+".png")==OK,"actual GL screenshot "+name)
func _flow(a:String,b:String,tier:int,focus:Vector2)->void:
	await _edit(demo.state.link_districts(a,b))
	demo.focus=Vector3(focus.x,.7,focus.y);demo.zoom=24.;demo.yaw=.3;demo.pitch=.8;demo._update_camera();demo.select_tool(7);demo.selected_district=a;demo._refresh_ui()
	var until:=Time.get_ticks_msec()+45000
	while Time.get_ticks_msec()<until and int(demo.state.regional_echo().tier)<tier:await process_frame
	_check(int(demo.state.regional_echo().tier)==tier,"genuine completed audio reply activates region tier "+str(tier))
	until=Time.get_ticks_msec()+5000
	while Time.get_ticks_msec()<until and int(demo.music.emergence.score.get("variant",0))<(1 if tier==2 else 2):await process_frame
	for i in range(12):await process_frame
	var lead:=str(demo.music.emergence.score.get("lead_track",""));var wanted:=1 if tier==2 else 2
	var variation:=str(demo.music._variation_active.get(lead,""))
	_check(not lead.is_empty() and variation.ends_with("/"+str(wanted)) and demo.music._players[lead].playing and demo.music._players[lead].stream==demo.music._variation_streams.get(variation),"real synchronized long player adopts the earned B/C texture at a phrase boundary")
	var badge:Label=demo.get_meta("regional_echo_badge");badge.get_parent().show()
	var label:="对位" if tier==2 else "复调" if tier==3 else "四方交响"
	until=Time.get_ticks_msec()+1500
	while Time.get_ticks_msec()<until and not demo.district_description.text.contains(label):await process_frame
	_check(badge.visible and badge.text.contains("提速25%") and demo.district_description.text.contains(label),"actual goal badge and district drawer show the active reward within the normal half-second UI refresh")
	facts[str(tier)]={"echo":demo.state.regional_echo().duplicate(true),"lead":lead,"variation":variation,"calls":demo.music.reply.calls,"answers":demo.music.reply.answers}
	await _capture("tier_"+str(tier));badge.get_parent().hide()
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var authored:=Fixture.build();var city:RefCounted=authored.city
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated";root.add_child(demo);demo.life.set_process(false)
	await _edit(demo.state.restore(city.snapshot()))
	var until:=Time.get_ticks_msec()+180000
	while demo.music._loading and Time.get_ticks_msec()<until:await process_frame
	_check(not demo.music._loading and DisplayServer.get_name()!="headless","production audio bank and real GL window are active")
	var players:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():players.append(player.get_instance_id())
	var ids:Array=authored.districts
	await _flow(ids[0],ids[1],2,Vector2(-20,-16))
	await _edit(demo.state.unlink_districts(ids[0],ids[1]))
	await _flow(ids[1],ids[2],3,Vector2(-20,12))
	_check(is_equal_approx(demo.state.service_radius(22.),28.6),"actual published three-region service radius is thirty percent larger")
	demo.state.resonance_afterglow.clear()
	for i in range(3000):
		demo.life._process(.05);await process_frame
		if demo.state.workshop_status(authored.shop).delivered>0:break
	_check(demo.state.workshop_status(authored.shop).delivered>0 and demo.state.afterglow_remaining(authored.homes[0])>28.,"real on-screen artisan delivery adds its earned household afterglow")
	await _edit(demo.state.unlink_districts(ids[1],ids[2]))
	await _flow(ids[2],ids[3],4,Vector2(18,12))
	_check(demo.state.regional_echo().prestige and demo.state.level_tier(authored.homes[1])==1,"four-region qualification retains actual service gates on an unfed house")
	demo.ledger.open_panel();_check(demo.ledger.body.text.contains("四方交响"),"real life ledger exposes the four-region reward");await _capture("four_regions_ledger");demo.ledger.close_panel()
	root.size=Vector2i(1024,768)
	for i in range(6):await process_frame
	_check(demo.district_panel.get_global_rect().end.y<768. and demo.district_panel.get_global_rect().position.x>=0.,"long four-region district drawer remains scrollable within the small window")
	await _capture("four_regions_small_window")
	await _edit(demo.state.set_house_palette(str(authored.homes[0]),2))
	_check(demo.edit_budget_report().mode=="colors" and demo.state.regional_echo().tier==4,"appearance-only palette publication retains earned region qualification and the existing graph")
	var after:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():after.append(player.get_instance_id())
	_check(players==after and demo.music._effects.size()==4,"region textures reuse the twelve long players and four short voices")
	var cold:=State.new();var restored:Dictionary=cold.restore(JSON.parse_string(JSON.stringify(demo.state.snapshot(),"",true,true)))
	_check(restored.ok and cold.regional_replies.size()==3,"three completed exchanges and actual delivery save with their terrain and voice evidence")
	root.size=Vector2i(1440,900)
	var flagship:Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))
	await _edit(demo.state.restore(flagship))
	facts.flagship={"houses":demo.state.houses.size(),"prepare_ms":demo.state.regional_prepare_ms,"visibility_published":demo.state._region_visibility_revision==demo.state.revision}
	_check(demo.state.houses.size()==127 and demo.state._region_visibility_revision==demo.state.revision ,"flagship region classification reuses current published plant visibility")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal continuing city remains unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("REGIONAL_ECHO_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
