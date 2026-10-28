extends RefCounted
## A union roof can contain valleys of either diagonal direction. Choose the
## diagonal closest to its actual height field. Curvature missed by both
## diagonals gets one interior sample; every shared boundary stays identical.
const CENTER_ERROR_METERS:=.008
static func vertices(a:Vector3,b:Vector3,c:Vector3,d:Vector3,sample:Callable)->Array[Vector3]:
	var ac:=a.y+c.y;var bd:=b.y+d.y
	var center:Vector3=sample.call(Vector2(a.x+c.x,a.z+c.z)*.5)
	var ac_error:=absf(ac*.5-center.y);var bd_error:=absf(bd*.5-center.y)
	if minf(ac_error,bd_error)>CENTER_ERROR_METERS:return [a,center,b,b,center,c,c,center,d,d,center,a]
	if bd_error+.000005<ac_error:return [a,d,b,b,d,c]
	return [a,c,b,a,d,c]
