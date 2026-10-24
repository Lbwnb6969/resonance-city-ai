extends Node3D
const Moment=preload("res://scripts/world/city_creation_season_moment.gd")
const Safe=preload("res://scripts/visual/city_creation_safe_instances.gd")
var demo
var motes:MultiMeshInstance3D
var ink:ShaderMaterial
var caption:Label
var started:=0.
var last_key:Variant=null
var next_anchor:=0.
var index:=-1
func setup(owner)->void:
	demo=owner;name="RiverSeasonMoment"
	motes=MultiMeshInstance3D.new();motes.name="MomentMotes";motes.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF;add_child(motes)
	ink=ShaderMaterial.new();ink.shader=preload("res://scripts/visual/shaders/creation_season_moment.gdshader");motes.material_override=ink
	caption=Label.new();caption.name="SeasonMomentPoem";caption.mouse_filter=Control.MOUSE_FILTER_IGNORE
	demo.ui_layer.get_child(0).add_child(caption);caption.set_anchors_and_offsets_preset(Control.PRESET_CENTER_TOP)
	caption.offset_left=-160;caption.offset_right=160;caption.offset_top=124;caption.offset_bottom=164;caption.horizontal_alignment=HORIZONTAL_ALIGNMENT_CENTER
	var UI=preload("res://scripts/ui/valley_ui_theme.gd")
	caption.add_theme_color_override("font_color",UI.INK);caption.add_theme_font_size_override("font_size",13)
	var style:StyleBoxFlat=UI.badge(Color(UI.PAPER,.92));style.set_corner_radius_all(12);caption.add_theme_stylebox_override("normal",style);caption.hide()
func update(mode:String)->void:
	var clock:float=demo.music._playback_clock();index=Moment.IDS.find(mode)
	var key:Array=[mode,demo.light_phase,demo.town.get_instance_id()]
	if key!=last_key:
		last_key=key;started=clock;next_anchor=0.
	if not demo.music.emergence.score.is_empty():
		demo.music.emergence.score.cadence_moment_start=started;demo.music.emergence.score.cadence_light=demo.light_phase
	var active:bool=index>=0 and demo.light_phase==Moment.PHASES[index]
	var strength:float=Moment.envelope(clock,started) if active else 0.
	if active and clock>=next_anchor:_anchors();next_anchor=clock+1.
	motes.visible=strength>.001;ink.set_shader_parameter("strength",strength);ink.set_shader_parameter("elapsed",maxf(0.,clock-started));ink.set_shader_parameter("season",maxi(0,index))
	caption.visible=strength>.02 and not demo.spatial_popover.card.visible and not demo.journal.scrollbook.visible
	if caption.visible:caption.text=Moment.TITLES[index]+"\n"+Moment.POEMS[index];caption.modulate.a=strength
	set_meta("diagnostics",{"index":index,"phase":demo.light_phase,"strength":strength,"start":started,"anchors":motes.multimesh.visible_instance_count if motes.multimesh!=null else 0})
func _anchors()->void:
	var origins:Array[Vector3]=[]
	if index==1:
		for plan:Dictionary in demo.life.cafe.layouts.values():
			if not plan.is_empty() and Vector2(demo.focus.x,demo.focus.z).distance_to(plan.center)<22.:origins.append(Vector3(plan.center.x,float(plan.base_y)+.85,plan.center.y))
	elif index==3:
		for row:Dictionary in demo.life.residents:
			if row.node.visible and row.node.get_meta("citizen_prop","")=="lantern":origins.append(row.node.global_position+Vector3.UP*.35)
	else:
		for i in range(8):
			var at:=Vector2(demo.focus.x,demo.focus.z)+Vector2.from_angle(float(i)*TAU/8.)*(2.+float(i%3)*2.)
			origins.append(Vector3(at.x,demo.state.ground_height(at)+.4,at.y))
	var multi:=MultiMesh.new();multi.transform_format=MultiMesh.TRANSFORM_3D;multi.use_custom_data=true
	var quad:=QuadMesh.new();quad.size=Vector2.ONE*(.13 if index in [0,2] else .055);multi.mesh=quad;Safe.initialize(multi,96)
	for i in range(mini(96,origins.size()*8)):
		var seed:float=float(i%8)/8.;var around:=Vector3(cos(i*2.4),0,sin(i*2.4))*(.11 if index==1 else .25)
		Safe.append(multi,Transform3D(Basis.IDENTITY,origins[i/8]+around),Color.WHITE,Color(seed,0,0,1))
	multi.custom_aabb=AABB(Vector3(-256,-20,-256),Vector3(512,128,512));motes.multimesh=multi
