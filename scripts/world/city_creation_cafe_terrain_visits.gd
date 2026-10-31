extends RefCounted
## Saved intent and earned normalized dwell survive furniture replanning.
static func validate(data:Dictionary)->Dictionary:
	if not data.has("cafe_terrain"):return {"ok":true}
	var value:Variant=data.cafe_terrain
	if not value is Dictionary or value.size()!=2 or value.get("version")!=1 or not value.get("groups") is Dictionary:return {"ok":false,"message":"街景茶座行程版本无效"}
	var groups:Dictionary={}
	for group:Dictionary in data.get("cafe_groups",[]):groups[group.cafe_id]=group
	for id:Variant in value.groups:
		var row:Variant=value.groups[id]
		if not id is String or not groups.has(id) or not row is Dictionary or row.size()!=3:return {"ok":false,"message":"街景茶座行程身份无效"}
		if row.get("phase") not in ["waiting","tea","leaving"] or not row.get("suspended") is bool or not (row.get("elapsed") is int or row.get("elapsed") is float) or not is_finite(float(row.elapsed)) or row.elapsed<0 or row.elapsed>=6:return {"ok":false,"message":"街景茶座行程时间无效"}
		if row.phase!="tea" and row.elapsed!=0 or row.phase=="tea" and groups[id].participants.size()<2 or groups[id].phase=="tea":return {"ok":false,"message":"街景茶座恢复阶段无效"}
		if (row.phase=="leaving")!=(groups[id].phase=="leaving"):return {"ok":false,"message":"街景茶座离席阶段无效"}
	return {"ok":true}
static func write(cafe,result:Dictionary)->void:
	if not cafe.terrain_resume.is_empty():result.cafe_terrain={"version":1,"groups":cafe.terrain_resume.duplicate(true)}
static func prune(data:Dictionary)->void:
	if not data.has("cafe_terrain"):return
	var retained:Dictionary={}
	for group:Dictionary in data.get("cafe_groups",[]):retained[group.cafe_id]=true
	for id:String in data.cafe_terrain.groups.keys():
		if not retained.has(id):data.cafe_terrain.groups.erase(id)
	if data.cafe_terrain.groups.is_empty():data.erase("cafe_terrain")
static func replan(cafe,id:String,old:Dictionary)->bool:
	var life=cafe.life
	if not life.state.TerrainPolicy.enabled(life.state) and not cafe.terrain_resume.has(id):return false
	var h:int=life.state._house_index(id)
	if h<0 or life.state.houses[h].role!="garden_cafe":return false
	var group:Dictionary=cafe.groups[id];var layout:Dictionary=cafe.layouts.get(id,{})
	var intent:Dictionary=cafe.terrain_resume.get(id,{"phase":group.phase,"elapsed":group.elapsed,"suspended":false}).duplicate(true)
	var routes:Dictionary={};var valid:bool=not layout.is_empty() and life.connected_houses.has(id)
	var stationary:bool=valid and intent.phase=="tea"
	for home:String in group.participants:
		var resident:Dictionary=cafe._resident(home)
		if resident.is_empty() or not resident.has("cafe_visit"):return false
		if valid and (not life.connected_houses.has(home) or life._route(str(life.connected_houses[home]),str(life.connected_houses[id])).is_empty()):valid=false;stationary=false
		if stationary and Vector2(resident.node.position.x,resident.node.position.z).distance_to(layout.seats[int(resident.cafe_visit.seat)])>.15:stationary=false
	if stationary:
		group.phase="tea";group.elapsed=intent.elapsed;cafe.terrain_resume.erase(id)
		for home:String in group.participants:
			var resident:Dictionary=cafe._resident(home);resident.cafe_visit.phase="seated";resident.paused=false;resident.node.get_child(0).position.y=cafe.SEATED_BODY_Y
		return true
	for home:String in group.participants:
		var resident:Dictionary=cafe._resident(home)
		var route:Array[Vector3]=[]
		if valid:
			if intent.phase=="leaving":
				var entry:Vector3=life.positions[life.connected_houses[id]]
				var points:Array[Vector2]=cafe.layout_api.route_with_plan(life.state,id,old if not old.is_empty() else layout,Vector2(resident.node.position.x,resident.node.position.z),Vector2(entry.x,entry.z))
				for at:Vector2 in points:route.append(Vector3(at.x,life.state.street_height(at)+.1,at.y))
			else:route=cafe._approach(resident.node.position,id,int(resident.cafe_visit.seat))
		if route.is_empty():valid=false
		routes[home]=route
	intent.suspended=not valid;cafe.terrain_resume[id]=intent
	group.phase="leaving" if intent.phase=="leaving" else "waiting";group.elapsed=0.
	for home:String in group.participants:
		var resident:Dictionary=cafe._resident(home)
		resident.cafe_visit.phase="leaving" if intent.phase=="leaving" else "walking"
		resident.node.get_child(0).position.y=0.;resident.route=routes[home] if valid else [] as Array[Vector3];resident.index=0;resident.paused=not valid
	return true
static func paused(cafe,id:String)->bool:return cafe.terrain_resume.get(id,{}).get("suspended",false)
static func resume_time(cafe,id:String)->float:
	var time:float=cafe.terrain_resume.get(id,{}).get("elapsed",0.);cafe.terrain_resume.erase(id);return time
static func restore(cafe,data:Dictionary)->bool:
	cafe.terrain_resume.clear()
	if not data.has("cafe_terrain"):return false
	cafe.terrain_resume=data.cafe_terrain.groups.duplicate(true)
	var saved:Dictionary={}
	for person:Dictionary in data.residents:saved[person.home_id]=person
	for group:Dictionary in data.get("cafe_groups",[]):
		var valid:=true
		for home:String in group.participants:
			var resident:Dictionary=cafe._resident(home)
			if resident.is_empty() or not saved.has(home) or not saved[home].has("cafe_visit") or (group.phase!="leaving" and not cafe.life.state.has_cafe_credit(home)):valid=false
		if not valid:cafe.terrain_resume.erase(group.cafe_id);continue
		cafe.groups[group.cafe_id]=group.duplicate(true)
		for home:String in group.participants:
			var resident:Dictionary=cafe._resident(home);var person:Dictionary=saved[home]
			resident.cafe_visit=person.cafe_visit.duplicate(true);resident.destination_id=group.cafe_id;resident.dwell_id="";resident.service_pending=""
			resident.node.position=Vector3(person.position[0],cafe.life.state.street_height(Vector2(person.position[0],person.position[1]))+.1,person.position[1]);resident.node.rotation.y=person.yaw
			resident.node.get_child(0).position.y=cafe.SEATED_BODY_Y if resident.cafe_visit.phase=="seated" else 0.
		if not replan(cafe,group.cafe_id,{}):cafe._cancel(group.cafe_id)
	return true
