extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
## Visual contact distances only. State keeps its exact construction masks.
## prepare() is CPU-only; upload() and material binding belong to main thread.
const Bounds := preload("res://scripts/world/city_creation_bounds.gd")
const FIELD_RECT := Bounds.LAND_RECT
const WIDTH := Bounds.FIELD_SIZE
const HEIGHT := Bounds.FIELD_SIZE
const RANGE := 1.2
const BIN_SIZE := 1.0
const TILE_SIZE := 16
const TILE_COLUMNS := ceili(float(WIDTH)/TILE_SIZE)
const TILE_ROWS := ceili(float(HEIGHT)/TILE_SIZE)
const PIXEL_SIZE := Vector2(FIELD_RECT.size.x/WIDTH,FIELD_RECT.size.y/HEIGHT)
const INTERPOLATION_ERROR := 0.5*sqrt(PIXEL_SIZE.x*PIXEL_SIZE.x+PIXEL_SIZE.y*PIXEL_SIZE.y)+RANGE/255.0
var tiled=preload("res://scripts/visual/city_creation_tiled_field.gd").new()
var texture:Texture2DArray:
	get:return tiled.texture
	set(value):tiled.texture=value
var pixels := PackedByteArray()
var records: Dictionary = {}
var stats: Dictionary = {}
var changed := false
var _bins: Dictionary = {}

func copy_cpu_from(source: RefCounted) -> void:
	# Records never mutate after creation. Packed arrays are reference values in
	# GDScript, so a worker requires its own bytes, even when upload is deferred.
	records = source.records.duplicate()
	pixels = source.pixels.duplicate()
	tiled.copy_cpu_from(source.tiled)

func prepare(city: RefCounted) -> void:
	var started := Time.get_ticks_usec()
	var current := _records(city)
	var dirty := {}
	if pixels.is_empty():
		pixels.resize(WIDTH*HEIGHT*4)
		pixels.fill(255)
		for y in range(TILE_ROWS):
			for x in range(TILE_COLUMNS): dirty[Vector2i(x,y)] = true
	else:
		for key: String in records:
			if records[key] != current.get(key): _mark_tiles(records[key],dirty)
		for key: String in current:
			if current[key] != records.get(key): _mark_tiles(current[key],dirty)
	records = current
	changed = not dirty.is_empty()
	var recomputed := 0
	if changed:
		_rebuild_bins()
		for tile: Vector2i in dirty:
			for y in range(tile.y*TILE_SIZE,mini(HEIGHT,(tile.y+1)*TILE_SIZE)):
				for x in range(tile.x*TILE_SIZE,mini(WIDTH,(tile.x+1)*TILE_SIZE)):
					var at := pixel_world(Vector2i(x,y))
					var value := exact_at(at)
					var offset := (y*WIDTH+x)*4
					pixels[offset] = clampi(roundi(value.x*255.0),0,255)
					pixels[offset+1] = clampi(roundi(value.y*255.0),0,255)
					pixels[offset+2] = clampi(roundi(value.z*255.0),0,255)
					recomputed += 1
		_bins.clear()
	var regions:Array[Rect2i]=[]
	for tile:Vector2i in dirty:regions.append(Rect2i(tile*16,Vector2i(16,16)))
	tiled.prepare(Image.create_from_data(WIDTH,HEIGHT,false,Image.FORMAT_RGBA8,pixels),regions)
	stats = {"changed":changed,"tiles":dirty.size(),"texels":recomputed,"elapsed_ms":float(Time.get_ticks_usec()-started)/1000.0,
		"width":WIDTH,"height":HEIGHT,"field_rect":FIELD_RECT,"pixel_size":PIXEL_SIZE,"interpolation_error":INTERPOLATION_ERROR,
		"tile_columns":TILE_COLUMNS,"tile_rows":TILE_ROWS}

func upload() -> void:
	stats["upload_ms"] = 0.0
	if not changed and texture != null: return
	var started := Time.get_ticks_usec()
	tiled.upload()
	stats.merge(tiled.stats,true)
	stats["upload_ms"] = float(Time.get_ticks_usec()-started)/1000.0
	changed = false

func pixel_world(pixel: Vector2i) -> Vector2:
	return FIELD_RECT.position+(Vector2(pixel)+Vector2.ONE*0.5)*PIXEL_SIZE

func sample_world(at: Vector2) -> Vector3:
	var local := ((at-FIELD_RECT.position)/PIXEL_SIZE-Vector2.ONE*0.5).clamp(Vector2.ZERO,Vector2(WIDTH-1,HEIGHT-1))
	var lo := Vector2i(floori(local.x),floori(local.y))
	var hi := Vector2i(mini(lo.x+1,WIDTH-1),mini(lo.y+1,HEIGHT-1))
	var fraction := local-Vector2(lo)
	return _pixel(lo).lerp(_pixel(Vector2i(hi.x,lo.y)),fraction.x).lerp(_pixel(Vector2i(lo.x,hi.y)).lerp(_pixel(hi),fraction.x),fraction.y)

func _pixel(at: Vector2i) -> Vector3:
	var offset := (at.y*WIDTH+at.x)*4
	return Vector3(pixels[offset],pixels[offset+1],pixels[offset+2])/255.0

func _records(city: RefCounted) -> Dictionary:
	var result := {}
	# Junction additions are authoritative extra ground coverage, not shader-only
	# noise. One prepared context serves every road; worker records stay CPU data.
	var junctions: RefCounted = city.road_junctions()
	for house: Dictionary in city.houses:
		for cell: Dictionary in house.cells:
			if int(cell.level) != 0: continue
			var at := Vector2(house.origin[0],house.origin[1])+Vector2(cell.x,cell.z)*1.8
			result["h/"+str(house.id)+"/"+str(cell.x)+"/"+str(cell.z)] = [0,Frame.footprint(house,cell)]
	for road: Dictionary in city.roads:
		for index in range(maxi(1,road.points.size()-1)):
			var a := Vector2(road.points[index][0],road.points[index][1])
			var next := mini(index+1,road.points.size()-1)
			var b := Vector2(road.points[next][0],road.points[next][1])
			result["r/"+str(road.id)+"/"+str(index)] = [1,a,b,float(road.get("width",1.25))*0.5]
		var extra: Array = junctions.additions(str(road.id))
		for index in range(extra.size()): result["j/"+str(road.id)+"/"+str(index)] = [1,extra[index]]
	for plant: Dictionary in city.plants:
		var at := Vector2(plant.position[0],plant.position[1])
		# Low shrubs share a broad root bed; tree roots stay narrow.
		var radius := (0.20 if plant.kind == "shrub" else 0.12)*float(plant.get("scale",1.0))
		result["p/"+str(plant.id)] = [2,at,at,radius]
	return result

func _bounds(record: Array) -> Rect2:
	if int(record[0]) == 0:return Frame.bounds(record[1]).grow(RANGE+maxf(PIXEL_SIZE.x,PIXEL_SIZE.y))
	if record.size()==2:
		var polygon: PackedVector2Array=record[1]
		var bounds:=Rect2(polygon[0],Vector2.ZERO)
		for point: Vector2 in polygon: bounds=bounds.expand(point)
		return bounds.grow(RANGE+maxf(PIXEL_SIZE.x,PIXEL_SIZE.y))
	return Rect2(record[1],Vector2.ZERO).expand(record[2]).grow(float(record[3])+RANGE+maxf(PIXEL_SIZE.x,PIXEL_SIZE.y))

func _mark_tiles(record: Array, dirty: Dictionary) -> void:
	var bounds := _bounds(record).intersection(FIELD_RECT)
	if not bounds.has_area(): return
	var lo := Vector2i(((bounds.position-FIELD_RECT.position)/PIXEL_SIZE/float(TILE_SIZE)).floor()).clamp(Vector2i.ZERO,Vector2i(TILE_COLUMNS-1,TILE_ROWS-1))
	var hi := Vector2i(((bounds.end-FIELD_RECT.position)/PIXEL_SIZE/float(TILE_SIZE)).floor()).clamp(Vector2i.ZERO,Vector2i(TILE_COLUMNS-1,TILE_ROWS-1))
	for y in range(lo.y,hi.y+1):
		for x in range(lo.x,hi.x+1):
			# The AABB of a diagonal stroke may cover the whole town. Only
			# tiles intersecting a conservative capsule are dirty, never its
			# entire rectangle. Texel filtering gets one additional pixel pad.
			if int(record[0]) != 0:
				var half_tile := PIXEL_SIZE*float(TILE_SIZE)*0.5
				var center := FIELD_RECT.position+(Vector2(x,y)+Vector2.ONE*0.5)*PIXEL_SIZE*float(TILE_SIZE)
				if record.size()==2:
					if _polygon_distance(center,record[1])>half_tile.length()+RANGE+maxf(PIXEL_SIZE.x,PIXEL_SIZE.y): continue
				else:
					var reach := half_tile.length()+float(record[3])+RANGE+maxf(PIXEL_SIZE.x,PIXEL_SIZE.y)
					if center.distance_squared_to(Geometry2D.get_closest_point_to_segment(center,record[1],record[2])) > reach*reach: continue
			dirty[Vector2i(x,y)] = true

func _rebuild_bins() -> void:
	_bins.clear()
	for record: Array in records.values():
		var bounds := _bounds(record).intersection(FIELD_RECT)
		if not bounds.has_area(): continue
		var lo := Vector2i((bounds.position/BIN_SIZE).floor())
		var hi := Vector2i((bounds.end/BIN_SIZE).floor())
		for y in range(lo.y,hi.y+1):
			for x in range(lo.x,hi.x+1):
				var key := Vector2i(x,y)
				if not _bins.has(key): _bins[key] = []
				_bins[key].append(record)

func exact_at(at: Vector2) -> Vector3:
	var value := Vector3.ONE*RANGE
	for record: Array in _bins.get(Vector2i((at/BIN_SIZE).floor()),[]):
		var distance: float
		var channel := int(record[0])
		if channel == 0:
			distance=Frame.distance(record[1],at)
		elif record.size()==2:
			distance = _polygon_distance(at,record[1])
		else:
			var a: Vector2 = record[1]
			var b: Vector2 = record[2]
			var delta := b-a
			var length_squared := delta.length_squared()
			var t := clampf((at-a).dot(delta)/length_squared,0.0,1.0) if length_squared > 0.000001 else 0.0
			distance = maxf(0.0,at.distance_to(a+delta*t)-float(record[3]))
		value[channel] = minf(value[channel],distance)
	return value/RANGE

func _polygon_distance(at: Vector2, polygon: PackedVector2Array) -> float:
	if Geometry2D.is_point_in_polygon(at,polygon): return 0.0
	var distance:=INF
	for index in range(polygon.size()):
		var nearest:=Geometry2D.get_closest_point_to_segment(at,polygon[index],polygon[(index+1)%polygon.size()])
		distance=minf(distance,at.distance_to(nearest))
	return distance
