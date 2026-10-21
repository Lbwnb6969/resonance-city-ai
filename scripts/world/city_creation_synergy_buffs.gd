extends RefCounted
const Arcade=preload("res://scripts/world/city_creation_arcade_plan.gd")
const Conservatory=preload("res://scripts/world/city_creation_conservatory_plan.gd")
const Towers=preload("res://scripts/world/city_creation_towers.gd")
const Sites=preload("res://scripts/world/city_creation_site_specialization.gd")
const CHORD_NAMES:={"pastoral_triad":"晨光田园三和弦","highland_fifth":"高地钟楼五度共鸣","renaissance_fugue":"文艺复兴赋格四重奏","clockwork_waltz":"蒸汽花房圆舞曲","chrono_counterpoint":"跨河古今交响对位"}
const CHORD_DETAILS:={
	"pastoral_triad":"面包坊＋茶座＋喷泉内院或池塘。采购后直赴茶座，满席时在面包坊等候；聚落生产与Lv.3所需木饰送装提速25%。",
	"highland_fifth":"4栋海拔至少1.0米的房屋＋3层钟楼或古钟塔＋真实石阶路。所在街坊住户步速提升25%。",
	"renaissance_fugue":"书院＋制琴坊＋2栋实际底层连拱楼。工艺产出+50%，木饰送装附赠彩窗；区内住宅获得Lv.4景观条件。",
	"clockwork_waltz":"钟表坊＋1座实际玻璃花房＋电车轨街。区内工坊制作提速40%，电车经过时为沿街10米内房屋添30秒余韵。",
	"chrono_counterpoint":"两岸或高低台地上的两个不同时代成型聚落＋跨河桥或共鸣音弧。沿真实路网共享生活服务，全城生产+30%，获得Lv.5晋升资格。"}
## Derived planning bonuses. Read only authored geometry; never mint progress.
## Expansion counts independent real five-home clusters, irrespective of paint.
static func evaluate(city:RefCounted)->Dictionary:
	var districts:Dictionary={};var members:Dictionary={};var houses:Dictionary={};var mills:Array[Dictionary]=[]
	var keeps:Array[Dictionary]=[];var palaces:Array[Dictionary]=[];var academies:Dictionary={}
	for district:Dictionary in city.districts:
		districts[str(district.id)]={"count":0,"matching":0,"identity":str(district.get("era_theme","pastoral"))+":"+str(district.style),"era":str(district.get("era_theme","pastoral")),"pure":false}
	for house:Dictionary in city.houses:
		var id:=str(house.id);var district:Dictionary=city.district_for_house(id);var did:=str(district.get("id",""))
		members[id]=did
		if districts.has(did) and not house.has("signature"):
			districts[did].count+=1
			if city.house_era(house)==districts[did].era:districts[did].matching+=1
		if house.get("signature","")=="watermill":mills.append(house)
		if house.get("signature","")=="bell_keep":keeps.append(house)
		if house.get("signature","")=="botanical_palace":palaces.append(house)
		if house.get("signature","")=="music_academy" and not did.is_empty():academies[did]=true
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
	var natural_groups:Dictionary=city.natural_clusters();var ordinary:Dictionary={}
	var academy_groups:Dictionary={}
	for house:Dictionary in city.houses:
		if house.get("signature","")=="music_academy":academy_groups[natural_groups[str(house.id)].id]=true
	for house:Dictionary in city.houses:
		if not house.has("signature"):
			var group:String=natural_groups[str(house.id)].id;ordinary[group]=int(ordinary.get(group,0))+1
	var large_groups:=0
	for count:int in ordinary.values():
		if count>=5:large_groups+=1
	var expansion:=1.0+.12*clampi(large_groups-1,0,5)
	var sites:=Sites.evaluate(city)
	var chords:=_chords(city,districts,members,sites)
	var counterpart:=1.3 if "chrono_counterpoint" in chords.active else 1.
	for house:Dictionary in city.houses:
		var id:=str(house.id);var did:String=members[id];var labels:PackedStringArray=[]
		var purity:=1.25 if districts.has(did) and districts[did].pure else 1.0
		var water_power:=1.0
		if purity>1.:labels.append("声部纯净 · 生产提速25%")
		if str(house.role) in ["bakery","workshop"]:
			for mill:Dictionary in mills:
				if _same_bank_band(city,house,mill):
					water_power=1.+.35*float(city.biome_bonus(id).get("water_bonus",1.))
					labels.append("水力工坊带 · 同岸18米内生产提速%d%%"%roundi((water_power-1.)*100.));break
		var scopes:Dictionary=chords.houses.get(id,{})
		var natural:=_near(house,palaces,14.)
		var delivery:=1.25 if str(house.role) in ["workshop","atelier","clockmaker"] and _near(house,keeps,16.) else 1.
		var batch:=2 if str(house.role) in ["workshop","atelier"] and (academies.has(did) or academy_groups.has(natural_groups[id].id)) else 1
		if delivery>1.:labels.append("圣塔回响圈 · 送装与返程提速25%")
		if batch>1:labels.append("人文学院区 · 每批产量翻倍")
		if natural:labels.append("翡翠花海圈 · 自然景观满足"+(" · 品茶提速40%" if str(house.role)=="garden_cafe" else ""))
		var clockwork:=scopes.has("clockwork_waltz") and str(house.role) in ["workshop","atelier","clockmaker"]
		for chord:String in CHORD_NAMES:
			if scopes.has(chord):labels.append("♫ "+str(CHORD_NAMES[chord]))
		var walking:float=(1.25 if scopes.has("highland_fifth") else 1.)*(1.1 if sites.lookout_districts.has(did) else 1.)
		if sites.lookout_districts.has(did):labels.append("制高点钟楼 · 通勤步速+10%")
		houses[id]={"district_id":did,"purity_mult":purity,"water_power_mult":water_power,"production_mult":expansion*counterpart*purity*water_power*(1.4 if clockwork else 1.)*(1.25 if scopes.has("pastoral_triad") else 1.),"growth_mult":expansion*(1.25 if scopes.has("pastoral_triad") else 1.),"yield_mult":1.5 if scopes.has("renaissance_fugue") and str(house.role) in ["workshop","atelier","clockmaker"] else 1.,"chord_scopes":scopes,"walking_mult":walking,"delivery_mult":delivery,"batch_mult":batch,"natural":natural,"cafe_duration_mult":1./1.4 if natural else 1.,"site":sites.houses[id],"label":" · ".join(labels)}
	return {"districts":districts,"houses":houses,"chord_scopes":chords.scopes,"active_chords":chords.active,"active_district_count":graph.size(),"connected_identities":connected_identities,"large_cluster_count":large_groups,"counterpoint_multiplier":counterpart,"expansion_multiplier":expansion,"label":"跨区开拓 · %d片五屋聚落 · 全城工坊/木饰成长+%d%%"%[large_groups,roundi((expansion-1.)*100.)] if expansion>1. else "再开辟一片至少五屋的独立聚落，工坊与共鸣成长+12%"}

static func _near(house:Dictionary,landmarks:Array[Dictionary],radius:float)->bool:
	var at:=Vector2(float(house.origin[0]),float(house.origin[1]))
	for landmark:Dictionary in landmarks:
		var center:=Vector2(float(landmark.origin[0]),float(landmark.origin[1]))
		if landmark.get("signature","")=="botanical_palace":center+=Vector2(0,1.8)
		if at.distance_to(center)<=radius:return true
	return false

static func _chords(city:RefCounted,districts:Dictionary,members:Dictionary,sites:Dictionary={})->Dictionary:
	if districts.is_empty():return {"houses":{},"scopes":{},"active":[]}
	var features:Dictionary={};var catalog:Dictionary={};var high:=0;var artist:=false;var clockmaker:=false
	for did:String in districts:features[did]={"roles":{},"houses":[],"high":0,"tower":false,"arcades":0,"glass":0,"fountain":false,"stairs":false,"tram":false,"roundabout":false,"banks":{},"elevation_sum":0.}
	for house:Dictionary in city.houses:
		catalog[str(house.id)]=house
		if float(house.get("base_y",0.))>=1.0:high+=1
		artist=artist or str(house.role)=="atelier";clockmaker=clockmaker or str(house.role)=="clockmaker"
	var towers:Dictionary=sites.towers if sites.has("towers") else (Towers.derive(city.houses,city.roads) if high>=4 else {})
	for id:String in members:
		var did:String=members[id]
		if not features.has(did):continue
		var row:Dictionary=features[did];var house:Dictionary=catalog[id];var at:=Vector2(float(house.origin[0]),float(house.origin[1]))
		row.houses.append(id);row.roles[str(house.role)]=true;row.elevation_sum+=float(house.get("base_y",0.))
		row.banks[-1 if at.x<float(city.river_x(at.y)) else 1]=true
		if float(house.get("base_y",0.))>=1.0:row.high+=1
		if house.get("signature","")=="bell_keep" or not towers.get(id,[]).is_empty():row.tower=true
		if city.house_era(house)!="modern_eco":
			if artist:
				var arcade:Array=sites.arcades[id] if sites.has("arcades") and sites.arcades.has(id) else Arcade.for_house(city,house)
				if not arcade.is_empty():row.arcades+=1
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
		if high<4 and not road.get("bridge",false):continue
		var profile:Dictionary=city.road_profile(road)
		if high>=4:
			for tread:Dictionary in profile.get("treads",[]):
				var a:Vector2=tread.a;var b:Vector2=tread.b
				for district:Dictionary in city.districts:
					if _touches([[a.x,a.y],[b.x,b.y]],float(road.width)*.5,district):features[str(district.id)].stairs=true
		for bridge:Dictionary in profile.get("bridge_runs",[]):
			var banks:Dictionary={}
			for sample:Dictionary in profile.samples:
				if float(sample.distance)<float(bridge.start)-.001 or float(sample.distance)>float(bridge.end)+.001:continue
				var at:Vector2=sample.xz;banks[-1 if at.x<float(city.river_x(at.y)) else 1]=true
			if banks.size()==2:bridges.append(touched)
	var scopes:Dictionary={};var linked:Dictionary={};var bridge_scopes:Dictionary={}
	for did:String in features:scopes[did]=[did]
	for link:Dictionary in city.musical_links:
		if not features.has(str(link.from)) or not features.has(str(link.to)):continue
		var pair:Array=[str(link.from),str(link.to)];pair.sort();var key:String=":".join(pair)
		scopes[key]=pair;linked[key]=true
	for bridge:Array in bridges:
		for a:int in range(bridge.size()):
			for b:int in range(a+1,bridge.size()):
				var pair:Array=[bridge[a],bridge[b]];pair.sort();var key:String=":".join(pair)
				scopes[key]=pair;bridge_scopes[key]=true
	var result:Dictionary={"houses":{},"scopes":{},"active":[]}
	for key:String in scopes:
		var ids:Array=scopes[key];var roles:Dictionary={};var height:=0;var arcades:=0;var glass:=0
		var tower:=false;var fountain:=false;var stairs:=false;var tram:=false;var ring:=false
		for did:String in ids:
			var row:Dictionary=features[did];roles.merge(row.roles);height+=int(row.high);arcades+=int(row.arcades);glass+=int(row.glass)
			tower=tower or row.tower;fountain=fountain or row.fountain;stairs=stairs or row.stairs;tram=tram or row.tram;ring=ring or row.roundabout
		var met:Dictionary={"pastoral_triad":roles.has("bakery") and roles.has("garden_cafe") and fountain,"highland_fifth":height>=4 and tower and stairs,"renaissance_fugue":roles.has("atelier") and roles.has("workshop") and arcades>=2,"clockwork_waltz":roles.has("clockmaker") and glass>=1 and tram,"chrono_counterpoint":false}
		if ids.size()==2 and districts[ids[0]].era!=districts[ids[1]].era and int(districts[ids[0]].count)>=3 and int(districts[ids[1]].count)>=3 and int(districts[ids[0]].matching)>0 and int(districts[ids[1]].matching)>0:
			var first:Dictionary=features[ids[0]];var second:Dictionary=features[ids[1]]
			var opposite:bool=(first.banks.has(-1) and second.banks.has(1)) or (first.banks.has(1) and second.banks.has(-1))
			var raised:bool=absf(float(first.elevation_sum)/maxi(1,first.houses.size())-float(second.elevation_sum)/maxi(1,second.houses.size()))>=1.
			met.chrono_counterpoint=(opposite or raised) and (linked.has(key) or bridge_scopes.has(key))
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
	# Auto districts are unions of real household footprints, not an imaginary
	# polyline zigzagging through empty land between sorted member identities.
	if district.has("auto_members"):
		for at:Array in district.points:
			if _touches(points,radius,{"points":[at],"width":district.width}):return true
		return false
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
