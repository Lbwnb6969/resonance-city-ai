extends RefCounted
const Geometry=preload("res://scripts/world/city_creation_road_trim_geometry.gd")
const Height=preload("res://scripts/world/city_creation_entry_height.gd")
const Landing=preload("res://scripts/world/city_creation_water_crossing_access.gd")
static func assess(original:RefCounted,candidate:RefCounted,source:Dictionary,low:float,high:float,kept_ids:Array)->Dictionary:
	var measured:Array=[];candidate.prepare_ground_height();original.prepare_ground_height()
	for house:Dictionary in original.houses:
		for entry:Dictionary in original.house_entrances(house.id):
			if entry.get("passage",false) or (entry.active and entry.road_id!=source.id):continue
			var old:=Geometry.project(source,entry.at)
			if old.distance>=.82 or (old.arc>low-.002 and old.arc<high+.002) or Height.Frame.normal(entry).dot(old.at-Vector2(entry.wall_at))<=0.:continue
			var before:=Height.assess(original,house,entry,old.at,source)
			if not before.ok or before.get("scope","")=="unchanged":continue
			var options:Array=candidate.house_entrances(house.id).filter(func(e):return e.cell_id==entry.cell_id and e.side==entry.side)
			var preserved:=false
			for road:Dictionary in candidate.roads:
				if road.id not in kept_ids:continue
				var nearest:=Geometry.project(road,old.at)
				if nearest.distance>.002:continue
				for next:Dictionary in options:
					var proof:=Height.assess(candidate,house,next,Geometry.project(road,next.at).at,road)
					if proof.ok:preserved=true;measured.append({"house_id":house.id,"cell_id":entry.cell_id,"road_id":road.id,"access":proof})
			if not preserved:return {"ok":false,"message":"剩余道路无法保持未裁入口的门前通路"}
	var joins:Dictionary={}
	var landings:Dictionary=preload("res://scripts/world/city_creation_road_landings.gd").prepare(candidate)
	for id:String in landings:
		for row:Dictionary in landings[id]:
			var key:Vector2=row.at.snapped(Vector2.ONE*.00001);var y:=Landing.road_height(candidate._road_heights.profiles[id],row.at)
			for peer:Dictionary in joins.get(key,[]):
				if (id in kept_ids or peer.id in kept_ids) and absf(y-peer.y)>Height.Roads.STEP_HEIGHT+.002:return {"ok":false,"message":"剩余道路的实际路口高度无法接续"}
			if not joins.has(key):joins[key]=[]
			joins[key].append({"id":id,"y":y})
	return {"ok":true,"entries":measured,"junctions":joins.size()}
