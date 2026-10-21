extends SceneTree
const Budget=preload("res://scripts/visual/city_creation_budget_rebuild.gd")
class BusyBookkeeping extends Budget:
	func _task_units(_task:Array)->int:
		# Preparing a task's records can exceed 80us without consuming the
		# frame's useful work slice. An old peak prediction must not stall it.
		OS.delay_usec(250)
		return 1
	func _step(_task:Array)->bool:return true
func _initialize()->void:
	var budget:=BusyBookkeeping.new();var owner:=Node3D.new();var staging:=Node3D.new()
	budget.staging=staging;budget._task_peak_ms.house=10.
	for i:int in range(5):budget.tasks.append(["house",i])
	var failures:Array[String]=[]
	for i:int in range(5):
		var previous:=budget.task_index
		budget.poll(owner,3.5,false)
		if previous<5 and budget.task_index<=previous:failures.append("a prepared task must make useful progress despite an oversized historic prediction")
	var complete:=budget.task_index==5
	budget.staging=null;staging.free();owner.free()
	print("BUDGET_PROGRESS ",JSON.stringify({"checks":6,"failures":failures,"ok":failures.is_empty() and complete}))
	quit(0 if failures.is_empty() and complete else 1)
