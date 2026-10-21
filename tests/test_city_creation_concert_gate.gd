extends SceneTree
const Music=preload("res://scripts/audio/city_creation_music.gd")
var checks:=0
var failures:Array[String]=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:
	var music:=Music.new()
	check(not music.concert_can_start(),"unloaded native voices cannot start a performance")
	check(not music._concert_boundary_ready(5.94),"late odd bar waits")
	check(music._concert_boundary_ready(6.082),"audio block crossing the old 75ms window starts at its first available sample")
	check(music._concert_boundary_ready(6.082),"repeated polling cannot consume the available boundary")
	check(not music._concert_boundary_ready(2.),"rewinding clears the preceding block's authorization")
	check(not music._concert_boundary_ready(6.082),"a long seek back to an identical old block cannot reuse its authorization")
	check(not music._concert_boundary_ready(6.175),"following audio block closes the boundary")
	check(not music._concert_boundary_ready(11.95) and music._concert_boundary_ready(12.04),"ordinary near-boundary start remains available")
	check(not music._concert_boundary_ready(23.99) and music._concert_boundary_ready(24.085),"continuous transport accepts the first block after the PCM loop boundary")
	check(not music._concert_boundary_ready(9.),"restoring a different city's mid-phrase transport does not start a movement")
	check(not music._concert_boundary_ready(11.9) and not music._concert_boundary_ready(13.),"a long observation stall cannot authorize a late start")
	check(not music._concert_boundary_ready(17.98) and music._concert_boundary_ready(18.09),"polling resumes at the next genuine even bar")
	music.restore_city_transport({"phase":"idle","venue_id":"","chorus_house_ids":[]})
	check(not music._concert_boundary_ready(18.09),"switching complete works cannot reuse the previous city's latched audio block")
	check(not music._concert_boundary_ready(18.19),"the next block cannot retrigger that movement")
	music.free()
	print("CONCERT_GATE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}))
	quit(0 if failures.is_empty() else 1)
