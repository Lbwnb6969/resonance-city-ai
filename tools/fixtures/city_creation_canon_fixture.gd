extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
const COURT:=Vector2(-25,-21)
const ROUND:=Vector2(-24,18)

static func _row(count: int,vertical: bool=false)->Array:
	var cells: Array=[]
	for i in range(count):cells.append({"x":0 if vertical else i,"z":i if vertical else 0,"level":0,"kind":"room"})
	return cells

static func build()->Dictionary:
	var city:=State.new();city.initialize()
	var court: Array[String]=[]
	for row: Array in [[Vector2(-2.7,-2.7),_row(2)],[Vector2(.9,-2.7),_row(2)],[Vector2(-2.7,2.7),_row(4)],[Vector2(-2.7,-.9),_row(2,true)],[Vector2(2.7,-.9),_row(2,true)]]:
		var built: Dictionary=city.add_house_stroke(COURT+Vector2(row[0]),row[1]);assert(built.ok,str(built));court.append(str(built.house_id))
	var horizontal: Array[Vector2]=[ROUND+Vector2(-8,0),ROUND+Vector2(8,0)]
	var vertical: Array[Vector2]=[ROUND+Vector2(0,-8),ROUND+Vector2(0,8)]
	assert(city.add_road(horizontal,"promenade").ok)
	assert(city.add_road(vertical,"promenade").ok)
	assert(city.add_roundabout(ROUND).ok)
	var round_houses: Array[String]=[]
	for angle: float in [.50,1.10,2.40,3.65,5.55]:
		var built: Dictionary=city.add_house(ROUND+Vector2(sin(angle),-cos(angle))*5.)
		assert(built.ok,str(built));round_houses.append(str(built.house_id))
	return {"city":city,"court_ids":court,"round_ids":round_houses}
