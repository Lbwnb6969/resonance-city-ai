extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
const Choice=preload("res://scripts/world/city_creation_architecture_choice.gd")
static func build()->Dictionary:
	var city:RefCounted=preload("res://tests/test_city_creation_clockwork.gd").fixture()
	for home:Dictionary in city.houses.duplicate(true):assert(city.remove_house(str(home.id)).ok)
	city.roads.clear();city.plants.clear();city.districts.clear();city.revision+=1
	var groups:Dictionary={}
	for index in range(4):
		var kind:String=Choice.CLOCKWORK[index];var z:float=-25.+float(index)*8.;var ids:Array=[]
		for x:float in [-28.,-20.,-10.,-8.2]:
			var result:Dictionary=city.add_house(Vector2(x,z));assert(result.ok,str(result));var id:=str(result.house_id);ids.append(id)
			assert(city.set_house_era(id,"clockwork").ok)
			if x==-20.:
				for row:Array in [[1,0,0],[0,0,1],[1,0,1]]:assert(city.add_cell(id,row[0],row[1],row[2]).ok)
			assert(city.set_house_architecture(id,kind).ok)
		assert(city.add_road([Vector2(-30,z+1.7),Vector2(-6,z+1.7)] as Array[Vector2]).ok)
		groups[kind]=ids
	return {"city":city,"groups":groups}
