extends RefCounted
const Plan=preload("res://scripts/world/city_creation_plaza_loops.gd")
const Frame=Plan.Frame
static func drape(r,flat:Array[Vector3])->Array[Vector3]:
	var result:Array[Vector3]=[];var terrain=r.Terrain
	for i in range(0,flat.size(),3):
		var polygon:=PackedVector2Array();var bounds:=Rect2(Vector2(flat[i].x,flat[i].z),Vector2.ZERO)
		for j in range(3):
			var p:=Vector2(flat[i+j].x,flat[i+j].z);polygon.append(p);bounds=bounds.expand(p)
		var lo:=Vector2i(((bounds.position-terrain.LAND_RECT.position)/terrain.STEP).floor()).max(Vector2i.ZERO)
		var hi:=Vector2i(((bounds.end-terrain.LAND_RECT.position)/terrain.STEP).floor()).min(Vector2i(terrain.COLUMNS-2,terrain.ROWS-2))
		for x in range(lo.x,hi.x+1):
			for z in range(lo.y,hi.y+1):
				var a:Vector2=terrain.LAND_RECT.position+Vector2(x,z)*terrain.STEP;var b:Vector2=a+Vector2(terrain.STEP,0);var c:Vector2=a+Vector2.ONE*terrain.STEP;var d:Vector2=a+Vector2(0,terrain.STEP)
				for triangle:PackedVector2Array in [PackedVector2Array([a,b,c]),PackedVector2Array([a,c,d])]:
					for fragment:PackedVector2Array in Geometry2D.intersect_polygons(polygon,triangle):
						var indices:=Geometry2D.triangulate_polygon(fragment)
						for k in range(0,indices.size(),3):
							var points:Array[Vector3]=[]
							for j in range(3):
								var p:=fragment[indices[k+j]];points.append(Vector3(p.x,r.state.ground_height(p)+.075,p.y))
							var normal:Vector3=(points[1]-points[0]).cross(points[2]-points[0])
							if normal.length_squared()<1e-14:continue
							if normal.y>0.:points.reverse()
							result.append_array(points)
	return result
static func build(owner,row:Dictionary)->void:
	var city:RefCounted=owner.demo.state;var r:Node3D=owner.demo.town;var masks:Array=r.road_outlines.values().duplicate()
	masks.append_array(r._water_groups(-.04))
	for house:Dictionary in city.houses:
		for cell:Dictionary in house.cells:
			if int(cell.level)==0:masks.append([Frame.corners(Frame.footprint(house,cell,.04))])
	for item:Dictionary in city.placed_landmarks:masks.append([Frame.corners(city.PlacedLandmarks.footprint(item))])
	var vertices:Array[Vector3]=drape(r,r._water_scanline_union([[row.polygon]],0.,masks))
	if vertices.is_empty():return
	var node:Node3D=owner._root("PublicPlaza_"+str(row.loop_key).trim_prefix("loop/"),row,Vector3.ZERO);var tool:=SurfaceTool.new();tool.begin(Mesh.PRIMITIVE_TRIANGLES);tool.set_color(Color(0,0,.75 if row.paving=="fan_stone" else .5))
	for p:Vector3 in vertices:tool.add_vertex(p)
	tool.generate_normals();tool.index();var surface:=MeshInstance3D.new();surface.mesh=tool.commit();surface.material_override=r._shared_road_material();surface.name="PlazaPaving";node.add_child(surface)
	var body:=StaticBody3D.new();body.name="PlazaGroundPick";body.collision_layer=2;body.set_meta("ground",true);body.set_meta("plaza_loop",row.loop_key);node.add_child(body);var collision:=CollisionShape3D.new();collision.shape=surface.mesh.create_trimesh_shape();body.add_child(collision)
	node.set_meta("plaza_masks",masks)
