extends SceneTree
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const Lod=preload("res://scripts/visual/city_creation_detail_lod.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var renderer:=Renderer.new();root.add_child(renderer)
	var group:=Node3D.new();renderer.add_child(group)
	for end:float in [0.,Lod.FLOWERBOX,Lod.FLOWERBOX]:
		var mesh:MeshInstance3D=renderer._box(group,Vector3.ONE,Vector3(end,0,0),renderer._material(Color.WHITE))
		if end>0.:Lod.bind(mesh,end)
	renderer._merge_meshes(group)
	var batches:Array=group.find_children("*","MeshInstance3D",true,false);var ranges:Array=[];var triangles:=0
	for mesh:MeshInstance3D in batches:ranges.append(mesh.visibility_range_end);triangles+=mesh.mesh.get_faces().size()/3
	_check(batches.size()==2 and ranges.has(0.) and ranges.has(Lod.FLOWERBOX) and triangles==36,"material batching retains every triangle and separates architectural and decoration culling ranges")
	var transforms:Array=[Transform3D(Basis.IDENTITY,Vector3(0,1,0))];renderer.craft.setup(renderer)
	var props:=Node3D.new();renderer.add_child(props);renderer.craft._batch(props,"chime",transforms,0.)
	renderer.craft._static_batch(props,{"plaque":transforms,"planter":transforms})
	_check(props.get_node("Chime").visibility_range_end==Lod.CHIME and props.get_node("StaticCraft").visibility_range_end==Lod.FLOWERBOX,"actual chime and small static flowerbox prefabs use distinct native culling ranges")
	var gallery:=Node3D.new();renderer.add_child(gallery);renderer.craft._static_batch(gallery,{"planter":transforms,"pergola":transforms})
	_check(gallery.get_child_count()==1 and gallery.get_node("StaticCraft").visibility_range_end==Lod.GALLERY,"mixed large pergola retains one material batch and the longer gallery range")
	Lod.bind_tree(props,Lod.GALLERY)
	_check(props.get_node("Chime").visibility_range_end==Lod.CHIME and props.get_node("StaticCraft").visibility_range_end_margin==2.,"hierarchical defaults preserve explicit child ranges and native hysteresis")
	var city:=State.new();city.initialize();var before:Dictionary=city.snapshot();renderer.state=city;renderer.path_pebbles.prepare(city)
	var street:=Node3D.new();renderer.add_child(street);var result:Dictionary=renderer.path_pebbles.build(renderer,city.roads[0],street)
	_check(result.instances>0 and street.get_child_count()>0,"actual authored street produces physical pebble batches")
	var fingerprints:Array=[]
	for mesh:MultiMeshInstance3D in street.get_children():fingerprints.append([mesh.multimesh.instance_count,hash(mesh.multimesh.buffer),mesh.multimesh.mesh]);_check(mesh.visibility_range_end==Lod.PEBBLES,"actual pebble batch has calibrated native range")
	renderer.path_pebbles.set_view_scale(60.)
	var hidden:=true
	for mesh:MultiMeshInstance3D in street.get_children():hidden=hidden and mesh.multimesh.visible_instance_count==0
	_check(hidden,"full-city zoom removes invisible pebbles from GPU submission")
	var new_street:=Node3D.new();renderer.add_child(new_street);renderer.path_pebbles.build(renderer,city.roads[0],new_street)
	_check(new_street.get_child(0).multimesh.visible_instance_count==0,"newly installed far-view pebble batches start without GPU submission")
	renderer.path_pebbles.set_view_scale(12.);var restored:=true;var index:=0
	for mesh:MultiMeshInstance3D in street.get_children():restored=restored and mesh.multimesh.visible_instance_count==-1 and fingerprints[index]==[mesh.multimesh.instance_count,hash(mesh.multimesh.buffer),mesh.multimesh.mesh];index+=1
	_check(restored and city.snapshot()==before,"returning close restores identical instances mesh buffers and all authored identity")
	var smoke:=Node3D.new();renderer.add_child(smoke);renderer.bakery_smoke.build(smoke,Vector3.ZERO)
	_check(smoke.get_node("BakerySmoke").visibility_range_end==Lod.SMOKE and not smoke.get_node("BakerySmoke").visible,"oven smoke keeps its real work visibility while gaining GPU culling")
	print("DETAIL_LOD ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
