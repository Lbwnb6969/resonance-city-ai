extends RefCounted
## A seed creates ordinary editable world records. It never synthesizes earned
## visits, production, eras or quality history. The small descriptor survives saves.
const IDS:=["sunny_banks","terraced_peaks","misty_archipelago","sylvan_sanctuary","starlight_nocturne","daily_resonance"]
const NAMES:=["晴翠双岸","叠翠千阶","烟水群岛","林间秘境","星夜流光","每日随机共鸣"]
const GLYPHS:=["water","terrain","water","vegetation","sundial_night","district"]
const DESCRIPTIONS:=["晴光与双岸，留白从三座家开始。","三级天然台地，高地生产提速40%。","四片沙洲环水，水岸与过桥余韵加成翻倍。","保留林木唤醒10米森林和声，可提前营建植物宫。","星夜萤火，灯街、花房与暖窗声域扩大50%。","今日独有的地形组合，并赠送一座真实地标。"]
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")

static func music_name(seed:Dictionary)->String:
	var voice:int=profile(seed).voice
	return "D大调 · 双岸晨曲" if voice==0 else Palette.NAMES[Palette.BIOME_MODES[voice]]

static func descriptor(id:String,day:String="")->Dictionary:
	if id not in IDS:return {}
	return {"id":id,"day":Time.get_date_string_from_system() if day.is_empty() else day} if id=="daily_resonance" else {"id":id}

static func valid(value:Variant)->bool:
	if not value is Dictionary or value.get("id") not in IDS:return false
	if value.id!="daily_resonance":return value.size()==1
	if value.size()!=2 or not value.get("day") is String:return false
	var day:String=value.day
	if day.length()!=10 or day.substr(4,1)!="-" or day.substr(7,1)!="-":return false
	for digit:int in [0,1,2,3,5,6,8,9]:
		if day.unicode_at(digit)<48 or day.unicode_at(digit)>57:return false
	var year:=int(day.substr(0,4));var month:=int(day.substr(5,2));var date:=int(day.substr(8,2))
	if year<1970 or month<1 or month>12:return false
	var lengths:Array=[31,29 if year%4==0 and (year%100!=0 or year%400==0) else 28,31,30,31,30,31,31,30,31,30,31]
	return date>=1 and date<=int(lengths[month-1])

static func profile(seed:Dictionary)->Dictionary:
	var result:={"terraces":false,"islands":false,"forest":false,"night":false,"gift":"","voice":0}
	match str(seed.get("id","")):
		"terraced_peaks":result.terraces=true;result.voice=1
		"misty_archipelago":result.islands=true;result.voice=2
		"sylvan_sanctuary":result.forest=true;result.voice=3
		"starlight_nocturne":result.night=true;result.voice=4
		"daily_resonance":
			var random:=RandomNumberGenerator.new();random.seed=str(seed.day).hash()
			var draw:=int(random.randi()%2147483647)
			var features:Array=["terraces","islands","forest"]
			result[features[draw%3]]=true;result[features[(draw%3+1+(draw/3)%2)%3]]=true
			result.night=draw%2==0;result.voice=(draw/7)%5
			result.gift=["bell_keep","watermill","music_academy","botanical_palace","clockwork_depot","floating_amphitheater"][(draw/11)%6]
	return result

static func grants(seed:Dictionary,kind:String)->bool:
	if seed.is_empty() or kind.is_empty():return false
	var features:=profile(seed)
	return kind==features.gift or (kind=="botanical_palace" and features.forest)

static func create(city:RefCounted,id:String,day:String="")->Dictionary:
	var seed:=descriptor(id,day)
	if not valid(seed):return {"ok":false,"message":"声学地貌或日期无效"}
	city.initialize_empty();city.biome_seed=seed
	var features:=profile(seed)
	if features.terraces:_terraces(city)
	if features.islands:_islands(city)
	if features.forest:_forest(city)
	if features.night:city.microclimate="starlight_fireflies"
	city.revision+=1
	city.Signatures.refresh(city)
	if not str(features.gift).is_empty():
		var placed:=_gift(city,str(features.gift))
		if not placed.ok:return placed
	city._undo.clear();city._redo.clear();city.dirty=true
	return {"ok":true,"message":"已开启 · "+NAMES[IDS.find(id)]}

static func _terraces(city:RefCounted)->void:
	for tier in range(3):
		var z:float=-15.+float(tier)*14.
		var height:float=1.2+float(tier)
		while height>.001:
			city.terrain_strokes.append({"points":[[-25.,z],[-14.,z]],"mode":"plateau","radius":6.,"strength":snappedf(minf(1.,height),.001),"natural":true})
			height-=1.

static func _islands(city:RefCounted)->void:
	for center:Vector2 in [Vector2(-12,-14),Vector2(12,-14),Vector2(-12,14),Vector2(12,14)]:
		var points:Array=[];var island:int=city._next_water_id
		var phase:float=float(island)*1.31
		for i in range(49):
			var angle:float=TAU*float(i)/48.
			var radial:float=1.+.10*sin(3.*angle+phase)+.06*sin(5.*angle-phase)
			var at:=center+Vector2((8.6+float(island%3)*.3)*cos(angle),(6.4+float(island%2)*.6)*sin(angle)).rotated(.08*sin(phase))*radial
			points.append([at.x,at.y])
		var serial:int=city._next_water_id
		city.waters.append({"id":"w%d"%serial,"points":points,"width":3.,"kind":"channel","source":"player","seed":7400+serial})
		city._next_water_id+=1;city._high_watermark.water=serial

static func _forest(city:RefCounted)->void:
	var rng:=RandomNumberGenerator.new();rng.seed=740031
	for z in range(-32,34,4):
		for x in range(-32,34,4):
			var at:=Vector2(x+rng.randf_range(-.8,.8),z+rng.randf_range(-.8,.8))
			# A clear near-bank starting glade remains available for the first homes.
			if absf(at.x)<11. and absf(at.y)<10.:continue
			if city.water_clearance(at)<2.:continue
			var serial:int=city._next_plant_id
			city.plants.append({"id":"p%d"%serial,"position":[at.x,at.y],"kind":["olive","cypress","golden_tree"][serial%3],"scale":rng.randf_range(.8,1.2),"seed":74000+serial*97,"source":"seed"})
			city._next_plant_id+=1;city._high_watermark.plant=serial

static func _gift(city:RefCounted,kind:String)->Dictionary:
	# Real placement, using the same footprint, bank and stage tests as the player.
	for z:float in [0.,6.,-6.,24.,-24.,32.,-32.]:
		for x:float in [-7.,7.,-6.,6.,-8.,8.,-5.,5.,-10.,10.,-18.,18.,-30.,30.]:
			var at:=Vector2(x,z)
			if city.preview_signature(kind,at).ok:return city.place_signature(kind,at)
	return {"ok":false,"message":"今日地标未找到完整岸线落点"}

static func evaluate(city:RefCounted)->Dictionary:
	var result:Dictionary={}
	if city.biome_seed.is_empty():return result
	var features:=profile(city.biome_seed);var trees:Array[Vector2]=[]
	if features.forest:
		for plant:Dictionary in city.plants:
			if plant.get("source","seed")=="seed" and plant.kind in ["olive","cypress","golden_tree"] and city.vegetation_visible(plant):trees.append(Vector2(plant.position[0],plant.position[1]))
	var conservatory=preload("res://scripts/world/city_creation_conservatory_plan.gd")
	for house:Dictionary in city.houses:
		var id:=str(house.id);var at:=Vector2(house.origin[0],house.origin[1])
		var row:={"production":1.,"water_bonus":1.,"forest":false,"radius":1.,"crossing_bonus":1.}
		if features.terraces and float(house.get("base_y",0.))>=1.:row.production=1.4
		if features.islands:row.water_bonus=2.;row.crossing_bonus=2.
		if features.forest:
			for tree:Vector2 in trees:
				if at.distance_squared_to(tree)<=100.:row.forest=true;break
		if features.night:
			# All real occupied homes have warm windows; sky-open glazed terraces
			# and lamp streets keep the same larger voice radius when reassigned.
			var warm:bool=house.role=="residential" or not conservatory.for_house(city,house).is_empty()
			for road:Dictionary in city.roads:
				if road.get("style","") in ["promenade","avenue","tram"] and city._water_stroke_distance(at,road.points)<=float(road.width)*.5+3.:warm=true;break
			if warm:row.radius=1.5
		var labels:PackedStringArray=[]
		if row.production>1.:labels.append("高地地貌 · 生产+40%")
		if row.water_bonus>1.:labels.append("沙洲水岸 · 活水与过桥增益×2")
		if row.forest:labels.append("保留林木 · 10米森林和声")
		if row.radius>1.:labels.append("星夜声域 · 共鸣半径+50%")
		row.label=" · ".join(labels)
		result[id]=row
	return result
