extends SceneTree
## The real transport and four real short voices, with controlled service
## stimuli on valid sources. No personal saves and no offline audio montage.
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/注意力微拍_2026-10-18"
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
var trace:Array=[]
var voice_serials:Dictionary={}
var keys:Dictionary={}
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _sample()->void:
	for player:AudioStreamPlayer in demo.music._effects:
		var serial:int=player.get_meta("creation_voice_serial",0)
		if serial==int(voice_serials.get(player.get_instance_id(),0)):continue
		voice_serials[player.get_instance_id()]=serial
		var clock:float=demo.music._playback_clock()
		trace.append({"clock":clock,"key":keys.get(player.stream.get_instance_id(),""),"slot":posmod(floori(clock/.1875),16),"voice":player.get_instance_id()})
func _frames(seconds:float)->void:
	var end:=Time.get_ticks_msec()+int(seconds*1000.)
	while Time.get_ticks_msec()<end:await process_frame;_sample();demo.town.update_city_resonance_visuals(demo.music.resonance_state())
func _capture(name:String)->void:
	await process_frame;await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+name+".png")==OK,"real GL viewport saved: "+name)
func _camera(zoom:float)->void:
	demo.focus=Vector3(-4,.7,-3);demo.zoom=zoom;demo.pitch=.85;demo.yaw=.42;demo._update_camera();demo.town.clear_preview()
func _click(at:Vector2)->void:
	var motion:=InputEventMouseMotion.new();motion.position=at;motion.global_position=at;root.push_input(motion);await process_frame
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;root.push_input(event);await process_frame
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated";root.add_child(demo);demo.set_process(false);demo.life.set_process(false)
	var deadline:=Time.get_ticks_msec()+40000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline:await process_frame
	_check(not demo.music.audio_report.is_empty() and DisplayServer.get_name()!="headless","production PCM loads in an actual GL window")
	if demo.music.audio_report.is_empty():demo.queue_free();await process_frame;quit(1);return
	_check(demo.state.set_house_role("h3","garden_cafe").ok,"controlled tea fixture uses a real cafe building")
	var west_points:Array[Vector2]=[Vector2(-10,-8),Vector2(-10,7)]
	var east_points:Array[Vector2]=[Vector2(-2,-7),Vector2(-2,3)]
	var west:Dictionary=demo.state.add_district(west_points,8.,"warm")
	var east:Dictionary=demo.state.add_district(east_points,4.,"deep")
	_check(west.ok and east.ok and demo.state.link_districts(west.district_id,east.district_id).ok,"real manual district link supplies an attributed duet pair")
	var bridge_points:Array[Vector2]=[Vector2(-12,-2),Vector2(15,-2)]
	_check(demo.state.add_road(bridge_points).ok,"controlled crossing fixture builds a real road across the river")
	demo.life.setup(demo.state);demo.life.set_process(false);demo.town.rebuild();demo.music.update_city(demo.state)
	demo.music.reply.update_links(demo.music.manual_reply_pairs(),true)
	demo.music.bakery_cues.reset();_camera(18.)
	demo.music.set_cafe_view({"h3":{"phase":"tea","arrived":2}})
	for key:String in demo.music._edit_streams:keys[demo.music._edit_streams[key].get_instance_id()]=key
	var identities:Array=[]
	for key:String in demo.music.STEMS:identities.append([demo.music._players[key].get_instance_id(),demo.music._original_streams[key].get_instance_id()])
	for player:AudioStreamPlayer in demo.music._effects:identities.append(player.get_instance_id())
	var site:Dictionary={};var distance:=INF
	for row:Dictionary in demo.life.travel.sites.values():
		var gap:float=Vector2(row.at).distance_to(Vector2(-4,-3))
		if row.kind!="stepping" and gap<distance:site=row;distance=gap
	_check(not site.is_empty() and demo.music.acoustic.point_weight(site.get("at",Vector2.INF))>0.,"crossing cue has a real visible bridge or arch source")
	deadline=Time.get_ticks_msec()+14000
	while fposmod(demo.music._playback_clock(),12.)>.12 and Time.get_ticks_msec()<deadline:await process_frame
	_check(fposmod(demo.music._playback_clock(),12.)<.25,"simultaneous fixture starts before all four slots of an actual question bar")
	trace.clear();_sample();trace.clear()
	var before:Array=[demo.music._cafe_cues,demo.music.bakery_cues.cues,demo.music.reply.calls,demo.music._travel_cues,demo.music.bakery_cues.skipped,demo.music.reply.skipped,demo.music.reply.answers]
	var recorder:=AudioEffectRecord.new();recorder.format=AudioStreamWAV.FORMAT_16_BITS;AudioServer.add_bus_effect(0,recorder);recorder.set_recording_active(true)
	var supply:Dictionary=demo.state.bakery_supply.get("h2",{"stock":0,"produced":0,"served":0})
	supply.produced=int(supply.produced)+1;demo.state.bakery_supply.h2=supply
	_check(demo.music.queue_bakery_cue("baked","h2"),"one controlled production counter transition queues a real bakery reward")
	if not site.is_empty():demo.music.queue_travel("validation/walker",site.kind,site.id,site.at)
	await _frames(5.65)
	var selected:Dictionary={}
	for row:Dictionary in trace:
		for category:String in ["cafe_flute","bakery_baked","reply_","travel_"]:
			if row.key.begins_with(category) and not selected.has(category):selected[category]=row
	facts.micro_events=selected;facts.trace=trace.duplicate(true)
	facts.crossing_site=site
	_check(selected.size()==4,"all four simultaneous service families actually play through the production short pool")
	_check(selected.get("cafe_flute",{}).get("slot",-1)==4 and selected.get("bakery_baked",{}).get("slot",-1)==6 and selected.get("reply_",{}).get("slot",-1)==8 and selected.get("travel_",{}).get("slot",-1)==12,"actual PCM playback lands at slots 4, 6, 8 and 12")
	_check(demo.music.bakery_cues.skipped==before[4] and demo.music.reply.skipped==before[5],"valid simultaneous bakery and duet events lose zero rewards to other foreground cues")
	_check(demo.music.reply.calls==before[2]+1 and demo.music.reply.answers==before[6]+1 and demo.state.district_answers.size()>0,"the completed real question and answer record the original single district reward")
	var merged:int=demo.music.bakery_cues.coalesced
	demo.state.bakery_supply.h2.produced+=1
	_check(demo.music.queue_bakery_cue("baked","h2") and demo.music.bakery_cues.coalesced==merged+1 and demo.music.bakery_cues.report().pending.is_empty(),"another real counter transition in the same district coalesces during the six-second sound window")
	recorder.set_recording_active(false);var wave:=recorder.get_recording();var peak:=0.
	if wave!=null:
		var pcm:PackedByteArray=wave.data
		for i in range(0,pcm.size()-1,2):peak=maxf(peak,absf(pcm.decode_s16(i)/32768.))
		_check(wave.save_to_wav(OUT+"/实际微拍混音.wav")==OK and peak>.0001 and peak<.99,"actual Master recording is audible and unclipped")
	else:_check(false,"actual Master recorder returns audio")
	facts.recorded_peak=peak
	facts.absolute_peak_bound=demo.music.audio_report.mix_peaks.absolute_stereo_with_four_short_voices
	facts.reserved_headroom_db=demo.music.ATTENTION_HEADROOM_DB
	_check(float(facts.absolute_peak_bound)*db_to_linear(maxf(0.,2.+demo.music.ATTENTION_HEADROOM_DB))<1.,"reserved long-stem headroom keeps the two-decibel overview lift inside the original absolute PCM peak bound")
	for i in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,i)==recorder:AudioServer.remove_bus_effect(0,i)
	await _capture("01_街坊错峰短句")
	_camera(55.);await _frames(.25);var macro_trace:=trace.size();await _frames(3.1)
	var quiet:=true
	for row:Dictionary in trace.slice(macro_trace):
		if row.key.begins_with("cafe_") or row.key.begins_with("bakery_") or row.key.begins_with("travel_"):quiet=false
	_check(demo.music.attention.report().mode=="SYMPHONY" and quiet,"wide overview stops new ordinary individual cues")
	_camera(18.);demo.select_tool(4);await _frames(1.3)
	var h:Dictionary=demo.state.houses[demo.state._house_index("h1")];var top:=0
	for cell:Dictionary in h.cells:top=maxi(top,int(cell.level))
	var at:Vector2=demo.camera.unproject_position(Vector3(h.origin[0],float(h.get("base_y",0.))+(top+1)*1.7+.45,h.origin[1]))
	var serial:int=demo.music._pluck_serial;await _click(at);await _frames(.24)
	_check(demo.music._pluck_serial>serial and demo.music.attention.report().mode=="SCULPTING","actual purpose-tool mouse click enters sculpting and plays the queued house note")
	await _frames(.85)
	_check(demo.music.attention.backing_duck_db<-4.1,"actual long stems smoothly duck by 4.2 dB during fingertip editing")
	var visual:Dictionary=demo.music.resonance_state()
	_check(visual.lead_id=="" and visual.chorus_ids.is_empty(),"sculpting suppresses secondary long-track window flashes")
	await _capture("02_指尖建造让位")
	demo.music.play_house("h1");demo.music.set_muted(true)
	_check(demo.music.attention.report().arp_pending==0 and demo.music.attention.report().events_pending==0,"mute clears pending house and city notes immediately")
	demo.music.set_muted(false);demo.music.restore_city_transport({"phase":"idle"})
	var after:Array=[]
	for key:String in demo.music.STEMS:after.append([demo.music._players[key].get_instance_id(),demo.music._original_streams[key].get_instance_id()])
	for player:AudioStreamPlayer in demo.music._effects:after.append(player.get_instance_id())
	_check(after==identities and demo.music._players.size()==12 and demo.music._effects.size()==4 and demo.music.spatial.report().bus_count==6,"fixed 12 long players, 4 short players, original bank resources and 6 buses retain identity while baked textures can change")
	var filters:=true
	for row:Dictionary in demo.music.spatial._filters.values():filters=filters and is_equal_approx(row.filter.cutoff_hz,1600.)
	_check(filters,"remote milestone routing uses 1600 Hz filtering without adding buses")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal save bytes remain untouched")
	facts.attention=demo.music.attention.report();facts.short_pool=demo.music._effects.size()
	var report:Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("ATTENTION_LIVE ",JSON.stringify(report))
	demo.queue_free();await process_frame;demo=null;await process_frame;await create_timer(.15).timeout;quit(0 if failures.is_empty() else 1)
