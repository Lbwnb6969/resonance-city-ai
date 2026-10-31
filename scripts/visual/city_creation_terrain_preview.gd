extends RefCounted
## Swept finite brush bounds, not a promise of final natural shoulder shape.
## Native round-ended offset is shared with the existing water/path outlines.
const HALF_WIDTH := 0.035
const MAX_SEGMENT := 0.25
const LIFT := 0.045

static func build(renderer,points: Array[Vector2],radius: float,mode: String,natural: bool,plan:Dictionary={}) -> void:
	if points.is_empty(): return
	var height_source:RefCounted=plan.candidate if plan.get("ok",false) else renderer.state
	var surface := SurfaceTool.new()
	surface.begin(Mesh.PRIMITIVE_TRIANGLES)
	var radii: Array[float]=[radius]
	if mode=="plateau": radii.append(radius*(0.325 if natural else 0.5))
	var contours: Array=[]
	for ring_radius: float in radii:
		var outlines: Array=renderer._stroke_contours(points,ring_radius)
		for outline: PackedVector2Array in outlines:
			contours.append(outline)
			_ribbon(surface,outline,height_source)
	# The active tip remains legible inside a long or closed stroke. It is a
	# separate loop in the same mesh, with no extra materials or draw calls.
	if points.size()>1:
		var tip: Array[Vector2]=[points[-1]]
		for ring_radius: float in radii:
			for outline: PackedVector2Array in renderer._stroke_contours(tip,ring_radius):
				_ribbon(surface,outline,height_source)
	var instance:=MeshInstance3D.new()
	instance.name="TerrainBrushRing"
	instance.mesh=surface.commit()
	var material:=StandardMaterial3D.new()
	material.shading_mode=BaseMaterial3D.SHADING_MODE_UNSHADED
	material.cull_mode=BaseMaterial3D.CULL_DISABLED
	# Editing bounds must stay readable through tall meadow cards; they are
	# an interaction overlay, still positioned on the shared terrain surface.
	material.no_depth_test=true
	material.albedo_color={"raise":Color("e9ca82"),"lower":Color("94bfd0"),"reset":Color("e7e3cf"),"plateau":Color("d7c4a1"),"smooth":Color("9fc6ad")}.get(mode,Color.WHITE)
	if not plan.is_empty() and not plan.get("ok",false):material.albedo_color=Color("df846a")
	instance.material_override=material
	instance.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	renderer.preview.add_child(instance)
	renderer.preview.set_meta("terrain_points",points.duplicate())
	renderer.preview.set_meta("terrain_contours",contours)
	renderer.preview.set_meta("terrain_core_radius",radii[-1] if mode=="plateau" else 0.0)
	if plan.get("ok",false):_target_surface(renderer,plan)

static func _target_surface(renderer,plan:Dictionary)->void:
	var city:RefCounted=plan.candidate;var field=city._ground_terrain
	var bounds:Rect2=plan.bounds.intersection(field.LAND_RECT)
	var low:Vector2=((bounds.position-field.LAND_RECT.position)/field.STEP).floor().max(Vector2.ZERO)
	var high:Vector2=((bounds.end-field.LAND_RECT.position)/field.STEP).ceil().min(Vector2(field.COLUMNS-1,field.ROWS-1))
	var surface:=SurfaceTool.new();surface.begin(Mesh.PRIMITIVE_TRIANGLES);var count:=0
	for z in range(int(low.y),int(high.y)):
		for x in range(int(low.x),int(high.x)):
			var corners:Array[Vector3]=[];var changed:=false
			for offset:Vector2i in [Vector2i.ZERO,Vector2i.RIGHT,Vector2i.ONE,Vector2i.DOWN]:
				var at:Vector2=field.LAND_RECT.position+Vector2(x+offset.x,z+offset.y)*field.STEP
				var y:float=city.ground_height(at);changed=changed or absf(y-renderer.state.ground_height(at))>.00001
				corners.append(Vector3(at.x,y+LIFT,at.y))
			if not changed:continue
			for i in [0,2,1,0,3,2]:surface.add_vertex(corners[i]);count+=1
	if count==0:return
	var mesh:=MeshInstance3D.new();mesh.name="TerrainTargetSurface";mesh.mesh=surface.commit()
	var material:=StandardMaterial3D.new();material.shading_mode=BaseMaterial3D.SHADING_MODE_UNSHADED;material.transparency=BaseMaterial3D.TRANSPARENCY_ALPHA
	material.cull_mode=BaseMaterial3D.CULL_DISABLED;material.no_depth_test=true;material.albedo_color=Color(.80,.72,.46,.18)
	mesh.material_override=material;mesh.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	if plan.get("row",{}).has("target_y"):mesh.set_meta("target_y",plan.row.target_y)
	renderer.preview.add_child(mesh)

static func _ribbon(surface: SurfaceTool,outline: PackedVector2Array,state: RefCounted) -> void:
	# Sample long straight edges too: each vertex follows the same published
	# terrain as ground picking, rather than bridging above a sculpted valley.
	var points := PackedVector2Array()
	for i in range(outline.size()):
		var a:=outline[i];var b:=outline[(i+1)%outline.size()]
		var steps:=maxi(1,ceili(a.distance_to(b)/MAX_SEGMENT))
		for step in range(steps):points.append(a.lerp(b,float(step)/steps))
	var edges: Array=[]
	for i in range(points.size()):
		var incoming: Vector2=(points[i]-points[posmod(i-1,points.size())]).normalized()
		var outgoing: Vector2=(points[(i+1)%points.size()]-points[i]).normalized()
		var normal:=Vector2(-incoming.y-outgoing.y,incoming.x+outgoing.x).normalized()
		var offset:=normal*HALF_WIDTH/maxf(normal.dot(Vector2(-outgoing.y,outgoing.x)),0.5)
		var pair: Array[Vector3]=[]
		for at: Vector2 in [points[i]-offset,points[i]+offset]:pair.append(Vector3(at.x,state.ground_height(at)+LIFT,at.y))
		edges.append(pair)
	for i in range(edges.size()):
		var a: Array=edges[i];var b: Array=edges[(i+1)%edges.size()]
		for point: Vector3 in [a[0],b[0],b[1],a[0],b[1],a[1]]:surface.add_vertex(point)
