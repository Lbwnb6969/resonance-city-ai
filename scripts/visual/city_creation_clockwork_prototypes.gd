extends RefCounted
## Four explicit recipes replace the mansard; old automatic works keep their roof.
const Parts=preload("res://scripts/visual/city_creation_clockwork_parts.gd")
const Pick=preload("res://scripts/visual/city_creation_roof_pick.gd")
const Choice=preload("res://scripts/world/city_creation_architecture_choice.gd")
static func prepare(city,house:Dictionary,tops:Array)->Array:
	var result:Array=[];var kind:=str(house.architecture);var own:Array=[]
	for row:Dictionary in tops:
		if row.house==str(house.id):own.append(row)
	own.sort_custom(func(a,b):return str(a.cell.id)<str(b.cell.id) if is_equal_approx(a.base,b.base) else float(a.base)>float(b.base))
	for row:Dictionary in own:
		var sides:Array=[]
		for side:Vector2 in [Vector2.RIGHT,Vector2.LEFT,Vector2.UP,Vector2.DOWN]:
			var joined:=false
			for other:Dictionary in tops:
				if not is_equal_approx(float(other.base),float(row.base)) or Vector2(other.center).distance_to(Vector2(row.center)+side*1.8)>.002:continue
				var neighbour:Dictionary=city.houses[city._house_index(str(other.house))]
				if neighbour.get("architecture","")==kind:joined=true;break
			if not joined:sides.append(side)
		result.append({"prototype":kind,"cell":row.cell,"center":row.center,"base":row.base,"feature":row==own[0],"sides":sides,"metadata":{"cell_id":str(row.cell.id),"prototype":kind,"bounds":Rect2(Vector2(row.center)-Vector2.ONE*.9,Vector2.ONE*1.8),"base":row.base}})
	return result
static func install(r,root:Node3D,house:Dictionary,data:Dictionary)->void:
	var node:=Node3D.new();root.add_child(node);node.name="ClockworkPrototype_"+str(data.cell.id)
	node.position=Vector3(data.center.x,data.base,data.center.y);node.set_meta("clockwork_prototype",data.prototype)
	var stone:Material=Parts.material(r,Color("d9c6a3"),Parts.Wall.Kind.STONE)
	var copper:Material=Parts.material(r,Color("a88c58"),Parts.Wall.Kind.SLATE)
	var iron:Material=Parts.material(r,Color("40524f"),Parts.Wall.Kind.SLATE)
	var slate:Material=Parts.material(r,Color("43585b"),Parts.Wall.Kind.SLATE)
	r._box(node,Vector3(1.8,.10,1.8),Vector3(0,.025,0),stone)
	match str(data.prototype):
		"sawtooth_atrium":_saw(r,node,data,slate,copper,iron)
		"clock_turret":_clock(r,node,bool(data.feature),slate,copper,stone,iron)
		"iron_conservatory":_vault(r,node,data,copper,iron)
		"guild_arcade":_guild(r,node,house,data,slate,stone,copper)
	var body:=StaticBody3D.new();node.add_child(body)
	body.set_meta("house_id",str(house.id));body.set_meta("cell_id",str(data.cell.id));body.set_meta("cell",data.cell.duplicate(true))
	Pick.from_children(body,node,"ClockworkPrototypePick")
	var metadata:Array=root.get_meta("clockwork_prototypes",[]);metadata.append(data.metadata);root.set_meta("clockwork_prototypes",metadata)
	root.set_meta("prototype_caption",Choice.label(str(data.prototype)))
static func _saw(r,node:Node3D,data:Dictionary,slate:Material,copper:Material,iron:Material)->void:
	var glass:Material=r.conservatory.ensure_roof_material()
	for tooth in range(3):
		var z:float=-.9+float(tooth)*.6;var end:float=z+.6
		Parts.quad(r,node,Vector3(-.9,.11,z),Vector3(-.9,.77,end),Vector3(.9,.77,end),Vector3(.9,.11,z),slate,"SawtoothSlope")
		Parts.quad(r,node,Vector3(-.86,.13,end),Vector3(.86,.13,end),Vector3(.86,.73,end),Vector3(-.86,.73,end),glass,"SawtoothGlazing")
		for x:float in [-.88,0.,.88]:Parts.beam(r,node,Vector3(x,.12,z),Vector3(x,.78,end),.035,copper)
		Parts.beam(r,node,Vector3(-.9,.78,end),Vector3(.9,.78,end),.045,iron)
		for side:float in [-1.,1.]:
			if Vector2(side,0) in data.sides:Parts.face(r,node,[Vector3(side*.9,.11,z),Vector3(side*.9,.11,end),Vector3(side*.9,.77,end)],slate,"SawtoothEndCheek")
static func _clock(r,node:Node3D,feature:bool,slate:Material,copper:Material,stone:Material,iron:Material)->void:
	for side:float in [-1.,1.]:
		Parts.quad(r,node,Vector3(side*.9,.10,-.9),Vector3(side*.9,.10,.9),Vector3(0,.52,.9),Vector3(0,.52,-.9),slate,"CopperHipShoulder")
	for z:float in [-.9,.9]:Parts.face(r,node,[Vector3(-.9,.1,z),Vector3(.9,.1,z),Vector3(0,.52,z)],stone,"ClockShoulderEnd")
	if not feature:return
	r._cylinder(node,.59,.59,1.14,Vector3(0,.63,0),stone,8).name="OctagonalClockDrum"
	r._cylinder(node,.66,.66,.10,Vector3(0,1.22,0),copper,8)
	r._cylinder(node,.65,.06,.53,Vector3(0,1.52,0),copper,8).name="CopperClockSpire"
	r._cylinder(node,.035,.035,.20,Vector3(0,1.86,0),iron,8)
	for angle:float in [0.,PI*.5,PI,PI*1.5]:Parts.dial(r,node,angle,stone,iron,copper)
static func _vault(r,node:Node3D,data:Dictionary,copper:Material,iron:Material)->void:
	var glass:Material=r.conservatory.ensure_roof_material(true)
	for i in range(14):
		var a:float=PI*float(i)/14.;var b:float=PI*float(i+1)/14.
		var p:=Vector2(cos(a)*.86,.22+sin(a)*.82);var q:=Vector2(cos(b)*.86,.22+sin(b)*.82)
		Parts.quad(r,node,Vector3(p.x,p.y,-.9),Vector3(p.x,p.y,.9),Vector3(q.x,q.y,.9),Vector3(q.x,q.y,-.9),glass,"BarrelGlazing")
	for z:float in [-.88,0.,.88]:Parts.arch(r,node,z,.22,.88,.84,iron)
	for x:float in [-.88,.88]:
		Parts.beam(r,node,Vector3(x,.10,-.9),Vector3(x,.10,.9),.075,copper)
		Parts.beam(r,node,Vector3(x,.10,-.9),Vector3(x,.24,-.9),.065,iron)
	for z:float in [-.9,.9]:
		if Vector2(0,signf(z)) in data.sides:
			for i in range(14):
				var a:float=PI*float(i)/14.;var b:float=PI*float(i+1)/14.
				Parts.face(r,node,[Vector3(0,.22,z),Vector3(cos(a)*.86,.22+sin(a)*.82,z),Vector3(cos(b)*.86,.22+sin(b)*.82,z)],glass,"ConservatoryEndGlass")
	for x:float in [-.60,.60]:
		for z:float in [-.55,.55]:
			r._cylinder(node,.11,.15,.20,Vector3(x,.18,z),copper,8)
			Parts.Wall.apply(r._crown(node,Vector3(x,.39,z),Vector3(.18,.28,.18),Color("6b8855")),Parts.Wall.Kind.PLASTER)
static func _guild(r,node:Node3D,house:Dictionary,data:Dictionary,slate:Material,stone:Material,copper:Material)->void:
	Parts.quad(r,node,Vector3(-.9,.12,-.9),Vector3(-.9,.12,.9),Vector3(0,.68,.9),Vector3(0,.68,-.9),slate,"GuildGableLeft")
	Parts.quad(r,node,Vector3(0,.68,-.9),Vector3(0,.68,.9),Vector3(.9,.12,.9),Vector3(.9,.12,-.9),slate,"GuildGableRight")
	for side:Vector2 in data.sides:
		if absf(side.y)<.5:continue
		Parts.face(r,node,[Vector3(-.9,.10,side.y*.9),Vector3(.9,.10,side.y*.9),Vector3(0,.68,side.y*.9)],stone,"GuildStonePediment")
		Parts.beam(r,node,Vector3(-.92,.12,side.y*.92),Vector3(.92,.12,side.y*.92),.10,copper)
	if not data.feature:return
	var brick:Material=Parts.material(r,Color("a8664e"),Parts.Wall.Kind.TERRACOTTA)
	for cell:Dictionary in house.cells:
		if int(cell.level)!=0 or cell.kind!="room":continue
		for side:Vector2 in [Vector2.RIGHT,Vector2.LEFT,Vector2.UP,Vector2.DOWN]:
			if not r.building_context.neighbor(house,cell,Vector2i(side),0,true).is_empty():continue
			var porch:=Node3D.new();node.add_child(porch);porch.name="GroundBrickArcade"
			var at:=Vector2(house.origin[0]+cell.x*1.8,house.origin[1]+cell.z*1.8)
			porch.position=Vector3(at.x-data.center.x,float(house.get("base_y",0.))-float(data.base),at.y-data.center.y);porch.rotation.y=atan2(side.x,side.y)
			Parts.arch(r,porch,1.04,1.05,.76,.44,brick,.115)
			for x:float in [-.77,.77]:
				r._box(porch,Vector3(.16,1.03,.28),Vector3(x,.54,1.04),brick)
				r._box(porch,Vector3(.22,.10,.34),Vector3(x,1.04,1.04),stone)
			r._box(porch,Vector3(1.8,.12,.35),Vector3(0,1.55,1.02),stone)
