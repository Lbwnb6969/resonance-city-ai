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
var planner=preload("res://scripts/ui/city_creation_chemistry_worker.gd").new()
var pending:Dictionary={}
var pending_age:=0.
func _preview_ids()->Array:
	return demo.town.preview.get_children().filter(func(node):return str(node.name)!="ChemistryGhost").map(func(node):return node.get_instance_id())
func setup(owner: Node) -> void:
	demo=owner;demo.tree_exiting.connect(planner.close)
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
	var preview_ids:=_preview_ids()
	var key := str([demo.state.get_instance_id(),demo.state.revision,mode,candidate,points,width,style,preview_ids])
	if key != last_key:
		pending={"key":key,"mode":mode,"candidate":candidate.duplicate(true),"points":points.duplicate(),"width":width,"style":style,"preview_ids":preview_ids};pending_age=0.;rows=[]
		if not candidate.get("valid",false):pending={}
		last_key = key; dwell = 0.;prepare_ms=0.
	if demo.town.preview.has_node("ChemistryGhost"):
		var previous: Node = demo.town.preview.get_node("ChemistryGhost")
		demo.town.preview.remove_child(previous); previous.queue_free()
func tick(delta: float) -> void:
	var preview_mode:String="road" if demo.tool==2 else "house"
	var ready:Dictionary=planner.poll()
	if not ready.is_empty() and ready.key==last_key and ready.mode==preview_mode and ready.preview_ids==_preview_ids() and ready.state_id==demo.state.get_instance_id() and ready.revision==demo.state.revision and not demo.edit_pending() and demo.tool in [0,1,2]:
		rows=ready.rows;prepare_ms=ready.ms;Ghost.build(demo.town.preview,rows)
	if demo.tool not in [0,1,2]:pending.clear();last_key=""
	if not pending.is_empty() and (pending.mode!=preview_mode or pending.preview_ids!=_preview_ids()):pending.clear();last_key=""
	if not pending.is_empty():
		pending_age+=delta
		if pending_age>=.16 and not demo.edit_pending() and not planner.busy():planner.start(demo.state,pending);pending={}
	if not pending.is_empty() or planner.busy():return
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
		midi=preload("res://scripts/audio/city_creation_score_harmony.gd").note(demo.music,midi,demo.music.CueGrid.transport_clock(demo.music))
		var key := Pluck.stream_key("harp",midi)
		if not demo.music._edit_streams.has(key): continue
		for effect: AudioStreamPlayer in demo.music._effects:
			if effect.playing: continue
			demo.music.play_effect_at(effect,demo.music._edit_streams[key],Vector2(row.at.x,row.at.z),.17)
			heard[row.kind] = true; cue_count += 1; dwell = 0.
			return
