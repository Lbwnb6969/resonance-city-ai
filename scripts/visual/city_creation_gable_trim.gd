extends RefCounted
## Raised trim follows the same published cap and true outline as the clay roof.
const Choice=preload("res://scripts/world/city_creation_architecture_variants.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
static func prepare_part(parent:Node3D,patch:Dictionary,towers:Dictionary,domes:Dictionary)->void:
	if patch.surface not in ["gable","fascia"] or towers.has(str(patch.cell_id)) or domes.has(str(patch.cell_id)):return
	var parts:Array=parent.get_meta("gable_trim_surfaces",[]);parts.append(patch);parent.set_meta("gable_trim_surfaces",parts)
static func build(r,parent:Node3D,house:Dictionary,palette:Array)->void:
	var key:=Choice.trim(house)
	if key.is_empty() or not Choice.trim_supported(r.state,house):return
	var node:=Node3D.new();node.name="GableTrim_"+key;parent.add_child(node);var records:Array=[];var seed_value:int=Choice.record(house,"gable_trim").seed
	var material:=Wall.component(r,palette[2],Wall.Kind.TIMBER) if key=="timber_verge" else Wall.component(r,palette[0].lightened(.045),Wall.Kind.STONE)
	var surfaces:Array=parent.get_meta("gable_trim_surfaces",[])
	if surfaces.is_empty():surfaces=simple_parts(parent,house)
	for patch:Dictionary in surfaces:
		var outward:=Vector3(patch.side.x,0,patch.side.y)
		if patch.surface=="simple_verge":
			add(r,node,house,patch,patch.a+outward*.055-Vector3.UP*.032,patch.b+outward*.055-Vector3.UP*.032,.065 if key=="timber_verge" else .075,material,records,"verge")
		elif patch.surface=="gable":
			var tangent:=Vector3(patch.side.y,0,-patch.side.x);var origin:=Vector3(patch.center.x,patch.base_y,patch.center.y);var top:Dictionary={}
			for p:Vector3 in patch.vertices:
				if p.y>patch.base_y+.001:top[(p-origin).dot(tangent)]=p
			var xs:Array=top.keys();xs.sort()
			for i in range(1,xs.size()):
				var a:Vector3=top[xs[i-1]]+outward*.055-Vector3.UP*.032;var b:Vector3=top[xs[i]]+outward*.055-Vector3.UP*.032
				add(r,node,house,patch,a,b,.065 if key=="timber_verge" else .075,material,records,"verge")
		else:
			var points:Array[Vector3]=[]
			for p:Vector3 in patch.vertices:
				if absf(p.y-float(patch.base_y))<.0001 and not points.has(p):points.append(p)
			if points.size()!=2:continue
			var a:=points[0]+outward*.032-Vector3.UP*.045;var b:=points[1]+outward*.032-Vector3.UP*.045
			add(r,node,house,patch,a,b,.07 if key=="timber_verge" else .10,material,records,"eave")
			var length:=a.distance_to(b);var count:=maxi(1,floori(length/(.42 if key=="timber_verge" else .19)));var phase:=.35+posmod(seed_value,3)*.10
			for i in range(count):
				var at:=a.lerp(b,(i+phase)/count)-Vector3.UP*(.09 if key=="timber_verge" else .085)
				if key=="timber_verge":add(r,node,house,patch,at-outward*.06-Vector3.UP*.035,at+outward*.025+Vector3.UP*.035,.04,material,records,"bracket")
				else:add(r,node,house,patch,at-Vector3.UP*.025,at+Vector3.UP*.025,.065,material,records,"dentil")
	if records.is_empty():node.queue_free();parent.set_meta("gable_trim",{"id":key,"active":false,"dormant_reason":"exposed_trim_missing"});return
	merge_parts(r,node)
	var bodies:Dictionary={}
	for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
		var cell_id:String=mesh.get_meta("trim_cell_id")
		if not bodies.has(cell_id):
			var body:=StaticBody3D.new();body.name="GableTrimPick_"+cell_id;node.add_child(body);body.set_meta("house_id",house.id);body.set_meta("cell_id",cell_id);body.set_meta("gable_trim",key);bodies[cell_id]=body
			for cell:Dictionary in house.cells:
				if str(cell.id)==cell_id:body.set_meta("cell",cell.duplicate(true));break
		var shape:=ConcavePolygonShape3D.new();shape.backface_collision=true;shape.set_faces(mesh.mesh.get_faces());var collider:=CollisionShape3D.new();collider.shape=shape;collider.transform=node.global_transform.affine_inverse()*mesh.global_transform;bodies[cell_id].add_child(collider)
	parent.set_meta("gable_trim",{"version":1,"id":key,"active":true,"parts":records,"seed":seed_value})
static func add(r,parent:Node3D,house:Dictionary,patch:Dictionary,a:Vector3,b:Vector3,width:float,material:Material,records:Array,kind:String)->void:
	if a.distance_to(b)<.0001 or not clear(r.state,house,a,b,width):return
	var mesh:MeshInstance3D=r._box(parent,Vector3(width,width,a.distance_to(b)+.004),(a+b)*.5,material);mesh.name="GableTrim_"+kind;mesh.set_meta("trim_cell_id",str(patch.cell_id));mesh.look_at(parent.to_global(b),Vector3.RIGHT if absf((b-a).normalized().dot(Vector3.UP))>.999 else Vector3.UP);mesh.visibility_range_end=64.
	records.append({"kind":kind,"a":a,"b":b,"width":width,"cell_id":str(patch.cell_id),"surface":patch.surface})
static func clear(city,house:Dictionary,a:Vector3,b:Vector3,width:float)->bool:
	var local_rect:=Rect2(Vector2(a.x,a.z),Vector2.ZERO).expand(Vector2(b.x,b.z)).grow(width*.5+.015);var points:=PackedVector2Array()
	for p:Vector2 in Frame.corners(local_rect):points.append(Frame.point(house,p))
	for other:Dictionary in city.houses:
		if str(other.id)==str(house.id):continue
		for cell:Dictionary in other.cells:
			var low:=float(other.get("base_y",0.))+int(cell.level)*1.7
			if low>=maxf(a.y,b.y)+width*.5 or low+1.7<=minf(a.y,b.y)-width*.5:continue
			if Frame.boxes_overlap({"polygon":points},Frame.footprint(other,cell,.01)):return false
	return true
static func merge_parts(r,parent:Node3D)->void:
	var groups:Dictionary={}
	for mesh:MeshInstance3D in parent.find_children("*","MeshInstance3D",true,false):
		var cell_id:String=mesh.get_meta("trim_cell_id");var group:Dictionary=groups.get(cell_id,{})
		if group.is_empty():
			var surface:=SurfaceTool.new();surface.begin(Mesh.PRIMITIVE_TRIANGLES);group={"surface":surface,"material":mesh.material_override}
		group.surface.append_from(mesh.mesh,0,parent.global_transform.affine_inverse()*mesh.global_transform)
		groups[cell_id]=group;mesh.free()
	for id:String in groups:
		var mesh:=MeshInstance3D.new();mesh.mesh=groups[id].surface.commit();mesh.material_override=groups[id].material;parent.add_child(mesh);mesh.name="GableTrimCell_"+id;mesh.set_meta("trim_cell_id",id);mesh.visibility_range_end=64.
static func simple_parts(parent:Node3D,house:Dictionary)->Array:
	var edges:Dictionary={};var inverse:=parent.global_transform.affine_inverse()
	for mesh:MeshInstance3D in parent.find_children("*","MeshInstance3D",true,false):
		if not (mesh.get_meta("creation_tiled_roof",false) or mesh.get_meta("creation_detail_roof",false)) or not mesh.mesh is ArrayMesh:continue
		var transform:=inverse*mesh.global_transform;var faces:=mesh.mesh.get_faces()
		for i in range(0,faces.size(),3):
			if mesh.get_meta("creation_detail_roof",false) and (faces[i+1]-faces[i]).cross(faces[i+2]-faces[i]).y>=-.00001:continue
			for pair:Array in [[faces[i],faces[i+1]],[faces[i+1],faces[i+2]],[faces[i+2],faces[i]]]:
				var a:Vector3=transform*pair[0];var b:Vector3=transform*pair[1];var ka:=str(a.snapped(Vector3.ONE*.0001));var kb:=str(b.snapped(Vector3.ONE*.0001));var key:=ka+"|"+kb if ka<kb else kb+"|"+ka
				var row:Dictionary=edges.get(key,{"a":a,"b":b,"count":0,"cell_id":str(mesh.get_meta("creation_detail_cell",house.cells[0].id))});row.count+=1;edges[key]=row
	var result:Array=[]
	for row:Dictionary in edges.values():
		if row.count!=1:continue
		var a:Vector3=row.a;var b:Vector3=row.b;var normal:=Vector2(-(b-a).z,(b-a).x).normalized();var mid:=Vector2((a.x+b.x)*.5,(a.z+b.z)*.5)
		if normal.dot(mid-Frame.origin(house))<0:normal=-normal
		var side:=Vector2i(roundi(normal.x),roundi(normal.y))
		result.append({"surface":"fascia" if is_equal_approx(a.y,b.y) else "simple_verge","side":side,"a":a,"b":b,"vertices":[a,b],"base_y":minf(a.y,b.y),"cell_id":row.cell_id})
	return result
