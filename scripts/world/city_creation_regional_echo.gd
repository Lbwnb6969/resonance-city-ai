extends RefCounted
## Completed exchanges activate a current, occupied region network. Geometry
## and street components come from Life's published graph, never a drawn line.
const REGIONS:={"west":"西岸平地","east":"东岸沙洲","highland":"高地台地","garden":"池塘林间"}
static func prepare(city:RefCounted,network:RefCounted)->Dictionary:
	var nodes:Dictionary={};var votes:Dictionary={}
	var trees:Dictionary={}
	for plant:Dictionary in city.plants:
		if str(plant.kind) not in ["olive","cypress"]:continue
		var visible:bool=bool(city._region_plant_visibility.get(str(plant.id),false)) if city._region_visibility_revision==city.revision else city.vegetation_visible(plant)
		if not visible:continue
		var point:=Vector2(plant.position[0],plant.position[1]);var bucket:=Vector2i(floori(point.x/8.),floori(point.y/8.))
		if not trees.has(bucket):trees[bucket]=[]
		trees[bucket].append(point)
	for district:Dictionary in city.districts:
		var id:=str(district.id)
		nodes[id]={"identity":str(district.get("era_theme","pastoral"))+":"+str(district.style),"components":{},"homes":0,"region":""};votes[id]={}
	for house:Dictionary in city.houses:
		var id:=str(house.id);var did:=str(city.district_for_house(id).get("id",""))
		if not nodes.has(did) or house.has("signature"):continue
		if network.connected_houses.has(id):
			var component:String=network.component_of[str(network.connected_houses[id])]
			nodes[did].components[component]=true
		if str(house.role)!="residential":continue
		nodes[did].homes+=1
		var region:=_region(city,house,trees);votes[did][region]=int(votes[did].get(region,0))+1
	for id:String in nodes.keys():
		if int(nodes[id].homes)==0:nodes.erase(id);continue
		var best:=0
		for region:String in REGIONS:
			if int(votes[id].get(region,0))>best:best=int(votes[id][region]);nodes[id].region=region
	var links:Dictionary={}
	for link:Dictionary in city.musical_links:links[str(link.from)+":"+str(link.to)]=true
	var house_components:Dictionary={}
	for id:String in network.connected_houses:house_components[id]=network.component_of[str(network.connected_houses[id])]
	return {"nodes":nodes,"links":links,"house_components":house_components}

static func _region(city:RefCounted,house:Dictionary,tree_bins:Dictionary)->String:
	if float(house.get("base_y",0.))>=1.2:return "highland"
	var point:=Vector2(float(house.origin[0]),float(house.origin[1]))
	for water:Dictionary in city.waters:
		if str(water.kind)=="pond" and city._water_stroke_distance(point,water.points)-float(water.width)*.5<=4.5:return "garden"
	var trees:=0
	var cell:=Vector2i(floori(point.x/8.),floori(point.y/8.))
	for x in range(cell.x-1,cell.x+2):
		for y in range(cell.y-1,cell.y+2):
			for tree:Vector2 in tree_bins.get(Vector2i(x,y),[]):
				if point.distance_squared_to(tree)<=64.:trees+=1
				if trees>=3:return "garden"
	return "west" if point.x<city.river_x(point.y) else "east"

static func evaluate(prepared:Dictionary,answers:Array,trips:Array)->Dictionary:
	var nodes:Dictionary=prepared.get("nodes",{});var links:Dictionary=prepared.get("links",{})
	var graph:Dictionary={};var edges:Dictionary={}
	for id:String in nodes:graph[id]=[]
	for pair:Dictionary in answers+trips:
		var a:=str(pair.from);var b:=str(pair.to)
		if not nodes.has(a) or not nodes.has(b) or nodes[a].identity==nodes[b].identity or nodes[a].region==nodes[b].region:continue
		if pair.from_voice!=nodes[a].identity or pair.to_voice!=nodes[b].identity or pair.from_region!=nodes[a].region or pair.to_region!=nodes[b].region:continue
		var connected:=links.has(a+":"+b)
		for component:String in nodes[a].components:
			if nodes[b].components.has(component):connected=true;break
		if not connected or edges.has(a+":"+b):continue
		edges[a+":"+b]=true;graph[a].append(b);graph[b].append(a)
	var seen:Dictionary={};var count:=0;var selected:Array=[]
	for id:String in graph:
		if seen.has(id):continue
		var queue:Array=[id];var component:Array=[];var options:Dictionary={}
		while not queue.is_empty():
			var next:String=queue.pop_back()
			if seen.has(next):continue
			seen[next]=true;component.append(next);queue.append_array(graph[next])
			var region:=str(nodes[next].region)
			if not options.has(region):options[region]=[]
			if str(nodes[next].identity) not in options[region]:options[region].append(str(nodes[next].identity))
		var matched:Dictionary={}
		for region:String in options:_match(region,options,matched,{})
		if matched.size()>count:count=matched.size();selected=component
	var tier:=count if count>=2 else 0
	return {"tier":tier,"regions":count,"districts":selected,"nodes":nodes,"edges":edges.size(),"production_mult":1.25 if tier>=2 else 1.,"range_mult":1.3 if tier>=3 else 1.,"delivery_glow":30. if tier>=3 else 0.,"prestige":tier>=4,"variant":2 if tier>=3 else 1 if tier>=2 else 0,"label":_label(tier)}

static func _match(region:String,options:Dictionary,matched:Dictionary,seen:Dictionary)->bool:
	for identity:String in options[region]:
		if seen.has(identity):continue
		seen[identity]=true
		if not matched.has(identity) or _match(str(matched[identity]),options,matched,seen):matched[identity]=region;return true
	return false

static func _label(tier:int)->String:
	if tier>=4:return "四方交响 · 工坊提速25% · 服务范围+30% · 送装赠余韵 · 全城Lv.5资格 · 三声部织体"
	if tier>=3:return "三地复调 · 工坊提速25% · 服务范围+30% · 送装赠30秒余韵 · 三声部织体"
	if tier>=2:return "两地对位 · 全城工坊提速25% · 二声部织体"
	return "在不同地形开辟异风格街坊，完成真实问答或电车通勤，点亮两地对位"
