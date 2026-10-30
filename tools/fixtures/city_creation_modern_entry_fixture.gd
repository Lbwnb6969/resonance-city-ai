extends RefCounted
const Slope=preload("res://tools/fixtures/city_creation_slope_entry_fixture.gd")
static func build(kind:String="mismatch",yaw:float=0.,architecture:String="chalet")->Dictionary:
	var f:=Slope.build(kind,yaw)
	for house:Dictionary in f.city.houses:
		f.ok=f.city.set_house_era(house.id,"modern_eco").ok and f.ok
		f.ok=f.city.set_house_architecture(house.id,architecture).ok and f.ok
	return f
