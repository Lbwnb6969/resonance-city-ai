extends RefCounted
## Runtime-only scalar route motion. Hidden actors retain every real visit and
## sensor crossing; their scene transforms are published at visibility/events.
var start:Vector3
var direction:=Vector3.ZERO
var progress:=0.
var length:=0.
var target:=Vector3.ZERO
var watch_travel:=false
var leg:=-1
var yaw:=0.
func _init(point:Vector3,heading:float)->void:start=point;target=point;yaw=heading
func point()->Vector3:return start+direction*progress
func advance(route:Array[Vector3],index:int,distance:float)->int:
	if leg!=index or target!=route[index]:
		start=point();progress=0.;target=route[index];leg=index
		var delta:=target-start;length=delta.length();direction=delta/length if length>0. else Vector3.ZERO
		if length>0.:yaw=atan2(direction.x,direction.z)
	progress=minf(length,progress+distance)
	return index+1 if progress>=length else index
