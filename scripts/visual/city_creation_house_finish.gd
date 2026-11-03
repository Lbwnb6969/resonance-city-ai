extends RefCounted
## Final frontage details inspect the finished original shell and food counter.
static func build(r,parent:Node3D,house:Dictionary)->void:
	preload("res://scripts/visual/city_creation_boathouse.gd").build(r,parent,house)
	preload("res://scripts/visual/city_creation_upper_stoop.gd").build(r,parent,house)
	preload("res://scripts/visual/city_creation_party_joint_details.gd").build(r,parent,house)
	preload("res://scripts/visual/city_creation_grillhouse.gd").attach(r,parent,house)
	preload("res://scripts/visual/city_creation_porch_details.gd").build(r,parent,house)
	preload("res://scripts/visual/city_creation_detail_status.gd").publish(r.state,parent,house)
