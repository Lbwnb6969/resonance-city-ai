extends RefCounted
## Padded 8m texture-array layers keep the 2m era blend continuous across tiles.
const ERAS:=["pastoral","renaissance","clockwork","modern_eco"]
const TILE:=8.
const COLUMNS:=10
const TEXELS:=18
const PIXEL:=.5
const ORIGIN:=Vector2(-40,-40)
var images:Array[Image]=[]
var texture:Texture2DArray
var previous:Dictionary={}
var changed_layers:Array[int]=[]
var enabled:=false
var stats:Dictionary={"prepared_layers":0,"uploaded_layers":0,"uploaded_bytes":0,"prepare_ms":0.}
func copy_cpu_from(source:RefCounted)->void:
	images=source.images.duplicate();previous=source.previous.duplicate(true);enabled=source.enabled
	changed_layers.clear();stats=source.stats.duplicate(true)
static func weights(city:RefCounted,at:Vector2)->Vector4:
	for i in range(city.districts.size()-1,-1,-1):
		var district:Dictionary=city.districts[i]
		var distance:float=city._water_stroke_distance(at,district.points)-float(district.width)*.5
		if distance>=1.:continue
		var index:=ERAS.find(str(district.get("era_theme","pastoral")))
		var result:=Vector4.ZERO
		if distance<=-1.:result[index]=1.;return result
		var nearest:=Vector2(district.points[0][0],district.points[0][1]);var best:=at.distance_squared_to(nearest)
		for j in range(1,district.points.size()):
			var p:=Geometry2D.get_closest_point_to_segment(at,Vector2(district.points[j-1][0],district.points[j-1][1]),Vector2(district.points[j][0],district.points[j][1]))
			if at.distance_squared_to(p)<best:best=at.distance_squared_to(p);nearest=p
		var normal:Vector2=(at-nearest).normalized()
		var outside:Vector2=nearest+normal*(float(district.width)*.5+1.01)
		var background:=0
		for j in range(i-1,-1,-1):
			var row:Dictionary=city.districts[j]
			if city._water_stroke_distance(outside,row.points)<=float(row.width)*.5:background=ERAS.find(str(row.get("era_theme","pastoral")));break
		var coverage:=1.-smoothstep(-1.,1.,distance)
		result[background]=1.-coverage;result[index]+=coverage
		return result
	return Vector4(1,0,0,0)
func prepare(city:RefCounted)->void:
	var began:=Time.get_ticks_usec();var current:Dictionary={};var dirty:Dictionary={}
	var first_build:=images.is_empty()
	for district:Dictionary in city.districts:current[str(district.id)]={"points":district.points.duplicate(true),"width":district.width,"era":str(district.get("era_theme","pastoral"))}
	enabled=false
	for row:Dictionary in current.values():
		if row.era!="pastoral":enabled=true;break
	if images.is_empty():
		var blank:=Image.create(TEXELS,TEXELS,false,Image.FORMAT_RGBA8);blank.fill(Color(1,0,0,0))
		for layer in range(COLUMNS*COLUMNS):images.append(blank);dirty[layer]=true
	else:
		var ids:Array=previous.keys()
		for id:String in current:
			if not ids.has(id):ids.append(id)
		for id:String in ids:
			if previous.get(id)==current.get(id):continue
			for row:Dictionary in [previous.get(id,{}),current.get(id,{})]:
				if row.is_empty():continue
				var bounds:=Rect2(Vector2(row.points[0][0],row.points[0][1]),Vector2.ZERO)
				for p:Array in row.points:bounds=bounds.expand(Vector2(p[0],p[1]))
				bounds=bounds.grow(float(row.width)*.5+1.5)
				var low:Vector2i=Vector2i(((bounds.position-ORIGIN)/TILE).floor()).clamp(Vector2i.ZERO,Vector2i(9,9))
				var high:Vector2i=Vector2i(((bounds.end-ORIGIN)/TILE).floor()).clamp(Vector2i.ZERO,Vector2i(9,9))
				for z in range(low.y,high.y+1):
					for x in range(low.x,high.x+1):dirty[z*COLUMNS+x]=true
	changed_layers.clear()
	for layer:int in dirty:
		var image:=Image.create(TEXELS,TEXELS,false,Image.FORMAT_RGBA8)
		var start:=ORIGIN+Vector2(layer%COLUMNS,layer/COLUMNS)*TILE
		if not enabled:image.fill(Color(1,0,0,0))
		else:
			for z in range(TEXELS):
				for x in range(TEXELS):
					var value:=weights(city,start+(Vector2(x,z)-Vector2.ONE*.5)*PIXEL)
					image.set_pixel(x,z,Color(value.x,value.y,value.z,value.w))
		if first_build or images[layer].get_data()!=image.get_data():images[layer]=image;changed_layers.append(layer)
	previous=current
	stats={"prepared_layers":dirty.size(),"changed_layers":changed_layers.size(),"uploaded_layers":0,"uploaded_bytes":0,"prepare_ms":float(Time.get_ticks_usec()-began)/1000.}
func upload()->void:
	if texture==null:
		texture=Texture2DArray.new();texture.create_from_images(images)
		stats.uploaded_layers=images.size()
	else:
		for layer:int in changed_layers:texture.update_layer(images[layer],layer)
		stats.uploaded_layers=changed_layers.size()
	stats.uploaded_bytes=int(stats.uploaded_layers)*TEXELS*TEXELS*4
func bind_material(material:ShaderMaterial)->void:
	material.set_shader_parameter("era_road_field",texture)
	material.set_shader_parameter("era_road_enabled",enabled)
