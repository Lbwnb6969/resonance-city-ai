extends RefCounted
## Continuous facing residential walls, measured along real street segments.
## The 2.0–3.2m band is the first narrow-lane fixture, not a city-wide score.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const MIN_WIDTH:=2.0
const MAX_WIDTH:=3.2
const EPS:=.002
const MAX_APPROACH:=.82 # Same door-to-street bound as Network._build_graph.

static func derive(city:RefCounted,report:Dictionary,water_distance:Callable)->Array:
	var walls:Array=[];var obstacles:Array=[];var entrances:Dictionary={}
	for house:Dictionary in city.houses:
		for cell:Dictionary in house.cells:
			var box:Variant=Frame.footprint(house,cell);obstacles.append(box)
			if house.role!="residential" or int(cell.level)!=0 or cell.kind!="room":continue
			var polygon:=Frame.corners(box)
			for i in range(polygon.size()):
				var a:=polygon[i];var b:=polygon[(i+1)%polygon.size()]
				if a.distance_to(b)<EPS:continue
				walls.append({"house_id":house.id,"cell_id":cell.id,"a":a,"b":b,"center":Frame.box_center(box)})
		if house.role=="residential":entrances[house.id]=city.house_entrances(house.id)
	var result:Array=[]
	for road:Dictionary in city.roads:
		var points:=_straight_runs(road.points)
		for index in range(1,points.size()):
			var a:=points[index-1];var b:=points[index]
			if a.distance_to(b)<EPS:continue
			var direction:=(b-a).normalized();var normal:=Vector2(-direction.y,direction.x);var length:=a.distance_to(b)
			var nearby:Array=[];var breaks:Array=[0.,length]
			for wall:Dictionary in walls:
				if not Rect2(a,Vector2.ZERO).expand(b).grow(MAX_WIDTH).intersects(Rect2(wall.a,Vector2.ZERO).expand(wall.b),true):continue
				nearby.append(wall)
				for p:Vector2 in [wall.a,wall.b]:breaks.append(clampf((p-a).dot(direction),0.,length))
			breaks.sort();var runs:Array=[];var run:Array=[]
			for i in range(1,breaks.size()):
				var lo:float=breaks[i-1];var hi:float=breaks[i]
				if hi-lo<EPS:continue
				var piece:=_piece(a,direction,normal,lo,hi,nearby,obstacles,water_distance)
				if piece.is_empty():
					if not run.is_empty():runs.append(run);run=[]
				else:run.append(piece)
			if not run.is_empty():runs.append(run)
			for pieces:Array in runs:
				var row:=_row(city,report,road,index,a,direction,normal,pieces,entrances,obstacles,water_distance)
				if not row.is_empty():result.append(row)
	return preload("res://scripts/world/city_creation_lane_continuity.gd").join(result,city,report,obstacles,water_distance)

static func _straight_runs(raw:Array)->Array[Vector2]:
	# Ignore extra samples on the exact same straight street; preserve bends,
	# reversals and road identity. This never edits the authored points.
	var points:Array[Vector2]=[]
	for value:Array in raw:
		var at:=Vector2(value[0],value[1])
		if not points.is_empty() and points[-1].distance_to(at)<EPS*.01:continue
		points.append(at)
		while points.size()>=3:
			var a:=points[-3];var b:=points[-2];var c:=points[-1]
			if b.distance_to(Geometry2D.get_closest_point_to_segment(b,a,c))>EPS*.01:break
			points.remove_at(points.size()-2)
	return points

static func _hit(at:Vector2,normal:Vector2,walls:Array)->Dictionary:
	var result:={};var nearest:=INF
	for wall:Dictionary in walls:
		var point:Variant=Geometry2D.segment_intersects_segment(at,at+normal*MAX_WIDTH,wall.a,wall.b)
		if point==null or (at-Vector2(point)).dot(Vector2(point)-Vector2(wall.center))<=0.:continue
		var distance:float=at.distance_to(point)
		if distance<nearest:nearest=distance;result={"at":point,"wall":wall,"distance":distance}
	return result

static func _piece(a:Vector2,direction:Vector2,normal:Vector2,lo:float,hi:float,walls:Array,obstacles:Array,water_distance:Callable)->Dictionary:
	var polygon:=PackedVector2Array();var sides:Array=[];var widths:Array=[]
	for offset:float in [lo+EPS*.1,hi-EPS*.1]:
		var at:=a+direction*offset;var left:=_hit(at,normal,walls);var right:=_hit(at,-normal,walls)
		if left.is_empty() or right.is_empty():return {}
		if left.wall.house_id==right.wall.house_id:return {}
		var width:float=left.distance+right.distance
		if width<MIN_WIDTH-EPS or width>MAX_WIDTH+EPS:return {}
		widths.append(width);polygon.append(left.at-normal*EPS);polygon.append(right.at+normal*EPS)
		if sides.is_empty():sides=[left.wall,right.wall]
	var last:=polygon[2];polygon[2]=polygon[3];polygon[3]=last
	var box:={"polygon":polygon}
	if obstacles.any(func(o):return Frame.boxes_overlap(box,Frame.grow(o,-EPS))):return {}
	if float(water_distance.call(box))<.05:return {}
	return {"lo":lo,"hi":hi,"walls":sides,"polygon":polygon,"widths":widths}

static func _row(city:RefCounted,report:Dictionary,road:Dictionary,index:int,a:Vector2,direction:Vector2,normal:Vector2,pieces:Array,entrances:Dictionary,obstacles:Array,water_distance:Callable)->Dictionary:
	var members:Array=[];var sources:Array=[road.id];var walls:Array=[];var widths:Array=[]
	for piece:Dictionary in pieces:
		widths.append_array(piece.widths)
		for wall:Dictionary in piece.walls:
			if not members.has(wall.house_id):members.append(wall.house_id)
			if not sources.has(wall.cell_id):sources.append(wall.cell_id);walls.append(wall)
	if members.size()<2:return {}
	members.sort();sources.append_array(members);sources.sort()
	var entries:Array=[];var served:Array=[];var components:Array=[]
	var lo:float=pieces[0].lo;var hi:float=pieces[-1].hi
	for id:String in members:
		var component:String=report.houses[id].component
		if not component.is_empty() and not components.has(component):components.append(component)
		for entry:Dictionary in entrances[id]:
			if not walls.any(func(w):return w.house_id==id and w.cell_id==entry.cell_id):continue
			var offset:float=(entry.at-a).dot(direction)
			if offset<lo-EPS or offset>hi+EPS:continue
			var target:=a+direction*offset;var delta:Vector2=target-Vector2(entry.at)
			if delta.length()>=MAX_APPROACH or Frame.normal(entry).dot(target-Vector2(entry.wall_at))<=0.:continue
			if entry.active and entry.road_id!=road.id:continue
			var path:={"center":(target+Vector2(entry.at))*.5,"angle":-delta.angle(),"half":Vector2(maxf(delta.length()*.5,EPS),.35)}
			if obstacles.any(func(o):return Frame.boxes_overlap(path,o)) or float(water_distance.call(path))<.05:continue
			entries.append({"house_id":id,"cell_id":entry.cell_id,"road_id":road.id,"at":entry.at,"street_at":target})
			if not served.has(id):served.append(id)
	var connected:bool=report.network_ready and components.size()==1 and members.all(func(id):return report.houses[id].connected)
	var published:Array=city._region_network.get("road_components",{}).get(road.id,[]) if report.network_ready else []
	var eligible:bool=connected and components[0] in published and served.size()==members.size()
	return {"kind":"courtyard","stage":"district" if eligible else "cluster","members":members,"source_ids":sources,"component":components[0] if connected else "","connected":connected,"evidence":{"geometry":"narrow_lane","road_id":road.id,"segment":index-1,"from":a+direction*lo,"to":a+direction*hi,"wall_segments":walls,"width_min":widths.min(),"width_max":widths.max(),"public_entries":entries,"usable_strips":pieces.map(func(p):return p.polygon),"network":"ready" if report.network_ready else "waiting"},"eligibility":{"district":eligible,"warm":false,"reason":"qualified" if eligible else "network_waiting" if not report.network_ready else "public_entry_missing" if served.size()!=members.size() else "street_disconnected"}}
