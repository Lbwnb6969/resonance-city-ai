extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Form=preload("res://scripts/world/city_creation_organic_form.gd")
const Cut=preload("res://scripts/visual/city_creation_corner_mesh.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var city:=State.new();city.initialize_empty();check(city.add_house(Vector2(-25,-15)).ok,"real single house")
	var old:=city.snapshot();var id:=str(city.houses[0].id)
	check(not city.houses[0].has("corner_bevel") and Form.mode(city,city.houses[0])==0,"old works have no added default field")
	check(Form.set_corner(city,id,2).ok and city.snapshot().schema==19,"optional rounded field declares Schema19")
	var saved:=city.snapshot();var copy:=State.new()
	check(copy.restore(saved).ok and copy.houses==city.houses,"rounded geometry cold roundtrip")
	check(city.undo().ok and city.snapshot().houses==old.houses,"one step shape undo")
	check(city.redo().ok and city.houses[0].corner_bevel==2,"one step shape redo")
	for value:Variant in [-1,3,1.5,"2",null,true]:
		var bad:=saved.duplicate(true);bad.houses[0].corner_bevel=value
		check(not copy.restore(bad).ok and copy.snapshot().houses==saved.houses,"reject invalid optional shape atomically: "+str(value))
	var bad:=saved.duplicate(true);bad.schema=18;check(not copy.restore(bad).ok,"old schema cannot disguise shape field")
	check(Form.set_corner(city,id,1).ok and Form.set_corner(city,id,0).ok and not city.houses[0].has("corner_bevel"),"bevel and exact original recipe cycle")
	var sides:=Form.exposed(city,city.houses[0],city.houses[0].cells[0]);check(sides.size()==4,"four truly exposed detached corners")
	check(city.add_cell(id,1,0,0).ok,"real joined room")
	check(Form.corners(city.houses[0],city.houses[0].cells[0]).size()==2,"shared internal face retains squared seam")
	var other:=State.new();other.initialize_empty();other.add_house(Vector2(-25,-15));other.add_house(Vector2(-23.2,-15))
	check(Form.exposed(other,other.houses[0],other.houses[0].cells[0]).size()==2,"separate touching owners retain squared common seam")
	var box:=BoxMesh.new();box.size=Vector3(Form.HALF*2.,1.7,Form.HALF*2.)
	for mode:int in [1,2]:
		var mesh:=Cut.build(box,Transform3D.IDENTITY,sides,mode)
		var faces:=mesh.get_faces();var original:=box.get_faces();var volume:=0.;var old_volume:=0.;var max_normal_error:=0.
		for i in range(0,faces.size(),3):volume+=faces[i].dot(faces[i+1].cross(faces[i+2]))/6.
		for i in range(0,original.size(),3):old_volume+=original[i].dot(original[i+1].cross(original[i+2]))/6.
		var arrays:=mesh.surface_get_arrays(0);var positions:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];var normals:PackedVector3Array=arrays[Mesh.ARRAY_NORMAL]
		var edges:Dictionary={}
		check(Array(faces).all(func(p:Vector3):return absf(p.x)<=Form.HALF+.0001 and absf(p.z)<=Form.HALF+.0001),"corner actually cuts inside original box")
		for i in range(0,faces.size(),3):
			for k in range(3):
				var a:Vector3=faces[i+k].snapped(Vector3.ONE*.0001);var b:Vector3=faces[i+(k+1)%3].snapped(Vector3.ONE*.0001)
				var key:=[a,b] if str(a)<str(b) else [b,a];edges[key]=int(edges.get(key,0))+1
		check(edges.values().all(func(count):return count==2),"split triangles remain closed without holes")
		check(absf(volume)<absf(old_volume)*.99 and signf(volume)==signf(old_volume),"removed corner volume and preserved winding")
		for normal:Vector3 in normals:max_normal_error=maxf(max_normal_error,absf(normal.length()-1.))
		check(max_normal_error<.0001,"finite unit vertex normals")
		var p:=Form.point(Vector3(Form.HALF,0,Form.HALF),[Vector2.ONE],mode)
		check(p.x<Form.HALF-.1 and p.z<Form.HALF-.02,"original pointed corner is absent")
		if mode==2:
			var c:=Form.HALF-Form.RADIUS
			for t:float in [0.,.5,1.]:
				var point:=Form.point(Vector3(Form.HALF,0,c+Form.RADIUS*t),[Vector2.ONE],2)
				check(absf(Vector2(point.x-c,point.z-c).length()-Form.RADIUS)<.00001,"exact 0/30/60 degree quarter-circle knots")
	var unsupported:Dictionary=city.houses[0].duplicate(true);unsupported.signature="bell_keep"
	check(not Form.supported(city,unsupported),"dedicated landmark keeps original geometry")
	print("ORGANIC_CORNERS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
