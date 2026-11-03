extends RefCounted
const CLEAR_HEIGHT:=1.35
const HEIGHT:=1.7
const HALF:=.9
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
static func build(renderer:Node3D,wall:Node3D,body:StaticBody3D,opening:Dictionary,color:Color,trim:Color,extrude:Callable)->void:
	var low:float=opening.offset-opening.half_width;var high:float=opening.offset+opening.half_width
	var polygons:Array[PackedVector2Array]=[PackedVector2Array([Vector2(-HALF,CLEAR_HEIGHT),Vector2(HALF,CLEAR_HEIGHT),Vector2(HALF,HEIGHT),Vector2(-HALF,HEIGHT)])]
	if low>-HALF+.001:polygons.append(PackedVector2Array([Vector2(-HALF,0),Vector2(low,0),Vector2(low,CLEAR_HEIGHT),Vector2(-HALF,CLEAR_HEIGHT)]))
	if high<HALF-.001:polygons.append(PackedVector2Array([Vector2(high,0),Vector2(HALF,0),Vector2(HALF,CLEAR_HEIGHT),Vector2(high,CLEAR_HEIGHT)]))
	var faces:Array[Vector3]=[]
	for polygon:PackedVector2Array in polygons:faces.append_array(extrude.call(polygon,.13))
	var mesh:MeshInstance3D=renderer._triangles(wall,faces,color);mesh.name="ArchWallSurface"
	var shape:=CollisionShape3D.new();var concave:=ConcavePolygonShape3D.new();concave.backface_collision=true;concave.set_faces(mesh.mesh.get_faces());shape.shape=concave;shape.transform=wall.transform;body.add_child(shape)
	rim(renderer,wall,opening,trim,false)
	wall.set_meta("arch_opening",opening.duplicate(true));wall.set_meta("arch_clear_height",CLEAR_HEIGHT)
static func rim(renderer:Node3D,wall:Node3D,opening:Dictionary,color:Color,preview:bool)->void:
	var depth:=.24 if preview else .19
	renderer._box(wall,Vector3(opening.half_width*2.,.075,depth),Vector3(opening.offset,CLEAR_HEIGHT+.0375,.028),renderer._material(color))
static func preview(renderer:Node3D,house:Dictionary,passage:Dictionary,side:Vector2i,color:Color)->void:
	var wall:=Node3D.new();wall.name="ArchPreview"
	var direction:=Frame.direction(house,Vector2(side));var at:Vector2=passage.center+direction*HALF
	wall.position=Vector3(at.x,float(house.get("base_y",0.)),at.y);wall.rotation.y=Frame.yaw(house)+atan2(float(side.x),float(side.y))
	renderer.preview.add_child(wall);rim(renderer,wall,renderer.Architecture.wall_opening([passage],side),color,true)
