extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Surface=preload("res://scripts/visual/city_creation_terrain_surface.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var city:=State.new();city.initialize();city.prepare_ground_height()
	city.add_house(Vector2(-25,12));city.prepare_ground_height()
	var original:Dictionary=city.snapshot();var surface:=Surface.new();surface.state=city
	var changes:Array=surface.prepare_blocks();var area:=0.;var blocks:Dictionary={}
	for change:Array in changes:area+=change[1].get_area();blocks[change[0]]=true
	_check(changes.size()==36 and blocks.size()==36 and is_equal_approx(area,96.*96.),"fresh surface covers all thirty-six terrain chunks even after a populated city's local height-cache update")
	_check(surface.prepare_blocks().is_empty(),"unchanged repeated preparation emits no terrain chunks")
	var points:Array[Vector2]=[Vector2(20,-20)]
	_check(city.add_terrain_stroke(points,"raise",2.,.65).ok,"actual isolated terrain brush commits")
	changes=surface.prepare_blocks()
	_check(changes.size()>0 and changes.size()<=4,"subsequent small brush retains one-to-four-chunk incremental updates")
	_check(surface.prepare_blocks().is_empty(),"settled brush does not upload unchanged terrain again")
	_check(city.undo().ok,"actual brush undo succeeds")
	changes=surface.prepare_blocks()
	_check(changes.size()>0 and changes.size()<=4 and city.snapshot().terrain_strokes==original.terrain_strokes,"undo changes only affected terrain while preserving exact authored strokes")
	surface.free();print("TERRAIN_INITIAL_COVERAGE ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
