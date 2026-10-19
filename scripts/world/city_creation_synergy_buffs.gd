extends RefCounted
const Arcade=preload("res://scripts/world/city_creation_arcade_plan.gd")
const Conservatory=preload("res://scripts/world/city_creation_conservatory_plan.gd")
const Towers=preload("res://scripts/world/city_creation_towers.gd")
const CHORD_NAMES:={"pastoral_triad":"晨光田园三和弦","highland_fifth":"高地钟楼五度共鸣","renaissance_fugue":"文艺复兴赋格四重奏","clockwork_waltz":"蒸汽花房圆舞曲","chrono_counterpoint":"跨河古今交响对位"}
const CHORD_DETAILS:={
	"pastoral_triad":"面包坊＋茶座＋喷泉内院或池塘。采购后直赴茶座，满席时在面包坊等候；区内制琴制作、初阶木饰送装提速50%。",
	"highland_fifth":"4栋海拔至少1.2米的房屋＋3层钟楼或古钟塔＋真实石阶路。所在街坊住户步速提升25%。",
	"renaissance_fugue":"书院＋制琴坊＋3栋实际底层连拱楼＋石板灯街环岛。每件送达木饰附赠1份彩窗；区内住宅获得Lv.4景观条件。",
	"clockwork_waltz":"钟表坊＋2座实际玻璃花房＋电车轨街。区内工坊制作速度翻倍，电车经过时为沿街10米内房屋添30秒余韵。",
	"chrono_counterpoint":"两个不同时代街坊＋跨河双拱桥或桁架桥＋手动共鸣连线。沿真实路网共享工艺与茶座服务，获得Lv.5晋升资格。"}
## Derived planning bonuses. Read only authored geometry; never mint progress.
## Expansion uses occupied districts in a current resonance-link component.
static func evaluate(city:RefCounted)->Dictionary:
	var districts:Dictionary={};var members:Dictionary={};var houses:Dictionary={};var mills:Array[Dictionary]=[]
	for district:Dictionary in city.districts:
		districts[str(district.id)]={"count":0,"matching":0,"identity":str(district.get("era_theme","pastoral"))+":"+str(district.style),"era":str(district.get("era_theme","pastoral")),"pure":false}
	for house:Dictionary in city.houses:
		var id:=str(house.id);var district:Dictionary=city.district_for_house(id);var did:=str(district.get("id",""))
		members[id]=did
		if districts.has(did) and not house.has("signature"):
			districts[did].count+=1
			if city.house_era(house)==districts[did].era:districts[did].matching+=1
		if house.get("signature","")=="watermill":mills.append(house)
	for row:Dictionary in districts.values():row.pure=int(row.count)>=8 and int(row.count)<=16 and row.count==row.matching
	var graph:Dictionary={}
	for did:String in districts:
		if int(districts[did].count)>0:graph[did]=[]
	for link:Dictionary in city.musical_links:
		if graph.has(str(link.from)) and graph.has(str(link.to)):
			graph[str(link.from)].append(str(link.to));graph[str(link.to)].append(str(link.from))
	var seen:Dictionary={};var connected_identities:=0
	for did:String in graph:
		if seen.has(did):continue
		var queue:Array=[did];var identities:Dictionary={}
		while not queue.is_empty():
			var next:String=queue.pop_back()
			if seen.has(next):continue
			seen[next]=true;identities[str(districts[next].identity)]=true;queue.append_array(graph[next])
		connected_identities=maxi(connected_identities,identities.size())
	var expansion:=1.0+.12*clampi(connected_identities-1,0,5)
	var chords:=_chords(city,districts,members)
	for house:Dictionary in city.houses:
		var id:=str(house.id);var did:String=members[id];var labels:PackedStringArray=[]
		var purity:=1.25 if districts.has(did) and districts[did].pure else 1.0
		var water_power:=1.0
		if purity>1.:labels.append("声部纯净 · 生产提速25%")
		if str(house.role) in ["bakery","workshop"]:
			for mill:Dictionary in mills:
				if _same_bank_band(city,house,mill):water_power=1.35;labels.append("水力工坊带 · 同岸18米内生产提速35%");break
		var scopes:Dictionary=chords.houses.get(id,{})
		var clockwork:=scopes.has("clockwork_waltz") and str(house.role) in ["workshop","atelier","clockmaker"]
		var early_craft:=scopes.has("pastoral_triad") and str(house.role)=="workshop"
		for chord:String in CHORD_NAMES:
			if scopes.has(chord):labels.append("♫ "+str(CHORD_NAMES[chord]))
		houses[id]={"district_id":did,"purity_mult":purity,"water_power_mult":water_power,"production_mult":expansion*purity*water_power*(2. if clockwork else 1.)*(1.5 if early_craft else 1.),"chord_scopes":scopes,"walking_mult":1.25 if scopes.has("highland_fifth") else 1.,"label":" · ".join(labels)}
	return {"districts":districts,"houses":houses,"chord_scopes":chords.scopes,"active_chords":chords.active,"active_district_count":graph.size(),"connected_identities":connected_identities,"expansion_multiplier":expansion,"label":"跨区共鸣 · %d种相连声部 · 全城生产提速%d%%"%[connected_identities,roundi((expansion-1.)*100.)] if expansion>1. else "异风格街坊住入邻里，再连起共鸣音弧，可获跨区生产加成"}

static func _chords(city:RefCounted,districts:Dictionary,members:Dictionary)->Dictionary:
	if districts.is_empty():return {"houses":{},"scopes":{},"active":[]}
	var features:Dictionary={};var catalog:Dictionary={};var high:=0;var artist:=false;var clockmaker:=false
	for did:String in districts:features[did]={"roles":{},"houses":[],"high":0,"tower":false,"arcades":0,"glass":0,"fountain":false,"stairs":false,"tram":false,"roundabout":false,"banks":{}}
	for house:Dictionary in city.houses:
		catalog[str(house.id)]=house
		if float(house.get("base_y",0.))>=1.2:high+=1
		artist=artist or str(house.role)=="atelier";clockmaker=clockmaker or str(house.role)=="clockmaker"
	var towers:Dictionary=Towers.derive(city.houses,city.roads) if high>=4 else {}
	for id:String in members:
		var did:String=members[id]
		if not features.has(did):continue
		var row:Dictionary=features[did];var house:Dictionary=catalog[id];var at:=Vector2(float(house.origin[0]),float(house.origin[1]))
		row.houses.append(id);row.roles[str(house.role)]=true
		row.banks[-1 if at.x<float(city.river_x(at.y)) else 1]=true
		if float(house.get("base_y",0.))>=1.2:row.high+=1
		if house.get("signature","")=="bell_keep" or not towers.get(id,[]).is_empty():row.tower=true
		if city.house_era(house)!="modern_eco":
			if artist and not Arcade.for_house(city,house).is_empty():row.arcades+=1
			if clockmaker and not Conservatory.for_house(city,house).is_empty():row.glass+=1
	for court:Dictionary in city.courtyard_plans():
		if court.get("fountain",{}).is_empty():continue
		for id:String in court.get("members",[]):
			var did:String=members.get(id,"")
			if features.has(did):features[did].fountain=true
	var bridges:Array=[]
	for district:Dictionary in city.districts:
		var row:Dictionary=features[str(district.id)]
		for water:Dictionary in city.waters:
			if water.get("kind","")=="pond" and _touches(water.points,float(water.width)*.5,district):row.fountain=true
	for road:Dictionary in city.roads:
		var touched:Array[String]=[]
		for district:Dictionary in city.districts:
			var did:=str(district.id);var row:Dictionary=features[did]
			if _touches(road.points,float(road.width)*.5,district):
				touched.append(did)
				if road.get("style","")=="tram":row.tram=true
			if road.get("style","")=="promenade":
				for ring:Dictionary in road.get("roundabouts",[]):
					if _touches([ring.center],float(ring.radius),district):row.roundabout=true
		if high<4 and (not road.get("bridge",false) or city.musical_links.is_empty()):continue
		var profile:Dictionary=city.road_profile(road)
		if high>=4:
			for tread:Dictionary in profile.get("treads",[]):
				var a:Vector2=tread.a;var b:Vector2=tread.b
				for district:Dictionary in city.districts:
					if _touches([[a.x,a.y],[b.x,b.y]],float(road.width)*.5,district):features[str(district.id)].stairs=true
		for bridge:Dictionary in profile.get("bridge_runs",[]):
			if bridge.get("family","") not in ["","clockwork_truss"]:continue
			var banks:Dictionary={}
			for sample:Dictionary in profile.samples:
				if float(sample.distance)<float(bridge.start)-.001 or float(sample.distance)>float(bridge.end)+.001:continue
				var at:Vector2=sample.xz;banks[-1 if at.x<float(city.river_x(at.y)) else 1]=true
			if banks.size()==2:bridges.append(touched)
	var scopes:Dictionary={}
	for did:String in features:scopes[did]=[did]
	for link:Dictionary in city.musical_links:
		if features.has(str(link.from)) and features.has(str(link.to)):scopes[str(link.from)+":"+str(link.to)]=[str(link.from),str(link.to)]
	var result:Dictionary={"houses":{},"scopes":{},"active":[]}
	for key:String in scopes:
		var ids:Array=scopes[key];var roles:Dictionary={};var height:=0;var arcades:=0;var glass:=0
		var tower:=false;var fountain:=false;var stairs:=false;var tram:=false;var ring:=false
		for did:String in ids:
			var row:Dictionary=features[did];roles.merge(row.roles);height+=int(row.high);arcades+=int(row.arcades);glass+=int(row.glass)
			tower=tower or row.tower;fountain=fountain or row.fountain;stairs=stairs or row.stairs;tram=tram or row.tram;ring=ring or row.roundabout
		var met:Dictionary={"pastoral_triad":roles.has("bakery") and roles.has("garden_cafe") and fountain,"highland_fifth":height>=4 and tower and stairs,"renaissance_fugue":roles.has("atelier") and roles.has("workshop") and arcades>=3 and ring,"clockwork_waltz":roles.has("clockmaker") and glass>=2 and tram,"chrono_counterpoint":false}
		if ids.size()==2 and districts[ids[0]].era!=districts[ids[1]].era and int(districts[ids[0]].matching)>0 and int(districts[ids[1]].matching)>0:
			var opposite:bool=(features[ids[0]].banks.has(-1) and features[ids[1]].banks.has(1)) or (features[ids[0]].banks.has(1) and features[ids[1]].banks.has(-1))
			if opposite:
				for bridge:Array in bridges:
					if ids[0] in bridge and ids[1] in bridge:met.chrono_counterpoint=true;break
		var active:Array[String]=[]
		for chord:String in CHORD_NAMES:
			if not met[chord]:continue
			active.append(chord)
			if chord not in result.active:result.active.append(chord)
			for did:String in ids:
				for id:String in features[did].houses:
					if not result.houses.has(id):result.houses[id]={}
					if not result.houses[id].has(chord):result.houses[id][chord]=[]
					result.houses[id][chord].append(key)
		if not active.is_empty():result.scopes[key]={"district_ids":ids,"chords":active}
	return result

static func _touches(points:Array,radius:float,district:Dictionary)->bool:
	var stroke:Array=district.points;var limit:=radius+float(district.width)*.5
	for i in range(maxi(1,points.size()-1)):
		var a:=Vector2(float(points[i][0]),float(points[i][1]));var b:=Vector2(float(points[mini(i+1,points.size()-1)][0]),float(points[mini(i+1,points.size()-1)][1]))
		for j in range(maxi(1,stroke.size()-1)):
			var c:=Vector2(float(stroke[j][0]),float(stroke[j][1]));var d:=Vector2(float(stroke[mini(j+1,stroke.size()-1)][0]),float(stroke[mini(j+1,stroke.size()-1)][1]))
			if Geometry2D.segment_intersects_segment(a,b,c,d)!=null:return true
			if a.distance_to(Geometry2D.get_closest_point_to_segment(a,c,d))<=limit or b.distance_to(Geometry2D.get_closest_point_to_segment(b,c,d))<=limit:return true
			if c.distance_to(Geometry2D.get_closest_point_to_segment(c,a,b))<=limit or d.distance_to(Geometry2D.get_closest_point_to_segment(d,a,b))<=limit:return true
	return false

static func _same_bank_band(city:RefCounted,house:Dictionary,mill:Dictionary)->bool:
	var a:=Vector2(float(house.origin[0]),float(house.origin[1]));var b:=Vector2(float(mill.origin[0]),float(mill.origin[1]))
	if a.distance_to(b)>18.:return false
	# Check the entire connection against the actual river, channels and ponds.
	# Close buildings on opposite banks never share a water drive.
	var steps:=maxi(1,ceili(a.distance_to(b)/.25))
	for i in range(steps+1):
		if float(city.water_clearance(a.lerp(b,float(i)/steps)))<0.:return false
	return true
