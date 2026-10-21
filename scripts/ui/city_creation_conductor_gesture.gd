extends Node3D
## The gesture chooses musical order; residents still use the real street graph.
var demo
var venue:=""
var drawing:=false
var order:Array[String]=[]
var points:Array[Vector2]=[]
var _seen:Dictionary={}
var _path_key:Array=[]
var staff:MeshInstance3D
var spotlight:MeshInstance3D
var material:ShaderMaterial
var _state_id:=0

func setup(owner)->void:
	demo=owner;name="ConductorGesture";demo.add_child(self)
	_state_id=demo.state.get_instance_id()
	material=ShaderMaterial.new();material.shader=preload("res://scripts/visual/shaders/creation_conductor_staff.gdshader")
	staff=MeshInstance3D.new();staff.name="DrawnGoldenStaff";staff.material_override=material;staff.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF;add_child(staff);staff.hide()
	spotlight=MeshInstance3D.new();spotlight.name="ConductorRoofSpotlight"
	var ring:=TorusMesh.new();ring.inner_radius=1.65;ring.outer_radius=1.72;ring.rings=32;ring.ring_segments=6
	spotlight.mesh=ring;spotlight.material_override=material;spotlight.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF;add_child(spotlight);spotlight.hide()

func arm(id:String)->void:
	if not demo.life.ConductorParade.eligible(demo.state) or demo.life.concert_status().phase!="idle":return
	venue=id;drawing=false;order.clear();points.clear();_seen.clear();staff.hide();spotlight.hide();_path_key.clear()
	demo.spatial_popover.close();demo.select_tool(4)
	demo._message("按住左键，依次划过想领奏的聚落与地标；松开邀请巡游，Esc取消。")

func cancel()->void:
	venue="";drawing=false;order.clear();points.clear();_seen.clear();_path_key.clear();staff.hide();spotlight.hide()

func handle_input(event:InputEvent)->bool:
	if venue.is_empty():return false
	if event is InputEventKey and event.pressed:
		if event.keycode==KEY_ESCAPE:cancel();return true
		if event.keycode>=KEY_1 and event.keycode<=KEY_9:cancel();return false
	if event is InputEventMouseButton:
		demo.pointer=event.position
		if event.button_index==MOUSE_BUTTON_RIGHT and event.pressed:cancel();return true
		if event.button_index==MOUSE_BUTTON_LEFT:
			if event.pressed:
				if demo.get_viewport().gui_get_hovered_control()!=null:return false
				drawing=true;order.clear();points.clear();_seen.clear();_sample();return true
			if drawing:
				_sample();drawing=false
				var result:Dictionary=demo.life.invite_conductor_movement(venue,order,points)
				demo._message(str(result.message))
				if result.ok:
					venue="";demo._capture_journeys();demo.save_delay=3.;demo.music.play_edit("concert")
				return true
	if event is InputEventMouseMotion and drawing:
		demo.pointer=event.position;_sample();return true
	return false

func _sample()->void:
	var at:Vector2=demo._ground_at(demo.pointer)
	if not demo.State.WORLD_RECT.has_point(at):return
	if points.size()<256 and (points.is_empty() or points[-1].distance_to(at)>.3):points.append(at)
	var hit:Dictionary=demo._ray_hit(demo.pointer);var body:Object=hit.get("collider")
	var id:=str(body.get_meta("house_id","")) if body!=null else ""
	var groups:Dictionary=demo.state.natural_clusters()
	if id.is_empty():
		var nearest:=2.8
		for house:Dictionary in demo.state.houses:
			if not house.has("signature") and int(groups[house.id].size)<3:continue
			var distance:=at.distance_to(Vector2(house.origin[0],house.origin[1]))
			if distance<nearest:nearest=distance;id=str(house.id)
	if not id.is_empty() and order.size()<8:
		var house:Dictionary=demo.town._house_record(id)
		var key:=id if house.has("signature") else str(groups[id].id)
		if not _seen.has(key) and (house.has("signature") or int(groups[id].size)>=3):_seen[key]=true;order.append(id)
	_draw_staff(points)

func _draw_staff(stroke:Array[Vector2])->void:
	staff.visible=stroke.size()>1
	if stroke.size()<2:return
	var mesh:=ImmediateMesh.new();mesh.surface_begin(Mesh.PRIMITIVE_TRIANGLES)
	for i:int in range(1,stroke.size()):
		var a:=stroke[i-1];var b:=stroke[i]
		if a.distance_squared_to(b)<.0001:continue
		var normal:=Vector2(-(b-a).y,(b-a).x).normalized()
		for line:int in range(5):
			var aa:=a+normal*(float(line-2)*.11-.016);var ab:=aa+normal*.032
			var ba:=b+normal*(float(line-2)*.11-.016);var bb:=ba+normal*.032
			for p:Vector2 in [aa,bb,ba,aa,ab,bb]:mesh.surface_add_vertex(Vector3(p.x,demo.state.ground_height(p)+2.7,p.y))
	mesh.surface_end();staff.mesh=mesh

func update()->void:
	if _state_id!=demo.state.get_instance_id():cancel();_state_id=demo.state.get_instance_id()
	material.set_shader_parameter("music_clock",demo.music._playback_clock())
	if not venue.is_empty():return
	var concert:Dictionary=demo.life._concert
	if not concert.get("conductor",false):
		staff.hide();spotlight.hide();_path_key.clear();return
	var next:Array=[demo.state.revision,concert.conductor_path]
	if next!=_path_key:
		_path_key=next;var stroke:Array[Vector2]=[]
		for p:Array in concert.conductor_path:stroke.append(Vector2(p[0],p[1]))
		_draw_staff(stroke)
	spotlight.visible=concert.phase=="playing"
	if not spotlight.visible:return
	var source:Dictionary=demo.music.active_source();var house:Dictionary=demo.town._house_record(str(source.get("source_id","")))
	if house.is_empty():spotlight.hide();return
	var level:=0
	for cell:Dictionary in house.cells:level=maxi(level,int(cell.level))
	spotlight.position=Vector3(house.origin[0],float(house.get("base_y",0.))+(level+1)*1.7+.85,house.origin[1])
	spotlight.scale=Vector3.ONE*(1.+.06*sin(demo.music._playback_clock()*TAU/.75))
