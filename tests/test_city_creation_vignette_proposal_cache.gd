extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_vignette_fixture.gd")
const Sites=preload("res://scripts/world/city_creation_vignette_sites.gd")
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
 checks+=1
 if not ok:failures.append(label);push_error(label)
func current(city)->void:
 check(Sites.proposals(city)==Sites._derive_proposals(city),"cached proposals equal current authoritative build gates")
func run()->void:
 var city:RefCounted=Fixture.start(Fixture.Vignettes.IDS[0]);current(city)
 var initial:=Sites.proposals(city);var key:Array=city.get_meta("vignette_proposal_cache").key.duplicate(true)
 var copy:=Sites.proposals(city);copy.clear()
 check(Sites.proposals(city)==initial and city.get_meta("vignette_proposal_cache").key==key,"consumer mutation does not poison the cached proposals")
 var edits:Array=Fixture.construct(city);check(not edits.is_empty() and edits.all(func(r):return r.ok),"actual public construction changes legal plots")
 current(city);check(city.get_meta("vignette_proposal_cache").key!=key,"public edit invalidates geometric proposal cache")
 check(city.undo().ok,"actual undo");current(city)
 check(city.redo().ok,"actual redo");current(city)
 var before:Array=city.get_meta("vignette_proposal_cache").key.duplicate(true)
 city.era_unlocks.append("renaissance");current(city)
 check(city.get_meta("vignette_proposal_cache").key!=before,"era entitlement change invalidates cache even before geometry changes")
 city.era_unlocks.pop_back();current(city)
 var snapshot:Dictionary=city.snapshot();check(not snapshot.has("vignette_proposal_cache"),"derived cache never enters save format")
 check(city.restore(snapshot).ok,"full snapshot restores");current(city)
 print("VIGNETTE_PROPOSAL_CACHE ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}));quit(0 if failures.is_empty() else 1)
