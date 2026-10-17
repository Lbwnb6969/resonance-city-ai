extends RefCounted
## Arch ribs and diagonal web members stay outside the shared walking/rail lane.
const Plan=preload("res://scripts/world/city_creation_bridge_plan.gd")
static func prepare(run: Dictionary)->Dictionary:
	var data: Dictionary={"iron":[],"bronze":[],"stone":[],"run":run,"cross_braces":0,"lane_clearance":2.15}
	var first:float=run.start;var last:float=run.end;var y:float=run.deck_y
	var half:=float(run.width)*.5+.16
	var sections:=maxi(8,ceili((last-first)/.55))
	for i in range(sections):
		var t:=float(i)/sections;var u:=float(i+1)/sections
		for side: int in [-1,1]:
			var a:=_point(run,lerpf(first,last,t),side*half,y+.30+2.1*sin(PI*t))
			var b:=_point(run,lerpf(first,last,u),side*half,y+.30+2.1*sin(PI*u))
			var c:=_point(run,lerpf(first,last,t),side*half,y+.12)
			var d:=_point(run,lerpf(first,last,u),side*half,y+.12)
			_beam(data.iron,a,b,.095);_beam(data.iron,c,d,.10)
			_beam(data.iron,a,c,.055);_beam(data.bronze,a,d,.045)
			if i%2==0:_beam(data.bronze,c,b,.045)
		# Above the collector and its live copper wire, never across the lane low down.
		var top:=y+.30+2.1*sin(PI*t)
		if i%2==0 and top-y>2.15:
			_beam(data.iron,_point(run,lerpf(first,last,t),-half,top),_point(run,lerpf(first,last,t),half,top),.055);data.cross_braces+=1
	for arc:float in [first,last]:
		for side:int in [-1,1]:
			var at:=_point(run,arc,side*half,y-.10)
			_beam(data.stone,at-Vector3.UP*.52,at+Vector3.UP*.05,.34)
	return data
static func _point(run: Dictionary,arc:float,across:float,y:float)->Vector3:
	var p:=Plan._point(run.samples,arc);var at:Vector2=p.at+Vector2(-p.tangent.y,p.tangent.x)*across
	return Vector3(at.x,y,at.y)
static func _beam(faces:Array,a:Vector3,b:Vector3,width:float)->void:
	var along:Vector3=(b-a).normalized();var side:=Vector3.UP.cross(along)
	if side.length_squared()<.0001:side=Vector3.RIGHT.cross(along)
	side=side.normalized()*width*.5;var up:=along.cross(side).normalized()*width*.5
	var v: Array[Vector3]=[a-side-up,b-side-up,b+side-up,a+side-up,a-side+up,b-side+up,b+side+up,a+side+up]
	for q:Array in [[0,1,2,3],[4,7,6,5],[0,4,5,1],[3,2,6,7],[0,3,7,4],[1,5,6,2]]:faces.append_array([v[q[0]],v[q[1]],v[q[2]],v[q[0]],v[q[2]],v[q[3]]])
static func install(renderer,parent:Node3D,data:Dictionary,road:Dictionary)->void:
	var root:=Node3D.new();root.name="ClockworkTrussBridge";parent.add_child(root)
	root.set_meta("run",data.run);root.set_meta("lane_clearance",data.lane_clearance);root.set_meta("cross_braces",data.cross_braces)
	var all:Array[Vector3]=[]
	for part:String in ["iron","bronze","stone"]:
		var faces:Array[Vector3]=[];faces.assign(data[part]);all.append_array(faces)
		var mesh:MeshInstance3D=renderer._triangles(root,faces,{"iron":Color("36574c"),"bronze":Color("a48c5c"),"stone":Color("b6b19a")}[part]);mesh.name=part
	var body:=StaticBody3D.new();body.name="TrussGroundPick";body.collision_layer=2;body.set_meta("ground",true);body.set_meta("road_id",str(road.id))
	var shape:=ConcavePolygonShape3D.new();shape.backface_collision=true;shape.set_faces(PackedVector3Array(all))
	var collision:=CollisionShape3D.new();collision.shape=shape;body.add_child(collision);root.add_child(body)
