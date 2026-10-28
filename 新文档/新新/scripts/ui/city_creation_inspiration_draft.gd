extends Node
## Nonmodal, postponable city-owned drafts. World simulation never pauses.
const Journey=preload("res://scripts/world/city_creation_harmony_journey.gd")
const Rarity=preload("res://scripts/world/city_creation_draft_rarity.gd")
const Receipts=preload("res://scripts/world/city_creation_harmony_receipts.gd")
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
const TactileUI=preload("res://scripts/ui/city_creation_tactile_ui_theme.gd")
var demo:Node3D
var paper:Panel
var badge:Button
var title:Label
var leaves:HBoxContainer
var buttons:Dictionary={}
var epoch:Variant=null
var signature:Variant=null
var elapsed:=0.
var postponed:=false
var events:Array[Dictionary]=[]
var progress:ProgressBar
var cue_count:=0
var reroll_button:Button
func setup(owner:Node3D,parent:Control)->void:
	demo=owner;name="InspirationDraft";demo.add_child(self);demo.set_meta("inspiration_draft",self)
	badge=Button.new();badge.theme=UI.make_theme();badge.name="HarmonyProgress";badge.position=Vector2(24,66);badge.custom_minimum_size=Vector2(186,32)
	badge.pressed.connect(func()->void:postponed=false;refresh(true));parent.add_child(badge)
	progress=ProgressBar.new();progress.show_percentage=false;progress.mouse_filter=Control.MOUSE_FILTER_IGNORE;badge.add_child(progress)
	progress.set_anchors_and_offsets_preset(Control.PRESET_BOTTOM_WIDE);progress.offset_top=-4.;progress.offset_bottom=-1.;progress.offset_left=8.;progress.offset_right=-8.
	paper=Panel.new();paper.theme=UI.make_theme();paper.name="InspirationPaper";paper.add_theme_stylebox_override("panel",UI.panel(16));parent.add_child(paper);paper.hide()
	var column:=VBoxContainer.new();column.add_theme_constant_override("separation",12);paper.add_child(column);column.set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT);column.offset_left=16.;column.offset_top=16.;column.offset_right=-16.;column.offset_bottom=-16.
	var header:=HBoxContainer.new();column.add_child(header)
	title=Label.new();title.add_theme_font_size_override("font_size",20);title.add_theme_color_override("font_color",UI.INK);title.size_flags_horizontal=Control.SIZE_EXPAND_FILL;header.add_child(title)
	reroll_button=Button.new();reroll_button.name="RerollDraft";reroll_button.pressed.connect(reroll);header.add_child(reroll_button)
	var later:=Button.new();later.name="PostponeDraft";later.text="先收好 · 继续营造";later.pressed.connect(func()->void:postponed=true;paper.hide());header.add_child(later)
	leaves=HBoxContainer.new();leaves.add_theme_constant_override("separation",12);column.add_child(leaves)
	var foot:=Label.new();foot.text="手札永驻本城 · 可随时撤销重选 · 重复研习令余韵渐深"
	foot.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;foot.add_theme_font_size_override("font_size",12);foot.add_theme_color_override("font_color",UI.MUTED);column.add_child(foot)
	for overlay:Control in [demo.journal.scrollbook,demo.gallery.panel,demo.guide.panel]:overlay.visibility_changed.connect(display)
	parent.resized.connect(fit);fit();poll()
func fit()->void:
	var viewport:Vector2=paper.get_parent().size
	paper.size=Vector2(minf(840.,viewport.x-80.),minf(400.,viewport.y-210.));paper.position=Vector2((viewport.x-paper.size.x)*.5,114.)
func poll()->void:
	if demo.gallery.busy or demo.edit_pending():return
	var key:=[demo.state.get_instance_id(),demo.state._wish_epoch]
	if key!=epoch:
		epoch=key;signature=null;postponed=false;Receipts.initialize(demo.state)
	var row:=Receipts.collect(demo.state)
	if int(row.earned)>0:
		events.append({"earned":row.earned,"events":row.events,"level":row.level})
		if events.size()>128:events.pop_front()
	if row.leveled_up:postponed=false;chime()
	refresh()
func chime()->void:
	if demo.music.muted or demo.music._loading:return
	var Pluck=preload("res://scripts/audio/city_creation_pitch_pluck.gd")
	var mode:int=demo.music.harmony_mode();var phrase:int=demo.music.CueGrid.bar(demo.music.CueGrid.transport_clock(demo.music))
	var midi:int=Pluck.Palette.pitch(mode,phrase,2,1) if mode>=0 else Pluck.pitch(phrase,2,1)
	midi=demo.music.CueGrid.snap_to_chord_tone(midi,Pluck.Palette.chords(maxi(0,mode))[phrase])
	var key:String=Pluck.stream_key("harp",midi)
	if not demo.music._edit_streams.has(key):return
	for effect:AudioStreamPlayer in demo.music._effects:
		if effect.playing:continue
		demo.music.play_effect_at(effect,demo.music._edit_streams[key],Vector2(demo.focus.x,demo.focus.z),.17);cue_count+=1;return
func refresh(force:bool=false)->void:
	var journey:Dictionary=demo.state.harmony_journey
	if journey.is_empty():return
	var remaining:=Journey.credits(journey)
	var next_xp:=Journey.xp_for_next_level(int(journey.harmony_level))
	progress.max_value=next_xp;progress.value=int(journey.harmony_xp)
	badge.text="♪ 共鸣 Lv.%d%s"%[int(journey.harmony_level)," · ✦待展卷%d"%remaining if remaining>0 else ""]
	badge.tooltip_text="河湾共鸣 %d / %d\n新屋、出炉、茶聚、送装、心愿与和弦积累共鸣。\n已研习：%s"%[int(journey.harmony_xp),next_xp,"、".join(Array(journey.traditions).map(func(id):return str(Journey.cards()[id].name)))]
	if remaining==0:paper.hide();signature=null;return
	Rarity.ensure(journey)
	reroll_button.text="↻ 翻阅新卷 · %d"%Rarity.rerolls_left(journey);reroll_button.disabled=Rarity.rerolls_left(journey)<=0
	var key:=[journey.pending_draft.duplicate(),journey.ranks.duplicate(),journey.get("draft_rarities",{}).duplicate(),remaining]
	if force or key!=signature:
		signature=key;rebuild()
	display()
func display()->void:
	var ceremony:bool=demo.has_meta("era_ceremony") and not demo.get_meta("era_ceremony").active.is_empty()
	var covered:bool=ceremony or demo.journal.scrollbook.visible or demo.gallery.panel.visible or demo.guide.panel.visible
	badge.visible=not covered
	paper.visible=not covered and not postponed and Journey.credits(demo.state.harmony_journey)>0
	if paper.visible:demo.toast.hide()
func rebuild()->void:
	for child:Node in leaves.get_children():leaves.remove_child(child);child.queue_free()
	buttons.clear();var journey:Dictionary=demo.state.harmony_journey
	var drought:=int(journey.get("receipts",{}).get("prismatic_drought",0))
	title.text="河湾赠来的灵感 · 选一页传世手札"
	if int(journey.get("heritage_credit",0))==1 and Journey.choices_made(journey)==0:title.text="跨城传承 · 为新河湾选一页手札"
	for id:String in journey.pending_draft:
		var card:Dictionary=Journey.cards()[id];var tier:=Rarity.tier(journey,id)
		var box:=PanelContainer.new()
		box.add_theme_stylebox_override("panel",TactileUI.card_frame_style(tier))
		box.size_flags_horizontal=Control.SIZE_EXPAND_FILL;box.custom_minimum_size=Vector2(220,230);leaves.add_child(box)
		var column:=VBoxContainer.new();column.add_theme_constant_override("separation",12);box.add_child(column)
		var seal:=Label.new();seal.text=preload("res://scripts/world/city_creation_tradition_synergy.gd").card_badge(id,preload("res://scripts/world/city_creation_tradition_synergy.gd").owned(demo.state));seal.tooltip_text=str(preload("res://scripts/world/city_creation_tradition_synergy.gd").FAMILIES[preload("res://scripts/world/city_creation_tradition_synergy.gd").family_of(id)].crown);seal.add_theme_color_override("font_color",Color("8c682f"));column.add_child(seal)
		var rarity:=Label.new();rarity.text=TactileUI.rarity_label_text(tier,drought);rarity.add_theme_color_override("font_color",Color(Rarity.COLORS[tier]));rarity.add_theme_font_size_override("font_size",13);column.add_child(rarity)
		var heading:=Label.new();heading.text=str(card.name);heading.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;heading.add_theme_font_size_override("font_size",20);heading.add_theme_color_override("font_color",UI.INK);column.add_child(heading)
		var detail:=Label.new();detail.text=str(card.text);detail.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;detail.custom_minimum_size.y=84;detail.add_theme_font_size_override("font_size",15);detail.add_theme_color_override("font_color",UI.MUTED);detail.size_flags_vertical=Control.SIZE_EXPAND_FILL;column.add_child(detail)
		var button:=Button.new();button.text="融入河湾" if id not in journey.traditions else "再读一遍 · 研习%d"%(int(journey.ranks[id])+1);button.custom_minimum_size.y=36;button.pressed.connect(choose.bind(id));column.add_child(button);buttons[id]=button
	fit();fit.call_deferred()
func reroll()->void:
	if demo.edit_pending() or demo.gallery.busy:return
	var result:=Rarity.reroll(demo.state)
	if result.ok:demo._after_edit(result,"history",false)
	refresh(true)
func choose(id:String)->void:
	if demo.edit_pending() or demo.gallery.busy:return
	Receipts.collect(demo.state)
	var result:=Journey.choose(demo.state,id)
	if result.ok:demo._after_edit(result,"terrace",true)
	refresh(true)
func _process(delta:float)->void:
	display()
	elapsed+=delta
	if elapsed<.5:return
	elapsed=0.;poll()
