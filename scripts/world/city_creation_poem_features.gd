extends RefCounted
## Derived physical witnesses. Feature identities survive undo, reload and refresh.
const Catalog=preload("res://scripts/world/city_creation_vignette_catalog.gd")
const Arcade=preload("res://scripts/world/city_creation_arcade_plan.gd")
static func _add(out:Array,index:int,key:String,at:Vector2,members:Array,need:int=1)->void:
	if not members.is_empty():out.append({"id":str(Catalog.TEMPLATES[index].id),"key":key,"at":at,"members":members.duplicate(),"need":need})
static func neighbors(city:RefCounted,at:Vector2,radius:float=12.)->Array[String]:
	var result:Array[String]=[]
	for house:Dictionary in city.houses:
		if at.distance_to(Vector2(house.origin[0],house.origin[1]))<=radius:result.append(str(house.id))
	return result
static func scan(city:RefCounted)->Array:
	var cached:Dictionary=city.get_meta("poem_features",{})
	if cached.get("revision",-1)==city.revision:return cached.rows
	var out:Array=[];var arcades:Dictionary={}
	for house:Dictionary in city.houses:
		var id:=str(house.id);var at:=Vector2(house.origin[0],house.origin[1])
		if house.role=="bakery":
			for water:Dictionary in city.waters:
				if water.kind=="pond" and city._water_stroke_distance(at,water.points)-float(water.width)*.5<preload("res://scripts/world/city_creation_tradition_rules.gd").water_radius(city):_add(out,5,"pond/"+id+"/"+str(hash([water.points,float(water.width)])),at,[id])
		if city.house_era(house)=="renaissance":
			if Arcade.for_house(city,house).any(func(p):return p.source=="promenade"):arcades[id]=at
			for dome:Dictionary in preload("res://scripts/world/city_creation_renaissance_plan.gd").for_house(city,house):
				var ids:Array=dome.cell_ids.duplicate();ids.sort();_add(out,8,"dome/"+id+"/"+",".join(ids),dome.center,[id])
		if city.house_era(house)=="clockwork":
			var glass:Dictionary=preload("res://scripts/world/city_creation_conservatory_plan.gd").for_house(city,house)
			if not glass.is_empty():
				var ids:Array=glass.cell_ids.duplicate();ids.sort();_add(out,9,"glass/"+id+"/"+",".join(ids),glass.center,[id])
		if city.house_era(house)=="modern_eco":
			for bridge:Dictionary in preload("res://scripts/world/city_creation_skybridge_plan.gd").for_house(city,house):_add(out,11,"sky/"+str(bridge.from_cell)+"/"+str(bridge.to_cell),(Vector2(bridge.a)+Vector2(bridge.b))*.5,[bridge.from_house,bridge.to_house],2)
	for road:Dictionary in city.roads:
		for bridge:Dictionary in city.road_profile(road).get("bridge_runs",[]):
			if int(bridge.arch_count)!=2:continue
			var middle:Vector2=preload("res://scripts/world/city_creation_bridge_plan.gd")._point(bridge.samples,(float(bridge.start)+float(bridge.end))*.5).at
			_add(out,4,"arch/"+str(bridge.id),middle,neighbors(city,middle,14.),2)
		var trees:Array[String]=[];var flowers:=false;var center:=Vector2.ZERO
		for plant:Dictionary in city.plants:
			var at:=Vector2(plant.position[0],plant.position[1])
			if city._water_stroke_distance(at,road.points)>4. or not city.vegetation_visible(plant):continue
			if plant.kind=="golden_tree":trees.append(str(plant.id));center+=at
			elif str(plant.kind).ends_with("_flower"):flowers=true
		if trees.size()>=4 and flowers:
			center/=float(trees.size());trees.sort();_add(out,6,"gold/"+str(road.id)+"/"+",".join(trees.slice(0,4)),center,neighbors(city,center))
		var near:Array[String]=[]
		for id:String in arcades:
			if city._water_stroke_distance(arcades[id],road.points)<=float(road.width)*.5+1.5:near.append(id)
		near.sort()
		if near.size()>=2:_add(out,7,"arcade/"+str(road.id)+"/"+near[0]+"/"+near[1],(Vector2(arcades[near[0]])+Vector2(arcades[near[1]]))*.5,near.slice(0,2),2)
		if road.get("style","")=="tram":
			for house:Dictionary in city.houses:
				var at:=Vector2(house.origin[0],house.origin[1])
				if house.role=="clockmaker" and city._water_stroke_distance(at,road.points)<=6.:_add(out,10,"tram/"+str(road.id)+"/"+str(house.id),at,[str(house.id)])
	city.set_meta("poem_features",{"revision":city.revision,"rows":out});return out
static func candidates(city:RefCounted,quest:Dictionary,connected:Dictionary)->Dictionary:
	var anchor:=Vector2(quest.anchor[0],quest.anchor[1]);var existing:Array=quest.get("features_before",[])
	for feature:Dictionary in scan(city):
		if feature.id!=quest.id or anchor.distance_to(feature.at)>14. or feature.key in existing or city.harmony_journey.receipts.has("vignette/feature/"+str(feature.key)):continue
		var members:Array=feature.members.filter(func(id):return connected.has(id))
		if members.size()<int(feature.need):continue
		if feature.id==Catalog.TEMPLATES[5].id and city.bakery_status(str(feature.members[0])).produced<1:continue
		return {"count":1,"needed":1,"members":members,"feature":str(feature.key)}
	return {"count":0,"needed":1,"members":[],"hint":"完成新的造景，再接通街坊小路"}
