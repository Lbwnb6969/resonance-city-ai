extends Node3D
## Scenery follows the published city, independently of house collision batching.
const Plan=preload("res://scripts/world/city_creation_street_wonder_plan.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Contact=preload("res://scripts/visual/shaders/creation_contact.gdshader")
const LegendaryPlan=preload("res://scripts/world/city_creation_legendary_wonder_plan.gd")
const Legendary=preload("res://scripts/visual/city_creation_legendary_wonders.gd")
var demo
var epoch:Array=[]
var layers:Array[Node3D]=[]
var crowns:Array[Node3D]=[]
var elapsed:=0.
func setup(owner)->void:
	demo=owner;name="StreetWonders";demo.add_child(self);demo.set_meta("street_wonders",self)
func _process(delta:float)->void:
	elapsed+=delta
	for crown:Node3D in crowns:Legendary.animate(crown,elapsed)
	var city:RefCounted=demo.state
	var key:=[city.get_instance_id(),city.revision,city._wish_epoch,LegendaryPlan.progress_key(city)]
	if epoch==key or demo.life.last_revision!=city.revision:return
	epoch=key;rebuild(city)
func rebuild(city:RefCounted)->void:
	for layer:Node3D in layers:remove_child(layer);layer.queue_free()
	layers.clear()
	crowns.clear()
	var plan:=Plan.derive(city)
	for row:Dictionary in plan.piers:_pier(row)
	for row:Dictionary in plan.pockets:_pocket(row)
	for row:Dictionary in plan.fountains:_flowers(row,city)
	for row:Dictionary in plan.loops:preload("res://scripts/visual/city_creation_loop_garden.gd").build(self,row)
	var wonders:=LegendaryPlan.derive(city)
	for row:Dictionary in wonders.monuments:layers.append(Legendary.memorial(self,row))
	for row:Dictionary in wonders.crowns:
		var crown:=Legendary.build(self,row)
		if crown!=null:layers.append(crown);crowns.append(crown)
	set_meta("legendary_plan",wonders)
	set_meta("plan",plan)
func _root(label:String,row:Dictionary,at:Vector3,yaw:float=0.)->Node3D:
	var node:=Node3D.new();node.name=label;add_child(node);node.position=at;node.rotation.y=yaw;node.set_meta("plan",row);layers.append(node);return node
func _stone(color:String)->Material:return Wall.source(Color(color),null,"component",Wall.Kind.STONE)
func _contact(parent:Node3D,size:Vector2,offset:Vector3=Vector3.ZERO)->void:
	var mesh:=MeshInstance3D.new();var plane:=PlaneMesh.new();plane.size=size;mesh.mesh=plane
	var material:=ShaderMaterial.new();material.shader=Contact;mesh.material_override=material;mesh.position=offset+Vector3.UP*.008
	mesh.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF;parent.add_child(mesh);mesh.name="SoftContactShadow"
func _lamp(parent:Node3D,at:Vector3,stone:bool=false)->void:
	var r=demo.town;var base:Material=_stone("b9ac91") if stone else r._material(Color("785d42"))
	r._cylinder(parent,.055,.075,.36,at+Vector3.UP*.18,base,8)
	var warm:Material=r._material(Color("e9bd6e"));warm.emission_enabled=true;warm.emission=Color("c68f47");warm.emission_energy_multiplier=.22
	r._box(parent,Vector3(.11,.13,.11),at+Vector3.UP*.41,warm)
	r._box(parent,Vector3(.20,.045,.20),at+Vector3.UP*.50,base)
	parent.set_meta("water_lamp",at+Vector3.UP*.41)
func _pier(row:Dictionary)->void:
	var r=demo.town;var root:=_root("WatersidePier_"+str(row.house_id),row,Vector3(row.at.x,row.y,row.at.y),row.yaw)
	var length:=float(row.length);var wood:Material=r._material(Color("98724f"));wood.roughness=.94
	var pale:Material=r._material(Color("b18a60"));pale.roughness=.94
	_contact(root,Vector2(1.12,.8),Vector3(0,-.075,-length*.5))
	r._box(root,Vector3(.93,.10,.43),Vector3(0,-.04,-length*.5),_stone("b3aa8d"))
	for x:float in [-.31,.31]:r._box(root,Vector3(.08,.12,length+.12),Vector3(x,-.025,0),wood)
	var count:=ceili(length/.16)
	for i in range(count):
		var z:=-length*.5+(float(i)+.5)*length/count
		r._box(root,Vector3(.86,.075,length/count-.012),Vector3(0,.06,z),pale if i%3==0 else wood)
	for z:float in [-length*.27,length*.36]:
		for x:float in [-.37,.37]:r._cylinder(root,.045,.06,.64,Vector3(x,-.16,z),wood,8)
	_lamp(root,Vector3(.36,.10,length*.36))
	r._merge_meshes(root)
func _bloom(parent:Node3D,at:Vector3,index:int)->void:
	var r=demo.town;var leaf:Material=r._material(Color("648051"));var flower:Material=r._material(Color("e5a16f") if index%2==0 else Color("a3abd1"))
	for j in range(3):
		var offset:=Vector3(sin(j*2.4+index)*.08,0,cos(j*2.4+index)*.08)
		r._cylinder(parent,.012,.018,.16,at+offset+Vector3.UP*.08,leaf,5)
		for petal in range(4):
			r._box(parent,Vector3(.055,.022,.045),at+offset+Vector3(sin(petal*PI*.5)*.025,.17,cos(petal*PI*.5)*.025),flower)
func _pocket(row:Dictionary)->void:
	var r=demo.town;var root:=_root("CornerPocket_"+str(row.house_id),row,Vector3(row.at.x,row.y,row.at.y),row.yaw)
	var stone:=_stone("c9bc9b");var wood:Material=r._material(Color("94704d"))
	_contact(root,Vector2(1.48,1.48))
	r._cylinder(root,.55,.59,.055,Vector3.UP*.0275,stone,16)
	for i in range(11):
		var angle:=i*2.39996;var at:=Vector3(sin(angle)*.46,.06,cos(angle)*.46)
		r._cylinder(root,.045,.06,.035,at,_stone("aaa58d" if i%2 else "dfcfb2"),7)
	for x:float in [-.20,.20]:r._box(root,Vector3(.045,.19,.07),Vector3(x,.15,-.15),wood)
	for z:float in [-.23,-.12]:r._box(root,Vector3(.58,.055,.09),Vector3(0,.25,z),wood)
	r._box(root,Vector3(.58,.12,.04),Vector3(0,.38,-.28),wood)
	_lamp(root,Vector3(.32,.06,.17),true)
	for i in range(4):_bloom(root,Vector3(-.32+i*.10,.06,.25+sin(i*1.7)*.11),i)
	r._merge_meshes(root)
func _flowers(row:Dictionary,city:RefCounted)->void:
	var root:=_root("FountainFlowerbed_"+str(row.owner_id),row,Vector3(row.center.x,city.street_height(row.center),row.center.y))
	for i in range(8):
		var angle:=i*TAU/8.;var at:=Vector3(sin(angle)*1.02,.16,cos(angle)*1.02)
		demo.town._cylinder(root,.073,.085,.09,at,_stone("beac89"),8)
		_bloom(root,at+Vector3.UP*.04,i)
	demo.town._merge_meshes(root)
