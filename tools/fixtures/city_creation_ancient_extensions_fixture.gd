extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
static func build()->Dictionary:
	var city:=State.new();city.initialize_empty();var ids:Array[String]=[]
	for i in range(4):
		var type:="ionic_stoa" if i%2==0 else "roman_basilica"
		assert(Brush.select(city,"pastoral",type))
		var result:Dictionary=city.add_house(Vector2(-33. if i%2==0 else -21.,-26. if i<2 else -10.));assert(result.ok,str(result));ids.append(result.house_id)
		var width:=3 if i%2==0 else 2;var depth:=1 if i%2==0 else 3;var floors:=1 if i<2 else 2
		for level in range(floors):
			for z in range(depth):
				for x in range(width):
					if Vector3i(x,z,level)==Vector3i.ZERO:continue
					var added:Dictionary=city.add_cell(result.house_id,x,z,level);assert(added.ok,str(added))
		assert(city.set_house_colors(result.house_id,Color("d9cba9"),Color("ad6046")).ok)
	return {"city":city,"ids":ids}
