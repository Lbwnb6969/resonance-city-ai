extends RefCounted
## Original metric masonry, sharing the streets' warm stone tones.
## Like TG support stations, the footing samples both sides and the centre;
## its exposed face follows the actual unprotected ground, not sea level.
const UNIT := 1.8
const COURSE := 0.24
const STONE := preload("res://资源/建筑参考/石砌街屋.png")

static func masonry_material(renderer,tone: Color) -> StandardMaterial3D:
	# Foundation's recovered rustic wall albedo, shared with the stone houses.
	# World metres keep the masonry continuous through courses and extensions;
	# per-box UVs would restart/stretch the image on each 24cm course.
	var key := "highland_masonry_"+tone.to_html()
	if not renderer.materials.has(key):
		var material := StandardMaterial3D.new()
		material.albedo_color=tone.lightened(0.40)
		material.albedo_texture=STONE
		material.uv1_triplanar=true
		material.uv1_world_triplanar=true
		material.uv1_scale=Vector3(.72,.72,.72)
		material.texture_filter=BaseMaterial3D.TEXTURE_FILTER_LINEAR_WITH_MIPMAPS
		material.texture_repeat=true
		material.roughness=.96
		renderer.materials[key]=material
	return renderer.materials[key]

static func footing(renderer,house: Dictionary,cell: Dictionary) -> float:
	var center: Vector3 = renderer._cell_position(house,cell)
	var bottom := center.y-0.04
	for x: float in [-0.92,0.0,0.92]:
		for z: float in [-0.92,0.0,0.92]:
			bottom=minf(bottom,renderer.state.raw_terrain_height(Vector2(center.x+x,center.z+z))-0.15)
	# Existing riverbank foundations continue below the old shallow bank.
	if center.y<0.05: bottom=minf(bottom,renderer.Terrain.BASE_HEIGHT-renderer.Terrain.BANK_DEPTH-0.02)
	return bottom-center.y

static func build_plinth(renderer,parent: Node3D,house: Dictionary,cell: Dictionary,bottom: float,pieces: Array) -> void:
	if bottom> -0.26: return
	var root := Node3D.new()
	root.name="StonePlinth"
	parent.add_child(root)
	root.set_meta("bottom_y",parent.position.y+bottom)
	root.set_meta("base_y",float(house.get("base_y",0.0)))
	var batches := {}
	var colors := [Color("b9b49b"),Color("c7bea5"),Color("aaa78f")]
	for piece: Rect2 in pieces:
		for side: int in range(4):
			var horizontal := side%2==0
			var length := piece.size.x if horizontal else piece.size.y
			var rows := ceili((0.12-bottom)/COURSE)
			for row in range(rows):
				var top := 0.12-float(row)*COURSE
				var low := maxf(bottom,top-COURSE)
				var start := -0.22 if row%2==1 else 0.0
				while start<length-0.001:
					var end := minf(length,start+0.46)
					var begin := maxf(0.0,start)
					if end-begin>0.02:
						var along := (begin+end)*0.5
						var center := Vector3(piece.position.x+along,(top+low)*0.5,piece.position.y if side==0 else piece.end.y)
						var size_value := Vector3(end-begin-0.012,top-low-0.012,0.10)
						if not horizontal:
							center=Vector3(piece.position.x if side==1 else piece.end.x,(top+low)*0.5,piece.position.y+along)
							size_value=Vector3(0.10,top-low-0.012,end-begin-0.012)
						renderer._append_road_box(batches,size_value,center,masonry_material(renderer,colors[posmod(row+side+int(cell.x)+int(cell.z),3)]))
					start=end
	for batch: Dictionary in batches.values():
		var instance := MeshInstance3D.new()
		instance.mesh=batch.surface.commit()
		instance.material_override=batch.material
		root.add_child(instance)
	# A single broad coping visually carries the upper walls.
	for piece: Rect2 in pieces:
		renderer._box(root,Vector3(piece.size.x+0.10,0.10,piece.size.y+0.10),Vector3(piece.get_center().x,0.115,piece.get_center().y),renderer._material(Color("d2c7ab")))
