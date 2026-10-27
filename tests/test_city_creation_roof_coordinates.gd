extends SceneTree
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Tower=preload("res://scripts/visual/city_creation_tower.gd")
const Round=preload("res://scripts/visual/city_creation_round_tower.gd")
const Coordinates=preload("res://scripts/visual/city_creation_roof_coordinates.gd")
var failures:Array[String]=[]
var checks:=0
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var renderer:=Renderer.new();root.add_child(renderer)
	for circular:bool in [false,true]:
		var kind:="round_tower" if circular else "square_tower"
		var center:=Vector3(-31,3,27) if circular else Vector3(26,1,-30)
		var faces:Array=Round.roof_vertices(center) if circular else Tower.roof_vertices(center)
		var coordinates:=Coordinates.build(faces,center,circular)
		var reference:MeshInstance3D=renderer._triangles(renderer,faces,Color.WHITE)
		var roof:MeshInstance3D=renderer._roof_surface(renderer,faces,Color.WHITE,coordinates)
		_check(roof.mesh.get_faces()==reference.mesh.get_faces(),kind+" retains every authored roof and picking triangle")
		var original:Array=Round.roof_vertices(Vector3.ZERO) if circular else Tower.roof_vertices(Vector3.ZERO)
		var origin_uv:=Coordinates.build(original,Vector3.ZERO,circular);var translation_error:=0.
		for i in range(coordinates.size()):translation_error=maxf(translation_error,coordinates[i].distance_to(origin_uv[i]))
		_check(translation_error<.0002,kind+" tile phase is unchanged by moving the authored tower away from world origin")
		_check_surface(kind,roof,center,circular)
		var legacy:MeshInstance3D=renderer._roof_surface(renderer,faces,Color.WHITE)
		_check(legacy.mesh.get_faces()==reference.mesh.get_faces(),kind+" keeps the original optional-coordinate API and exact geometry")
		var group:=Node3D.new();renderer.add_child(group)
		var instance:MeshInstance3D=renderer._roof_surface(group,faces,Color.WHITE,coordinates)
		var material:=ShaderMaterial.new();material.shader=renderer.JoinedRoofShader;instance.material_override=material
		var before:PackedVector2Array=instance.mesh.surface_get_arrays(0)[Mesh.ARRAY_TEX_UV]
		var before_faces:PackedVector3Array=instance.mesh.get_faces()
		renderer._merge_meshes(group)
		var meshes:Array=group.find_children("*","MeshInstance3D",true,false)
		var merged:MeshInstance3D=meshes[0]
		_check(meshes.size()==1 and merged.mesh.get_faces()==before_faces and merged.mesh.surface_get_arrays(0)[Mesh.ARRAY_TEX_UV]==before,kind+" retains its continuous tile chart through production material batching")
		group.free();reference.free();roof.free();legacy.free()
	# This mesh-only renderer never runs setup(), which normally parents these.
	renderer.shore.free();renderer.lilypads.free();renderer.wildlife.free();renderer.free()
	print("ROOF_COORDINATES ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

func _check_surface(kind:String,roof:MeshInstance3D,center:Vector3,circular:bool)->void:
	var arrays:Array=roof.mesh.surface_get_arrays(0)
	var positions:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];var normals:PackedVector3Array=arrays[Mesh.ARRAY_NORMAL]
	var uv:PackedVector2Array=arrays[Mesh.ARRAY_TEX_UV];var index:PackedInt32Array=arrays[Mesh.ARRAY_INDEX]
	var finite:=positions.size()==uv.size();var outward:=true;var positive_uv:=true
	var rings:Dictionary={};var shared:Dictionary={};var max_shared_v:=0.;var max_shared_u:=0.
	var min_u:=INF;var max_u:=-INF;var max_triangle_u:=0.
	var columns:=roundf(TAU*Round.ROOF_RADIUS/.22) if circular else 0.
	for i in range(0,index.size(),3):
		var a:int=index[i];var b:int=index[i+1];var c:int=index[i+2]
		var normal:Vector3=(positions[c]-positions[a]).cross(positions[b]-positions[a]).normalized()
		var chart:=0 if circular else (0 if absf(normal.x)>absf(normal.z) else 2)+(1 if normal.x+normal.z>0. else 0)
		outward=outward and normal.dot(normals[a])>.999 and normal.dot(normals[b])>.999 and normal.dot(normals[c])>.999
		positive_uv=positive_uv and absf((uv[b]-uv[a]).cross(uv[c]-uv[a]))>.000001
		max_triangle_u=maxf(max_triangle_u,maxf(uv[a].x,maxf(uv[b].x,uv[c].x))-minf(uv[a].x,minf(uv[b].x,uv[c].x)))
		for vertex:int in [a,b,c]:
			var point:=positions[vertex]-center;var at:=uv[vertex]
			finite=finite and at.is_finite();min_u=minf(min_u,at.x);max_u=maxf(max_u,at.x)
			var radius:=Vector2(point.x,point.z).length() if circular else maxf(absf(point.x),absf(point.z))
			if not rings.has(point.y):rings[point.y]={"v":at.y,"radius":radius}
			max_shared_v=maxf(max_shared_v,absf(at.y-float(rings[point.y].v)))
			# A closed angular chart differs by one full integer wrap at its seam;
			# the apex belongs to each converging meridian rather than one azimuth.
			if radius<.00001:continue
			var key:Array=[positions[vertex],chart]
			if shared.has(key):
				var delta:float=at.x-float(shared[key]);max_shared_u=maxf(max_shared_u,absf(wrapf(delta,-columns*.5,columns*.5)) if circular else absf(delta))
			else:shared[key]=at.x
	_check(finite,kind+" stores finite coordinates on every actual roof vertex")
	_check(outward,kind+" preserves each actual geometric face normal")
	_check(positive_uv,kind+" maps every nondegenerate roof triangle to a nonzero UV area")
	_check(rings.size()==20 and max_shared_v<.00001 and max_shared_u<.00001,kind+" shares tile phase across all 20 profile rings and each chart's common edges")
	var heights:Array=rings.keys();heights.sort();var meridian_error:=0.
	for i in range(1,heights.size()):
		var low:Dictionary=rings[heights[i-1]];var high:Dictionary=rings[heights[i]]
		var measured:=Vector2(float(low.radius),float(heights[i-1])).distance_to(Vector2(float(high.radius),float(heights[i])))
		meridian_error=maxf(meridian_error,absf((float(high.v)-float(low.v))*.28-measured))
	_check(absf(float(rings[heights[0]].v))<.00001 and meridian_error<.00001,kind+" starts at the eave and advances by actual meridian arc length")
	if circular:_check(absf(min_u)<.00001 and absf(max_u-columns)<.00001 and max_triangle_u<=columns/Round.SIDES+.0001,kind+" closes an integer number of tile columns without a triangle spanning the angular seam")
	print("ROOF_CHART ",JSON.stringify({"kind":kind,"shared_v_error":max_shared_v,"shared_u_error":max_shared_u,"meridian_error":meridian_error,"rings":rings.size(),"columns":columns,"min_u":min_u,"max_u":max_u,"max_triangle_u":max_triangle_u}))
