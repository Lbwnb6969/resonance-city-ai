extends SceneTree
## Follow actual triangle edges without rising to the real eave outline.
## This detects closed vertex basins, not a complete hydraulic simulation.
const State=preload("res://scripts/world/city_creation_state.gd")
const Context=preload("res://scripts/visual/city_creation_building_context.gd")
var failures:Array=[]
var facts:Array=[]
var checks:=0
func _initialize()->void:run.call_deferred()
func measure(patches:Array)->Dictionary:
	var points:Dictionary={};var neighbors:Dictionary={};var outline:Array=[]
	for patch:Dictionary in patches:
		if patch.surface=="fascia":outline.append([Vector2(patch.vertices[0].x,patch.vertices[0].z),Vector2(patch.vertices[1].x,patch.vertices[1].z)])
		if patch.surface!="roof":continue
		for i in range(0,patch.vertices.size(),3):
			for j in range(3):
				var p:Vector3=patch.vertices[i+j];var q:Vector3=patch.vertices[i+(j+1)%3]
				p=p.snapped(Vector3.ONE*.00001);q=q.snapped(Vector3.ONE*.00001)
				points[p]=true;points[q]=true
				if not neighbors.has(p):neighbors[p]={}
				if not neighbors.has(q):neighbors[q]={}
				neighbors[p][q]=true;neighbors[q][p]=true
	var reached:Dictionary={};var queue:Array=[]
	for p:Vector3 in points:
		var at:=Vector2(p.x,p.z)
		for edge:Array in outline:
			if Geometry2D.get_closest_point_to_segment(at,edge[0],edge[1]).distance_to(at)>.00003:continue
			reached[p]=true;queue.append(p);break
	var boundary:=queue.size();var cursor:=0
	while cursor<queue.size():
		var p:Vector3=queue[cursor];cursor+=1
		for q:Vector3 in neighbors[p]:
			if reached.has(q) or q.y+.00002<p.y:continue
			reached[q]=true;queue.append(q)
	var blocked:Array=[]
	for p:Vector3 in points:
		if not reached.has(p):blocked.append(p)
	return {"vertices":points.size(),"eave_vertices":boundary,"draining_vertices":reached.size(),"blocked_vertices":blocked.size(),"blocked_examples":blocked.slice(0,5)}
func run()->void:
	var shapes:={"L":[Vector2i.ZERO,Vector2i(1,0),Vector2i(2,0),Vector2i(0,1),Vector2i(0,2)],"U":[Vector2i.ZERO,Vector2i(1,0),Vector2i(2,0),Vector2i(0,1),Vector2i(2,1),Vector2i(0,2),Vector2i(2,2)],"court":[],"broad":[]}
	for x in range(3):
		for z in range(3):
			if x!=1 or z!=1:shapes.court.append(Vector2i(x,z))
	for x in range(5):
		for z in range(5):shapes.broad.append(Vector2i(x,z))
	for shape:String in shapes:
		for turn in range(4):
			var city:=State.new();city.initialize_free();city.add_house(Vector2(-25.13,-15.07))
			for cell:Vector2i in shapes[shape]:
				var at:=cell
				for ignored in range(turn):at=Vector2i(-at.y,at.x)
				if at!=Vector2i.ZERO and not city.add_cell("h1",at.x,at.y,0).ok:failures.append("public room "+str(at))
			var original:Dictionary=city.snapshot()
			var context:=Context.new();context.prepare(city.houses,city.roads)
			var result:=measure(context.roof_patches("h1"));result.shape=shape;result.turn=turn;facts.append(result)
			checks+=2
			if result.vertices==0 or result.eave_vertices==0:failures.append(shape+str(turn)+" has no tested roof outline")
			if city.snapshot()!=original:failures.append(shape+str(turn)+" drainage query changed author data")
			if "--verify-drainage" in OS.get_cmdline_user_args() and (result.eave_vertices==0 or result.blocked_vertices>0):failures.append(shape+str(turn)+" contains roof vertices without a downhill eave path")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--report="):FileAccess.open(arg.trim_prefix("--report="),FileAccess.WRITE).store_string(JSON.stringify(report,"\t"))
	print("ROOF_DRAINAGE ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
