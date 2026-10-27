extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
## Pure copied city values become a catalogue; playback remains on Music.
const Choir=preload("res://scripts/audio/city_creation_cluster_choir.gd")
const Towers=preload("res://scripts/world/city_creation_towers.gd")
const Arrangement=preload("res://scripts/audio/city_creation_arrangement.gd")
const Canon=preload("res://scripts/audio/city_creation_circular_canon.gd")
static func signature(city:RefCounted)->int:
	return hash([city.houses,city.roads,city.waters,city.plants,city.biome_seed,city.music_mode,city.automatic_neighborhoods,city.districts,city.musical_links,city.house_improvements,city.house_culture,city.house_clockwork,city.building_quality])
static func prepare(state:RefCounted,prepared_towers:Variant=null)->Dictionary:
	var records:Dictionary={}
	var legato_curves:Dictionary=preload("res://scripts/audio/city_creation_chamber_context.gd").curves(state.roads)
	var daily:Array[String]=[]
	var targets:Dictionary={}
	var tower_count:=0
	var rooms := 0
	var upper := 0
	var terraces := 0
	var houses: Array = state.get("houses")
	var clusters:Dictionary=state.natural_clusters()
	var groups: Dictionary = {}
	var towers: Dictionary = Towers.derive(houses,state.roads) if prepared_towers==null else prepared_towers
	for house: Dictionary in houses:
		daily.append(str(house.id))
		var district: Dictionary = state.district_for_house(str(house.id))
		var district_id:=str(district.get("id",clusters[str(house.id)].id))
		if not groups.has(district_id): groups[district_id]={"houses":[],"style":state.house_acoustic_style(house),"adaptive":bool(district.get("adaptive",false))}
		groups[district_id].houses.append(house)
		var count: int = towers.get(str(house.id),[]).size()
		if house.get("signature","")=="bell_keep":count=maxi(1,count)
		tower_count+=count
		var positions: Array[Vector2] = []
		for cell: Dictionary in towers.get(str(house.id),[]):
			positions.append(Frame.center(house,cell))
		if positions.is_empty() and house.get("signature","")=="bell_keep":positions.append(Vector2(house.origin[0],house.origin[1]))
		records[str(house.id)] = {"position":Vector2(float(house.origin[0]),float(house.origin[1])),
			"level_tier":state.level_tier(str(house.id)),"signature":str(house.get("signature","")),"era_theme":state.house_era(house),"culture":state.culture_level(str(house.id)),"mechanisms":state.mechanism_level(str(house.id)),"base_y":float(house.get("base_y",0.0)),"district_id":str(district.get("id","")),"style":state.house_acoustic_style(house),"improvement":int(state.improvement_level(str(house.id))),"role":str(house.role),"towers":count,"tower_positions":positions}
		var row:Dictionary=records[str(house.id)]
		row.organic_legato=preload("res://scripts/audio/city_creation_chamber_context.gd").house(state,house,legato_curves)
		row.prototype=preload("res://scripts/world/city_creation_prototype_resonance.gd").prototype(state,house)
		row.echo_radius_bonus=preload("res://scripts/world/city_creation_prototype_resonance.gd").echo_radius_bonus(row.prototype)
		row.cluster_id=clusters[str(house.id)].id;row.cluster_size=clusters[str(house.id)].size
		row.cluster_members=clusters[str(house.id)].members
		row.cluster_order=clusters[str(house.id)].ordered_members
		row.cluster_rank=row.cluster_order.find(str(house.id))
		row.temperament=preload("res://scripts/world/city_creation_spatial_voice.gd").motion(state,house)
		row.rooms=0;row.upper_rooms=0;row.max_level=0
		row.water_distance=state.water_clearance(row.position)
		var biome:Dictionary=state.biome_bonus(str(house.id))
		row.biome_forest=bool(biome.get("forest",false));row.radius_multiplier=float(biome.get("radius",1.))
		for cell: Dictionary in house.cells:
			if cell.kind == "terrace":
				terraces += 1
			else:
				rooms += 1
				row.rooms+=1;row.max_level=maxi(int(row.max_level),int(cell.level))
				if int(cell.level) > 0:
					upper += 1
					row.upper_rooms+=1
	for group: Dictionary in groups.values():
		var arrangement: Dictionary=Arrangement.compose(group.houses,group.style,group.adaptive)
		for house: Dictionary in group.houses: records[str(house.id)]["mix"]=arrangement
	for id:String in records:records[id].chords=state.planning_bonus(id).get("chord_scopes",{}).keys()
	# Even the starting six houses have the full musical phrase. Building adds
	# gentle color rather than requiring construction to unlock sound.
	targets.foundation = -10.0
	targets.wood = lerpf(-14.0, -10.0, clampf(float(rooms) / 30.0, 0.0, 1.0))
	targets.air = lerpf(-21.0, -13.0, clampf(float(upper) / 10.0, 0.0, 1.0))
	targets.terrace = lerpf(-26.0, -15.0, clampf(float(terraces) / 8.0, 0.0, 1.0))
	daily.sort()
	return {"signature":signature(state),"houses":records,"daily":daily,"targets":targets,"tower_count":tower_count,"canon":Canon.derive(state)}
