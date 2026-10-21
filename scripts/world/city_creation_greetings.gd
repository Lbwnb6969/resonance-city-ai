extends RefCounted
## A short physical response pauses only travel. It earns no visit or reward.
var active:Dictionary={}
var mesh:ArrayMesh
var material:StandardMaterial3D

func greet(life:Node3D,at:Vector2)->int:
	var count:=0
	for resident:Dictionary in life.residents:
		if resident.has("cafe_visit") or resident.paused:continue
		var motion:RefCounted=resident.get("offscreen_motion")
		var point:Vector3=motion.point() if motion!=null else resident.node.position
		if at.distance_squared_to(Vector2(point.x,point.z))>64.:continue
		life.flush_citizen(resident)
		var id:=str(resident.home_id)
		var note:MeshInstance3D=resident.node.get_node_or_null("GreetingNote")
		if note==null:
			note=MeshInstance3D.new();note.name="GreetingNote"
			if mesh==null:_prepare()
			note.mesh=mesh;note.material_override=material;note.position=Vector3(0,.9,0)
			note.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF;resident.node.add_child(note)
		var body:Node3D=resident.node.get_child(0)
		active[id]={"resident":resident,"body":body,"note":note,"y":float(active.get(id,{}).get("y",body.position.y)),"until":life.time+.6,"start":life.time}
		resident.greeting_until=life.time+.6
		var toward:=Vector2(at.x-point.x,at.y-point.z)
		if toward.length_squared()>.001:resident.node.rotation.y=atan2(toward.x,toward.y)
		note.show();count+=1
	return count

func update(time:float)->void:
	for id:String in active.keys():
		var row:Dictionary=active[id]
		if not is_instance_valid(row.body):active.erase(id);continue
		var progress:=clampf((time-float(row.start))/.6,0.,1.)
		row.body.position.y=float(row.y)+sin(progress*PI)*.08
		row.note.position.y=.9+progress*.15
		if time>=float(row.until):
			row.body.position.y=float(row.y);row.note.hide();row.resident.erase("greeting_until");active.erase(id)

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
