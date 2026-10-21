extends RefCounted
## World play borrows the existing quantized finger queue and four short voices.
var last_key:=""
var last_at:=-10.
var pulse:Dictionary={}
var age:=0.

func hover(demo,at:Vector2)->bool:
	var kind:="";var key:="";var origin:=at
	if demo.state.water_clearance(at)<-.12:
		kind="water";key="water/"+str((at/1.2).floor())
	else:
		var distance:=1.4*1.4
		for plant:Dictionary in demo.state.plants:
			if plant.kind not in ["olive","cypress","golden_tree"]:continue
			var p:=Vector2(plant.position[0],plant.position[1]);var gap:=p.distance_squared_to(at)
			if gap<distance:distance=gap;origin=p;kind="tree";key=str(plant.id)
	if kind.is_empty():last_key="";return false
	var clock:float=demo.music._playback_clock()
	if key==last_key or clock-last_at<.25:return false
	if demo.music.muted or demo.music.concert_active or demo.music._loading:return false
	last_key=key;last_at=clock
	var plan:Dictionary={"house_id":"world/"+key,"stream_key":"tea" if kind=="water" else "arrival","position":origin,"world_kind":kind}
	return demo.music.attention.enqueue_pluck_arpeggio(plan,clock)

static func play_note(music,plan:Dictionary)->bool:
	if music.muted or music.concert_active or not music._edit_streams.has(plan.stream_key) or music.acoustic.point_weight(plan.position)<=0.:return false
	var player:AudioStreamPlayer=music._effects[0]
	for candidate:AudioStreamPlayer in music._effects:
		if not candidate.playing:player=candidate;break
	music.play_effect_at(player,music._edit_streams[plan.stream_key],plan.position,.75)
	music.set_meta("world_pluck",{"kind":plan.world_kind,"at":plan.position,"clock":music._playback_clock(),"serial":player.get_meta("creation_voice_serial")})
	return true

func update(demo,delta:float)->void:
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
