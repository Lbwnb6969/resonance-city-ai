extends RefCounted
## Opaque folded near blades share the original footprint, UV wind and LOD pool.
static func blade(owner,s:SurfaceTool,index:int,folded:bool)->void:
	var angle:float=[.08,.95,2.38,4.12,.45,2.05,3.65][index]
	var height:float=[.16,.19,.17,.18,.22,.27,.245][index]
	var reach:float=[.16,.17,.165,.175,.07,.06,.075][index]
	var width:float=[.036,.039,.035,.037,.033,.034,.033][index]
	var outward:=Vector3(cos(angle),0,sin(angle));var across:=Vector3(-sin(angle),0,cos(angle))
	var root:Vector3=outward*.006;var outer:bool=index<4
	if folded:_rounded(s,root,outward,across,height,reach,width,index);return
	var centers:Array[Vector3]=[]
	for t:float in [0.,.40,.76,1.]:centers.append(_center(root,outward,height,reach,t,index))
	var widths:Array[float]=[width*.55,width,width*.62,0.]
	var left:Array[Vector3]=[];var right:Array[Vector3]=[]
	for i in range(4):
		var tilt:float=(.12 if index%2==0 else -.12)*widths[i] if folded else 0.
		left.append(centers[i]-across*widths[i]+Vector3.UP*tilt);right.append(centers[i]+across*widths[i]-Vector3.UP*tilt)
	if not folded:
		for i in range(2):
			owner._triangle(s,left[i],right[i],right[i+1],Color.WHITE,height,outward);owner._triangle(s,left[i],right[i+1],left[i+1],Color.WHITE,height,outward)
		owner._triangle(s,left[2],right[2],centers[3],Color.WHITE,height,outward);return
static func _rounded(s:SurfaceTool,root:Vector3,outward:Vector3,across:Vector3,height:float,reach:float,width:float,index:int)->void:
	var points:=PackedVector3Array();var normals:=PackedVector3Array();var faces:Array[int]=[]
	# A closed biconvex leaf has a real rounded edge even at ground level.
	for i in range(8):
		var t:float=[0.,.17,.34,.50,.65,.78,.90,.97][i];var w:float=width*[.22,.55,.86,1.,.88,.60,.26,.075][i]
		var center:=_center(root,outward,height,reach,t,index)
		var tangent:=(_center(root,outward,height,reach,minf(1.,t+.001),index)-_center(root,outward,height,reach,maxf(0.,t-.001),index)).normalized()
		var depth_axis:Vector3=across.cross(tangent).normalized();var depth:float=minf(w*.30,maxf(.002,height-center.y)*.65)
		for sector in range(8):
			var angle:float=float(sector)*TAU/8.
			points.append(center+across*cos(angle)*w+depth_axis*sin(angle)*depth)
			normals.append((across*cos(angle)/w+depth_axis*sin(angle)/depth).normalized())
	points.append(_center(root,outward,height,reach,1.,index));normals.append((_center(root,outward,height,reach,1.,index)-_center(root,outward,height,reach,.999,index)).normalized())
	points.append(root);normals.append(-outward)
	for i in range(7):
		for j in range(8):
			var a:int=i*8+j;var b:int=i*8+(j+1)%8;faces.append_array([a,b,a+8,b,b+8,a+8])
	for j in range(8):faces.append_array([56+j,56+(j+1)%8,64,j,65,(j+1)%8])
	for i:int in faces:
		s.set_normal(normals[i]);s.set_color(Color.WHITE);s.set_uv(Vector2(float(index+1),clampf(points[i].y/height,0.,1.)));s.add_vertex(points[i])
static func _center(root:Vector3,outward:Vector3,height:float,reach:float,t:float,index:int)->Vector3:
	var bend:=pow(maxf(0.,(t-.45)/.55),2.)
	var drop:=.36+.035*sin(index*1.7) if index<4 else .23+.025*cos(index*1.3)
	var across:=Vector3(-outward.z,0,outward.x)
	return root+outward*reach*(pow(t,1.22)+.48*bend)+Vector3.UP*height*(sin(t*PI*.5)-drop*bend)+across*.018*bend*sin(index*2.1)
static func base(s:SurfaceTool)->void:
	for leaf in range(3):
		var angle:float=.35+float(leaf)*TAU/3.;var out:=Vector3(cos(angle),0,sin(angle));var side:=Vector3(-sin(angle),0,cos(angle))
		var a:=out*.012+Vector3.UP*.006;var b:=out*.047-side*.028+Vector3.UP*.011
		var c:=out*.095+Vector3.UP*.008;var d:=out*.047+side*.028+Vector3.UP*.011;var heart:=out*.047+Vector3.UP*.021
		for triangle:Array in [[a,b,heart],[b,c,heart],[c,d,heart],[d,a,heart]]:
			for at:Vector3 in triangle:s.set_normal(Vector3.UP);s.set_color(Color.WHITE);s.set_uv(Vector2(0.,at.y/.27));s.add_vertex(at)
