extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const Biomes=preload("res://scripts/world/city_creation_biome_seeds.gd")
var output="res://验证记录/声学地貌_2026-10-21"
var demo
var checks:=0
var failures:Array[String]=[]
var timings:Dictionary={}
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy or demo.music._loading or not demo.ambience._ready_pcm:await process_frame
	for i in range(10):await process_frame
func click(button:Control)->void:
	var at:=button.get_global_rect().get_center();var move:=InputEventMouseMotion.new();move.position=at;root.push_input(move);await process_frame
	for pressed:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=pressed;root.push_input(event);await process_frame
	await settle()
func shot(name:String)->void:
	demo.toast.hide();demo.toast_time=0.;await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(output+"/"+name+".png")
func run()->void:
	for argument:String in OS.get_cmdline_user_args():
		if argument.begins_with("--out-dir="):output=argument.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output))
	root.size=Vector2i(1440,900);Engine.max_fps=120
	demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=output+"/隔离作品";root.add_child(demo)
	demo.life.set_process(false);await settle()
	for at:Vector2 in [Vector2(-7,-5.4),Vector2(-10.6,-5.4),Vector2(-14.2,-5.4)]:
		demo._after_edit(demo.state.add_house(at),"room",false);await settle()
	check(demo.intuitive_guidance.available.has(2),"previous city has really unlocked road tools")
	demo.spatial_popover.open_for_house("h1")
	var previous:Dictionary=demo.state.snapshot();var music_ids:Array=[];var nature_ids:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():music_ids.append(player.get_instance_id())
	for player:AudioStreamPlayer in demo.ambience.players.values():nature_ids.append(player.get_instance_id())
	var clock:float=demo.music._playback_clock()
	var selected:=Biomes.IDS.duplicate()
	for argument:String in OS.get_cmdline_user_args():
		if argument.begins_with("--biome-only="):selected=[argument.trim_prefix("--biome-only=")]
	for id:String in selected:
		demo.gallery.open_panel();await process_frame
		if not demo.gallery.panel._biomes_selected:await click(demo.gallery.panel.biome_button)
		check(demo.gallery.panel.biome_buttons.size()==6,"six selectable biome seals are present")
		for resolution:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
			root.size=resolution;await process_frame;await process_frame;await process_frame
			check(Rect2(Vector2.ZERO,Vector2(resolution)).encloses(demo.gallery.panel.panel.get_global_rect()) and demo.gallery.panel.biome_button.is_visible_in_tree(),"gallery and seed entry fit "+str(resolution))
			if id=="sunny_banks":await shot("地貌选择_"+str(resolution.x))
		root.size=Vector2i(1440,900);await process_frame;await process_frame
		var button:Control=demo.gallery.panel.biome_buttons[id]
		demo.gallery.panel.scroll.ensure_control_visible(button);await process_frame;await process_frame
		var started:=Time.get_ticks_usec();await click(button);demo.life.set_process(false)
		timings[id]=float(Time.get_ticks_usec()-started)/1000.
		check(demo.state.biome_seed.get("id","")==id and not demo.gallery.panel.visible,"actual pointer click opens "+id)
		check(demo.intuitive_guidance.available==[0] and demo.tool==0 and demo.spatial_popover.target_house_id.is_empty(),"new city resets progressive tools and previous roof selection")
		var saved:Dictionary=demo.gallery.library.read(demo.gallery.last_auto_id)
		var expected:RefCounted=demo.State.new();expected.restore(previous)
		check(saved.ok and saved.world.houses==expected.snapshot().houses and saved.world.get("biome_seed",{})==previous.get("biome_seed",{}),"switch first preserves the actual previous construction including legacy default normalization")
		check(demo.State.new().restore(demo.state.snapshot()).ok,"opened biome is a valid complete save")
		if id=="terraced_peaks":check(demo.state.ground_height(Vector2(-20,13))>3. and demo.town.get_child_count()>0,"terraces are present in the real rendered town")
		if id=="misty_archipelago":check(demo.state.waters.size()==4 and demo.town.water_layer.get_child_count()>0,"actual island water geometry is published")
		if id=="sylvan_sanctuary":check(demo.state.plants.size()>100 and demo.town.vegetation_layer.get_child_count()>0,"actual retained forest geometry is published")
		if id=="starlight_nocturne":check(demo.light_phase==2 and demo.weather_visual._mode=="starlight_fireflies","night biome uses the real lighting and firefly renderer")
		if id=="daily_resonance":check(demo.state.houses.size()==1 and demo.town._house_record("h1").has("signature"),"daily gift has an actual rendered landmark")
		await shot(id)
		if id=="starlight_nocturne":
			demo._after_edit(demo.state.add_house(Vector2(-7,0)),"room",false);await settle();demo.life.set_process(false)
			demo.spatial_popover.open_for_house("h1")
			for resolution:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
				root.size=resolution;await process_frame;await process_frame
				check(Rect2(Vector2.ZERO,Vector2(resolution)).encloses(demo.spatial_popover.card.get_global_rect()) and demo.spatial_popover.status.text.contains("共鸣半径+50%"),"real biome house card fits "+str(resolution))
				check(demo.intuitive_guidance.banner.get_theme_color("font_color")==demo.intuitive_guidance.UI.PAPER,"night onboarding text remains legible")
				await shot("星夜房屋_"+str(resolution.x))
			root.size=Vector2i(1440,900)
		previous=demo.state.snapshot()
		print("BIOME_OPEN ",id," ",timings[id],"ms")
	var after_music:Array=[];var after_nature:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():after_music.append(player.get_instance_id())
	for player:AudioStreamPlayer in demo.ambience.players.values():after_nature.append(player.get_instance_id())
	check(music_ids==after_music and nature_ids==after_nature and after_music.size()==12 and demo.music._effects.size()==4 and after_nature.size()==2 and demo.music._playback_clock()>clock,"new maps reuse fixed voices and the continuous music transport")
	var original_id:int=demo.state.get_instance_id();var library_directory:String=demo.gallery.library.directory
	var blocked_path:String=output+"/不可作为文件夹.txt";FileAccess.open(blocked_path,FileAccess.WRITE).store_string("isolated backup failure fixture")
	demo.gallery.library.directory=blocked_path;await demo.gallery.open_biome("sunny_banks")
	check(demo.state.get_instance_id()==original_id and not demo.gallery.busy,"failed automatic backup leaves the live city intact")
	demo.gallery.library.directory=library_directory
	var result:={"checks":checks,"failures":failures,"ok":failures.is_empty(),"switch_ms":timings}
	FileAccess.open(output+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("BIOMES_LIVE ",JSON.stringify(result))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
