extends RefCounted
## Used only by detached, read-only worker snapshots. Live State still derives
## frontages on demand, including edits made by existing external APIs.
static func prepare(city:RefCounted)->void:
	var rows:Dictionary={}
	for house:Dictionary in city.houses:
		var id:=str(house.id)
		rows[id]=city.house_entrances(id)
	city.set_meta("prepared_frontages",rows)

static func read(city:RefCounted,id:String)->Array[Dictionary]:
	var rows:Array[Dictionary]=[]
	rows.assign(city.get_meta("prepared_frontages").get(id,[]).duplicate(true))
	return rows
