extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
const Vignettes=preload("res://scripts/world/city_creation_vignettes.gd")
const Receipts=preload("res://scripts/world/city_creation_harmony_receipts.gd")
static func start(kind:String)->RefCounted:
	var city:=State.new();city.initialize_empty()
	if kind==Vignettes.IDS[1]:
		assert(city.add_terrain_stroke([Vector2(-28,-8),Vector2(-12,-8),Vector2(-12,8),Vector2(-28,8)] as Array[Vector2],"plateau",6.,1.,2).ok)
	elif kind==Vignettes.IDS[3]:city=preload("res://tools/fixtures/city_creation_juice_fixture.gd").wishes()
	Receipts.initialize(city);assert(Vignettes.offer(city,kind));return city
static func construct(city:RefCounted)->Array[Dictionary]:
	var quest:Dictionary=city.harmony_journey.active_vignette;var at:=Vector2(quest.anchor[0],quest.anchor[1]);var results:Array[Dictionary]=[]
	match str(quest.id):
		Vignettes.IDS[0],Vignettes.IDS[1]:
			var offsets:Array=[Vector2(0,-5.4),Vector2(0,-1.8),Vector2(0,1.8),Vector2(0,5.4)] if quest.id==Vignettes.IDS[0] else [Vector2.ZERO,Vector2(3.6,0),Vector2(0,3.6)]
			var doors:Array[Vector2]=[]
			for offset:Vector2 in offsets:
				var house:Dictionary=city.add_house(at+offset);results.append(house)
				if house.ok:doors.append(at+offset+Vector2(0,1.55))
			var x:float=at.x-5.;var low:float=at.y-7.;var high:float=at.y+8.
			results.append(city.add_road([Vector2(x,low),Vector2(x,high)] as Array[Vector2]))
			for door:Vector2 in doors:results.append(city.add_road([Vector2(x,door.y),door] as Array[Vector2]))
		Vignettes.IDS[2]:
			var house:Dictionary=city.add_house(at-Vector2(3.6,3.6));results.append(house)
			if not house.ok:return results
			var cells:Array[Vector2i]=[]
			for z in range(1,5):cells.append(Vector2i(0,z))
			for x in range(1,5):cells.append(Vector2i(x,4))
			for z in range(3,-1,-1):cells.append(Vector2i(4,z))
			for x in range(3,0,-1):cells.append(Vector2i(x,0))
			for cell:Vector2i in cells:results.append(city.add_cell(str(house.house_id),cell.x,cell.y,0))
		Vignettes.IDS[3]:
			var planted:=0
			for radius:float in [3.,5.,6.]:
				for i in range(16):
					var result:Dictionary=city.place_plant(at+Vector2.from_angle(TAU*i/16.)*radius,"olive")
					if result.ok:results.append(result);planted+=1
					if planted==4:return results
	return results
