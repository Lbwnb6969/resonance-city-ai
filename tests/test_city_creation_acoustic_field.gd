extends SceneTree
const Field=preload("res://scripts/audio/city_creation_acoustic_field.gd")
const Pitch=preload("res://scripts/audio/city_creation_pitch_pluck.gd")
var checks:=0
var failures: Array[String]=[]
func _check(ok: bool,label: String)->void:
	checks+=1
	if not ok: failures.append(label)
func _initialize()->void:
	var field:=Field.new()
	var houses: Dictionary={
		"core":{"position":Vector2.ZERO,"district_id":"a"},
		"edge":{"position":Vector2(9,0),"district_id":"a"},
		"link":{"position":Vector2(34,0),"district_id":"b"},
		"event":{"position":Vector2(65,0),"district_id":"c"},
		"quiet":{"position":Vector2(100,0),"district_id":"d"}}
	var pairs: Array=[{"from_district":"a","to_district":"b"},{"from_district":"b","to_district":"d"}]
	field.set_view(Vector2.ZERO,16)
	field.evaluate(houses,pairs,["event"])
	_check(field.zones.core.zone=="focus" and field.weight("core")==1.0,"focus centre owns full melody weight")
	_check(field.zones.edge.zone=="focus" and field.weight("edge")>0 and field.weight("edge")<1,"focus boundary has smooth distance attenuation")
	_check(field.zones.link.zone=="linked" and field.weight("link")==.5,"one-hop partner receives half-weight outside focus")
	_check(field.zones.event.zone=="event" and field.weight("event")==.25,"explicit distant event is bounded at quarter-weight")
	_check(field.zones.quiet.zone=="silent" and field.weight("quiet")==0,"linked chains cannot wake the silent majority")
	_check(field.mode=="detail" and field.radius==12,"close view selects detail mix and minimum radius")
	field.set_view(Vector2.ZERO,80);field.evaluate(houses,pairs)
	_check(field.mode=="city" and field.radius==28 and field.weight("event")==0,"far view aggregates a bounded core and ends transient event permission")
	field.set_view(Vector2.ZERO,25,func(id: String)->bool:return id!="core")
	field.evaluate(houses,[])
	_check(field.zones.core.zone=="silent" and field.weight("core")==0,"frustum rejection beats radial proximity")
	field.set_view(Vector2.ZERO,14,Callable(),func(at: Vector2)->bool:return at.x<0)
	_check(field.point_weight(Vector2(1,0))==0 and field.point_weight(Vector2(-1,0))>0,"transient world-point cues also respect the camera frustum")
	field.set_view(Vector2(-100,0),14);field.evaluate(houses,pairs)
	_check(field.focus_ids.is_empty() and field.linked_ids.is_empty() and houses.keys().all(func(id):return field.weight(id)==0),"empty view stays completely silent without nearest-house fallback")
	var pitches_distinct:=true
	for bar in range(8):
		var previous: int=Pitch.pitch(bar,0,0)
		for floor_index in range(1,5):
			var midi:=Pitch.pitch(bar,floor_index,0)
			pitches_distinct=pitches_distinct and midi>previous;previous=midi
	_check(pitches_distinct,"all eight harmony bars provide five ascending distinct floor notes")
	print("ACOUSTIC_FIELD ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}))
	quit(0 if failures.is_empty() else 1)
