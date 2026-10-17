extends RefCounted
## Small original facade details, merged with the house's existing materials.
const SIDES := 24

static func details(patch: Dictionary) -> Dictionary:
	var side: Vector2i = patch.side
	var outward := Vector3(side.x,0,side.y)
	var tangent := Vector3(side.y,0,-side.x)
	var origin := Vector3(patch.center.x,float(patch.base_y),patch.center.y)
	var height := float(patch.height)
	var rim: Array[Vector3] = []
	var pane: Array[Vector3] = []
	var timber: Array[Vector3] = []
	var radius := minf(0.145,height*0.24)
	var inner := radius-0.032
	var center := origin+Vector3.UP*(height*0.47)
	for segment in range(SIDES):
		var a := TAU*segment/SIDES
		var b := TAU*(segment+1)/SIDES
		var aa := tangent*cos(a)+Vector3.UP*sin(a)
		var bb := tangent*cos(b)+Vector3.UP*sin(b)
		var outer_a := center+aa*radius+outward*0.025
		var outer_b := center+bb*radius+outward*0.025
		var inner_a := center+aa*inner+outward*0.025
		var inner_b := center+bb*inner+outward*0.025
		rim.append_array([outer_a,outer_b,inner_b,outer_a,inner_b,inner_a])
		pane.append_array([center+outward*0.018,center+aa*inner+outward*0.018,center+bb*inner+outward*0.018])
	# Timber follows the actual sampled curved roof cap, rather than a straight
	# triangle which would protrude through the recovered profile.
	var top: Dictionary = {}
	for p: Vector3 in patch.vertices:
		if p.y>origin.y+0.001: top[(p-origin).dot(tangent)]=p
	var xs: Array = top.keys()
	xs.sort()
	for index in range(1,xs.size()):
		_strip(timber,Vector3(top[xs[index-1]])-Vector3.UP*0.020+outward*0.032,Vector3(top[xs[index]])-Vector3.UP*0.020+outward*0.032,outward,0.036)
	_strip(timber,center-tangent*inner+outward*0.031,center+tangent*inner+outward*0.031,outward,0.018)
	_strip(timber,center-Vector3.UP*inner+outward*0.031,center+Vector3.UP*inner+outward*0.031,outward,0.018)
	return {"rim":rim,"pane":pane,"timber":timber,"window":{"cell_id":str(patch.cell_id),"side":side,"at":center+outward*0.036,"radius":inner-0.009}}

static func _strip(vertices: Array[Vector3],a: Vector3,b: Vector3,normal: Vector3,width: float) -> void:
	var offset := normal.cross((b-a).normalized())*width*0.5
	vertices.append_array([a-offset,b-offset,b+offset,a-offset,b+offset,a+offset])
