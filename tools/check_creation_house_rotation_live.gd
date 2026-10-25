extends "res://tools/check_creation_music_experience_live.gd"
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
func key(code:Key)->void:
	for pressed:bool in [true,false]:
		var event:=InputEventKey.new();event.keycode=code;event.physical_keycode=code;event.pressed=pressed;root.push_input(event);await process_frame
	await settle()
func ray(at:Vector2)->Dictionary:
	return demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,15,at.y),Vector3(at.x,.5,at.y),1))
func run()->void:
	OUT="res://验证记录/M44/final"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));Engine.max_fps=100;root.size=Vector2i(1440,900)
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle()
	var city:=State.new();city.initialize_empty();var made:Dictionary=city.add_house(Vector2(-25,-17));var id:String=made.house_id
	check(made.ok and city.add_cell(id,1,0,0).ok,"real asymmetric two room house")
	check(city.add_house(Vector2(-15,-17)).ok,"other real household")
	await show(city,Vector2(-24,-17),"rotation");demo.life.set_process(false)
	for meta:String in ["inspiration_draft","vignette_journey"]:demo.get_meta(meta).poll();demo.get_meta(meta).set_process(false)
	await settle();var history:int=demo.state._undo.size();var voices:Array=[]
	for p:AudioStreamPlayer in demo.music._players.values():voices.append(p.get_instance_id())
	demo.focus=Vector3(-24.5,1.2,-17.5);demo.zoom=15.;demo.pitch=.75;demo.yaw=.62;demo._update_camera();demo.spatial_popover.open_for_house(id);await create_timer(.25).timeout
	check(DisplayServer.get_name()!="headless","actual OpenGL")
	await key(KEY_E);await physics_frame
	var h:Dictionary=demo.town._house_record(id)
	check(is_equal_approx(Frame.yaw(h),PI*.5),"native E exactly90 degrees")
	check(is_equal_approx(float(demo.town.house_roots[id].get_meta("house_yaw")),PI*.5),"actual published body shares yaw")
	var hit:=ray(Frame.center(h,h.cells[1]));check(not hit.is_empty() and hit.collider.get_meta("house_id","")==id,"real rotated second-room roof pick")
	check(ray(Vector2(-23.2,-17)).is_empty(),"old unrotated second room no longer collides")
	await capture("1440_quarter_turn")
	await key(KEY_Q);check(not demo.town._house_record(id).has("yaw"),"native Q reverses exactly90")
	demo.spatial_popover.open_for_house(id);await key(KEY_R)
	var gesture=demo.get_meta("house_rotation_input");check(gesture.target==id,"R enters actual free rotation")
	var motion:=InputEventMouseMotion.new();motion.relative=Vector2(72.,0);motion.position=Vector2(700,450);root.push_input(motion);await process_frame
	check(is_equal_approx(gesture.angle,.576) and not demo.town._house_record(id).has("yaw"),"mouse continuously previews arbitrary angle without committing state")
	await capture("1440_free_preview");await key(KEY_R);await physics_frame
	h=demo.town._house_record(id);check(absf(Frame.yaw(h)-.576)<.000001 and demo.state._undo.size()==history+3,"free rotation commits one history entry")
	hit=ray(Frame.center(h,h.cells[1]));check(not hit.is_empty() and hit.collider.get_meta("house_id","")==id,"arbitrary actual roof pick")
	check(demo.state.undo().ok,"actual free undo");demo._after_edit({"ok":true,"message":"已恢复朝向"},"history");await settle();check(not demo.town._house_record(id).has("yaw"),"undo restores world geometry")
	check(demo.state.redo().ok,"actual free redo");demo._after_edit({"ok":true,"message":"已恢复朝向"},"history");await settle();h=demo.town._house_record(id)
	var before:Dictionary=demo.state.snapshot();demo.spatial_popover.open_for_house(id);await key(KEY_R)
	motion=InputEventMouseMotion.new();motion.relative=Vector2(120,0);root.push_input(motion);await process_frame;await key(KEY_ESCAPE)
	check(demo.state.snapshot()==before,"Esc cancels full gesture without history/save mutation")
	check(is_equal_approx(float(demo.town.house_roots[id].get_meta("house_yaw")),Frame.yaw(h)),"cancel restores collision transform")
	var entry:Dictionary=demo.state.house_entrances(id)[0];var normal:=Frame.normal(entry)
	var road:Dictionary=demo.state.add_road([Vector2(entry.wall_at)+normal*.10,Vector2(entry.wall_at)+normal*7.] as Array[Vector2]);check(road.ok,"actual road connects oblique door")
	demo._after_edit(road,"road");await settle();check(demo.state.house_entrances(id).any(func(e):return e.active),"oblique real entrance active")

	var bakery_at:Vector2=Vector2(entry.wall_at)+normal*9.;var bakery:Dictionary=demo.state.add_house(bakery_at)
	check(bakery.ok,"actual bakery beyond angled approach")
	if bakery.ok:
		check(demo.state.rotate_house(bakery.house_id,Frame.yaw(h)+PI).ok and demo.state.set_house_role(bakery.house_id,"bakery").ok,"opposite-facing actual bakery")
		var baker_entry:Dictionary=demo.state.house_entrances(bakery.house_id)[0]
		check(demo.state.add_road([Vector2(entry.wall_at)+normal*.10,Vector2(baker_entry.wall_at)+Frame.normal(baker_entry)*.10] as Array[Vector2]).ok,"real two rotated doors share street")
		demo._after_edit({"ok":true,"message":"连通斜放街坊"},"road");await settle();demo.life.set_process(false)
		var purchases:int=demo.state.life_progress.purchases;var ticks:=0
		while demo.state.life_progress.purchases==purchases and ticks<1800:
			demo.life._process(.1);ticks+=1
			if ticks%10==0:await process_frame
		check(demo.life.house_connected(id) and demo.life.house_connected(bakery.house_id),"actual network reaches both oriented doors")
		check(demo.state.life_progress.purchases>purchases,"resident actually walks oblique street and buys conserved bread")
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size;demo.spatial_popover.open_for_house(id);await create_timer(.3).timeout;demo.spatial_popover.refresh();await capture(str(size.x)+"_oblique_compass")
		check(demo.spatial_popover.ring.placement_ok,"rotated compass layout "+str(size.x))
	await capture("actual_rotated_purchase")
	var snapshot:Dictionary=demo.state.snapshot();check(demo.state.save_city(OUT+"/city.json").ok,"isolated rotated save")
	var reader:=State.new();check(reader.restore(JSON.parse_string(FileAccess.get_file_as_string(OUT+"/city.json"))).ok and reader.snapshot()==snapshot,"exact cold rotated save")
	await other_eras()
	var frames:Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(90):await process_frame;var now:=Time.get_ticks_usec();frames.append(float(now-last)/1000.);last=now
	frames.sort()
	var audio:Dictionary=await Probe.record(OUT+"/Master.wav",6.2);check(audio.ok,"actual Master unclipped")
	var after:Array=[]
	for p:AudioStreamPlayer in demo.music._players.values():after.append(p.get_instance_id())
	check(voices==after and after.size()==12 and demo.music._effects.size()==4 and demo.music.spatial.report().bus_count==6,"original audio pools retained")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"audio":audio,"yaw":Frame.yaw(h),"frame_p95_ms":frames[85],"frame_max_ms":frames[-1]},"\t",true,true))
	print("HOUSE_ROTATION_LIVE ",checks," ",failures);quit(0 if failures.is_empty() else 1)

func other_eras()->void:
	var groups:Array=preload("res://tools/fixtures/city_creation_critic_visuals.gd").groups()
	for index in [1,2,3]:
		var group:Dictionary=groups[index];var city:RefCounted=group.city
		var source:Dictionary=city.houses[city._house_index(group.ids[0])];var era:String=city.house_era(source)
		var born:Dictionary=city.add_house(Vector2(-33,22));check(born.ok,"public open site avoids existing road for era "+str(index));var id:String=born.house_id
		check(city.set_house_era(id,era).ok and city.set_house_architecture(id,group.keys[0]).ok and city.add_cell(id,1,0,0).ok,"actual earned era recipe and modules "+str(index))
		var rotated:Dictionary=city.rotate_house(id,.41);check(rotated.ok,"other era actual rotation "+str(index))
		demo._after_edit(demo.state.restore(city.snapshot()),"history");await settle();demo.life.set_process(false)
		var h:Dictionary=demo.town._house_record(id);demo.focus=Vector3(h.origin[0],1.7,h.origin[1]);demo.zoom=18.;demo.pitch=.65;demo.yaw=.62;demo._update_camera();demo.spatial_popover.close();root.size=Vector2i(1440,900)
		await physics_frame;var hit:Dictionary=ray(Frame.center(h,h.cells[0]));check(not hit.is_empty() and hit.collider.get_meta("house_id","")==id,"other era real roof pick "+str(index))
		check(absf(float(demo.town.house_roots[id].get_meta("house_yaw"))-.41)<.000001,"other era geometry same saved angle "+str(index))
		await capture("rotated_era_"+str(index))

	var f:=preload("res://tools/fixtures/city_creation_rotated_court.gd").build()
	demo._after_edit(demo.state.restore(f.city.snapshot()),"history");await settle();demo.life.set_process(false)
	var courts:Array=demo.state.courtyard_plans();check(courts.size()==1 and courts[0].tiles.size()==4,"actual oblique courtyard retains4 paving tiles")
	var at:Vector2=courts[0].center;demo.focus=Vector3(at.x,1.2,at.y);demo.zoom=19.;demo.pitch=.8;demo.yaw=.62;demo._update_camera();await physics_frame
	check(ray(at).is_empty(),"actual rotated court center is open sky and has no room roof collider")
	check(not preload("res://scripts/world/city_creation_cafe_layout.gd").layout(demo.state,f.id).is_empty(),"rotated court cafe retains furniture and routes")
	await capture("rotated_courtyard_day");demo._set_light_phase(2);await capture("rotated_courtyard_night")
