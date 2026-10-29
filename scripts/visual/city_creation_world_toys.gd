extends RefCounted
## World play borrows the existing quantized finger queue and four short voices.
var last_key:=""
var last_at:=-10.
var pulse:Dictionary={}
var age:=0.
var _state_id:=0
var key_flash:MeshInstance3D

func target(demo,at:Vector2)->Dictionary:
	var kind:="";var key:="";var origin:=at
	if demo.state.water_clearance(at)<-.12:
		kind="water";key="water/"+str((at/1.2).floor())
	else:
		var stair:Dictionary=demo.life.travel.point_stair(at)
		if not stair.is_empty():kind="stair";key=str(stair.id);origin=stair.at
		else:
			var distance:=1.4*1.4
			for plant:Dictionary in demo.state.plants:
				if plant.kind not in ["olive","cypress","golden_tree"]:continue
				var p:=Vector2(plant.position[0],plant.position[1]);var gap:=p.distance_squared_to(at)
				if gap<distance:distance=gap;origin=p;kind="tree";key=str(plant.id)
	return {} if kind.is_empty() else {"kind":kind,"key":key,"at":origin}
func hover(demo,at:Vector2)->bool:
	var found:=target(demo,at)
	if found.is_empty():last_key="";return false
	var kind:String=found.kind;var key:String=found.key;var origin:Vector2=found.at
	var clock:float=demo.music._playback_clock()
	if key==last_key or clock-last_at<.25:return false
	if demo.music.muted or demo.music.concert_active or demo.music._loading:return false
	last_key=key;last_at=clock
	if kind=="stair":return queue_stair(demo.music,key,origin,true)
	var plan:Dictionary={"house_id":"world/"+key,"stream_key":"world_"+kind,"position":origin,"world_kind":kind,"source_id":key}
	return demo.music.attention.enqueue_pluck_arpeggio(plan,clock)

static func queue_stair(music,source:String,at:Vector2,player_action:bool=false)->bool:
	if music.muted or music.concert_active or music._loading or not is_instance_valid(music.life_source):return false
	if (music.acoustic.mode=="city" and not player_action) or music.acoustic.point_weight(at)<=0.:return false
	var stair:Dictionary=music.life_source.travel.site(source)
	if stair.get("kind","")!="stair" or not music.travel_source_gate.is_valid() or not music.travel_source_gate.call("stair",source,at):return false
	var plan:={"house_id":"world/"+source,"stream_key":"stair_key_%d"%int(stair.rank),"position":at,"world_kind":"stair","source_id":source,"rank":int(stair.rank)}
	if stair.has("degree"):plan.degree=int(stair.degree)
	if not player_action:return preload("res://scripts/audio/city_creation_chamber_ornaments.gd").request(music,"stair",source,at,func():play_note(music,plan))
	return music.attention.enqueue_pluck_arpeggio(plan,music._playback_clock(),player_action)

static func play_note(music,plan:Dictionary)->bool:
	if plan.has("life_actor"):return preload("res://scripts/audio/city_creation_life_sparkle.gd").play(music,plan)
	if plan.has("strum_step"):return preload("res://scripts/audio/city_creation_strum_arpeggio.gd").play(music,plan)
	if music.muted or music.concert_active or music.acoustic.point_weight(plan.position)<=0.:return false
	if plan.world_kind=="stair" and (not music.travel_source_gate.is_valid() or not music.travel_source_gate.call("stair",plan.source_id,plan.position)):return false
	var stream:AudioStreamWAV;var key:=str(plan.stream_key)
	var mode:=maxi(0,int(music.harmony_mode()));var bar:int=music.CueGrid.bar(music.CueGrid.transport_clock(music))
	if plan.world_kind in ["water","tree"]:
		var city:RefCounted=music._pluck_city
		if city==null:return false
		if plan.world_kind=="water" and city.water_clearance(plan.position)>=-.12:return false
		if plan.world_kind=="tree":
			var present:=false;var source:=str(plan.get("source_id",""))
			for plant:Dictionary in city.plants:
				if (source.is_empty() or str(plant.id)==source) and plant.kind in ["olive","cypress","golden_tree"] and Vector2(plant.position[0],plant.position[1]).distance_squared_to(plan.position)<.01:present=true;break
			if not present:return false
		# Resolve on execution, so a queued touch crossing a phrase or key
		# change cannot play the previous chord after the score has moved on.
		key="%d/world_%s_%d"%[mode,str(plan.world_kind),bar]
		if not music._harmony_streams.has(key):return false
		stream=music._harmony_streams[key]
	else:
		if plan.world_kind=="stair" and plan.has("degree"):key="stair_key_%d"%preload("res://scripts/world/city_creation_stair_keys.gd").voice_rank(mode,int(plan.degree))
		if not music._edit_streams.has(key):return false
		stream=music._edit_streams[key]
		if plan.world_kind=="stair":
			var raw:=preload("res://scripts/audio/city_creation_harmonic_palette.gd").stair_pitch(mode,int(key.get_slice("_",2)))
			var midi:int=music.CueGrid.snap_to_chord_tone(raw,preload("res://scripts/audio/city_creation_score_harmony.gd").current(music,music.CueGrid.transport_clock(music)).chord)
			stream=music._edit_streams["house_pluck_piano_%d"%midi]
	if plan.world_kind=="stair":stream=preload("res://scripts/audio/city_creation_octave_dyad.gd").at_pitch(music,stream,music.CueGrid.snap_to_chord_tone(preload("res://scripts/audio/city_creation_harmonic_palette.gd").stair_pitch(mode,int(key.get_slice("_",2))),preload("res://scripts/audio/city_creation_score_harmony.gd").current(music,music.CueGrid.transport_clock(music)).chord))
	var player:AudioStreamPlayer=music._effects[0]
	for candidate:AudioStreamPlayer in music._effects:
		if not candidate.playing:player=candidate;break
	stream=preload("res://scripts/audio/city_creation_chamber_ornaments.gd").wave(music,stream)
	music.play_effect_at(player,stream,plan.position,.75)
	music.set_meta("world_pluck",{"kind":plan.world_kind,"source_id":plan.get("source_id",""),"at":plan.position,"clock":music._playback_clock(),"serial":player.get_meta("creation_voice_serial"),"stream_key":key,"mode":mode,"bar":bar,"octave_dyad":bool(stream.get_meta("octave_dyad",false))})
	return true

func update(demo,delta:float)->void:
	preload("res://scripts/audio/city_creation_strum_arpeggio.gd").feedback(demo)
	if is_instance_valid(key_flash):key_flash.hide()
	if _state_id!=demo.state.get_instance_id():
		_state_id=demo.state.get_instance_id();pulse.clear();last_key="";demo.music.set_meta("world_pluck",{})
	var event:Dictionary=demo.music.get_meta("world_pluck",{})
	if not event.is_empty() and event.get("clock",-1.)!=pulse.get("clock",-2.):pulse=event.duplicate();age=0.
	age+=delta
	if pulse.is_empty() or age>1.5:return
	if pulse.kind=="water" and demo.town.water_material!=null:
		demo.town.water_material.set_shader_parameter("travel_ripple_at",pulse.at)
		demo.town.water_material.set_shader_parameter("travel_ripple_time",age)
		demo.town.water_material.set_shader_parameter("travel_ripple_strength",exp(-age*2.))
	elif pulse.kind=="tree":
		for material:Material in demo.town.foliage._materials.values():
			if material is ShaderMaterial:
				material.set_shader_parameter("touch_at",pulse.at)
				material.set_shader_parameter("touch_time",age)
	elif pulse.kind=="stair" and age<(.95 if preload("res://scripts/world/city_creation_tradition_synergy.gd").tier(demo.state,"highland")>0 else .65):
		var stair:Dictionary=demo.life.travel.site(str(pulse.get("source_id","")))
		if stair.is_empty():return
		if not is_instance_valid(key_flash):
			key_flash=MeshInstance3D.new();key_flash.name="StairKeyTouch";key_flash.mesh=BoxMesh.new()
			key_flash.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
			key_flash.material_override=preload("res://scripts/visual/city_creation_metronome_material.gd").glow();demo.add_child(key_flash)
		key_flash.mesh.size=Vector3(float(stair.width)*.82,.012,maxf(.06,minf(.4,float(stair.depth)*.8)))
		key_flash.position=Vector3(pulse.at.x,float(stair.height)+.018,pulse.at.y)
		key_flash.rotation.y=atan2(stair.axis.x,stair.axis.y)
		key_flash.material_override.set_shader_parameter("metronome_strength",exp(-age*6.))
		key_flash.show()
