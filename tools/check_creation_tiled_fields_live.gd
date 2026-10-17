extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const OUT="res://验证记录/四库路线_2026-10-17/Phase10"
var checks:Array=[]
var failures:Array[String]=[]
var renderer:Node3D
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _wait(commit:bool)->Dictionary:
	var end:=Time.get_ticks_msec()+30000;var report:Dictionary={}
	while Time.get_ticks_msec()<end:
		report=renderer.poll_budget_rebuild(3.5,commit)
		if report.get("committed",false) or (report.get("ready",false) and not commit):break
		await process_frame
	return report
func _gpu_image(texture:Texture2DArray,format:int)->Image:
	var image:=Image.create(512,512,false,format)
	for layer in range(64):image.blit_rect(texture.get_layer_data(layer),Rect2i(1,1,64,64),Vector2i(layer%8,layer/8)*64)
	return image
func _gpu_rf(texture:Texture2DArray)->Image:
	# Compatibility's public layered-image readback converts RF to normalized
	# color. Encode the actual shader float bits into opaque RGBA8 instead.
	var viewport:=SubViewport.new();viewport.size=Vector2i(512,1024);viewport.disable_3d=true;viewport.render_target_update_mode=SubViewport.UPDATE_ONCE;root.add_child(viewport)
	var shader:=Shader.new();shader.code="""shader_type canvas_item;
render_mode unshaded,blend_disabled;
uniform sampler2DArray actual_field:filter_nearest,repeat_disable;
void fragment(){
 ivec2 output_pixel=ivec2(floor(UV*vec2(512.,1024.)));
 bool high=output_pixel.y>=512;
 ivec2 pixel=ivec2(output_pixel.x,output_pixel.y%512);
 ivec2 tile=pixel/64;
 float value=texelFetch(actual_field,ivec3(pixel-tile*64+ivec2(1),tile.y*8+tile.x),0).r;
 uint bits=floatBitsToUint(value);
 uvec3 encoded=high?uvec3(bits>>24u,0u,0u):uvec3(bits&255u,(bits>>8u)&255u,(bits>>16u)&255u);
 COLOR=vec4(vec3(encoded)/255.,1.);
}
"""
	var material:=ShaderMaterial.new();material.shader=shader;material.set_shader_parameter("actual_field",texture)
	var rectangle:=ColorRect.new();rectangle.size=Vector2(512,1024);rectangle.material=material;viewport.add_child(rectangle)
	await process_frame;await RenderingServer.frame_post_draw
	var encoded:PackedByteArray=viewport.get_texture().get_image().get_data();var bytes:=PackedByteArray();bytes.resize(512*512*4)
	for pixel in range(512*512):
		var offset:=pixel*4;bytes[offset]=encoded[offset];bytes[offset+1]=encoded[offset+1];bytes[offset+2]=encoded[offset+2];bytes[offset+3]=encoded[offset+512*512*4]
	viewport.queue_free()
	return Image.create_from_data(512,512,false,Image.FORMAT_RF,bytes)
func _probe(texture:Texture2DArray,source:Image)->Dictionary:
	var viewport:=SubViewport.new();viewport.size=Vector2i(768,768);viewport.disable_3d=true;viewport.render_target_update_mode=SubViewport.UPDATE_ONCE;root.add_child(viewport)
	var shader:=Shader.new();shader.code="""shader_type canvas_item;
render_mode unshaded;
#include "res://scripts/visual/shaders/creation_tiled_field.gdshaderinc"
uniform sampler2D reference_field:filter_linear,repeat_disable;
uniform sampler2DArray actual_field:filter_linear,repeat_disable;
void fragment(){
 vec2 uv=UV*1.06-.03;
 vec4 expected=texture(reference_field,uv);
 vec4 actual=tiled_field_sample(actual_field,uv);
 vec4 error=abs(expected-actual);
 float maximum=max(max(error.r,error.g),max(error.b,error.a));
 COLOR=vec4(vec3(maximum*4096.),1.);
}
"""
	var material:=ShaderMaterial.new();material.shader=shader;material.set_shader_parameter("reference_field",ImageTexture.create_from_image(source));material.set_shader_parameter("actual_field",texture)
	var rectangle:=ColorRect.new();rectangle.size=Vector2(768,768);rectangle.material=material;viewport.add_child(rectangle)
	await process_frame;await RenderingServer.frame_post_draw
	var image:Image=viewport.get_texture().get_image();var bytes:=image.get_data();var maximum:=0
	for i in range(0,bytes.size(),4):maximum=maxi(maximum,bytes[i])
	viewport.queue_free()
	return {"amplified_maximum":float(maximum)/255.,"raw_bound":float(maximum+1)/255./4096.}
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var city:=State.new();city.initialize();var original:Dictionary=city.snapshot()
	var world:=Node3D.new();root.add_child(world)
	var environment:=WorldEnvironment.new();environment.environment=Environment.new();environment.environment.background_mode=Environment.BG_COLOR;environment.environment.background_color=Color("d9e1d9");environment.environment.ambient_light_source=Environment.AMBIENT_SOURCE_COLOR;environment.environment.ambient_light_color=Color("f0eadb");environment.environment.ambient_light_energy=.8;world.add_child(environment)
	var sun:=DirectionalLight3D.new();sun.rotation_degrees=Vector3(-48,-30,0);sun.light_energy=1.;world.add_child(sun)
	var camera:=Camera3D.new();camera.projection=Camera3D.PROJECTION_ORTHOGONAL;camera.size=29.;camera.position=Vector3(7,24,28);world.add_child(camera);camera.look_at(Vector3(-5,0,4));camera.current=true
	renderer=Renderer.new();world.add_child(renderer);renderer.setup(city)
	await process_frame;await physics_frame
	var water:Texture2DArray=renderer.water_field.texture;var contact:Texture2DArray=renderer.ground_contact_field.texture
	_check(water.get_layers()==64 and contact.get_layers()==64 and water.get_width()==66 and contact.get_width()==66,"production shaders use two padded sixty-four-layer distance fields")
	_check(city.snapshot()==original,"GPU field setup preserves all authored identity and save data")
	var water_rid:=water.get_rid();var contact_rid:=contact.get_rid();var far_water:=water.get_layer_data(0).get_data();var far_contact:=contact.get_layer_data(0).get_data();var old_water:PackedByteArray=(await _gpu_rf(water)).get_data();var old_contact:=_gpu_image(contact,Image.FORMAT_RGBA8).get_data()
	var pond:Array[Vector2]=[Vector2(-14,12)];var road:Array[Vector2]=[Vector2(-15,-11),Vector2(-13.5,-11.3)]
	_check(city.add_water(pond,2.8,"pond").ok and city.add_road(road).ok,"actual isolated pond and street edits commit through public state API")
	renderer.request_budget_rebuild();var report:Dictionary=await _wait(false)
	_check(report.get("ready",false),"worker and hidden geometry finish while publication remains held")
	_check((await _gpu_rf(water)).get_data()==old_water and _gpu_image(contact,Image.FORMAT_RGBA8).get_data()==old_contact,"all actual GPU texels remain unchanged while new geometry is hidden")
	_check(renderer.budget_rebuild.staging.water_field.tiled.changed_layers.size()>0 and renderer.budget_rebuild.staging.ground_contact_field.tiled.changed_layers.size()>0,"private worker prepares actual dirty water and contact layers")
	renderer.cancel_budget_rebuild()
	_check((await _gpu_rf(water)).get_data()==old_water and _gpu_image(contact,Image.FORMAT_RGBA8).get_data()==old_contact,"cancelling staged edits never changes published GPU distance fields")
	renderer.request_budget_rebuild();report=await _wait(true)
	_check(report.get("committed",false),"latest complete edit publishes geometry and distance layers together")
	var water_stats:Dictionary=renderer.water_field.diagnostics();var contact_stats:Dictionary=renderer.ground_contact_field.stats.duplicate(true)
	_check(renderer.water_field.texture.get_rid()==water_rid and renderer.ground_contact_field.texture.get_rid()==contact_rid,"publication retains both existing GPU array identities")
	_check(water_stats.uploaded_layers>0 and water_stats.uploaded_layers<8 and contact_stats.uploaded_layers>0 and contact_stats.uploaded_layers<8,"small pond and road upload only local layers instead of either full field")
	_check(water.get_layer_data(0).get_data()==far_water and contact.get_layer_data(0).get_data()==far_contact,"distant published GPU layers retain original bytes")
	var contact_source:=Image.create_from_data(512,512,false,Image.FORMAT_RGBA8,renderer.ground_contact_field.pixels)
	await process_frame;await RenderingServer.frame_post_draw
	var gpu_water:PackedByteArray=(await _gpu_rf(water)).get_data();var cpu_water:PackedByteArray=renderer.water_field.image.get_data()
	_check(gpu_water==cpu_water and _gpu_image(contact,Image.FORMAT_RGBA8).get_data()==contact_source.get_data(),"all sixty-four GPU layer interiors reconstruct current exact CPU fields byte for byte")
	var water_probe:Dictionary=await _probe(water,renderer.water_field.image);var contact_probe:Dictionary=await _probe(contact,contact_source)
	_check(water_probe.raw_bound<.0001 and contact_probe.raw_bound<.000002,"actual GPU bilinear samples retain submillimetre agreement across every tile seam and clamped outside edge")
	_check(renderer.ground_material.get_shader_parameter("water_field")==water and renderer.meadow.materials.lawn.get_shader_parameter("water_field")==water and renderer.meadow.materials.lawn.get_shader_parameter("ground_contact_field")==contact,"retained and replaced ground grass and shoreline materials share the published arrays")
	await process_frame;await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/03_local_gpu_distance_fields.png")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated field verification preserves personal saved city bytes")
	var result:Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"water":water_stats,"contact":contact_stats,"water_probe":water_probe,"contact_probe":contact_probe,"budget":report.get("stats",{})}
	FileAccess.open(OUT+"/tiled_fields_live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("TILED_FIELDS_LIVE ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)
