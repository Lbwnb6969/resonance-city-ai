extends RefCounted
const Rules=preload("res://scripts/world/city_creation_terrain_target_rules.gd")
static func apply(demo,plan:Dictionary)->Dictionary:
	if not plan.get("ok",false):return plan
	var backup:Dictionary={}
	# Crossing a format boundary keeps a real immutable work before editing.
	if plan.changed_vertices>0 and not demo.state.terrain_strokes.is_empty() and not Rules.has_target(demo.state.terrain_strokes):
		demo.gallery._set_busy(true)
		backup=await demo.gallery._capture("定高台地前的河湾","before_terrain_rules")
		demo.gallery._set_busy(false)
		if not backup.ok:return demo.state._fail("未能备份原地形，这一笔尚未提交")
	var result:Dictionary=demo.state.apply_terrain_target(plan)
	if result.ok and not backup.is_empty():result.backup_id=backup.id
	return result
