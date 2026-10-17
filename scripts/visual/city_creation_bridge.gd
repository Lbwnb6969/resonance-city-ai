extends RefCounted
## Two open arch barrels, separate voussoirs, piers and bridgehead obelisks.
## Prepared as plain vertices in the edit worker, installed in four batches.
const Plan=preload("res://scripts/world/city_creation_bridge_plan.gd")
const Truss=preload("res://scripts/visual/city_creation_truss_bridge.gd")
const Modern=preload("res://scripts/visual/city_creation_modern_bridge.gd")
const WATER := -0.16
const SEGMENTS := 16

static func prepare(profile: Dictionary) -> Dictionary:
	var data := {"faces":[],"stones":[],"caps":[],"lamps":[],"runs":[],"trusses":[],"modern":[]}
	for run: Dictionary in profile.get("bridge_runs",[]):
		if run.get("family","")=="clockwork_truss":data.trusses.append(Truss.prepare(run))
		elif run.get("family","")=="modern_single_arch":data.modern.append(Modern.prepare(run))
		else:data.runs.append(run)
	for run: Dictionary in data.runs:
		var start: float=run.start
		var finish: float=run.end
		var middle := (start+finish)*.5
		var pier := minf(.28,(finish-start)*.1)
		var y: float=run.deck_y
		var half := float(run.width)*.5+.13
		var foot := WATER-.5
		var spring := WATER-.03
		var rise := maxf(.10,y-.18-spring)
		for interval: Vector2 in [Vector2(start+.12,middle-pier*.5),Vector2(middle+pier*.5,finish-.12)]:
			for index in range(SEGMENTS):
				var t0 := float(index)/SEGMENTS
				var t1 := float(index+1)/SEGMENTS
				var a := lerpf(interval.x,interval.y,t0)
				var b := lerpf(interval.x,interval.y,t1)
				var inner0 := spring+rise*sin(PI*t0)
				var inner1 := spring+rise*sin(PI*t1)
				_prism(data.faces,run,a,b,-half,half,inner0,inner1,y-.012,y-.012)
				# Radial joints separate visible wedge blocks along both faces.
				for side: int in [-1,1]:
					var outside := float(side)*(half+.025)
					var inside := float(side)*(half-.08)
					var gap := .007
					var low0 := spring+rise*sin(PI*(t0+gap))
					var low1 := spring+rise*sin(PI*(t1-gap))
					_prism(data.stones,run,lerpf(interval.x,interval.y,t0+gap),lerpf(interval.x,interval.y,t1-gap),minf(inside,outside),maxf(inside,outside),low0,low1,minf(y+.025,low0+.16),minf(y+.025,low1+.16))
		for pier_range: Vector2 in [Vector2(start-.12,start+.13),Vector2(middle-pier*.5,middle+pier*.5),Vector2(finish-.13,finish+.12)]:
			_prism(data.faces,run,pier_range.x,pier_range.y,-half,half,foot,foot,y-.012,y-.012)
		# Thick coping and low colonnade parapets leave the full walkway clear.
		var sections := maxi(2,ceili((finish-start)/.20))
		for index in range(sections):
			var a := lerpf(start,finish,float(index)/sections)
			var b := lerpf(start,finish,float(index+1)/sections)
			for side: int in [-1,1]:
				var outer := float(side)*(half+.025)
				var inner := float(side)*(half-.16)
				_prism(data.faces,run,a,b,minf(inner,outer),maxf(inner,outer),y,y,y+.12,y+.12)
				_prism(data.caps,run,a,b,minf(inner,outer)-.025,maxf(inner,outer)+.025,y+.53,y+.53,y+.61,y+.61)
		var posts := maxi(2,ceili((finish-start)/.65))
		for index in range(posts+1):
			var arc := lerpf(start,finish,float(index)/posts)
			for side: int in [-1,1]:
				var across := float(side)*(half-.06)
				_prism(data.stones,run,arc-.055,arc+.055,across-.055,across+.055,y+.12,y+.12,y+.53,y+.53)
		for arc: float in [start,finish]:
			for side: int in [-1,1]:
				var across := float(side)*(half-.055)
				_prism(data.stones,run,arc-.13,arc+.13,across-.13,across+.13,y,y,y+.88,y+.88)
				_prism(data.caps,run,arc-.17,arc+.17,across-.17,across+.17,y+.78,y+.78,y+.88,y+.88)
				# Tapered pyramidal crown above a small amber bridge lantern.
				var point := _vertex(run,arc,across,y+1.22)
				var ring: Array[Vector3]=[]
				for corner: Vector2 in [Vector2(-.13,-.13),Vector2(.13,-.13),Vector2(.13,.13),Vector2(-.13,.13)]: ring.append(_vertex(run,arc+corner.x,across+corner.y,y+1.02))
				for index in range(4): data.caps.append_array([ring[index],point,ring[(index+1)%4]])
				_prism(data.lamps,run,arc-.075,arc+.075,across-.075,across+.075,y+.88,y+.88,y+1.02,y+1.02)
	return data

static func _vertex(run: Dictionary,arc: float,across: float,y: float) -> Vector3:
	var point := Plan._point(run.samples,arc)
	var at: Vector2=point.at+Vector2(-point.tangent.y,point.tangent.x)*across
	return Vector3(at.x,y,at.y)

static func _prism(faces: Array,run: Dictionary,a: float,b: float,low: float,high: float,bottom_a: float,bottom_b: float,top_a: float,top_b: float) -> void:
	var v := [_vertex(run,a,low,bottom_a),_vertex(run,b,low,bottom_b),_vertex(run,b,high,bottom_b),_vertex(run,a,high,bottom_a),_vertex(run,a,low,top_a),_vertex(run,b,low,top_b),_vertex(run,b,high,top_b),_vertex(run,a,high,top_a)]
	for q: Array in [[0,1,2,3],[4,7,6,5],[0,4,5,1],[3,2,6,7],[0,3,7,4],[1,5,6,2]]: faces.append_array([v[q[0]],v[q[1]],v[q[2]],v[q[0]],v[q[2]],v[q[3]]])

static func install(renderer,parent: Node3D,data: Dictionary,road: Dictionary) -> void:
	for modern:Dictionary in data.get("modern",[]):Modern.install(renderer,parent,modern,road)
	for truss: Dictionary in data.get("trusses",[]):Truss.install(renderer,parent,truss,road)
	if data.faces.is_empty(): return
	var root := Node3D.new()
	root.name="ClassicalDoubleArchBridge"
	parent.add_child(root)
	root.set_meta("runs",data.runs)
	var all_faces: Array[Vector3]=[]
	for part: String in ["faces","stones","caps","lamps"]:
		var faces: Array[Vector3]=[]
		faces.assign(data[part])
		all_faces.append_array(faces)
		var mesh: MeshInstance3D=renderer._triangles(root,faces,{"faces":Color("ada991"),"stones":Color("d7cdb1"),"caps":Color("e3d6b8"),"lamps":Color("ffd791")}[part])
		mesh.name=part
		if part=="lamps": mesh.material_override=renderer.promenade.lamp_material()
	var body := StaticBody3D.new()
	body.name="BridgeGroundPick"
	body.collision_layer=2
	body.set_meta("ground",true)
	body.set_meta("road_id",str(road.id))
	var shape := ConcavePolygonShape3D.new()
	shape.backface_collision=true
	shape.set_faces(PackedVector3Array(all_faces))
	var collision := CollisionShape3D.new()
	collision.shape=shape
	body.add_child(collision)
	root.add_child(body)
