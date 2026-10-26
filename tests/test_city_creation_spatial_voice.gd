extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Voice=preload("res://scripts/world/city_creation_spatial_voice.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
 checks+=1
 if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
static func fixture()->RefCounted:
 var city:=State.new();city.initialize_empty()
 for x:float in [-36.,-32.,-28.,-20.,-16.,-12.]:city.add_house(Vector2(x,-22))
 city.add_road([Vector2(-38,-20.45),Vector2(-26,-20.45)] as Array[Vector2]);city.add_road([Vector2(-22,-20.45),Vector2(-10,-20.45)] as Array[Vector2]);city.add_road([Vector2(-26,-20.45),Vector2(-22,-20.45)] as Array[Vector2])
 return city
func run()->void:
 var city:=fixture();var snap:Dictionary=city.snapshot()
 check(city.districts.size()==2 and city.districts.all(func(d):return d.has("auto_members")),"physical frontage roads retain two automatic neighborhoods")
 check(city.house_acoustic_style(city.houses[0])=="warm" and city.snapshot()==snap,"default voice is pure and leaves authored snapshot unchanged")
 var water:Dictionary=city.add_water([Vector2(-20,-18)] as Array[Vector2],2.,"pond");check(water.ok,"actual nearby pond")
 check(city.house_acoustic_style(city.houses[3])=="deep" and city.house_acoustic_style(city.houses[5])=="deep","real water derives one group voice without storing manual overrides")
 check(not city.houses[3].has("acoustic_style") and Voice.motion(city,city.houses[3])=="largo" and city.house_temperament("h4")=="andante" and city.temperament_speed("h4")==1.,"audible motion never writes economic temperament or changes its existing multiplier")
 var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
 var pairs:Array=life.district_reply_pairs();check(not pairs.is_empty() and pairs.all(func(p):return p.distance<=22.),"actual connected road enables reply across automatically derived districts")
 var connector:String=city.roads[-1].id;city.remove_road(connector);life._sync();check(life.district_reply_pairs().is_empty(),"removing real connecting road removes automatic answer")
 city.undo();life._sync();check(not life.district_reply_pairs().is_empty(),"undo restores actual network answer")
 city.remove_water_at(Vector2(-20,-18));check(city.house_acoustic_style(city.houses[3])=="warm","water removal invalidates spatial defaults")
 city.set_house_role("h4","garden_cafe");check(city.house_acoustic_style(city.houses[3])=="market" and Voice.motion(city,city.houses[3])=="allegro","real cafe gives social group musical motion")
 city.set_cluster_style("h4","weave");city.set_house_temperament("h4","largo")
 check(city.house_acoustic_style(city.houses[3])=="weave" and Voice.motion(city,city.houses[3])=="largo","authored style and saved temperament override automatic defaults")
 var before:Dictionary=city.houses[0].duplicate(true);city.set_house_style("h1","timber");before=city.houses[0].duplicate(true)
 check(city.set_house_architecture("h1","townhouse").ok and not city.houses[0].has("style"),"explicit new prototype supplies compatible material for legacy timber house")
 city.undo();check(city.houses[0]==before,"prototype/material change is one reversible transaction")
 city.set_house_role("h1","workshop");city.place_plant(Vector2(-36,-17),"olive");city.place_plant(Vector2(-32,-17),"olive")
 check(city.house_acoustic_style(city.houses[0])=="sylvan","real visible trees and luthier derive forest voice")
 var old:=State.new();old.initialize();check(old.house_acoustic_style(old.houses[0])==str(old.district_for_house(str(old.houses[0].id)).get("style","warm")),"legacy cities retain their original district defaults")
 var modern:RefCounted=preload("res://tools/fixtures/city_creation_modern_fixture.gd").earned_city();modern.automatic_neighborhoods=true;modern.set_house_role("h1","clockmaker")
 check(Voice.rows(modern).h1.style=="market" and Voice.motion(modern,modern.houses[0])=="allegro" and modern.temperament_speed("h1")==1.,"earned clock workshop gives musical motion without changing economic temperament")
 var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok and cold.snapshot()==city.snapshot(),"manual overrides and automatic neighborhoods cold restore exactly")
 life.free();print("SPATIAL_VOICE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
