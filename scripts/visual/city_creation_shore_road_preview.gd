extends RefCounted
const Fork=preload("res://scripts/world/city_creation_chemistry_preview.gd")
const Bed=preload("res://scripts/visual/city_creation_shore_road_bed.gd")
static func show(renderer,points:Array[Vector2],width:float,style:String)->void:
	if points.size()<2:return
	var near:=false
	for i in range(1,points.size()):
		var count:=maxi(1,ceili(points[i-1].distance_to(points[i])/.35))
		for j in range(count+1):near=near or renderer.state.water_clearance(points[i-1].lerp(points[i],float(j)/count))<width*.5+Bed.REACH
	if not near:return
	var began:=Time.get_ticks_usec();var key:=[renderer.state.get_instance_id(),renderer.state.revision,points,width,style]
	var ready:Dictionary=renderer.get_meta("shore_road_preview",{})
	if ready.get("key")!=key:
		var requested:=0. if is_equal_approx(width,renderer.state.RoadUpgrade.width_for(style)) else width
		var check:Dictionary=renderer.state.preview_road(points,style,"none",requested)
		if not check.ok:return
		var city:RefCounted=Fork.fork(renderer.state);city.revision+=1
		var encoded:Array=[]
		for at:Vector2 in points:encoded.append([at.x,at.y])
		var id:String=check.upgrade_road_id
		var road:Dictionary
		if id.is_empty():
			id="r%d"%maxi(renderer.state._next_road_id,int(renderer.state._high_watermark.road)+1)
			road={"id":id,"points":encoded,"width":width,"style":style,"bridge":check.bridge,"source":"player"};city.roads.append(road)
		else:
			var index:int=city.roads.find(city.roads.filter(func(r):return r.id==id)[0]);road=city.roads[index].duplicate(true)
			road.width=width;road.style=style;road.bridge=check.bridge;city.roads[index]=road
		city.prepare_ground_height();city.road_junctions()
		var context:Node3D=renderer.get_script().new();context.state=city;context.record_only=true;context._prepare_road_layout()
		var data:Dictionary=context._prepare_road_data(road)
		ready={"key":key.duplicate(true),"bed":data.earthworks.shore_bed,"road":road};renderer.set_meta("shore_road_preview",ready)
		renderer.BudgetRebuild.new()._dispose_context(context)
	Bed.install(renderer,renderer.preview,ready.bed,ready.road,true)
	renderer.preview.set_meta("shore_bed_signature",hash(ready.bed));renderer.preview.set_meta("shore_bed_ms",float(Time.get_ticks_usec()-began)/1000.)
