extends RefCounted
## Pending memories follow real published facts; saved memories stay immutable.
const CAPTIONS:={"first_courtyard":"房屋围出一方安静的院落","first_bridge":"石拱桥跨过了水面","first_plaza":"第一片石板广场铺成了","first_tea":"茶桌旁的座位都坐满了"}
var fixed:Array=[]
var pending:Array=[]
var baseline:Dictionary={}
var previous:Dictionary={}
var undo_size:=0
var redo_size:=0
func start(rows:Array,facts:Dictionary,undo:int,redo:int)->void:
	fixed=rows.duplicate(true);pending.clear();baseline=facts.duplicate();previous=facts.duplicate();undo_size=undo;redo_size=redo
func rows()->Array:
	var result:Array=fixed.duplicate(true);result.append_array(pending.duplicate(true))
	return result.slice(maxi(0,result.size()-12))
func observe(facts:Dictionary,undo:int,redo:int,published:bool,at_sec:float)->void:
	if not published:return
	if redo>redo_size and undo<undo_size:pending=pending.filter(func(row):return facts.get(row.kind,false))
	for kind:String in CAPTIONS:
		if facts.get(kind,false) and not previous.get(kind,false) and not baseline.get(kind,false) and not rows().any(func(row):return row.kind==kind):pending.append({"kind":kind,"at_sec":at_sec,"caption":CAPTIONS[kind]})
	previous=facts.duplicate();undo_size=undo;redo_size=redo
func persisted()->void:fixed=rows();pending.clear()
static func geometry(city:RefCounted)->Dictionary:
	var bridge:=false
	for road:Dictionary in city.roads:
		for run:Dictionary in city.road_profile(road).get("bridge_runs",[]):
			if str(run.get("family","")).is_empty():bridge=true;break
	return {"first_courtyard":not city.courtyard_plans().is_empty(),"first_bridge":bridge,"first_plaza":not preload("res://scripts/world/city_creation_plaza_loops.gd").plans(city).is_empty(),"first_tea":false}

static func full_tea(cafe)->bool:
	for id:String in cafe.groups:
		var status:Dictionary=cafe.status(id);var layout:Dictionary=cafe.layouts.get(id,{})
		if status.phase=="tea" and not layout.is_empty() and int(status.seated_count)==layout.seats.size() and int(status.seated_count)>=2:return true
	return false
