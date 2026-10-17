extends RefCounted
## Original Godot facade geometry for the existing 1.8m x 1.7m room walls.
## The weave/deep material direction and #6b4c3b timber are documented in
## code_artifact.md's building families; no original game's facade solver or
## building mesh is imported here. Doors, windows, roofs and picking stay owned
## by the renderer. Every piece joins its existing static material batches.
const TIMBER := Color("6b4c3b")
const HALF_WIDTH := 0.9
const DOOR_HALF_CLEAR := 0.36

static func wall_color(style: String,base: Color) -> Color:
	if style!="stone": return base
	# Preserve the player's finish hue through a quieter blue-grey stone mix.
	var muted := Color.from_hsv(base.h,base.s*0.40,base.v,base.a)
	return muted.lerp(Color("8b9a9b"),0.42)

static func build_details(renderer,wall: Node3D,palette: Array,door: bool,style: String,seed_value: int) -> void:
	var parts: Array[Dictionary] = []
	var by_color: Dictionary = {}
	wall.set_meta("house_style",style)
	wall.set_meta("style_details",parts)
	if style=="timber":
		var timber: Material = renderer._material(TIMBER,0.94)
		by_color[(timber as StandardMaterial3D).albedo_color] = timber
		for side: float in [-1.0,1.0]:
			_box(renderer,wall,parts,"corner_post",Vector3(0.080,1.60,0.070),Vector3(side*0.82,0.85,0.087),timber)
		if not door:
			_box(renderer,wall,parts,"middle_post",Vector3(0.075,1.40,0.070),Vector3(0,0.85,0.087),timber)
		_box(renderer,wall,parts,"head_beam",Vector3(1.76,0.095,0.075),Vector3(0,1.515,0.089),timber)
		for y: float in [0.245,0.515]:
			if door:
				for side: float in [-1.0,1.0]:
					_box(renderer,wall,parts,"sill_beam",Vector3(0.52,0.070,0.070),Vector3(side*0.62,y,0.087),timber)
			else:
				_box(renderer,wall,parts,"sill_beam",Vector3(1.76,0.070,0.070),Vector3(0,y,0.087),timber)
		# Low braces finish below the window sills. Their inner tips remain
		# outside the central doorway, even after the beam width is included.
		for side: float in [-1.0,1.0]:
			var a := Vector2(side*0.79,0.285)
			var b := Vector2(side*0.40,0.515)
			var delta := b-a
			_box(renderer,wall,parts,"low_brace",Vector3(delta.length(),0.055,0.070),Vector3((a.x+b.x)*0.5,(a.y+b.y)*0.5,0.091),timber)
			var angle := atan2(delta.y,delta.x)
			parts[-1]["rotation_z"] = angle
	elif style=="stone":
		var stone: Color = wall_color("stone",palette[0])
		var tones := [stone.lightened(0.12),stone,stone.darkened(0.08)]
		var materials: Array[Material] = []
		for tone: Color in tones:
			var material: StandardMaterial3D = renderer._material(tone,0.96)
			materials.append(material)
			by_color[material.albedo_color] = material
		# Two clearly modelled courses below both existing window openings.
		# Door walls have two separate piers rather than a stone across the door.
		for row in range(2):
			var stagger := 0.20 if row==1 else 0.0
			for column in range(-3,3):
				var left := maxf(-HALF_WIDTH,column*0.40+stagger+0.007)
				var right := minf(HALF_WIDTH,column*0.40+stagger+0.393)
				if right-left<0.025: continue
				var material: Material = materials[posmod(seed_value+row*5+column,3)]
				if door:
					_course_piece(renderer,wall,parts,left,minf(right,-DOOR_HALF_CLEAR),row,material)
					_course_piece(renderer,wall,parts,maxf(left,DOOR_HALF_CLEAR),right,row,material)
				else: _course_piece(renderer,wall,parts,left,right,row,material)
		# Quoins stop at x=+/-0.70: outside the actual +/-0.46 window frames.
		# Existing projecting shutters keep their original plane in front.
		for row in range(6):
			var width := 0.20 if row%2==0 else 0.16
			for side: float in [-1.0,1.0]:
				var material: Material = materials[posmod(seed_value+row+int(side),3)]
				_box(renderer,wall,parts,"quoin",Vector3(width,0.168,0.074),Vector3(side*(HALF_WIDTH-width*0.5),0.61+row*0.20,0.092),material)
	# Arrays in metadata are intentionally explicit, so geometry fixtures can
	# inspect bounds after the original MeshInstances have been merged/freed.
	wall.set_meta("style_details",parts)
	# Emit the exact indexed box geometry through the existing C++ append
	# path. Each wall creates one timber batch or at most three stone batches,
	# rather than one temporary Node/BoxMesh for every metadata record.
	var batches: Dictionary = {}
	for part: Dictionary in parts:
		renderer._append_road_box(batches,part.size,part.at,by_color[part.color],Vector3(0,0,float(part.rotation_z)))
	for batch: Dictionary in batches.values():
		var instance := MeshInstance3D.new()
		instance.name = "Style_"+style+"_Batch"
		instance.mesh = batch.surface.commit()
		instance.material_override = batch.material
		wall.add_child(instance)

static func _course_piece(renderer,wall: Node3D,parts: Array[Dictionary],left: float,right: float,row: int,material: Material) -> void:
	if right-left<0.025: return
	_box(renderer,wall,parts,"stone_course",Vector3(right-left,0.174,0.072),Vector3((left+right)*0.5,0.255+row*0.185,0.092),material)

static func _box(_renderer,_wall: Node3D,parts: Array[Dictionary],kind: String,size: Vector3,at: Vector3,material: Material) -> void:
	parts.append({"kind":kind,"size":size,"at":at,"rotation_z":0.0,"color":(material as StandardMaterial3D).albedo_color})
