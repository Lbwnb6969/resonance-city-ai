extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_space_contract_fixture.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Ancient=preload("res://scripts/visual/city_creation_ancient_architecture.gd")
const Courts=preload("res://scripts/visual/city_creation_courtyards.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func key(points:Array)->Array:
	var result:Array=points.map(func(p):return str(p));result.sort();return result
func run()->void:
	var began:=Time.get_ticks_msec();var samples:Array=[]
	for angle:float in [0.,.4]:
		var f:=Fixture.courtyard("ring","none",angle);var city:RefCounted=f.city;var original:Dictionary=city.snapshot()
		var r:=Renderer.new();root.add_child(r);r.state=city;r.building_context.prepare(city.houses,city.roads)
		var holder:=Node3D.new();r.add_child(holder)
		var color:=Color("b66744");Ancient.roofs(r,holder,city.houses[0],[Color("d4c2a2"),color,Color("5b7863")])
		var expected:Array=[]
		for patch:Dictionary in r.building_context.roof_patches("h1"):
			if patch.surface!="roof":continue
			patch=preload("res://scripts/visual/city_creation_organic_corners.gd").patch(r,city.houses[0],patch,null)
			var old_faces:Array=[]
			for p:Vector3 in patch.vertices:old_faces.append(Vector3(p.x,1.7+(p.y-1.7)*.48,p.z))
			var reference:MeshInstance3D=r._triangles(holder,old_faces,color);expected.append_array(Array(reference.mesh.get_faces()));reference.free()
		var actual:Array=[];var tiled:=0;var valid:=true
		for mesh:MeshInstance3D in holder.find_children("AncientLowTileRoof*","MeshInstance3D",true,false):
			var material:=mesh.material_override as ShaderMaterial
			valid=valid and material!=null and material.shader==r.JoinedRoofShader and material.get_shader_parameter("roof_color")==color
			var arrays:=mesh.mesh.surface_get_arrays(0);var points:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];var uv:PackedVector2Array=arrays[Mesh.ARRAY_TEX_UV]
			valid=valid and points.size()==uv.size() and uv.size()>0;tiled+=1
			actual.append_array(Array(mesh.mesh.get_faces()))
		check(tiled>0 and valid,"actual classical roof has metric tile shader, UVs and author roof color")
		check(key(actual)==key(expected),"material repair preserves exact low-roof geometry and pick triangles")
		var court:Dictionary=city.courtyard_plans()[0];var painter:=Courts.new();var paving:Dictionary=painter._paving(city,court)
		var layers:Dictionary={};var valid_mesh:=true
		for p:Vector3 in paving.vertices:
			var lift:=snappedf(p.y-float(city.ground_height(Vector2(p.x,p.z))),.001);layers[lift]=true
			valid_mesh=valid_mesh and p.is_finite()
		check(layers.has(.004) and layers.has(.014) and valid_mesh,"real recessed bed lies ten millimeters below paving")
		var cold:=Fixture.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(original))).ok,"cold read author data")
		var fresh:Dictionary=painter._paving(cold,cold.courtyard_plans()[0])
		check(paving==fresh,"incremental input and independent cold paving agree exactly")
		var planted:Dictionary=court.duplicate(true);planted.planters=[{"at":court.center,"radius":.6}]
		var holes:Dictionary=painter._paving(city,planted);var no_cap:=true
		for i in range(0,holes.vertices.size(),4):
			var midpoint:Vector3=(holes.vertices[i]+holes.vertices[i+2])*.5
			if Vector2(midpoint.x,midpoint.z).distance_to(court.center)<.6:no_cap=false
		check(no_cap,"both mortar and paving retain the real planter soil opening")
		check(city.snapshot()==original,"material and bedding do not write author/rights/history")
		samples.append({"angle":angle,"tile_patches":tiled,"vertices":paving.vertices.size(),"stones":paving.stones})
		r.shore.free();r.lilypads.free();r.wildlife.free();r.free()
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"samples":samples,"seconds":(Time.get_ticks_msec()-began)/1000.}
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path("res://验证记录/M84/art_courtyard_20261031"));FileAccess.open("res://验证记录/M84/art_courtyard_20261031/cpu.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("COURTYARD_ART_CPU ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)
