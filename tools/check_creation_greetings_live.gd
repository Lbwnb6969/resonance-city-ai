extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
var demo
var output:="res://验证记录/居民回应_2026-10-22/live"
var checks:=0
var failures:Array[String]=[]
var facts:Dictionary={}
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.music._loading:await process_frame
	for i in range(12):await process_frame
func hover(at:Vector2)->void:
	var event:=InputEventMouseMotion.new();event.position=at;event.global_position=at;root.push_input(event);await process_frame
func image_now(label:String)->Image:
	await RenderingServer.frame_post_draw
	var image:=root.get_texture().get_image();image.save_png(output+"/"+label+".png");return image
func visible_note(row:Dictionary,label:String)->void:
	var node:MeshInstance3D=row.note
	var center:Vector2=demo.camera.unproject_position(node.global_position+Vector3.UP*.12)
	var before:Image=await image_now(label+"_note")
	node.hide();var after:Image=await image_now(label+"_without_note");node.show()
	var count:=0;var bounds:=Rect2i(Vector2i(center)-Vector2i(22,30),Vector2i(44,60)).intersection(Rect2i(Vector2i.ZERO,root.size))
	for y in range(bounds.position.y,bounds.end.y):
		for x in range(bounds.position.x,bounds.end.x):
			var a:=before.get_pixel(x,y);var b:=after.get_pixel(x,y)
			if absf(a.r-b.r)+absf(a.g-b.g)+absf(a.b-b.b)>.1 and a.r>a.b*1.4 and a.g>a.b*1.3:count+=1
	check(bounds.size.x>0 and bounds.size.y>0 and count>=5,"actual in-world golden note contributes visible native pixels at "+label)
	facts[label]={"note_pixels":count,"screen":center,"arm_rotation":row.arm.rotation.z,"hop":row.body.position.y-float(row.y)}
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):output=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=output+"/works_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false)
	await settle();var authored:=State.new();authored.initialize()
	check(authored.add_house(Vector2(-8,-10.5)).ok,"public placement joins a real third home for roof browsing")
	demo._after_edit(demo.state.restore(authored.snapshot()),"history");await settle();demo.life.set_process(false)
	demo.focus=Vector3(-8,.7,-4.5);demo.zoom=11.;demo.pitch=1.;demo.yaw=0.;demo._update_camera();demo.toast.hide();demo.toast_time=0.;demo.life_save_timer=10000.
	await hover(Vector2(1000,90))
	var house:Dictionary=demo.state.houses[demo.state._house_index("h1")]
	demo.get_meta("inspiration_draft").poll();demo.get_meta("vignette_journey").poll()
	var saved:Dictionary=demo.state.snapshot();var ledger:Dictionary=demo.state.life_progress.duplicate(true)
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	# Real wall-clock travel, then freeze only while comparing rendered poses.
	var initial:Vector3=demo.life.residents[0].node.position;var time:float=demo.life.time;demo.life.set_process(true)
	while demo.life.time-time<1.:await process_frame
	demo.life.set_process(false)
	check(demo.life.residents[0].node.position.distance_to(initial)>.2,"actual resident walks on the production street before the touch")
	var roof:=Vector3(house.origin[0],float(house.get("base_y",0.))+1.9,house.origin[1])
	var serial:int=demo.music._pluck_serial;demo.select_tool(4)
	await hover(demo.camera.unproject_position(roof))
	var deadline:=Time.get_ticks_msec()+1000
	while (demo.life.greetings.active.is_empty() or demo.music._pluck_serial==serial) and Time.get_ticks_msec()<deadline:await process_frame
	check(not demo.life.greetings.active.is_empty() and demo.music._pluck_serial>serial,"actual roof hover reaches the production pluck and resident response")
	facts.hover={"source":demo.music._pluck_active.get("house_id",""),"last":demo._last_strummed_house_id,"pointer":demo.pointer}
	if demo.life.greetings.active.is_empty():
		print("GREETING_MISS ",{"pointer":demo.pointer,"hovered":demo._ray_hit(demo.pointer),"guide":demo.guide.visible(),"serial":demo.music._pluck_serial,"cluster":demo.state.natural_clusters().get("h1",{})})
		await image_now("missed_hover");demo.queue_free();await process_frame;quit(1);return
	await hover(Vector2(1000,90));var row:Dictionary=demo.life.greetings.active.values()[0]
	var walker:Dictionary=row.resident;var anchor:Vector3=walker.node.position
	var toward:=Vector2(house.origin[0]-anchor.x,house.origin[1]-anchor.z)
	facts.facing={"home":walker.home_id,"at":anchor,"target":row.target,"yaw":walker.node.rotation.y,"expected":atan2(toward.x,toward.y),"start":row.start,"time":demo.life.time}
	check(Vector2(anchor.x,anchor.z).distance_to(Vector2(house.origin[0],house.origin[1]))<=8. and absf(angle_difference(walker.node.rotation.y,atan2(toward.x,toward.y)))<.0001,"visible responder turns toward the real touched house within eight metres")
	var start:float=demo.life.time;demo.life.set_process(true)
	while demo.life.time-start<.19:await process_frame
	demo.life.set_process(false)
	check(walker.node.position==anchor and row.body.position.y>float(row.y)+.04 and absf(row.arm.rotation.z)>1.5,"real life-clock response pauses travel while the body hops and arm waves")
	var arm_pose:float=row.arm.rotation.z
	for resolution:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=resolution;for i in range(4):await process_frame
		await visible_note(row,str(resolution.x))
	start=demo.life.time;demo.life.set_process(true)
	while demo.life.time-start<.10:await process_frame
	demo.life.set_process(false)
	check(absf(row.arm.rotation.z-arm_pose)>.15 and walker.node.position==anchor,"raised arm changes angle during the same stationary greeting")
	check(demo.state.life_progress==ledger,"touch and greeting create no purchases, production or concert completions")
	check(demo.state.snapshot()==saved,"temporary greeting and pose never write the authored work")
	if demo.state.snapshot()!=saved:
		FileAccess.open(output+"/before.json",FileAccess.WRITE).store_string(JSON.stringify(saved,"\t"))
		FileAccess.open(output+"/after.json",FileAccess.WRITE).store_string(JSON.stringify(demo.state.snapshot(),"\t"))
	demo.life.set_process(true)
	while not demo.life.greetings.active.is_empty():await process_frame
	demo.life.set_process(false)
	check(not row.note.visible and not row.arm.visible and not walker.has("greeting_until"),"six-tenths response removes the temporary note and waving pose")
	start=demo.life.time;demo.life.set_process(true)
	while demo.life.time-start<.5:await process_frame
	demo.life.set_process(false)
	check(walker.node.position.distance_to(anchor)>.05,"original routed walk resumes after the greeting")
	await image_now("resumed_walk")
	var current:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():current.append(player.get_instance_id())
	check(current==voices and current.size()==12 and demo.music._effects.size()==4,"greeting visuals preserve native music voice identities")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save remains byte-identical")
	var visual:Dictionary=await preload("res://tools/fixtures/city_creation_citizen_visual_live.gd").capture(demo,output)
	for label:String in visual.checks:check(visual.checks[label],"citizens: "+label)
	var audio:Dictionary=await preload("res://tools/fixtures/city_creation_audio_probe.gd").record(output+"/Master.wav")
	check(audio.ok,"actual citizen-world Master audible and unclipped");facts.visual=visual;facts.audio=audio
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(output+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("GREETINGS_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
