extends RefCounted
## Cell envelopes plus shipped whole-shell column feet; steps remain walk surfaces.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Extension=preload("res://scripts/world/city_creation_ancient_extension_plan.gd")
const Ancient=preload("res://scripts/visual/city_creation_ancient_architecture.gd")
const Mass=preload("res://scripts/visual/city_creation_ancient_mass.gd")
const Civic=preload("res://scripts/world/city_creation_neoclassical_civic_plan.gd")

static func collect(city:RefCounted)->Array:
	var result:Array=[]
	for house:Dictionary in city.houses:
		for cell:Dictionary in house.cells:result.append({"owner":house.id,"attachment":false,"shape":Frame.footprint(house,cell)})
		if Ancient.active(house,city.house_era(house)):
			var p:=Extension.massing(city,house)
			if house.get("architecture","")=="ionic_stoa" and not p.is_empty():
				var count:=maxi(2,ceili(p.width/1.2)+1)
				for i in range(count):_column(result,house,Vector2(p.center)+Vector2(lerpf(-p.width*.5+.20,p.width*.5-.20,float(i)/(count-1)),p.depth*.5+.58),Vector2.ONE*.147)
			elif house.get("architecture","")=="rotunda" and house.cells.size()==1:
				for x:float in [-.65,.65]:_column(result,house,Frame.origin(house)+Vector2(house.cells[0].x,house.cells[0].z)*1.8+Vector2(x,1.17),Vector2.ONE*.1485)
			elif not Extension.selected(house):
				var temple:=Mass.temple(house)
				if not temple.is_empty():
					var count:=4 if temple.width>2. else 2
					for i in range(count):
						var x:=lerpf(-temple.width*.5+.10,temple.width*.5-.10,float(i)/(count-1))
						if count==4 and i in [1,2]:x=-.32 if i==1 else .32
						_column(result,house,Vector2(temple.center)+Vector2(x,temple.depth*.5+.39),Vector2.ONE*.15525)
		if city.house_era(house)=="renaissance":
			var hall:=Civic.guild(city,house)
			if not hall.is_empty():
				for x:float in [-.56,.56]:_column(result,house,Vector2(hall.center)+Vector2(x,1.29).rotated(-float(hall.yaw)),Vector2(.12,.18),float(hall.yaw))
	for item:Dictionary in city.placed_landmarks:result.append({"owner":item.id,"attachment":false,"shape":city.PlacedLandmarks.footprint(item)})
	return result

static func _column(result:Array,house:Dictionary,at:Vector2,half:Vector2,angle:float=0.)->void:
	result.append({"owner":house.id,"attachment":true,"shape":{"center":Frame.point(house,at),"half":half,"angle":Frame.yaw(house)+angle}})

static func for_source(rows:Array,id:String,landmark:bool=false)->Array:
	# The source's own columns/steps have dedicated route/support checks.
	return rows.filter(func(r):return r.owner!=id or (not landmark and not r.attachment)).map(func(r):return r.shape)
