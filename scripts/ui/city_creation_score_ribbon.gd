extends PanelContainer
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
const Icons=preload("res://scripts/ui/city_creation_vector_icons.gd")
const Seal=preload("res://scripts/ui/city_creation_seal_button.gd")
var demo:Node3D
var staff:Control
var seals:HBoxContainer
var chords:HBoxContainer
var landmark_button:Button
var _active_chords:Array=[]
var pulse:=0.
var clock:=0.
var midi:=-1
var audible:=false
var staff_points:Array[PackedVector2Array]=[]
var _lit_notes:=0
var level_label:Label
var labels:VBoxContainer
var _family_signature:Array=[]
var juice_energy:=0.
var juice_hits:=0
var _redraw_age:=0.
var _staff_signature:Variant=null
func receive_juice(_kind:String)->void:
	juice_energy=1.;juice_hits+=1;staff.queue_redraw()

func setup(owner:Node3D,parent:Control)->void:
	demo=owner;name="ScoreRibbonHUD";parent.add_child(self)
	position=Vector2(16,16);size=Vector2(336,38)
	var paper:=UI.panel(8);paper.set_corner_radius_all(22)
	paper.content_margin_top=4;paper.content_margin_bottom=4
	paper.bg_color=Color(UI.PAPER,.88);paper.shadow_size=5
	add_theme_stylebox_override("panel",paper)
	var row:=HBoxContainer.new();row.add_theme_constant_override("separation",5);add_child(row)
	staff=Control.new();staff.name="LiveStaff";staff.custom_minimum_size=Vector2(44,30)
	staff.mouse_filter=Control.MOUSE_FILTER_PASS;staff.draw.connect(_draw_staff);row.add_child(staff)
	staff.tooltip_text="共鸣之城 · 河湾的乐谱随正在听见的声音呼吸"
	labels=VBoxContainer.new();labels.add_theme_constant_override("separation",0)
	labels.size_flags_horizontal=Control.SIZE_EXPAND_FILL;labels.custom_minimum_size.x=42;row.add_child(labels)
	for label:Label in [demo.subtitle_label,demo.info]:
		label.reparent(labels);label.custom_minimum_size=Vector2.ZERO
		label.autowrap_mode=TextServer.AUTOWRAP_OFF;label.clip_text=true
		label.text_overrun_behavior=TextServer.OVERRUN_TRIM_ELLIPSIS
	demo.subtitle_label.hide();demo.info.hide()
	level_label=Label.new();level_label.name="ScoreLevel";level_label.add_theme_font_size_override("font_size",18);labels.add_child(level_label)
	demo.subtitle_label.add_theme_font_size_override("font_size",14)
	demo.info.add_theme_font_size_override("font_size",11)
	chords=HBoxContainer.new();chords.name="AcousticChords";chords.alignment=BoxContainer.ALIGNMENT_CENTER
	chords.add_theme_constant_override("separation",3);row.add_child(chords)
	seals=HBoxContainer.new();seals.name="RibbonSeals";seals.add_theme_constant_override("separation",4);row.add_child(seals)
	demo.journal.button.reparent(seals);demo.journal.button.set_script(Seal);demo.journal.button.configure("journal",28.)
	landmark_button=Seal.new();landmark_button.name="OpenLandmarks";landmark_button.configure("landmark",28.)
	landmark_button.tooltip_text="地标名胜 · 六座传世乐章的起点"
	landmark_button.pressed.connect(func()->void:demo.signatures.open_panel());seals.add_child(landmark_button)
	demo.gallery_button.reparent(seals);demo.gallery_button.set_script(Seal);demo.gallery_button.configure("gallery",28.)
	var guide:=Seal.new();guide.name="OpenGuide";guide.configure("guide",28.)
	guide.tooltip_text="营造手札 · F1";guide.pressed.connect(func()->void:demo.guide.open_panel());seals.add_child(guide)
	parent.resized.connect(_fit);_fit();refresh()

func _fit()->void:
	var width:=208.+21.*_active_chords.size() if demo.state.CreationPolicy.is_free(demo.state) else 336.
	size=Vector2(minf(width,get_parent().size.x-254.),38)

func refresh()->void:
	demo.subtitle_label.tooltip_text=demo.subtitle_label.text
	demo.info.tooltip_text=demo.info.text
	var family=preload("res://scripts/world/city_creation_tradition_synergy.gd")
	var view:Dictionary=family.for_city(demo.state)
	var active:Array=view.capstones
	var free:bool=demo.state.CreationPolicy.is_free(demo.state)
	labels.visible=not free
	level_label.text="" if free else "Lv.%d"%int(demo.state.harmony_journey.get("harmony_level",1))
	tooltip_text=demo.subtitle_label.text+"\n"+demo.info.text
	var signature:Array=[free,active]
	if signature==_family_signature:return
	_family_signature=signature.duplicate(true)
	_active_chords=active.duplicate()
	_fit()
	for child:Node in chords.get_children():chords.remove_child(child);child.queue_free()
	for id:String in family.FAMILIES:
		if free and id not in active:continue
		var seal:=Seal.new();seal.name="Chord_"+id;seal.configure({"riverbank":"water","highland":"terrain","courtyard":"district","artisan":"workshop"}[id],18.)
		seal.active=id in active;seal.modulate.a=1. if seal.active else .32
		seal.tooltip_text=str(family.FAMILIES[id].name)+(" · 已得手札权益 · J手记" if free else " · 冠冕已亮" if seal.active else " · 静候共鸣")
		seal.pressed.connect(open_history if free else func()->void:demo.guide.open_panel(2));chords.add_child(seal)
func open_history()->void:
	demo.journal.open_panel()
	var page:Node=demo.get_meta("growth_rights_page");page.open_rights()
	demo.journal.cards.get_parent().ensure_control_visible.call_deferred(page.read)

func _process(_delta:float)->void:
	juice_energy=move_toward(juice_energy,0.,_delta*4.)
	if not is_visible_in_tree():return
	_redraw_age+=_delta
	if _redraw_age<1./30.:return
	_redraw_age=0.
	var journey:Dictionary=demo.state.harmony_journey
	var free:bool=demo.state.CreationPolicy.is_free(demo.state)
	level_label.text="" if free else "Lv.%d"%int(journey.get("harmony_level",1))
	_lit_notes=0 if free else clampi(floori(float(journey.get("harmony_xp",0))/preload("res://scripts/world/city_creation_harmony_journey.gd").xp_for_next_level(int(journey.get("harmony_level",1)))*5.),0,5)
	var report:Dictionary=demo.resonance_snapshot
	var pluck:Dictionary=report.get("pluck",{})
	audible=not demo.music.muted and (bool(report.get("audible",false)) or bool(pluck.get("audible",false)))
	clock=float(report.get("clock_sec",0.));pulse=float(report.get("beat_pulse",0.)) if audible else 0.
	if audible and bool(pluck.get("audible",false)):pulse=pow(.5+.5*cos(TAU*clock/.75),2.)
	if bool(pluck.get("audible",false)):midi=int(pluck.midi)
	elif bool(report.get("canon",{}).get("audible",false)):midi=int(report.canon.get("midi",62))
	elif audible:midi=_pcm_midi(report)
	else:midi=-1
	var changed:=[audible,midi,_lit_notes,roundi(pulse*20.),roundi(clock*30.) if audible or juice_energy>0. else 0,roundi(juice_energy*20.)]
	if changed!=_staff_signature:_staff_signature=changed;staff.queue_redraw()

func _pcm_midi(report:Dictionary)->int:
	var track:=str(demo.music.emergence.score.get("lead_track","wood"))
	if bool(report.get("concert_active",false)):
		track="concert"
		var grand:Dictionary=demo.music.grand_festival_report()
		if bool(grand.active):track={"pastoral":"wood","renaissance":"renaissance_fugue","clockwork":"clockwork_waltz","modern_eco":"modern_symphony","tutti":"concert"}[str(grand.era)]
	var cursor:=preload("res://scripts/audio/city_creation_score_playback.gd").cursor(demo.music)
	if not cursor.is_empty():track=str(demo.music.get_meta("authored_score_stem",track))
	if not demo.music._players.has(track):return -1
	var player:AudioStreamPlayer=demo.music._players[track]
	var variant:=str(demo.music._variation_active.get(track,"original")) if cursor.is_empty() else "study1/"+str(cursor.signature)+"/lead"
	var notes:Array=demo.music.audio_report.get("theme_notes",{}).get(track,[]) if variant=="original" else demo.music.audio_report.get("variation_notes",{}).get(variant,demo.music.audio_report.get("harmony_notes",{}).get(variant,[]))
	var at:float=cursor.position if not cursor.is_empty() else fposmod(player.get_playback_position()+AudioServer.get_time_since_last_mix(),24.)
	var nearest:=INF;var note:=-1
	for row:Dictionary in notes:
		var age:=fposmod(at-float(row.start),24.)
		if age<float(row.duration) and age<nearest:nearest=age;note=int(row.midi)
	return note

func _draw_staff()->void:
	staff_points.clear()
	for i in range(5):
		var points:=PackedVector2Array()
		for step in range(17):
			var t:=step/16.
			var wave:=sin(t*PI)*sin(clock*TAU/.75+i*.45)*pulse*1.5
			wave+=sin(t*PI)*sin(clock*24.+i*.45)*juice_energy*4.
			points.append(Vector2(t*44.,9.+i*4.4+wave))
		staff_points.append(points);staff.draw_polyline(points,Color(UI.GOLD,.80 if audible else .36),1.,true)
	for note in range(_lit_notes):staff.draw_circle(Vector2(5.+note*8.,30.),1.4,UI.GOLD)
	if audible and midi>=0:
		var y:=clampf(23.-(midi-62)*1.1,5.,30.)
		staff.draw_circle(Vector2(30,y),2.8,UI.GREEN)
		staff.draw_line(Vector2(32.5,y),Vector2(32.5,y-10.),UI.GREEN,1.3,true)
	else:
		staff.draw_arc(Vector2(29,18),3.,0,TAU,20,Color(UI.MUTED,.65),1.,true)
