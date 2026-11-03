extends RefCounted
## The same ten-sided ring drives visible stones, picking and entry support.
static func ring(stone:Dictionary,index:int,radius:float)->PackedVector2Array:
	var points:=PackedVector2Array();var axis:Vector2=stone.axis
	var cross_axis:=Vector2(-axis.y,axis.x);var at:Vector2=stone.at
	for side in range(10):
		var angle:=TAU*float(side)/10.
		var variation:=.96+.035*sin(float(side)*2.7+float(index)*1.3)
		points.append(at+(axis*cos(angle)*float(stone.radius_along)+cross_axis*sin(angle)*float(stone.radius_cross))*radius*variation)
	return points

static func support(runs:Array,at:Vector2)->Dictionary:
	var index:=0
	for run:Dictionary in runs:
		for stone:Dictionary in run.stones:
			if at.distance_squared_to(stone.at)<=pow(maxf(float(stone.radius_along),float(stone.radius_cross)),2):
				if Geometry2D.is_point_in_polygon(at,ring(stone,index,.86)):return {"supported":true,"stone_index":index,"top_y":stone.y}
			index+=1
	return {"supported":false}

static func cuts(runs:Array,width:float)->Array:
	var result:Array=[]
	for run:Dictionary in runs:
		var scaled:=PackedVector2Array()
		for point:Vector2 in run.points:scaled.append(point*16.)
		var contours:Array=Geometry2D.offset_polyline(scaled,(width*.5+.24)*16.,Geometry2D.JOIN_ROUND,Geometry2D.END_ROUND)
		for i in range(contours.size()):
			var contour:PackedVector2Array=contours[i]
			for j in range(contour.size()):contour[j]/=16.
			contours[i]=contour
		result.append(contours)
	return result

static func in_cut(groups:Array,at:Vector2)->bool:
	for contours:Array in groups:
		var inside:=false
		for polygon:PackedVector2Array in contours:
			if Geometry2D.is_point_in_polygon(at,polygon):inside=not inside
		if inside:return true
	return false
