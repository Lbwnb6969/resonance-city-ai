extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/六地标传世乐章_2026-10-21"
var demo
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	var until:=Time.get_ticks_msec()+40000
	while (demo.edit_pending() or demo._edit_ui_pending or demo.music._loading) and Time.get_ticks_msec()<until:await process_frame
	for i:int in range(25):await process_frame
func click(button:Control)->void:
	var at:=button.get_global_rect().get_center()
	var move:=InputEventMouseMotion.new();move.position=at;root.push_input(move);await process_frame
	for pressed:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=pressed;root.push_input(event);await process_frame
func capture(label:String)->void:
	await RenderingServer.frame_post_draw
	check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"capture "+label)
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=120
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/隔离作品";root.add_child(demo);demo.life.set_process(false)
	demo._after_edit(demo.state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))),"history");await settle();demo.life.set_process(false)
	var ids:Dictionary={}
	for house:Dictionary in demo.state.houses:
		if house.has("signature"):ids[house.signature]=house.id
	for kind:String in demo.State.Signatures.IDS:
		var id:String=ids[kind];var house:Dictionary=demo.town._house_record(id)
		demo.select_tool(0);demo.selected_house=id;demo.focus=Vector3(house.origin[0],float(house.get("base_y",0.))+1.,house.origin[1]);demo.zoom=22.;demo._update_camera();demo.spatial_popover.open_for_house(id);await settle()
		var button:Button=demo.spatial_popover.concert_button
		check(button.is_visible_in_tree() and button.tooltip_text.contains("传世"),"real movement seal on "+kind)
		await click(button)
		check(demo.life._concert.get("landmark_movement",false) and demo.life._concert.venue_id==id,"real click invites from "+kind)
		check(demo.state.set_journey_checkpoint(demo.life.checkpoint()).ok,"save accepts active "+kind)
		await capture(kind)
		demo.life.cancel_concert();demo.spatial_popover.close()
	# The 24s audio transport runs in real time; only audience walking is sped up.
	var venue:String=ids.watermill;var house:Dictionary=demo.town._house_record(venue)
	demo.selected_house=venue;demo.focus=Vector3(house.origin[0],1.,house.origin[1]);demo.zoom=30.;demo._update_camera()
	print("MOVEMENT_LIVE inviting final")
	check(demo.life.invite_landmark_movement(venue).ok,"start actual 24-second performance")
	print("MOVEMENT_LIVE gathering")
	var until:=Time.get_ticks_msec()+20000
	while demo.life.concert_status().phase=="gathering" and Time.get_ticks_msec()<until:
		demo.life._process(.5);await process_frame
	print("MOVEMENT_LIVE gathered ",demo.life.concert_status())
	check(demo.life.concert_status().phase=="playing","actual audience arrives before playing")
	var before:=int(demo.state.life_progress.concerts)
	var record:=AudioEffectRecord.new();AudioServer.add_bus_effect(0,record);record.set_recording_active(true)
	demo.life.set_process(true)
	print("MOVEMENT_LIVE recording")
	var last_phrase:=-1
	var phrases:Dictionary={};var final_phrases:Dictionary={};var clock:float=demo.music._playback_clock()
	until=Time.get_ticks_msec()+28000
	while Time.get_ticks_msec()<until and demo.life.concert_status().phase!="idle":
		await process_frame
		var report:Dictionary=demo.music.grand_festival_report()
		if report.active:
			if int(report.phrase)!=last_phrase:print("MOVEMENT_LIVE phrase ",report.phrase);last_phrase=int(report.phrase)
			phrases[int(report.phrase)]=str(report.source_id)
			if report.era=="tutti":final_phrases[int(report.phrase)]=true
	print("MOVEMENT_LIVE ending record")
	demo.life.set_process(false);record.set_recording_active(false)
	var wave:AudioStreamWAV=record.get_recording();var peak:=0.
	if wave!=null:
		var pcm:PackedByteArray=wave.data
		for i:int in range(pcm.size()/2):peak=maxf(peak,absf(float(pcm.decode_s16(i*2))/32768.))
		wave.save_to_wav(OUT+"/水车指挥24秒.wav")
	for i:int in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,i)==record:AudioServer.remove_bus_effect(0,i)
	check(phrases.size()==8 and final_phrases.has(6) and final_phrases.has(7),"actual playback visits all eight phrases with two tutti phrases")
	check(int(demo.state.life_progress.concerts)==before+1 and demo.life.concert_status().phase=="idle","real time completion settles once")
	check(demo.music._playback_clock()>clock+23. and peak>.0001 and peak<.99,"actual recorded music is audible unclipped and uses continuous transport")
	check(demo.music._players.size()==12 and demo.music._effects.size()==4,"all landmark movements reuse the fixed voices")
	var result:Dictionary={"checks":checks,"failures":failures,"ok":failures.is_empty(),"phrases":phrases,"tutti":final_phrases,"peak":peak}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("LANDMARK_MOVEMENT_LIVE ",JSON.stringify(result))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
