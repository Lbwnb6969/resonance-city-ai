class_name CityCreationHouseStroke
extends RefCounted
## Trace a continuous pointer path through local cell boundaries. Crossing a
## corner takes x then z, so sparse diagonal events still form a connected row.
const UNIT := 1.8
var cells: Array[Dictionary] = []
var _seen: Dictionary = {}
var _last := Vector2.ZERO
var _level := 0
var _kind := "room"

func begin(cell: Dictionary) -> void:
	cells.clear()
	_seen.clear()
	_last=Vector2(float(cell.x),float(cell.z))
	_level=int(cell.level)
	_kind=str(cell.kind)
	_append(Vector2i(int(cell.x),int(cell.z)))

func append(local_position: Vector2) -> bool:
	var point := local_position/UNIT
	var current := _grid(_last)
	var finish := _grid(point)
	var delta := point-_last
	var step := Vector2i(signi(finish.x-current.x),signi(finish.y-current.y))
	var tx := INF if step.x==0 else (current.x+0.5*step.x-_last.x)/delta.x
	var tz := INF if step.y==0 else (current.y+0.5*step.y-_last.y)/delta.y
	var dx := INF if step.x==0 else 1.0/absf(delta.x)
	var dz := INF if step.y==0 else 1.0/absf(delta.y)
	var count := cells.size()
	while current!=finish:
		if current.x!=finish.x and (current.y==finish.y or tx<=tz):
			current.x+=step.x
			tx+=dx
		else:
			current.y+=step.y
			tz+=dz
		_append(current)
	_last=point
	return count!=cells.size()

func _grid(point: Vector2) -> Vector2i:
	return Vector2i(floori(point.x+0.5),floori(point.y+0.5))

func _append(point: Vector2i) -> void:
	if _seen.has(point): return
	_seen[point]=true
	cells.append({"x":point.x,"z":point.y,"level":_level,"kind":_kind})
