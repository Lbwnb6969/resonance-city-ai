extends SceneTree
const Cache=preload("res://scripts/audio/city_creation_core_score_cache.gd")
class Host extends Node:
	var _pluck_city=preload("res://scripts/world/city_creation_state.gd").new()
	var _harmony_streams:Dictionary={}
	var _variation_active:Dictionary={}
	var audio_report:Dictionary={}
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func finish(node:Node)->void:
	while node.worker!=null and node.worker.is_alive():await process_frame
	node._process(0.)
func run()->void:
	var host:=Host.new();host._pluck_city.initialize_free();root.add_child(host)
	var id:=Cache.key("deep_flow",2,8,1,"lead",112)
	check(not Cache.request(host,id),"uncached score queues without synchronous synthesis")
	var node:=host.get_node("CoreScoreCache");node.set_process(false);node._process(0.)
	host._pluck_city.add_house(Vector2(-25,-20));await finish(node)
	check(not host._harmony_streams.has(id) and node.generated==0,"city revision change discards completed stale worker bundle")
	Cache.request(host,id);node._process(0.);await finish(node)
	check(host._harmony_streams.has(id) and node.generated==1,"fresh current revision accepts all four roles")
	check(Cache.request(host,id) and node.pending.is_empty(),"subsequent request is a real cache hit")
	for i in range(8):
		var next:=Cache.key(Cache.Core.STYLES[i%3],i%3,0,i%3,"lead",i)
		Cache.request(host,next);node._process(0.);await finish(node)
		node.prune(host)
	check(node.lru.size()<=6 and host._harmony_streams.size()<=24,"actual many bundles evict to six groups and24 streams")
	var signatures:Array=[]
	for row:Array in host.audio_report.get("harmony_notes",{}).values():signatures.append(hash(row))
	check(not signatures.is_empty(),"cached actual events remain available for runtime diagnostics")
	host.queue_free();await process_frame;await create_timer(.15).timeout
	print("CORE_CACHE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
