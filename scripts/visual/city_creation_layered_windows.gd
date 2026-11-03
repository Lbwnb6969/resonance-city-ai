extends RefCounted
## Explicit architecture choice; old facade recipes retain their geometry.
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Glass=preload("res://scripts/visual/city_creation_facade_glass.gd")
const Hinge=preload("res://scripts/world/city_creation_house_hinge.gd")
static func eligible(job,width:float,center:Vector3)->bool:
	return job.house.get("architecture","")=="recessed_townhouse" and job.era in ["pastoral","renaissance","clockwork","modern_eco"] and job.style!="timber" and not job.house.has("signature") and width>=1.79 and center.is_zero_approx()
static func inner_bay(house:Dictionary,cell:Dictionary,side:Vector2i)->bool:
	var angle:=Hinge.angle(house)
	if is_zero_approx(angle) or cell.is_empty():return false
	var plan:=Hinge.layout(house);var inward:=Vector2(plan.axis.y,-plan.axis.x)*signf(angle)
	var column:=Vector2(cell.x,cell.z).dot(plan.axis)
	return Vector2(side).dot(inward)>.99 and (is_zero_approx(column) or is_equal_approx(column,1.))
static func holes(level:int,house:Dictionary={},cell:Dictionary={},side:Vector2i=Vector2i.ZERO,arcaded:bool=false)->Array:
	var result:Array=[];var height:=.88 if level>0 else .64
	# Two inward-facing bays share a tight concave corner after folding. Their
	# single centered opening keeps the complete frame/shutters clear of it.
	for x:float in [0.] if inner_bay(house,cell,side) or arcaded and level==0 else [-.44,.44]:result.append({"x":x,"radius":.16,"bottom":.96-height*.5,"spring":.96+height*.5,"arched":false})
	if preload("res://scripts/world/city_creation_architecture_variants.gd").selected(house)=="stone_pediment":
		for h:Dictionary in result:h.spring=1.24
	return result
static func build(r,job,frame,wall:Node3D)->void:
	var plan:Dictionary=wall.get_meta("recessed_facade")
	var stone:=Wall.source(job.palette[0].lerp(Color("ecdfc5"),.7),null,"component",Wall.Kind.STONE)
	var timber:Material=preload("res://scripts/visual/city_creation_detail_materials.gd").frame(r,job.house,job.palette)
	for i in range(plan.holes.size()):
		var h:Dictionary=plan.holes[i];var height:float=h.spring-h.bottom;var x:float=h.x;var middle:float=(h.spring+h.bottom)*.5
		var group:=posmod(hash([job.house.seed,frame.cell.id,wall.rotation.y,i]),3)
		r._box(wall,Vector3(.32,height,.012),Vector3(x,middle,-.035),Glass.material(r,group)).name="LayeredWindowGlass"
		for sign_value:float in [-1.,1.]:
			r._box(wall,Vector3(.025,height,.04),Vector3(x+sign_value*.1475,middle,-.005),timber).name="LayeredInnerFrame"
			r._box(wall,Vector3(.055,height+.10,.10),Vector3(x+sign_value*.1875,middle,.075),stone).name="LayeredStoneJamb"
		r._box(wall,Vector3(.32,.025,.035),Vector3(x,middle,-.005),timber).name="LayeredCrossbar"
		r._box(wall,Vector3(.43,.075,.17),Vector3(x,h.spring+.0375,.095),stone).name="LayeredWindowLintel"
		r._box(wall,Vector3(.52,.075,.25),Vector3(x,h.bottom-.0375,.085),stone).name="LayeredWindowSill"
	wall.set_meta("layered_window",{"version":1,"cell_id":str(frame.cell.id),"glass_z":-.035,"outer_face_z":.065,"openings":plan.holes})
	preload("res://scripts/visual/city_creation_window_variants.gd").build(r,job,wall,plan,stone)
static func glow(rig,root:Node3D,cell:Dictionary,side:Vector2i,surface:SurfaceTool,windows:Array)->bool:
	for wall:Node3D in root.find_children("*","Node3D",true,false):
		if not wall.has_meta("layered_window"):continue
		var plan:Dictionary=wall.get_meta("layered_window")
		if plan.cell_id!=str(cell.id) or Vector2(wall.transform.basis.z.x,wall.transform.basis.z.z).dot(Vector2(side))<.99:continue
		var frame:Transform3D=root.global_transform.affine_inverse()*wall.global_transform
		for h:Dictionary in plan.openings:
			var middle:float=(h.bottom+h.spring)*.5
			for dx:float in [-.075,.075]:
				for y:float in [(h.bottom+middle)*.5,(h.spring+middle)*.5]:rig._panel(surface,frame,Vector3(h.x+dx,y,-.027),Vector2(.12,(h.spring-h.bottom)*.5-.05),0)
			windows.append({"cell_id":str(cell.id),"side":side,"at":frame*Vector3(h.x,middle,-.027)})
		return true
	return false
