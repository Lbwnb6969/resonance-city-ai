extends Node
## The same legal-space search runs on an isolated city snapshot.
const State=preload("res://scripts/world/city_creation_state.gd")
const Sites=preload("res://scripts/world/city_creation_vignette_sites.gd")
var worker:Thread
var journey:Node
var requested:Array=[]
var manual:=false
static func key(city:RefCounted)->Array:return [city.get_instance_id(),city.revision,city._wish_epoch,city.era_unlocks.duplicate()]
static func available(owner:Node,replace:bool=false)->bool:
	var city:RefCounted=owner.demo.state
	var cached:Dictionary=city.get_meta("vignette_proposal_cache",{})
	if cached.get("key",[])==[city.revision,city._wish_epoch,city.era_unlocks.duplicate()]:return true
	var node=owner.get_node_or_null("SiteSearch")
	if node==null:node=load("res://scripts/world/city_creation_vignette_site_worker.gd").new();node.name="SiteSearch";node.journey=owner;owner.add_child(node)
	node.manual=node.manual or replace
	if node.worker==null:
		node.requested=key(city);var snapshot:Dictionary=city.snapshot().duplicate(true);node.worker=Thread.new();node.worker.start(node.derive.bind(snapshot))
	return false
func derive(snapshot:Dictionary)->Dictionary:
	var city:=State.new();var restored:=city.restore(snapshot)
	return {"ok":restored.ok,"rows":Sites._derive_proposals(city) if restored.ok else {}}
func _process(_delta:float)->void:
	if worker==null or worker.is_alive():return
	var result:Dictionary=worker.wait_to_finish();worker=null
	var city:RefCounted=journey.demo.state
	if requested!=key(city):
		if manual:available(journey,true)
		return
	if result.ok:city.set_meta("vignette_proposal_cache",{"key":[city.revision,city._wish_epoch,city.era_unlocks.duplicate()],"rows":result.rows})
	if manual and result.ok and not journey.demo.edit_pending() and not journey.demo.gallery.busy:manual=false;journey.replace.call_deferred()
func _exit_tree()->void:
	if worker!=null:worker.wait_to_finish();worker=null
