extends SceneTree
const Demo=preload("res://scripts/ui/city_creation_demo.gd")
const Music=preload("res://scripts/audio/city_creation_music.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const Growth=preload("res://scripts/world/city_creation_growth.gd")
const Fixture=preload("res://tools/fixtures/city_creation_large_town_fixture.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _compare(demo:Node3D,oracle:Node,label:String)->void:
	demo._refresh_city_music();oracle.update_city(demo.state)
	_check(demo.music._house_music==oracle._house_music and demo.music._targets==oracle._targets and demo.music._daily_houses==oracle._daily_houses and demo.music.tower_count()==oracle.tower_count(),"actual complete music catalogue equals uncached production derivation: "+label)
func _run()->void:
	var demo:=Demo.new();demo.state=Fixture.build(300,true);demo.music=Music.new();demo.add_child(demo.music);var oracle:=Music.new()
	_compare(demo,oracle,"three hundred four-era households")
	var row:Dictionary=demo.music._house_music.h1;var points:Array[Vector2]=[Vector2(-25,29)]
	_check(demo.state.add_terrain_stroke(points,"raise",1.,1.,2).ok,"actual unrelated free-ground sculpt commits")
	_compare(demo,oracle,"actual terrain revision")
	_check(is_same(row,demo.music._house_music.h1),"terrain refresh preserves actual derived catalogue records instead of rebuilding household timbres")
	_check(demo.music._manual_revision==demo.state.revision,"manual reply membership still observes the new actual state revision")
	demo.state.house_improvements.h1=2;_compare(demo,oracle,"wood installation without construction revision")
	demo.state.house_culture.h1=1;_compare(demo,oracle,"art installation without construction revision")
	demo.state.house_clockwork.h1=1;_compare(demo,oracle,"mechanism installation without construction revision")
	demo.state.building_quality.h1={"level_tier":4};_compare(demo,oracle,"actual runtime quality ledger without construction revision")
	_check(demo.state.set_house_role("h1","venue").ok,"actual household role edit")
	_compare(demo,oracle,"changed household role")
	demo.state=State.new();demo.state.initialize();_compare(demo,oracle,"switch to another actual city")
	var a:=State.new();a.initialize();var bridge:Array[Vector2]=[Vector2(-1,-10),Vector2(8,-10)]
	_check(a.add_road(bridge).ok and a.produce_bread("h2",1) and a.record_concert_completion("h4")==60.,"real bridge and public completed production/concert ledgers make the first journal chapter ready")
	var b:=State.new();b.restore(a.snapshot());var rows:=Growth.report(a);var before:=var_to_bytes(rows)
	_check(a.refresh_growth(rows)==b.refresh_growth() and a.snapshot()==b.snapshot(),"reusing the current report awards exactly the same chapters, era unlocks and persistent values as fresh evaluation")
	_check(var_to_bytes(rows)==before,"journal reward evaluation never mutates its prepared report")
	_check(a.refresh_growth(Growth.report(a)).is_empty() and a.snapshot()==b.snapshot(),"subsequent shared-report refresh remains idempotent")
	oracle.free();demo.free();print("MUSIC_CATALOG_REFRESH ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
