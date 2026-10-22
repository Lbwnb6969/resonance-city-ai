extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
var output:="res://验证记录/聚落长句脉动_2026-10-22/live"
var demo
var checks:=0
var failures:Array[String]=[]
var facts:Dictionary={}
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy:await process_frame
	for i in range(15):await process_frame
func focus(at:Vector2,zoom:float)->void:
	demo.focus=Vector3(at.x,.8,at.y);demo.zoom=zoom;demo.pitch=.85;demo.yaw=.1;demo._update_camera()
	var start:=Time.get_ticks_msec()
	while (not demo.resonance_snapshot.get("audible",false) or demo.town.living_music.strength_at(at)<=0.) and Time.get_ticks_msec()-start<6500:await process_frame
	for i in range(12):await process_frame
func lamp(within:Node=null)->Dictionary:
	for ref:WeakRef in demo.town.promenade._lamp_rigs:
		var node:MultiMeshInstance3D=ref.get_ref()
		if node==null or node.name!="LampHalos":continue
		if within!=null and not within.is_ancestor_of(node):continue
		for i in range(node.multimesh.instance_count):
			if node.multimesh.get_instance_custom_data(i).r>.05:
				return {"node":node,"index":i,"at":node.multimesh.get_instance_transform(i).origin}
	return {}
func water_mesh(court:Node3D,material:ShaderMaterial)->MeshInstance3D:
	# The normal material batcher retains the real mesh/material, while the
	# imported FountainWater node name is intentionally consolidated.
	for node:MeshInstance3D in court.find_children("*","MeshInstance3D",true,false):
		if node.material_override==material:return node
	return null
func grow_car_choir(at:Vector2)->void:
	var closest:="";var distance:=INF
	for house:Dictionary in demo.state.houses:
		var gap:float=at.distance_squared_to(Vector2(house.origin[0],house.origin[1]))
		if gap<distance:distance=gap;closest=str(house.id)
	var group:Dictionary=demo.state.natural_clusters()[closest]
	var points:Array[Vector2]=[]
	for id:String in group.members:
		var house:Dictionary=demo.town._house_record(id);points.append(Vector2(house.origin[0],house.origin[1]))
	var sites:Array[Vector2]=[]
	for z in range(-6,7):
		for x in range(-6,7):sites.append((at+Vector2(x,z)*2.25).snapped(Vector2.ONE*.25))
	sites.sort_custom(func(a:Vector2,b:Vector2)->bool:return a.distance_squared_to(at)<b.distance_squared_to(at))
	var needed:=maxi(1,15-int(group.size));var built:=0;var last:Dictionary={"ok":false}
	for site:Vector2 in sites:
		if built==0 and site.distance_to(at)>5.:continue
		if not points.any(func(point):return point.distance_to(site)<=5.8) or not demo.state.validate_add_house(site).ok:continue
		last=demo.state.add_house(site)
		if last.ok:points.append(site);built+=1
		if built>=needed:break
	check(built==needed,"public house placement grows the actual carriage neighborhood to a chamber choir")
	if last.ok:demo._after_edit(last,"room");await settle()
	var updated:Dictionary=demo.state.natural_clusters()[closest]
	check(int(updated.size)>=15,"published neighborhood reaches the real fifteen-house threshold")
	facts.car_neighborhood={"old_size":group.size,"added":built,"new_size":updated.size,"at":at}
func shot(label:String)->void:
	demo.town.clear_preview();demo.toast.hide();demo.toast_time=0.
	await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(output+"/"+label+".png")
func phase(label:String,water:ShaderMaterial,car:Dictionary={})->Dictionary:
	var start:=Time.get_ticks_msec()
	while Time.get_ticks_msec()-start<4500:
		await process_frame;await RenderingServer.frame_post_draw
		var clock:float=demo.resonance_snapshot.get("clock_sec",0.)
		var pulse:float=demo.town.living_music.phrase_pulse(clock)
		if (pulse>.97 if label.ends_with("peak") else pulse<.01):
			var result:={"clock":clock,"pulse":pulse,"water":float(water.get_shader_parameter("choir_pulse")),"lamp_clock":float(demo.town.promenade.materials.glow.get_shader_parameter("music_clock"))}
			if not car.is_empty():result.car_energy=car.glass.emission_energy_multiplier
			root.get_texture().get_image().save_png(output+"/"+label+".png");return result
	check(false,"actual shared clock reaches "+label);return {}
func used(image:Image)->Rect2i:
	var low:=Vector2i(256,256);var high:=Vector2i(-1,-1)
	for y in range(256):
		for x in range(256):
			if image.get_pixel(x,y).a>.5:low=low.min(Vector2i(x,y));high=high.max(Vector2i(x,y))
	return Rect2i(low,high-low+Vector2i.ONE)
func energy(image:Image)->float:
	var sum:=0.
	for y in range(256):
		for x in range(256):
			var c:=image.get_pixel(x,y);sum+=c.r+c.g+c.b
	return sum
func shader_probes(water:MeshInstance3D,source_material:ShaderMaterial,lit:Dictionary)->void:
	var viewport:=SubViewport.new();viewport.size=Vector2i(256,256);viewport.transparent_bg=true;viewport.own_world_3d=true
	viewport.render_target_update_mode=SubViewport.UPDATE_ALWAYS;root.add_child(viewport)
	var scene:=Node3D.new();viewport.add_child(scene)
	var camera:=Camera3D.new();camera.projection=Camera3D.PROJECTION_ORTHOGONAL;camera.near=.01;camera.far=10.;scene.add_child(camera);camera.current=true
	var clone:=MeshInstance3D.new();clone.mesh=water.mesh;clone.transform=water.global_transform;scene.add_child(clone)
	var material:ShaderMaterial=source_material.duplicate(true)
	var shader:=Shader.new();shader.code=material.shader.code.get_slice("void fragment()",0)+"void fragment(){ALBEDO=vec3(1.);}\n"
	material.shader=shader;clone.material_override=material
	material.set_shader_parameter("water_base_y",source_material.get_shader_parameter("water_base_y"))
	var bounds:AABB=clone.transform*water.mesh.get_aabb();var center:=bounds.get_center()
	facts.water_probe={"bounds":bounds,"transform":clone.transform,"base":material.get_shader_parameter("water_base_y"),"original_base":source_material.get_shader_parameter("water_base_y")}
	# Imported water surfaces are horizontal discs. A slight downward view
	# makes their silhouette measurable instead of viewing both edge-on.
	camera.size=maxf(bounds.size.x,bounds.size.y)*1.4;camera.position=center+Vector3(0,.7,3);camera.look_at(center)
	var masks:Array[Rect2i]=[]
	for amount:float in [0.,1.]:
		material.set_shader_parameter("choir_pulse",amount)
		for i in range(3):await process_frame
		await RenderingServer.frame_post_draw
		var image:=viewport.get_texture().get_image();masks.append(used(image));image.save_png(output+"/water_vertex_"+str(int(amount))+".png")
	check(masks[1].position.y<=masks[0].position.y-2 and absi(masks[1].end.y-masks[0].end.y)<=1,"actual production water vertex shader raises the stream while retaining the basin floor")
	facts.water_masks=masks
	clone.queue_free();await process_frame
	var source:MultiMeshInstance3D=lit.node;var glow:=MultiMeshInstance3D.new();glow.multimesh=source.multimesh;glow.transform=source.global_transform
	var glow_material:ShaderMaterial=source.material_override.duplicate(true);glow.material_override=glow_material;scene.add_child(glow)
	camera.size=1.15;camera.position=lit.at+Vector3(0,0,3);camera.look_at(lit.at)
	var energies:Array[float]=[]
	for clock:float in [0.,1.5]:
		glow_material.set_shader_parameter("music_clock",clock)
		for i in range(3):await process_frame
		await RenderingServer.frame_post_draw
		var image:=viewport.get_texture().get_image();energies.append(energy(image));image.save_png(output+"/lamp_shader_"+str(clock)+".png")
	check(energies[0]>energies[1]*2. and energies[1]>0.,"actual lamp MultiMesh and production fragment shader visibly brighten on the shared phrase")
	facts.lamp_probe_energy=energies;viewport.queue_free();await process_frame
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):output=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output));root.size=Vector2i(1440,900);Engine.max_fps=100
	var original:=FileAccess.get_file_as_bytes("res://数据/四库共鸣交响大城样例.json")
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=output+"/works_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false);demo.life_save_timer=10000.
	while demo.music._loading:await process_frame
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	await demo.gallery.open_example("example_flagship");demo.life.set_process(false);await settle();demo.life_save_timer=10000.
	check(demo.state.houses.size()==127 and demo.life.tram.cars.size()>0,"actual complete example retains its houses and real carriage")
	var court:Node3D=demo.town.courtyards.roots.values()[0];var anchor:Vector3=court.get_meta("fountain_anchor")
	await focus(Vector2(anchor.x,anchor.z),13.)
	var material:ShaderMaterial=court.get_meta("water_material");var water:=water_mesh(court,material)
	check(water!=null,"published fountain retains its production water material after batching")
	check(court.get_meta("members").any(func(id):return demo.town.living_music.large_members.has(id)),"actual inner courtyard belongs to a currently audible large choir")
	var lit:=lamp();check(not lit.is_empty(),"native GL lamp custom-data slots receive the actual choir scope after cold publication")
	var peak:Dictionary=await phase("court_peak",material);var trough:Dictionary=await phase("court_trough",material)
	check(peak.water>.97 and trough.water<.01 and absf(peak.lamp_clock-peak.clock)<.0001,"daily fountain and lamps follow the same real PCM phrase without starting a performance")
	check(demo.life.concert_status().phase=="idle","daily light response needs no manual concert")
	facts.court=[peak,trough]
	if not lit.is_empty() and water!=null:await shader_probes(water,material,lit)
	var car:Dictionary=demo.life.tram.cars[0];var start_distance:float=car.distance;demo.life.set_process(true)
	var start:=Time.get_ticks_msec()
	while float(car.distance)-start_distance<3. and Time.get_ticks_msec()-start<8000:await process_frame
	demo.life.set_process(false)
	check(float(car.distance)-start_distance>=3.,"actual carriage advances on its production rails")
	# The example's industrial annex is smaller than fifteen houses. Its
	# carriage must stay quiet until actual construction earns the threshold.
	await grow_car_choir(Vector2(car.node.position.x,car.node.position.z))
	car=demo.life.tram.cars[0];material=demo.town.courtyards.roots.values()[0].get_meta("water_material")
	await focus(Vector2(car.node.position.x,car.node.position.z),17.)
	check(demo.town.living_music.strength_at(Vector2(car.node.position.x,car.node.position.z))>0.,"real carriage is within the currently audible large street choir")
	peak=await phase("car_peak",material,car);trough=await phase("car_trough",material,car)
	check(float(peak.car_energy)>float(trough.car_energy)+.15,"actual carriage warm windows breathe in ordinary daytime life")
	facts.car=[peak,trough]
	var authored:Dictionary=demo.state.snapshot();demo._set_light_phase(2);await settle()
	peak=await phase("night_peak",material,car);trough=await phase("night_trough",material,car)
	check(float(trough.car_energy)>=.70 and float(peak.car_energy)>float(trough.car_energy)+.15,"shared phrase adds to existing night lighting without turning it off")
	facts.night=[peak,trough]
	demo._toggle_music();await settle()
	check(demo.town.living_music.large_members.is_empty() and is_equal_approx(car.glass.emission_energy_multiplier,.70) and is_zero_approx(float(material.get_shader_parameter("choir_pulse"))),"mute removes daily pulses while retaining night lighting")
	check(demo.state.snapshot()==authored,"all phrase and night-light rendering leaves the complete authored world unchanged")
	demo._toggle_music();demo._set_light_phase(0);await focus(Vector2(anchor.x,anchor.z),13.);await settle()
	lit=lamp();var road_id:=""
	if not lit.is_empty():
		for id:String in demo.town.road_roots:
			if demo.town.road_roots[id].is_ancestor_of(lit.node):road_id=id;break
	check(not road_id.is_empty(),"lit lamp belongs to an actual authored road")
	if not road_id.is_empty():
		var old_id:int=lit.node.get_instance_id()
		demo._after_edit(demo.state.remove_road(road_id),"erase");await settle()
		demo._history(false);await settle();await focus(Vector2(anchor.x,anchor.z),13.)
		var restored:=lamp(demo.town.road_roots.get(road_id))
		check(demo.state.roads.any(func(row):return row.id==road_id) and not restored.is_empty() and restored.node.get_instance_id()!=old_id,"road undo publishes fresh, scoped lamp instances through normal staging adoption")
		facts.restored_road=road_id
		await shot("restored_lamps")
	var current:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():current.append(player.get_instance_id())
	check(current==voices and current.size()==12 and demo.music._effects.size()==4,"render-only changes preserve native audio voice identities")
	check(original==FileAccess.get_file_as_bytes("res://数据/四库共鸣交响大城样例.json") and personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"original example and personal save remain byte-identical")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(output+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("CHAMBER_LIGHTS ",JSON.stringify(result))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
