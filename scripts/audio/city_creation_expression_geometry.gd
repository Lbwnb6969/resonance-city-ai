extends RefCounted
## Shape-only colors, deduplicated within the existing one-house weight budget.
const Zones=preload("res://scripts/world/city_creation_functional_zones.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Context=preload("res://scripts/audio/city_creation_expression_context.gd")
const Chamber=preload("res://scripts/audio/city_creation_chamber_context.gd")
var signature:=0
var city_id:=0
var records:Dictionary={}
var rebuilds:=0
func refresh(city:RefCounted)->void:
	var key:=hash([city.houses,city.roads,city.waters,city.terrain_strokes,city.terrain_policy,city.districts,city.placed_landmarks])
	if city_id==city.get_instance_id() and signature==key:return
	city_id=city.get_instance_id();signature=key;rebuilds+=1;records={}
	var spaces:Dictionary=city.functional_zones()
	var curves:Array=[]
	for road:Dictionary in city.roads:curves.append({"id":road.id,"bins":Chamber.curves([road])})
	for house:Dictionary in city.houses:
		var water:=INF;var water_ids:Array=[];var sway_ids:Array=[];var craft_ids:Array=[]
		for cell:Dictionary in house.cells:
			if int(cell.level)!=0:continue
			var box:Variant=Frame.footprint(house,cell)
			water=minf(water,Zones._water_distance(city,box))
			if Zones._river_distance(city,box)<5.2 and not water_ids.has("river"):water_ids.append("river")
			for stroke:Dictionary in city.waters:
				var d:=INF
				for point:Array in stroke.points:d=minf(d,Frame.distance(box,Vector2(point[0],point[1])))
				for i in range(1,stroke.points.size()):
					var a:=Vector2(stroke.points[i-1][0],stroke.points[i-1][1]);var b:=Vector2(stroke.points[i][0],stroke.points[i][1])
					if Frame.segment(box,a,b):d=0.;break
					for corner:Vector2 in Frame.corners(box):d=minf(d,corner.distance_to(Geometry2D.get_closest_point_to_segment(corner,a,b)))
				if d-float(stroke.width)*.5<5.2 and not water_ids.has(stroke.id):water_ids.append(stroke.id)
		for curve:Dictionary in curves:
			if Chamber.house(city,house,curve.bins):sway_ids.append(curve.id)
		# An authored bend has shape even in a city with no roads.
		if Chamber.house(city,house,{}):sway_ids=[house.id]
		for space:Dictionary in spaces.get("spaces",[]):
			if space.kind=="artisan" and space.members.has(house.id) and not space.evidence.get("forecourts",[]).is_empty():
				for id:String in space.source_ids:
					if not craft_ids.has(id):craft_ids.append(id)
		if Context.architecture(city,house) and not craft_ids.has(house.id):craft_ids.append(house.id)
		var flow:=maxf(1.-smoothstep(0.,5.2,water),.7225 if not sway_ids.is_empty() else 0.)
		var sources:Array=water_ids if water<5.2 else []
		for id:String in sway_ids:
			if not sources.has(id):sources.append(id)
		if flow>0. and not sources.has(house.id):sources.append(house.id)
		sources.sort();craft_ids.sort()
		records[house.id]={"flow":flow,"craft":.65 if not craft_ids.is_empty() else 0.,"base_y":float(house.get("base_y",0.)),"flow_sources":sources,"craft_sources":craft_ids}
func sample(weights:Dictionary)->Dictionary:
	var result:={"flow":0.,"craft":0.,"flow_sources":[],"craft_sources":[]}
	for id:String in weights:
		var row:Dictionary=records.get(id,{})
		for kind:String in ["flow","craft"]:
			result[kind]+=float(weights[id])*float(row.get(kind,0.))
			if float(weights[id])<=0. or float(row.get(kind,0.))<=0.:continue
			for source:String in row[kind+"_sources"]:
				if not result[kind+"_sources"].has(source):result[kind+"_sources"].append(source)
	for kind:String in ["flow","craft"]:result[kind+"_sources"].sort()
	result.highland=Context.contour(records,weights)
	return result
