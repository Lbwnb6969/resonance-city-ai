extends RefCounted
## Local geometric inputs invalidate only the junction signatures they can reach.
const Changes = preload("res://scripts/world/city_creation_change_set.gd")
static func invalidate(context: Node3D, changes: Dictionary) -> Dictionary:
	var regions: Array[Rect2] = []
	for row: Dictionary in changes.get("bounds",[]):
		if row.domain not in ["roads","houses","waters","terrain"]: continue
		for side: String in ["old","new"]:
			var area: Rect2 = row[side]
			if area.has_area(): regions.append(area.grow(4.))
	var live: Dictionary = {}
	var invalidated: Array[String] = []
	for road: Dictionary in context.state.roads:
		var id := str(road.id)
		live[id] = true
		if not context.road_join_signatures.has(id): continue
		var area: Rect2 = Changes._bounds("roads",road)
		for region: Rect2 in regions:
			if area.intersects(region,true):
				context.road_join_signatures.erase(id)
				invalidated.append(id)
				break
	for id: String in context.road_join_signatures.keys():
		if not live.has(id): context.road_join_signatures.erase(id); invalidated.append(id)
	return {"invalidated":invalidated,"retained":context.road_join_signatures.size(),"regions":regions.size()}
static func invalidate_sync(context: Node3D) -> Dictionary:
	var previous: Dictionary = context.budget_rebuild._published_snapshot if context.budget_rebuild != null else {}
	return invalidate(context,Changes.diff(previous,Changes.snapshot(context.state)))
