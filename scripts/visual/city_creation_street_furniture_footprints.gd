extends RefCounted
## Ground solids follow the exact published promenade model, never its canopy.
const Promenade=preload("res://scripts/visual/city_creation_promenade.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
static func rectangle(at:Vector2,half:Vector2,yaw:float=0.)->Variant:
	return Rect2(at-half,half*2.) if is_zero_approx(yaw) else {"center":at,"angle":yaw,"half":half}
static func for_record(record:Dictionary)->Array:
	var at:Vector2=record.at;var yaw:=float(record.yaw)
	match str(record.kind):
		"tree":return [rectangle(at,Vector2.ONE*.525),rectangle(at+Vector2(.78,0).rotated(-yaw),Vector2(.21,.45),yaw)]
		"bench":return [rectangle(at,Vector2(.28,.55),yaw)]
		"flower":return [rectangle(at,Vector2(.24,.35),yaw)]
		"lamp":return [rectangle(at,Vector2.ONE*.13)]
	return []
static func plans(city:RefCounted)->Array:
	var key:=[city.get_instance_id(),city.revision,city._wish_epoch]
	var cached:Dictionary=city.get_meta("street_furniture_footprints",{})
	if cached.get("key",[])==key:return cached.rows
	var rows:Array=[];var planner:=Promenade.new()
	for road:Dictionary in city.roads:
		for record:Dictionary in planner.prepare({"state":city},road):rows.append_array(for_record(record))
	city.set_meta("street_furniture_footprints",{"key":key,"rows":rows});return rows
