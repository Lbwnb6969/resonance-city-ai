extends RefCounted
## Preview sound uses one idle short slot, with a dwell and exit hysteresis.
const Plans = preload("res://scripts/world/city_creation_chemistry_preview.gd")
const Ghost = preload("res://scripts/visual/city_creation_chemistry_ghost.gd")
const Pluck = preload("res://scripts/audio/city_creation_pitch_pluck.gd")
var demo
var last_key := ""
var rows: Array = []
var dwell := 0.
var left_at := 0.
var heard := {}
var cue_count := 0
var prepare_ms := 0.
func setup(owner: Node) -> void: demo = owner
func building(candidate: Dictionary) -> void:
	_update("house",candidate,[],0.,"")
func stroke() -> void:
	var result: Dictionary = demo.house_stroke_result
	var candidate := {"valid":result.get("ok",false),"cells":result.get("added_cells",[]),"base_y":result.get("base_y",0.)}
	if demo.house_stroke_host.is_empty(): candidate.new_house = demo.house_stroke_origin
	else: candidate.house_id = demo.house_stroke_host; candidate.cell = {}
	if candidate.cells.is_empty(): return
	building(candidate)
func road(points: Array[Vector2], width: float, style: String, valid: bool) -> void:
	_update("road",{"valid":valid},points,width,style)
func _update(mode: String, candidate: Dictionary, points: Array[Vector2], width: float, style: String) -> void:
	var key := str([demo.state.revision,mode,candidate,points,width,style])
	if key != last_key:
		var started := Time.get_ticks_usec()
		rows = Plans.building(demo.state,candidate) if mode == "house" else Plans.road(demo.state,points,width,style,bool(candidate.valid))
		prepare_ms = float(Time.get_ticks_usec()-started)/1000.
		last_key = key; dwell = 0.
	if demo.town.preview.has_node("ChemistryGhost"):
		var previous: Node = demo.town.preview.get_node("ChemistryGhost")
		demo.town.preview.remove_child(previous); previous.queue_free()
	Ghost.build(demo.town.preview,rows)
func tick(delta: float) -> void:
	if not demo.town.preview.has_node("ChemistryGhost") or demo.tool not in [0,1,2]:
		left_at += delta; dwell = 0.
		if left_at > 1.: heard.clear(); last_key = ""; rows = []
		return
	left_at = 0.; dwell += delta
	if dwell < .22 or demo.music.muted or demo.music._loading or demo.music.concert_active: return
	for row: Dictionary in rows:
		if heard.has(row.kind): continue
		var band: int = ["courtyard","arcade","conservatory","bridge","stairs","skybridge"].find(row.kind)%5
		var bar := int(demo.music._playback_clock()/3.)%8
		var mode: int = demo.music.harmony_mode()
		var midi: int = Pluck.Palette.pitch(mode,bar,band,1) if mode >= 0 else Pluck.pitch(bar,band,1)
		var key := Pluck.stream_key("harp",midi)
		if not demo.music._edit_streams.has(key): continue
		for effect: AudioStreamPlayer in demo.music._effects:
			if effect.playing: continue
			demo.music.play_effect_at(effect,demo.music._edit_streams[key],Vector2(row.at.x,row.at.z),.17)
			heard[row.kind] = true; cue_count += 1; dwell = 0.
			return
