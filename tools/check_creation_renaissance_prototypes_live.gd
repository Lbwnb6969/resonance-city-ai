extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const Fixture=preload("res://tools/fixtures/city_creation_renaissance_prototypes_fixture.gd")
const Choice=Fixture.Choice
const Audio=preload("res://tools/fixtures/city_creation_audio_probe.gd")
var OUT:="res://验证记录/M36/live"
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
func shot(name:String)->void:
	demo.toast.hide();demo.toast_time=0.;await process_frame;await RenderingServer.frame_post_draw
	check(root.get_texture().get_image().save_png(OUT+"/"+name+".png")==OK,"native prototype image "+name)
func click(button:Control)->void:
	var at:=button.get_global_rect().get_center();var move:=InputEventMouseMotion.new();move.position=at;root.push_input(move)
	for pressed:bool in [true,false]:
		var e:=InputEventMouseButton.new();e.position=at;e.button_index=MOUSE_BUTTON_LEFT;e.pressed=pressed;root.push_input(e);await process_frame
func key(code:Key)->void:
	for pressed:bool in [true,false]:
		var e:=InputEventKey.new();e.keycode=code;e.ctrl_pressed=true;e.pressed=pressed;root.push_input(e);await process_frame
func signatures(ids:Array)->Array:
	var result:Array=[]
	for id:String in ids:result.append([id,demo.town.house_roots[id].get_meta("renaissance_prototypes",[]),demo.town.house_roots[id].get_meta("prototype_caption","")])
	return result
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(Fixture.State.DEFAULT_PATH) if FileAccess.file_exists(Fixture.State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);demo.life.set_process(false);await settle()
	var voices:Array=[]
	for p:AudioStreamPlayer in demo.music._players.values():voices.append(p.get_instance_id())
	var fixture:=Fixture.build();var chosen:={"ok":true,"id":"renaissance_prototypes","title":"水畔与观景","world":fixture.city.snapshot(),"view":{"focus":[-20.,1.,-6.],"zoom":38.,"yaw":.55,"pitch":.75,"evening":false,"light_phase":0}}
	await demo.gallery._open_chosen(chosen);demo.life.set_process(false);await settle()
	demo.get_meta("inspiration_draft").poll();demo.get_meta("vignette_journey").poll();await settle()
	check(DisplayServer.get_name()!="headless" and demo.state.houses.size()==8,"actual GL loads all eight legal recipe fixtures")
	var all:Array=[]
	for kind:String in fixture.groups:all.append_array(fixture.groups[kind])
	var world:Dictionary=demo.state.snapshot();var geometry:=signatures(all)
	for id:String in all:
		check(demo.town.house_roots[id].has_meta("renaissance_prototypes"),"published selected prototype "+id)
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size;demo.ui_layer.show()
		for kind:String in fixture.groups:
			demo.ui_layer.show()
			var id:String=fixture.groups[kind][1];var house:Dictionary=demo.town._house_record(id)
			demo.focus=Vector3(house.origin[0]+.9,1.5,house.origin[1]);demo.zoom=21.;demo.pitch=.8;demo.yaw=.55;demo._update_camera()
			demo.spatial_popover.open_for_house(id);await create_timer(.25).timeout;await settle()
			var pop=demo.spatial_popover
			check(pop.architecture_button.caption==Choice.label(kind) and not pop.architecture_button.disabled,"actual selected short caption "+kind+str(size.x))
			check(pop.ring.placement_ok and pop.ring.controls().all(func(c):return not c.get_global_rect().intersects(pop.ring.house_rect)),"clear roof compass "+kind+str(size.x))
			await shot(str(size.x)+"_"+kind+"_compass")
			demo.spatial_popover.close();demo.ui_layer.hide();demo.zoom=10.
			for phase in range(3):
				demo._set_light_phase(phase);demo.pitch=deg_to_rad(35.);demo._update_camera();await settle();await shot(str(size.x)+"_"+kind+"_phase"+str(phase))
			for angle:int in [5,10,15]:
				demo._set_light_phase(0);demo.pitch=deg_to_rad(angle);demo.yaw=.55+(PI if angle==15 else 0.);demo._update_camera();await settle();await shot(str(size.x)+"_"+kind+"_low"+str(angle))
			await physics_frame
			var at:=Vector3(house.origin[0],float(house.get("base_y",0.)),house.origin[1])
			var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(at+Vector3.UP*14.,at+Vector3.UP*.5,1))
			check(not hit.is_empty() and hit.collider.get_meta("house_id","")==id,"actual physics roof picking "+kind+str(size.x))
			if kind=="venetian_loggia":
				var passage:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(at+Vector3(0,.45,1.15),at+Vector3(0,.45,.73),1))
				var column:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(at+Vector3(.775,.45,1.15),at+Vector3(.775,.45,.73),1))
				check(passage.is_empty(),"real pointed gallery central shaft stays open "+str(size.x))
				check(not column.is_empty() and column.collider.get_meta("house_id","")==id,"actual pointed gallery column keeps physical picking "+str(size.x))
	check(demo.state.snapshot()==world,"all day/night, low-angle and compass views are read-only")
	root.size=Vector2i(1024,768);demo.ui_layer.show();demo.pitch=.8;demo.zoom=21.;demo._set_light_phase(0)
	var selected:String=fixture.groups.venetian_loggia[0];var house:Dictionary=demo.town._house_record(selected)
	demo.focus=Vector3(house.origin[0],1.,house.origin[1]);demo._update_camera();demo.spatial_popover.open_for_house(selected);await create_timer(.25).timeout;await settle()
	await click(demo.spatial_popover.architecture_button);await settle()
	check(demo.state.houses[demo.state._house_index(selected)].architecture=="belvedere_villa" and demo.town.house_roots[selected].get_meta("prototype_caption","")==Choice.label("belvedere_villa"),"real native compass click replaces the roof")
	await key(KEY_Z);await settle()
	check(demo.state.houses[demo.state._house_index(selected)].architecture=="venetian_loggia","native Ctrl+Z restores previous prototype")
	await key(KEY_Y);await settle()
	check(demo.state.houses[demo.state._house_index(selected)].architecture=="belvedere_villa","native Ctrl+Y reapplies selected prototype")
	demo._after_edit(demo.state.undo(),"history");await settle();demo.spatial_popover.close()
	var current:Dictionary=demo.state.snapshot();var current_geometry:=signatures(all)
	check(demo.state.save_city(OUT+"/renaissance_city.json").ok,"actual isolated save")
	var restored:Dictionary=demo.state.restore(JSON.parse_string(FileAccess.get_file_as_string(OUT+"/renaissance_city.json")))
	demo._after_edit(restored,"history");await settle()
	check(restored.ok and demo.state.snapshot()==current and signatures(all)==current_geometry,"saved JSON reproduces every published selected roof")
	facts.audio=await Audio.record(OUT+"/Master.wav",6.2);check(facts.audio.ok,"actual hybrid choir plus roofs recording unclipped")
	var samples:Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(120):await process_frame;var now:=Time.get_ticks_usec();samples.append(float(now-last)/1000.);last=now
	samples.sort();facts.frames={"p95_ms":samples[114],"max_ms":samples[-1]}
	var after:Array=[]
	for p:AudioStreamPlayer in demo.music._players.values():after.append(p.get_instance_id())
	check(voices==after and after.size()==12 and demo.music._effects.size()==4 and demo.music.spatial.report().bus_count==6,"original fixed audio pool survives building changes")
	check(personal==(FileAccess.get_file_as_bytes(Fixture.State.DEFAULT_PATH) if FileAccess.file_exists(Fixture.State.DEFAULT_PATH) else PackedByteArray()),"personal saves unchanged")
	facts.groups=fixture.groups;var report:={"checks":checks,"failures":failures,"ok":failures.is_empty(),"facts":facts}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("RENAISSANCE_PROTOTYPES_LIVE ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
