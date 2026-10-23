extends RefCounted
## Broad facade rhythm, not only rooftop props: timber screens, stone piers,
## ribbon glazing and planted loggias all use the existing lit paper materials.
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
static func facade(renderer,wall:Node3D,door:bool,seed:int,p:Array)->void:
	var kind:=posmod(seed,4)
	var wood:Material=Wall.source(p[2],null,"component",Wall.Kind.STONE)
	var stone:Material=Wall.source(p[0],null,"component",Wall.Kind.CANTILEVER)
	var warm:=posmod(seed*31,100)<35
	var pane:MeshInstance3D=renderer._box(wall,Vector3(1.58,1.40,.035),Vector3(0,.85,.018),stone)
	pane.material_override=renderer.conservatory.ensure_material(warm);pane.set_meta("creation_live_visual",true);pane.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	match kind:
		0:
			for x:float in [-.81,-.54,.54,.81]:renderer._box(wall,Vector3(.07,1.46,.18),Vector3(x,.85,.10),wood)
			renderer._box(wall,Vector3(1.78,.08,.24),Vector3(0,1.55,.12),wood)
		1:
			for x:float in [-.72,.72]:renderer._box(wall,Vector3(.26,1.58,.20),Vector3(x,.83,.08),stone)
			renderer._box(wall,Vector3(1.80,.15,.27),Vector3(0,1.55,.10),stone)
		2:
			renderer._box(wall,Vector3(1.78,.22,.13),Vector3(0,1.49,.09),wood)
			renderer._box(wall,Vector3(1.84,.065,.42),Vector3(0,1.62,.19),stone)
			for x:float in [-.83,.83]:renderer._box(wall,Vector3(.045,1.40,.08),Vector3(x,.80,.05),wood)
		3:
			var side:float=-1. if posmod(seed,3)==0 else 1.
			renderer._box(wall,Vector3(.44,1.53,.18),Vector3(side*.65,.84,.09),wood)
			for x:float in [-.83,.0,.83]:renderer._box(wall,Vector3(.045,1.46,.10),Vector3(x,.86,.06),wood)
			renderer._box(wall,Vector3(1.78,.065,.18),Vector3(0,1.58,.08),stone)
	if door:
		renderer._box(wall,Vector3(.57,1.18,.055),Vector3(0,.73,.065),renderer._material(Color("526d60")))
		renderer._box(wall,Vector3(.035,.24,.055),Vector3(.18,.75,.11),wood)
	else:preload("res://scripts/visual/city_creation_modern_archetypes.gd").populate_facade_greenery(renderer,wall,seed,wood)
	wall.set_meta("modern_glass",{"warm":warm,"floor_to_ceiling":true,"envelope":kind})
static func roof(renderer,node:Node3D,y:float,p:Array,kind:int)->void:
	var size:Vector2=[Vector2(2.22,2.08),Vector2(2.02,2.22),Vector2(2.22,1.98),Vector2(2.22,2.22)][kind]
	renderer.Modern._slab(renderer,node,Vector3(0,y+.03,0),size,.16,p[0])
	if kind==3:
		renderer.Modern._slab(renderer,node,Vector3(.54,y+.23,-.46),Vector2(1.12,.92),.18,p[0])
	node.set_meta("modern_mass_profile",kind)
