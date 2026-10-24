extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Moment=preload("res://scripts/world/city_creation_season_moment.gd")
const Live=preload("res://tools/fixtures/city_creation_alpine_live.gd")
const Final=preload("res://tools/fixtures/city_creation_final_prototypes_live.gd")
const Audio=preload("res://tools/fixtures/city_creation_audio_probe.gd")
var out:="res://验证记录/M40/live"
var demo
var checks:=0
var failures:Array=[]
var facts:Dictionary={}
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy or demo.music._loading:await process_frame
	for i in range(10):await process_frame
func shot(label:String)->void:
	demo.toast.hide();demo.toast_time=0.;demo.town.clear_preview();await RenderingServer.frame_post_draw
	check(root.get_texture().get_image().save_png(out+"/"+label+".png")==OK,"native screenshot "+label)
func open_world(city)->void:
	demo.set_process(true)
	for meta:String in ["inspiration_draft","vignette_journey"]:demo.get_meta(meta).set_process(true)
	demo.spatial_popover.close();demo.journal.close_panel()
	await demo.gallery._open_chosen({"ok":true,"id":"season_stamps","title":"风物与印章","world":city.snapshot(),"view":{"focus":[-8.,1.,-7.5],"zoom":24.,"yaw":.62,"pitch":.8,"light_phase":0,"evening":false}})
	await settle();demo.life.set_process(false)
	for meta:String in ["inspiration_draft","vignette_journey"]:demo.get_meta(meta).poll()
func click(button:Control)->void:
	var at:=button.get_global_rect().get_center();var move:=InputEventMouseMotion.new();move.position=at;root.push_input(move);await process_frame
	for pressed:bool in [true,false]:
		var e:=InputEventMouseButton.new();e.position=at;e.button_index=MOUSE_BUTTON_LEFT;e.pressed=pressed;root.push_input(e);await process_frame
	await settle()
func stamps()->void:
	var classic:=Final.neoclassical_fixture();var alpine:=preload("res://tools/fixtures/city_creation_alpine_fixture.gd").build()
	for i in range(6):assert(alpine.city.set_house_architecture(alpine.flat[i],Final.Choice.ALPINE[i]).ok)
	var groups:Array=[classic,{"city":alpine.city,"ids":alpine.flat,"keys":Final.Choice.ALPINE}]
	for fixture in [preload("res://tools/fixtures/city_creation_clockwork_prototypes_fixture.gd"),preload("res://tools/fixtures/city_creation_renaissance_prototypes_fixture.gd")]:
		var built:Dictionary=fixture.build();var ids:Array=[]
		for key:String in built.groups:ids.append(built.groups[key][1])
		groups.append({"city":built.city,"ids":ids,"keys":built.groups.keys()})
	var seen:Dictionary={}
	for group:Dictionary in groups:
		await open_world(group.city);demo.set_process(false)
		for meta:String in ["inspiration_draft","vignette_journey"]:demo.get_meta(meta).set_process(false)
		var snapshot:Dictionary=demo.state.snapshot()
		for i in range(group.ids.size()):
			var id:String=group.ids[i];var key:String=group.keys[i];var house:Dictionary=demo.town._house_record(id)
			for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
				root.size=size;demo.focus=Vector3(house.origin[0],1.7,house.origin[1]);demo.zoom=25.;demo.pitch=.8;demo._update_camera();demo._set_light_phase(0 if size.x==1440 else 2)
				demo.spatial_popover.open_for_house(id);await create_timer(.22).timeout;await settle()
				demo.spatial_popover.follow();demo.intuitive_guidance.update_guidance(0.)
				var pop=demo.spatial_popover
				check(pop.architecture_button.kind=="prototype/"+key,"published recipe selects actual stamp "+key+str(size.x))
				check(pop.architecture_button.caption==Final.Choice.label(key) and pop.ring.placement_ok,"readable recipe caption and clear ring "+key+str(size.x))
				await shot("%d_stamp_%s"%[size.x,key]);seen[key]=true
		var current:Dictionary=demo.state.snapshot()
		if current!=snapshot:FileAccess.open(out+"/world_diff_"+str(group.keys[0])+".json",FileAccess.WRITE).store_string(JSON.stringify({"before":snapshot,"after":current},"\t"))
		check(current==snapshot,"readonly stamp views preserve complete world")
	check(seen.size()==18,"all eighteen actual recipes sampled")
func seasons()->void:
	var city:=State.new();city.initialize();check(city.set_house_role("h4","garden_cafe").ok,"real cafe for tea steam")
	await open_world(city);demo.focus=Vector3(-8.,.7,-5.);demo.zoom=15.;demo._update_camera();var authored:Dictionary=demo.state.snapshot()
	var voices:Array=demo.music._players.values().map(func(p):return p.get_instance_id())
	for index in range(4):
		await click(demo.sundial_hud.weather);check(demo.state.microclimate==Moment.IDS[index],"native season seal changes real state "+str(index))
		for i in range(35):demo.life._process(.05);await process_frame
		await create_timer(1.1).timeout;demo.weather_visual.update();var moment=demo.weather_visual.moment
		check(moment.index==index and moment.motes.visible and moment.caption.visible,"poetic moment follows actual season and daylight "+str(index))
		check(moment.motes.multimesh.visible_instance_count>0,"real scene anchors populate moment "+str(index))
		facts[Moment.IDS[index]]=moment.get_meta("diagnostics")
		for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
			root.size=size;await settle();await shot("%d_moment_%s"%[size.x,Moment.IDS[index]])
			check(Rect2(Vector2.ZERO,Vector2(size)).encloses(demo.whisper_keycaps.get_global_rect()),"bottom hint fits "+str(size.x)+str(index))
		check(demo.sundial_hud.weather.tooltip_text.contains(Moment.TITLES[index]),"weather seal explains specific moment")
	var snapshot:Dictionary=demo.state.snapshot();check(snapshot.houses==authored.houses and snapshot.roads==authored.roads,"moments never change construction")
	demo._after_edit(demo.state.undo(),"history");await settle();check(demo.state.microclimate=="autumn_gold","undo restores real seasonal moment")
	demo._after_edit(demo.state.redo(),"history");await settle();check(demo.state.microclimate=="starlight_fireflies","redo restores real seasonal moment")
	check(voices==demo.music._players.values().map(func(p):return p.get_instance_id()) and voices.size()==12 and demo.music._effects.size()==4,"moment reuses original audio nodes")
	demo._set_light_phase(0);demo.weather_visual.update();check(not demo.weather_visual.moment.motes.visible,"winter moment sleeps outside night")
	demo._set_light_phase(2);demo.weather_visual.update();facts.audio=await Audio.record(out+"/Master.wav",8.2);check(facts.audio.ok,"real master has no clipping")
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=out+"/works";root.add_child(demo);await settle();demo.life.set_process(false)
	check(DisplayServer.get_name()!="headless","native OpenGL window")
	await stamps();await seasons()
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal saves unchanged")
	var report:={"checks":checks,"failures":failures,"ok":failures.is_empty(),"facts":facts}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("SEASON_STAMPS_LIVE ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
