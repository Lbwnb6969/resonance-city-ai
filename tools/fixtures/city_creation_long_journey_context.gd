extends RefCounted
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Journey=preload("res://scripts/world/city_creation_harmony_journey.gd")
var tree:SceneTree
var demo:Node
var out:String
var checks:Dictionary={}
var details:Dictionary={}
var phase:String
var sampling:=false
var samples:Array[Dictionary]=[]
var frame_times:Array[float]=[]
var previous:=0
var last_second:=-1
func setup(owner:SceneTree,resolution:int,stage:String,output_root:String="res://验证记录/M32")->void:
	tree=owner;phase=stage;out=output_root+"/%d"%resolution;DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	tree.root.size=Vector2i(resolution,900 if resolution==1440 else 768);Engine.max_fps=100
	demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=out+"/隔离作品";tree.root.add_child(demo);demo.life.set_process(false)
	await settle();look(Vector2(-27,-20),24.);await settle()
	tree.process_frame.connect(sample)
func sample()->void:
	if not sampling:return
	var now:=Time.get_ticks_usec()
	if previous>0:frame_times.append((now-previous)/1000.)
	previous=now
	var clock:float=demo.music._playback_clock();var second:=floori(clock)
	if second==last_second:return
	last_second=second;var score:Dictionary=demo.music.emergence.score
	samples.append({"clock":clock,"breath":demo.music.ClusterHarmony.Tide.breath(clock),"phrase":posmod(floori(clock/3.),8),"conducting":score.get("phrase_tide",{}).duplicate(true),"foundation_db":demo.music._players.foundation.volume_db})
func check(ok:bool,label:String)->void:
	checks[label]=ok
	if not ok:push_error("LONG_JOURNEY "+label)
func stage(label:String)->void:print("LONG_JOURNEY_STAGE ",phase," ",label)
func settle()->void:
	var deadline:=Time.get_ticks_msec()+60000
	while (demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy or demo.music._loading or (demo.get_meta("vignette_journey").get_node_or_null("SiteSearch")!=null and demo.get_meta("vignette_journey").get_node("SiteSearch").worker!=null)) and Time.get_ticks_msec()<deadline:await tree.process_frame
	for i in range(8):await tree.process_frame
func look(at:Vector2,zoom:float=28.)->void:
	demo.focus=Vector3(at.x,.7,at.y);demo.yaw=.34;demo.pitch=.85;demo.zoom=zoom;demo._update_camera()
func edit(result:Dictionary,kind:String="room",geometry:bool=true)->void:
	check(result.get("ok",false),"edit_%d"%checks.size());demo._after_edit(result,kind,geometry);await settle()
func mouse(at:Vector2,down:bool)->void:
	var motion:=InputEventMouseMotion.new();motion.position=at;motion.global_position=at;tree.root.push_input(motion);await tree.process_frame
	await RenderingServer.frame_post_draw
	var event:=InputEventMouseButton.new();event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;tree.root.push_input(event);await tree.process_frame
func click(control:Control)->void:
	while demo.journal.scrollbook.tween!=null and demo.journal.scrollbook.tween.is_running():await tree.process_frame
	var parent:=control.get_parent()
	while parent!=null:
		if parent is ScrollContainer:
			parent.ensure_control_visible(control)
			for i in range(3):await tree.process_frame
			break
		parent=parent.get_parent()
	var at:=control.get_global_rect().get_center();await mouse(at,true);await mouse(at,false);await settle()
func ground(at:Vector2)->void:
	var world:=Vector3(at.x,demo.state.ground_height(at),at.y);var screen:Vector2=demo.camera.unproject_position(world)
	await mouse(screen,true);await mouse(screen,false)
func capture(name:String)->void:
	demo.toast.hide();demo.toast_time=0.;await RenderingServer.frame_post_draw
	tree.root.get_texture().get_image().save_png(out+"/"+phase+"_"+name+".png")
func postpone()->void:
	var draft:Node=demo.get_meta("inspiration_draft");draft.poll()
	for i in range(3):await tree.process_frame
	if draft.paper.visible:await click(draft.paper.find_child("PostponeDraft",true,false))
func total_xp()->int:
	var journey:Dictionary=demo.state.harmony_journey;var count:=int(journey.harmony_level)-1
	return int(journey.harmony_xp)+count*100+65*count*(count-1)/2
func fill(count:int)->void:
	stage("扩建至%d屋"%count);demo.journal.close_panel();await postpone()
	for z in range(-32,33,4):
		for x in range(-32,33,4):
			if demo.state.houses.size()>=count:return
			var result:Dictionary=demo.state.add_house(Vector2(x,z))
			if result.ok:await edit(result)
func save_work(title:String)->Dictionary:
	await demo.gallery.save_work(title)
	var read:Dictionary=demo.gallery.library.read(demo.gallery.last_saved_id)
	check(read.get("ok",false) and State.new().restore(read.world).ok,"saved_valid_"+title)
	return read
func finish()->Dictionary:
	if tree.process_frame.is_connected(sample):tree.process_frame.disconnect(sample)
	var result:={"phase":phase,"ok":checks.values().all(func(value):return value),"checks":checks,"details":details}
	FileAccess.open(out+"/"+phase+".json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true))
	return result
