extends RefCounted
## Continue existing retaining masonry to the dry face of a real stone
## abutment. The open arch stays open; timber/truss/modern spans keep theirs.
const Plan=preload("res://scripts/world/city_creation_bridge_plan.gd")
static func clip(profile:Dictionary,a:Dictionary,b:Dictionary)->Dictionary:
	var low:=0.;var high:=1.;var bank:=false;var boundary:=false
	var low_normal:=Vector2.ZERO;var high_normal:=Vector2.ZERO
	var start:float=a.distance;var finish:float=b.distance
	for run:Dictionary in profile.get("bridge_runs",[]):
		if run.has("family"):continue
		var left:float=run.start-.12;var right:float=run.end+.12
		if finish>left and start<right:
			if start<left:
				high=minf(high,(left-start)/(finish-start));high_normal=_normal(run,left)
			elif finish>right:
				low=maxf(low,(right-start)/(finish-start));low_normal=_normal(run,right)
			else:return {}
			bank=true;boundary=true
		elif finish>=left-1.25 and start<=right+1.25:bank=true
	if (a.bridge or b.bridge) and not boundary:return {}
	return {"low":low,"high":high,"bank":bank,"low_normal":low_normal,"high_normal":high_normal}
static func _normal(run:Dictionary,arc:float)->Vector2:
	var tangent:Vector2=Plan._point(run.samples,arc).tangent
	return tangent.orthogonal()
