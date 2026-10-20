extends PanelContainer
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
const Icons=preload("res://scripts/ui/city_creation_vector_icons.gd")
const Seal=preload("res://scripts/ui/city_creation_seal_button.gd")
var demo:Node3D
var staff:Control
var seals:HBoxContainer
var chords:HBoxContainer
var _active_chords:Array=[]
var pulse:=0.
var clock:=0.
var midi:=-1
var audible:=false
var staff_points:Array[PackedVector2Array]=[]

func setup(owner:Node3D,parent:Control)->void:
	demo=owner;name="ScoreRibbonHUD";parent.add_child(self)
	position=Vector2(16,16);size=Vector2(548,44)
	var paper:=UI.panel(8);paper.set_corner_radius_all(22)
	paper.content_margin_top=4;paper.content_margin_bottom=4
	paper.bg_color=Color(UI.PAPER,.88);paper.shadow_size=5
	add_theme_stylebox_override("panel",paper)
	var row:=HBoxContainer.new();row.add_theme_constant_override("separation",8);add_child(row)
	staff=Control.new();staff.name="LiveStaff";staff.custom_minimum_size=Vector2(56,36)
	staff.mouse_filter=Control.MOUSE_FILTER_PASS;staff.draw.connect(_draw_staff);row.add_child(staff)
	staff.tooltip_text="共鸣之城 · 河湾的乐谱随正在听见的声音呼吸"
	var labels:=VBoxContainer.new();labels.add_theme_constant_override("separation",0)
	labels.size_flags_horizontal=Control.SIZE_EXPAND_FILL;labels.custom_minimum_size.x=140;row.add_child(labels)
	for label:Label in [demo.subtitle_label,demo.info]:
		label.reparent(labels);label.custom_minimum_size=Vector2.ZERO
		label.autowrap_mode=TextServer.AUTOWRAP_OFF;label.clip_text=true
		label.text_overrun_behavior=TextServer.OVERRUN_TRIM_ELLIPSIS
	demo.subtitle_label.add_theme_font_size_override("font_size",14)
	demo.info.add_theme_font_size_override("font_size",11)
	chords=HBoxContainer.new();chords.name="AcousticChords";chords.alignment=BoxContainer.ALIGNMENT_CENTER
	chords.add_theme_constant_override("separation",3);row.add_child(chords)
	seals=HBoxContainer.new();seals.name="RibbonSeals";seals.add_theme_constant_override("separation",4);row.add_child(seals)
	demo.journal.button.reparent(seals);demo.journal.button.set_script(Seal);demo.journal.button.configure("journal",32.)
	demo.gallery_button.reparent(seals);demo.gallery_button.set_script(Seal);demo.gallery_button.configure("gallery",32.)
	var guide:=Seal.new();guide.name="OpenGuide";guide.configure("guide",32.)
	guide.tooltip_text="营造手札 · F1";guide.pressed.connect(func()->void:demo.guide.open_panel());seals.add_child(guide)
	parent.resized.connect(_fit);_fit();refresh()

func _fit()->void:
	size=Vector2(minf(548.,get_parent().size.x-264.),44)

func refresh()->void:
	demo.subtitle_label.tooltip_text=demo.subtitle_label.text
	demo.info.tooltip_text=demo.info.text
	var active:Array=demo.state.synergy_buffs().active_chords
	if active==_active_chords and chords.get_child_count()>0:return
	_active_chords=active.duplicate()
	for child:Node in chords.get_children():chords.remove_child(child);child.queue_free()
	var shown:Array=active if not active.is_empty() else [""]
	for id:String in shown:
		var seal:=Seal.new();seal.name="Chord_"+id;seal.configure("chord",24.)
		seal.active=not id.is_empty();seal.modulate.a=1. if seal.active else .50
		seal.tooltip_text=(str(demo.State.SynergyBuffs.CHORD_NAMES[id])+"\n"+str(demo.State.SynergyBuffs.CHORD_DETAILS[id])) if seal.active else "声学和弦 · 将不同的生活与地形连在一起\n点击查看五种和弦配方"
		seal.pressed.connect(func()->void:demo.guide.open_panel(2));chords.add_child(seal)

func _process(_delta:float)->void:
	if not is_visible_in_tree():return
	var report:Dictionary=demo.resonance_snapshot
	var pluck:Dictionary=report.get("pluck",{})
	audible=not demo.music.muted and (bool(report.get("audible",false)) or bool(pluck.get("audible",false)))
	clock=float(report.get("clock_sec",0.));pulse=float(report.get("beat_pulse",0.)) if audible else 0.
	if audible and bool(pluck.get("audible",false)):pulse=pow(.5+.5*cos(TAU*clock/.75),2.)
	if bool(pluck.get("audible",false)):midi=int(pluck.midi)
	elif bool(report.get("canon",{}).get("audible",false)):midi=int(report.canon.get("midi",62))
	elif audible:midi=_pcm_midi(report)
	else:midi=-1
	staff.queue_redraw()

func _pcm_midi(report:Dictionary)->int:
	var track:=str(demo.music.emergence.score.get("lead_track","wood"))
	if bool(report.get("concert_active",false)):
		track="concert"
		var grand:Dictionary=demo.music.grand_festival_report()
		if bool(grand.active):track={"pastoral":"wood","renaissance":"renaissance_fugue","clockwork":"clockwork_waltz","modern_eco":"modern_symphony","tutti":"concert"}[str(grand.era)]
	if not demo.music._players.has(track):return -1
	var player:AudioStreamPlayer=demo.music._players[track]
	var variant:=str(demo.music._variation_active.get(track,"original"))
	var notes:Array=demo.music.audio_report.get("theme_notes",{}).get(track,[]) if variant=="original" else demo.music.audio_report.get("variation_notes",{}).get(variant,[])
	var at:=fposmod(player.get_playback_position()+AudioServer.get_time_since_last_mix(),24.)
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
			points.append(Vector2(t*56.,9.+i*4.4+wave))
		staff_points.append(points);staff.draw_polyline(points,Color(UI.GOLD,.80 if audible else .36),1.,true)
	if audible and midi>=0:
		var y:=clampf(23.-(midi-62)*1.1,5.,30.)
		staff.draw_circle(Vector2(30,y),2.8,UI.GREEN)
		staff.draw_line(Vector2(32.5,y),Vector2(32.5,y-10.),UI.GREEN,1.3,true)
	else:
		staff.draw_arc(Vector2(29,18),3.,0,TAU,20,Color(UI.MUTED,.65),1.,true)
