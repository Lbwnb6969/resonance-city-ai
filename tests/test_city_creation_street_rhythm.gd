extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Context=preload("res://scripts/visual/city_creation_building_context.gd")
const Rhythm=preload("res://scripts/visual/city_creation_street_rhythm.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Mass=preload("res://scripts/visual/city_creation_ancient_mass.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
 checks+=1
 if not ok:failures.append(label);push_error(label)
static func fixture()->RefCounted:
 var city:=State.new();city.initialize_empty();var id:String=city.add_house(Vector2(-24,-15)).house_id
 city.add_cell(id,1,0,0);city.add_cell(id,2,0,0);city.add_cell(id,1,0,1);city.set_house_architecture(id,"townhouse")
 city.add_cell(id,1,1,0,"terrace");city.add_road([Vector2(-28,-12.5),Vector2(-14,-12.5)] as Array[Vector2]);return city
func _initialize()->void:run.call_deferred()
func run()->void:
 var city:=fixture();var house:Dictionary=city.houses[0];var context:=Context.new();context.prepare(city.houses,city.roads);var before:Dictionary=city.snapshot()
 var middle:Dictionary=house.cells[1]
 check(Rhythm.profile(context,house,house.cells[0],Vector2i.DOWN).kind=="row_end","actual row has terminal bay")
 check(Rhythm.profile(context,house,middle,Vector2i.UP).kind=="inner_row","actual inner bay has both neighbors")
 check(Rhythm.profile(context,house,house.cells[0],Vector2i.LEFT).kind=="gable_end","actual free end wall has room behind")
 check(Rhythm.profile(context,house,middle,Vector2i.DOWN).kind=="courtyard","authored terrace creates courtyard-facing facade")
 check(not Rhythm.profile(context,house,middle,Vector2i.UP).top and Rhythm.profile(context,house,house.cells[3],Vector2i.UP).top,"terminal cornice follows actual upper room coverage")
 var r:=Renderer.new();root.add_child(r);r.state=city;r.buildings=Node3D.new();r.add_child(r.buildings)
 for n in [r.shore,r.lilypads,r.wildlife]:r.add_child(n)
 var built:Node3D=r._house(house)
 check(built.find_children("StreetRhythm*","Node3D",true,false).size()>0,"actual derived street rhythm geometry exists")
 check(built.find_children("RomanEntryLintel*","MeshInstance3D",true,false).size()==1 and built.find_children("GreekClosedPediment*","MeshInstance3D",true,false).is_empty() and not built.has_meta("ancient_villa"),"townhouse has one quiet principal lintel and no repeated Greek pediments or automatic villa override")
 var end_windows:Array=[]
 for node:Node in built.find_children("*","Node3D",true,false):
  if node.has_meta("street_openings") and node.get_meta("street_openings").kind=="gable_end":end_windows.append(node)
 check(not end_windows.is_empty() and end_windows.all(func(n):return n.get_meta("street_openings").positions.size()==1),"real end elevation has one wider arch instead of duplicated paired windows")
 check(city.snapshot()==before,"rendered rhythm never changes saved cells or progression")
 var flat:Dictionary=house.duplicate(true);flat.cells=[flat.cells[0]];check(Mass.temple(flat).is_empty(),"single-room townhouse keeps Roman identity")
 flat.architecture="portico";check(not Mass.temple(flat).is_empty(),"explicit Greek portico still has true full-width temple")
 check(city.rotate_house(str(house.id),PI*.5).ok,"public quarter turn")
 context.prepare(city.houses,city.roads);check(Rhythm.profile(context,city.houses[0],city.houses[0].cells[1],Vector2i.UP).kind=="inner_row","own authored row still classified in rotated design frame")
 var copy:=State.new();check(copy.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok and copy.snapshot()==city.snapshot(),"rotated street form cold roundtrip")
 var slope:=State.new();slope.initialize_empty();slope.add_terrain_stroke([Vector2(-24,-15)] as Array[Vector2],"raise",5.,.8,2)
 var slope_id:String=slope.add_house(Vector2(-24,-15)).house_id;slope.add_cell(slope_id,1,0,0);slope.set_house_architecture(slope_id,"townhouse");r.state=slope
 r.building_context.prepare(slope.houses,slope.roads)
 var sloped:Node3D=r._house(slope.houses[0]);check(float(slope.houses[0].base_y)>0. and not sloped.find_children("StreetRhythm*","Node3D",true,false).is_empty(),"raised terrain retains base-height architectural placement and end geometry")
 check(slope.snapshot().houses[0].cells.size()==2 and slope.add_road([Vector2(-28,-12.5),Vector2(-18,-12.5)] as Array[Vector2]).ok,"shallow facade details leave real street authoring clearance on raised terrain")
 r.free();print("STREET_RHYTHM ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
