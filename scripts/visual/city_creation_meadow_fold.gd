extends RefCounted
## Opaque folded near blades share the original footprint, UV wind and LOD pool.
static func blade(owner,s:SurfaceTool,index:int,folded:bool)->void:
	var angle:float=[.02,1.59,3.10,4.69,.52,2.61,4.70][index]
	var height:float=[.16,.19,.17,.18,.22,.27,.245][index]
	var reach:float=[.16,.17,.165,.175,.07,.06,.075][index]
	var width:float=[.046,.050,.044,.048,.042,.044,.042][index]
	var outward:=Vector3(cos(angle),0,sin(angle));var across:=Vector3(-sin(angle),0,cos(angle))
	var root:Vector3=outward*.006;var outer:bool=index<4
	var centers:Array[Vector3]=[root,root+outward*reach*.22+Vector3.UP*height*(.48 if outer else .38),root+outward*reach*.62+Vector3.UP*height*(.90 if outer else .74),root+outward*reach+Vector3.UP*height]
	var widths:Array[float]=[width*.55,width,width*.62,0.]
	var left:Array[Vector3]=[];var right:Array[Vector3]=[]
	for i in range(4):
		var tilt:float=(.12 if index%2==0 else -.12)*widths[i] if folded else 0.
		left.append(centers[i]-across*widths[i]+Vector3.UP*tilt);right.append(centers[i]+across*widths[i]-Vector3.UP*tilt)
	if not folded:
		for i in range(2):
			owner._triangle(s,left[i],right[i],right[i+1],Color.WHITE,height,outward);owner._triangle(s,left[i],right[i+1],left[i+1],Color.WHITE,height,outward)
		owner._triangle(s,left[2],right[2],centers[3],Color.WHITE,height,outward);return
	for i in range(1,3):centers[i]+=Vector3.UP*minf(width*.36,height*.06)
	for i in range(2):
		for edge:Array in [[left[i],left[i+1]],[right[i],right[i+1]]]:
			_triangle(s,centers[i],edge[0],edge[1],height,outward,across,width)
			_triangle(s,centers[i],edge[1],centers[i+1],height,outward,across,width)
	_triangle(s,centers[2],left[2],centers[3],height,outward,across,width)
	_triangle(s,centers[2],right[2],centers[3],height,outward,across,width)
static func _triangle(s:SurfaceTool,a:Vector3,b:Vector3,c:Vector3,height:float,outward:Vector3,across:Vector3,width:float)->void:
	for at:Vector3 in [a,b,c]:
		var tip:float=clampf(at.y/height,0.,1.)
		var normal:Vector3=(Vector3.UP*(.28+tip*.45)-outward+across*(at.dot(across)/width)*.38).normalized()
		s.set_normal(normal);s.set_color(Color.WHITE);s.set_uv(Vector2(0,tip));s.add_vertex(at)
static func base(s:SurfaceTool)->void:
	for leaf in range(3):
		var angle:float=.35+float(leaf)*TAU/3.;var out:=Vector3(cos(angle),0,sin(angle));var side:=Vector3(-sin(angle),0,cos(angle))
		var a:=out*.012+Vector3.UP*.006;var b:=out*.047-side*.028+Vector3.UP*.011
		var c:=out*.095+Vector3.UP*.008;var d:=out*.047+side*.028+Vector3.UP*.011;var heart:=out*.047+Vector3.UP*.021
		for triangle:Array in [[a,b,heart],[b,c,heart],[c,d,heart],[d,a,heart]]:
			for at:Vector3 in triangle:s.set_normal(Vector3.UP);s.set_color(Color.WHITE);s.set_uv(Vector2(0.,at.y/.27));s.add_vertex(at)
