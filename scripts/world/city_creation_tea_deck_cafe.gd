extends RefCounted
const Deck=preload("res://scripts/world/city_creation_tea_deck_plan.gd")
static func layout(api,city,house:Dictionary,occupied:Array,context:Dictionary)->Dictionary:
	var deck:=Deck.find(city,str(house.id))
	if deck.is_empty():return {}
	var seats:Array[Vector2]=[Deck.at(deck,Vector2(-.53,.85)),Deck.at(deck,Vector2(.53,.85))]
	var center:=Deck.at(deck,Vector2(0,.85))
	if not Deck.supported(deck,center,.29) or not seats.all(func(p):return Deck.supported(deck,p,.26)):return {}
	var entry:Vector2=deck.landing;var active:=false
	for door:Dictionary in city.house_entrances(str(house.id)):
		if door.get("passage",false) or not door.active:continue
		entry=door.at;active=true;break
	var plan:={"tea_deck":str(house.id),"deck":deck,"center":center,"seats":seats,"entrance":entry,"yaw":atan2(deck.normal.x,deck.normal.y),"cell_id":deck.cell_id,"side":deck.side,"base_y":float(deck.top)-.08,"table_radius":.24,"chair_radius":.21,"route_points":[]}
	for p:Vector2 in [Vector2(deck.wing*1.25,-.65),Vector2(deck.wing*1.25,.35),Vector2(-.58,.20),Vector2(.58,.20),Vector2(-.58,1.12),Vector2(.58,1.12)]:plan.route_points.append(Deck.at(deck,p))
	for other:Dictionary in occupied:
		var tables:Array=[other.center];tables.append_array(other.seats)
		if tables.any(func(p):return center.distance_to(p)<.7 or seats.any(func(s):return s.distance_to(p)<.55)):return {}
	for seat:Vector2 in seats:
		if api._route(city,house,plan,entry,seat,occupied,context).is_empty():return {}
	plan["entry_active"]=active;return plan
