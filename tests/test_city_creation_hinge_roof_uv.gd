extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Actions=preload("res://scripts/world/city_creation_hinge_actions.gd")
const Hinge=preload("res://scripts/world/city_creation_house_hinge.gd")
const Assembly=preload("res://scripts/visual/city_creation_hinge_assembly.gd")
const MeshCut=preload("res://scripts/visual/city_creation_hinge_mesh.gd")
const RoofUV=preload("res://scripts/visual/city_creation_hinge_roof_uv.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func stats(mesh:Mesh)->Dictionary:
	var flat:=0;var count:=0;var faces:=PackedVector3Array()
	for surface in range(mesh.get_surface_count()):
		var arrays:=mesh.surface_get_arrays(surface);var points:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];var uv:PackedVector2Array=arrays[Mesh.ARRAY_TEX_UV];var ids:PackedInt32Array=arrays[Mesh.ARRAY_INDEX]
		for i in range(0,ids.size(),3):
			var a:=ids[i];var b:=ids[i+1];var c:=ids[i+2]
			if (points[b]-points[a]).cross(points[c]-points[a]).length_squared()<.0000000001:continue
			count+=1;faces.append_array(PackedVector3Array([points[a],points[b],points[c]]))
			if absf((uv[b]-uv[a]).cross(uv[c]-uv[a]))<.0000001:flat+=1
	return {"flat":flat,"triangles":count,"faces_hash":Array(var_to_bytes(faces)).hash()}
func renderer(city)->Node3D:
	var value:=Renderer.new();root.add_child(value);value.state=city;value.buildings=Node3D.new();value.add_child(value.buildings)
	value.building_context.prepare(city.houses,city.roads);return value
func dispose(value)->void:
	value.shore.free();value.lilypads.free();value.wildlife.free();value.free()
func production(axis:Vector2i,angle:float,levels:int)->void:
	var city:=State.new();city.initialize_empty();city.add_house(Vector2(-25,-15));city.set_house_style("h1","timber")
	for distance in range(1,4):city.add_cell("h1",axis.x*distance,axis.y*distance,0)
	if levels==2:
		for distance in range(4):city.add_cell("h1",axis.x*distance,axis.y*distance,1)
	check(Actions.set_angle(city,"h1",angle).ok,"public authored hinge "+str([axis,angle,levels]))
	var snapshot:Dictionary=city.snapshot();var r=renderer(city);var job=r._begin_house_assembly(city.houses[0],false)
	# Execute the complete production room/wall/corner/roof/skylight pipeline.
	while job.stage!=Renderer.HouseAssembly.Stage.BEND:r._house_assembly_unit(job)
	var plan:=Hinge.layout(city.houses[0]);plan.angle=deg_to_rad(angle)
	var roofs:Array=[];var other:Array=[]
	for node:MeshInstance3D in job.root.find_children("*","MeshInstance3D",true,false):
		var transform:Transform3D=job.root.global_transform.affine_inverse()*node.global_transform
		var span:=Assembly.extent(transform*node.get_aabb(),plan)
		if span.x>=-.000001 or span.y<-.000001:continue
		var baseline:=MeshCut.build(node.mesh,transform,plan,Assembly.owner_wing(job,node))
		var record:={"node":node,"baseline":baseline,"before":node.mesh}
		if not RoofUV.surfaces(node).is_empty():roofs.append(record)
		else:other.append(record)
	for row:Dictionary in roofs:check(shared_error(row.before)<.0001,"organic source roof has no triangle islands before hinge projection")
	while not Assembly.step(job):pass
	check(not roofs.is_empty(),"real full assembly exposes actual tiled roof "+str(axis))
	for row:Dictionary in roofs:
		var before:=stats(row.baseline);var after:=stats(row.node.mesh)
		check(before.flat>0 and after.flat==0,"complete production roof removes every degenerate hinge UV "+str([axis,angle,levels]))
		check(row.node.mesh.get_faces()==row.baseline.get_faces(),"roof and collision geometry stay byte-exact against original hinge construction")
		var group:=Node3D.new();r.add_child(group);row.node.reparent(group,true)
		var before_faces:PackedVector3Array=row.node.mesh.get_faces();var before_uv:PackedVector2Array=row.node.mesh.surface_get_arrays(0)[Mesh.ARRAY_TEX_UV]
		r._merge_meshes(group);var nodes:Array=group.find_children("*","MeshInstance3D",true,false)
		check(nodes.size()==1 and nodes[0].mesh.get_faces()==before_faces and nodes[0].mesh.surface_get_arrays(0)[Mesh.ARRAY_TEX_UV]==before_uv,"production batching retains corrected UV and exact faces")
		print("HINGE_ROOF_PRODUCTION ",JSON.stringify({"axis":[axis.x,axis.y],"angle":angle,"levels":levels,"before":before,"after":after}))
	for row:Dictionary in other:
		check(row.node.mesh.get_faces()==row.baseline.get_faces() and row.node.mesh.surface_get_arrays(0)[Mesh.ARRAY_TEX_UV]==row.baseline.surface_get_arrays(0)[Mesh.ARRAY_TEX_UV],"nonroof material keeps original hinge UV and faces")
	check(city.snapshot()==snapshot,"visual hinge projection never mutates authored state")
	dispose(r)
func chart()->ArrayMesh:
	var tool:=SurfaceTool.new();tool.begin(Mesh.PRIMITIVE_TRIANGLES)
	for x in range(-2,2):
		for z in range(-2,2):
			for q:Vector2 in [Vector2(x,z),Vector2(x+1,z+1),Vector2(x+1,z),Vector2(x,z),Vector2(x,z+1),Vector2(x+1,z+1)]:
				tool.set_uv(q*3.);tool.set_normal(Vector3.UP);tool.add_vertex(Vector3(q.x,2.+q.x*q.x*.1+q.y*q.y*.15,q.y))
	tool.index();return tool.commit()
func shared_error(mesh:Mesh)->float:
	var seen:Dictionary={};var error:=0.
	for surface in range(mesh.get_surface_count()):
		var arrays:=mesh.surface_get_arrays(surface);var p:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];var uv:PackedVector2Array=arrays[Mesh.ARRAY_TEX_UV]
		for i in range(p.size()):
			var key:=p[i].snapped(Vector3.ONE*.00001)
			if seen.has(key):error=maxf(error,Vector2(seen[key]).distance_to(uv[i]))
			else:seen[key]=uv[i]
	return error
func group_charts()->void:
	var shapes:Dictionary={"gable_x":[Vector2i(1,0),Vector2i(2,0)],"gable_z":[Vector2i(0,1),Vector2i(0,2)],"L":[Vector2i(1,0),Vector2i(2,0),Vector2i(0,1),Vector2i(0,2)],"U":[Vector2i(1,0),Vector2i(2,0),Vector2i(0,1),Vector2i(2,1),Vector2i(0,2),Vector2i(2,2)],"courtyard":[Vector2i(1,0),Vector2i(2,0),Vector2i(0,1),Vector2i(2,1),Vector2i(0,2),Vector2i(1,2),Vector2i(2,2)]}
	for name:String in shapes:
		var city:=State.new();city.initialize_empty();city.add_house(Vector2(-25,-15));city.set_house_style("h1","timber")
		for at:Vector2i in shapes[name]:check(city.add_cell("h1",at.x,at.y,0).ok,"actual "+name+" roof room")
		if name=="L":check(city.add_cell("h1",0,0,1).ok,"actual stepped union roof")
		var context:=Renderer.BuildingContext.new();context.prepare(city.houses,city.roads)
		var seen:Dictionary={};var error:=0.;var flat:=0;var minimum:=INF;var maximum:=0.;var union_count:=0;var max_slope:=0.
		var rows:Array=context.roof_patches("h1");var baseline:Array=[]
		for patch:Dictionary in rows:
			if patch.surface!="roof":continue
			var p:Array=patch.vertices;var uv:PackedVector2Array=patch.coordinates
			baseline.append({"p":p.duplicate(),"uv":uv.duplicate()})
			for i in range(p.size()):
				var key:Array=[patch.group_id,p[i]]
				if seen.has(key):error=maxf(error,Vector2(seen[key]).distance_to(uv[i]))
				else:seen[key]=uv[i]
			for i in range(0,p.size(),3):
				var normal:Vector3=(p[i+1]-p[i]).cross(p[i+2]-p[i]);max_slope=maxf(max_slope,Vector2(normal.x,normal.z).length()/absf(normal.y))
				if absf((uv[i+1]-uv[i]).cross(uv[i+2]-uv[i]))<.0000001:flat+=1
				if patch.uv_chart!="union_area":continue
				union_count+=1
				for k in range(3):
					var a:=i+k;var b:=i+(k+1)%3;var metre:Vector2=(uv[b]-uv[a])*Vector2(.22,.28)
					var ratio:float=Vector3(p[b]).distance_to(p[a])/metre.length();minimum=minf(minimum,ratio);maximum=maxf(maximum,ratio)
		check(error<.00001 and flat==0,name+" every triangle and cross-patch vertex shares one nondegenerate chart")
		if union_count>0:check(minimum>.85 and maximum<1.25,name+" union tile metric remains within measured stretch bounds")
		if name=="courtyard":
			var hit:=false;var at:=Vector3(-23.2,10.,-13.2)
			for patch:Dictionary in rows:
				if patch.surface!="roof":continue
				for i in range(0,patch.vertices.size(),3):hit=hit or Geometry3D.segment_intersects_triangle(at,at-Vector3.UP*20.,patch.vertices[i],patch.vertices[i+1],patch.vertices[i+2])!=null
			check(not hit,"continuous union chart leaves the real courtyard picking hole open")
		var moved:=city.houses.duplicate(true)
		for house:Dictionary in moved:house.origin[0]+=9.;house.origin[1]+=6.
		var translated:=Renderer.BuildingContext.new();translated.prepare(moved,city.roads);var index:=0;var translation_error:=0.
		for patch:Dictionary in translated.roof_patches("h1"):
			if patch.surface!="roof":continue
			var reference:PackedVector2Array=baseline[index].uv
			if reference.size()!=patch.coordinates.size():translation_error=INF;break
			for i in range(reference.size()):translation_error=maxf(translation_error,reference[i].distance_to(patch.coordinates[i]))
			index+=1
		check(translation_error<.0002,name+" chart phase follows a translated authored roof")
		print("JOINED_ROOF_CHART ",JSON.stringify({"shape":name,"shared_error":error,"flat":flat,"metric_min":minimum if union_count>0 else null,"metric_max":maximum if union_count>0 else null,"max_slope":max_slope,"translation_error":translation_error}))
func cross_house_charts()->void:
	var city:=State.new();city.initialize_empty()
	for at:Vector2 in [Vector2(-25,-15),Vector2(-23.2,-15),Vector2(-15,-15)]:
		var added:Dictionary=city.add_house(at);check(added.ok,"actual independently owned roof group")
		city.set_house_style(str(added.house_id),"timber")
	var context:=Renderer.BuildingContext.new();context.prepare(city.houses,city.roads)
	var seen:Dictionary={};var groups:Dictionary={};var shared:=0;var error:=0.
	for house:Dictionary in city.houses:
		for patch:Dictionary in context.roof_patches(str(house.id)):
			if patch.surface!="roof":continue
			groups[patch.group_id]=true
			for i in range(patch.vertices.size()):
				var key:Array=[patch.group_id,patch.vertices[i]]
				if seen.has(key):
					error=maxf(error,Vector2(seen[key].uv).distance_to(patch.coordinates[i]))
					if seen[key].house!=house.id:shared+=1
				else:seen[key]={"uv":patch.coordinates[i],"house":house.id}
	check(groups.size()==2 and shared>0 and error<.00001,"one continuous chart crosses real household IDs while distant groups stay independent")
func continuity(axis:Vector2,angle:float)->void:
	var source:=chart();var plan:={"axis":axis,"pivot":Vector2.ZERO,"angle":deg_to_rad(angle)}
	var output:=MeshCut.build(source,Transform3D.IDENTITY,plan,false,PackedInt32Array([0]))
	var arrays:=output.surface_get_arrays(0);var points:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];var uv:PackedVector2Array=arrays[Mesh.ARRAY_TEX_UV]
	var shared:Dictionary={};var error:=0.
	for i in range(points.size()):
		var key:=points[i].snapped(Vector3.ONE*.00001)
		if shared.has(key):error=maxf(error,Vector2(shared[key]).distance_to(uv[i]))
		else:shared[key]=uv[i]
	check(error<.0001,"curved chart keeps every shared main/wing/fan vertex continuous "+str([axis,angle]))
func gating_and_rigid()->void:
	var node:=MeshInstance3D.new();node.mesh=chart();root.add_child(node)
	var roof:=ShaderMaterial.new();roof.shader=RoofUV.RoofShader;node.material_override=roof
	check(RoofUV.surfaces(node)==PackedInt32Array([0]),"actual roof shader opts into projection")
	node.material_override=StandardMaterial3D.new();check(RoofUV.surfaces(node).is_empty(),"ordinary wall UV remains outside projection")
	node.material_override=ShaderMaterial.new();node.material_override.shader=Renderer.WallMaterial.WallShader
	check(RoofUV.surfaces(node).is_empty(),"micro-normal wall shader remains outside projection")
	node.material_override=null;node.mesh.surface_set_material(0,roof);check(RoofUV.surfaces(node)==PackedInt32Array([0]),"surface material works without an override")
	var plan:={"axis":Vector2.RIGHT,"pivot":Vector2.ZERO,"angle":deg_to_rad(28.)};var transform:=Transform3D(Basis.IDENTITY,Vector3(5,0,0))
	var projected:=RoofUV.rigid(node.mesh,transform,plan,PackedInt32Array([0]));var before:=node.mesh.surface_get_arrays(0);var after:=projected.surface_get_arrays(0)
	check(after[Mesh.ARRAY_VERTEX]==before[Mesh.ARRAY_VERTEX] and after[Mesh.ARRAY_NORMAL]==before[Mesh.ARRAY_NORMAL] and after[Mesh.ARRAY_INDEX]==before[Mesh.ARRAY_INDEX],"far rigid wing projection changes no geometry or normal bytes")
	check(after[Mesh.ARRAY_TEX_UV]!=before[Mesh.ARRAY_TEX_UV],"far rigid roof wing extends the same chart instead of retaining a detached phase")
	var split:=MeshCut.build(node.mesh,transform,plan,true,PackedInt32Array([0]));var split_arrays:=split.surface_get_arrays(0);var split_uv:PackedVector2Array=split_arrays[Mesh.ARRAY_TEX_UV]
	check(split_uv==after[Mesh.ARRAY_TEX_UV],"far rigid and cut mesh paths use byte-identical projected UV")
	node.free()
func run()->void:
	gating_and_rigid()
	group_charts()
	cross_house_charts()
	for axis:Vector2i in [Vector2i.RIGHT,Vector2i.LEFT,Vector2i.DOWN,Vector2i.UP]:
		for angle:float in [-28.,28.]:
			continuity(Vector2(axis),angle);production(axis,angle,2 if axis.y!=0 else 1)
	print("HINGE_ROOF_UV ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
