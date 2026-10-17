extends RefCounted
## Townscaper's press/release idea, applied only to visuals. Picking and resident
## collision bodies retain their published metre coordinates throughout.
var active: Dictionary = {}
var pending: Dictionary = {}

func request(renderer: Node3D, id: String, strength: float = 0.06) -> void:
	var root: Node3D = renderer.house_roots.get(id)
	if root == null: return
	if active.has(id) and is_instance_valid(active[id].pivot):
		active[id].pivot.scale = Vector3.ONE
	var pivot: Node3D = root.get_node_or_null("TouchVisualPivot")
	if pivot == null:
		pivot = Node3D.new()
		pivot.name = "TouchVisualPivot"
		var house: Dictionary = renderer._house_record(id)
		pivot.position = Vector3(house.origin[0], house.get("base_y", 0.0), house.origin[1])
		root.add_child(pivot)
		for child: Node in root.get_children():
			if child is MeshInstance3D or child.name == "ResonanceVisualPivot":
				child.reparent(pivot, true)
	active[id] = {"pivot":pivot, "elapsed":0.0, "strength":strength}
	var house: Dictionary = renderer._house_record(id)
	renderer.wildlife.uproot_near(Vector2(house.origin[0],house.origin[1]))

func queue(id: String, strength: float = 0.085) -> void:
	if not id.is_empty(): pending[id] = strength

func publish(renderer: Node3D) -> void:
	for id: String in pending: request(renderer, id, float(pending[id]))
	pending.clear()

func update(delta: float) -> void:
	for id: String in active.keys():
		var row: Dictionary = active[id]
		if not is_instance_valid(row.pivot):
			active.erase(id)
			continue
		row.elapsed = float(row.elapsed) + minf(delta, 0.05)
		var t := float(row.elapsed)
		var press := -float(row.strength) * cos(t*25.0) * exp(-t*11.0)
		row.pivot.scale = Vector3(1.0-press*0.45, 1.0+press, 1.0-press*0.45)
		if t >= 0.55:
			row.pivot.scale = Vector3.ONE
			active.erase(id)
