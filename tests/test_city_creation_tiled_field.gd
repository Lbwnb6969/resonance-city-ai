extends SceneTree
const Tiled=preload("res://scripts/visual/city_creation_tiled_field.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _whole(field:RefCounted,format:int)->Image:
	var result:=Image.create(512,512,false,format)
	for layer in range(64):result.blit_rect(field.images[layer],Rect2i(1,1,64,64),Vector2i(layer%8,layer/8)*64)
	return result
func _run()->void:
	for format:int in [Image.FORMAT_RF,Image.FORMAT_RGBA8]:
		var source:=Image.create(512,512,false,format)
		for z in range(16):
			for x in range(16):source.fill_rect(Rect2i(x*32,z*32,32,32),Color(float(x-8)/9.,float(z)/16.,.4,1))
		var original:PackedByteArray=source.get_data();var field:=Tiled.new();var empty:Array[Rect2i]=[];field.prepare(source,empty)
		_check(field.texture==null and field.images.size()==64 and field.changed_layers.size()==64,"CPU initial preparation emits sixty-four images and no GPU resources, format "+str(format))
		_check(_whole(field,format).get_data()==original and source.get_data()==original,"tile interiors reconstruct exact original bytes without mutating source, format "+str(format))
		var seamless:=true;var clamped:=true
		for layer in range(64):
			var image:Image=field.images[layer]
			if layer%8<7:
				for x in range(2):seamless=seamless and image.get_region(Rect2i(64+x,0,1,66)).get_data()==field.images[layer+1].get_region(Rect2i(x,0,1,66)).get_data()
			if layer/8<7:
				for y in range(2):seamless=seamless and image.get_region(Rect2i(0,64+y,66,1)).get_data()==field.images[layer+8].get_region(Rect2i(0,y,66,1)).get_data()
			if layer%8==0:clamped=clamped and image.get_region(Rect2i(0,0,1,66)).get_data()==image.get_region(Rect2i(1,0,1,66)).get_data()
			if layer%8==7:clamped=clamped and image.get_region(Rect2i(65,0,1,66)).get_data()==image.get_region(Rect2i(64,0,1,66)).get_data()
			if layer/8==0:clamped=clamped and image.get_region(Rect2i(0,0,66,1)).get_data()==image.get_region(Rect2i(0,1,66,1)).get_data()
			if layer/8==7:clamped=clamped and image.get_region(Rect2i(0,65,66,1)).get_data()==image.get_region(Rect2i(0,64,66,1)).get_data()
		_check(seamless and clamped,"every padded seam overlaps exactly and external edges clamp, format "+str(format))
		var fork:=Tiled.new();fork.copy_cpu_from(field);var edit:=Rect2i(63,63,2,2);source.fill_rect(edit,Color(.37,.82,.13,1));var regions:Array[Rect2i]=[edit]
		var worker:=Thread.new();worker.start(fork.prepare.bind(source,regions));worker.wait_to_finish()
		_check(fork.changed_layers.size()==4 and _whole(fork,format).get_data()==source.get_data(),"two-pixel boundary edit regenerates exactly four layers including neighbor padding, format "+str(format))
		_check(_whole(field,format).get_data()==original and fork.images[40]==field.images[40] and fork.texture==null,"worker retains immutable published images and distant image identities, format "+str(format))
		source.fill_rect(Rect2i(250,250,1,1),Color(.27,.35,.78,1));regions=[Rect2i(250,250,1,1)];fork.prepare(source,regions)
		_check(fork.changed_layers.size()==5,"multiple unpublished edits retain all pending dirty layers, format "+str(format))
	print("TILED_FIELD ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
