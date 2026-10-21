extends RefCounted
## Natural street clusters. Derived identity and clockwise order never rewrite authored districts.
const REACH:=5.8
static func derive(houses:Array,streets:Dictionary={})->Dictionary:
	var rows:Dictionary={};var bins:Dictionary={}
	for house:Dictionary in houses:
		var id:=str(house.id);var at:=Vector2(house.origin[0],house.origin[1])
		rows[id]=at
		var key:=Vector2i(floori(at.x/REACH),floori(at.y/REACH))
		if not bins.has(key):bins[key]=[]
		bins[key].append(id)
	var street_houses:Dictionary={}
	for id:String in streets:
		for road:String in streets[id]:
			if not street_houses.has(road):street_houses[road]=[]
			street_houses[road].append(id)
	var seen:Dictionary={};var result:Dictionary={};var ids:Array=rows.keys();ids.sort()
	for first:String in ids:
		if seen.has(first):continue
		var pending:Array[String]=[first];var members:Array[String]=[];seen[first]=true
		while not pending.is_empty():
			var id:String=pending.pop_back();members.append(id)
			for road:String in streets.get(id,[]):
				for other:String in street_houses[road]:
					if not seen.has(other):seen[other]=true;pending.append(other)
			var at:Vector2=rows[id];var key:=Vector2i(floori(at.x/REACH),floori(at.y/REACH))
			for z:int in range(-1,2):
				for x:int in range(-1,2):
					for other:String in bins.get(key+Vector2i(x,z),[]):
						if not seen.has(other) and at.distance_squared_to(rows[other])<=REACH*REACH:
							seen[other]=true;pending.append(other)
		members.sort()
		var center:=Vector2.ZERO
		for id:String in members:center+=rows[id]
		center/=float(members.size())
		var ordered:Array=members.duplicate()
		ordered.sort_custom(func(a:String,b:String)->bool:
			var pa:Vector2=rows[a]-center;var pb:Vector2=rows[b]-center
			var aa:=fposmod(atan2(pa.x,-pa.y),TAU);var ab:=fposmod(atan2(pb.x,-pb.y),TAU)
			if aa>TAU-.00001:aa=0.
			if ab>TAU-.00001:ab=0.
			return a<b if is_equal_approx(aa,ab) else aa<ab)
		for id:String in members:result[id]={"id":"choir/"+members[0],"size":members.size(),"members":members,"ordered_members":ordered,"center":center}
	return result

static func street_members(houses:Array,roads:Array,prepared:Dictionary={})->Dictionary:
	var frontage=preload("res://scripts/world/city_creation_frontage.gd")
	var result:Dictionary={}
	for house:Dictionary in houses:
		var ids:Array[String]=[]
		for door:Dictionary in prepared.get(str(house.id),frontage.entrances(house,roads,houses) if prepared.is_empty() else []):
			var id:=str(door.get("road_id",""))
			if door.get("active",false) and not id.is_empty() and not id in ids:ids.append(id)
			# A street running alongside a facade serves its ordinary doorway
			# without making a terminal hole in the wall.
			var at:Vector2=door.clearance_at
			for road:Dictionary in roads:
				if str(road.id) in ids:continue
				for i:int in range(1,road.points.size()):
					var a:=Vector2(road.points[i-1][0],road.points[i-1][1]);var b:=Vector2(road.points[i][0],road.points[i][1])
					if at.distance_to(Geometry2D.get_closest_point_to_segment(at,a,b))<=float(road.width)*.5+.04:ids.append(str(road.id));break
		result[house.id]=ids
	return result
