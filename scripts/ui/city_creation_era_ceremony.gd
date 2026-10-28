extends Node
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
const Receipts=preload("res://scripts/world/city_creation_harmony_receipts.gd")
const Ripple=preload("res://scripts/visual/city_creation_era_ripple.gd")
const Focus=preload("res://scripts/visual/shaders/creation_era_focus.gdshader")
const DURATION:=6.
var demo:Node
var panel:PanelContainer
var title:Label
var focus:ColorRect
var ripple:=Ripple.new()
var epoch:Variant=null
var pending:Array[String]=[]
var active:=""
var began:=0.
var location:=Vector2.ZERO
var second_bell:=false
var events:Array[Dictionary]=[]
var bell_count:=0
static func announce(owner:Node,era:String)->void:
	if owner.has_meta("era_ceremony"):owner.get_meta("era_ceremony").enqueue(era)
func setup(owner:Node,parent:Control)->void:
	demo=owner;name="EraCeremony";demo.add_child(self);demo.set_meta("era_ceremony",self)
	focus=ColorRect.new();focus.name="EraSoftFocus";focus.mouse_filter=Control.MOUSE_FILTER_IGNORE;focus.set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT)
	var material:=ShaderMaterial.new();material.shader=Focus;focus.material=material;parent.add_child(focus);parent.move_child(focus,0);focus.hide()
	panel=PanelContainer.new();panel.name="EraInscription";panel.theme=UI.make_theme();panel.mouse_filter=Control.MOUSE_FILTER_IGNORE;panel.add_theme_stylebox_override("panel",UI.panel(16));parent.add_child(panel);panel.hide()
	var column:=VBoxContainer.new();column.mouse_filter=Control.MOUSE_FILTER_IGNORE;panel.add_child(column)
	title=Label.new();title.horizontal_alignment=HORIZONTAL_ALIGNMENT_CENTER;title.add_theme_font_size_override("font_size",24);column.add_child(title)
	var caption:=Label.new();caption.text="旧街坊留住旧时光，新街坊迎来新乐章。";caption.horizontal_alignment=HORIZONTAL_ALIGNMENT_CENTER;caption.add_theme_font_size_override("font_size",14);caption.add_theme_color_override("font_color",UI.MUTED);column.add_child(caption)
	parent.resized.connect(fit);fit();ripple.setup(demo);bind()
func fit()->void:
	panel.size=Vector2(580,94);panel.position=Vector2((panel.get_parent().size.x-580.)*.5,118.)
func bind()->void:
	var key:=[demo.state.get_instance_id(),demo.state._wish_epoch]
	if key==epoch:return
	epoch=key;pending.clear();active="";panel.hide();focus.hide();ripple.mesh.hide();Receipts.initialize(demo.state)
	if not demo.state.era_unlocked.is_connected(demo._on_era_unlocked):demo.state.era_unlocked.connect(demo._on_era_unlocked,CONNECT_DEFERRED)
	if not demo.state.harmony_journey.has("celebrated_eras"):
		demo.state.harmony_journey.celebrated_eras=demo.state.era_unlocks.duplicate();demo.state.dirty=true
func enqueue(era:String)->void:
	bind()
	if era not in demo.state.era_unlocks or era=="pastoral":return
	if era in demo.state.harmony_journey.celebrated_eras:
		demo.journal.offer_era_choice(era);return
	demo.state.harmony_journey.celebrated_eras.append(era);demo.state.dirty=true;demo.state.life_progress_dirty=true
	if demo.state.CreationPolicy.is_free(demo.state):
		demo.save_delay=3.;demo.journal.offer_era_choice(era);events.append({"phase":"inscribed","era":era});return
	pending.append(era);demo.save_delay=3.
	if not demo.edit_pending():demo._refresh_place();demo._refresh_district();demo.journal.refresh(false)
func bell()->void:
	if demo.music.muted or demo.music._loading:return
	var key:="tower_bell_%d"%posmod(int(demo.music._playback_clock()/3.),8)
	if not demo.music._edit_streams.has(key):return
	for effect:AudioStreamPlayer in demo.music._effects:
		if effect.playing:continue
		demo.music.play_effect_at(effect,demo.music._edit_streams[key],location,.22);bell_count+=1;return
func start(era:String)->void:
	active=era;began=Time.get_ticks_msec()*.001;second_bell=false
	location=Vector2(demo.focus.x,demo.focus.z)
	title.text="时代 %d · %s"%[demo.state.Eras.IDS.find(era)+1,demo.state.Eras.NAMES[demo.state.Eras.IDS.find(era)]]
	demo.journal.close_panel();panel.show();focus.show();bell();events.append({"phase":"start","era":era,"clock":began})
func _process(_delta:float)->void:
	bind()
	if demo.gallery.busy:return
	if active.is_empty():
		if not pending.is_empty():start(pending.pop_front())
		return
	var clock:=Time.get_ticks_msec()*.001;var age:=clock-began
	if age>=3. and not second_bell:second_bell=true;bell()
	var envelope:=smoothstep(0.,.5,age)*(1.-smoothstep(5.25,6.,age))
	panel.modulate.a=envelope;focus.material.set_shader_parameter("softness",envelope*.6);ripple.update(demo.state,location,age)
	if age>=DURATION:
		events.append({"phase":"finish","era":active,"clock":clock,"duration":age});panel.hide();focus.hide();ripple.mesh.hide()
		var era:=active;active="";demo.journal.offer_era_choice(era)
		if events.size()>24:events.pop_front()
