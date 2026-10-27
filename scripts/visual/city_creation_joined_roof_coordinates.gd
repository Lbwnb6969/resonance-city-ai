extends RefCounted
## Share one chart across the whole roof group before corner or hinge cuts.
## Row roofs unfold their meridian through the ridge. Union roofs retain a
## continuous height-field chart, with a group-wide area-density correction.
static func assign(patches:Array,gable:Dictionary,bounds:Rect2,sample:Callable)->void:
	var meridians:Dictionary={};var scale:=1.
	if not gable.is_empty():
		for patch:Dictionary in patches:
			if patch.surface!="roof":continue
			for p:Vector3 in patch.vertices:meridians[p.z if gable.along_x else p.x]=0.
		var values:Array=meridians.keys();values.sort();var previous:=Vector3.ZERO;var distance:=0.
		var along:float=bounds.get_center().x if gable.along_x else bounds.get_center().y
		for i in range(values.size()):
			var cross_value:float=values[i]
			var p:Vector3=sample.call(Vector2(along,cross_value) if gable.along_x else Vector2(cross_value,along))
			if i>0:distance+=previous.distance_to(p)
			meridians[cross_value]=distance/.28;previous=p
	else:
		var area:=0.;var projected:=0.
		for patch:Dictionary in patches:
			if patch.surface!="roof":continue
			for i in range(0,patch.vertices.size(),3):
				var normal:Vector3=(patch.vertices[i+1]-patch.vertices[i]).cross(patch.vertices[i+2]-patch.vertices[i])
				area+=normal.length();projected+=absf(normal.y)
		scale=sqrt(area/projected)
	for patch:Dictionary in patches:
		if patch.surface!="roof":continue
		var coordinates:=PackedVector2Array()
		for p:Vector3 in patch.vertices:
			if gable.is_empty():coordinates.append(Vector2((p.x-bounds.position.x)/.22,(p.z-bounds.position.y)/.28)*scale)
			else:
				var along:float=p.x-bounds.position.x if gable.along_x else p.z-bounds.position.y
				coordinates.append(Vector2(along/.22,float(meridians[p.z if gable.along_x else p.x])))
		patch.coordinates=coordinates;patch.uv_chart="gable_meridian" if not gable.is_empty() else "union_area";patch.uv_scale=scale
