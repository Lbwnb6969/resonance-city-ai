extends Node
## Nonmodal, postponable city-owned drafts. World simulation never pauses.
const Journey=preload("res://scripts/world/city_creation_harmony_journey.gd")
const Rarity=preload("res://scripts/world/city_creation_draft_rarity.gd")
const Receipts=preload("res://scripts/world/city_creation_harmony_receipts.gd")
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
const Unified=preload("res://scripts/world/city_creation_unified_rewards.gd")
var legacy_era:=""
var demo:Node3D
var paper:Panel
var badge:Button
var title:Label
var leaves:HBoxContainer
var buttons:Dictionary={}
var epoch:Variant=null
var signature:Variant=null
var elapsed:=0.
var postponed:=true
var events:Array[Dictionary]=[]
var progress:ProgressBar
var cue_count:=0
var reroll_button:Button
var footer:Label
func setup(owner:Node3D,parent:Control)->void:
	demo=owner;name="InspirationDraft";demo.add_child(self);demo.set_meta("inspiration_draft",self)
	badge=Button.new();badge.theme=UI.make_theme();badge.name="HarmonyProgress";badge.position=Vector2(24,66);badge.custom_minimum_size=Vector2(238,32)
	badge.pressed.connect(func()->void:postponed=false;refresh(true));parent.add_child(badge)
	progress=ProgressBar.new();progress.show_percentage=false;progress.mouse_filter=Control.MOUSE_FILTER_IGNORE;badge.add_child(progress)
	progress.hide()
	progress.set_anchors_and_offsets_preset(Control.PRESET_BOTTOM_WIDE);progress.offset_top=-4.;progress.offset_bottom=-1.;progress.offset_left=8.;progress.offset_right=-8.
	paper=Panel.new();paper.theme=UI.make_theme();paper.name="InspirationPaper";paper.add_theme_stylebox_override("panel",UI.panel(16));parent.add_child(paper);paper.hide()
	var column:=VBoxContainer.new();column.add_theme_constant_override("separation",12);paper.add_child(column);column.set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT);column.offset_left=16.;column.offset_top=16.;column.offset_right=-16.;column.offset_bottom=-16.
	var header:=HBoxContainer.new();column.add_child(header)
	title=Label.new();title.add_theme_font_size_override("font_size",20);title.add_theme_color_override("font_color",UI.INK);title.size_flags_horizontal=Control.SIZE_EXPAND_FILL;header.add_child(title)
	reroll_button=Button.new();reroll_button.name="RerollDraft";reroll_button.pressed.connect(reroll)
	var later:=Button.new();later.name="PostponeDraft";later.text="收好";later.pressed.connect(func()->void:postponed=true;paper.hide());header.add_child(later)
	leaves=HBoxContainer.new();leaves.add_theme_constant_override("separation",12);column.add_child(leaves)
	var footrow:=HBoxContainer.new();column.add_child(footrow)
	footer=Label.new();footer.size_flags_horizontal=Control.SIZE_EXPAND_FILL;footer.add_theme_font_size_override("font_size",12);footer.add_theme_color_override("font_color",UI.MUTED);footrow.add_child(footer);footrow.add_child(reroll_button)
	for overlay:Control in [demo.journal.scrollbook,demo.gallery.panel,demo.guide.panel]:overlay.visibility_changed.connect(display)
	parent.resized.connect(fit);fit();poll()
func fit()->void:
	var viewport:Vector2=paper.get_parent().size
	paper.size=Vector2(minf(840.,viewport.x-80.),minf(354.,viewport.y-210.));paper.position=Vector2((viewport.x-paper.size.x)*.5,114.)
func poll()->void:
	if demo.gallery.busy or demo.edit_pending():return
	var key:=[demo.state.get_instance_id(),demo.state._wish_epoch]
	if key!=epoch:
		epoch=key;signature=null;postponed=true;Receipts.initialize(demo.state)
	var row:=Receipts.collect(demo.state)
	if int(row.earned)>0:
		events.append({"earned":row.earned,"events":row.events,"level":row.level,"inspiration_multiplier":row.spatial.inspiration_multiplier,"artisan_sources":row.spatial.artisan_sources.duplicate()})
		if events.size()>128:events.pop_front()
	if row.leveled_up:chime()
	refresh()
func chime()->void:
	if demo.music.muted or demo.music._loading:return
	var Pluck=preload("res://scripts/audio/city_creation_pitch_pluck.gd")
	var mode:int=demo.music.harmony_mode();var phrase:int=demo.music.CueGrid.bar(demo.music.CueGrid.transport_clock(demo.music))
	var midi:int=Pluck.Palette.pitch(mode,phrase,2,1) if mode>=0 else Pluck.pitch(phrase,2,1)
	midi=demo.music.CueGrid.snap_to_chord_tone(midi,Pluck.Palette.chords(maxi(0,mode))[phrase])
	midi=preload("res://scripts/audio/city_creation_score_harmony.gd").note(demo.music,midi,demo.music.CueGrid.transport_clock(demo.music))
	var key:String=Pluck.stream_key("harp",midi)
	if not demo.music._edit_streams.has(key):return
	for effect:AudioStreamPlayer in demo.music._effects:
		if effect.playing:continue
		demo.music.play_effect_at(effect,demo.music._edit_streams[key],Vector2(demo.focus.x,demo.focus.z),.17);cue_count+=1;return
func refresh(force:bool=false)->void:
	var journey:Dictionary=demo.state.harmony_journey
	if journey.is_empty():return
	var legacy:=Unified.pending(demo.state);legacy_era=legacy[0] if not legacy.is_empty() else ""
	var remaining:=Journey.credits(journey)+legacy.size()
	progress.max_value=Journey.xp_for_next_level(int(journey.harmony_level));progress.value=int(journey.harmony_xp)
	badge.text=("保留手札 · %d" if journey.has("growth_cutoff") else "新卷待启 · %d")%remaining
	badge.visible=remaining>0
	badge.position=Vector2(24,64);badge.custom_minimum_size=Vector2(116,28)
	badge.tooltip_text="新屋、真实出炉、茶聚、送装、心愿与和弦积累共鸣。\n已研习："+"、".join(Array(journey.traditions).map(func(id):return str(Journey.cards()[id].name)))
	if journey.has("growth_cutoff"):badge.tooltip_text="保留的手札额度与旧城传承仍可领取；基础营造与音乐自由使用。"
	if remaining==0:paper.hide();signature=null;return
	if force or not journey.has("growth_cutoff"):Rarity.ensure(journey)
	reroll_button.visible=legacy_era.is_empty();reroll_button.text="翻卷 · %d"%Rarity.rerolls_left(journey);reroll_button.disabled=Rarity.rerolls_left(journey)<=0
	footer.text="旧城已得权益 · 不消耗共鸣手札 · 可撤销" if not legacy_era.is_empty() else preload("res://scripts/ui/city_creation_draft_leaf.gd").footer(journey)
	var key:=[journey.pending_draft.duplicate(),journey.ranks.duplicate(),journey.get("draft_rarities",{}).duplicate(),remaining,legacy_era]
	if force or key!=signature:
		signature=key;rebuild()
	display()
func display()->void:
	var ceremony:bool=demo.has_meta("era_ceremony") and not demo.get_meta("era_ceremony").active.is_empty()
	var covered:bool=ceremony or demo.journal.scrollbook.visible or demo.gallery.panel.visible or demo.guide.panel.visible
	var waiting:bool=Journey.credits(demo.state.harmony_journey)>0 or not Unified.pending(demo.state).is_empty()
	badge.visible=not covered and waiting
	paper.visible=not covered and not postponed and waiting
	if paper.visible:demo.toast.hide()
func rebuild()->void:
	for child:Node in leaves.get_children():leaves.remove_child(child);child.queue_free()
	buttons.clear();var journey:Dictionary=demo.state.harmony_journey
	title.text="灵感手札 · 择一页入城"
	if journey.has("growth_cutoff"):title.text="原有手札 · 择一页入城"
	if int(journey.get("heritage_credit",0))==1 and Journey.choices_made(journey)==0:title.text="跨城传承 · 择一页入城"
	if journey.has("growth_cutoff") and int(journey.get("heritage_credit",0))==1 and Journey.choices_made(journey)==0:title.text="已得传承 · 择一页入城"
	if not legacy_era.is_empty():title.text="旧城传承 · "+str(demo.state.Eras.NAMES[demo.state.Eras.IDS.find(legacy_era)])
	for id:String in (Unified.cards(legacy_era) if not legacy_era.is_empty() else journey.pending_draft):buttons[id]=preload("res://scripts/ui/city_creation_draft_leaf.gd").make(self,id)
	fit();fit.call_deferred()
func reroll()->void:
	if demo.edit_pending() or demo.gallery.busy or not legacy_era.is_empty():return
	var result:=Rarity.reroll(demo.state)
	if result.ok:demo._after_edit(result,"history",false)
	refresh(true)
func choose(id:String)->void:
	if demo.edit_pending() or demo.gallery.busy:return
	Receipts.collect(demo.state)
	var result:=Unified.choose_legacy(demo.state,legacy_era,id) if not legacy_era.is_empty() else Journey.choose(demo.state,id)
	if result.ok:demo._after_edit(result,"terrace",true)
	refresh(true)
func _process(delta:float)->void:
	display()
	elapsed+=delta
	if elapsed<.5:return
	elapsed=0.;poll()
