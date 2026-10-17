extends RefCounted
## The orthographic rig stays at least 42m from its focus. Calibrate actual
## GPU distances above that base so close-up detail remains visible.
const FINE_GRASS:=56.
const PEBBLES:=52.
const CHIME:=54.
const FLOWERBOX:=58.
const FURNITURE:=64.
const SMOKE:=64.
const GALLERY:=80.
static func bind(instance:GeometryInstance3D,end:float)->void:
	instance.visibility_range_end=end
	instance.visibility_range_end_margin=2.
	# Compatibility uses native range hysteresis; forward rendering can fade.
	instance.visibility_range_fade_mode=GeometryInstance3D.VISIBILITY_RANGE_FADE_SELF if RenderingServer.get_current_rendering_method()=="forward_plus" else GeometryInstance3D.VISIBILITY_RANGE_FADE_DISABLED
static func bind_tree(root:Node,end:float)->void:
	for instance:GeometryInstance3D in root.find_children("*","GeometryInstance3D",true,false):
		if instance.visibility_range_end==0.:bind(instance,end)
