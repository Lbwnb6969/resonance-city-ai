extends RefCounted
## Raised outlines precede window lights; chimney siting respects both geometries.
static func build(r,parent:Node3D,house:Dictionary,palette:Array)->void:
	preload("res://scripts/visual/city_creation_gable_trim.gd").build(r,parent,house,palette)
	preload("res://scripts/visual/city_creation_terracotta_skylights.gd").build(r,parent,house,palette)
	preload("res://scripts/visual/city_creation_chimney_details.gd").build(r,parent,house,palette)
