extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
## Geometry fixes membership; the uninterrupted PCM transport fixes every slot.
## One visible ring shares the existing short pool, never one player per house.
const Pitch=preload("res://scripts/audio/city_creation_pitch_pluck.gd")
const BEAT_SECONDS:=.75
const BOUNDARY_WINDOW:=.10
const ROUND_REACH:=5.4
var groups: Array[Dictionary]=[]
var cues:=0
var skipped:=0
var _owner: Node
var _city: RefCounted
var _last_beat: int=-1
var _active: Dictionary={}
var _player: AudioStreamPlayer
var _stream: AudioStreamWAV
var _voice_serial: int=-1

static func _house_center(house: Dictionary)->Vector2:
	var sum:=Vector2.ZERO;var count:=0
	for cell: Dictionary in house.cells:
		if int(cell.level)!=0 or cell.kind!="room":continue
		sum+=Frame.center(house,cell);count+=1
	return sum/float(count) if count>0 else Vector2(house.origin[0],house.origin[1])

static func _ordered(ids: Array,center: Vector2,houses: Dictionary)->Array[String]:
	var rows: Array[Dictionary]=[]
	for id: String in ids:
		if not houses.has(id):continue
		var offset: Vector2=_house_center(houses[id])-center
		if offset.is_zero_approx():continue
		rows.append({"id":id,"angle":fposmod(atan2(offset.x,-offset.y),TAU)})
	rows.sort_custom(func(a: Dictionary,b: Dictionary)->bool:return str(a.id)<str(b.id) if a.angle==b.angle else a.angle<b.angle)
	var result: Array[String]=[]
	for row: Dictionary in rows:result.append(str(row.id))
	return result

static func derive(city: RefCounted)->Array[Dictionary]:
	var houses: Dictionary={}
	for house: Dictionary in city.houses:houses[str(house.id)]=house
	var result: Array[Dictionary]=[]
	for court: Dictionary in city.courtyard_plans():
		var center:=Vector2(roundi(court.center.x*1000.)/1000.,roundi(court.center.y*1000.)/1000.)
		var ordered:=_ordered(court.members,center,houses)
		if ordered.size()>=3:
			# The courtyard planner's local grid anchor can change with storage
			# order. Absolute millimetre tile keys keep this musical identity fixed.
			var tiles: Array[Vector2i]=[]
			for tile:Variant in court.tiles:
				var at:=Frame.box_center(tile);tiles.append(Vector2i(roundi(at.x*1000.),roundi(at.y*1000.)))
			tiles.sort_custom(func(a: Vector2i,b: Vector2i)->bool:return a.x<b.x or (a.x==b.x and a.y<b.y))
			var key:=PackedStringArray()
			for tile: Vector2i in tiles:key.append("%d,%d"%[tile.x,tile.y])
			result.append({"id":"canon/court/"+";".join(key),"kind":"courtyard","center":center,"members":ordered})
	for marker: Dictionary in city.Roundabouts.all(city.roads):
		var ids: Array[String]=[]
		for id: String in houses:
			var house: Dictionary=houses[id];var distance:=INF
			for cell: Dictionary in house.cells:
				if int(cell.level)!=0 or cell.kind!="room":continue
				var at:=Frame.center(house,cell)
				distance=minf(distance,at.distance_to(marker.center))
			if distance<=float(marker.radius)+ROUND_REACH:ids.append(id)
		var ordered:=_ordered(ids,marker.center,houses)
		if ordered.size()<3:continue
		# A line or one-sided cluster around a road marker is not a ring.
		var encloses:=true
		for i in range(ordered.size()):
			var a: Vector2=_house_center(houses[ordered[i]])-Vector2(marker.center)
			var b: Vector2=_house_center(houses[ordered[(i+1)%ordered.size()]])-Vector2(marker.center)
			var gap:=fposmod(atan2(b.x,-b.y)-atan2(a.x,-a.y),TAU)
			if gap>=PI-.001:encloses=false;break
		if encloses:
			result.append({"id":"canon/round/%s/%d,%d"%[marker.owner_id,roundi(marker.center.x*1000.),roundi(marker.center.y*1000.)],"kind":"roundabout","center":marker.center,"members":ordered})
	result.sort_custom(func(a: Dictionary,b: Dictionary)->bool:return str(a.id)<str(b.id))
	return result

static func slot(group: Dictionary,clock: float)->Dictionary:
	var beat:=floori(maxf(0.,clock)/BEAT_SECONDS)
	var index:=posmod(beat,group.members.size())
	return {"beat":beat,"slot":index,"house_id":str(group.members[index]),"start_clock":beat*BEAT_SECONDS}

func setup(music: Node)->void:_owner=music
func sync(city: RefCounted,prepared_groups:Variant=null)->void:
	_city=city;groups.assign(derive(city) if prepared_groups==null else prepared_groups.duplicate(true))
	if _owner!=null:report()

func _selected()->Dictionary:
	if _owner==null or _owner.muted or _owner.concert_active or _owner._loading or _owner.acoustic.mode=="city":return {}
	var selected: Dictionary={};var best:=INF
	for group: Dictionary in groups:
		if _owner.acoustic.point_weight(group.center)<=0.:continue
		var visible:=false
		for id: String in group.members:
			if _owner.acoustic.focus_weight(id)>0.:visible=true;break
		if not visible:continue
		var distance: float=_owner.acoustic.focus.distance_squared_to(group.center)
		if distance<best:best=distance;selected=group
	return selected

func _owns()->bool:
	return _player!=null and _player.stream==_stream and int(_player.get_meta("creation_voice_serial",-1))==_voice_serial

func clear()->void:
	if _owns():_player.stop()
	_active.clear();_player=null;_stream=null;_voice_serial=-1

func reset()->void:clear();_last_beat=-1

func step(clock: float,offset_sec:float=0.)->void:
	report()
	if clock<offset_sec:return
	var beat:=floori(maxf(0.,clock-offset_sec)/BEAT_SECONDS)
	if beat==_last_beat:return
	_last_beat=beat
	var group:=_selected()
	if group.is_empty():return
	# Entering mid-beat or recovering a long frame leaves a rest. Do not burst
	# old notes or reset the sequence to the beginning of a bar or a camera view.
	if clock-offset_sec-beat*BEAT_SECONDS>BOUNDARY_WINDOW or _owner.house_pluck_report().get("glowing",false):skipped+=1;return
	var planned:=slot(group,clock-offset_sec);planned.start_clock+=offset_sec
	var id: String=planned.house_id
	if _owner.acoustic.focus_weight(id)<=0.:skipped+=1;return
	if not _owner.get_meta("chamber_dispatch",false):
		preload("res://scripts/audio/city_creation_chamber_ornaments.gd").request(_owner,"canon",id,Vector2(_owner._house_music[id].position),func():_emit(planned,group,_owner._playback_clock()));return
	_emit(planned,group,clock)

func _emit(planned:Dictionary,group:Dictionary,clock:float)->void:
	var current:=_selected()
	if current.is_empty() or current.id!=group.id:return
	var id:=str(planned.house_id);planned=planned.duplicate();planned.start_clock=clock
	var plan:=Pitch.plan(_city,id,clock,_owner.harmony_mode())
	if plan.is_empty() or not _owner._edit_streams.has(plan.stream_key):return
	var selected: AudioStreamPlayer
	for effect: AudioStreamPlayer in _owner._effects:
		if not effect.playing:selected=effect;break
	if selected==null:skipped+=1;return
	clear()
	_player=selected;_stream=preload("res://scripts/audio/city_creation_chamber_ornaments.gd").wave(_owner,_owner._edit_streams[plan.stream_key])
	_owner.play_effect_at(selected,_stream,plan.position,_owner.acoustic.focus_weight(id)*.72)
	_voice_serial=int(selected.get_meta("creation_voice_serial",-1))
	cues+=1
	_active=plan.duplicate();_active.midi=_stream.get_meta("chamber_midi",plan.midi);_active.merge(planned,true)
	_active.merge({"ring_id":group.id,"members":group.members.duplicate(),"center":group.center,"serial":cues},true)

func report()->Dictionary:
	var group:=_selected()

	var clock: float=_owner._playback_clock() if _owner!=null else 0.
	var elapsed: float=maxf(0.,clock-float(_active.get("start_clock",0.)))
	var valid:=_owns() and not group.is_empty() and not _active.is_empty() and elapsed<Pitch.GLOW_DURATION
	if valid:
		valid=group.id==_active.ring_id and group.members==_active.members and _owner.acoustic.focus_weight(str(_active.house_id))>0. and _owner._same_pluck_source(Pitch.plan(_city,str(_active.house_id),clock),_active)
	if not valid:clear()
	var result: Dictionary={"audible":valid and _player!=null and _player.playing,"glowing":valid,"house_id":"","elapsed":elapsed,"duration":Pitch.DURATION,"glow_duration":Pitch.GLOW_DURATION,"serial":cues,"cues":cues,"skipped":skipped,"beat_seconds":BEAT_SECONDS,"clock_sec":clock,"ring_id":group.get("id",""),"members":group.get("members",[]).duplicate(),"center":group.get("center",Vector2.ZERO)}
	if valid:result.merge(_active,true)
	return result
