extends RefCounted
const Stamp=preload("res://scripts/ui/city_creation_postcard_stamp.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const Probe=preload("res://tools/fixtures/city_creation_audio_probe.gd")
var OUT:String="res://验证记录/M21/明信片"
var checks:Dictionary={}
func run(demo)->Dictionary:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")+"/postcard"
	var tree:SceneTree=demo.get_tree();DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var exported:=Image.load_from_file(demo.camera_rig.last_postcard)
	checks.native_export_has_added_frame=exported.get_width()>tree.root.size.x and exported.get_height()>tree.root.size.y+100
	var city:=State.new();city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json")))
	await demo.gallery._open_chosen({"ok":true,"id":"stamp","title":"四时代的河湾来信","world":city.snapshot(),"view":{"focus":[-3.,.7,0.],"yaw":.62,"pitch":.85,"zoom":70.,"evening":false,"light_phase":0}})
	while demo.gallery.busy or demo.edit_pending() or demo.music._loading:await tree.process_frame
	demo.life.set_process(false);demo.get_meta("inspiration_draft").poll();demo.get_meta("vignette_journey").poll()
	var before:Dictionary=demo.state.snapshot();var history:int=demo.state._undo.size()
	var info:=Stamp.details(demo.state,demo.gallery.current_title)
	checks.real_four_eras=info.eras.size()==4
	checks.real_chords=info.chords.size()>0 and info.chords.size()==demo.state.synergy_buffs().active_chords.size()
	checks.actual_level=info.level==demo.state.harmony_journey.get("harmony_level",1)
	for resolution:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		tree.root.size=resolution
		for phase:int in range(3):
			while demo.light_phase!=phase:demo._toggle_light()
			for frame in range(8):await tree.process_frame
			var marker:MeshInstance3D=demo.get_meta("vignette_journey").marker
			var visible:bool=marker.visible;var running:bool=demo.is_processing()
			var raw:Image=await Stamp.scene_frame(demo)
			checks["overlays_restored_%d_%d"%[resolution.x,phase]]=marker.visible==visible and demo.is_processing()==running
			var stamped:Image=await Stamp.compose(demo,raw,demo.state,demo.gallery.current_title)
			var margin:=maxi(16,roundi(raw.get_width()*.018))
			var recovered:=stamped.get_region(Rect2i(Vector2i.ONE*margin,raw.get_size()))
			checks["raw_pixels_unchanged_%d_%d"%[resolution.x,phase]]=raw.get_data()==recovered.get_data()
			checks["live_ui_restored_%d_%d"%[resolution.x,phase]]=demo.ui_layer.visible and demo.find_children("*","SubViewport",true,false).size()==0
			raw.save_png(OUT+"/raw_%d_%d.png"%[resolution.x,phase]);stamped.save_png(OUT+"/postcard_%d_%d.png"%[resolution.x,phase])
	checks.unchanged_world=demo.state.snapshot()==before and demo.state._undo.size()==history
	var audio:Dictionary=await Probe.record(OUT+"/Master.wav",3.2);checks.unclipped=audio.ok
	var report:={"ok":checks.values().all(func(v):return v),"checks":checks,"details":info,"audio":audio}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("POSTCARD_LIVE ",JSON.stringify(report));return report
