extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Plan=preload("res://scripts/world/city_creation_amphitheater_plan.gd")
static func build(renderer,root:Node3D,house:Dictionary)->void:
	var plan:=Plan.for_house(renderer.state,house)
	if plan.is_empty():return
	var world_plan:=plan.duplicate(true)
	plan=plan.duplicate(true)
	for field:String in ["center","shore","stage","jetty_start","jetty_end"]:plan[field]=Frame.inverse(house,plan[field])
	plan.direction=Vector2(plan.direction).rotated(Frame.yaw(house))
	var stage:=Vector3(plan.stage.x,plan.deck_y,plan.stage.y);var direction:Vector2=plan.direction;var tangent:=Vector2(-direction.y,direction.x)
	var group:=Node3D.new();group.name="FloatingAmphitheater";root.add_child(group)
	var cream:Material=renderer._material(Color("eee8d6"));var oak:Material=renderer._material(Color("bfa27b"));var bronze:Material=renderer._material(Color("b69a5c"),.55)
	var deck:MeshInstance3D=renderer._cylinder(group,plan.radius,plan.radius,.20,stage-Vector3.UP*.10,cream,48);deck.name="ActualOverwaterStage"
	(deck.mesh as CylinderMesh).cap_top=false
	var cut:=jetty_polygon(plan)
	var circle:=PackedVector2Array()
	for i in range(48):circle.append(Vector2(plan.stage)+Vector2.from_angle(TAU*float(i)/48.)*float(plan.radius))
	var deck_faces:=top_faces(circle,cut,float(plan.deck_y))
	var top:MeshInstance3D=renderer._triangles(group,deck_faces,Color("eee8d6"));top.name="StageFloorBesideJetty"
	var center:=Vector3(plan.center.x,plan.deck_y,plan.center.y)
	var jetty:MeshInstance3D=renderer._box(group,Vector3(.94,.15,Vector2(plan.jetty_start).distance_to(plan.jetty_end)),Vector3((plan.jetty_start.x+plan.jetty_end.x)*.5,plan.deck_y-.075,(plan.jetty_start.y+plan.jetty_end.y)*.5),oak);jetty.rotation.y=atan2(direction.x,direction.y)
	var tier_faces:Array[Vector3]=[]
	for tier in range(3):
		var inner:=2.08+float(tier)*.50;var outer:=inner+.48;var y:float=plan.deck_y+float(tier)*.18
		for segment in range(20):
			var a:=lerpf(-1.20,1.20,float(segment)/20.);var b:=lerpf(-1.20,1.20,float(segment+1)/20.)
			var p:=_fan(stage,direction,tangent,a,inner,y);var q:=_fan(stage,direction,tangent,b,inner,y)
			var r:=_fan(stage,direction,tangent,b,outer,y);var s:=_fan(stage,direction,tangent,a,outer,y)
			if tier==0:tier_faces.append_array(top_faces(PackedVector2Array([Vector2(p.x,p.z),Vector2(q.x,q.z),Vector2(r.x,r.z),Vector2(s.x,s.z)]),cut,y))
			else:tier_faces.append_array([p,r,q,p,s,r])
			tier_faces.append_array([p-Vector3.UP*.17,q,r,p-Vector3.UP*.17,r,s-Vector3.UP*.17,s,r,r-Vector3.UP*.17,s,r-Vector3.UP*.17,s-Vector3.UP*.17])
		for index in range(8):
			var angle:=lerpf(-1.08,1.08,float(index)/7.)
			var at:=_fan(stage,direction,tangent,angle,inner+.25,y+.09)
			var seat:MeshInstance3D=renderer._box(group,Vector3(.32,.08,.24),at,oak);seat.rotation.y=atan2(direction.x,direction.y)-angle
	var tiers:MeshInstance3D=renderer._triangles(group,tier_faces,Color("e2ddcd"));tiers.name="CurvedShoreStands"
	var sails:Array[Vector3]=[]
	for wing in range(3):
		for band in range(14):
			var vertices:Array[Vector3]=[]
			for uv:Vector2 in [Vector2(float(band)/14.,-1),Vector2(float(band+1)/14.,-1),Vector2(float(band+1)/14.,1),Vector2(float(band)/14.,1)]:
				var at:Vector2=plan.stage+direction*lerpf(-.25,1.7,uv.x)+tangent*((float(wing)-1.)*.83+uv.y*(.16+.27*sin(PI*uv.x)))
				vertices.append(Vector3(at.x,plan.deck_y+.25+sin(PI*uv.x)*(2.35-absf(float(wing)-1.)*.30),at.y))
			sails.append_array([vertices[0],vertices[2],vertices[1],vertices[0],vertices[3],vertices[2]])
	var roof:MeshInstance3D=renderer._triangles(group,sails,Color("f1eee1"));roof.name="ThreeWhiteAcousticSails"
	for side:float in [-1.,1.]:
		var at:Vector2=plan.stage+tangent*side*1.28+direction*.2
		renderer._cylinder(group,.08,.10,plan.deck_y+.60,Vector3(at.x,(plan.deck_y-.6)*.5,at.y),cream,10)
	var piano:=Node3D.new();piano.name="WaterStageGrandPiano";group.add_child(piano);piano.position=stage+Vector3(direction.x,0,direction.y)*.12;piano.rotation.y=atan2(direction.x,direction.y)
	var black:Material=renderer._material(Color("42584f"),.35)
	renderer._box(piano,Vector3(.76,.18,.90),Vector3(0,.52,.12),black)
	var lid:MeshInstance3D=renderer._box(piano,Vector3(.76,.045,.80),Vector3(0,.80,.17),black);lid.rotation.x=-.38
	renderer._box(piano,Vector3(.72,.05,.16),Vector3(0,.55,-.40),cream)
	for i in range(9):renderer._box(piano,Vector3(.025,.012,.11),Vector3(-.29+i*.07,.582,-.39),black)
	for x:float in [-.29,.29]:
		for z:float in [-.22,.38]:renderer._cylinder(piano,.025,.035,.45,Vector3(x,.245,z),bronze,8)
	renderer._box(piano,Vector3(.47,.07,.24),Vector3(0,.31,-.74),oak)
	# Original authored terrace IDs own the exact stage/stands/jetty pick faces.
	var faces:PackedVector3Array=deck.mesh.get_faces()
	for i in range(faces.size()):faces[i]=deck.transform*faces[i]
	faces.append_array(PackedVector3Array(deck_faces))
	for point:Vector3 in jetty.mesh.get_faces():faces.append(jetty.transform*point)
	faces.append_array(PackedVector3Array(tier_faces));faces.append_array(PackedVector3Array(sails))
	var cell:Dictionary=house.cells[-1]
	var body:=StaticBody3D.new();body.set_meta("house_id",str(house.id));body.set_meta("cell_id",str(cell.id));body.set_meta("cell",cell.duplicate(true));body.set_meta("water_stage",true)
	var shape:=ConcavePolygonShape3D.new();shape.backface_collision=true;shape.set_faces(faces)
	var collision:=CollisionShape3D.new();collision.shape=shape;body.add_child(collision);group.add_child(body)
	root.set_meta("amphitheater",world_plan);root.set_meta("signature_stage_triangles",faces.size()/3)
static func jetty_polygon(plan:Dictionary)->PackedVector2Array:
	var side:=Vector2(-plan.direction.y,plan.direction.x)*.47
	return PackedVector2Array([Vector2(plan.jetty_start)+side,Vector2(plan.jetty_end)+side,Vector2(plan.jetty_end)-side,Vector2(plan.jetty_start)-side])

static func top_faces(polygon:PackedVector2Array,cut:PackedVector2Array,y:float)->Array[Vector3]:
	var result:Array[Vector3]=[]
	for piece:PackedVector2Array in Geometry2D.clip_polygons(polygon,cut):
		var indices:=Geometry2D.triangulate_polygon(piece)
		for i in range(0,indices.size(),3):
			var a:=Vector3(piece[indices[i]].x,y,piece[indices[i]].y)
			var b:=Vector3(piece[indices[i+1]].x,y,piece[indices[i+1]].y)
			var c:=Vector3(piece[indices[i+2]].x,y,piece[indices[i+2]].y)
			result.append_array([a,c,b] if (b-a).cross(c-a).y<0. else [a,b,c])
	return result
static func _fan(center:Vector3,direction:Vector2,tangent:Vector2,angle:float,radius:float,y:float)->Vector3:
	var at:=Vector2(center.x,center.z)+(-direction*cos(angle)+tangent*sin(angle))*radius
	return Vector3(at.x,y,at.y)
