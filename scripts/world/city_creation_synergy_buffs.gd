extends RefCounted
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
	for house:Dictionary in city.houses:
		var id:=str(house.id);var did:String=members[id];var labels:PackedStringArray=[]
		var purity:=1.25 if districts.has(did) and districts[did].pure else 1.0
		var water_power:=1.0
		if purity>1.:labels.append("声部纯净 · 生产提速25%")
		if str(house.role) in ["bakery","workshop"]:
			for mill:Dictionary in mills:
				if _same_bank_band(city,house,mill):water_power=1.35;labels.append("水力工坊带 · 同岸18米内生产提速35%");break
		houses[id]={"district_id":did,"purity_mult":purity,"water_power_mult":water_power,"production_mult":expansion*purity*water_power,"label":" · ".join(labels)}
	return {"districts":districts,"houses":houses,"active_district_count":graph.size(),"connected_identities":connected_identities,"expansion_multiplier":expansion,"label":"跨区共鸣 · %d种相连声部 · 全城生产提速%d%%"%[connected_identities,roundi((expansion-1.)*100.)] if expansion>1. else "异风格街坊住入邻里，再连起共鸣音弧，可获跨区生产加成"}

static func _same_bank_band(city:RefCounted,house:Dictionary,mill:Dictionary)->bool:
	var a:=Vector2(float(house.origin[0]),float(house.origin[1]));var b:=Vector2(float(mill.origin[0]),float(mill.origin[1]))
	if a.distance_to(b)>18.:return false
	# Check the entire connection against the actual river, channels and ponds.
	# Close buildings on opposite banks never share a water drive.
	var steps:=maxi(1,ceili(a.distance_to(b)/.25))
	for i in range(steps+1):
		if float(city.water_clearance(a.lerp(b,float(i)/steps)))<0.:return false
	return true
