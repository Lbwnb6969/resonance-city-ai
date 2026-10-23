extends RefCounted
## Deterministic 4-archetype modern eco rooftop and facade generator.
## Eliminates repetitive 5-pot pentagons while sharing WallShader micro-normals & AO.
const Wall = preload("res://scripts/visual/city_creation_wall_material.gd")

enum RoofKind { PERGOLA_LOUVERS, SKYLIGHT_ATRIUM, STEPPED_BASIN, TERRACED_GARDEN }

static func roof_kind(house: Dictionary, cell: Dictionary) -> int:
	return posmod(hash([str(house.get("id", "")), int(cell.get("x", 0)), int(cell.get("z", 0)), int(cell.get("level", 0))]), 4)

static func populate_roof(renderer: Node3D, node: Node3D, house: Dictionary, cell: Dictionary, y: float, p: Array) -> void:
	var kind := roof_kind(house, cell)
	var detail := Node3D.new();detail.name="EcoRoof_"+str(cell.id);detail.set_meta("roof_kind",kind);node.add_child(detail);node=detail
	var stone: Material = Wall.source(p[0].darkened(0.06), null, "component", Wall.Kind.CANTILEVER)
	var wood: Material = Wall.source(p[2].lerp(Color("b8976a"), 0.72), null, "component", Wall.Kind.STONE)
	var planter: Material = Wall.source(Color("b59c79"), null, "component", Wall.Kind.STONE)
	match kind:
		RoofKind.PERGOLA_LOUVERS:
			# Warm timber pergola frame with 5 sunlit bioclimatic louvers + corner shrubs
			for x: float in [-0.62, 0.62]:
				for z: float in [-0.58, 0.58]:
					renderer._box(node, Vector3(0.06, 0.52, 0.06), Vector3(x, y + 0.42, z), wood)
			for x: float in [-0.62, 0.62]:
				renderer._box(node, Vector3(0.06, 0.06, 1.26), Vector3(x, y + 0.68, 0.0), wood)
			for i in range(5):
				var z := -0.48 + float(i) * 0.24
				renderer._box(node, Vector3(1.34, 0.035, 0.08), Vector3(0.0, y + 0.72, z), wood)
			for side: float in [-0.52, 0.52]:
				renderer._box(node, Vector3(0.28, 0.14, 0.24), Vector3(side, y + 0.23, 0.52), planter)
				_shrub(renderer,node, Vector3(side, y + 0.42, 0.52), Vector3(0.22, 0.20, 0.20), Color("628d5e"))
		RoofKind.SKYLIGHT_ATRIUM:
			# Raised limestone skylight curb with warm conservatory glass + asymmetric olive planter
			for side:float in [-1.,1.]:
				renderer._box(node, Vector3(.96,.16,.065), Vector3(-.14,y+.26,-.10+side*.38), stone)
				renderer._box(node, Vector3(.065,.16,.76), Vector3(-.14+side*.48,y+.26,-.10), stone)
			var glass: MeshInstance3D = renderer._box(node, Vector3(0.88, 0.045, 0.70), Vector3(-0.14, y + 0.34, -0.10), stone)
			glass.material_override = renderer.conservatory.ensure_roof_material()
			glass.set_meta("creation_live_visual", true)
			renderer._box(node, Vector3(0.36, 0.16, 0.84), Vector3(0.54, y + 0.24, 0.06), planter)
			for i in range(3):
				var z := -0.24 + float(i) * 0.26
				_shrub(renderer,node, Vector3(0.54, y + 0.45 + float(i % 2) * 0.05, z), Vector3(0.21, 0.23, 0.20), Color("5b8659").lightened(float(i) * 0.05))
		RoofKind.STEPPED_BASIN:
			# Stepped eco reflection tray + L-shaped sedum hedge
			renderer._box(node, Vector3(0.88, 0.10, 0.68), Vector3(0.18, y + 0.20, 0.16), stone)
			var basin: MeshInstance3D = renderer._box(node, Vector3(0.74, 0.04, 0.54), Vector3(0.18, y + 0.24, 0.16), _water(renderer))
			basin.name = "EcoRoofBasin"
			basin.set_meta("creation_live_visual",true)
			for i in range(5):
				var pos := Vector3(-.52+float(mini(i,2))*.28, y+.23, -.52+maxi(0,i-2)*.28)
				renderer._box(node, Vector3(0.26, 0.14, 0.24), pos, planter)
				_shrub(renderer,node, pos + Vector3(0.0, 0.19, 0.0), Vector3(0.20, 0.21, 0.19), Color("6b9462"))
		_:
			# Asymmetric terraced planter boxes with varied heights (replaces uniform 5-pot circle)
			var offsets := [Vector2(-.48,-.48),Vector2(.45,-.12),Vector2(-.25,.54)]
			for i in range(offsets.size()):
				var at: Vector2 = offsets[i]
				var h := .13+float(i)*.11
				renderer._box(node, Vector3(.54 if i!=1 else .25,h,.24 if i!=1 else .64), Vector3(at.x, y + 0.16 + h * 0.5, at.y), planter)
				_shrub(renderer,node, Vector3(at.x, y + 0.34 + h, at.y), Vector3(0.22, 0.24, 0.21), Color("5e875c").lightened(float(i % 3) * 0.06))

static func populate_facade_greenery(renderer: Node3D, wall: Node3D, seed_value: int, timber: Material) -> void:
	var variant := posmod(seed_value * 17, 3)
	wall.set_meta("eco_greenery_variant",variant)
	if variant == 0:
		# Horizontal cantilevered window planter box with trailing greenery
		renderer._box(wall, Vector3(0.76, 0.11, 0.24), Vector3(-0.32, 0.24, 0.17), timber)
		for i in range(3):
			_shrub(renderer,wall, Vector3(-0.56 + float(i) * 0.24, 0.38 + float(i % 2) * 0.06, 0.22), Vector3(0.16, 0.15, 0.13), Color("5e8c62").lightened(float(i) * 0.07))
	elif variant == 1:
		# Right-side stepped trellis column
		renderer._box(wall, Vector3(0.22, 0.12, 0.25), Vector3(0.64, 0.22, 0.18), timber)
		for i in range(3):
			_shrub(renderer,wall, Vector3(0.64, 0.44 + float(i) * 0.24, 0.23), Vector3(0.16, 0.18, 0.12), Color("689666").lightened(float(i % 2) * 0.09))
	else:
		# Left-side staggered vertical green wall
		renderer._box(wall, Vector3(0.23, 0.12, 0.26), Vector3(-0.64, 0.22, 0.18), timber)
		for i in range(4):
			_shrub(renderer,wall, Vector3(-0.67 + float(i % 2) * 0.13, 0.42 + float(i) * 0.20, 0.24), Vector3(0.15, 0.17, 0.12), Color("5e8c62").lightened(float(i % 2) * 0.12))

static func _shrub(renderer:Node3D,parent:Node3D,at:Vector3,size:Vector3,_color:Color)->void:
	var mesh:=MeshInstance3D.new();mesh.mesh=renderer.foliage.parts("shrub",int(at.x*113+at.z*71)).canopy
	mesh.material_override=renderer.foliage.material("canopy");mesh.position=at-Vector3.UP*size.y*.5
	mesh.scale=size*1.65;parent.add_child(mesh)

static func _water(renderer:Node3D)->ShaderMaterial:
	if not renderer.has_meta("eco_roof_water"):
		var material:=ShaderMaterial.new();material.shader=preload("res://scripts/visual/shaders/creation_roof_basin.gdshader")
		renderer.set_meta("eco_roof_water",material)
	return renderer.get_meta("eco_roof_water")
