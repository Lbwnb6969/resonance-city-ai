extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const OUT="res://验证记录/木构与石屋_2026-10-16/state.json"
var checks:Array=[]
var failures:Array=[]
func _initialize() -> void: _run.call_deferred()
func _check(ok:bool,label:String) -> void:
	checks.append({"label":label,"passed":ok})
	if not ok: failures.append(label);push_error(label)
func _hash_geometry(renderer) -> String:
	var rows:Array=[]
	for item:Node in renderer.find_children("*","MeshInstance3D",true,false):
		var mesh:MeshInstance3D=item
		var mat=mesh.material_override
		var material_data:Variant=[mat.albedo_color,mat.roughness,mat.cull_mode] if mat is StandardMaterial3D else [mat.shader.code]
		rows.append([mesh.global_transform,mesh.mesh.get_faces(),material_data])
	for item:Node in renderer.find_children("*","CollisionShape3D",true,false):
		var shape:CollisionShape3D=item
		rows.append([shape.global_transform,shape.shape.get_debug_mesh().get_faces()])
	return var_to_bytes(rows).hex_encode().sha256_text()
func _renderer(script,city):
	var renderer=script.new();renderer.state=city
	renderer.buildings=Node3D.new();renderer.add_child(renderer.buildings);root.add_child(renderer)
	renderer.add_child(renderer.shore)
	city.prepare_ground_height()
	for house:Dictionary in city.houses: renderer._house(house)
	return renderer
func _run() -> void:
	var city=State.new();city.initialize()
	var original=city.snapshot()
	var structures=var_to_bytes([city.houses,city.roads,city.districts]).hex_encode()
	_check(city.set_house_style("h1","classic").ok and city._undo.is_empty() and city.snapshot()==original,"default classic is a zero-write no-op")
	_check(not city.set_house_style("h1","unknown").ok and not city.set_house_style("missing","stone").ok and city.snapshot()==original,"unknown style and missing identity reject without mutation")
	_check(city.set_house_style("h1","timber").ok and city.snapshot().schema==5 and city._undo.size()==1,"timber is an undoable new-style intent using schema five")
	_check(city.undo().ok and city.snapshot().schema==1 and var_to_bytes([city.houses,city.roads,city.districts]).hex_encode()==structures,"undo restores original structures and schema one")
	_check(city.redo().ok and city.houses[0].style=="timber","redo restores the exact style")
	_check(city.set_house_style("h1","stone").ok and city.houses[0].style=="stone","stone switches without changing house identity")
	var decorated=city.snapshot()
	for schema:int in [1,2,3,4]:
		var bad=decorated.duplicate(true);bad.schema=schema
		var target=State.new();target.initialize();var before=target.snapshot()
		_check(not target.restore(bad).ok and target.snapshot()==before,"old schema rejects new style atomically: "+str(schema))
	for invalid:Variant in ["unknown",1,null,{}]:
		var bad=decorated.duplicate(true);bad.houses[0].style=invalid
		_check(not State.new().restore(bad).ok,"schema five rejects malformed style: "+str(invalid))
	city.growth_memories.assign(["dawn"])
	_check(city.set_house_palette("h1",2).ok and city.houses[0].style=="stone","free palette preserves style")
	_check(city.set_house_finish("h1","dawn").ok and city.houses[0].style=="stone","earned finish preserves style")
	_check(city.add_terrain_stroke([Vector2(12,-9)],"plateau",3.5,1,2).ok,"plateau coexists with building style")
	var loaded=State.new()
	_check(loaded.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok and loaded.houses==city.houses and loaded.terrain_strokes==city.terrain_strokes,"schema five full-precision JSON retains style finish journal and plateau")
	_check(city.set_house_style("h1","classic").ok and not city.houses[0].has("style") and city.snapshot().schema==4,"returning to classic removes only style intent and keeps plateau schema")
	# Frozen pre-change renderer proves that opting out preserves actual geometry.
	var zip=ZIPReader.new()
	_check(zip.open("res://备份/建筑母型前_20261016/涉改原源码与设计.zip")==OK,"pre-change renderer backup readable")
	var script=GDScript.new()
	script.source_code=zip.read_file("scripts/visual/city_creation_renderer.gd").get_string_from_utf8().replace("class_name CityCreationRenderer","")
	zip.close()
	_check(script.reload()==OK,"frozen pre-change renderer compiles")
	var classic_city=State.new();classic_city.initialize()
	var previous=_renderer(script,classic_city)
	var current=_renderer(Renderer,classic_city)
	_check(_hash_geometry(previous)==_hash_geometry(current),"default classic meshes materials and real collision geometry equal pre-change production renderer")
	previous.free();current.free()
	script=null
	await process_frame
	_check(FileAccess.get_sha256("res://资源/建筑参考/石砌街屋.png")=="f8df6b9a2e06dd09e1ca629a88bf3224c5e4123f486fee28078db0cb57240cf1","stone wall uses exact recovered Foundation PNG bytes")
	var result={"ok":failures.is_empty(),"checks":checks,"failures":failures}
	FileAccess.open(OUT,FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true))
	print("HOUSE_STYLES_STATE ","PASS" if failures.is_empty() else "FAIL"," checks=",checks.size())
	await process_frame
	quit(0 if failures.is_empty() else 1)
