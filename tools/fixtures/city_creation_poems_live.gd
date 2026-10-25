extends RefCounted
const Fixture=preload("res://tools/fixtures/city_creation_poem_fixture.gd")
const Vignettes=Fixture.Vignettes
const Probe=preload("res://tools/fixtures/city_creation_audio_probe.gd")
var OUT="res://验证记录/M18/十二风物诗"
var demo:Node3D
var tree:SceneTree
var checks:Dictionary={}
var facts:Dictionary={}
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy or demo.music._loading:await tree.process_frame
	for i in range(10):await tree.process_frame
func show(city:RefCounted,title:String)->void:
	var at:Vector2=Vector2(city.harmony_journey.active_vignette.anchor[0],city.harmony_journey.active_vignette.anchor[1])
	await demo.gallery._open_chosen({"ok":true,"id":title,"title":title,"world":city.snapshot(),"view":{"focus":[at.x,.8,at.y],"yaw":.34,"pitch":.9,"zoom":24.,"evening":false,"light_phase":0}})
	await settle();demo.life.set_process(false);demo.select_tool(4);demo.spatial_popover.close();demo.journal.close_panel()
	checks["load_"+title]=demo.state.houses==city.houses and demo.state.harmony_journey.active_vignette.id==city.harmony_journey.active_vignette.id
func capture(label:String,phases:Array=[0],low:bool=false)->void:
	var pitch:float=demo.pitch
	for phase:int in phases:
		demo._set_light_phase(phase)
		for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
			tree.root.size=size
			await tree.process_frame;await tree.process_frame;await postpone()
			if low:demo.pitch=deg_to_rad(10.);demo._update_camera()
			for i in range(12):await tree.process_frame
			demo.toast.hide();demo.toast_time=0.;await RenderingServer.frame_post_draw
			tree.root.get_texture().get_image().save_png(OUT+"/"+label+"_"+str(phase)+"_"+str(size.x)+".png")
	demo.pitch=pitch;demo._update_camera()
func postpone()->void:
	var draft:Node=demo.get_meta("inspiration_draft");draft.poll()
	if not draft.paper.visible:return
	await tree.process_frame;await tree.process_frame
	var at:Vector2=draft.paper.find_child("PostponeDraft",true,false).get_global_rect().get_center()
	var move:=InputEventMouseMotion.new();move.position=at;move.global_position=at;tree.root.push_input(move);await tree.process_frame
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.button_index=MOUSE_BUTTON_LEFT;event.position=at;event.global_position=at;event.pressed=down;tree.root.push_input(event);await tree.process_frame
	checks.draft_postponed=bool(checks.get("draft_postponed",true)) and not draft.paper.visible
func construct(index:int)->Array[Dictionary]:
	var result:=Fixture.construct(demo.state,false)
	if result.is_empty() or not result.all(func(r):return r.ok):return result
	demo._after_edit(result[-1],"room",true);await settle();demo.life.set_process(false)
	if index==5:
		for i in range(1600):
			if Vignettes.candidates(demo.state,demo.life.connected_houses).count>0 or not demo.state.harmony_journey.get("completed_vignettes",{}).is_empty():break
			demo.life._process(.05)
			if i%8==0:await tree.process_frame
	return result
func run(owner:Node3D)->Dictionary:
	if owner.has_meta("validation_out_dir"):OUT=str(owner.get_meta("validation_out_dir"))+"/poems"
	demo=owner;tree=demo.get_tree();DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	checks.particles_quiet=demo.town.quality_visual.particles.all(func(p):return not p.visible and not p.emitting)
	var observer:Node=demo.get_meta("vignette_journey");var voices:Array=[]
	var personal:=FileAccess.get_file_as_bytes(Fixture.State.DEFAULT_PATH) if FileAccess.file_exists(Fixture.State.DEFAULT_PATH) else PackedByteArray()
	for node:Node in demo.music.get_children()+demo.ambience.get_children():voices.append(node.get_instance_id())
	for index in range(4,12):
		var city:=Fixture.start(index);var id:=str(Fixture.Catalog.TEMPLATES[index].id);await show(city,id);observer.poll()
		checks["offer_"+id]=demo.state.harmony_journey.active_vignette.id==id and not observer.detail.text.is_empty()
		await capture(id+"_来信")
		checks["paper_"+id]=observer.paper.get_global_rect().end.y<demo.tactile_dock.bubble_rows.get_global_rect().position.y and observer.detail.get_line_count()<=observer.detail.get_visible_line_count()
		var started:int=observer.completions.size();var built:=await construct(index)
		checks["build_"+id]=not built.is_empty() and built.all(func(r):return r.ok)
		observer.poll();await postpone()
		checks["completed_"+id]=int(demo.state.harmony_journey.get("completed_vignettes",{}).get(id,0))==1 and observer.completions.size()==started+1
		if observer.completions.size()==started:continue
		var reward:Dictionary=observer.completions[-1];facts[id]=reward.duplicate(true)
		if index==4:
			demo.town.quality_visual.flash(demo.town,[{"house_id":reward.members[0]}])
			checks.particles_real_burst=demo.town.quality_visual.particles.any(func(p):return p.visible and p.emitting)
			await tree.create_timer(1.6).timeout
			checks.particles_retired=demo.town.quality_visual.particles.all(func(p):return not p.visible)
		checks["valid_"+id]=Fixture.State.new().restore(JSON.parse_string(JSON.stringify(demo.state.snapshot()))).ok
		checks["real_members_"+id]=not reward.members.is_empty() and reward.members.all(func(h):return demo.life.house_connected(str(h)))
		await capture(id+"_成景",[0,1,2])
		if index in [4,11]:await capture(id+"_低视角",[0,2],true)
		var paid:Dictionary=demo.state.harmony_journey.completed_vignettes.duplicate();var xp:int=demo.state.harmony_journey.harmony_xp
		demo._after_edit(demo.state.undo(),"history",true);await settle();observer.poll();demo._after_edit(demo.state.redo(),"history",true);await settle();observer.poll()
		checks["no_farm_"+id]=demo.state.harmony_journey.completed_vignettes==paid and demo.state.harmony_journey.harmony_xp==xp
	var repeat:=Fixture.start(5);await show(repeat,"second_tier_pond")
	await construct(5);observer.poll();await postpone();var first:Dictionary=observer.completions[-1]
	Vignettes.offer(demo.state,str(Fixture.Catalog.TEMPLATES[5].id));observer.refresh();await capture("二阶来信")
	checks.second_letter=int(demo.state.harmony_journey.active_vignette.get("tier",0))==2 and observer.heading.text.begins_with("二阶")
	await construct(5);observer.poll();await postpone();var second:Dictionary=observer.completions[-1]
	checks.second_reward=second.tier==2 and second.xp>first.xp and is_equal_approx(Vignettes.music(demo.state,second.members),.8)
	facts.second={"first":first,"second":second}
	await capture("二阶池畔",[0,1,2])
	var deadline:=Time.get_ticks_msec()+4000
	while float(demo.music.emergence.score.get("phrase_tide",{}).get("vignette_db",0.))<.79 and Time.get_ticks_msec()<deadline:await tree.process_frame
	checks.actual_second_lead=float(demo.music.emergence.score.get("phrase_tide",{}).get("vignette_db",0.))>=.79
	var saved:Dictionary=await demo.gallery._capture("二阶风物诗续玩","poem_tier2");var read:Dictionary=demo.gallery.library.read(str(saved.get("id",""))) if saved.ok else {}
	checks.gallery_second=saved.ok and read.get("ok",false) and Fixture.State.new().restore(read.world).ok
	if read.get("ok",false):
		var paid:Dictionary=demo.state.harmony_journey.completed_vignettes.duplicate();await demo.gallery._open_chosen(read);await settle();demo.life.set_process(false);observer.poll()
		checks.reload_quiet=demo.state.harmony_journey.completed_vignettes==paid and is_equal_approx(Vignettes.music(demo.state,second.members),.8)
	facts.audio=await Probe.record(OUT+"/Master.wav",3.2);checks.unclipped=facts.audio.ok
	var current:Array=[]
	for node:Node in demo.music.get_children()+demo.ambience.get_children():current.append(node.get_instance_id())
	checks.fixed_pool=current==voices and demo.music._players.size()==12 and demo.music._effects.size()==4
	checks.personal_untouched=personal==(FileAccess.get_file_as_bytes(Fixture.State.DEFAULT_PATH) if FileAccess.file_exists(Fixture.State.DEFAULT_PATH) else PackedByteArray())
	var result:={"checks":checks,"facts":facts,"ok":checks.values().all(func(v):return v)};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("POEMS_LIVE ",JSON.stringify(result));return result

