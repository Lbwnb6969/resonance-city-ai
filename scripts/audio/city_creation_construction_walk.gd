extends RefCounted
## All six ascending notes already exist in the pooled house-pluck bank.
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
const Pitch=preload("res://scripts/audio/city_creation_pitch_pluck.gd")
const Harmony=preload("res://scripts/audio/city_creation_score_harmony.gd")
static func advance(owner:Node,now_usec:int)->int:
	var city_id:int=owner._pluck_city.get_instance_id() if owner._pluck_city!=null else 0
	var previous:Dictionary=owner.get_meta("construction_walk",{})
	var step:=0 if previous.is_empty() or city_id!=int(previous.get("city_id",0)) or now_usec-int(previous.get("usec",0))>=1800000 else posmod(int(previous.step)+1,6)
	owner.set_meta("construction_walk",{"city_id":city_id,"step":step,"usec":now_usec})
	return step
static func plan(owner:Node,base:Dictionary,step:int)->Dictionary:
	if base.is_empty():return base
	var result:=base.duplicate();var harmony:=Harmony.current(owner,Palette.Grid.transport_clock(owner));var chord:Array=harmony.chord
	var tones:Array[int]=[]
	for note in range(60,97):
		if Palette.Grid.snap_to_chord_tone(note,chord)==note:tones.append(note)
	var midi:int=tones[step]
	result.midi=midi;result.bar=harmony.bar;result.construction_step=step
	if not harmony.signature.is_empty():result.harmony_signature=harmony.signature
	result.stream_key=Pitch.stream_key(str(result.timbre),midi)
	return result
static func house(owner:Node,id:String)->bool:
	if owner.muted or owner.concert_active or owner._loading or owner._pluck_city==null:return false
	var base:=Pitch.plan(owner._pluck_city,id,owner._playback_clock(),owner.harmony_mode())
	if base.is_empty() or owner.acoustic.point_weight(base.position)<=0.:return false
	var row:=plan(owner,base,advance(owner,Time.get_ticks_usec()))
	owner.canon.clear()
	return owner.attention.enqueue_pluck_arpeggio(row,owner._playback_clock())
static func replan(owner:Node,queued:Dictionary)->Dictionary:
	var base:=Pitch.plan(owner._pluck_city,str(queued.house_id),owner._playback_clock(),owner.harmony_mode())
	return plan(owner,base,int(queued.construction_step)) if queued.has("construction_step") else Harmony.pluck(owner,base,Palette.Grid.transport_clock(owner))
static func edit(owner:Node,kind:String)->void:
	if kind in ["room","road","terrain","house","terrace","erase","remove"]:owner.attention.notify_sculpt_action(owner._playback_clock())
	if owner.muted or owner._loading:return
	if kind=="terrain":kind="road"
	var cue_key:="%d/edit/%s/%d"%[maxi(0,owner.harmony_mode()),kind,Palette.Grid.bar(Palette.Grid.transport_clock(owner))]
	var wave:AudioStreamWAV=owner._harmony_streams.get(cue_key,owner._edit_streams.get(kind))
	if kind in ["room","house","terrace","road"] and owner._pluck_city!=null:
		var source:=str(owner._daily_source_id)
		if owner._pluck_city._house_index(source)<0 and not owner._pluck_city.houses.is_empty():source=str(owner._pluck_city.houses[-1].id)
		var base:=Pitch.plan(owner._pluck_city,source,owner._playback_clock(),owner.harmony_mode())
		if not base.is_empty():
			var row:=plan(owner,base,advance(owner,Time.get_ticks_usec()))
			wave=owner._edit_streams.get(row.stream_key,wave)
			owner.set_meta("construction_last_note",row)
	if wave==null:return
	var selected:AudioStreamPlayer=owner._effects[0]
	for effect:AudioStreamPlayer in owner._effects:
		if not effect.playing:selected=effect;break
	owner.play_effect_at(selected,wave)
