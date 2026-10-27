extends RefCounted
## Existing resonance rig follows real glass and piers, never the new doorway.
const Plan=preload("res://scripts/world/city_creation_balcony_plan.gd")
static func face(rig,root:Node3D,cell:Dictionary,side:Vector2i,surface:SurfaceTool,frame:Transform3D,windows:Array)->bool:
	var data:Dictionary=root.get_meta("organic_facade",{})
	if data.is_empty() or side!=data.side:return false
	var upper:bool=str(cell.id)==str(data.cell_id)
	if not upper and (int(data.mode)<3 or str(cell.id)!=str(data.lower_id)):return false
	if int(data.mode)>=3:
		var x:=.56 if not upper else -.10 if int(data.mode)==4 else -.55
		rig._panel(surface,frame,Vector3(x,1.,1.034),Vector2(.08,.13),1)
		return true
	var poly:=Plan.outline(data)
	for i in range(1,poly.size()):
		var a:=Vector3(poly[i].x,0,poly[i].y);var b:=Vector3(poly[(i+1)%poly.size()].x,0,poly[(i+1)%poly.size()].y)
		var pane:=frame*Transform3D(Basis(Vector3.UP,atan2(-(b-a).z,(b-a).x)),(a+b)*.5)
		rig._panel(surface,pane,Vector3(0,.87,.012),Vector2(a.distance_to(b)-.07,.72),0)
		windows.append({"cell_id":str(cell.id),"side":side,"at":pane*Vector3(0,.87,.012)})
	return true
