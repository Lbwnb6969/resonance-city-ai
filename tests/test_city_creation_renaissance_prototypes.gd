extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_renaissance_prototypes_fixture.gd")
const Plan=preload("res://scripts/world/city_creation_renaissance_prototype_plan.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Choice=Fixture.Choice
var count:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	count+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var f:=Fixture.build();var city:RefCounted=f.city;var before:Dictionary=city.snapshot()
	var r:=Renderer.new();root.add_child(r);r.state=city;r.buildings=Node3D.new();r.add_child(r.buildings)
	for n in [r.shore,r.lilypads,r.wildlife]:r.add_child(n)
	for kind:String in f.groups:
		for id:String in f.groups[kind]:
			var h:Dictionary=city.houses[city._house_index(id)];var built:Node3D=r._house(h)
			check(Plan.active(city,h) and kind in Choice.choices(city,h),"legal selection "+id)
			check(built.get_meta("prototype_caption","")==Choice.label(kind),"published actual caption "+id)
			check(built.get_meta("renaissance_prototypes",[]).size()==Plan.roofs(h).size(),"every exposed roof replaced "+id)
			check(not built.find_children("RenaissancePrototypePick","CollisionShape3D",true,false).is_empty(),"roof identity pick "+id)
			check(built.find_children("TerracottaHippedRoof*","MeshInstance3D",true,false).size()>=4,"true four-sided tile crown "+id)
			if kind=="venetian_loggia":
				var faces:Array=built.get_meta("arcades",[])
				check(not faces.is_empty() and faces.all(func(a):return not a.pointed),"actual recessed round galleries "+id)
				check(faces.all(func(a):return a.half_width==.64 and a.retreat==.38),"original walkway clearance retained "+id)
			else:
				check(built.find_children("OpenLoggiaColumn*","MeshInstance3D",true,false).size()==4,"one retreated open lookout with four columns "+id)
				check(built.find_children("RetreatedLookoutFloor","MeshInstance3D",true,false).size()==1,"one highest-room belvedere "+id)
			built.free()
	check(city.snapshot()==before,"appearance is read-only")
	var reader:=Fixture.State.new();check(reader.restore(JSON.parse_string(JSON.stringify(before,"",true,true))).ok and reader.snapshot()==before,"full Schema19 recipe JSON")
	var id:String=f.groups.venetian_loggia[0];var prior:Dictionary=city.houses[city._house_index(id)].duplicate(true)
	check(city.set_house_architecture(id,"belvedere_villa").ok and city.undo().ok and city.houses[city._house_index(id)]==prior,"public choice and undo")
	check(city.redo().ok and city.houses[city._house_index(id)].architecture=="belvedere_villa","redo full choice")
	var blank:=Fixture.State.new();var all:Array=Choice.NEO+Choice.ALPINE+Choice.CLOCKWORK+Choice.RENAISSANCE
	check(all.size()==18 and all.all(func(k):return Choice.valid(k) and Choice.label(k)!="随形生长"),"eighteen stable IDs with actual labels")
	# New public construction inside a real earned Renaissance district.
	var district:Dictionary=city.add_district([Vector2(-29,11),Vector2(-8,11)] as Array[Vector2],8.)
	check(district.ok and city.set_district_era(district.district_id,"renaissance").ok,"earned era district")
	check(city.add_water([Vector2(-30,14.8),Vector2(-6,14.8)] as Array[Vector2],2.4,"pond").ok,"real nearby channel")
	var born:Dictionary=city.add_house(Vector2(-26,11))
	check(born.ok and city.houses[city._house_index(born.house_id)].get("architecture","")=="venetian_loggia","public new house seeds from actual water clearance")
	var created:Dictionary=city.snapshot();var undone:Dictionary=city.undo();var redone:Dictionary=city.redo();var replayed:Dictionary=city.snapshot();created.erase("revision");replayed.erase("revision");check(undone.ok and redone.ok and replayed==created,"context seed belongs to same undo transaction; revision remains monotonic")
	var stroke:Dictionary=city.add_house_stroke(Vector2(-20,11),[{"x":0,"z":0,"level":0,"kind":"room"}])
	check(stroke.ok and city.houses[city._house_index(stroke.house_id)].get("architecture","")=="venetian_loggia","continuous construction also seeds real water context")
	check(city.add_terrain_stroke([Vector2(-12,10)] as Array[Vector2],"raise",3.,.65,2).ok,"real raised hill")
	var hill:Dictionary=city.add_house(Vector2(-12,10))
	check(hill.ok and city.houses[city._house_index(hill.house_id)].get("architecture","")=="belvedere_villa","new public hill house seeds lookout")
	var corner_district:Dictionary=city.add_district([Vector2(-28,22),Vector2(-8,22)] as Array[Vector2],8.)
	check(corner_district.ok and city.set_district_era(corner_district.district_id,"renaissance").ok,"real corner district")
	check(city.add_road([Vector2(-23.7,19),Vector2(-23.7,25)] as Array[Vector2]).ok and city.add_road([Vector2(-26,23.7),Vector2(-18,23.7)] as Array[Vector2]).ok,"real perpendicular streets")
	var corner:Dictionary=city.add_house(Vector2(-22,22))
	check(corner.ok and city.houses[city._house_index(corner.house_id)].get("architecture","")=="venetian_loggia","new street corner seeds loggia without nearby water")

	var round:=Fixture.State.new();check(round.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok,"seeded choices remain legal JSON")
	blank._undo.clear();blank._redo.clear();r.free()
	print("RENAISSANCE_PROTOTYPES ",JSON.stringify({"checks":count,"failures":failures,"ok":failures.is_empty()}));quit(0 if failures.is_empty() else 1)
