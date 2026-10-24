extends RefCounted
## Era dispatch stays small; residential massing lives in Neoclassical.
const Ancient=preload("res://scripts/visual/city_creation_ancient_architecture.gd")
const Neo = preload("res://scripts/visual/city_creation_neoclassical.gd")

static func openings(renderer, job, frame, wall: Node3D, door: bool, active: bool, width: float) -> void:
	if Ancient.active(job.house,job.era):Ancient.openings(renderer,job,frame,wall,door,active,width);return
	if Neo.eligible(job.house, job.era, job.style) and not door and frame.retreats.is_empty() and width >= 1.79:
		Neo.windows(renderer, wall, int(frame.level), job.palette)
	else:
		renderer._facade(wall, job.palette, door, int(job.house.get("seed", 0)) + frame.x*17 + frame.z*31 + frame.level*7, active, width)

static func facade(renderer, job, frame, wall: Node3D, direction: Vector2i, door: bool, width: float) -> void:
	if Ancient.active(job.house,job.era):Ancient.facade(renderer,job,frame,wall,door,width);return
	if preload("res://scripts/world/city_creation_renaissance_prototype_plan.gd").active(renderer.state,job.house):return
	if not preload("res://scripts/world/city_creation_neoclassical_civic_plan.gd").guild(renderer.state,job.house).is_empty(): return
	if not Neo.eligible(job.house, job.era, job.style) or not frame.retreats.is_empty() or width < 1.79: return
	Neo.build(renderer, wall, job.house, frame.cell, direction, door, job.palette)
