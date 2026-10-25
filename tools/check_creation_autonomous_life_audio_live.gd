extends "res://tools/check_creation_music_experience_live.gd"
## Observe real simulation callbacks and actual mixer ownership; never inject cue events.
const Span=preload("res://tools/fixtures/city_creation_recording_span.gd")
var observations:Array=[]
func run()->void:
 OUT="res://验证记录/M51/autonomous24m"
 for arg:String in OS.get_cmdline_user_args():
  if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
 DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
 var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
 demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();demo.life.set_process(false)
 var ids:Array=[]
 for player:AudioStreamPlayer in demo.music._players.values():ids.append(player.get_instance_id())
 check(DisplayServer.get_name()!="headless","native OpenGL autonomous evidence")
 var recording:=Span.start()
 for kind:String in (["bridge"] if "--bridge-only" in OS.get_cmdline_user_args() else ["bridge","stepping"]):
  var city:=State.new();check(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/"+("四库共鸣交响大城样例.json" if kind=="bridge" else "汀步河湾样例.json")))).ok,"real authored crossing city "+kind)
  await show(city,Vector2.ZERO,kind)
  var site:Dictionary={};var best:=INF
  for candidate:Dictionary in demo.life.travel.sites.values():
   if str(candidate.kind)!=kind:continue
   var score:=INF
   for row:Dictionary in demo.life.residents:
    var route:Array=row.route;var distance:=0.
    for i in range(1,route.size()):
     var a:=Vector2(route[i-1].x,route[i-1].z);var b:=Vector2(route[i].x,route[i].z)
     if Geometry2D.get_closest_point_to_segment(candidate.at,a,b).distance_to(candidate.at)<.5:score=minf(score,distance+a.distance_to(candidate.at))
     distance+=a.distance_to(b)
   if score<best:best=score;site=candidate
  check(not site.is_empty(),"real crossing geometry "+kind)
  if site.is_empty():continue
  demo.focus=Vector3(site.at.x,.8,site.at.y);demo.zoom=24.;demo._update_camera();await settle()
  observations=[]
  demo.life.travel_callback=func(actor,tag,source,at):
   observations.append({"actor":actor,"kind":tag,"source":source,"at":at,"life_time":demo.life.time,"clock":demo.music._playback_clock(),"zoom":demo.zoom})
   demo.music.queue_travel(actor,tag,source,at)
  var before:int=demo.music._travel_cues;demo.life.set_process(true)
  var heard:Dictionary={};var deadline:=Time.get_ticks_msec()+65000
  while Time.get_ticks_msec()<deadline:
   await process_frame
   var actual:Dictionary=demo.music.travel_music_report()
   if actual.audible and actual.kind==kind and observations.any(func(e):return e.kind==kind and e.source==actual.source_id and e.actor==actual.actor_id):heard=actual.duplicate(true);break
  demo.life.set_process(false)
  check(not heard.is_empty() and demo.music._travel_cues>before,"autonomous actor sensor callback produces actual shared PCM at24m "+kind)
  check(observations.any(func(e):return e.kind==kind and str(e.actor).begins_with("resident/")),"real resident crossing observed "+kind)
  facts[kind]={"site":site,"earliest_route_distance":best,"observations":observations.duplicate(true),"heard":heard,"counter_before":before,"counter_after":demo.music._travel_cues,"zoom":demo.zoom}
  await capture(kind+"_autonomous24m")
 if "--bridge-only" in OS.get_cmdline_user_args():
  facts.recording=Span.finish(recording,OUT+"/bridge_Master.wav");check(facts.recording.ok,"actual bridge Master unclipped")
  facts.grid=demo.music.get_meta("cue_grid_events",[]).duplicate(true)
  await finish(personal,ids);return
 var cafe:=State.new();cafe.initialize();check(cafe.set_house_role("h4","garden_cafe").ok,"public garden cafe role")
 await show(cafe,Vector2(-5,3),"actual_cafe");demo.zoom=24.;demo._update_camera();await settle()
 # Simulate the real conserved bakery, purchases, routes and seating until a group arrives.
 # Real transport/mixer sampling then runs at wall-clock speed, without synthesized attendance.
 var ready:=false
 for i in range(6000):
  demo.life._process(.05)
  var view:Dictionary=demo.life.cafe.view()
  if view.values().any(func(row):return row.phase=="tea" and row.arrived>=2):ready=true;break
  if i%20==0:await process_frame
 var before:int=demo.music._cafe_cues;demo.life.set_process(true)
 var heard:=await wait_for(func():return demo.music._cafe_cues>before and demo.music.cafe_music_report().audible,10000)
 demo.life.set_process(false)
 var attendees:Array=[]
 for row:Dictionary in demo.life.residents:
  if row.get("cafe_visit",{}).get("phase","")=="seated":attendees.append({"id":row.home_id,"visit":row.cafe_visit.duplicate(true),"position":demo.life.citizen_position(row)})
 facts.cafe={"ready":ready,"heard":heard,"view":demo.life.cafe.view(),"attendees":attendees,"progress":demo.state.life_progress.duplicate(true),"bread":demo.state.bakery_supply.duplicate(true),"report":demo.music.cafe_music_report(),"zoom":demo.zoom,"counter_before":before,"counter_after":demo.music._cafe_cues}
 check(ready and heard and attendees.size()>=2 and int(demo.state.life_progress.purchases)>0,"real purchased bread and seated residents publish actual cafe PCM at24m")
 await capture("cafe_autonomous24m_1440");root.size=Vector2i(1024,768);await settle();await capture("cafe_autonomous24m_1024")
 facts.recording=Span.finish(recording,OUT+"/autonomous24m_Master.wav");check(facts.recording.ok,"actual autonomous Master contains no clipped samples")
 facts.grid=demo.music.get_meta("cue_grid_events",[]).duplicate(true)
 check(not facts.grid.is_empty() and facts.grid.all(func(e):return absf(e.onset/.1875-round(e.onset/.1875))<.00001 and e.delay>=0. and e.delay<.187501 and e.preroll>0.),"all sampled actual shared-pool onsets follow sixteenth-note grid")
 await finish(personal,ids)
