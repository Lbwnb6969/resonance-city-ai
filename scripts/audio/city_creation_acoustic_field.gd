extends RefCounted
## Pure grouping weights; simulation and the shared 24-second transport stay
## independent of the listener. Off-screen ordinary sources have exact zero.
var focus:=Vector2(-3,0)
var zoom:=25.0
var visible_test: Callable
var point_visible_test: Callable
var zones: Dictionary={}
var focus_ids: Array[String]=[]
var linked_ids: Array[String]=[]
var radius:=18.75
var radius_bonus:=0.0
var mode:="district"
var revision:=0

func set_view(at: Vector2,view_zoom: float,in_view: Callable=Callable(),point_in_view: Callable=Callable())->void:
	focus=at;zoom=view_zoom;visible_test=in_view;point_visible_test=point_in_view
	radius=clampf(.75*zoom,12.0,28.0)+radius_bonus
	mode="detail" if zoom<=18 else ("district" if zoom<=32 else "city")

func evaluate(houses: Dictionary,pairs: Array,event_ids: Array=[])->void:
	radius=clampf(.75*zoom,12.0,28.0)+radius_bonus
	zones.clear();focus_ids.clear();linked_ids.clear()
	for id: String in houses:
		var house: Dictionary=houses[id]
		var distance:=focus.distance_to(house.position)/radius
		var inside: bool=distance<1.0 and (not visible_test.is_valid() or bool(visible_test.call(id)))
		var weight:=1.0-smoothstep(.25,1.0,distance) if inside else 0.0
		zones[id]={"zone":"focus" if weight>0 else "silent","weight":weight,"distance":distance,
			"detail":1.0-smoothstep(16.0,28.0,zoom),"ensemble":smoothstep(16.0,32.0,zoom)}
		if weight>0: focus_ids.append(id)
	focus_ids.sort_custom(func(a: String,b: String)->bool:
		var wa: float=zones[a].weight;var wb: float=zones[b].weight
		return a<b if is_equal_approx(wa,wb) else wa>wb)
	# Link only one hop from a focused district; a chain across the whole city
	# cannot gradually promote every off-screen district into the audible pool.
	var focused_districts: Dictionary={}
	for id: String in focus_ids:
		var district:=str(houses[id].get("district_id",""))
		if not district.is_empty(): focused_districts[district]=true
	var partners: Dictionary={}
	for pair: Dictionary in pairs:
		if focused_districts.has(str(pair.from_district)): partners[str(pair.to_district)]=true
		if focused_districts.has(str(pair.to_district)): partners[str(pair.from_district)]=true
	for id: String in houses:
		if zones[id].zone=="focus": continue
		if partners.has(str(houses[id].get("district_id",""))):
			zones[id].zone="linked";zones[id].weight=.50;linked_ids.append(id)
		elif event_ids.has(id):
			zones[id].zone="event";zones[id].weight=.25
	linked_ids.sort();revision+=1

func weight(id: String)->float:
	return float(zones.get(id,{}).get("weight",0.0))

func focus_weight(id: String)->float:
	return weight(id) if str(zones.get(id,{}).get("zone",""))=="focus" else 0.0

func point_weight(at: Vector2)->float:
	if point_visible_test.is_valid() and not point_visible_test.call(at): return 0.0
	return 1.0-smoothstep(.25,1.0,focus.distance_to(at)/radius)

func report()->Dictionary:
	return {"focus":focus,"zoom":zoom,"radius":radius,"mode":mode,"zones":zones.duplicate(true),"focus_ids":focus_ids.duplicate(),"linked_ids":linked_ids.duplicate(),"revision":revision}
