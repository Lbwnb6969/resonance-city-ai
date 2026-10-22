extends RefCounted
const SafeInstances = preload("res://scripts/visual/city_creation_safe_instances.gd")
## Visual consequences of the published choir and actual finished batches.
## No simulation, independent musical clock, save fields or audio players.
const FieldShader=preload("res://scripts/visual/shaders/creation_living_music_field.gdshader")
const MoteShader=preload("res://scripts/visual/shaders/creation_choir_motes.gdshader")
var metronomes=preload("res://scripts/visual/city_creation_spatial_metronomes.gd").new()
const MAX_MOTES:=192
const MAX_HALOS:=16
const MAX_WAVES:=4
const WAVE_SECONDS:=2.4
var renderer
var layer:Node3D
var motes:MultiMeshInstance3D
var mote_material:ShaderMaterial
var halos:Array[MeshInstance3D]=[]
var waves:Array[Dictionary]=[]
var groups:Array[Dictionary]=[]
var patches:Dictionary={}
var _key:Variant=null
var _terrain_key:Variant=null
var _serial:=0
var emissions:=0
var active_halos:=0
var large_members:Dictionary={}
var light_points:Array[Vector2]=[]
var light_signature:=0

static func phrase_pulse(clock:float)->float:
	return pow(.5+.5*cos(TAU*clock/3.),2.)

func strength_at(at:Vector2)->float:
	var strength:=0.
	for point:Vector2 in light_points:
		var distance:=at.distance_squared_to(point)
		if distance<=9.:return 1.
		if distance<36.:strength=maxf(strength,1.-smoothstep(3.,6.,sqrt(distance)))
	return strength

func setup(owner:Node3D)->void:
	renderer=owner;layer=Node3D.new();layer.name="LivingChoir";renderer.add_child(layer)
	metronomes.setup(renderer,layer)
	motes=MultiMeshInstance3D.new();motes.name="ChamberGoldenMotes";layer.add_child(motes)
	motes.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	var multi:=MultiMesh.new();multi.transform_format=MultiMesh.TRANSFORM_3D;multi.use_custom_data=true
	var quad:=QuadMesh.new();quad.size=Vector2(.14,.14);multi.mesh=quad
	SafeInstances.initialize(multi,MAX_MOTES);multi.visible_instance_count=0
	# Unused capacity has finite, non-singular transforms even before it is
	# culled. Every displayed slot is rewritten with the real roof position.

	multi.custom_aabb=AABB(Vector3(-42,-5,-42),Vector3(84,35,84));motes.multimesh=multi
	mote_material=ShaderMaterial.new();mote_material.shader=MoteShader;motes.material_override=mote_material
	for i in range(MAX_HALOS):halos.append(_field("ChoirMeadow_%d"%i,0))
	for i in range(MAX_WAVES):waves.append({"node":_field("LargoProduction_%d"%i,1),"started":-100.,"serial":0,"house_id":""})

func _field(label:String,mode:int)->MeshInstance3D:
	var node:=MeshInstance3D.new();node.name=label;node.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	var material:=ShaderMaterial.new();material.shader=FieldShader;material.set_shader_parameter("mode",mode)
	node.material_override=material;node.hide();layer.add_child(node);return node

func _prepare(records:Dictionary,key:Variant)->void:
	if _key==key:return
	_key=key;groups.clear()
	_sync_ground()
	for id:String in patches.keys():
		if not records.has(id.get_slice("/",1)):patches.erase(id)
	var seen:Dictionary={};var ids:Array=records.keys();ids.sort()
	for id:String in ids:
		var row:Dictionary=records[id];var group:=str(row.get("cluster_id",id))
		if int(row.get("cluster_size",1))<3 or seen.has(group):continue
		seen[group]=true;groups.append({"id":group,"members":row.cluster_order,"size":row.cluster_size})

func _sync_ground()->void:
	renderer.state.prepare_ground_height()
	var ground_key:Array=[renderer.state._ground_terrain.get_instance_id(),renderer.state._ground_terrain.generation]
	if ground_key==_terrain_key:return
	patches.clear();_terrain_key=ground_key
	for slot:Dictionary in waves:slot.started=-100.

func _patch(id:String,at:Vector2,radius:float)->ArrayMesh:
	if patches.has(id) and patches[id].at==at:return patches[id].mesh
	# Match the actual terrain's half-metre grid and a-c diagonal, including
	# between vertices. A coarse, independently triangulated disc can cut slopes.
	var start:=((at-Vector2.ONE*radius)*2.).floor()*.5
	var end:=((at+Vector2.ONE*radius)*2.).ceil()*.5
	var size:=Vector2i(((end-start)*2.).round())+Vector2i.ONE
	var vertices:=PackedVector3Array();var indices:=PackedInt32Array()
	for z in range(size.y):
		for x in range(size.x):
			var local:=start+Vector2(x,z)*.5-at
			var height:float=renderer.state.ground_height(at+local)+.035
			vertices.append(Vector3(local.x,height,local.y))
	for z in range(size.y-1):
		for x in range(size.x-1):
			var a:=z*size.x+x;indices.append_array(PackedInt32Array([a,a+1,a+size.x+1,a,a+size.x+1,a+size.x]))
	var arrays:Array=[];arrays.resize(Mesh.ARRAY_MAX);arrays[Mesh.ARRAY_VERTEX]=vertices;arrays[Mesh.ARRAY_INDEX]=indices
	var mesh:=ArrayMesh.new();mesh.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,arrays);patches[id]={"at":at,"mesh":mesh};return mesh

func emit_production(id:String,row:Dictionary,clock:float)->bool:
	if row.get("temperament","")!="largo" or row.get("role","") not in ["bakery","workshop","atelier","clockmaker"]:return false
	_sync_ground()
	# Called only by the real baker/artisan completion callbacks. Repeated
	# work never creates nodes: the oldest of four transient rings is reused.
	var slot:Dictionary=waves[0]
	for candidate:Dictionary in waves:
		if float(candidate.started)<float(slot.started):slot=candidate
	var at:Vector2=row.position;var node:MeshInstance3D=slot.node
	node.mesh=_patch("wave/"+id,at,15.5);node.position=Vector3(at.x,0,at.y)
	_serial+=1;emissions+=1;slot.started=clock;slot.serial=_serial;slot.house_id=id
	for cached:String in patches.keys():
		if cached.begins_with("wave/") and not waves.any(func(entry):return entry.house_id==cached.get_slice("/",1)):patches.erase(cached)
	return true

func update(records:Dictionary,snapshot:Dictionary,key:Variant,muted:bool=false)->void:
	metronomes.update(snapshot,muted)
	var clock:=float(snapshot.get("clock_sec",0.));mote_material.set_shader_parameter("music_clock",clock)
	for node:MeshInstance3D in halos:node.hide()
	active_halos=0;var count:=0;var mote_bounds:=AABB()
	large_members.clear();light_points.clear()
	if not records.is_empty():_prepare(records,key)
	if not muted and bool(snapshot.get("audible",false)) and not records.is_empty():
		var response:Dictionary=snapshot.get("choral_wave",{})
		for group:Dictionary in groups:
			var strength:=0.
			for id:String in group.members:strength=maxf(strength,float(response.get(id,0.)))
			if strength<=0.:continue
			if int(group.size)<=4:
				for id:String in group.members:
					if active_halos>=MAX_HALOS:break
					var node:MeshInstance3D=halos[active_halos];var at:Vector2=records[id].position
					node.mesh=_patch("halo/"+id,at,2.8);node.position=Vector3(at.x,0,at.y)
					node.material_override.set_shader_parameter("music_clock",clock)
					node.material_override.set_shader_parameter("strength",strength);node.show();active_halos+=1
			if int(group.size)<15:continue
			for id:String in group.members:
				if float(response.get(id,0.))>0.:
					large_members[id]=true;light_points.append(records[id].position)
			for i in range(16):
				if count>=MAX_MOTES:break
				var id:String=group.members[i%group.members.size()];var row:Dictionary=records[id]
				var phase:=float(posmod(hash([id,i]),1009))/1009.
				var at:Vector2=row.position+Vector2.from_angle(phase*TAU)*.55
				var height:=float(row.base_y)+(float(row.max_level)+1.)*1.7+1.+phase*.8
				var origin:=Vector3(at.x,height,at.y)
				mote_bounds=AABB(origin,Vector3.ZERO) if count==0 else mote_bounds.expand(origin)
				SafeInstances.safe_set_instance(motes.multimesh,count,Transform3D(Basis.IDENTITY,origin))
				motes.multimesh.set_instance_custom_data(count,Color(phase,0,0,strength));count+=1
	SafeInstances.show_prefix(motes.multimesh,count)
	light_signature=hash([key,large_members.keys()])
	if count>0:motes.multimesh.custom_aabb=mote_bounds.grow(.4)
	for slot:Dictionary in waves:
		var age:=clock-float(slot.started);var node:MeshInstance3D=slot.node
		node.visible=not muted and not records.is_empty() and records.has(slot.house_id) and age>=0. and age<WAVE_SECONDS
		if node.visible:node.material_override.set_shader_parameter("age",age)

func report()->Dictionary:
	var visible:Array=[]
	for slot:Dictionary in waves:
		if slot.node.visible:visible.append({"house_id":slot.house_id,"started":slot.started,"serial":slot.serial})
	return {"motes":motes.multimesh.visible_instance_count,"halos":active_halos,"waves":visible,"emissions":emissions,"nodes":layer.get_child_count()}
