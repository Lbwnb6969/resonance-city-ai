extends RefCounted
## One metre-gauge oak/green carriage, open windows and real passenger seats.
static func car(parent: Node3D,serial: int)->Dictionary:
	var root:=Node3D.new();root.name="MusicalTram_%d"%serial;parent.add_child(root)
	var colors: Dictionary={"oak":Color("a46c48"),"green":Color("365e50"),"cream":Color("ead8ae"),"iron":Color("394845"),"brass":Color("b89b59")}
	var batches: Dictionary={}
	_box(batches,"iron",Vector3(1.03,.12,1.68),Vector3(0,.22,0))
	_box(batches,"oak",Vector3(1.02,.13,1.67),Vector3(0,.34,0))
	for side: float in [-1.,1.]:
		_box(batches,"green",Vector3(.075,.39,1.70),Vector3(side*.53,.57,0))
		_box(batches,"brass",Vector3(.09,.045,1.73),Vector3(side*.53,.79,0))
		_box(batches,"cream",Vector3(.07,.07,1.72),Vector3(side*.53,1.22,0))
		for z: float in [-.80,-.28,.28,.80]:_box(batches,"cream",Vector3(.065,.47,.055),Vector3(side*.53,.995,z))
		_box(batches,"oak",Vector3(.30,.12,1.25),Vector3(side*.30,.47,0))
		for z: float in [-.55,.55]:
			var wheel:=CylinderMesh.new();wheel.bottom_radius=.145;wheel.top_radius=.145;wheel.height=.09;wheel.radial_segments=10
			var transform:=Transform3D(Basis(Vector3.FORWARD,PI*.5),Vector3(side*.47,.15,z))
			_append(batches,"iron",wheel,transform)
	for z: float in [-.82,.82]:
		_box(batches,"green",Vector3(1.10,.43,.075),Vector3(0,.58,z))
		_box(batches,"cream",Vector3(1.12,.08,.075),Vector3(0,1.22,z))
		for x: float in [-.50,.0,.50]:_box(batches,"cream",Vector3(.055,.47,.07),Vector3(x,.995,z))
		_box(batches,"brass",Vector3(.12,.10,.07),Vector3(0,.62,z*1.06))
	_box(batches,"green",Vector3(1.22,.12,1.94),Vector3(0,1.33,0))
	_box(batches,"brass",Vector3(.04,.32,.06),Vector3(0,1.54,0))
	_box(batches,"brass",Vector3(.62,.035,.07),Vector3(0,1.72,0))
	for kind: String in batches:
		var material:=StandardMaterial3D.new();material.albedo_color=colors[kind];material.roughness=.78
		var mesh:=MeshInstance3D.new();mesh.mesh=batches[kind].commit();mesh.material_override=material;root.add_child(mesh)
	var glass:=StandardMaterial3D.new();glass.albedo_color=Color(.90,.77,.48,.17);glass.transparency=BaseMaterial3D.TRANSPARENCY_ALPHA;glass.emission=Color("ffd08a");glass.emission_enabled=true;glass.emission_energy_multiplier=.10;glass.cull_mode=BaseMaterial3D.CULL_DISABLED
	var windows:=Node3D.new();windows.name="WarmPassengerWindows";root.add_child(windows)
	for side: float in [-1.,1.]:
		for z: float in [-.54,0.,.54]:_window(windows,Vector3(.025,.38,.45),Vector3(side*.53,1.,z),glass)
	for side: float in [-1.,1.]:_window(windows,Vector3(.94,.38,.025),Vector3(0,1.,side*.82),glass)
	return {"node":root,"glass":glass}

static func _window(parent: Node3D,size: Vector3,at: Vector3,material: Material)->void:
	var mesh:=MeshInstance3D.new();var box:=BoxMesh.new();box.size=size;mesh.mesh=box;mesh.position=at;mesh.material_override=material;mesh.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF;parent.add_child(mesh)

static func _box(batches: Dictionary,kind: String,size: Vector3,at: Vector3)->void:
	var box:=BoxMesh.new();box.size=size
	_append(batches,kind,box,Transform3D(Basis.IDENTITY,at))

static func _append(batches: Dictionary,kind: String,mesh: Mesh,transform: Transform3D)->void:
	if not batches.has(kind):var surface:=SurfaceTool.new();surface.begin(Mesh.PRIMITIVE_TRIANGLES);batches[kind]=surface
	batches[kind].append_from(mesh,0,transform)
