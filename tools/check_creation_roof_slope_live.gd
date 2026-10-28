extends SceneTree
## Sample the actual authored roof charts, then execute their layer direction on GPU.
const State=preload("res://scripts/world/city_creation_state.gd")
const Context=preload("res://scripts/visual/city_creation_building_context.gd")
var checks:=0
var failures:Array=[]
var samples:Array=[]
var facts:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func collect(name:String,cells:Array)->void:
	var city:=State.new();city.initialize_free();city.add_house(Vector2(-25,-15))
	for cell:Vector2i in cells:
		if cell!=Vector2i.ZERO:city.add_cell("h1",cell.x,cell.y,0)
	var context:=Context.new();context.prepare(city.houses,city.roads)
	var selected:Dictionary={};var up:=0;var down:=0;var tangent_error:=0.
	for patch:Dictionary in context.roof_patches("h1"):
		if patch.surface!="roof":continue
		for i in range(0,patch.vertices.size(),3):
			var a:Vector3=patch.vertices[i];var e1:Vector3=patch.vertices[i+1]-a;var e2:Vector3=patch.vertices[i+2]-a
			var du1:Vector2=patch.coordinates[i+1]-patch.coordinates[i];var du2:Vector2=patch.coordinates[i+2]-patch.coordinates[i]
			var determinant:=du1.cross(du2);var normal:=e1.cross(e2).normalized()
			if absf(determinant)<.0000000001:continue
			var u:Vector3=(e1*du2.y-e2*du1.y)/determinant
			var v:Vector3=(e2*du1.x-e1*du2.x)/determinant
			u=(u-normal*normal.dot(u)).normalized();v=(v-normal*normal.dot(v)-u*u.dot(v)).normalized()
			tangent_error=maxf(tangent_error,absf(normal.dot(v)))
			if v.y>.01:up+=1
			elif v.y<-.01:down+=1
			var key:=signi(roundi(v.y*100.))
			if not selected.has(key) or absf(v.y)>absf(Vector3(selected[key].v).y):selected[key]={"v":v,"normal":normal,"shape":name}
	check(up>0 and down>0 and tangent_error<.00001,name+" real chart has uphill and downhill meridians before orientation")
	for row:Dictionary in selected.values():samples.append(row)
	facts.append({"shape":name,"old_uphill_triangles":up,"old_downhill_triangles":down,"tangent_error":tangent_error})
func run()->void:
	var out:="res://验证记录/M83/roof_slope"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var measure_only:bool="--measure-only" in OS.get_cmdline_user_args()
	if not measure_only:check(DisplayServer.get_name()!="headless","actual GPU required")
	collect("row_x",[Vector2i.ZERO,Vector2i(1,0),Vector2i(2,0)])
	collect("row_z",[Vector2i.ZERO,Vector2i(0,1),Vector2i(0,2)])
	collect("L",[Vector2i.ZERO,Vector2i(1,0),Vector2i(2,0),Vector2i(0,1),Vector2i(0,2)])
	collect("U",[Vector2i.ZERO,Vector2i(1,0),Vector2i(2,0),Vector2i(0,1),Vector2i(2,1),Vector2i(0,2),Vector2i(2,2)])
	if measure_only:
		print("ROOF_MERIDIAN_BASELINE ",JSON.stringify({"ok":failures.is_empty(),"facts":facts}));quit(0 if failures.is_empty() else 1);return
	samples.append({"v":Vector3.FORWARD,"normal":Vector3.UP,"shape":"flat"})
	var shader:=Shader.new();shader.code="shader_type canvas_item; render_mode unshaded;\n#include \"res://scripts/visual/shaders/creation_roof_layer_direction.gdshaderinc\"\nuniform vec3 meridian;\nvoid fragment(){COLOR=vec4(roof_layer_downhill(meridian)*0.5+0.5,1.0);}\n"
	var viewport:=SubViewport.new();viewport.size=Vector2i(samples.size()*16,16);viewport.render_target_update_mode=SubViewport.UPDATE_ALWAYS;root.add_child(viewport)
	for i in range(samples.size()):
		var row:Dictionary=samples[i];var material:=ShaderMaterial.new();material.shader=shader;material.set_shader_parameter("meridian",row.v)
		var rect:=ColorRect.new();rect.position=Vector2(i*16,0);rect.size=Vector2(16,16);rect.material=material;viewport.add_child(rect)
	await process_frame;await RenderingServer.frame_post_draw
	var pixels:=viewport.get_texture().get_image();pixels.save_png(out+"/directions.png")
	for i in range(samples.size()):
		var row:Dictionary=samples[i];var color:=pixels.get_pixel(i*16+8,8);var v:=Vector3(color.r,color.g,color.b)*2.-Vector3.ONE
		check(v.y<=.01 and absf(v.length()-1.)<.02 and absf(v.dot(row.normal))<.02,"GPU "+row.shape+" layer axis is tangent, unit and never uphill")
		check(absf(v.dot(row.v))>.98,"GPU "+row.shape+" preserves the actual chart meridian axis")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"gpu_samples":samples.size()}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("ROOF_SLOPE_GPU ",JSON.stringify(report));viewport.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
