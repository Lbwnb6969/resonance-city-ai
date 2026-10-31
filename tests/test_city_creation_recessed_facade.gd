extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_space_contract_fixture.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Shell=preload("res://scripts/visual/city_creation_recessed_facade.gd")
const Glass=preload("res://scripts/visual/city_creation_facade_glass.gd")
const Colors=preload("res://scripts/visual/city_creation_house_colors.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func crosses(faces:PackedVector3Array,x:float,y:float)->bool:
	for i in range(0,faces.size(),3):
		if Geometry3D.segment_intersects_triangle(Vector3(x,y,.3),Vector3(x,y,-.1),faces[i],faces[i+1],faces[i+2])!=null:return true
	return false
func run()->void:
	var began:=Time.get_ticks_msec();var f:=Fixture.courtyard("ring","none");var city:RefCounted=f.city
	check(city.set_house_colors("h1",Color("344e53"),Color("b66744")).ok,"public wall color deliberately equals glass tint")
	var original:Dictionary=city.snapshot();var r:=Renderer.new();root.add_child(r);r.state=city;r.buildings=Node3D.new();r.add_child(r.buildings)
	for n in [r.shore,r.lilypads,r.wildlife]:r.add_child(n)
	var built:Node3D=r._house(city.houses[0]);var holes:=0;var doors:=0;var arches:=0;var valid:=true;var true_openings:=true
	for node:Node in built.find_children("*","Node3D",true,false):
		if not node.has_meta("recessed_facade"):continue
		var plan:Dictionary=node.get_meta("recessed_facade");var mesh:MeshInstance3D=node.get_node("RecessedFacadeShell");var faces:=mesh.mesh.get_faces()
		for hole:Dictionary in plan.holes:
			holes+=1;doors+=int(plan.door);arches+=int(hole.arched)
			true_openings=true_openings and not crosses(faces,hole.x,(float(hole.bottom)+float(hole.spring))*.5)
			if hole.arched:
				true_openings=true_openings and not crosses(faces,hole.x,hole.spring+hole.radius*.6) and crosses(faces,hole.x,hole.spring+hole.radius+.09)
		for i in range(0,faces.size(),3):valid=valid and faces[i].is_finite() and (faces[i+1]-faces[i]).cross(faces[i+2]-faces[i]).length_squared()>.00000000001
	check(holes>0 and doors>0 and arches>0,"real court uses rectangular doors and arched windows")
	check(true_openings,"mesh rays pass through both rectangular and arched openings, not solid wall")
	check(valid,"facade shell has finite nondegenerate triangles")
	var panes:Array=built.find_children("RecessedArchedGlass*","MeshInstance3D",true,false)+built.find_children("RecessedDoorTransom*","MeshInstance3D",true,false)
	check(not panes.is_empty() and panes.all(func(p):return p.position.z<-.02 and p.material_override.has_meta("creation_facade_glass") and not p.material_override.has_meta("creation_wall")),"glazing sits inside holes and never enters wall material route")
	var pane:MeshInstance3D=panes[0];var material:StandardMaterial3D=pane.material_override
	Colors.prepare(r,built,city.houses[0]);var cache:Dictionary=built.get_meta("house_color_cache")
	check(not cache.materials.any(func(row):return row.material.has_meta("creation_facade_glass")),"fixed glass cannot become an author palette recipe when RGB collides")
	var day:Color=material.albedo_color;Glass.phase(r,2)
	check(material.albedo_color==day and Glass.material(r,0).emission_energy_multiplier==0. and Glass.material(r,1).emission_energy_multiplier>Glass.material(r,2).emission_energy_multiplier,"finite glass groups retain tint and distinct night lighting")
	check(city.snapshot()==original,"new openings never write authorship, entrance IDs or rights")
	var cold:=Fixture.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(original))).ok and cold.house_entrances("h1")==city.house_entrances("h1"),"cold restore preserves actual entrances")
	check(cold.set_house_style("h1","stone").ok,"public stone facade variant")
	r.state=cold;r.building_context.prepare(cold.houses,cold.roads);var stone:Node3D=r._house(cold.houses[0]);var mapped:=true;var count:=0
	for mesh:MeshInstance3D in stone.find_children("RecessedFacadeShell*","MeshInstance3D",true,false):
		var arrays:=mesh.mesh.surface_get_arrays(0);mapped=mapped and arrays[Mesh.ARRAY_TEX_UV]!=null and arrays[Mesh.ARRAY_TEX_UV].size()==arrays[Mesh.ARRAY_VERTEX].size();count+=1
	check(count>0 and mapped,"cut stone walls retain actual texture coordinates")
	stone.free()
	built.free();r.free()
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"holes":holes,"panes":panes.size(),"seconds":(Time.get_ticks_msec()-began)/1000.}
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path("res://验证记录/M84/facade_depth_20261031"));FileAccess.open("res://验证记录/M84/facade_depth_20261031/cpu.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("RECESSED_FACADE_CPU ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)
