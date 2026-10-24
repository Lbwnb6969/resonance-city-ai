extends RefCounted
const Family=preload("res://scripts/world/city_creation_prototype_resonance.gd")
static func craft(demo,kind:String,shop:String,target:String)->void:
	if kind not in ["installed","art_installed","mechanism_installed","festival"]:return
	gather(demo,shop,[target],"prototype_craft")
static func gather(demo,shop:String,members:Array,kind:String="prototype_gathering")->void:
	var index:int=demo.state._house_index(shop)
	if index<0 or Family.domino_extra_hops(Family.prototype(demo.state,demo.state.houses[index]))==0:return
	if not demo.has_meta("juice_feedback"):return
	var ids:Array=[shop]
	for id:String in members:
		if not id.is_empty() and id not in ids:ids.append(id)
	demo.get_meta("juice_feedback").enqueue({"kind":kind,"source":shop,"members":ids,"label":"百工雅集"})
static func extend(demo,event:Dictionary,ids:Array[String])->Array[String]:
	if event.kind not in ["prototype_craft","prototype_gathering"] or ids.is_empty():return ids
	var index:int=demo.state._house_index(str(event.source))
	if index<0 or Family.domino_extra_hops(Family.prototype(demo.state,demo.state.houses[index]))==0:return ids
	var last:Dictionary=demo.town._house_record(ids[-1]);var at:=Vector2(last.origin[0],last.origin[1]);var rows:Array=[]
	for house:Dictionary in demo.state.houses:
		var id:=str(house.id)
		if id in ids or not demo.town.house_roots.has(id) or not demo.life.connected_houses.has(id):continue
		var distance:float=at.distance_to(Vector2(house.origin[0],house.origin[1]))
		if distance<=6.:rows.append({"id":id,"distance":distance})
	rows.sort_custom(func(a,b):return a.id<b.id if is_equal_approx(a.distance,b.distance) else a.distance<b.distance)
	for row:Dictionary in rows:
		if not demo.life.connected_houses.has(ids[-1]):break
		if not demo.life._route(str(demo.life.connected_houses[ids[-1]]),str(demo.life.connected_houses[row.id])).is_empty():
			ids.append(str(row.id));event.prototype_extra=str(row.id);break
	return ids
