extends RefCounted
const Visual=preload("res://scripts/visual/city_creation_citizen_visual.gd")
static func update(life)->void:
	if life.time<float(life.get_meta("citizen_visual_next",0.)):
		preload("res://scripts/visual/city_creation_citizen_gait.gd").update(life);return
	life.set_meta("citizen_visual_next",life.time+.10)
	for resident:Dictionary in life.residents:
		if not _near(life,resident.node):continue
		var kind:=""
		var seated:bool=resident.get("cafe_visit",{}).get("phase","")=="seated"
		if seated:kind="cup"
		elif resident.get("visual_bread",false) and str(resident.dwell_id).is_empty():kind="bread"
		elif str(resident.dwell_id).is_empty() and not resident.paused:
			var stops:Array=resident.stops;var index:int=stops.find(str(resident.destination_id))
			var previous:String=str(stops[posmod(index-1,stops.size())]) if index>=0 else ""
			if life._roles.get(previous,"")=="bakery" and life.state.has_cafe_credit(str(resident.home_id)):kind="bread"
		if kind.is_empty() and life.tram.night and not resident.paused:kind="lantern"
		Visual.hand(resident.node,kind,life.time)
	for worker:Dictionary in life.bakery.workers:
		if not _near(life,worker.node):continue
		var kind:="bread" if worker.phase=="baking" and int(life.state.bakery_status(str(worker.bakery_id)).stock)>0 else ""
		Visual.hand(worker.node,"lantern" if kind.is_empty() and life.tram.night and worker.phase in ["walking","returning"] else kind,life.time)
	for worker:Dictionary in life.workshop.workers:
		if not _near(life,worker.node):continue
		Visual.hand(worker.node,"lantern" if not worker.carry.visible and life.tram.night and worker.phase in life.workshop.MOVING else "",life.time)
	life.greetings.meet(life)
	preload("res://scripts/visual/city_creation_citizen_gait.gd").update(life)
static func _near(life,node:Node3D)->bool:
	return node.visible and (life.view_camera==null or (life.view_camera.global_position.distance_squared_to(node.global_position)<1600. and life.view_camera.is_position_in_frustum(node.global_position+Vector3.UP*.3)))
