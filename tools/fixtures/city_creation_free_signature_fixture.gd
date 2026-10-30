extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
static func fresh()->RefCounted:
	var city:=State.new();city.initialize_free();return city
static func site(city:RefCounted,kind:String,moving:String="")->Vector2:
	for z:float in [-28.,-18.,-8.,8.,18.,28.]:
		if kind in ["watermill","floating_amphitheater"]:
			for step in range(-28,29):
				var at:=Vector2(city.river_x(z)+step*.25,z).snapped(Vector2.ONE*.1)
				if not moving.is_empty() and at.distance_to(Vector2(city.houses[city._house_index(moving)].origin[0],city.houses[city._house_index(moving)].origin[1]))<4.:continue
				if city.preview_signature(kind,at,moving).ok:return at
		else:
			for x:float in [-30.,-20.,20.,30.]:
				var at:=Vector2(x,z)
				if not moving.is_empty() and at.distance_to(Vector2(city.houses[city._house_index(moving)].origin[0],city.houses[city._house_index(moving)].origin[1]))<4.:continue
				if city.preview_signature(kind,at,moving).ok:return at
	return Vector2.INF
