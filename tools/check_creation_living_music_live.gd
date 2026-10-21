extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
var OUT="res://验证记录/聚落声画闭环_2026-10-22"
var demo
var checks:=0
var failures:Array[String]=[]
var facts:Dictionary={}
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func fixture(count:int)->RefCounted:
	var city:=State.new();city.initialize_empty()
	for z:float in [-22.,-17.,-12.,-7.]:
		for x:float in [-28.,-23.5,-19.,-14.5]:
			if city.houses.size()<count:check(city.add_house(Vector2(x,z)).ok,"public house placement")
	var rows:=ceili(float(count)/4.)
	for i in range(rows):
		var z:float=-22.+float(i)*5.+1.55
		check(city.add_road([Vector2(-30.5,z),Vector2(-12.5,z)] as Array[Vector2]).ok,"actual street reaches this row's doors")
	if rows>1:check(city.add_road([Vector2(-30.5,-20.45),Vector2(-30.5,-22.+float(rows-1)*5.+1.55)] as Array[Vector2]).ok,"actual trunk connects the rows")
	check(city.set_house_role("h1","bakery").ok and city.set_house_temperament("h1","largo").ok,"real largo bakery")
	check(city.set_house_role("h2","workshop").ok and city.set_house_temperament("h2","largo").ok,"real largo artisan")
	return city
func open_city(city:RefCounted,label:String)->void:
	var chosen:={"ok":true,"world":city.snapshot(),"id":label,"title":label,"view":{"focus":[-22.,1.,-17.],"yaw":.16,"pitch":.85,"zoom":32.,"evening":false,"light_phase":0}}
	await demo.gallery._open_chosen(chosen);demo.life.set_process(false)
	while demo.music._loading:await process_frame
	for i in range(30):await process_frame
func shot(label:String)->void:
	demo.toast.hide();demo.toast_time=0.
	await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/"+label+".png")
func click(button:Control)->void:
	var at:=button.get_global_rect().get_center();var motion:=InputEventMouseMotion.new();motion.position=at;root.push_input(motion)
	for pressed:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.button_index=MOUSE_BUTTON_LEFT;event.position=at;event.pressed=pressed;root.push_input(event);await process_frame
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending:await process_frame
	for i in range(12):await process_frame
func await_effect(predicate:Callable)->void:
	# The visual choir follows the same real phrase adoption and gain fade
	# as the sound; a just-opened or unmuted bank is not instantly audible.
	var start:=Time.get_ticks_msec()
	while not predicate.call() and Time.get_ticks_msec()-start<4200:await process_frame
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false)
	while demo.music._loading:await process_frame
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	await open_city(fixture(4),"初聚暖巷")
	await await_effect(func():return demo.town.living_music.report().halos==4)
	check(demo.town.living_music.report().halos==4 and demo.town.living_music.report().motes==0,"actual four-house choir displays its warm ground halo")
	check(demo.town.living_music.report().emissions==0 and int(demo.state.bakery_status("h1").produced)==0 and int(demo.state.workshop_status("h2").produced)==0,"initial visual publication invents no production event")
	await shot("01_初聚暖晕")
	var started:=Time.get_ticks_msec();var observed:Dictionary={};var samples:Array[float]=[];demo.life.set_process(true)
	while observed.size()<2 and Time.get_ticks_msec()-started<60000:
		var frame_start:=Time.get_ticks_usec();await process_frame;samples.append(float(Time.get_ticks_usec()-frame_start)/1000.)
		for id:String in ["h1","h2"]:
			var quantity:int=int(demo.state.bakery_status(id).produced) if id=="h1" else int(demo.state.workshop_status(id).produced)
			if quantity<=0 or observed.has(id):continue
			await process_frame;await process_frame
			var report:Dictionary=demo.town.living_music.report()
			check(report.waves.any(func(row):return row.house_id==id),"actual completed batch emits the ring through its production callback: "+id)
			observed[id]={"produced":quantity,"clock":demo.music._playback_clock(),"wall_ms":Time.get_ticks_msec()-started,"report":report}
			await create_timer(.8).timeout;await shot("02_真实广板出炉" if id=="h1" else "03_真实广板木作")
	demo.life.set_process(false)
	check(observed.size()==2,"both the real baker and real artisan complete their onsite labour")
	facts.production=observed
	samples.sort();facts.frames={"p95_ms":samples[int(samples.size()*.95)],"max_ms":samples[-1],"samples":samples.size()}
	await open_city(fixture(15),"十五屋室内乐")
	await create_timer(3.2).timeout
	var visual=demo.town.living_music
	check(visual.report().motes==16 and visual.report().halos==0,"actual native choir activates chamber motes at fifteen houses")
	var uploaded:=0
	for i in range(visual.motes.multimesh.visible_instance_count):
		var transform:Transform3D=visual.motes.multimesh.get_instance_transform(i)
		if transform.origin.is_finite() and transform.origin.y>2.5 and absf(transform.basis.determinant()-1.)<.00001 and visual.motes.multimesh.custom_aabb.has_point(transform.origin):uploaded+=1
	check(uploaded==16,"native GL particle transforms sit above real roofs, remain non-singular and fit their actual culling bounds")
	check(visual.report().emissions==0 and visual.report().waves.is_empty(),"opening another complete work carries no old production pulse")
	var nodes:int=visual.layer.get_child_count()
	for resolution:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=resolution;for i in range(12):await process_frame
		check(visual.report().motes==16,"native chamber effect remains visible at "+str(resolution))
		await shot("04_共鸣微粒_"+str(resolution.x))
	await click(demo.music_button);for i in range(4):await process_frame
	check(demo.music.muted and visual.report().motes==0 and visual.report().waves.is_empty(),"real tuning-fork click silences the visual choir immediately")
	await click(demo.music_button);for i in range(4):await process_frame
	await await_effect(func():return visual.report().motes==16)
	check(not demo.music.muted and visual.report().motes==16,"unmuting resumes the same shared-clock particle field")
	var last_id:=str(demo.state.houses[-1].id)
	demo._after_edit(demo.state.remove_house(last_id),"erase");await settle()
	check(demo.state.houses.size()==14 and visual.report().motes==0,"actual removal publishes fourteen houses without chamber motes")
	for pressed:bool in [true,false]:
		var key:=InputEventKey.new();key.keycode=KEY_Z;key.ctrl_pressed=true;key.pressed=pressed;root.push_input(key);await process_frame
	await settle()
	await await_effect(func():return visual.report().motes==16)
	check(demo.state.houses.size()==15 and visual.report().motes==16 and visual.layer.get_child_count()==nodes,"real Ctrl+Z restores the chamber effect without new effect nodes")
	var current:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():current.append(player.get_instance_id())
	check(voices==current and current.size()==12 and demo.music._effects.size()==4,"new visuals retain the original fixed native audio voices")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	facts.final=visual.report()
	var result:={"checks":checks,"failures":failures,"ok":failures.is_empty(),"facts":facts}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true))
	print("LIVING_MUSIC_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
