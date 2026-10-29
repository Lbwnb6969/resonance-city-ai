extends RefCounted
## Join only adjacent, physically usable spans of the same street and owners.
## A shared network component alone is never a continuous frontage.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const EPS:=.002

static func join(rows:Array,city:RefCounted,report:Dictionary,obstacles:Array,water_distance:Callable)->Array:
	var result:Array=[]
	for row:Dictionary in rows:
		if result.is_empty() or not _adjacent(result[-1],row):result.append(row);continue
		var previous:Dictionary=result[-1]
		var bridge:=_bridge(previous,row)
		if bridge.size()<3 or obstacles.any(func(box):return Frame.boxes_overlap({"polygon":bridge},Frame.grow(box,-EPS))) or float(water_distance.call({"polygon":bridge}))<.05:
			result.append(row);continue
		var merged:Dictionary=previous.duplicate(true);var evidence:Dictionary=merged.evidence
		evidence.segments=previous.evidence.get("segments",[previous.evidence.segment]).duplicate()
		evidence.segments.append(row.evidence.segment);evidence.to=row.evidence.to
		evidence.usable_strips.append(bridge);evidence.usable_strips.append_array(row.evidence.usable_strips)
		evidence.width_min=minf(evidence.width_min,row.evidence.width_min);evidence.width_max=maxf(evidence.width_max,row.evidence.width_max)
		for source:String in row.source_ids:
			if not merged.source_ids.has(source):merged.source_ids.append(source)
		merged.source_ids.sort()
		for wall:Dictionary in row.evidence.wall_segments:
			if not evidence.wall_segments.has(wall):evidence.wall_segments.append(wall)
		for entry:Dictionary in row.evidence.public_entries:
			if not evidence.public_entries.has(entry):evidence.public_entries.append(entry)
		var served:Array=[]
		for entry:Dictionary in evidence.public_entries:
			if not served.has(entry.house_id):served.append(entry.house_id)
		var published:Array=city._region_network.get("road_components",{}).get(evidence.road_id,[]) if report.network_ready else []
		var eligible:bool=merged.connected and merged.component in published and served.size()==merged.members.size()
		merged.stage="district" if eligible else "cluster"
		merged.eligibility={"district":eligible,"warm":false,"reason":"qualified" if eligible else "network_waiting" if not report.network_ready else "public_entry_missing" if served.size()!=merged.members.size() else "street_disconnected"}
		result[-1]=merged
	return result

static func _adjacent(a:Dictionary,b:Dictionary)->bool:
	var left:Dictionary=a.evidence;var right:Dictionary=b.evidence
	var segments:Array=left.get("segments",[left.segment])
	return left.road_id==right.road_id and a.members==b.members and a.component==b.component and a.connected==b.connected and int(segments[-1])+1==int(right.segment) and Vector2(left.to).distance_to(right.from)<=EPS

static func _bridge(a:Dictionary,b:Dictionary)->PackedVector2Array:
	var end:PackedVector2Array=a.evidence.usable_strips[-1]
	var start:PackedVector2Array=b.evidence.usable_strips[0]
	var polygon:=Geometry2D.convex_hull(PackedVector2Array([end[2],end[3],start[0],start[1]]))
	if polygon.size()>1 and polygon[0].is_equal_approx(polygon[-1]):polygon.resize(polygon.size()-1)
	return polygon
