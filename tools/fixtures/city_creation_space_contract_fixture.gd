extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
const ORIGIN=Vector2(-28,-20)

static func courtyard(shape:String="ring",road:String="portal",yaw:float=0.)->Dictionary:
	var city:=State.new();city.initialize_free();var cells:Array=[]
	for x in range(5):
		for z in range(5):
			if shape=="filled" or x==0 or z==0 or x==4 or (z==4 and shape!="U"):
				cells.append({"x":x,"z":z,"level":0,"kind":"room"})
	var built:Dictionary=city.add_house_stroke(ORIGIN,cells)
	var results:Array=[built.ok]
	if yaw!=0.:results.append(city.rotate_house("h1",yaw).ok)
	if road!="none":
		var a:Vector2=Vector2(-2.,3.6) if road=="portal" else Vector2(-2.,8.8)
		var b:Vector2=Vector2(10.,3.6) if road=="portal" else Vector2(10.,8.8)
		results.append(city.add_road([ORIGIN+a.rotated(-yaw),ORIGIN+b.rotated(-yaw)] as Array[Vector2],"path","none").ok)
	return {"city":city,"ok":not results.has(false)}

## Geometry fixtures shared by the following three contract batches; expectations
## remain data here, never reported as implemented district qualification.
static func other_kinds()->Array:
	var result:Array=[]
	for row:Array in [["waterfront","renaissance","venetian_loggia"],["artisan","clockwork","sawtooth_atrium"],["civic","pastoral","ionic_stoa"]]:
		var city:=State.new();city.initialize_free();var ok:bool=Brush.select(city,row[1],row[2])
		ok=city.add_house(ORIGIN).ok and ok
		ok=city.add_road([ORIGIN+Vector2(-3,1.9),ORIGIN+Vector2(3,1.9)] as Array[Vector2],"path","none").ok and ok
		if row[0]=="waterfront":ok=city.add_water([ORIGIN+Vector2(0,-5)] as Array[Vector2],2.,"pond").ok and ok
		result.append({"kind":row[0],"city":city,"ok":ok,"contract":"pending"})
	return result
