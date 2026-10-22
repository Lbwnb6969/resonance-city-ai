extends RefCounted
## Committed additions remain editable while their finished house is prepared.
## These outlines have no physics bodies and never enter the saved city.
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
	_clear_visuals()
	var published:Dictionary={}
	for house:Dictionary in renderer.budget_rebuild._published_snapshot.get("houses",[]):
		for cell:Dictionary in house.cells:published[[house.id,cell.id]]=_geometry(house,cell)
	root=Node3D.new();root.name="PendingHouseModules";renderer.add_child(root)
	for house:Dictionary in renderer.state.houses:
		for cell:Dictionary in house.cells:
			if published.get([house.id,cell.id],[])==_geometry(house,cell):continue
			var volume:MeshInstance3D=renderer._preview_cell(house,cell,Color(.63,.89,.72,.32),true,root)
			records.append({"house_id":str(house.id),"cell_id":str(cell.id),"cell":cell.duplicate(),"bounds":volume.global_transform*volume.get_aabb()})
	if records.is_empty():_clear_visuals()

func _geometry(house:Dictionary,cell:Dictionary)->Array:
	return [house.origin,house.get("base_y",0.),cell.x,cell.z,cell.level,cell.kind]

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
		var bounds:AABB=row.bounds
		var at:Variant=bounds.intersects_ray(origin,direction)
		if not at is Vector3:continue
		var distance:=origin.distance_squared_to(at)
		if distance>=closest:continue
		var normal:=Vector3.ZERO;var gap:=INF
		for axis in range(3):
			for side in [-1,1]:
				var plane:float=bounds.position[axis] if side<0 else bounds.end[axis]
				var difference:float=absf(at[axis]-plane)
				if difference<gap:
					gap=difference;normal=Vector3.ZERO;normal[axis]=side
		closest=distance
		result={"position":at,"normal":normal,"house_id":row.house_id,"cell_id":row.cell_id,"cell":row.cell}
	return result
