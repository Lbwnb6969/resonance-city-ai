extends RefCounted
const Plan=preload("res://scripts/world/city_creation_bridge_plan.gd")
static func prepare(run:Dictionary)->Dictionary:
	var data:Dictionary={"shell":[],"glass":[],"rails":[],"run":run}
	var first:float=run.start;var last:float=run.end;var y:float=run.deck_y;var half:=float(run.width)*.5+.15
	var spring:=-.19;var rise:=maxf(.10,y-.20-spring)
	for i in range(32):
		var t:=float(i)/32.;var u:=float(i+1)/32.
		var a:=lerpf(first,last,t);var b:=lerpf(first,last,u)
		_prism(data.shell,run,a,b,-half,half,spring+rise*sin(PI*t),spring+rise*sin(PI*u),y-.012,y-.012)
		for side:float in [-1.,1.]:
			var inner:=side*(half-.07);var outer:=side*(half+.01)
			_prism(data.shell,run,a,b,minf(inner,outer),maxf(inner,outer),y,y,y+.11,y+.11)
			_prism(data.rails,run,a,b,minf(inner,outer),maxf(inner,outer),y+.55,y+.55,y+.60,y+.60)
			var p:=_point(run,a,side*(half-.03),y+.13);var q:=_point(run,b,side*(half-.03),y+.13)
			data.glass.append_array([p,q+Vector3.UP*.42,q,p,p+Vector3.UP*.42,q+Vector3.UP*.42])
	for arc:float in [first,last]:
		_prism(data.shell,run,arc-.10,arc+.10,-half,half,-.7,-.7,y-.012,y-.012)
	return data
static func _point(run:Dictionary,arc:float,across:float,y:float)->Vector3:
	var p:=Plan._point(run.samples,arc);var at:Vector2=p.at+Vector2(-p.tangent.y,p.tangent.x)*across
	return Vector3(at.x,y,at.y)
static func _prism(faces:Array,run:Dictionary,a:float,b:float,lo:float,hi:float,low_a:float,low_b:float,top_a:float,top_b:float)->void:
	var v:Array[Vector3]=[_point(run,a,lo,low_a),_point(run,b,lo,low_b),_point(run,b,hi,low_b),_point(run,a,hi,low_a),_point(run,a,lo,top_a),_point(run,b,lo,top_b),_point(run,b,hi,top_b),_point(run,a,hi,top_a)]
	for q:Array in [[0,1,2,3],[4,7,6,5],[0,4,5,1],[3,2,6,7],[0,3,7,4],[1,5,6,2]]:faces.append_array([v[q[0]],v[q[1]],v[q[2]],v[q[0]],v[q[2]],v[q[3]]])
static func install(renderer,parent:Node3D,data:Dictionary,road:Dictionary)->void:
	var root:=Node3D.new();root.name="ModernSingleArchBridge";parent.add_child(root)
	root.set_meta("run",data.run);root.set_meta("arch_count",1)
	var all:Array[Vector3]=[]
	for part:String in ["shell","glass","rails"]:
		var faces:Array[Vector3]=[];faces.assign(data[part]);all.append_array(faces)
		var mesh:MeshInstance3D=renderer._triangles(root,faces,Color("e8e5d6") if part=="shell" else Color("bec8b5"));mesh.name=part
		if part=="glass":mesh.material_override=renderer.conservatory.ensure_material();mesh.set_meta("creation_live_visual",true)
	var body:=StaticBody3D.new();body.name="ModernBridgeGroundPick";body.collision_layer=2;body.set_meta("ground",true);body.set_meta("road_id",str(road.id))
	var shape:=ConcavePolygonShape3D.new();shape.backface_collision=true;shape.set_faces(PackedVector3Array(all))
	var collision:=CollisionShape3D.new();collision.shape=shape;body.add_child(collision);root.add_child(body)
