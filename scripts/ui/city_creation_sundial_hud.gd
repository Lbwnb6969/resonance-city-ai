extends HBoxContainer
const Seal=preload("res://scripts/ui/city_creation_seal_button.gd")
var demo:Node3D
var sundial:Button
var fork:Button
var walk:Button
var postcard:Button
var weather:Button
var _phase:=-1
var _turn:Tween
var _dial_target:=0.
var _dirty:=false
var _glow:=0.
var _zones_revision:=-1
var _postcard_path:=""

func setup(owner:Node3D,parent:Control)->void:
	demo=owner;name="Actions";parent.add_child(self)
	set_anchors_and_offsets_preset(Control.PRESET_TOP_RIGHT)
	offset_left=-224;offset_right=-16;offset_top=16;offset_bottom=52
	add_theme_constant_override("separation",8)
	sundial=_seal("Sundial","sundial_day",demo._toggle_light)
	weather=_seal("FourSeasons","vegetation",demo._toggle_microclimate)
	fork=_seal("MusicFork","music",demo._toggle_music)
	walk=_seal("StreetStroll","walk",func()->void:demo.camera_rig.toggle(demo))
	postcard=_seal("Postcard","postcard",func()->void:demo.camera_rig.capture(demo))
	walk.tooltip_text="街头漫步 · V\nWASD/方向键行走，V 返回俯瞰；H 回到河湾全景"
	postcard.tooltip_text="留下河湾明信片 · F12\n羊皮金框、已建时代剪影与奇观火漆章"
	demo.music_button=fork;demo.light_button=sundial
	_dirty=demo.state.dirty
	_process(0.)

func _seal(label:String,kind:String,action:Callable)->Button:
	var seal:=Seal.new();seal.name=label;seal.configure(kind,36.)
	seal.pressed.connect(action);add_child(seal);return seal

func saved()->void:_glow=1.

func _process(delta:float)->void:
	var season:int=demo.State.Microclimate.IDS.find(demo.state.microclimate)
	weather.kind=demo.State.Microclimate.GLYPHS[maxi(0,season)]
	weather.tooltip_text="四时风物 · "+(demo.State.Microclimate.NAMES[season] if season>=0 else "原作天气")+"\n点击轮换花吹雪、太阳雨、金风与星夜萤火"
	if season>=0:weather.tooltip_text+="\n"+preload("res://scripts/world/city_creation_season_moment.gd").TITLES[season]+" · "+preload("res://scripts/world/city_creation_season_moment.gd").POEMS[season]
	if demo.light_phase!=_phase:
		if _phase>=0:_dial_target+=TAU/3.
		_phase=demo.light_phase;sundial.kind=["sundial_day","sundial_dusk","sundial_night"][_phase]
		if _turn!=null:_turn.kill()
		_turn=create_tween();_turn.tween_property(sundial,"turn",_dial_target,.38).set_trans(Tween.TRANS_BACK).set_ease(Tween.EASE_OUT)
		sundial.tooltip_text=demo.Copy.LIGHT_PHASE_TOOLTIPS[_phase]
	fork.muted=demo.music.muted;fork.pulse=float(demo.resonance_snapshot.get("beat_pulse",0.))
	walk.active=demo.camera_rig.strolling
	if _postcard_path!=demo.camera_rig.last_postcard:
		_postcard_path=demo.camera_rig.last_postcard
		postcard.tooltip_text="留下河湾明信片 · F12\n羊皮金框、已建时代剪影与奇观火漆章\n上次保存："+_postcard_path
	if _zones_revision!=demo.music.acoustic.revision:
		_zones_revision=demo.music.acoustic.revision
		var counts:Array[int]=[0,0,0,0]
		for row:Dictionary in demo.music.acoustic.zones.values():counts[["focus","linked","event","silent"].find(str(row.zone))]+=1
		fork.zones=counts
	fork.tooltip_text=("开启河湾声音" if demo.music.muted else "静音河湾声音")+"\n近景 %d · 相连 %d · 事件 %d · 远处 %d\n移动镜头，听街坊从对应方向演奏"%fork.zones
	if demo.state.dirty:_dirty=true
	elif _dirty:_dirty=false;saved()
	_glow=maxf(0.,_glow-delta*.7);fork.saved_glow=_glow

