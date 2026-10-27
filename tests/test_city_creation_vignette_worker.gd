extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Sites=preload("res://scripts/world/city_creation_vignette_sites.gd")
const Search=preload("res://scripts/world/city_creation_vignette_site_worker.gd")
class Gallery extends Node:
	var busy:=false
class Host extends Node:
	var state:RefCounted
	var gallery:Node
	func edit_pending()->bool:return false
class Journey extends Node:
	var demo:Node
	var replacements:=0
	func replace()->void:replacements+=1
var failures:Array=[]
var checks:=0
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func wait_search(journey:Node)->void:
	var until:=Time.get_ticks_msec()+20000
	while journey.get_node("SiteSearch").worker!=null and Time.get_ticks_msec()<until:await process_frame
	await process_frame
func run()->void:
	var host:=Host.new();host.state=State.new();host.state.initialize_empty();host.state.add_house(Vector2(-25,-12));root.add_child(host)
	var gallery:=Gallery.new();host.gallery=gallery
	var journey:=Journey.new();journey.demo=host;host.add_child(journey)
	check(not Search.available(journey),"uncached legal-space search leaves the caller immediately")
	await wait_search(journey)
	check(Search.available(journey) and Sites.proposals(host.state)==Sites._derive_proposals(host.state),"worker result equals the authoritative exact same housing/road/plant gates")
	host.state.add_house(Vector2(-21,-12));check(not Search.available(journey),"an actual geometry edit starts a fresh snapshot search")
	host.state.add_house(Vector2(-17,-12));await wait_search(journey)
	check(not Search.available(journey),"the obsolete first edit result is discarded after a second real edit")
	await wait_search(journey)
	check(Search.available(journey) and Sites.proposals(host.state)==Sites._derive_proposals(host.state),"latest actual city receives the exact authoritative proposals")
	check(not host.state.snapshot().has("vignette_proposal_cache"),"background derived results stay out of personal save data")
	gallery.free();host.queue_free();await process_frame
	print("VIGNETTE_WORKER ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
