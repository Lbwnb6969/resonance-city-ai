extends RefCounted
## A short physical response pauses only travel. It earns no visit or reward.
var active:Dictionary={}
var mesh:ArrayMesh
var material:StandardMaterial3D
var sleeve:CapsuleMesh
var hand:SphereMesh
var _next_meeting:=0.

func meet(life)->void:
	if life.time<_next_meeting:return
	_next_meeting=life.time+.5
	var nearby:Dictionary={}
	for resident:Dictionary in life.residents:
		if resident.paused or resident.wait>0. or resident.has("cafe_visit") or resident.has("daily_snapshot") or not str(resident.dwell_id).is_empty() or active.has(str(resident.home_id)):continue
		if float(resident.node.get_meta("peer_cooldown",0.))>life.time or not resident.node.visible:continue
		if life.tram.tickets.get(str(resident.home_id),{}).get("state","") in ["onboard","approach"]:continue
		var point:Vector3=resident.node.position
		if life.view_camera!=null and not life.view_camera.is_position_in_frustum(point+Vector3.UP*.3):continue
		var bin:=Vector2i(floori(point.x/.8),floori(point.z/.8));var partner:Dictionary={}
		for dx in range(-1,2):
			for dz in range(-1,2):
				for other:Dictionary in nearby.get(bin+Vector2i(dx,dz),[]):
					if other.node.position.distance_squared_to(point)<.36 and not active.has(str(other.home_id)):partner=other
		if not partner.is_empty():
			_respond(life,resident,Vector2(partner.node.position.x,partner.node.position.z),false)
			_respond(life,partner,Vector2(point.x,point.z),false)
		else:
			if not nearby.has(bin):nearby[bin]=[]
			nearby[bin].append(resident)

func greet(life:Node3D,at:Vector2)->int:
	var count:=0
	for resident:Dictionary in life.residents:
		if resident.has("cafe_visit") or resident.paused or resident.wait>0. or not str(resident.dwell_id).is_empty():continue
		var ticket:Dictionary=life.tram.tickets.get(str(resident.home_id),{})
		if ticket.get("state","")=="onboard" or (ticket.get("state","")=="approach" and float(ticket.get("wait",0.))>0.) or life.conductor_parade.owns(life,resident):continue
		var motion:RefCounted=resident.get("offscreen_motion")
		var point:Vector3=motion.point() if motion!=null else resident.node.position
		if at.distance_squared_to(Vector2(point.x,point.z))>64.:continue
		if not resident.node.is_visible_in_tree() or (life.view_camera!=null and not life.view_camera.is_position_in_frustum(point+Vector3.UP*.5)):continue
		_respond(life,resident,at,true);count+=1
	return count

func _respond(life,resident:Dictionary,at:Vector2,show_note:bool)->void:
	life.flush_citizen(resident)
	var point:Vector3=resident.node.position
	var id:=str(resident.home_id)
	var note:MeshInstance3D=resident.node.get_node_or_null("GreetingNote")
	if note==null:
		note=MeshInstance3D.new();note.name="GreetingNote"
		if mesh==null:_prepare()
		note.mesh=mesh;note.material_override=material;note.position=Vector3(0,.9,0)
		note.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF;resident.node.add_child(note)
	var body:Node3D=resident.node.get_child(0)
	var arm:=_arm(body);arm.show()
	active[id]={"resident":resident,"body":body,"note":note,"arm":arm,"target":at,"y":float(active.get(id,{}).get("y",body.position.y)),"until":life.time+.6,"start":life.time}
	if show_note:resident.greeting_until=life.time+.6
	else:active[id].anchor=body.global_position
	var toward:=Vector2(at.x-point.x,at.y-point.z)
	if toward.length_squared()>.001:resident.node.rotation.y=atan2(toward.x,toward.y)
	note.visible=show_note
	resident.node.set_meta("peer_cooldown",life.time+8.)
func update(time:float)->void:
	for id:String in active.keys():
		var row:Dictionary=active[id]
		if not is_instance_valid(row.body):active.erase(id);continue
		var progress:=clampf((time-float(row.start))/.6,0.,1.)
		row.body.position.y=float(row.y)+sin(progress*PI)*.08
		row.note.position.y=.9+progress*.15
		row.arm.rotation.z=-2.25+sin(progress*TAU*2.)*.32
		if row.has("anchor"):
			row.body.position=row.resident.node.to_local(row.anchor)+Vector3.UP*sin(progress*PI)*.04
			row.body.rotation.x=sin(progress*PI)*.13
		if time>=float(row.until):
			row.body.position.y=float(row.y);row.note.hide();row.arm.hide();row.resident.erase("greeting_until");active.erase(id)
			row.body.rotation.x=0.
			row.body.position.x=0.;row.body.position.z=0.

func _arm(body:Node3D)->Node3D:
	var arm:Node3D=body.get_node_or_null("GreetingArm")
	if arm!=null:return arm
	if sleeve==null:
		sleeve=CapsuleMesh.new();sleeve.radius=.025;sleeve.height=.18
		hand=SphereMesh.new();hand.radius=.032;hand.height=.064;hand.radial_segments=8;hand.rings=4
	arm=Node3D.new();arm.name="GreetingArm";arm.position=Vector3(-.09,.33,0.);body.add_child(arm)
	var cloth:=MeshInstance3D.new();cloth.mesh=sleeve;cloth.position.y=-.07
	cloth.material_override=body.get_child(0).get_meta("sleeve_material",body.get_child(0).material_override);arm.add_child(cloth)
	var palm:=MeshInstance3D.new();palm.mesh=hand;palm.position.y=-.16
	palm.material_override=body.get_child(1).material_override;arm.add_child(palm)
	return arm

func _prepare()->void:
	var vertices:=PackedVector3Array([
		Vector3(-.09,-.02,0),Vector3(.03,.04,0),Vector3(-.09,.10,0),
		Vector3(-.09,-.02,0),Vector3(.03,-.02,0),Vector3(.03,.04,0),
		Vector3(.01,0,0),Vector3(.04,.23,0),Vector3(.01,.23,0),
		Vector3(.01,0,0),Vector3(.04,0,0),Vector3(.04,.23,0),
		Vector3(.04,.23,0),Vector3(.14,.15,0),Vector3(.04,.14,0)])
	var arrays:Array=[];arrays.resize(Mesh.ARRAY_MAX);arrays[Mesh.ARRAY_VERTEX]=vertices
	mesh=ArrayMesh.new();mesh.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,arrays)
	material=StandardMaterial3D.new();material.shading_mode=BaseMaterial3D.SHADING_MODE_UNSHADED
	material.albedo_color=Color("edc66e");material.billboard_mode=BaseMaterial3D.BILLBOARD_ENABLED
	material.cull_mode=BaseMaterial3D.CULL_DISABLED
