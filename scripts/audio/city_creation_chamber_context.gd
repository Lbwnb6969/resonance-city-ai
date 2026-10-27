extends RefCounted
const Form=preload("res://scripts/world/city_creation_organic_form.gd")
const Balcony=preload("res://scripts/world/city_creation_balcony_plan.gd")
static func curves(roads:Array)->Dictionary:
	var bins:Dictionary={}
	for road:Dictionary in roads:
		var points:Array=road.points
		for i in range(1,points.size()-1):
			var p:=Vector2(points[i][0],points[i][1]);var a:=Vector2(points[maxi(0,i-3)][0],points[maxi(0,i-3)][1]);var b:=Vector2(points[mini(points.size()-1,i+3)][0],points[mini(points.size()-1,i+3)][1])
			if p.distance_squared_to(a)<.01 or b.distance_squared_to(p)<.01 or absf((p-a).angle_to(b-p))<deg_to_rad(5.):continue
			var radius:=4.5+float(road.width)*.5;var lo:=Vector2i(((p-Vector2.ONE*radius)/8.).floor());var hi:=Vector2i(((p+Vector2.ONE*radius)/8.).floor())
			for x in range(lo.x,hi.x+1):
				for z in range(lo.y,hi.y+1):
					var key:=Vector2i(x,z)
					if not bins.has(key):bins[key]=[]
					bins[key].append({"at":p,"radius":radius})
	return bins
static func house(city,record:Dictionary,bins:Dictionary)->bool:
	if Form.mode(city,record)==2 or int(record.get("balcony_arc",0))>0 and not Balcony.plan(city,record).is_empty():return true
	var at:=Vector2(record.origin[0],record.origin[1]);var key:=Vector2i((at/8.).floor())
	for row:Dictionary in bins.get(key,[]):
		if at.distance_squared_to(row.at)<=float(row.radius)*float(row.radius):return true
	return false
static func organic(records:Dictionary,source:String)->bool:
	var row:Dictionary=records.get(source,{})
	for id:String in row.get("cluster_members",[source]):
		if records.get(id,{}).get("organic_legato",false):return true
	return false
static func arrival(demo:Node3D,kind:String)->void:
	if kind!="balcony":demo.music.record_life_activity("arrival","",Vector2(demo.focus.x,demo.focus.z));return
	for resident:Dictionary in demo.life.residents:
		var visit:Dictionary=resident.get("balcony_visit",{})
		if visit.get("phase","")!="listen" or visit.get("ornament_sent",false):continue
		visit.ornament_sent=true;var id:=str(resident.home_id);var at:=Vector2(resident.node.position.x,resident.node.position.z)
		demo.music.record_life_activity("arrival",id,at)
		preload("res://scripts/audio/city_creation_chamber_ornaments.gd").request(demo.music,"balcony",id,at,func():balcony_note(demo,resident,id,at))
static func balcony_note(demo:Node3D,resident:Dictionary,id:String,at:Vector2)->void:
	if resident.get("balcony_visit",{}).get("phase","")!="listen" or demo.state._house_index(id)<0:return
	var music=demo.music;var stream:AudioStreamWAV=preload("res://scripts/audio/city_creation_chamber_ornaments.gd").wave(music,null)
	if stream==null:return
	for player:AudioStreamPlayer in music._effects:
		if not player.playing:music.play_effect_at(player,stream,at,.75);return
