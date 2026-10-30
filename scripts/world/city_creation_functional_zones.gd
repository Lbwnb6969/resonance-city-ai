extends RefCounted
## Read-only spatial membership. Never writes roles, author districts or receipts.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Prototype=preload("res://scripts/world/city_creation_prototype_resonance.gd")
const Architecture=preload("res://scripts/world/city_creation_architecture_choice.gd")
const Arcade=preload("res://scripts/world/city_creation_arcade_plan.gd")
const Civic=preload("res://scripts/world/city_creation_neoclassical_civic_plan.gd")
const Ancient=preload("res://scripts/visual/city_creation_ancient_architecture.gd")
const NAMES:={"courtyard":"栖居庭院","waterfront":"水岸市集茶座","artisan":"百工钟楼匠造","civic":"卫城礼乐圣殿"}
const CRAFT:=["sawtooth_atrium","clock_turret","iron_conservatory","twin_gable"]
const CIVIC:=["ionic_stoa","roman_basilica","rotunda","guildhall"]
const ARCADE:=["venetian_loggia","peristyle"]

static func for_city(city:RefCounted)->Dictionary:
	var ready:bool=city._region_network_revision==city.revision
	var key:Array=[city.revision,city._region_network_revision]
	var cached:Dictionary=city.get_meta("functional_zones",{})
	if cached.get("key",[])==key:return cached.value
	var result:={"enabled":city.CreationPolicy.is_free(city),"network_ready":ready,"houses":{},"zones":[],"spaces":[],"space_contracts":{"courtyard":"closed_ring_single_half_and_lane","waterfront":"public_shore_face","artisan":"pending","civic":"pending"}}
	if not result.enabled:return result
	var components:Dictionary=city._region_network.get("house_components",{}) if ready else {}
	var footprints:Dictionary={}
	for house:Dictionary in city.houses:
		var id:String=house.id;var boxes:Array=[];var water:=INF;var tram:Array=[]
		for cell:Dictionary in house.cells:
			if int(cell.level)!=0 or cell.kind!="room":continue
			var box:Variant=Frame.footprint(house,cell);boxes.append(box)
			water=minf(water,_water_distance(city,box))
			for road:Dictionary in city.roads:
				if road.get("style","path")=="tram" and city._water_stroke_distance(Frame.center(house,cell),road.points)<=float(road.width)*.5+2.7 and not tram.has(road.id):tram.append(road.id)
		footprints[id]=boxes
		var landmarks:Array=[]
		for landmark:Dictionary in city.placed_landmarks:
			var at:=Vector2(landmark.position[0],landmark.position[1])
			if boxes.any(func(box):return Frame.distance(box,at)<=6.):landmarks.append(landmark.id)
		var arcades:Array=Arcade.for_house(city,house) if city.house_era(house)!="modern_eco" else []
		var prototype:String=_prototype(city,house,arcades);var role:String=house.role
		var reasons:Dictionary={}
		var arcade:bool=prototype in ARCADE or not arcades.is_empty()
		if role=="residential":reasons.courtyard=["residential"]
		if water<=5.2 or arcade or role=="garden_cafe":reasons.waterfront=["water" if water<=5.2 else "arcade" if arcade else "authored_cafe"]
		if prototype in CRAFT or role in ["workshop","clockmaker"] or not tram.is_empty():reasons.artisan=["prototype" if prototype in CRAFT else "authored_role" if role in ["workshop","clockmaker"] else "tram"]
		if prototype in CIVIC or role in ["atelier","venue","symphony_hall"] or float(house.get("base_y",0.))>=1.5 or not landmarks.is_empty():reasons.civic=["prototype" if prototype in CIVIC else "authored_role" if role in ["atelier","venue","symphony_hall"] else "plateau" if float(house.get("base_y",0.))>=1.5 else "landmark"]
		if reasons.is_empty():reasons.courtyard=["dwelling_form"]
		result.houses[id]={"id":id,"prototype":prototype,"role":role,"kinds":reasons.keys().map(func(k):return str(k)),"reasons":reasons,"water_distance":water,"base_y":float(house.get("base_y",0.)),"tram_roads":tram,"landmarks":landmarks,"connected":components.has(id),"component":str(components.get(id,""))}
	# Separate nearby physical clusters within each street component. Remote
	# houses on one long road don't become a single courtyard by sharing a tag.
	var ids:Array=result.houses.keys();ids.sort()
	for kind:String in NAMES:
		var seen:Dictionary={}
		for id:String in ids:
			if seen.has(id) or kind not in result.houses[id].kinds:continue
			var members:Array=[id];seen[id]=true;var cursor:=0
			while cursor<members.size():
				var current:String=members[cursor];cursor+=1
				for candidate:String in ids:
					if seen.has(candidate) or kind not in result.houses[candidate].kinds:continue
					if result.houses[current].component!=result.houses[candidate].component:continue
					if not _adjacent(footprints[current],footprints[candidate]):continue
					seen[candidate]=true;members.append(candidate)
			members.sort()
			result.zones.append({"id":kind+":"+str(members[0]),"kind":kind,"members":members,"active":result.houses[id].connected,"component":result.houses[id].component})
	result.spaces=preload("res://scripts/world/city_creation_courtyard_contract.gd").derive(city,result,func(box):return _water_distance(city,box))
	result.spaces.append_array(preload("res://scripts/world/city_creation_waterfront_contract.gd").derive(city,result,func(box):return _water_distance(city,box)))
	city.set_meta("functional_zones",{"key":key,"value":result});return result

static func _adjacent(a:Array,b:Array)->bool:
	for first:Variant in a:
		for second:Variant in b:
			if Frame.boxes_overlap(Frame.grow(first,3.6),second):return true
	return false

static func _prototype(city:RefCounted,house:Dictionary,arcades:Array)->String:
	var selected:String=house.get("architecture","")
	if selected in Architecture.ANCIENT.IDS:return selected if Ancient.active(house,city.house_era(house)) and not Architecture.ANCIENT.massing(city,house).is_empty() else ""
	if selected=="peristyle":return selected if not Civic.terraces(house,arcades).is_empty() else ""
	if selected=="guildhall":return selected if not Civic.guild(city,house).is_empty() else ""
	if not selected.is_empty() and selected in Architecture.choices(city,house):return selected
	return Prototype.prototype(city,house)

static func _water_distance(city:RefCounted,box:Variant)->float:
	var best:=_river_distance(city,box)
	for water:Dictionary in city.waters:
		var distance:=INF;var points:Array=water.points
		for point:Array in points:distance=minf(distance,Frame.distance(box,Vector2(point[0],point[1])))
		for i in range(1,points.size()):
			var a:=Vector2(points[i-1][0],points[i-1][1]);var b:=Vector2(points[i][0],points[i][1])
			if Frame.segment(box,a,b):distance=0.;break
			for corner:Vector2 in Frame.corners(box):distance=minf(distance,corner.distance_to(Geometry2D.get_closest_point_to_segment(corner,a,b)))
		best=minf(best,distance-float(water.width)*.5)
	return best

static func _river_distance(city:RefCounted,box:Variant)->float:
	# Match State.river_x's analytic bank field, including edge-interior extrema.
	# Corner-only queries miss up to 6mm at a meander's turn on a single room.
	var polygon:=Frame.corners(box);var best:=INF
	for i in range(polygon.size()):
		var a:Vector2=polygon[i];var b:Vector2=polygon[(i+1)%polygon.size()];var times:Array=[0.,1.]
		var dz:float=float(b.y)-float(a.y)
		if absf(dz)>.000001:
			var slope:float=(float(b.x)-float(a.x))/dz
			if absf(slope)<=.52*.17:
				var theta:=acos(slope/(.52*.17));var low:=minf(a.y,b.y)*.17;var high:=maxf(a.y,b.y)*.17
				for sign_value:float in [-1.,1.]:
					for n in range(floori((low-sign_value*theta)/TAU),ceili((high-sign_value*theta)/TAU)+1):
						var t:float=((sign_value*theta+TAU*n)/.17-float(a.y))/dz
						if t>0. and t<1.:times.append(t)
		times.sort();var previous:float=a.x-city.river_x(a.y)
		for t:float in times:
			var at:=a.lerp(b,t);var value:float=at.x-city.river_x(at.y)
			if previous*value<=0.:return -city.RIVER_HALF_WIDTH
			best=minf(best,absf(value));previous=value
	return best-city.RIVER_HALF_WIDTH
