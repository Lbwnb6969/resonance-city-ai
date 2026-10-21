extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Examples=preload("res://scripts/world/city_creation_examples.gd")
const OUT="res://验证记录/后台打开作品_2026-10-22"
var demo
var checks:=0
var failures:Array[String]=[]
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
	var kept:Dictionary=demo.gallery.library.read(demo.gallery.last_auto_id)
	check(kept.ok and kept.world.houses==old_world.houses and kept.reason=="before_open","previous work is preserved in the real immutable collection")
	check(old_water.get_layer_data(0).get_data()==old_bytes and old_water!=demo.town.water_field.texture,"loading uses distinct arrays and leaves the previous GPU field bytes intact")
	check(await textures_match(demo.town),"cold water, contact and era texture-array bytes match all prepared CPU layers and real shader bindings")
	check(demo.state.undo().ok==false and not demo.has_node("OpeningTown") and not demo.has_node("OpeningLife"),"fresh work has no previous history or leftover loading identities")
	var big_stats:Dictionary=demo.gallery.load_stats.duplicate(true)
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
	var result:Dictionary={"checks":checks,"failures":failures,"ok":failures.is_empty(),"large_load":big_stats,"frames":frames,"phases":phases.keys()}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"))
	print("CITY_LOAD_LIVE ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty(),"frames":frames}))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
