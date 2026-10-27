extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_ancient_extensions_fixture.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Plan=preload("res://scripts/world/city_creation_ancient_extension_plan.gd")
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var f:=Fixture.build();var city:RefCounted=f.city;var original:Dictionary=city.snapshot()
	var r:=Renderer.new();root.add_child(r);r.state=city;r.buildings=Node3D.new();r.add_child(r.buildings)
	for n in [r.shore,r.lilypads,r.wildlife]:r.add_child(n)
	var signatures:Dictionary={}
	for id:String in f.ids:
		var house:Dictionary=city.houses[city._house_index(id)];var before:Dictionary=house.duplicate(true);var built:Node3D=r._house(house)
		check(built.has_meta("ancient_extension") and built.get_meta("ancient_extension").rectangular,"whole civic shell dispatch "+id)
		check(built.get_meta("prototype_caption")==Plan.NAMES[Plan.IDS.find(house.architecture)],"published caption identifies actual civic recipe")
		check(not built.get_meta("civic_windows",[]).is_empty() and built.get_meta("civic_windows").all(func(w):return w.size.x>0. and w.size.y>0. and w.normal.length()>.99),"light records come from actual glass bounds")
		check(house==before,"derived mass preserves authored cells, colors and identity")
		if house.architecture=="ionic_stoa":
			check(built.has_meta("ionic_stoa") and built.get_meta("ionic_stoa").floors==Plan.rectangle(house).floors,"stoa open walkway scales to whole upper floor")
			var shafts:=built.find_children("IonicFlutedShaft*","MeshInstance3D",true,false);var scrolls:=built.find_children("IonicSpiralVolute*","MeshInstance3D",true,false)
			check(shafts.size()>=3 and scrolls.size()==shafts.size()*2,"two actual solid spiral volutes per Ionic shaft")
		else:
			check(built.has_meta("roman_basilica") and built.get_meta("roman_basilica").nave_height>Plan.rectangle(house).height+.8,"basilica raised nave distinct from aisle roofs")
			check(built.find_children("BasilicaHollowApse*","MeshInstance3D",true,false).size()==1 and built.find_children("BasilicaClerestoryGlass*","MeshInstance3D",true,false).size()>=4,"true semicircular apse and clerestory geometry")
			check(built.find_children("BasilicaNaveTileRoof*","MeshInstance3D",true,false).size()==1 and built.find_children("BasilicaAisleTileRoof*","MeshInstance3D",true,false).size()==1,"three-part basilican roof mass")
		var face_count:=0;var uv_valid:=true;var roofs_up:=true;var signature:Array=[]
		for mesh:MeshInstance3D in built.find_children("*","MeshInstance3D",true,false):
			signature.append([mesh.mesh.get_aabb(),mesh.transform]);face_count+=mesh.mesh.get_faces().size()
			if not mesh.material_override is ShaderMaterial or mesh.material_override.shader!=r.JoinedRoofShader:continue
			var a:Array=mesh.mesh.surface_get_arrays(0);var uv:PackedVector2Array=a[Mesh.ARRAY_TEX_UV];var vertices:PackedVector3Array=a[Mesh.ARRAY_VERTEX];var indices:PackedInt32Array=a[Mesh.ARRAY_INDEX];var normals:PackedVector3Array=a[Mesh.ARRAY_NORMAL]
			for i in range(0,indices.size(),3):
				var j:=indices[i];var k:=indices[i+1];var l:=indices[i+2]
				uv_valid=uv_valid and absf((uv[k]-uv[j]).cross(uv[l]-uv[j]))>.00001
				roofs_up=roofs_up and (vertices[k]-vertices[j]).cross(vertices[l]-vertices[j]).y<0. and normals[j].y>0.
		check(uv_valid and roofs_up,"metric roof UV is nondegenerate and actual faces point upward")
		check(face_count>1000 and not built.find_children("*","CollisionShape3D",true,false).is_empty(),"substantial real geometry and picking "+id)
		signatures[id]=hash(signature);built.free()
	check(signatures.values()[0]!=signatures.values()[1],"two new prototypes have distinct geometry")
	check(city.snapshot()==original,"geometry compilation leaves entire authored world byte-equivalent")
	var cold:=Fixture.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(original))).ok and cold.snapshot()==original,"Schema19 exact cold roundtrip for both types and two floors")
	var old:Dictionary=original.duplicate(true);old.schema=18;check(not cold.restore(old).ok and cold.snapshot()==original,"old schema rejects new authored fields atomically")
	var id:String=f.ids[0];var prior:Dictionary=city.snapshot();check(city.add_cell(id,0,0,1).ok,"partial upper-floor edit remains available")
	var house:Dictionary=city.houses[city._house_index(id)];var built:Node3D=r._house(house)
	check(Plan.rectangle(house).is_empty() and built.get_meta("ancient_extension").saved_cells==house.cells.size() and str(built.get_meta("prototype_caption")).ends_with("随形"),"partial upper floor retains authored modules with explicit free-form caption")
	built.free();check(city.undo().ok and city.snapshot().houses==prior.houses and city.redo().ok,"upper-floor edit and fallback undo redo")
	var fresh:=Fixture.State.new();check(fresh.restore(city.snapshot()).ok and fresh.houses==city.houses,"irregular extension cold read retains every module")
	check(preload("res://scripts/world/city_creation_house_hinge.gd").layout(house).is_empty(),"special civic roof does not offer unsupported folding")
	for target:String in [f.ids[0],f.ids[1]]:
		var sample:=Fixture.State.new();sample.restore(original);r.state=sample
		check(sample.add_cell(target,-1,0,0,"terrace").ok,"terrace addition remains available for civic type")
		r.building_context.prepare(sample.houses,sample.roads);var extended:Dictionary=sample.houses[sample._house_index(target)];var fallback:Node3D=r._house(extended)
		check(not fallback.get_meta("ancient_extension").rectangular and fallback.get_meta("ancient_extension").saved_cells==extended.cells.size(),"terrace falls back without deleting authored room or terrace")
		fallback.free();var reader:=Fixture.State.new();check(reader.restore(sample.snapshot()).ok and reader.houses==sample.houses,"civic terrace cold read exact")
	var side_city:=Fixture.State.new();side_city.restore(original);r.state=side_city
	var side_road:Array[Vector2]=[Vector2(-26,-26),Vector2(-21.9,-26)]
	check(side_city.add_road(side_road,"path","none").ok,"real side door contact remains accepted by road system")
	var side_house:Dictionary=side_city.houses[side_city._house_index(f.ids[1])]
	check(Plan.massing(side_city,side_house).is_empty(),"side-access basilica keeps original shell and all true resident doors")
	r.free();print("ANCIENT_EXTENSIONS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
