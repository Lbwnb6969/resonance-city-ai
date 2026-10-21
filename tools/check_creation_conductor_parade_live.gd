extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/手绘提灯巡游_2026-10-21"
var demo
var checks:=0
var failures:Array[String]=[]
var evidence:Dictionary={}
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	var until:=Time.get_ticks_msec()+30000
	while (demo.edit_pending() or demo._edit_ui_pending or demo.music._loading) and Time.get_ticks_msec()<until:await process_frame
	for i:int in range(12):await process_frame
func move(at:Vector2)->void:
	var event:=InputEventMouseMotion.new();event.position=at;root.push_input(event);await process_frame
func button(at:Vector2,pressed:bool)->void:
	var event:=InputEventMouseButton.new();event.position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=pressed;root.push_input(event);await process_frame
func click(control:Control)->void:
	var at:=control.get_global_rect().get_center();await move(at);await button(at,true);await button(at,false)
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=120
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/隔离作品";root.add_child(demo);demo.life.set_process(false)
	demo._after_edit(demo.state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))),"history");await settle();demo.life.set_process(false)
	var ids:Dictionary={}
	for house:Dictionary in demo.state.houses:
		if house.has("signature"):ids[house.signature]=str(house.id)
	demo.focus=Vector3(0.,.7,0.);demo.zoom=94.;demo.pitch=1.;demo._update_camera();demo.select_tool(4)
	var venue:String=ids.watermill;demo.selected_house=venue;demo.spatial_popover.open_for_house(venue);await settle()
	for resolution:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=resolution;demo.spatial_popover.refresh();await settle()
		check(demo.spatial_popover.parade_button.is_visible_in_tree() and Rect2(Vector2.ZERO,Vector2(resolution)).encloses(demo.spatial_popover.card.get_global_rect()),"landmark conducting action fits "+str(resolution))
	root.size=Vector2i(1440,900);await settle();var before:=int(demo.state.life_progress.concerts)
	await click(demo.spatial_popover.parade_button)
	check(demo.conductor_gesture.venue==venue and not demo.spatial_popover.card.visible,"actual roof action arms freehand conducting")
	var targets:Array[String]=[ids.music_academy,ids.bell_keep,ids.watermill]
	var screens:Array[Vector2]=[]
	for id:String in targets:
		var house:Dictionary=demo.town._house_record(id)
		screens.append(demo.camera.unproject_position(Vector3(house.origin[0],float(house.get("base_y",0.))+.25,house.origin[1])))
	await move(screens[0]);await button(screens[0],true)
	for i:int in range(1,screens.size()):
		for step:int in range(1,17):await move(screens[i-1].lerp(screens[i],float(step)/16.))
	var hand_order:Array=demo.conductor_gesture.order.duplicate()
	check(hand_order.size()>=2 and demo.conductor_gesture.staff.visible,"actual held-pointer stroke selects visible music stops and draws five golden lines")
	await button(screens[-1],false);await settle();demo.life.set_process(false)
	check(demo.life._concert.get("conductor",false) and demo.life._concert.movement_order==hand_order,"release starts the exact hand-ordered invitation")
	if not demo.life._concert.get("conductor",false):
		await finish();return
	for i:int in range(1200):
		if demo.life.concert_status().phase=="playing":break
		demo.life._process(.5);await process_frame
	check(demo.life.concert_status().phase=="playing","real citizens arrive before the actual music starts")
	var recording:=AudioEffectRecord.new();AudioServer.add_bus_effect(0,recording);recording.set_recording_active(true)
	demo.life.set_process(true)
	var phrases:Dictionary={};var moved:=false;var first:Vector3=demo.life.residents[0].node.position
	var until:=Time.get_ticks_msec()+30000;var shot:=false
	while demo.life.concert_status().phase!="idle" and Time.get_ticks_msec()<until:
		await process_frame
		var source:Dictionary=demo.music.grand_festival_report();var phrase:int=int(source.get("phrase",-1))
		if source.active and phrase>=0 and phrase<8:phrases[phrase]=str(source.source_id)
		moved=moved or demo.life.residents[0].node.position.distance_to(first)>.4
		if not shot and demo.life.concert_status().elapsed>5.:
			shot=true
			check(demo.life.conductor_parade.lanterns.size()>8 and demo.conductor_gesture.spotlight.visible,"living procession has lanterns and musical roof spotlight")
			await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/真实巡游.png")
			var person:Node3D=demo.life.conductor_parade.lanterns.values()[0].get_parent().get_parent()
			demo.focus=person.global_position;demo.zoom=23.;demo._update_camera()
			await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/提灯近景.png")
	evidence.hand_order=hand_order;evidence.phrases=phrases
	var frames:Array=demo.frame_samples.duplicate();frames.sort()
	if not frames.is_empty():evidence.frame_ms={"p95":frames[mini(frames.size()-1,int(frames.size()*.95))],"maximum":frames[-1],"samples":frames.size(),"condition":"OpenGL actual procession with screenshot capture; informational only"}
	recording.set_recording_active(false)
	var wave:AudioStreamWAV=recording.get_recording();var peak:=0.
	if wave!=null:
		var pcm:=wave.data
		for i:int in range(pcm.size()/2):peak=maxf(peak,absf(float(pcm.decode_s16(i*2))/32768.))
		wave.save_to_wav(OUT+"/手绘接力24秒.wav")
	evidence.recording_peak=peak
	for i:int in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,i)==recording:AudioServer.remove_bus_effect(0,i)
	await process_frame;await RenderingServer.frame_post_draw
	check(phrases.size()==8,"actual PCM transport exposes all eight conducting phrases")
	for phrase:int in phrases:check(phrases[phrase]==hand_order[phrase%hand_order.size()],"actual sounding phrase follows the drawn order "+str(phrase))
	check(moved and int(demo.state.life_progress.concerts)==before+1,"real-time procession walks and completes exactly once")
	check(peak>.0001 and peak<.99,"actual recorded hand-ordered music is audible and unclipped")
	check(demo.music._players.size()==12 and demo.music._effects.size()==4 and not demo.conductor_gesture.staff.visible,"finish retains fixed audio pool and removes drawn staff")
	await finish()
func finish()->void:
	var result:Dictionary={"checks":checks,"failures":failures,"ok":failures.is_empty()}
	result.merge(evidence)
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("CONDUCTOR_PARADE_LIVE ",JSON.stringify(result))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
