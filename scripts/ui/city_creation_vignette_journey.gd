extends Node
const Vignettes=preload("res://scripts/world/city_creation_vignettes.gd")
const Receipts=preload("res://scripts/world/city_creation_harmony_receipts.gd")
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
const GlowMaterial=preload("res://scripts/visual/city_creation_metronome_material.gd")
const Geometry=preload("res://scripts/visual/city_creation_metronome_geometry.gd")
var demo:Node
var paper:PanelContainer
var heading:Label
var detail:Label
var progress:Label
var marker:MeshInstance3D
var epoch:Variant=null
var elapsed:=0.
var wait_next:=0.
var completions:Array[Dictionary]=[]
var look_until:=0
var context:Array=[]

func sync_context()->bool:
	if demo==null:return true
	var free:bool=demo.state.CreationPolicy.is_free(demo.state)
	var key:=[demo.state.get_instance_id(),demo.state._wish_epoch,free]
	if key!=context:
		context=key;elapsed=0.;wait_next=0.;look_until=0;epoch=null;completions.clear()
		preload("res://scripts/world/city_creation_vignette_site_worker.gd").invalidate(self)
		if paper!=null:paper.hide()
		if marker!=null:marker.hide()
		if demo.has_meta("juice_feedback"):demo.get_meta("juice_feedback").cancel_task_feedback()
	return free
func setup(owner:Node,parent:Control)->void:
	demo=owner;name="VignetteJourney";demo.add_child(self);demo.set_meta("vignette_journey",self)
	paper=PanelContainer.new();paper.name="WoodlandVignette";paper.theme=UI.make_theme();paper.custom_minimum_size.x=286;paper.add_theme_stylebox_override("panel",UI.panel(12));parent.add_child(paper)
	var column:=VBoxContainer.new();column.add_theme_constant_override("separation",6);paper.add_child(column)
	heading=Label.new();heading.text="林间来信";heading.add_theme_font_size_override("font_size",14);heading.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;column.add_child(heading)
	detail=Label.new();detail.custom_minimum_size.x=260;detail.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;detail.add_theme_font_size_override("font_size",12);detail.add_theme_color_override("font_color",UI.MUTED);column.add_child(detail)
	progress=Label.new();progress.add_theme_font_size_override("font_size",12);column.add_child(progress)
	var row:=HBoxContainer.new();column.add_child(row)
	var look:=Button.new();look.text="看看这片空地";look.pressed.connect(look_at);row.add_child(look)
	var refresh:=Button.new();refresh.name="RefreshVignette";refresh.text="换一页";refresh.pressed.connect(replace);row.add_child(refresh)
	marker=MeshInstance3D.new();marker.name="VignetteTarget";marker.mesh=Geometry.ring(2.2,.065);marker.material_override=GlowMaterial.glow();marker.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF;demo.add_child(marker);marker.hide()
	parent.resized.connect(fit);fit();poll()
	preload("res://scripts/ui/city_creation_letter_fold.gd").setup(self)
func fit()->void:
	var folded:bool=paper.get_meta("letter_folded",true)
	paper.size=Vector2(184,38) if folded else Vector2(286,170);paper.position=Vector2(16,paper.get_parent().size.y-(156. if folded else 332.))
func replace()->void:
	if sync_context():return
	if demo.gallery.busy or demo.edit_pending():return
	if not preload("res://scripts/world/city_creation_vignette_site_worker.gd").available(self,true):return
	if Vignettes.offer(demo.state):wait_next=0.;refresh()
func look_at()->void:
	if demo==null or marker==null:return
	sync_context()
	var quest:Dictionary=demo.state.harmony_journey.get("active_vignette",{})
	if quest.is_empty():return
	var at:=Vector2(quest.anchor[0],quest.anchor[1]);demo.focus=Vector3(at.x,demo.state.ground_height(at)+.7,at.y);demo._update_camera()
	marker.position=Vector3(at.x,demo.state.ground_height(at)+.06,at.y);marker.material_override.set_shader_parameter("metronome_strength",.7)
	look_until=Time.get_ticks_msec()+8000
func poll()->void:
	if sync_context():return
	if demo.gallery.busy or demo.edit_pending():return
	Receipts.initialize(demo.state)
	var key:=[demo.state.get_instance_id(),demo.state._wish_epoch]
	if key!=epoch:epoch=key;wait_next=0.
	if demo.state.harmony_journey.get("active_vignette",{}).is_empty():
		if wait_next<=0. and preload("res://scripts/world/city_creation_vignette_site_worker.gd").available(self):Vignettes.offer(demo.state)
	else:
		var earned:=Vignettes.complete(demo.state,demo.life.connected_houses)
		if not earned.is_empty():
			completions.append(earned)
			if completions.size()>64:completions.pop_front()
			wait_next=8.;demo._message("这片街坊留下了永久回响 · +%d ♪"%int(earned.xp))
			if demo.has_meta("juice_feedback"):demo.get_meta("juice_feedback").enqueue({"kind":"vignette","source":earned.members[0],"members":earned.members,"label":"林间永久回响"})
	refresh()
func refresh()->void:
	if sync_context():return
	var quest:Dictionary=demo.state.harmony_journey.get("active_vignette",{})
	if quest.is_empty():heading.text="林间来信 · 回响已留下";detail.text="慢慢欣赏片刻，下一页会再来。";progress.text="没有倒计时，也不必赶路。";return
	var template:=Vignettes.template(str(quest.id));var status:=Vignettes.candidates(demo.state,demo.life.connected_houses)
	var second:=int(quest.get("tier",1))>=2
	heading.text=("二阶 · " if second else "")+str(template.title)
	detail.text=str(template.prompt)
	var reward:=int(ceil(float(template.reward_xp)*(1.5 if second else 1.)))
	progress.text="%d / %d · +%d ♪ · 永久街坊回响"%[mini(int(status.count),int(status.needed)),int(status.needed),reward]
	paper.tooltip_text=str(template.reward_desc)+("\n二阶传世风物诗：更高共鸣与街坊领奏+0.8dB。" if second else "\n街坊领奏+0.6dB；再次完成本主题可升格二阶。")
	var at:=Vector2(quest.anchor[0],quest.anchor[1]);marker.position=Vector3(at.x,demo.state.ground_height(at)+.06,at.y)
func _process(delta:float)->void:
	if sync_context():
		elapsed=0.;wait_next=0.
		if paper!=null:paper.hide()
		if marker!=null:marker.visible=Time.get_ticks_msec()<look_until and not demo.guide.visible() and not demo.gallery.panel.visible and not demo.state.harmony_journey.get("active_vignette",{}).is_empty()
		if marker!=null and marker.visible:marker.material_override.set_shader_parameter("metronome_strength",.55+.2*sin(Time.get_ticks_msec()*.0015))
		return
	wait_next=maxf(0.,wait_next-delta);elapsed+=delta
	paper.visible=false
	if demo.has_meta("era_ceremony") and not demo.get_meta("era_ceremony").active.is_empty():paper.hide()
	if demo.has_meta("inspiration_draft") and demo.get_meta("inspiration_draft").paper.visible:paper.hide()
	if not demo.spatial_popover.target_house_id.is_empty():paper.hide()
	if demo.tactile_dock!=null and demo.tactile_dock.popup.is_visible_in_tree():paper.hide()
	marker.visible=Time.get_ticks_msec()<look_until and not demo.guide.visible() and not demo.gallery.panel.visible and not demo.state.harmony_journey.get("active_vignette",{}).is_empty()
	marker.material_override.set_shader_parameter("metronome_strength",.55+.2*sin(Time.get_ticks_msec()*.0015))
	if elapsed>=1.:elapsed=0.;poll()

func continue_history()->Dictionary:
	sync_context()
	if demo==null or demo.gallery.busy or demo.edit_pending():return {"status":"waiting"}
	var city:RefCounted=demo.state;var quest:Dictionary=city.harmony_journey.get("active_vignette",{}).duplicate(true)
	if quest.is_empty():return {"status":"empty"}
	if city._region_network_revision!=city.revision:return {"status":"waiting","quest":quest}
	var status:=Vignettes.candidates(city,demo.life.connected_houses)
	var earned:Dictionary=Vignettes.complete(city,demo.life.connected_houses) if int(status.count)>=int(status.needed) and not status.members.is_empty() else {}
	if not earned.is_empty():
		completions.append(earned);demo._message("旧来信回响已领取 · +%d ♪"%int(earned.xp))
	return {"status":"claimed" if not earned.is_empty() else "progress","quest":quest,"progress":status,"reward":earned}
