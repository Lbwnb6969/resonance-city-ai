extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_ancient_fixture.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Ancient=preload("res://scripts/visual/city_creation_ancient_architecture.gd")
var failures:Array=[]
var checks:=0
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var f:=Fixture.build();var city:RefCounted=f.city;var original:Dictionary=city.snapshot()
	var r:=Renderer.new();root.add_child(r);r.state=city;r.buildings=Node3D.new();r.add_child(r.buildings)
	for n in [r.shore,r.lilypads,r.wildlife]:r.add_child(n)
	for id:String in f.ids:
		var h:Dictionary=city.houses[city._house_index(id)];var built:Node3D=r._house(h)
		if id==f.ids[0]:check(built.has_meta("ancient_temple") and built.find_children("GreekFullWidthPediment*","MeshInstance3D",true,false).size()==2,"whole temple roof and two full width pediments")
		if id==f.ids[2]:check(built.get_meta("ancient_rotunda_cella",false) and built.find_children("RomanContinuousCircularWall*","MeshInstance3D",true,false).size()==1,"real circular cella replaces square derived shell")
		check(built.has_meta("ancient_architecture"),"actual ancient dispatch "+id)
		check(not built.find_children("DoricFlutedShaft*","MeshInstance3D",true,false).is_empty(),"actual fluted entasis columns "+id)
		check(built.find_children("FacetedBayGlazing*","MeshInstance3D",true,false).is_empty(),"no modern oriel glass "+id)
		if h.get("architecture","")=="rotunda":
			check(built.find_children("RomanOpenOculusDome*","MeshInstance3D",true,false).size()==1,"real Roman hemisphere with open apex")
		else:check(int(built.get_meta("ancient_roof_patches",0))>0,"low pitched real union tile roof "+id)
		for mesh:MeshInstance3D in built.find_children("Greek*Pediment*","MeshInstance3D",true,false):
			check(mesh.mesh.get_faces().size()>=24,"closed extruded triangular pediment")
		for n:Node3D in built.find_children("AncientElevation*","Node3D",true,false):
			if n.has_meta("clear_door_width"):check(float(n.get_meta("clear_door_width"))>1.,"two columns preserve doorway")
		built.free()
	check(city.snapshot()==original,"geometry never rewrites authored modules or palette")
	var reader:=Fixture.State.new();check(reader.restore(JSON.parse_string(JSON.stringify(original,"",true,true))).ok and reader.snapshot()==original,"Schema19 complete JSON roundtrip")
	var prior:Dictionary=city.snapshot();check(city.set_house_colors(f.ids[0],Color("ad9676"),Color("a84e39")).ok,"public custom wall and roof")
	check(city.undo().ok and city.houses==prior.houses and city.redo().ok,"custom colors undo redo intact")
	check(reader.restore(city.snapshot()).ok and reader.houses==city.houses,"custom colors survive cold restore")
	check(not Ancient.active(city.houses[0],"renaissance") and not Ancient.active(city.houses[0],"modern_eco"),"other era dispatch untouched")
	print("ANCIENT_ARCHITECTURE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
