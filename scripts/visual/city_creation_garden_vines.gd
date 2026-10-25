extends RefCounted
## Alternating leaves follow a curved, hanging stem; all parts join the crown batch.
static func append(r,root:Node3D,at:Vector3,angle:float,index:int)->void:
 var outward:=Vector3(sin(angle),0,cos(angle));var side:=Vector3(cos(angle),0,-sin(angle))
 var length:=.20+float(index%4)*.047;var previous:=at
 var stem:Material=r._material(Color("405f49"))
 for segment in range(1,6):
  var t:=float(segment)/5.;var point:=at+outward*(.025+.075*sin(t*PI*.8))+side*sin(t*PI+index)*.025-Vector3.UP*length*t
  var twig:MeshInstance3D=r._cylinder(root,.006,.008,previous.distance_to(point),(previous+point)*.5,stem,5)
  twig.quaternion=Quaternion(Vector3.UP,(point-previous).normalized());previous=point
  var leaf:MeshInstance3D=r._crown(root,point+side*(.027 if segment%2 else -.027),Vector3(.045,.075,.027),Color("41674c") if (index+segment)%3 else Color("698450"))
  leaf.rotation=Vector3(.25*sin(angle),angle,(-.6 if segment%2 else .6))
