extends RefCounted
## Dry authored rooms anchor a derived stage which genuinely projects over water.
const RADIUS:=1.65
const Frontage=preload("res://scripts/world/city_creation_frontage.gd")
static func for_house(city:RefCounted,house:Dictionary,water_rows:Variant=null)->Dictionary:
	if house.get("signature","")!="floating_amphitheater":return {}
	var waters:Array=city.waters if water_rows==null else water_rows
	var center:=Vector2(house.origin[0]+.9,house.origin[1]+.9)
	var best:=INF;var direction:=Vector2.ZERO;var shore:=Vector2.ZERO
	for side:Vector2 in [Vector2.RIGHT,Vector2.LEFT,Vector2.UP,Vector2.DOWN]:
		for i in range(1,25):
			var distance:=float(i)*.20;var p:=center+side*distance
			if city._water_clearance_in(p,waters)>0.:continue
			if distance<best:best=distance;direction=side;shore=p-side*.10
			break
	if direction==Vector2.ZERO:return {}
	var stage:=shore+direction*1.10
	if city._water_clearance_in(stage,waters)>-.65 or not city.WORLD_RECT.grow(-RADIUS-.15).has_point(stage):return {}
	return {"center":center,"direction":direction,"shore":shore,"stage":stage,"radius":RADIUS,"deck_y":float(house.get("base_y",0.))+.24,"jetty_start":center+direction*1.65,"jetty_end":stage,"shore_distance":best,"tiers":3}
static func hits_house(plan:Dictionary,house:Dictionary)->bool:
	if plan.is_empty():return false
	var masks:=ground_masks(plan)
	for cell:Dictionary in house.cells:
		var at:=Vector2(house.origin[0]+int(cell.x)*1.8,house.origin[1]+int(cell.z)*1.8)
		var rect:=Rect2(at-Vector2.ONE*.9,Vector2.ONE*1.8)
		var near:=Vector2(clampf(plan.stage.x,rect.position.x,rect.end.x),clampf(plan.stage.y,rect.position.y,rect.end.y))
		if near.distance_to(plan.stage)<RADIUS+.1:return true
		if Frontage.hits_rect(plan.jetty_start,plan.jetty_end,rect.grow(.55)):return true
		for mask:Rect2 in masks:
			if rect.intersects(mask):return true
	return false
static func occupies(plan:Dictionary,at:Vector2,radius:float=0.)->bool:
	if plan.is_empty():return false
	if at.distance_to(plan.stage)<=RADIUS+radius or Geometry2D.get_closest_point_to_segment(at,plan.jetty_start,plan.jetty_end).distance_to(at)<=.5+radius:return true
	var offset:Vector2=at-plan.stage;var facing:float=offset.dot(-Vector2(plan.direction))
	return facing>0. and offset.length()<=3.58+radius and absf(offset.cross(-Vector2(plan.direction)))<=facing*tan(1.20)+radius
static func ground_masks(plan:Dictionary)->Array[Rect2]:
	var result:Array[Rect2]=[]
	if plan.is_empty():return result
	var tangent:=Vector2(-plan.direction.y,plan.direction.x)
	for i in range(20):
		var a:=lerpf(-1.20,1.20,float(i)/20.);var b:=lerpf(-1.20,1.20,float(i+1)/20.)
		var bounds:=Rect2(plan.stage+(-plan.direction*cos(a)+tangent*sin(a))*2.02,Vector2.ZERO)
		for corner:Vector2 in [Vector2(a,3.60),Vector2(b,2.02),Vector2(b,3.60)]:bounds=bounds.expand(plan.stage+(-plan.direction*cos(corner.x)+tangent*sin(corner.x))*corner.y)
		result.append(bounds.grow(.04))
	result.append(Rect2(plan.jetty_start,Vector2.ZERO).expand(plan.jetty_end).grow(.5))
	return result
