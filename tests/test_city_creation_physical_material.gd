extends SceneTree
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Batcher=preload("res://scripts/visual/city_creation_mesh_batcher.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Fixture=preload("res://tools/fixtures/city_creation_space_contract_fixture.gd")
const Colors=preload("res://scripts/visual/city_creation_house_colors.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func physical(town:Node3D)->Dictionary:
	var found:Dictionary={}
	for node:MeshInstance3D in town.find_children("*","MeshInstance3D",true,false):
		var material:=node.material_override as ShaderMaterial
		if material==null or not material.get_meta("creation_wall_batch",false):continue
		var kind:int=material.get_shader_parameter("surface_kind")
		if kind in [Wall.Kind.TIMBER,Wall.Kind.METAL]:
			if not found.has(kind):found[kind]=[]
			found[kind].append([material.get_shader_parameter("metallic"),material.get_shader_parameter("roughness"),node.mesh.get_faces().size(),node.mesh.surface_get_arrays(0)[Mesh.ARRAY_COLOR]])
	return found
func run()->void:
	var began:=Time.get_ticks_msec();var parent:=Node3D.new();root.add_child(parent);parent.position.y=5.
	check([Wall.Kind.PLASTER,Wall.Kind.STONE,Wall.Kind.TERRACOTTA,Wall.Kind.SLATE,Wall.Kind.CANTILEVER,Wall.Kind.TIMBER,Wall.Kind.METAL]==[0,1,2,3,4,5,6],"old kinds stable and timber/metal appended")
	var metal:=Wall.source(Color("d6bb74"),null,"component",Wall.Kind.METAL)
	var profiles:Array=[]
	for index in range(4):
		var node:=MeshInstance3D.new();node.mesh=BoxMesh.new();node.position.x=index*2.;parent.add_child(node)
		var material:StandardMaterial3D=metal.duplicate();node.material_override=material
		if index==1:material.metallic=.2
		if index==2:material.metallic_specular=.1
		if index==3:material.albedo_color=Color("77998a")
		var profile:=Wall.profile(material,5.,1.7,node);profiles.append(profile)
		check(profile[9]==6 and profile[10]==Vector2(4.5,5.5),"kind9/bounds10 keep old index semantics "+str(index))
	check(profiles[0]!=profiles[1] and profiles[0]!=profiles[2] and profiles[0]==profiles[3],"physical differences split cache identity; tint stays in vertex bytes")
	var batcher:=Batcher.new();var stats:=batcher.merge(parent)
	check(stats.output_batches==3,"actual merge splits metallic and specular differences into three batches")
	var states:Array=[]
	for node:MeshInstance3D in parent.find_children("*","MeshInstance3D",true,false):
		var material:=node.material_override as ShaderMaterial
		states.append([material.get_shader_parameter("metallic"),material.get_shader_parameter("specular")])
		check(material.get_meta("creation_fixed_color",false),"batched metal keeps fixed color identity")
	check([Vector2(.82,.5),Vector2(.2,.5),Vector2(.82,.1)].all(func(expected):return states.any(func(row):return Vector2(row[0],row[1]).is_equal_approx(expected))),"all physical values survive actual merged ShaderMaterial")
	var shader:=FileAccess.get_file_as_string("res://scripts/visual/shaders/creation_wall.gdshader")
	check(not shader.contains("void light()") and shader.contains("specular_schlick_ggx"),"default full BRDF receives metallic and specular outputs")
	var city:RefCounted=Fixture.courtyard("ring","none").city;var saved:Dictionary=city.snapshot()
	var town:=Renderer.new();root.add_child(town);town.setup(city)
	var actual:=physical(town)
	check(actual.has(Wall.Kind.TIMBER) and actual.has(Wall.Kind.METAL),"real courtyard doors shutters and handles route to both physical kinds")
	for row:Array in actual.get(Wall.Kind.TIMBER,[]):check(is_equal_approx(row[0],0.) and is_equal_approx(row[1],.66),"actual timber dielectric and roughness")
	for row:Array in actual.get(Wall.Kind.METAL,[]):check(is_equal_approx(row[0],.82) and is_equal_approx(row[1],.34),"actual handle metallic and roughness")
	check(Wall.component(town,Color("d6bb74"),Wall.Kind.METAL)==Wall.component(town,Color("d6bb74"),Wall.Kind.METAL),"actual source factory reuses shared physical component")
	check(city.snapshot()==saved,"rendering adds no author or entitlement fields")
	var cold:=preload("res://scripts/world/city_creation_state.gd").new();check(cold.restore(JSON.parse_string(JSON.stringify(saved))).ok,"cold snapshot restores")
	var rebuilt:=Renderer.new();root.add_child(rebuilt);rebuilt.setup(cold)
	check(physical(rebuilt)==actual,"independent cold geometry and physical material/color fields equal")
	parent.queue_free();town.queue_free();rebuilt.queue_free();await process_frame
	print("PHYSICAL_MATERIAL ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}));quit(0 if failures.is_empty() else 1)
