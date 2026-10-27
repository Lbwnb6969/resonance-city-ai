extends RefCounted
const Form=preload("res://scripts/world/city_creation_organic_form.gd")
const Balcony=preload("res://scripts/world/city_creation_balcony_plan.gd")
static func prepare(city:RefCounted)->Dictionary:
	var report:={"rounded":[],"balconies":[]}
	for index in range(0,city.houses.size(),15):
		var house:Dictionary=city.houses[index];var id:=str(house.id)
		if not Form.supported(city,house):continue
		if Form.set_corner(city,id,2).ok:report.rounded.append(id)
		if Balcony.set_mode(city,id,3).ok:report.balconies.append(id)
	city.add_road([Vector2(-34,36),Vector2(-30,35),Vector2(-26,32),Vector2(-22,31)] as Array[Vector2])
	return report
