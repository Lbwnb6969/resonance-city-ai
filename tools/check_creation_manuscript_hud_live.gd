extends "res://tools/check_creation_music_experience_live.gd"
const Tactile=preload("res://scripts/ui/city_creation_tactile_ui_theme.gd")
func click(control:Control)->void:
 var at:=control.get_global_rect().get_center()
 for pressed:bool in [true,false]:
  var e:=InputEventMouseButton.new();e.position=at;e.global_position=at;e.button_index=MOUSE_BUTTON_LEFT;e.pressed=pressed;root.push_input(e);await process_frame
func capture(label:String)->void:
 await create_timer(.26).timeout
 demo.toast_time=0.;demo.toast.hide();await super.capture(label)
func run()->void:
 OUT="res://验证记录/UI01/live"
 for arg:String in OS.get_cmdline_user_args():
  if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
 DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
 var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
 demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();demo.life.set_process(false)
 var ids:Array=[]
 for player:AudioStreamPlayer in demo.music._players.values():ids.append(player.get_instance_id())
 check(DisplayServer.get_name()!="headless","real OpenGL manuscript HUD")
 var city:=State.new();city.initialize();await show(city,Vector2(-5,0),"manuscript");demo.life.set_process(false)
 var draft=demo.get_meta("inspiration_draft");draft.postponed=true;draft.display()
 var views:Array=[]
 var coverage:Array=[]
 for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
  root.size=size;await settle()
  for phase in range(3):
   demo._set_light_phase(phase);demo.intuitive_guidance.update_guidance(0.);await settle()
   var g=demo.intuitive_guidance
   check(g.banner.get_theme_stylebox("normal")==Tactile.whisper_pill_style(phase==2),"cached adaptive parchment "+str(size.x)+str(phase))
   check(g.banner.text.length()<=26 and g.banner.size.y<=36.,"one-line concise whisper "+str(size.x)+str(phase))
   check(not draft.progress.is_visible_in_tree() and not demo.info.is_visible_in_tree() and not demo.subtitle_label.is_visible_in_tree(),"raw XP and city counts absent from permanent HUD")
   var reserved:Array=[demo.score_ribbon.get_global_rect(),demo.sundial_hud.get_global_rect()]
   check(not reserved[0].intersects(reserved[1]),"separate score and circular actions")
   check(not g.banner.is_visible_in_tree() or reserved.all(func(r):return not r.intersects(g.banner.get_global_rect())),"whisper clears both top edge groups")
   views.append({"size":size,"phase":phase,"ribbon":reserved[0],"actions":reserved[1],"whisper":g.banner.get_global_rect(),"caption":g.banner.text})
   var rects:Array=[reserved[0],reserved[1],demo.ui_layer.get_child(0).get_node("Toolbar").get_global_rect()]
   var letter=demo.get_meta("vignette_journey")
   if letter.paper.is_visible_in_tree():rects.append(letter.paper.get_global_rect())
   if g.banner.is_visible_in_tree():rects.append(g.banner.get_global_rect())
   if draft.badge.is_visible_in_tree():rects.append(draft.badge.get_global_rect())
   for label:Label in demo.whisper_keycaps.get_children():
    var extent:=label.get_theme_default_font().get_string_size(label.text,HORIZONTAL_ALIGNMENT_LEFT,-1,label.get_theme_font_size("font_size"))
    rects.append(Rect2(label.global_position,Vector2(minf(extent.x,label.size.x),label.size.y)))
   var painted:=0
   for y in range(0,size.y,2):
    for x in range(0,size.x,2):
     if rects.any(func(r):return r.has_point(Vector2(x,y))):painted+=4
   var occupied:=float(painted)/float(size.x*size.y);coverage.append({"width":size.x,"phase":phase,"occupied":occupied,"rectangles":rects})
   check(occupied<.08,"permanent HUD under8percent including active hint and folded letter")
   await capture("hud_%d_phase%d"%[size.x,phase])
 var muted:bool=demo.music.muted;await click(demo.sundial_hud.fork)
 check(demo.music.muted!=muted,"native tuning-fork click keeps real mute action");await click(demo.sundial_hud.fork)
 var old_phase:int=demo.light_phase;await click(demo.sundial_hud.sundial)
 check(demo.light_phase!=old_phase,"native sundial click changes actual lighting")
 var before:int=demo.score_ribbon.juice_hits;demo.score_ribbon.receive_juice("native_gate");await create_timer(.30).timeout
 check(demo.score_ribbon.juice_hits==before+1 and demo.score_ribbon.juice_energy<.05,"quarter-second score-string response settles")
 facts.coverage=coverage;facts.layout=views;facts.recording=await Probe.record(OUT+"/Master.wav",4.3);check(facts.recording.ok,"unchanged real choir has no clipping")
 await finish(personal,ids)
