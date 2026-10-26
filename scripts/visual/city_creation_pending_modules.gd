extends RefCounted
## Committed additions remain editable while their finished house is prepared.
## Lit spring proxies have no physics bodies and never enter the saved city.
const Proxy = preload("res://scripts/visual/city_creation_pending_mesh.gd")
var root:Node3D
var records:Array[Dictionary]=[]
var tracking:=false

func clear()->void:
	_clear_visuals()
	tracking=false

func _clear_visuals()->void:
	if is_instance_valid(root):
		root.get_parent().remove_child(root)
		root.queue_free()
	root=null
	records.clear()

func sync(renderer:Node3D,allow_new:bool=true)->void:
	if not allow_new and not tracking:return
	tracking=true
	var published:Dictionary={}
	for house:Dictionary in renderer.budget_rebuild._published_snapshot.get("houses",[]):
		for cell:Dictionary in house.cells:published[[house.id,cell.id]]=_geometry(house,cell)
	if not is_instance_valid(root):
		root=Node3D.new();root.name="PendingHouseModules";renderer.add_child(root)
	var previous:Dictionary={}
	for row:Dictionary in records:previous[[row.house_id,row.cell_id]]=row
	var next:Array[Dictionary]=[]
	for house:Dictionary in renderer.state.houses:
		for cell:Dictionary in house.cells:
			var key:Array=[house.id,cell.id];var signature:=_geometry(house,cell)
			if published.get(key,[])==signature:continue
			var old:Dictionary=previous.get(key,{})
			if not old.is_empty() and old.signature==signature:
				next.append(old);previous.erase(key);continue
			var proxy:Dictionary=Proxy.build(renderer,root,house,cell)
			proxy.merge({"house_id":str(house.id),"cell_id":str(cell.id),"cell":cell.duplicate(),"signature":signature})
			next.append(proxy)
	for row:Dictionary in previous.values():
		row.node.get_parent().remove_child(row.node);row.node.queue_free()
	records=next
	if records.is_empty():_clear_visuals()

func _geometry(house:Dictionary,cell:Dictionary)->Array:
	return [house.origin,house.get("base_y",0.),cell.x,cell.z,cell.level,cell.kind,house.get("palette",0),house.get("finish",""),house.get("custom_colors",{}),house.get("yaw",0.),preload("res://scripts/world/city_creation_house_hinge.gd").key(house)]

func supersedes(renderer:Node3D,published:Dictionary,addition:Dictionary)->bool:
	# A tall old tower cap can extend through the new floor. That roof is no
	# longer part of the authored column, so it cannot cover its new edit target.
	var body:Object=published.get("collider")
	if body==null or str(body.get_meta("house_id",""))!=str(addition.house_id):return false
	var old:Dictionary=body.get_meta("cell",{})
	if old.is_empty():
		var id:=str(body.get_meta("cell_id",""))
		for cell:Dictionary in renderer._house_record(str(addition.house_id)).get("cells",[]):
			if str(cell.id)==id:old=cell;break
	var added:Dictionary=addition.cell
	return not old.is_empty() and int(old.x)==int(added.x) and int(old.z)==int(added.z) and int(old.level)<int(added.level)

func pick(origin:Vector3,direction:Vector3,limit:float=120.)->Dictionary:
	var closest:=limit*limit
	var result:Dictionary={}
	for row:Dictionary in records:
		var bounds:AABB=row.get("local_bounds",row.bounds)
		var pose:Transform3D=row.get("transform",Transform3D.IDENTITY);var inverse:=pose.affine_inverse()
		var at:Variant=bounds.intersects_ray(inverse*origin,inverse.basis*direction)
		if not at is Vector3:continue
		var world:Vector3=pose*at;var distance:=origin.distance_squared_to(world)
		if distance>=closest:continue
		var normal:=Vector3.ZERO;var gap:=INF
		for axis in range(3):
			for side in [-1,1]:
				var plane:float=bounds.position[axis] if side<0 else bounds.end[axis]
				var difference:float=absf(at[axis]-plane)
				if difference<gap:
					gap=difference;normal=Vector3.ZERO;normal[axis]=side
		closest=distance
		result={"position":world,"normal":pose.basis*normal,"house_id":row.house_id,"cell_id":row.cell_id,"cell":row.cell}
	return result
