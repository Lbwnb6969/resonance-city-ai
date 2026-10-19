extends RefCounted
## Spatial recipes prepare with the published planning geometry. Atelier
## connectivity is resolved against Life's actual street components afterward.
const Towers=preload("res://scripts/world/city_creation_towers.gd")
const Arcade=preload("res://scripts/world/city_creation_arcade_plan.gd")
const Skybridge=preload("res://scripts/world/city_creation_skybridge_plan.gd")
const Renaissance=preload("res://scripts/world/city_creation_renaissance_plan.gd")
static func evaluate(city:RefCounted)->Dictionary:
	var result:Dictionary={};var lookout_districts:Dictionary={};var arcades:Dictionary={}
	var towers:Dictionary=Towers.derive(city.houses,city.roads);var rings:Array=city.Roundabouts.all(city.roads)
	var tops:Dictionary={}
	for house:Dictionary in city.houses:
		var top:=float(house.get("base_y",0.))
		for cell:Dictionary in house.cells:
			if cell.kind=="room":top=maxf(top,float(house.get("base_y",0.))+(int(cell.level)+1)*1.7)
		tops[str(house.id)]=top
	for house:Dictionary in city.houses:
		var id:=str(house.id);var at:=Vector2(house.origin[0],house.origin[1]);var did:=str(city.district_for_house(id).get("id",""))
		var ring:=false
		for marker:Dictionary in rings:
			if at.distance_to(marker.center)<=float(marker.radius)+3.:ring=true;break
		var row:={"venue_echo":false,"lookout":false,"arcade_neighbors":[],"clock_hub":false,"hall_ecology":false,"label":""}
		if not house.has("signature") and str(house.role)=="venue":
			row.venue_echo=float(house.get("base_y",0.))>=1. or ring
			if row.venue_echo:row.label="高台回音壁 · 召集28米 · 巡演休息缩短25%"
		var crowns:Array=towers.get(id,[]) if not house.has("signature") and city.house_era(house) not in ["clockwork","modern_eco"] else []
		var domes:Array=[]
		if not crowns.is_empty() and city.house_era(house)=="renaissance":
			for dome:Dictionary in Renaissance.for_house(city,house):domes.append_array(dome.cell_ids)
		for cell:Dictionary in crowns:
			if str(cell.id) in domes:continue
			var center:=Vector2(at.x+int(cell.x)*1.8,at.y+int(cell.z)*1.8);var high:=float(house.get("base_y",0.))+(int(cell.level)+1)*1.7
			var tallest:=true
			for other:Dictionary in city.houses:
				if str(other.id)==id:continue
				for part:Dictionary in other.cells:
					var point:=Vector2(other.origin[0]+int(part.x)*1.8,other.origin[1]+int(part.z)*1.8)
					if center.distance_to(point)<=8. and high<float(tops[str(other.id)])+1.7-.001:tallest=false;break
				if not tallest:break
			if tallest and not did.is_empty():row.lookout=true;lookout_districts[did]=true;row.label+="\n制高点瞭望 · 本街坊通勤步速+10%";break
		if str(house.role)=="atelier":
			for other:Dictionary in city.houses:
				var oid:=str(other.id)
				if oid==id or other.has("signature") or city.house_era(other)=="modern_eco":continue
				if not arcades.has(oid):arcades[oid]=Arcade.for_house(city,other)
				if not arcades[oid].is_empty():row.arcade_neighbors.append(oid)
		if str(house.role)=="clockmaker":
			row.clock_hub=ring
			for road:Dictionary in city.roads:
				if road.get("style","")=="tram" and float(road.width)>=2.1-.001 and city._water_stroke_distance(at,road.points)<=float(road.width)*.5+3.:row.clock_hub=true;break
			if row.clock_hub:row.label="轨街枢纽 · 八音盒送装30米 · 本街区电车提速15%"
		if str(house.role)=="symphony_hall":
			row.hall_ecology=city.water_clearance(at)<4.5
			if not row.hall_ecology:
				for other:Dictionary in city.houses:
					if city.house_era(other)!="modern_eco":continue
					for bridge:Dictionary in Skybridge.for_house(city,other):
						if id in [str(bridge.from_house),str(bridge.to_house)]:row.hall_ecology=true;break
					if row.hall_ecology:break
			if row.hall_ecology:row.label="生态天际连廊 · 演出32米 · 住宅落幕余韵翻倍"
		result[id]=row
	return {"houses":result,"lookout_districts":lookout_districts,"towers":towers,"arcades":arcades}
