extends RefCounted
## Finite, bounded authored score contract; role never changes pooled layer.
const ROLES:={"foundation":1,"pulse":2,"answer":2,"lead":3,"sparkle":4}
const TIMBRES:=["flute","guitar","bass","horn","felt_nocturne","felt_piano","cello_harmonic"]
static func valid(events:Array)->bool:
	if events.is_empty() or events.size()>256:return false
	for item:Variant in events:
		if not item is Dictionary:return false
		for field:String in ["start","duration","beat","beats","midi","gain","layer"]:
			if not item.get(field) is float and not item.get(field) is int:return false
			if not is_finite(float(item[field])):return false
		if not ROLES.has(item.get("role")) or item.layer!=ROLES[item.role] or item.get("timbre") not in TIMBRES:return false
		if item.midi!=floorf(item.midi) or item.midi<24 or item.midi>100:return false
		if item.start<0. or item.start>=24. or item.duration<=0. or item.duration>4. or item.gain<0. or item.gain>.18:return false
		if not is_equal_approx(item.beat*.75,item.start) or not is_equal_approx(item.beats*.75,item.duration):return false
		if not is_equal_approx(item.beat*4.,roundf(item.beat*4.)):return false
	return true
