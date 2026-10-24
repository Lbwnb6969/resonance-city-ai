extends RefCounted
## Olive/gold crowns grow as tilted sprays with a scalloped edge. Flowers and
## cypress retain their own silhouettes; normals follow this same parametric skin.
static func point(theta:float,angle:float,phase:float,radius:Vector3,kind:String)->Vector3:
	var unit:=Vector3(cos(angle)*sin(theta),cos(theta),sin(angle)*sin(theta))
	var wave:=1.+.10*sin(angle*3.+phase)*sin(theta)+.055*sin(angle*5.-phase+theta*2.)*sin(theta)
	var at:=unit*radius*wave
	if kind=="cypress":
		var taper:=1.-.32*smoothstep(-.25,1.,unit.y)
		at.x*=taper;at.z*=taper;at.y+=radius.y*.06*sin(angle*3.+phase)*sin(theta)
	if kind in ["olive","golden"]:
		var fan:=1.+.13*sin(angle*3.+phase+theta*.8)*sin(theta)*sin(theta)
		at.x*=fan;at.z*=fan
		at.y*=.70 if kind=="golden" else .78
		at.x+=radius.x*.24*unit.y*sin(phase)
		at.y+=radius.y*.18*sin(angle+phase)*sin(theta)
		# A tapered spray ends in a narrow twig tip, with a fuller lower shoulder.
		var taper:=1.-.20*smoothstep(-.15,.95,unit.y)
		at.x*=taper;at.z*=taper
	return at
static func normal(theta:float,angle:float,phase:float,radius:Vector3,kind:String)->Vector3:
	var a:=point(theta+.002,angle,phase,radius,kind)-point(theta-.002,angle,phase,radius,kind)
	var b:=point(theta,angle+.002,phase,radius,kind)-point(theta,angle-.002,phase,radius,kind)
	return -a.cross(b).normalized()
