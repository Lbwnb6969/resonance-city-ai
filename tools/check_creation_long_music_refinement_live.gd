extends "res://tools/check_creation_refinement_roles_live.gd"
const Form=preload("res://scripts/audio/city_creation_long_form.gd")
func fixture()->RefCounted:
 var city:=State.new();city.initialize_empty()
 for z:float in [-18.,-13.,-8.]:
  for x:float in [-27.,-22.5,-18.,-13.5]:city.add_house(Vector2(x,z))
  city.add_road([Vector2(-30,z+1.55),Vector2(-11,z+1.55)] as Array[Vector2])
 city.add_road([Vector2(-30,-16.45),Vector2(-30,-6.45)] as Array[Vector2]);city.set_house_role("h1","bakery");city.set_house_role("h2","workshop");city.set_house_role("h3","garden_cafe")
 city.add_cell("h4",0,0,1);city.add_cell("h5",0,0,1);return city
func run()->void:
 var no_recording:bool="--no-recording" in OS.get_cmdline_user_args();var duration:=34. if no_recording else 181.
 OUT="res://验证记录/RF07/live"
 for arg:String in OS.get_cmdline_user_args():
  if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
 DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
 root.close_requested.connect(func()->void:print("LONG_MUSIC_NATIVE_CLOSE_REQUEST"))
 var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
 print("LONG_MUSIC_BOOT")
 demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();print("LONG_MUSIC_READY")
 var ids:Array=[]
 for p:AudioStreamPlayer in demo.music._players.values():ids.append(p.get_instance_id())
 print("LONG_MUSIC_PREPARE_FIXTURE");var city:=fixture();print("LONG_MUSIC_OPEN ",city.houses.size())
 await show(city,Vector2(-21,-12),"三分钟真实续玩");print("LONG_MUSIC_PLAYBACK");demo.get_meta("inspiration_draft").postponed=true;demo.get_meta("inspiration_draft").display();demo.life.set_process(true);demo.select_tool(0);demo.zoom=26.;demo._update_camera()
 await capture("day_before_recording");demo._set_light_phase(2);await capture("night_before_recording");demo._set_light_phase(0)
 if not no_recording:root.mode=Window.MODE_MINIMIZED
 var recorder:=AudioEffectRecord.new()
 if not no_recording:AudioServer.add_bus_effect(0,recorder);recorder.set_recording_active(true)
 var began:=Time.get_ticks_msec();var start:float=demo.music._playback_clock();var samples:Array=[];var passages:Dictionary={};var seen:=-1;var edits:=0;var frames:Array=[];var last:=Time.get_ticks_usec();var added_id:=""
 while Time.get_ticks_msec()-began<int(duration*1000.):
  await process_frame
  var now:=Time.get_ticks_usec();frames.append((now-last)/1000.);last=now
  var elapsed:float=(Time.get_ticks_msec()-began)/1000.;var clock:float=demo.music._playback_clock();var second:=floori(elapsed)
  if second!=seen:
   if second%15==0:print("LONG_MUSIC_SECONDS ",second)
   seen=second;var score:Dictionary=demo.music.emergence.score;var values:Dictionary={};var error:=0.
   for track:String in demo.music._players:
    var player:AudioStreamPlayer=demo.music._players[track];var w:float=demo.music._long_acoustic_weight(track)
    var expected:float=demo.music.target_gain_db(track,false)+linear_to_db(maxf(w,.0000001))+demo.music.attention.backing_duck_db+demo.music.ATTENTION_HEADROOM_DB+demo.music.Experience.lift(demo.music)
    values[track]={"db":player.volume_db,"target":expected,"shade":Form.gain(track,score,clock)}
    if w>0. and float(score.targets.get(track,-60.))> -50.:error=maxf(error,absf(player.volume_db-expected))
   var form:=Form.view(clock,score);passages[str(form.passage)]=true
   samples.append({"elapsed":elapsed,"clock":clock,"form":form,"values":values,"maximum_lag_db":error,"source":demo.music.daily_source(),"variants":demo.music._variation_active.duplicate(),"purchases":demo.state.life_progress.purchases,"tea":demo.state.life_progress.tea_parties})
  if edits==0 and elapsed>(5. if no_recording else 30.):
   var added:Dictionary=demo.state.add_house(Vector2(-27,-1));added_id=str(added.house_id);demo._after_edit(added,"room",true,added_id);edits=1
  elif edits==1 and elapsed>(12. if no_recording else 60.):
   await key(KEY_Z,true);check(demo.state._house_index(added_id)<0,"native Undo while actual music continues");edits=2
  elif edits==2 and elapsed>(19. if no_recording else 90.):
   await key(KEY_Y,true);check(demo.state._house_index(added_id)>=0,"native Redo while actual music continues");demo.zoom=14.;demo._set_light_phase(2);demo._update_camera();edits=3
  elif edits==3 and elapsed>(26. if no_recording else 125.):
   demo.zoom=38.;demo._set_light_phase(0);demo._update_camera();edits=4
 var wave:AudioStreamWAV;var peak:=0.;var clipped:=0
 if not no_recording:print("LONG_MUSIC_STOP_RECORDING");recorder.set_recording_active(false);wave=recorder.get_recording()
 if wave!=null:
  wave.save_to_wav(OUT+"/181s_continuous_Master.wav");print("LONG_MUSIC_WAVE_SAVED ",wave.get_length())
  var pcm:PackedByteArray=wave.data
  for i in range(pcm.size()/2):
   var value:=absi(pcm.decode_s16(i*2));peak=maxf(peak,value/32768.);clipped+=int(value>=32767)
 for i in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
  if AudioServer.get_bus_effect(0,i)==recorder:AudioServer.remove_bus_effect(0,i)
 if not no_recording:
  check(wave!=null and wave.get_length()>175. and peak>.01 and clipped==0,"three-minute real continuous audible unclipped Master")
  check(passages.size()==6 and demo.music._playback_clock()-start>175.,"actual production transport reaches every long-form passage")
  check(samples.any(func(s):return s.form.passage==4 and s.values.values().any(func(v):return float(v.shade)< -7.9)),"actual native quiet passage attenuates accompaniment without auto-lift cancelling it")
 else:check(demo.music._playback_clock()-start>30. and samples.size()>=30,"actual production transport and runtime gain diagnostics continue through edits; recording deferred by user")
 check(samples.all(func(s):return s.source.has("track") and is_zero_approx(float(s.values[s.source.track].shade))),"every sampled actual attributed lead retains zero long-form attenuation")
 check(int(demo.state.life_progress.purchases)>0 and (no_recording or int(demo.state.life_progress.tea_parties)>0),"real attended production continues during actual playback")
 var saved:Dictionary=demo.state.snapshot();var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok and cold.snapshot()==saved,"three-minute earned city cold roundtrip")
 frames.sort();facts.long_session={"wall_seconds":(Time.get_ticks_msec()-began)/1000.,"audio_seconds":wave.get_length() if wave!=null else 0.,"peak":peak,"clipped":clipped,"passages":passages,"samples":samples,"p95_frame_ms":frames[int(frames.size()*.95)],"max_frame_ms":frames[-1]}
 FileAccess.open(OUT+"/long_music_diagnostics.json",FileAccess.WRITE).store_string(JSON.stringify(facts.long_session,"\t"))
 facts.recording={"deferred_by_user":true} if no_recording else {"ok":wave!=null and clipped==0,"seconds":wave.get_length() if wave!=null else 0.,"peak":peak,"clipped_samples":clipped}
 root.mode=Window.MODE_WINDOWED;await create_timer(.3).timeout;await capture("continuous_session_completed")
 await finish(personal,ids)
