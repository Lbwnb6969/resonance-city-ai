extends RefCounted
## Runtime presentation of paused residents. Economic nodes and dictionaries stay put.
const Routes=preload("res://scripts/world/city_creation_quiet_walk_routes.gd")
const Visual=preload("res://scripts/visual/city_creation_citizen_visual.gd")
const Gait=preload("res://scripts/visual/city_creation_citizen_gait.gd")
const LIMIT:=24
const SPEED:=.55
var life:Node3D
var actors:Dictionary={}
var context:Array=[]
var stamp:Array=[]
var clock:=0.
var stats:={"rebuilds":0,"moves":0,"poses":0}
func _init(owner:Node3D)->void:life=owner
func clear()->void:
	for home:String in actors:_release(actors[home])
	actors.clear();context.clear();stamp.clear();clock=0.
func resume_idle()->void:
	# Only idle homes adopt presentation; real visits/cargo retain their frozen positions.
	for resident:Dictionary in life.residents:
		var actor:Dictionary=actors.get(str(resident.home_id),{})
		if actor.is_empty() or not resident.paused:continue
		resident.node.position=actor.node.position;resident.node.rotation.y=actor.node.rotation.y
		resident.erase("idle_walk")
	clear()
func _release(actor:Dictionary)->void:
	if is_instance_valid(actor.body):actor.body.visible=actor.body_visible
	actor.node.hide();actor.node.queue_free()
func _eligible(resident:Dictionary)->bool:
	if not resident.node.visible:return false
	for field:String in ["cafe_visit","daily_snapshot","bench_visit","balcony_visit","solo_listen"]:
		if resident.has(field):return false
	return true
func _sync()->void:
	var residents:Dictionary={}
	for row:Dictionary in life.residents:residents[str(row.home_id)]=row
	# Retain selected identities across edits; the camera never selects/spawns people.
	var order:Array=actors.keys();var additions:Array=residents.keys();additions.sort()
	for home:String in additions:
		if not actors.has(home):order.append(home)
	var next:Dictionary={}
	for home:String in order:
		var old:Dictionary=actors.get(home,{})
		if not residents.has(home) or not _eligible(residents[home]) or next.size()>=LIMIT:
			if not old.is_empty():_release(old)
			continue
		var resident:Dictionary=residents[home]
		var point:Vector3=old.node.position if not old.is_empty() else life.citizen_position(resident)
		var walk:Dictionary=Routes.start(life._network,point,home)
		if walk.is_empty():
			if not old.is_empty():_release(old)
			continue
		if old.is_empty():
			var node:Node3D=Visual.person(int(resident.node.get_meta("citizen_index",0)))
			node.name="QuietWalker_"+home;life.add_child(node);node.position=point;node.rotation.y=resident.node.rotation.y
			old={"node":node,"body":resident.node.get_child(0),"body_visible":resident.node.get_child(0).visible}
		elif old.body!=resident.node.get_child(0):
			if is_instance_valid(old.body):old.body.visible=old.body_visible
			old.body=resident.node.get_child(0);old.body_visible=old.body.visible
		walk.merge(old);walk.body.hide();next[home]=walk
	actors=next;stats.rebuilds+=1
func tick(delta:float)->void:
	var city:RefCounted=life.state
	var current:=[city.get_instance_id(),city._wish_epoch]
	if context!=current:clear();context=current
	# Authored edits suspend old geometry immediately; only published graph edges move.
	if life._budget_hold or life.budget_sync_pending() or life.last_revision!=city.revision:
		for actor:Dictionary in actors.values():actor.node.hide();actor.body.hide()
		return
	var revision:=[life.last_revision,life._network.get_instance_id()]
	if revision!=stamp:_sync();stamp=revision
	var step:=minf(maxf(delta,0.),.1);clock+=step
	stats.moves=0;stats.poses=0
	for actor:Dictionary in actors.values():
		actor.body.hide();actor.node.show()
		if life.view_camera!=null and not life.view_camera.is_position_in_frustum(actor.node.global_position+Vector3.UP*.35):continue
		var moving:=_advance(actor,step)
		Gait.pose(actor.node,clock,moving,not str(actor.get("ghat_rest","")).is_empty());stats.poses+=1
		if moving:stats.moves+=1
func _advance(actor:Dictionary,delta:float)->bool:
	if actor.wait>0.:actor.wait=maxf(0.,actor.wait-delta);return false
	actor.erase("ghat_rest");actor.erase("plaza_rest")
	var distance:=delta*SPEED;var moving:=false
	for transition in range(8):
		if actor.index>=actor.route.size():
			if preload("res://scripts/world/city_creation_ghat_network.gd").rest(life,actor) or preload("res://scripts/world/city_creation_plaza_pergola_network.gd").rest(life,actor):return false
			var key:String=preload("res://scripts/world/city_creation_plaza_pergola_network.gd").next_key(life._network,actor)
			if key.is_empty():key=Routes.next_key(life.graph,life.positions,actor.current,actor.previous,actor.origin,actor.seed,actor.turn)
			if key.is_empty():actor.wait=1.5;return moving
			actor.previous=actor.current;actor.current=key;actor.turn+=1
			var route:Array[Vector3]=[actor.node.position,life.positions[key]+Vector3.UP*.10]
			actor.route=route;actor.index=1;actor.wait=1.2+posmod(actor.seed+actor.turn,4)*.35
			return moving
		var target:Vector3=actor.route[actor.index]
		var offset:=Routes.planar(target)-Routes.planar(actor.node.position);var length:=offset.length()
		if length<=.0001:actor.index+=1;continue
		var stride:=minf(distance,length);var point:=Routes.planar(actor.node.position)+offset/length*stride
		actor.node.position=Vector3(point.x,preload("res://scripts/world/city_creation_ghat_network.gd").walk_height(life,point)+.10,point.y)
		actor.node.rotation.y=atan2(offset.x,offset.y);moving=moving or stride>0.;distance-=stride
		if stride>=length:actor.index+=1
		if distance<=0.:return moving
	return moving
