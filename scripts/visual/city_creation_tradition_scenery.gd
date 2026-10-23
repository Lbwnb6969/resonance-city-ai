extends Node3D
## Card scenery is derived and bounded. Only actual new life counters emit notes.
const Rules=preload("res://scripts/world/city_creation_tradition_rules.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Gold=preload("res://scripts/visual/city_creation_metronome_material.gd")
var demo
var epoch:Array=[]
var counters:Dictionary={}
var ornaments:Node3D
var motes:Array[Dictionary]=[]
var lamps:Array[MeshInstance3D]=[]
var revision:=-1
var elapsed:=0.
var emitted:=0
var ripple_left:=0.
func setup(owner)->void:
	demo=owner;name="TraditionScenery";demo.add_child(self)
	ornaments=Node3D.new();add_child(ornaments)
	for i in range(6):
		var note:=Node3D.new();add_child(note)
		var material:=Gold.glow();material.set_shader_parameter("metronome_strength",.8)
		var head:=SphereMesh.new();head.radius=.065;head.height=.08;head.radial_segments=12;head.rings=6
		_mesh(note,head,Vector3.ZERO,material)
		var stem:=CylinderMesh.new();stem.top_radius=.012;stem.bottom_radius=.012;stem.height=.28;stem.radial_segments=8
		_mesh(note,stem,Vector3(.045,.12,0.),material)
		note.hide();motes.append({"node":note,"left":0.,"at":Vector3.ZERO})
func _mesh(parent:Node3D,shape:Mesh,at:Vector3,material:Material)->MeshInstance3D:
	var node:=MeshInstance3D.new();node.mesh=shape;node.position=at;node.material_override=material;parent.add_child(node);return node
func _process(delta:float)->void:
	elapsed+=delta
	var city:RefCounted=demo.state
	var next_epoch:=[city.get_instance_id(),city._wish_epoch]
	var changed:=next_epoch!=epoch
	if changed:
		epoch=next_epoch;counters.clear();revision=-1;ripple_left=0.
		for row:Dictionary in motes:row.left=0.;row.node.hide()
	if revision!=city.revision:
		revision=city.revision;_rebuild(city)
	for house:Dictionary in city.houses if Rules.has(city,"warm_hearth_ballad") or Rules.has(city,"twilight_tea_pavilion") else []:
		var id:=str(house.id)
		var values:=[int(city.bakery_supply.get(id,{}).get("produced",0)),int(city.cafe_credits.get(id,{}).get("spent",0))]
		var previous:Array=counters.get(id,values)
		if not changed and values[0]>previous[0] and Rules.has(city,"warm_hearth_ballad"):_emit(city,house,true)
		if not changed and values[1]>previous[1] and Rules.has(city,"twilight_tea_pavilion"):
			_emit(city,house,false)
			for resident:Dictionary in demo.life.residents:
				if resident.home_id==id:motes[(emitted-1)%motes.size()].at=resident.node.position+Vector3.UP*.9;break
		counters[id]=values
	for row:Dictionary in motes:
		row.left=maxf(0.,float(row.left)-delta);row.node.visible=row.left>0.
		if row.left>0.:row.node.position=row.at+Vector3(sin(elapsed*3.)*.12,(1.5-row.left)*.55,0.)
	if ripple_left>0.:
		ripple_left=maxf(0.,ripple_left-delta)
		demo.town.water_material.set_shader_parameter("travel_ripple_time",1.5-ripple_left)
		demo.town.water_material.set_shader_parameter("travel_ripple_strength",ripple_left*.45)
	for lamp:MeshInstance3D in lamps:
		lamp.visible=demo.light_phase>0
		lamp.material_override.set_shader_parameter("metronome_strength",.25+.1*sin(elapsed*2.))
func _emit(city:RefCounted,house:Dictionary,water:bool)->void:
	var row:Dictionary=motes[emitted%motes.size()];emitted+=1
	var at:=Vector2(house.origin[0],house.origin[1]);row.at=Vector3(at.x,float(house.get("base_y",0.))+2.,at.y);row.left=1.5
	if water:
		var point:=_nearest_water(city,at)
		if point.is_finite():
			var material:ShaderMaterial=demo.town.water_material
			ripple_left=1.5
			material.set_shader_parameter("travel_ripple_at",point);material.set_shader_parameter("travel_ripple_time",0.);material.set_shader_parameter("travel_ripple_strength",.7)
func _nearest_water(city:RefCounted,at:Vector2)->Vector2:
	var best:=INF;var result:=Vector2(INF,INF)
	for water:Dictionary in city.waters:
		for p:Array in water.points:
			var point:=Vector2(p[0],p[1]);var distance:=at.distance_squared_to(point)
			if distance<best:best=distance;result=point
	return result
func _rebuild(city:RefCounted)->void:
	for child:Node in ornaments.get_children():ornaments.remove_child(child);child.queue_free()
	lamps.clear()
	if Rules.has(city,"lantern_bridge_echo"):
		for house:Dictionary in city.houses:
			var at:=Vector2(house.origin[0],house.origin[1])
			if str(house.role)=="residential" or city.water_clearance(at)>=Rules.water_radius(city):continue
			_lamp(city,_nearest_water(city,at))
		for site:Dictionary in demo.life.travel.sites.values():
			if site.kind=="bridge":_lamp(city,site.at)
	if Rules.has(city,"craft_federation"):
		for house:Dictionary in city.houses:
			if house.role!="workshop":continue
			var at:=Vector2(house.origin[0],house.origin[1]);var neighbors:Dictionary={}
			for other:Dictionary in city.houses:
				if other.role not in ["atelier","clockmaker"]:continue
				if at.distance_to(Vector2(other.origin[0],other.origin[1]))<=8.:neighbors[str(other.role)]=other
			if neighbors.size()!=2:continue
			for member:Dictionary in [house,neighbors.atelier,neighbors.clockmaker]:
				_guild_marker(member)
				_guild_path(str(house.id),str(member.id))
func _lamp(city:RefCounted,at:Vector2)->void:
	if not at.is_finite() or lamps.size()>=24:return
	for lamp:MeshInstance3D in lamps:
		if Vector2(lamp.position.x,lamp.position.z).distance_to(at)<1.:return
	var shape:=TorusMesh.new();shape.inner_radius=.42;shape.outer_radius=.45;shape.rings=24;shape.ring_segments=8
	var material:=Gold.glow();material.set_shader_parameter("metronome_strength",.3)
	lamps.append(_mesh(ornaments,shape,Vector3(at.x,maxf(-.16,city.street_height(at))+.025,at.y),material))
func _guild_marker(house:Dictionary)->void:
	var shape:=CylinderMesh.new();shape.top_radius=.1;shape.bottom_radius=.12;shape.height=.08;shape.radial_segments=12
	var y:=float(house.get("base_y",0.))+.15
	var material:=Wall.merged(Wall.source(Color("bca15c"),null,"component",Wall.Kind.STONE),y,1.7,Wall.WallShader,Vector2(y,y+.08))
	material.set_shader_parameter("albedo_color",Color("bca15c"))
	for i in range(3):_mesh(ornaments,shape,Vector3(house.origin[0]-.28+i*.28,y,house.origin[1]+1.12),material)
func _guild_path(first:String,second:String)->void:
	if first==second or not demo.life.connected_houses.has(first) or not demo.life.connected_houses.has(second):return
	var route:Array=demo.life._route(str(demo.life.connected_houses[first]),str(demo.life.connected_houses[second]))
	var material:=Gold.glow();material.set_shader_parameter("metronome_strength",.3)
	for i in range(1,mini(route.size(),24)):
		var a:Vector3=route[i-1]+Vector3.UP*.04;var b:Vector3=route[i]+Vector3.UP*.04
		if a.distance_to(b)<.002:continue
		var line:=CylinderMesh.new();line.top_radius=.016;line.bottom_radius=.016;line.height=a.distance_to(b);line.radial_segments=6
		var node:=_mesh(ornaments,line,(a+b)*.5,material)
		node.quaternion=Quaternion(Vector3.UP,(b-a).normalized())
