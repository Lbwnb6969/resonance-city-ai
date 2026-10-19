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
var deferred:=false
var due_at:=0.
var deferred_speed:=0.
var _sampled_at:=0.
var _clock: Node3D
func _init(point:Vector3,heading:float)->void:start=point;target=point;yaw=heading
func point()->Vector3:
	# Long hidden legs are sampled analytically on demand. The scene camera,
	# checkpoints and edits all see today's position between scheduled updates.
	var extra: float=maxf(0.,float(_clock.time)-_sampled_at)*deferred_speed if deferred else 0.
	return start+direction*minf(length,progress+extra)
func defer(clock: Node3D,speed: float,sample_time: float=NAN)->void:
	if speed<=0. or progress>=length:return
	_clock=clock;_sampled_at=float(clock.time) if is_nan(sample_time) else sample_time;deferred_speed=speed
	var remaining:=length-progress
	if watch_travel:
		var at:=start+direction*progress
		remaining*=clock.travel.next_boundary_fraction(Vector2(at.x,at.z),Vector2(target.x,target.z))
	# Visibility, speed changes, invitations and edits can wake it earlier.
	# A bridge/arch needs its next side threshold, otherwise only the corner.
	due_at=_sampled_at+remaining/speed;deferred=true
func settle()->void:
	if not deferred:return
	progress=minf(length,progress+maxf(0.,float(_clock.time)-_sampled_at)*deferred_speed)
	deferred=false;_clock=null
func advance(route:Array[Vector3],index:int,distance:float)->int:
	if leg!=index or target!=route[index]:
		start=point();progress=0.;target=route[index];leg=index
		# Speed advances along the street's planar path. The shared surface
		# supplies Y at observation/publication, including individual treads.
		var delta:=target-start;length=Vector2(delta.x,delta.z).length();direction=delta/length if length>0. else Vector3.ZERO
		if length>0.:yaw=atan2(direction.x,direction.z)
	progress=minf(length,progress+distance)
	return index+1 if progress>=length else index
