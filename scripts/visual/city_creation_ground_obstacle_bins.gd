extends RefCounted
## Stable source order, exact block intersection predicates, CPU values only.
## Broad phase bins are shared by the meadow fingerprints and fine grass masks.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const SIZE:=8.
var meadow:Dictionary={}
var masks:Dictionary={}
var entries:=0

func _put(target:Dictionary,bounds:Rect2,row:Array,halo:float=0.)->void:
	var broad:=bounds.grow(halo)
	for y in range(floori(broad.position.y/SIZE)-1,floori(broad.end.y/SIZE)+2):
		for x in range(floori(broad.position.x/SIZE)-1,floori(broad.end.x/SIZE)+2):
			var block:=Vector2i(x,y)
			if not Rect2(Vector2(block)*SIZE,Vector2.ONE*SIZE).grow(halo).intersects(bounds,halo==0.):continue
			if not target.has(block):target[block]=[]
			target[block].append(row)
	entries+=1

func _footprint(fp:Variant)->void:
	_put(masks,Frame.bounds(Frame.grow(fp,.65)),["footprint",fp])

func _capsule(a:Vector2,b:Vector2,radius:float,water:bool)->void:
	_put(masks,Rect2(a,Vector2.ZERO).expand(b).grow(radius+.65),["capsule",a,b,radius,water])

func _segments(target:Dictionary,tag:String,points:Array,radius:float)->void:
	if points.size()==1:
		var at:=Vector2(points[0][0],points[0][1])
		_put(target,Rect2(at,Vector2.ZERO).grow(radius),[tag,at,radius],1.)
	for i in range(1,points.size()):
		var a:=Vector2(points[i-1][0],points[i-1][1]);var b:=Vector2(points[i][0],points[i][1])
		_put(target,Rect2(a,Vector2.ZERO).expand(b).grow(radius),[tag,a,b,radius],1.)

func prepare(city:RefCounted,entrances:Dictionary)->void:
	meadow={};masks={};entries=0
	var wonders:Dictionary=preload("res://scripts/world/city_creation_street_wonder_plan.gd").derive(city)
	for pocket:Dictionary in wonders.pockets:_capsule(pocket.at,pocket.at,float(pocket.radius),false)
	for pier:Dictionary in wonders.piers:_capsule(pier.start,pier.end,.46,false)
	for court:Dictionary in city.courtyard_plans():
		for fp:Variant in court.tiles:
			_put(meadow,Frame.bounds(fp),["courtyard",fp],1.);_footprint(fp)
	for house:Dictionary in city.houses:
		if house.get("signature","")=="floating_amphitheater":
			var plan:Dictionary=city.AmphitheaterPlan.for_house(city,house)
			for fp:Rect2 in city.AmphitheaterPlan.ground_masks(plan):_put(meadow,fp,["courtyard",fp],1.)
		for cell:Dictionary in house.cells:
			if int(cell.level)!=0:continue
			var fp:Variant=Frame.footprint(house,cell)
			_put(meadow,Frame.bounds(Frame.grow(fp,.12)),["house",Frame.box_center(fp),cell.kind] if fp is Rect2 else ["house_frame",fp,cell.kind],1.)
			_footprint(fp)
		for door:Dictionary in entrances[str(house.get("id",str(house.origin)))]:
			var at:Vector2=door.clearance_at
			_put(meadow,Rect2(at-Vector2.ONE*1.06,Vector2.ONE*2.12),["door",at],1.)
			_put(masks,Rect2(at,Vector2.ZERO).grow(1.60),["door",at])
	for road:Dictionary in city.roads:
		_segments(meadow,"road",road.points,float(road.width)*.5+.56)
		for marker:Dictionary in road.get("roundabouts",[]):
			_segments(meadow,"road",[marker.center],float(marker.radius)+.26)
			var at:=Vector2(marker.center[0],marker.center[1]);_capsule(at,at,float(marker.radius)+.15,false)
		for i in range(1,road.points.size()):_capsule(Vector2(road.points[i-1][0],road.points[i-1][1]),Vector2(road.points[i][0],road.points[i][1]),float(road.width)*.5+.45,false)
	for water:Dictionary in city.waters:
		_segments(meadow,"water",water.points,float(water.width)*.5+1.1)
		for i in range(maxi(1,water.points.size()-1)):
			var j:=mini(i+1,water.points.size()-1)
			_capsule(Vector2(water.points[i][0],water.points[i][1]),Vector2(water.points[j][0],water.points[j][1]),float(water.width)*.5,true)

func fingerprint(block:Vector2i)->Array:return meadow.get(block,[])

func populate(mask:RefCounted,block:Vector2i)->void:
	for row:Array in masks.get(block,[]):
		match str(row[0]):
			"capsule":mask._add_segment(row[1],row[2],row[3],row[4])
			"footprint":
				for i:int in mask._indices(Frame.bounds(Frame.grow(row[1],mask.MAX_CLEARANCE))):mask._bins[i].footprints.append(row[1])
				for i:int in mask._indices(Frame.bounds(Frame.grow(row[1],mask.EDGE_DISTANCE))):mask._bins[i].edge_footprints.append(row[1])
			"door":
				var at:Vector2=row[1];var radius:float=.95+mask.MAX_CLEARANCE
				var rect:=Rect2(at-Vector2.ONE*radius,Vector2.ONE*radius*2.)
				for i:int in mask._indices(rect):mask._bins[i].doors.append(at)
				for i:int in mask._indices(rect.grow(mask.EDGE_DISTANCE-mask.MAX_CLEARANCE)):mask._bins[i].edge_doors.append(at)
