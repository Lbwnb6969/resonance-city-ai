extends RefCounted
const Targets=preload("res://scripts/world/city_creation_road_endpoint_targets.gd")
const Closure=preload("res://scripts/world/city_creation_road_closure.gd")
const Geometry=Closure.Geometry
const Ruler=Closure.Ruler
const Intent=preload("res://scripts/world/city_creation_road_intent.gd")
static func warp(path:Array[Vector2],first:Vector2,last:Vector2)->Array[Vector2]:
	var result:Array[Vector2]=path.duplicate();var length:=0.;var along:=0.
	for i in range(1,path.size()):length+=path[i-1].distance_to(path[i])
	for i in range(path.size()):
		if i>0:along+=path[i-1].distance_to(path[i])
		var weight:=smoothstep(0.,1.,along/maxf(length,.001))
		result[i]=path[i]+(first-path[0])*(1.-weight)+(last-path[-1])*weight
	result[0]=first;result[-1]=last
	return result
static func start(city:RefCounted,at:Vector2,enabled:bool,width:float=1.25)->Vector2:
	var hit:=Targets.pick(city,at,.9) if enabled else {}
	if not hit.is_empty() and hit.get("kind","")!="door":
		if Intent._near_ground_house(city,at,width):return at
		if city.water_clearance(at)>=width*.5+Intent.DRY_MARGIN and city.water_clearance(hit.at)<width*.5+Intent.DRY_MARGIN:return at
	return hit.at if not hit.is_empty() else at
static func plan(city:RefCounted,path:Array[Vector2],raw:Vector2,control:Vector2,mode:int,anchors:Array,enabled:bool,width:float,style:String,decoration:String)->Dictionary:
	var original:Dictionary=city.preview_road(path,style,"none",width,decoration)
	var result:={"points":path.duplicate(),"closure":{},"control":control,"label":"","valid":original}
	if not enabled or path.size()<2 or not str(original.get("upgrade_road_id","")).is_empty():return result
	var neighbor:Vector2=control if mode==2 and control.is_finite() else anchors[-1] if mode==1 and anchors.size()>1 else path[0] if mode==1 else path[-2]
	var hit:=Targets.pick(city,raw,1.8,true,neighbor)
	if not hit.is_empty() and not Intent._endpoint_forward(hit.at,neighbor,path[-1],neighbor):hit={}
	# Existing long self-loop closure remains an explicit authored boundary.
	var old_hit:=Closure.target(city,raw,path)
	if old_hit.get("self",false) and (hit.is_empty() or path[0].distance_to(raw)<float(hit.distance)):hit=old_hit
	var candidate:Array[Vector2]=path.duplicate()
	if not hit.is_empty():
		var closed:=Closure.resolve(city,path,raw,control,mode,hit)
		candidate.assign(closed.points)
		if mode==0:
			candidate=warp(path,path[0],hit.at)
		elif mode==1:
			if anchors.size()>1:
				candidate.assign(anchors);candidate.append(hit.at);candidate=Geometry.Stroke.polyline_points(candidate)
			else:candidate=Geometry.straight(path[0],hit.at)
		result.merge(closed,true);result.label="✦ 门阶接入" if hit.get("kind","")=="door" else str(closed.label)
	else:
		# Bank assistance is retained, but rebuild the complete precise shape.
		var bank:=Intent.resolve(city,path,width,false)
		if bank.anchored_start or bank.anchored_end:
			if mode==2 and control.is_finite():candidate=Geometry.quadratic(bank.points[0],control,bank.points[-1])
			elif mode==1 and anchors.size()<2:candidate=Geometry.straight(bank.points[0],bank.points[-1])
			elif mode==0:candidate=warp(path,bank.points[0],bank.points[-1])
			else:
				candidate.assign(anchors);candidate[0]=bank.points[0];candidate.append(bank.points[-1]);candidate=Geometry.Stroke.polyline_points(candidate)
	var checked:Dictionary=city.preview_road(candidate,style,"none",width,decoration)
	# Assistance cannot manufacture a water crossing absent from the drawn stroke.
	if checked.get("bridge",false) and not Intent._contains_water_core(city,path):return {"points":path.duplicate(),"closure":{},"control":control,"label":"","valid":original}
	if not str(checked.get("upgrade_road_id","")).is_empty():return {"points":path.duplicate(),"closure":{},"control":control,"label":"","valid":original}
	result.points=candidate;result.valid=checked
	return result
