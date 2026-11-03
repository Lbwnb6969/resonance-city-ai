extends RefCounted
## Pure world-space seams from authored room polygons; never serialized.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Hinge=preload("res://scripts/world/city_creation_house_hinge.gd")
const LIMIT:=22.5
const BIN:=4.
static func eligible(house:Dictionary)->bool:
	return not house.has("signature") and house.get("style","")!="round_tower" and house.get("architecture","") in ["","portico","townhouse","recessed_townhouse","stepped_guildhouse","chalet","terrace","green_lodge","oriel","guild_arcade","sawtooth_atrium"]
static func edges(house:Dictionary)->Array:
	var result:Array=[]
	if not eligible(house):return result
	for cell:Dictionary in house.cells:
		if cell.kind!="room" or int(cell.level)!=0:continue
		var top:=float(house.get("base_y",0.))+1.7
		for row:Dictionary in house.cells:
			if row.kind=="room" and row.x==cell.x and row.z==cell.z:top=maxf(top,float(house.get("base_y",0.))+(int(row.level)+1)*1.7)
		var polygon:=Frame.corners(Frame.footprint(house,cell))
		for i in range(polygon.size()):
			var a:=polygon[i];var b:=polygon[(i+1)%polygon.size()];var tangent:=(b-a).normalized();var normal:=Vector2(tangent.y,-tangent.x);var mid:=(a+b)*.5
			var covered:=false
			for row:Dictionary in house.cells:
				if row.kind=="room" and int(row.level)==0 and str(row.id)!=str(cell.id) and Frame.contains(Frame.footprint(house,row),mid+normal*.025):covered=true;break
			if not covered:result.append({"house_id":str(house.id),"cell_id":str(cell.id),"a":a,"b":b,"normal":normal,"low":float(house.get("base_y",0.)),"high":top,"era":str(house.get("era_theme",""))})
	return result
static func derive(houses:Array)->Dictionary:
	var ordered:=houses.duplicate();ordered.sort_custom(func(a,b):return str(a.id).naturalnocasecmp_to(str(b.id))<0)
	var all:Array=[];var bins:Dictionary={};var result:Dictionary={}
	for house:Dictionary in ordered:
		result[str(house.id)]=hinge(house)
		for edge:Dictionary in edges(house):
			var mid:Vector2=(edge.a+edge.b)*.5;var key:=Vector2i(floori(mid.x/BIN),floori(mid.y/BIN))
			if not bins.has(key):bins[key]=[]
			bins[key].append(all.size());all.append(edge)
	var seen:Dictionary={}
	for i in range(all.size()):
		var a:Dictionary=all[i];var mid:Vector2=(a.a+a.b)*.5;var key:=Vector2i(floori(mid.x/BIN),floori(mid.y/BIN))
		for x in range(-1,2):
			for z in range(-1,2):
				for j:int in bins.get(key+Vector2i(x,z),[]):
					if j<=i or a.house_id==all[j].house_id:continue
					for plan:Dictionary in pair(a,all[j]):
						var identity:=[plan.owner,plan.other,Vector2i((Vector2(plan.center)*1000.).round())]
						if seen.has(identity):continue
						seen[identity]=true;result[plan.owner].append(plan)
	return result
static func hinge(house:Dictionary)->Array:
	var angle:=Hinge.angle(house)
	if not eligible(house) or is_zero_approx(angle) or absf(rad_to_deg(angle))>LIMIT+.0001:return []
	var layout:=Hinge.layout(house);var across:=Vector2(-layout.axis.y,layout.axis.x)
	var p:Vector2=layout.pivot-across*.9;var q:Vector2=layout.pivot+across*.9;var origin:=Frame.origin(house);var yaw:=Frame.yaw(house)
	var to_world:=func(at:Vector2)->Vector2:return origin+(at-origin).rotated(-yaw)
	var base:=float(house.get("base_y",0.));var id:=str(house.id);var cell_id:=""
	for cell:Dictionary in house.cells:
		if int(cell.x)==0 and int(cell.z)==0 and int(cell.level)==0:cell_id=str(cell.id);break
	var edge:={"house_id":id,"cell_id":cell_id,"a":to_world.call(p),"b":to_world.call(q),"normal":Vector2(layout.axis).rotated(-yaw),"low":base,"high":base+float(layout.floors)*1.7,"era":str(house.get("era_theme",""))}
	var wing:Dictionary=edge.duplicate();wing.a=to_world.call(Hinge.rotate(house,q));wing.b=to_world.call(Hinge.rotate(house,p));wing.normal=-Vector2(layout.axis).rotated(-yaw-angle)
	return pair(edge,wing)
static func pair(a:Dictionary,b:Dictionary)->Array:
	var cosine:float=clampf(-Vector2(a.normal).dot(b.normal),-1.,1.);var degrees:=rad_to_deg(acos(cosine))
	if degrees>LIMIT+.0001 or minf(float(a.high),float(b.high))-maxf(float(a.low),float(b.low))<.50:return []
	var tangent:Vector2=(Vector2(a.b)-Vector2(a.a)).normalized();var length:float=Vector2(a.a).distance_to(a.b)
	var lo:=minf((Vector2(b.a)-Vector2(a.a)).dot(tangent),(Vector2(b.b)-Vector2(a.a)).dot(tangent));var hi:=maxf((Vector2(b.a)-Vector2(a.a)).dot(tangent),(Vector2(b.b)-Vector2(a.a)).dot(tangent))
	if minf(length,hi)-maxf(0.,lo)<1.05:return []
	var offset:Vector2=(Vector2(b.a)+Vector2(b.b)-Vector2(a.a)-Vector2(a.b))*.5;var gap:float=offset.dot(a.normal)
	if gap<-.025 or gap>.35 or absf(offset.dot(tangent))>.12:return []
	var result:Array=[]
	for endpoint:int in [0,1]:
		var p:Vector2=a.a if endpoint==0 else a.b;var q:Vector2=b.b if endpoint==0 else b.a
		if p.distance_to(q)>.76 or (q-p).dot(a.normal)<-.025:continue
		var inward:=tangent if endpoint==0 else -tangent;var other_inward:Vector2=(Vector2(b.a)-Vector2(b.b)).normalized() if endpoint==0 else (Vector2(b.b)-Vector2(b.a)).normalized()
		var polygon:=Geometry2D.convex_hull(PackedVector2Array([p+Vector2(a.normal)*.065,p-Vector2(a.normal)*.065+inward*.12,q+Vector2(b.normal)*.065,q-Vector2(b.normal)*.065+other_inward*.12]))
		polygon.resize(polygon.size()-1)
		if polygon.size()<3:continue
		var kind:="wedge_hinge_joint" if degrees>.1 else "party_wall_pier"
		result.append({"kind":kind,"owner":a.house_id,"other":b.house_id,"cell_id":a.cell_id,"other_cell_id":b.cell_id,"polygon":polygon,"center":(p+q)*.5,"low":minf(a.low,b.low)-.02,"high":maxf(a.high,b.high)+.03,"angle_deg":degrees,"gap":gap,"eras":[a.era,b.era]})
	return result
