extends RefCounted
const Base=preload("res://tools/fixtures/city_creation_space_contract_fixture.gd")
const ORIGIN=Base.ORIGIN

static func points(yaw:float=0.,subdivide:bool=false,reverse:bool=false)->Array[Vector2]:
	var result:Array[Vector2]=[]
	for i in range(21):
		var at:=Vector2(-2.+float(i)*.3,2.2+.05*sin(float(i)*.7))
		var world:=ORIGIN+at.rotated(-yaw)
		if subdivide and not result.is_empty():result.append((result[-1]+world)*.5)
		result.append(world)
	if reverse:result.reverse()
	return result

static func build(yaw:float=0.,subdivide:bool=false,road_kind:String="curve",water:bool=false)->Dictionary:
	var city:=Base.State.new();city.initialize_free();var ok:=true
	for row:Array in [[Vector2.ZERO,0.],[Vector2(2.25,4.4),PI]]:
		var cells:Array=[{"x":0,"z":0,"level":0,"kind":"room"},{"x":1,"z":0,"level":0,"kind":"room"}]
		var built:Dictionary=city.add_house_stroke(ORIGIN+Vector2(row[0]).rotated(-yaw),cells);ok=built.ok and ok
		if built.ok:ok=city.rotate_house(city.houses[-1].id,yaw+float(row[1])).ok and ok
	if water:ok=city.add_water([ORIGIN+Vector2(.9,2.2).rotated(-yaw)] as Array[Vector2],1.2,"pond").ok and ok
	var path:=points(yaw,subdivide,road_kind=="reverse")
	if road_kind=="split":
		var middle:=path.size()/2
		ok=city.add_road(path.slice(0,middle+1),"path","none").ok and ok
		ok=city.add_road(path.slice(middle),"path","none").ok and ok
	elif road_kind!="none":ok=city.add_road(path,"path","none").ok and ok
	return {"city":city,"ok":ok,"points":path}
