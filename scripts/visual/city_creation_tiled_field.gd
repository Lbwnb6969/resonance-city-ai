extends RefCounted
## CPU-owned padded tiles; only upload() touches the published GPU array.
## One-texel overlaps retain the original full-image bilinear interpolation.
const SIZE:=512
const TILE:=64
const COLUMNS:=SIZE/TILE
const SIDE:=TILE+2
var images:Array[Image]=[]
var texture:Texture2DArray
var changed_layers:Array[int]=[]
var stats:Dictionary={}
var _pending:Dictionary={}

func copy_cpu_from(source:RefCounted)->void:
	# Published Images are immutable. A changed layer receives a new Image.
	images=source.images.duplicate()
	_pending.clear();changed_layers.clear()

func prepare(source:Image,regions:Array[Rect2i])->void:
	var dirty:Dictionary={};var initial:=images.is_empty()
	if initial:
		images.resize(COLUMNS*COLUMNS)
		for layer in range(COLUMNS*COLUMNS):dirty[layer]=true
	else:
		for region:Rect2i in regions:
			var padded:=region.grow(1).intersection(Rect2i(0,0,SIZE,SIZE))
			if not padded.has_area():continue
			var low:=padded.position/Vector2i(TILE,TILE)
			var high:Vector2i=(padded.end-Vector2i.ONE)/Vector2i(TILE,TILE)
			for z in range(low.y,high.y+1):
				for x in range(low.x,high.x+1):dirty[z*COLUMNS+x]=true
	for layer:int in dirty:
		var next:=_tile(source,Vector2i(layer%COLUMNS,layer/COLUMNS)*TILE)
		if initial or next.get_data()!=images[layer].get_data():images[layer]=next;_pending[layer]=true
	changed_layers.assign(_pending.keys())
	stats={"prepared_layers":dirty.size(),"changed_layers":changed_layers.size(),"uploaded_layers":0,"uploaded_bytes":0,"upload_ms":0.}

func _tile(source:Image,origin:Vector2i)->Image:
	var image:=Image.create(SIDE,SIDE,false,source.get_format())
	var start:=origin-Vector2i.ONE
	var bounds:=Rect2i(start,Vector2i(SIDE,SIDE)).intersection(Rect2i(0,0,SIZE,SIZE))
	image.blit_rect(source,bounds,bounds.position-start)
	# Outside the full field, duplicate its edge exactly like repeat_disable.
	if origin.x==0 or origin.x==SIZE-TILE:
		var x:=0 if origin.x==0 else SIDE-1;var sx:=0 if origin.x==0 else SIZE-1
		for y in range(SIDE):image.set_pixel(x,y,source.get_pixel(sx,clampi(start.y+y,0,SIZE-1)))
	if origin.y==0 or origin.y==SIZE-TILE:
		var y:=0 if origin.y==0 else SIDE-1;var sy:=0 if origin.y==0 else SIZE-1
		for x in range(SIDE):image.set_pixel(x,y,source.get_pixel(clampi(start.x+x,0,SIZE-1),sy))
	return image

func upload(create_new:bool=false)->void:
	var start:=Time.get_ticks_usec();var count:=0
	if texture==null or create_new:
		texture=Texture2DArray.new()
		# Release exports remove assert expressions, including their side effects.
		var result:=texture.create_from_images(images)
		assert(result==OK)
		count=images.size()
	else:
		for layer:int in _pending:texture.update_layer(images[layer],layer);count+=1
	_pending.clear()
	stats.uploaded_layers=count;stats.uploaded_bytes=count*images[0].get_data().size()
	stats.upload_ms=float(Time.get_ticks_usec()-start)/1000.
