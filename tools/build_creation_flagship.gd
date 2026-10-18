extends SceneTree
## Authored composition through the same construction API as the player.
## Milestones come from the existing attended service/era fixture, never from
## raising unlock counters. The shipped result is ordinary editable State JSON.
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Earned=preload("res://tools/fixtures/city_creation_amphitheater_fixture.gd")
const OUT="res://验证记录/旗舰示范城_2026-10-18"
const TARGET="res://数据/四库共鸣交响大城样例.json"
var city: RefCounted
var rejected: Array=[]
var quarters: Dictionary={}
var landmarks: Dictionary={}
var streets: Array=[]
var failures: Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _require(result: Dictionary,label: String)->Dictionary:
	if not result.ok:failures.append(label+": "+str(result));push_error(failures[-1])
	return result
func _road(points: Array[Vector2],style: String="path")->bool:
	var result: Dictionary=city.add_road(points,style,"none")
	if result.ok:streets.append(result.road_id)
	else:rejected.append({"road":points,"style":style,"reason":result.message})
	return bool(result.ok)
func _cells(width: int,floors: int,terrace: bool=false)->Array:
	var result: Array=[]
	for level in range(floors):
		for x in range(width):result.append({"x":x,"z":0,"level":level,"kind":"terrace" if terrace and level==floors-1 and x==width-1 else "room"})
	return result
func _house(at: Vector2,era: String,index: int,width: int=1,floors: int=1)->String:
	var made: Dictionary=city.add_house_stroke(at,_cells(width,floors,width>1 and floors>1 and index%4==0))
	if not made.ok:rejected.append({"house":at,"era":era,"reason":made.message});return ""
	var id: String=made.house_id
	_require(city.set_house_era(id,era),"house era")
	var names: Dictionary={"pastoral":"苔阶旧巷","renaissance":"圣音长街","clockwork":"铜铃花房","modern_eco":"白鹭绿庭"}
	_require(city.set_house_name(id,str(names[era])+"%d号"%index),"house name")
	if era=="pastoral":_require(city.set_house_style(id,["classic","timber","stone"][index%3]),"wood and stone")
	quarters[era].append(id);return id
func _lane(z: float,era: String,west: bool,index: int)->void:
	var style: String={"pastoral":"path","renaissance":"promenade","clockwork":"promenade","modern_eco":"avenue"}[era]
	var line: Array[Vector2]=[]
	var xs: Array=[-35.,-31.,-27.,-23.,-19.,-15.,-11.] if west else [11.,15.,19.,23.,27.,31.,35.]
	for i in range(xs.size()):line.append(Vector2(xs[i],z+sin(i*.63+index*.8)*.3))
	var road_line: Array[Vector2]=line.duplicate()
	if era=="renaissance" and z>25. and z<33.:
		road_line=[Vector2(-35,24),Vector2(-25,24),Vector2(-25,z),line[3],line[4],line[5],line[6]]
	if era=="clockwork" and z>-23. and z<-17.:
		road_line=[line[0],line[1],line[2],Vector2(23,-20),Vector2(23,-15),Vector2(35,-15)]
	if era=="clockwork" and z>-12.:
		road_line=[Vector2(11,-12.8),Vector2(25,-12.8),line[4],line[5],line[6]]
	if not _road(road_line,style):return
	for i in range(6):
		var p: Vector2=line[i]+Vector2(0,-2.2)
		if not west and i==0:continue
		if era=="renaissance" and (p.distance_to(Vector2(-30,29))<6.4 or p.distance_to(Vector2(-20,20))<4.6 or p.distance_to(Vector2(-20,24))<5.2 or p.distance_to(Vector2(-28,15))<4.5):continue
		if era=="clockwork" and (p.distance_to(Vector2(28,-21))<6.8 or p.distance_to(Vector2(19,-10))<5.5):continue
		var serial:=index*6+i
		var floors:=1+posmod(serial+index,3)
		if era=="renaissance":floors=3 if serial%7==0 else 2
		if era=="modern_eco":floors=2+posmod(serial+index,2)
		_house(p,era,serial,2 if serial%3==0 else 1,floors)
	city._undo.clear();city._redo.clear()
func _signature(kind: String,preferred: Vector2)->void:
	for radius in range(9):
		for delta: Vector2 in [Vector2.ZERO,Vector2.LEFT,Vector2.RIGHT,Vector2.UP,Vector2.DOWN]:
			var at:=preferred+delta*radius*.5
			if not city.preview_signature(kind,at).ok:continue
			var placed:=_require(city.place_signature(kind,at),kind)
			landmarks[kind]={"id":placed.house_id,"at":at};return
	assert(false,"no valid landmark site: "+kind)
func _district(era: String,west: bool,north: bool,title: String,style: String)->String:
	var xs: Array=[-31.,-22.,-13.] if west else [15.,24.,33.]
	var a: float=-34. if north else 11.;var b: float=-9. if north else 35.
	var points: Array[Vector2]=[Vector2(xs[0],a),Vector2(xs[0],b),Vector2(xs[1],b),Vector2(xs[1],a),Vector2(xs[2],a),Vector2(xs[2],b)]
	var made:=_require(city.add_district(points,10.,style),title)
	_require(city.set_district_era(made.district_id,era),title+" era")
	_require(city.set_district_name(made.district_id,title),"district name");return made.district_id
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var cache:=OUT+"/实际里程碑种城.json"
	city=State.new()
	if FileAccess.file_exists(cache) and "--fresh-seed" not in OS.get_cmdline_user_args():
		_require(city.restore(JSON.parse_string(FileAccess.get_file_as_string(cache))),"earned seed")
	else:
		var seed: Dictionary=Earned.build(self);city=seed.city;seed.life.free()
		_require(city.set_journey_checkpoint({}),"clear finished seed journey")
		FileAccess.open(cache,FileAccess.WRITE).store_string(JSON.stringify(city.snapshot(),"",true,true))
	print("FLAGSHIP_EARNED ",city.life_progress," ",city.signature_unlocks)
	_require(city.set_journey_checkpoint({}),"fresh authored journeys")
	for era: String in city.Eras.IDS:quarters[era]=[]
	for house: Dictionary in city.houses.duplicate():
		if not house.has("signature") and int(str(house.id).substr(1)) not in [1,2,3,4,5,6,11,12,13]:_require(city.remove_house(house.id),"replace fixture outskirts")
	for road: Dictionary in city.roads.duplicate():
		if road.points==[[10.,12.],[36.,12.]]:_require(city.remove_road(road.id),"replace fixture wide street")
	for layer in range(2):_require(city.add_terrain_stroke([Vector2(-32,-29),Vector2(-23,-29)] as Array[Vector2],"plateau",6.,1.,2),"old-town high terrace")
	# Preserve the old inhabited centre; give the expanded city two river gates.
	# Keep the old service street and its two extension joints explicit.
	_road([Vector2(-11,-36),Vector2(-11,-9)] as Array[Vector2],"promenade")
	_road([Vector2(-11,-9),Vector2(-11,9)] as Array[Vector2],"promenade")
	_road([Vector2(-11,9),Vector2(-11,39.)] as Array[Vector2],"promenade")
	_road([Vector2(-36,-12.5),Vector2(-11,-12.5),Vector2(11,-12.5)] as Array[Vector2],"promenade")
	_road([Vector2(-11,9),Vector2(11,9),Vector2(35,9)] as Array[Vector2],"avenue")
	_road([Vector2(11,-34),Vector2(11,38.8)] as Array[Vector2],"avenue")
	_road([Vector2(10.4,3),Vector2(11,3)] as Array[Vector2])
	_road([Vector2(-31,1.55),Vector2(-11,1.55)] as Array[Vector2],"path")
	# Landmark gardens and station forecourts remain open space, before infill.
	for house: Dictionary in city.houses:
		if house.get("signature","")=="bell_keep":landmarks.bell_keep={"id":house.id,"at":Vector2(house.origin[0],house.origin[1])}
	_signature("music_academy",Vector2(-28,15))
	_signature("botanical_palace",Vector2(28,-21))
	_signature("clockwork_depot",Vector2(18,-10))
	_signature("floating_amphitheater",Vector2(7.5,24))
	_signature("watermill",Vector2(-3.,17))
	_road([Vector2(-29,18.95),Vector2(-11,18.95)] as Array[Vector2],"promenade")
	_road([Vector2(-11,20.6),Vector2(-1.2,20.6)] as Array[Vector2],"path")
	var stage: Vector2=landmarks.floating_amphitheater.at
	_road([stage+Vector2(0,-1.4),stage+Vector2(0,-2.2),Vector2(11,stage.y-2.2)] as Array[Vector2],"promenade")
	_road([Vector2(12,-33),Vector2(30,-33),Vector2(35,-28),Vector2(35,-10),Vector2(30,-6),Vector2(13,-6),Vector2(11,-10),Vector2(11,-27),Vector2(12,-33)] as Array[Vector2],"tram")
	for i in range(5):_lane(-33.+i*4.9,"pastoral",true,i)
	for i in range(5):_lane([12.3,19.3,24.,29.,34.][i],"renaissance",true,i)
	for i in range(5):_lane([-29.,-25.,-20.,-15.2,-10.6][i],"clockwork",false,i)
	for i in range(5):_lane(14.+i*5.1,"modern_eco",false,i)
	_road([Vector2(28,-24.2),Vector2(28,-25),Vector2(24,-25)] as Array[Vector2])
	_road([Vector2(-20,15),Vector2(-20,27.5)] as Array[Vector2],"promenade")
	_require(city.add_roundabout(Vector2(-20,24)),"academy fountain square")
	# Narrow quay houses look toward the rail loop, rather than another grid.
	for i in range(7):
		var at:=Vector2(8.,-32.+i*3.6)
		if not _house(at,"clockwork",70+i,1,2+i%2).is_empty():_road([at+Vector2(1.4,0),Vector2(13,at.y)] as Array[Vector2])
	for i in range(7):
		var at:=Vector2(38.,-30.+i*3.6)
		if not _house(at,"clockwork",80+i,1,1+i%3).is_empty():_road([Vector2(32.8 if at.y>-10 or at.y<-28 else 35.,at.y),at-Vector2(1.4,0)] as Array[Vector2])
	# A five-owner, genuinely enclosed court contributes the circular canon.
	var center:=Vector2(-30,29)
	for row: Array in [[Vector2(-2.7,-2.7),2,false],[Vector2(.9,-2.7),2,false],[Vector2(-2.7,2.7),4,false],[Vector2(-2.7,-.9),2,true],[Vector2(2.7,-.9),2,true]]:
		var cells: Array=[]
		for i in range(int(row[1])):cells.append({"x":0 if row[2] else i,"z":i if row[2] else 0,"level":0,"kind":"room"})
		var made: Dictionary=city.add_house_stroke(center+Vector2(row[0]),cells)
		if made.ok:quarters.renaissance.append(made.house_id);city.set_house_era(made.house_id,"renaissance")
		else:rejected.append({"court":row[0],"reason":made.message})
	_road([Vector2(-34,33.6),Vector2(-11,33.6)] as Array[Vector2],"promenade")
	_road([Vector2(-35,24),Vector2(-35,28.05),Vector2(-28.7,28.05)] as Array[Vector2])
	# Small additional lanes and paired modern towers give each district room
	# to grow, while preserving garden clearings around the signatures.
	for i in range(6):_house(Vector2(-35.+i*3.7,37.),"renaissance",90+i,1,2+i%2)
	_road([Vector2(-36,39.),Vector2(-11,39.)] as Array[Vector2],"promenade")
	for i in range(6):_house(Vector2(14.+i*3.6,36.8),"modern_eco",100+i,1,3)
	_road([Vector2(11,38.8),Vector2(35,38.8)] as Array[Vector2],"avenue")
	var districts: Array[String]=[]
	districts.append(_district("pastoral",true,true,"苔阶钟声 · 高地旧城","warm"))
	districts.append(_district("renaissance",true,false,"圣音书院 · 连拱花街","market"))
	districts.append(_district("clockwork",false,true,"铜铃环线 · 花房车站","weave"))
	districts.append(_district("modern_eco",false,false,"白鹭湾 · 水上交响","sylvan"))
	for pair: Array in [[0,1],[0,2],[1,3],[2,3]]:_require(city.link_districts(districts[pair[0]],districts[pair[1]]),"cross-river musical link")
	# Groves soften quarter edges and keep the central crossings in a garden.
	# The ordinary brush handles dry-bank/road/building clearances for every tree.
	for row: Array in [
		["cypress",[Vector2(-38,-33),Vector2(-38,-16)]],
		["olive",[Vector2(-30,-8),Vector2(-24,-7),Vector2(-19,-7)]],
		["olive",[Vector2(-28,-3),Vector2(-24,-1),Vector2(-20,2)]],
		["cypress",[Vector2(-38,14),Vector2(-38,33)]],
		["olive",[Vector2(-15.7,16),Vector2(-15.7,28)]],
		["shrub",[Vector2(-6,12),Vector2(-6,29)]],
		["olive",[Vector2(8,13),Vector2(8,18)]],
		["cypress",[Vector2(37,-3),Vector2(31,-3),Vector2(24,-3)]],
		["shrub",[Vector2(35,16),Vector2(36,27),Vector2(35,35)]]]:
		var points: Array[Vector2]=[];points.assign(row[1])
		var planted: Dictionary=city.add_vegetation_stroke(points,str(row[0]),1.0)
		if not planted.ok and planted.message=="这里没有可种植的空间":rejected.append({"grove":row,"reason":planted.message})
		else:_require(planted,"district garden brush")
	for era: String in quarters:
		var ids: Array=quarters[era]
		if ids.size()<5:continue
		for i in range(3):
			var role: String=["bakery","garden_cafe","clockmaker" if era=="clockwork" else "atelier" if era=="renaissance" else "workshop"][i]
			_require(city.set_house_role(ids[i],role),"daily district service")
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	print("FLAGSHIP_GEOMETRY ",city.houses.size()," connected=",life.connected_houses.size()," roads=",city.roads.size()," trams=",life.tram.cars.size())
	for i in range(600):life._process(.1)
	_require(city.set_journey_checkpoint(life.checkpoint()),"flagship resident checkpoint")
	city._undo.clear();city._redo.clear()
	var saved: Dictionary=city.snapshot();var check:=State.new();_require(check.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))),"flagship saved work")
	_require({"ok":city.houses.size()>=120 and life.connected_houses.size()==city.houses.size()},"120+ inhabited connected houses")
	var components: Dictionary={}
	for id: String in life.connected_houses:
		var key: String=life._network.component_of[life.connected_houses[id]]
		if not components.has(key):components[key]=[]
		var house: Dictionary=city.houses[city._house_index(id)]
		components[key].append({"id":id,"at":house.origin,"era":city.house_era(house)})
	FileAccess.open(OUT+"/network_debug.json",FileAccess.WRITE).store_string(JSON.stringify({"components":components,"roads":city.roads},"\t",true,true))
	_require({"ok":components.size()==1},"one continuous street network")
	if not failures.is_empty():print("FLAGSHIP_FAILED ",failures);life.free();quit(1);return
	FileAccess.open(TARGET,FileAccess.WRITE).store_string(JSON.stringify(saved,"\t",true,true)+"\n")
	var report: Dictionary={"houses":city.houses.size(),"connected":life.connected_houses.size(),"population":life.current_population,"plants":city.plants.size(),"era_counts":{},"signatures":landmarks,"quarters":quarters,"rejected":rejected,"tram":life.tram.report(),"courts":city.courtyard_plans().size(),"progress":city.life_progress,"disconnected":[]}
	for house: Dictionary in city.houses:
		if not life.connected_houses.has(house.id):report.disconnected.append({"id":house.id,"at":house.origin,"era":city.house_era(house),"signature":house.get("signature","")})
	for era: String in quarters:report.era_counts[era]=quarters[era].size()
	FileAccess.open(OUT+"/build.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true))
	print("FLAGSHIP_BUILD ",JSON.stringify({"houses":report.houses,"connected":report.connected,"era_counts":report.era_counts,"rejected":rejected,"signatures":landmarks,"trams":life.tram.cars.size()}))
	life.free();quit()
