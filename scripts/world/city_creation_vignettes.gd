extends RefCounted
const Catalog=preload("res://scripts/world/city_creation_vignette_catalog.gd")
const Features=preload("res://scripts/world/city_creation_poem_features.gd")
const Sites=preload("res://scripts/world/city_creation_vignette_sites.gd")
const IDS:=["vignette_river_bend_choir","vignette_highland_terrace","vignette_courtyard_fountain","vignette_olive_grove_craft"]
static func template(id:String)->Dictionary:
	for row:Dictionary in Catalog.TEMPLATES:
		if row.id==id:return row
	return {}
static func offer(city:RefCounted,preferred:String="")->bool:
	if city.CreationPolicy.is_free(city):return false
	var available:=Sites.proposals(city)
	if available.is_empty():return false
	var journey:Dictionary=city.harmony_journey;var serial:=int(journey.get("vignette_serial",0))+1
	var choices:Array=Catalog.TEMPLATES.map(func(row):return str(row.id)).filter(func(id):return available.has(id))
	var previous:String=journey.get("active_vignette",{}).get("id","")
	if choices.size()>1:choices.erase(previous)
	var id:String=preferred if available.has(preferred) else str(choices[(serial-1)%choices.size()])
	var at:Vector2=available[id];var homes:Array=[];var plants:Array=[];var courts:Array=[]
	for house:Dictionary in city.houses:homes.append(str(house.id))
	for plant:Dictionary in city.plants:plants.append(str(plant.id))
	for court:Dictionary in city.courtyard_plans():courts.append(str(court.id))
	journey.vignette_serial=serial;journey.active_vignette={"id":id,"serial":serial,"anchor":[at.x,at.y],"houses_before":homes,"plants_before":plants,"courts_before":courts,"house_floor":int(city._high_watermark.house),"plant_floor":int(city._high_watermark.plant),"features_before":Features.scan(city).map(func(row):return str(row.key)),"tier":2 if int(journey.get("completed_vignettes",{}).get(id,0))>0 else 1}
	city.dirty=true;city.life_progress_dirty=true;return true
static func candidates(city:RefCounted,connected:Dictionary)->Dictionary:
	var quest:Dictionary=city.harmony_journey.get("active_vignette",{})
	if quest.is_empty():return {"count":0,"needed":1,"members":[]}
	if str(quest.id) not in IDS:return Features.candidates(city,quest,connected)
	var at:=Vector2(quest.anchor[0],quest.anchor[1]);var members:Array[String]=[];var needed:=4;var court_id:=""
	match str(quest.id):
		"vignette_river_bend_choir","vignette_highland_terrace":
			needed=4 if quest.id==IDS[0] else 3
			for house:Dictionary in city.houses:
				var id:=str(house.id);var position:=Vector2(house.origin[0],house.origin[1])
				if id in quest.houses_before or int(id.substr(1))<=int(quest.get("house_floor",0)) or house.has("signature") or not connected.has(id) or position.distance_to(at)>12.:continue
				if quest.id==IDS[0] and city.water_clearance(position)>6.:continue
				if quest.id==IDS[1] and float(house.get("base_y",0.))<1.:continue
				members.append(id)
			if quest.id==IDS[0]:
				var best:Array[String]=[];var clusters:Dictionary=city.natural_clusters()
				for id:String in members:
					var group:Array[String]=[]
					for other:String in members:
						if other in clusters[id].members:group.append(other)
					if group.size()>best.size():best=group
				members=best
			else:
				city.prepare_ground_height();var stairs:=false
				for profile:Dictionary in city._road_heights.profiles.values():
					for tread:Dictionary in profile.get("treads",[]):
						if float(tread.get("rise",0.))>=1.-.000001 and Vector2(tread.a).distance_to(at)<14.:stairs=true
				if not stairs:return {"count":mini(2,members.size()),"needed":3,"members":[],"hint":"还需连下山的1米石阶"}
		"vignette_courtyard_fountain":
			needed=1
			for court:Dictionary in city.courtyard_plans():
				if court.id not in quest.courts_before and not city.harmony_journey.receipts.has("vignette/court/"+str(court.id)) and not court.fountain.is_empty() and Vector2(court.center).distance_to(at)<12.:members.assign(court.members);court_id=str(court.id);break
		"vignette_olive_grove_craft":
			needed=4
			for house:Dictionary in city.houses:
				var position:=Vector2(house.origin[0],house.origin[1])
				if house.role!="workshop" or position.distance_to(at)>12.:continue
				var trees:=0;var fresh:=false
				for plant:Dictionary in city.plants:
					if plant.kind in ["olive","cypress","golden_tree"] and city.vegetation_visible(plant) and position.distance_to(Vector2(plant.position[0],plant.position[1]))<=8.:
						trees+=1;fresh=fresh or (str(plant.id) not in quest.plants_before and int(str(plant.id).substr(1))>int(quest.get("plant_floor",0)))
				if trees>=4 and fresh:
					members.append(str(house.id))
					for neighbor:Dictionary in city.houses:
						if str(neighbor.id) not in members and position.distance_to(Vector2(neighbor.origin[0],neighbor.origin[1]))<=8.:members.append(str(neighbor.id))
					return {"count":4,"needed":4,"members":members}
				if trees<4:return {"count":trees,"needed":4,"members":[]}
	var count:=members.size() if quest.id in [IDS[0],IDS[1]] else (1 if not members.is_empty() else 0)
	return {"count":count,"needed":needed,"members":members,"court":court_id}
static func complete(city:RefCounted,connected:Dictionary)->Dictionary:
	var status:=candidates(city,connected);var quest:Dictionary=city.harmony_journey.get("active_vignette",{})
	if quest.is_empty() or status.count<status.needed or status.members.is_empty():return {}
	var journey:Dictionary=city.harmony_journey;var id:String=quest.id
	var stopped:=journey.has("growth_cutoff")
	if stopped and not preload("res://scripts/world/city_creation_growth_cutoff.gd").pending(journey,quest):return {}
	if not str(status.get("court","")).is_empty():journey.receipts["vignette/court/"+str(status.court)]=1
	var tier:=2 if int(journey.get("completed_vignettes",{}).get(id,0))>0 else 1
	if not str(status.get("feature","")).is_empty():journey.receipts["vignette/feature/"+str(status.feature)]=1
	var counts:Dictionary=journey.get("completed_vignettes",{});counts[id]=int(counts.get(id,0))+1;journey.completed_vignettes=counts
	var blessings:Dictionary=journey.get("vignette_blessings",{})
	for house:String in status.members:
		if not blessings.has(house):blessings[house]=[]
		if id not in blessings[house]:blessings[house].append(id)
	journey.vignette_blessings=blessings
	if tier==2:
		var echoes:Dictionary=journey.get("vignette_echoes",{})
		for house:String in status.members:
			if not echoes.has(house):echoes[house]={}
			echoes[house][id]=2
		journey.vignette_echoes=echoes
	journey.active_vignette={}
	var xp:=int(ceil(float(template(id).reward_xp)*(1.5 if tier==2 else 1.)))
	var Benefits=preload("res://scripts/world/city_creation_functional_benefits.gd")
	var awarded:Dictionary=Benefits._award_recorded_xp(city,float(xp)) if stopped else Benefits.award_xp(city,float(xp))
	if stopped:journey.growth_cutoff.vignette.claimed=true
	city.dirty=true;city.life_progress_dirty=true
	return {"id":id,"members":status.members,"xp":awarded.earned,"serial":quest.serial,"tier":tier}
static func production(city:RefCounted,id:String)->float:
	return 1.+.1*Array(city.harmony_journey.get("vignette_blessings",{}).get(id,[])).size()
static func walking(city:RefCounted,id:String)->float:
	return 1.08 if IDS[1] in city.harmony_journey.get("vignette_blessings",{}).get(id,[]) else 1.
static func music(city:RefCounted,members:Array)->float:
	var best:=0.;var cap:=1.2
	for house:String in members:
		var amount:=0.
		for id:String in city.harmony_journey.get("vignette_blessings",{}).get(house,[]):
			var second:=int(city.harmony_journey.get("vignette_echoes",{}).get(house,{}).get(id,1))>=2
			amount+=.8 if second else .6
			if second:cap=1.6
		best=maxf(best,amount)
	return minf(cap,best)
