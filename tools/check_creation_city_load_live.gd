extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Examples=preload("res://scripts/world/city_creation_examples.gd")
var OUT="res://验证记录/后台打开作品_2026-10-22"
var demo
var checks:=0
var failures:Array[String]=[]
var legacy_evidence:Dictionary={}
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func click(button:Control)->void:
	var at:=button.get_global_rect().get_center()
	var motion:=InputEventMouseMotion.new();motion.position=at;root.push_input(motion)
	for pressed:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=pressed;root.push_input(event);await process_frame
func textures_match(town:Node3D)->bool:
	for field:RefCounted in [town.water_field,town.ground_contact_field]:
		if field.texture==null or field.texture.get_layers()!=field.tiled.images.size():print("FIELD_LAYERS ",field.get_script().resource_path);return false
		if field==town.water_field:
			if not await water_matches(field):return false
			continue
		for i in range(field.texture.get_layers()):
			if field.texture.get_layer_data(i).get_data()!=field.tiled.images[i].get_data():print("FIELD_BYTES ",field.get_script().resource_path," layer ",i);return false
	var eras:RefCounted=town.era_road_field
	if eras.texture==null or eras.texture.get_layers()!=eras.images.size():print("ERA_LAYERS");return false
	for i in range(eras.images.size()):
		if eras.texture.get_layer_data(i).get_data()!=eras.images[i].get_data():print("ERA_BYTES layer ",i);return false
	var bindings:Array=[town.ground_material.get_shader_parameter("water_field")==town.water_field.texture,town.water_material.get_shader_parameter("water_field")==town.water_field.texture,town.meadow.water_field==town.water_field.texture]
	if bindings.has(false):print("FIELD_BINDINGS ",bindings)
	return not bindings.has(false)
func water_matches(field:RefCounted)->bool:
	# Compatibility normalizes RF in get_layer_data(). Read actual shader float
	# bits through opaque RGBA8, including every padded texel of all 64 layers.
	var viewport:=SubViewport.new();viewport.size=Vector2i(528,1056);viewport.disable_3d=true;viewport.render_target_update_mode=SubViewport.UPDATE_ONCE;root.add_child(viewport)
	var shader:=Shader.new();shader.code="""shader_type canvas_item;
render_mode unshaded,blend_disabled;
uniform sampler2DArray actual_field:filter_nearest,repeat_disable;
void fragment(){
 ivec2 p=ivec2(floor(UV*vec2(528.,1056.)));bool high=p.y>=528;
 p.y=p.y%528;ivec2 tile=p/66;
 uint bits=floatBitsToUint(texelFetch(actual_field,ivec3(p-tile*66,tile.y*8+tile.x),0).r);
 uvec3 bytes=high?uvec3(bits>>24u,0u,0u):uvec3(bits&255u,(bits>>8u)&255u,(bits>>16u)&255u);
 COLOR=vec4(vec3(bytes)/255.,1.);
}
"""
	var material:=ShaderMaterial.new();material.shader=shader;material.set_shader_parameter("actual_field",field.texture)
	var rectangle:=ColorRect.new();rectangle.size=Vector2(528,1056);rectangle.material=material;viewport.add_child(rectangle)
	await process_frame;await RenderingServer.frame_post_draw
	var encoded:=viewport.get_texture().get_image().get_data();var actual:=PackedByteArray();actual.resize(528*528*4)
	for pixel in range(528*528):
		var at:=pixel*4;actual[at]=encoded[at];actual[at+1]=encoded[at+1];actual[at+2]=encoded[at+2];actual[at+3]=encoded[at+528*528*4]
	var expected:=Image.create(528,528,false,Image.FORMAT_RF)
	for i in range(64):expected.blit_rect(field.tiled.images[i],Rect2i(0,0,66,66),Vector2i(i%8,i/8)*66)
	viewport.queue_free()
	var same:bool=expected.get_data()==actual
	if not same:print("RF_SHADER_BITS differ from prepared CPU bytes")
	return same
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var original_file:=FileAccess.get_file_as_bytes("res://数据/四库共鸣交响大城样例.json")
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false)
	while demo.music._loading:await process_frame
	var ids:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():ids.append(player.get_instance_id())
	var old_state:RefCounted=demo.state;var old_town:Node3D=demo.town;var old_world:Dictionary=old_state.snapshot()
	var old_water:Texture2DArray=old_town.water_field.texture;var old_bytes:=old_water.get_layer_data(0).get_data()
	demo.gallery.open_panel();demo.gallery.panel.select_examples()
	for i in range(4):await process_frame
	var example_id:="example_creation" if "--small-only" in OS.get_cmdline_user_args() else "example_flagship"
	if "--legacy-only" in OS.get_cmdline_user_args():example_id="example_town"
	var expected:Dictionary=Examples.read(example_id)
	var target:Control=demo.gallery.panel.open_buttons[example_id]
	demo.gallery.panel.scroll.ensure_control_visible(target);await process_frame
	await click(target)
	check(demo.gallery.busy,"actual example-card pointer begins background opening")
	var retained:=true;var blocked:=true;var phases:Dictionary={};var frames:=0
	while demo.gallery.busy:
		await process_frame;frames+=1;phases[demo.gallery.panel.status_label.text]=true
		if demo.has_node("OpeningTown"):
			retained=retained and demo.state==old_state and demo.town==old_town and old_state.houses==old_world.houses and old_town.is_visible_in_tree() and not demo.get_node("OpeningTown").is_visible_in_tree() and not demo.life.is_processing()
		if frames==10:
			var before:Dictionary=demo.state.snapshot()
			var key:=InputEventKey.new();key.keycode=KEY_Z;key.ctrl_pressed=true;key.pressed=true;root.push_input(key)
			await demo.gallery.open_example("example_creation")
			blocked=demo.state.snapshot()==before and demo.gallery.last_opened_id.is_empty()
		if frames in [15,25]:
			root.size=Vector2i(1024,768) if frames==15 else Vector2i(1440,900)
			for i in range(3):await process_frame
			check(Rect2(Vector2.ZERO,Vector2(root.size)).encloses(demo.gallery.panel.panel.get_global_rect()) and demo.gallery.panel.status_label.is_visible_in_tree(),"loading sheet fits "+str(root.size))
			await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/loading_"+str(root.size.x)+".png")
	demo.life.set_process(false)
	check(retained and frames>25 and phases.size()>=2,"old published work stays intact while actual preparation and upload phases keep drawing")
	check(blocked,"undo and a second opening request cannot alter the pending switch")
	check(demo.gallery.last_opened_id==example_id and demo.state.houses.size()==expected.world.houses.size() and demo.town.house_roots.size()==expected.world.houses.size() and demo.life.last_revision==demo.state.revision,"actual card publishes the complete new work and current Life together")
	if example_id=="example_flagship":
		var dome:Array=demo.town.find_children("DomePick","CollisionShape3D",true,false)
		var mansard:Array=demo.town.find_children("MansardPick","CollisionShape3D",true,false)
		check(not dome.is_empty() and not mansard.is_empty() and (dome+mansard).all(func(node):return node.shape is BoxShape3D),"actual flagship dome and mansard picking use lightweight box shapes")
	var kept:Dictionary=demo.gallery.library.read(demo.gallery.last_auto_id)
	check(kept.ok and kept.world.houses==old_world.houses and kept.reason=="before_open","previous work is preserved in the real immutable collection")
	check(old_water.get_layer_data(0).get_data()==old_bytes and old_water!=demo.town.water_field.texture,"loading uses distinct arrays and leaves the previous GPU field bytes intact")
	check(await textures_match(demo.town),"cold water, contact and era texture-array bytes match all prepared CPU layers and real shader bindings")
	check(demo.state.undo().ok==false and not demo.has_node("OpeningTown") and not demo.has_node("OpeningLife"),"fresh work has no previous history or leftover loading identities")
	var big_stats:Dictionary=demo.gallery.load_stats.duplicate(true)
	if "--legacy-only" in OS.get_cmdline_user_args():await legacy_interactions()
	var small:Dictionary=Examples.read("example_creation")
	var legacy:Dictionary=small.view.duplicate(true);legacy.erase("light_phase");legacy.evening=true
	var cover:=Image.create(8,8,false,Image.FORMAT_RGB8);cover.fill(Color("798b65"))
	var saved:Dictionary=demo.gallery.library.save("旧夕照河湾",small.world,legacy,cover)
	check(saved.ok,"legacy-view collection work saves")
	await demo.gallery.open_work(str(saved.id));demo.life.set_process(false)
	check(demo.state.houses==small.world.houses and demo.light_phase==1 and demo.life.last_revision==demo.state.revision,"switching back from a large city restores a legacy work and evening fallback")
	check(await textures_match(demo.town),"second fresh work also publishes exact GPU fields")
	var current:RefCounted=demo.state;var count:int=demo.gallery.library.entries().items.size()
	var invalid:Dictionary=small.duplicate(true);invalid.world.schema=999
	await demo.gallery._open_chosen(invalid)
	check(demo.state==current and not demo.gallery.busy and demo.gallery.library.entries().items.size()==count,"invalid restore is rejected before any checkpoint write or live-world change")
	var directory:String=demo.gallery.library.directory
	var blocked_path:String=OUT+"/backup_failure.txt";FileAccess.open(blocked_path,FileAccess.WRITE).store_string("isolated failed checkpoint fixture")
	demo.gallery.library.directory=blocked_path
	await demo.gallery._open_chosen(small)
	check(demo.state==current and not demo.gallery.busy and not demo.has_node("OpeningTown"),"failed automatic collection keeps the complete previous work active")
	demo.gallery.library.directory=directory
	var after_ids:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():after_ids.append(player.get_instance_id())
	check(after_ids==ids and ids.size()==12 and demo.music._effects.size()==4,"work switches reuse all native music voices")
	check(original_file==FileAccess.get_file_as_bytes("res://数据/四库共鸣交响大城样例.json") and personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"packaged example and personal save bytes stay unchanged")
	var result:Dictionary={"checks":checks,"failures":failures,"ok":failures.is_empty(),"large_load":big_stats,"frames":frames,"phases":phases.keys(),"legacy":legacy_evidence}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"))
	print("CITY_LOAD_LIVE ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty(),"frames":frames}))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

func settle_edit()->void:
	while demo.edit_pending() or demo._edit_ui_pending:await process_frame
	for i in range(25):await process_frame

func legacy_interactions()->void:
	var venue:=""
	for house:Dictionary in demo.state.houses:
		if str(house.get("role",""))=="venue":venue=str(house.id);break
	check(not venue.is_empty() and demo.state.can_host_concert(venue),"old venue identity and external concert capability survive loading")
	if venue.is_empty():return
	var original:Dictionary=demo.town._house_record(venue).duplicate(true)
	for resolution:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=resolution;demo.select_tool(0)
		demo.focus=Vector3(original.origin[0],float(original.get("base_y",0.))+1.,original.origin[1]);demo.zoom=20.;demo.pitch=.8;demo._update_camera()
		await settle_edit()
		var highest:=0
		for cell:Dictionary in original.cells:
			if int(cell.x)==0 and int(cell.z)==0:highest=maxi(highest,int(cell.level))
		var at:Vector2=demo.camera.unproject_position(Vector3(original.origin[0],float(original.get("base_y",0.))+float(highest+1)*demo.FLOOR+.2,original.origin[1]))
		var motion:=InputEventMouseMotion.new();motion.position=at;root.push_input(motion)
		for pressed:bool in [true,false]:
			var event:=InputEventMouseButton.new();event.position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=pressed;root.push_input(event);await process_frame
		await settle_edit()
		var pop=demo.spatial_popover
		check(pop.target_house_id==venue and pop.card.is_visible_in_tree() and Rect2(Vector2.ZERO,Vector2(resolution)).encloses(pop.card.get_global_rect()),"actual old venue roof opens its in-bounds compass at "+str(resolution))
		check(not pop.concert_button.visible and pop.role_buttons.size()==6 and not pop.role_buttons.has("venue") and not demo.concert_button.is_visible_in_tree(),"legacy venue retains data without reintroducing ordinary manual-performance UI")
		await click(pop.role_buttons["bakery"]);await settle_edit()
		check(demo.town._house_record(venue).role=="bakery","actual role seal converts a legacy venue through the normal transaction")
		for pressed:bool in [true,false]:
			var key:=InputEventKey.new();key.keycode=KEY_Z;key.ctrl_pressed=true;key.pressed=pressed;root.push_input(key);await process_frame
		await settle_edit()
		check(demo.town._house_record(venue)==original,"real Ctrl+Z restores the complete legacy venue with original IDs")
		await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/legacy_roof_"+str(resolution.x)+".png")
	# Prepare a genuine in-progress legacy concert through the preserved API.
	# Only the fixture preparation uses explicit ticks; after reopening, the
	# rest of the performance must finish with real process/wall time.
	check(demo.life.invite_concert(venue).ok,"external legacy invitation API accepts the preserved venue")
	for tick in range(3000):
		var status:Dictionary=demo.life.concert_status()
		if status.arrived==status.invited:break
		demo.life._process(.1)
	var arrived:Dictionary=demo.life.concert_status()
	check(arrived.invited>0 and arrived.arrived==arrived.invited,"actual routed legacy audience arrives before checkpointing")
	# The production PCM gate follows wall time, not manually advanced Life.
	# Let the real shared phrase boundary start playback, then save mid-phrase.
	var gate_start:=Time.get_ticks_msec();demo.life.set_process(true)
	var gate_samples:Array=[];var next_sample:=gate_start
	while demo.life.concert_status().phase=="gathering" and Time.get_ticks_msec()-gate_start<6500:
		await process_frame
		if Time.get_ticks_msec()>=next_sample:
			next_sample+=1000
			gate_samples.append({"clock":demo.music._playback_clock(),"loading":demo.music._loading,"playing":demo.music._players.concert.playing,"debt":demo.life._budget_delta,"held":demo.life._budget_hold,"gate":demo.music.concert_can_start(),"status":demo.life.concert_status()})
	legacy_evidence={"gate_samples":gate_samples,"start_clock":demo.music._playback_clock(),"start_status":demo.life.concert_status()}
	check(demo.life.concert_status().phase=="playing","legacy performance starts at the real shared PCM boundary")
	if demo.life.concert_status().phase!="playing":demo.life.set_process(false);return
	var playing_start:=Time.get_ticks_msec()
	while Time.get_ticks_msec()-playing_start<1700:await process_frame
	demo.life.set_process(false)
	await demo.gallery.save_work("旧庭院未完乐章")
	var saved_id:String=demo.gallery.last_saved_id
	var stored:Dictionary=demo.gallery.library.read(saved_id)
	var expected:Dictionary=stored.world.journey_checkpoint.concert
	var before:int=stored.world.life_progress.concerts
	check(stored.ok and float(expected.elapsed)>1.5 and expected.venue_id==venue,"real collection saves the actual audience and partially played legacy movement")
	await demo.gallery.open_work(saved_id);demo.life.set_process(false)
	var resumed:Dictionary=demo.life.concert_status()
	legacy_evidence.saved_elapsed=expected.elapsed;legacy_evidence.resumed_elapsed=resumed.elapsed
	check(resumed.phase=="playing" and resumed.venue_id==venue and absf(float(resumed.elapsed)-float(expected.elapsed))<.1,"fresh background loading resumes the saved legacy performance rather than restarting it")
	var started:=Time.get_ticks_msec();demo.life.set_process(true)
	while demo.life.concert_status().phase!="idle" and Time.get_ticks_msec()-started<45000:await process_frame
	demo.life.set_process(false)
	legacy_evidence.remaining_wall_ms=Time.get_ticks_msec()-started
	legacy_evidence.completed_before=before;legacy_evidence.completed_after=demo.state.life_progress.concerts
	check(demo.life.concert_status().phase=="idle" and int(demo.state.life_progress.concerts)==before+1 and Time.get_ticks_msec()-started>15000,"legacy performance completes once through real elapsed time after reopening")
	for i in range(30):await process_frame
	check(int(demo.state.life_progress.concerts)==before+1,"completed legacy event does not settle twice")
