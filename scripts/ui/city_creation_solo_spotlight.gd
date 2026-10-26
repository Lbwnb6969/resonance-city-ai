extends Node3D
## Twelve seconds of one real source, using one of the existing short players.
const Gather=preload("res://scripts/world/city_creation_solo_listeners.gd")
const Tide=preload("res://scripts/audio/city_creation_phrase_tide.gd")
var demo
var held_p:=false
var source:=""
var epoch:Array=[]
var started:=-1.
var ends:=-1.
var player:AudioStreamPlayer
var stream:AudioStreamWAV
var serial:=-1
var track:=""
var mode:=-2
var pcm_peak:=0.
var focus_tracking:=false
var particles:Array[MeshInstance3D]=[]
var roof:=Vector3.ZERO
var events:Array[Dictionary]=[]
var listeners:Array[String]=[]
func setup(owner)->void:
	demo=owner;name="SoloSpotlight";demo.add_child(self);demo.set_meta("solo_spotlight",self)
	var material:=StandardMaterial3D.new();material.albedo_color=Color("d8b45d");material.emission_enabled=true;material.emission=Color("b28c33");material.emission_energy_multiplier=.5
	var mesh:=preload("res://scripts/visual/city_creation_solo_note.gd").mesh()
	for i in range(12):
		var note:=MeshInstance3D.new();note.mesh=mesh;note.material_override=material;note.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF;add_child(note);note.hide();particles.append(note)
func active()->bool:return not source.is_empty()
func _blocked()->bool:
	if demo.edit_pending() or demo.gallery.busy or demo.music.muted or demo.music.concert_active or demo.music._loading or demo.music.phonograph.active:return true
	if demo.guide.visible() or demo.ledger.visible() or demo.journal.panel.visible or demo.gallery.panel.visible:return true
	var focus:Control=demo.get_viewport().gui_get_focus_owner()
	return focus is LineEdit or focus is TextEdit
func eligible(id:String)->bool:
	var index:int=demo.state._house_index(id)
	if index<0 or not demo.music._house_music.has(id):return false
	var h:Dictionary=demo.state.houses[index]
	if not str(h.get("signature","")).is_empty():return true
	for crown:Node3D in demo.get_meta("street_wonders").crowns:
		if str(crown.get_meta("plan").house_id)==id:return true
	if not demo.life.house_connected(id):return false
	if str(h.role)=="garden_cafe":return demo.life.cafe_status(id).phase=="tea"
	if str(h.role) not in ["bakery","workshop","atelier","clockmaker"]:return false
	var status:Dictionary=demo.life.bakery_status(id) if h.role=="bakery" else demo.life.workshop_status(id)
	return bool(status.open) and str(status.worker_phase) not in ["unassigned","paused"]
func handle_input(event:InputEvent)->bool:
	if event is InputEventKey and event.keycode==KEY_P:
		if not event.pressed:held_p=false
		elif not event.echo and not _blocked():held_p=true
		return false
	if event is InputEventKey and event.pressed and event.keycode==KEY_ESCAPE and active():cancel("cancel");return true
	if event is InputEventMouseMotion and (demo.orbiting or demo.panning):focus_tracking=false
	if not event is InputEventMouseButton or event.button_index!=MOUSE_BUTTON_LEFT or not event.pressed:return false
	if not (held_p or demo.camera_rig.strolling) or _blocked() or demo.get_viewport().gui_get_hovered_control()!=null:return false
	var hit:Dictionary=demo._ray_hit(event.position);var body:Object=hit.get("collider")
	var id:=str(body.get_meta("house_id","")) if body!=null else ""
	return start(id)
func start(id:String)->bool:
	if _blocked() or not eligible(id):return false
	var available:AudioStreamPlayer
	for effect:AudioStreamPlayer in demo.music._effects:
		if not effect.playing or effect==player:available=effect;break
	if available==null:return false
	cancel("replace");source=id;player=available
	epoch=[demo.state.get_instance_id(),demo.state.revision,demo.life.get_instance_id()]
	track=Tide.track(demo.music._house_music[id]);mode=-2
	started=demo.music._playback_clock();ends=started+12.;focus_tracking=true
	var h:Dictionary=demo.town._house_record(id);var height:=float(h.get("base_y",0.))
	for cell:Dictionary in h.cells:height=maxf(height,float(h.get("base_y",0.))+(int(cell.level)+1)*1.7+.9)
	roof=Vector3(h.origin[0],height+.2,h.origin[1])
	for crown:Node3D in demo.get_meta("street_wonders").crowns:
		if str(crown.get_meta("plan").house_id)==id:roof.y=maxf(roof.y,crown.global_position.y+2.5)
	demo.music.attention.clear();demo.music.canon.clear();_adopt()
	demo.music.set_meta("solo_duck_db",4.)
	listeners=Gather.gather(demo.life,id,demo.life.time+12.)
	events.append({"kind":"start","source":id,"clock":started,"ends":ends,"track":track,"listeners":listeners.duplicate()})
	return true
func _adopt()->void:
	var next:=maxi(0,demo.music.harmony_mode())
	if next==mode:return
	mode=next;var key:="%s/2"%track if mode==0 else "%d/%s/2"%[mode,track]
	stream=demo.music._variation_streams[key]
	var h:Dictionary=demo.town._house_record(source);var at:=Vector2(h.origin[0],h.origin[1])
	demo.music.play_effect_at(player,stream,at)
	serial=int(player.get_meta("creation_voice_serial"));pcm_peak=float(demo.music.audio_report.variation_peaks[key])
	player.volume_db=-60.
	player.play(fposmod(demo.music._playback_clock(),24.))
func cancel(reason:String="finished")->void:
	if not active():return
	if is_instance_valid(player) and player.stream==stream and int(player.get_meta("creation_voice_serial",-1))==serial:player.stop()
	if is_instance_valid(demo.life):Gather.clear(demo.life)
	demo.music.set_meta("solo_duck_db",0.)
	events.append({"kind":reason,"source":source,"clock":demo.music._playback_clock(),"duration":demo.music._playback_clock()-started})
	if events.size()>64:events.pop_front()
	source="";focus_tracking=false;player=null;stream=null
	for note:Node3D in particles:note.hide()
func _process(delta:float)->void:
	if not active():return
	var music=demo.music;var clock:float=music._playback_clock()
	if epoch!=[demo.state.get_instance_id(),demo.state.revision,demo.life.get_instance_id()] or _blocked():cancel("context");return
	if clock>=ends:cancel();return
	if player.stream!=stream or int(player.get_meta("creation_voice_serial",-1))!=serial:cancel("voice_replaced");return
	_adopt()
	var envelope:=minf(smoothstep(0.,.12,clock-started),smoothstep(0.,.15,ends-clock))
	player.volume_db=linear_to_db(.18/pcm_peak*maxf(.0001,envelope))
	if focus_tracking:
		var blend:=1.-exp(-delta*3.2)
		if demo.camera_rig.strolling:
			var look:Vector3=(demo.focus-roof).normalized();demo.yaw=lerp_angle(demo.yaw,atan2(look.x,look.z),blend);demo.pitch=lerpf(demo.pitch,clampf(asin(look.y),-.7,1.),blend)
		else:demo.focus=demo.focus.lerp(Vector3(roof.x,1.,roof.z),blend);demo.zoom=lerpf(demo.zoom,minf(demo.zoom,16.),blend)
		demo._update_camera()
	var elapsed:=clock-started
	for i in range(particles.size()):
		var age:=fposmod(elapsed+float(i)*.13,1.6);var angle:=float(i)*2.39996+age*.35
		particles[i].position=roof+Vector3(cos(angle)*(.28+age*.12),age*.55,sin(angle)*(.28+age*.12));particles[i].rotation.y=demo.yaw;particles[i].visible=age<1.3
func report()->Dictionary:
	return {"active":active(),"source":source,"started":started,"ends":ends,"track":track,"mode":mode,"pcm_peak":pcm_peak,"output_peak":.18,"listeners":listeners.duplicate(),"events":events.duplicate(true)}
