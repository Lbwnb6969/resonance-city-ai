extends RefCounted
const TargetRules=preload("res://scripts/world/city_creation_terrain_target_rules.gd")
## Continue an ordered smoothed field only when its entire source history and
## water base are intact. Replacements, Undo and new blur passes use cold replay.
static func apply(terrain,waters:Array,clearance:Callable,strokes:Array,signature:int)->bool:
	var previous:Array=terrain._previous_strokes
	if terrain.raw_vertices.is_empty() or waters!=terrain._previous_waters or strokes.size()<=previous.size():return false
	var smoothed:=false
	for i in range(previous.size()):
		if previous[i]!=strokes[i]:return false
		if previous[i].mode=="smooth" or TargetRules.targeted(previous[i]):smoothed=true
	if not smoothed and not strokes.slice(previous.size()).any(func(row):return TargetRules.targeted(row)):return false
	for i in range(previous.size(),strokes.size()):
		if strokes[i].mode=="smooth":return false
	var next:PackedFloat32Array=terrain.raw_vertices.duplicate()
	var offsets:PackedFloat32Array=terrain.raw_offsets.duplicate()
	var regions:Array=[];var changed:Dictionary={}
	for i in range(previous.size(),strokes.size()):
		var row:Dictionary=strokes[i]
		terrain._sculpt_stroke(next,offsets,row,clearance)
		var bounds:Rect2=terrain._stroke_bounds(row).intersection(terrain.LAND_RECT)
		regions.append(bounds)
		var low:Vector2=((bounds.position-terrain.LAND_RECT.position)/terrain.STEP).floor().max(Vector2.ZERO)
		var high:Vector2=((bounds.end-terrain.LAND_RECT.position)/terrain.STEP).ceil().min(Vector2(terrain.COLUMNS-1,terrain.ROWS-1))
		for z in range(int(low.y),int(high.y)+1):
			for x in range(int(low.x),int(high.x)+1):changed[z*terrain.COLUMNS+x]=true
	terrain.raw_vertices=next;terrain.raw_offsets=offsets
	terrain._raw_signature=signature
	terrain._previous_strokes=strokes.duplicate(true)
	terrain._pending_raw_regions.append_array(regions)
	terrain.stats["raw_changed_vertices"]=changed.size()
	terrain.raw_generation+=1
	return true
