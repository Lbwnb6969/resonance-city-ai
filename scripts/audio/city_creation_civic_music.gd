extends RefCounted
## Supplied salons already own the middle-register air texture. Never add a
## second ad-hoc high duet on top of their globally budgeted life ornament.
const Supply=preload("res://scripts/world/city_creation_civic_supply.gd")
static func tick(demo:Node3D)->void:
	var music:Node=demo.music;var before:int=demo.get_meta("civic_tea_cue",0)
	if music._cafe_cues==before:return
	demo.set_meta("civic_tea_cue",music._cafe_cues)
	var id:=str(music._cafe_source)
	if music._loading or music.muted or music.concert_active or Supply.status(demo.state,id).tier<2:return
	music.record_life_activity("tea",id,music._source_position(id))
	var events:Array=music.get_meta("civic_duet_events",[])
	events.append({"source":id,"layer":2,"track":"air","tier":2,"kind":"supplied_chamber_counterpoint"})
	if events.size()>64:events.pop_front()
	music.set_meta("civic_duet_events",events)
