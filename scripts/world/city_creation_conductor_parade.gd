extends RefCounted
## One real street tour, sampled by the existing 24-second performance clock.
## No independent rewards, resident copies or saved animation cursors.
const WALK_SPEED:=1.25
var _key:Array=[]
var path:Array[Vector3]=[]
var lengths:Array[float]=[]
var lanterns:Dictionary={}
var material:StandardMaterial3D
var mesh:BoxMesh

static func eligible(city:RefCounted)->bool:
	return eligible_rows(city.houses,city.natural_clusters())

static func eligible_rows(houses:Array,groups:Dictionary)->bool:
	var landmarks:=0;var large:Dictionary={}
	for house:Dictionary in houses:
		if house.has("signature"):landmarks+=1
		var group:Dictionary=groups.get(house.id,{})
		if int(group.get("size",0))>=5:large[group.id]=true
	return landmarks>=2 or large.size()>=4

static func street_route(life:Node3D,venue:String,sequence:Array)->Array[Vector3]:
	var result:Array[Vector3]=[];var from:=venue
	var stops:Array=sequence.duplicate();stops.append(venue)
	for id:String in stops:
		if not life.connected_houses.has(from) or not life.connected_houses.has(id):return []
		var leg:Array[Vector3]=life._route(str(life.connected_houses[from]),str(life.connected_houses[id]))
		if leg.is_empty():return []
		for point:Vector3 in leg:
			if result.is_empty() or result[-1].distance_to(point)>.001:result.append(point)
		from=id
	return result

func prepare(life:Node3D)->bool:
	var concert:Dictionary=life._concert
	var next:Array=[life._network.get_instance_id(),concert.get("venue_id",""),concert.get("movement_order",[])]
	if next==_key:return path.size()>1
	_key=next;path=street_route(life,str(concert.venue_id),concert.movement_order);lengths.clear()
	var distance:=0.;lengths.append(distance)
	for i:int in range(1,path.size()):
		distance+=Vector2(path[i].x,path[i].z).distance_to(Vector2(path[i-1].x,path[i-1].z));lengths.append(distance)
	return path.size()>1

func owns(life:Node3D,resident:Dictionary)->bool:
	return life._concert.get("conductor",false) and life._concert.get("phase","")=="playing" and resident.has("daily_snapshot")

func point(life:Node3D,rank:int)->Dictionary:
	var distance:=maxf(0.,float(life._concert.elapsed)-float(rank%48)*.25)*WALK_SPEED
	distance=minf(distance,lengths[-1])
	for i:int in range(1,path.size()):
		if distance>lengths[i]:continue
		var a:=path[i-1];var b:=path[i];var at:=a.lerp(b,(distance-lengths[i-1])/maxf(.00001,lengths[i]-lengths[i-1]))
		at.y=life.state.street_height(Vector2(at.x,at.z))+.10
		return {"position":at,"yaw":atan2((b-a).x,(b-a).z)}
	var at:=path[-1];at.y=life.state.street_height(Vector2(at.x,at.z))+.10
	return {"position":at,"yaw":0.}

func resume(life:Node3D,resident:Dictionary)->bool:
	if not prepare(life):return false
	var rank:int=life._concert.participants.find(str(resident.home_id))
	return rank>=0 and resident.node.position.distance_to(point(life,rank).position)<.16

func update(life:Node3D)->void:
	if not life._concert.get("conductor",false) or life._concert.get("phase","")!="playing":
		if not lanterns.is_empty():clear()
		return
	if not prepare(life):life._end_concert(false);return
	for resident:Dictionary in life.residents:
		if not owns(life,resident):continue
		life.flush_citizen(resident)
		var rank:int=life._concert.participants.find(str(resident.home_id))
		var pose:=point(life,rank);var previous:Vector3=resident.node.position
		resident.node.position=pose.position;resident.node.rotation.y=pose.yaw
		resident.dwell_id="";resident.service_pending="";resident.route=[];resident.index=0
		life.record_travel("resident/"+str(resident.home_id),Vector2(previous.x,previous.z),Vector2(pose.position.x,pose.position.z))
		var body:Node3D=resident.node.get_child(0)
		body.position=Vector3(float(rank%3-1)*.14,.018*sin(life.time*7.+rank),0.)
		if not lanterns.has(resident.home_id):
			var lantern:=MeshInstance3D.new();lantern.name="ParadeLantern"
			if material==null:
				material=StandardMaterial3D.new();material.albedo_color=Color("ffc56d");material.emission_enabled=true;material.emission=Color("ffb74a");material.emission_energy_multiplier=1.6
				mesh=BoxMesh.new();mesh.size=Vector3(.10,.14,.10)
			lantern.mesh=mesh;lantern.material_override=material;lantern.position=Vector3(.19,.28,.07);lantern.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
			body.add_child(lantern);lanterns[resident.home_id]=lantern
		lanterns[resident.home_id].rotation.z=sin(life.time*5.+rank)*.12

func clear()->void:
	for lantern:Node in lanterns.values():
		if is_instance_valid(lantern):lantern.queue_free()
	lanterns.clear();_key.clear();path.clear();lengths.clear()
