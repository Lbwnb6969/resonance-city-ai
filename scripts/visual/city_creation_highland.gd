extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
## Original metric masonry, sharing the streets' warm stone tones.
## Like TG support stations, the footing samples both sides and the centre;
## its exposed face follows the actual unprotected ground, not sea level.
const UNIT := 1.8
const COURSE := 0.24
const BURIAL_EXTENSION := 0.22
const CONTACT_WIDTH := 0.14
const CONTACT_INSET := 0.035
const CONTACT_LIFT := 0.012
const ContactShader=preload("res://scripts/visual/shaders/creation_plinth_contact.gdshader")
var _key:Array=[]
var _plans:Dictionary={}
var _blockers:Dictionary={}
const BIN:=4.0
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
			bottom=minf(bottom,renderer.state.raw_terrain_height(Frame.point(house,Vector2(center.x+x,center.z+z)))-0.15)
	# Existing riverbank foundations continue below the old shallow bank.
	if center.y<0.05: bottom=minf(bottom,renderer.Terrain.BASE_HEIGHT-renderer.Terrain.BANK_DEPTH-0.02)
	var depth:=bottom-center.y
	return depth-BURIAL_EXTENSION if center.y>0.05 and depth<=-0.26 else depth

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
			# Absorb the short final remainder into the buried bottom course.
			# Subtracting a 12mm joint from a thinner remainder inverts/collapses
			# the box transform passed to SurfaceTool.append_from.
			var rows := maxi(1,floori((0.12-bottom)/COURSE))
			for row in range(rows):
				var top := 0.12-float(row)*COURSE
				var low := bottom if row==rows-1 else top-COURSE
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

	install_contact(renderer,parent,house,cell)


func contact_plan(renderer,house:Dictionary,footings:Array=[])->Dictionary:
	var empty:Dictionary={"cells":{},"signature":0}
	if float(house.get("base_y",0.))<=.05:return empty
	var key:Array=[renderer.state.get_instance_id(),renderer.state.revision]
	if key!=_key:
		_key=key;_plans.clear();_blockers.clear()
		_prepare_blockers(renderer)
	var id:=str(house.id)
	if _plans.has(id):return _plans[id]
	var cells:Dictionary={};var index:=0
	var passages:Array=renderer.house_passages(id)
	for cell:Dictionary in house.cells:
		if int(cell.level)!=0:continue
		var bottom:float=footings[index] if not footings.is_empty() else footing(renderer,house,cell)
		index+=1
		if bottom>-.26:continue
		var cuts:Array=[]
		for passage:Dictionary in passages:
			if str(passage.cell_id)==str(cell.id):cuts.append(passage)
		var pieces:Array=renderer.Architecture.floor_pieces(cuts) if not cuts.is_empty() else [Rect2(-.9,-.9,1.8,1.8)]
		var center:Vector3=renderer._cell_position(house,cell)
		var vertices:=PackedVector3Array();var colors:=PackedColorArray();var normals:=PackedVector3Array();var uv:=PackedVector2Array()
		for piece:Rect2 in pieces:
			var rect:=Rect2(piece.position+Vector2(center.x,center.z),piece.size)
			var inner:=_corners(rect.grow(CONTACT_INSET));var outer:=_corners(rect.grow(CONTACT_INSET+CONTACT_WIDTH))
			for i in range(4):inner[i]=Frame.point(house,inner[i]);outer[i]=Frame.point(house,outer[i])
			for edge in range(4):
				# Only the cell's exterior perimeter. Interior pier edges must not
				# lay a gravel strip across the real walk-through arch opening.
				var boundary:float=[piece.position.y,piece.end.x,piece.end.y,piece.position.x][edge]
				if absf(absf(boundary)-.9)>.001:continue
				var next:=(edge+1)%4
				var polygons:Array=[PackedVector2Array([inner[edge],inner[next],outer[next],outer[edge]])]
				for passage:Dictionary in cuts:
					var horizontal:bool=passage.axis.x!=0
					var half:=Vector2(1.1,float(passage.half_width)) if horizontal else Vector2(float(passage.half_width),1.1)
					var at:=Vector2(center.x,center.z)+(Vector2(0,float(passage.offset)) if horizontal else Vector2(float(passage.offset),0))
					var remaining:Array=[]
					for polygon:PackedVector2Array in polygons:remaining.append_array(Geometry2D.clip_polygons(polygon,Frame.corners({"center":Frame.point(house,at),"half":half,"angle":Frame.yaw(house)})))
					polygons=remaining
				var bounds:=Rect2(outer[edge],Vector2.ZERO).expand(outer[next]).grow(CONTACT_WIDTH)
				var blockers:Dictionary=_nearby(bounds)
				for blocker:Dictionary in blockers.values():
					if blocker.id==id+"/"+str(cell.id):continue
					var remaining:Array=[]
					for polygon:PackedVector2Array in polygons:remaining.append_array(Geometry2D.clip_polygons(polygon,blocker.polygon))
					polygons=remaining
					if polygons.is_empty():break
				for polygon:PackedVector2Array in polygons:
					_append_ground(renderer,polygon,rect,center,vertices,normals,colors,uv,house)
		if vertices.is_empty():continue
		var arrays:Array=[];arrays.resize(Mesh.ARRAY_MAX)
		arrays[Mesh.ARRAY_VERTEX]=vertices;arrays[Mesh.ARRAY_NORMAL]=normals;arrays[Mesh.ARRAY_COLOR]=colors;arrays[Mesh.ARRAY_TEX_UV]=uv
		cells[str(cell.id)]=arrays
	var result:Dictionary={"cells":cells,"signature":hash(cells) if not cells.is_empty() else 0}
	_plans[id]=result
	return result

static func _corners(rect:Rect2)->PackedVector2Array:
	return PackedVector2Array([rect.position,Vector2(rect.end.x,rect.position.y),rect.end,Vector2(rect.position.x,rect.end.y)])

func _add_blocker(id:String,polygon:PackedVector2Array)->void:
	var bounds:=Rect2(polygon[0],Vector2.ZERO)
	for point:Vector2 in polygon:bounds=bounds.expand(point)
	var low:Vector2i=Vector2i((bounds.position/BIN).floor());var high:Vector2i=Vector2i((bounds.end/BIN).floor())
	var row:Dictionary={"id":id,"polygon":polygon}
	for x in range(low.x,high.x+1):
		for z in range(low.y,high.y+1):
			var bin:=Vector2i(x,z)
			if not _blockers.has(bin):_blockers[bin]=[]
			_blockers[bin].append(row)

func _nearby(bounds:Rect2)->Dictionary:
	var result:Dictionary={}
	var low:=Vector2i((bounds.position/BIN).floor());var high:=Vector2i((bounds.end/BIN).floor())
	for x in range(low.x,high.x+1):
		for z in range(low.y,high.y+1):
			for row:Dictionary in _blockers.get(Vector2i(x,z),[]):result[row.id]=row
	return result

func _prepare_blockers(renderer)->void:
	for house:Dictionary in renderer.state.houses:
		for cell:Dictionary in house.cells:
			if int(cell.level)!=0:continue
			var at:=Vector2(house.origin[0]+cell.x*UNIT,house.origin[1]+cell.z*UNIT)
			_add_blocker(str(house.id)+"/"+str(cell.id),Frame.corners(Frame.footprint(house,cell,.055)))
	var junctions:RefCounted=renderer.state.road_junctions()
	for road:Dictionary in renderer.state.roads:
		var serial:=0
		for i in range(1,road.points.size()):
			var line:=PackedVector2Array([Vector2(road.points[i-1][0],road.points[i-1][1]),Vector2(road.points[i][0],road.points[i][1])])
			# Circumscribed caps cover the analytic street end, including between
			# polygon vertices. Native offset's coarse round caps leave slivers.
			var points:=PackedVector2Array();var radius:float=(float(road.width)*.5+.015)/cos(PI/16.)
			for at:Vector2 in line:
				for step in range(16):points.append(at+Vector2.from_angle(float(step)*TAU/16.)*radius)
			var polygon:=Geometry2D.convex_hull(points)
			_add_blocker("road/"+str(road.id)+"/"+str(serial),polygon);serial+=1
		for polygon:PackedVector2Array in junctions.additions(str(road.id)):
			_add_blocker("road/"+str(road.id)+"/"+str(serial),polygon);serial+=1

static func _append_ground(renderer,polygon:PackedVector2Array,rect:Rect2,center:Vector3,vertices:PackedVector3Array,normals:PackedVector3Array,colors:PackedColorArray,uv:PackedVector2Array,house:Dictionary={})->void:
	# Clip to the exact terrain triangles before sampling height: even on a
	# steep bank the ribbon cannot straddle a ridge and flicker into the ground.
	var terrain=renderer.Terrain;var bounds:=Rect2(polygon[0],Vector2.ZERO)
	for p:Vector2 in polygon:bounds=bounds.expand(p)
	var lo:=Vector2i(((bounds.position-terrain.LAND_RECT.position)/terrain.STEP).floor()).max(Vector2i.ZERO)
	var hi:=Vector2i(((bounds.end-terrain.LAND_RECT.position)/terrain.STEP).floor()).min(Vector2i(terrain.COLUMNS-2,terrain.ROWS-2))
	for x in range(lo.x,hi.x+1):
		for z in range(lo.y,hi.y+1):
			var at:Vector2=terrain.LAND_RECT.position+Vector2(x,z)*terrain.STEP
			var corners:=_corners(Rect2(at,Vector2.ONE*terrain.STEP))
			for triangle:PackedVector2Array in [PackedVector2Array([corners[0],corners[1],corners[2]]),PackedVector2Array([corners[0],corners[2],corners[3]])]:
				for fragment:PackedVector2Array in Geometry2D.intersect_polygons(polygon,triangle):
					var indices:=Geometry2D.triangulate_polygon(fragment)
					for i in range(0,indices.size(),3):
						var points:Array[Vector3]=[];var visible:=true
						for j in range(3):
							var p:=fragment[indices[i+j]];var y:float=renderer.state.ground_height(p)
							if renderer.state.water_clearance(p)<.04 or y>center.y+.14:visible=false
							points.append(Vector3(p.x,y+CONTACT_LIFT,p.y))
						if not visible:continue
						var cross:Vector3=(points[1]-points[0]).cross(points[2]-points[0])
						if cross.length_squared()<1e-14:continue
						if cross.y<0.:points.reverse();cross=-cross
						var normal:=cross.normalized()
						for point:Vector3 in points:
							var local:Vector3=point if house.is_empty() else Frame.design3(house,point)
							var distance:Vector2=(Vector2(local.x,local.z)-rect.get_center()).abs()-rect.size*.5
							var alpha:=1.-clampf((maxf(distance.x,distance.y)-CONTACT_INSET)/CONTACT_WIDTH,0.,1.)
							vertices.append(local-center);normals.append(normal if house.is_empty() else Frame.design_normal(house,normal));colors.append(Color(1.,1.,1.,alpha));uv.append(Vector2(point.x,point.z))

static func install_contact(renderer,parent:Node3D,house:Dictionary,cell:Dictionary)->void:
	var plan:Dictionary=renderer.highland.contact_plan(renderer,house)
	var arrays:Array=plan.cells.get(str(cell.id),[])
	if arrays.is_empty():return
	var mesh:=ArrayMesh.new();mesh.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,arrays)
	var material:ShaderMaterial=renderer.materials.get("highland_contact")
	if material==null:
		material=ShaderMaterial.new();material.shader=ContactShader;renderer.materials["highland_contact"]=material
	var instance:=MeshInstance3D.new();instance.name="StoneContactSkirt";instance.mesh=mesh;instance.material_override=material
	instance.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	parent.add_child(instance)
