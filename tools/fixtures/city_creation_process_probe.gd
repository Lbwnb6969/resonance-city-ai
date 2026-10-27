extends Node
var watched:Node
var begin:=true
var label:=""
func _process(_delta:float)->void:
	if begin:watched.set_meta("qa_process_start",Time.get_ticks_usec());return
	var elapsed:float=(Time.get_ticks_usec()-int(watched.get_meta("qa_process_start",Time.get_ticks_usec())))/1000.
	if elapsed>150.:print("PROCESS_SPAN ",label," ",elapsed)
static func install(root:Node)->void:
	var nodes:Array[Node]=[root]
	var index:=0
	while index<nodes.size():
		var node:Node=nodes[index];nodes.append_array(node.get_children());index+=1
	for node:Node in nodes:
		if not node.is_processing() or node.get_parent()==null:continue
		var parent:Node=node.get_parent();var before=load("res://tools/fixtures/city_creation_process_probe.gd").new();var after=load("res://tools/fixtures/city_creation_process_probe.gd").new()
		for probe:Node in [before,after]:probe.watched=node;probe.label=str(node.get_path());probe.process_priority=node.process_priority;parent.add_child(probe)
		after.begin=false;parent.move_child(before,node.get_index());parent.move_child(after,node.get_index()+1)
