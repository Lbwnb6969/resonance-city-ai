extends RefCounted
## Writes into the anchor guide's single shared line mesh.
static func append(mesh:ImmediateMesh,guide:RefCounted,arcs:Array)->void:
	for arc:Dictionary in arcs:
		var at:Vector2=arc.at;var axis:Vector2=arc.axis;var radius:float=arc.radius;var turn:float=arc.turn
		mesh.surface_set_color(Color("f0bd4e") if arc.strong else Color(.78,.68,.43,.62))
		_line(mesh,guide,at-axis*radius,at+axis*radius)
		_line(mesh,guide,at,at+axis.rotated(turn)*radius)
		var sign_turn:=1. if turn>=0. else -1.
		for mark in range(13):
			var direction:=axis.rotated(deg_to_rad(mark*15.)*sign_turn)
			var tick:=.20 if mark%2==0 else .11
			_line(mesh,guide,at+direction*(radius-tick),at+direction*(radius+.04))
		var count:=maxi(1,ceili(absf(turn)/deg_to_rad(3.)))
		for i in range(count):
			if i%3==2 and not arc.strong:continue
			_line(mesh,guide,at+axis.rotated(turn*float(i)/count)*radius,at+axis.rotated(turn*float(i+1)/count)*radius)
static func _line(mesh:ImmediateMesh,guide:RefCounted,a:Vector2,b:Vector2)->void:
	mesh.surface_add_vertex(guide.point(a));mesh.surface_add_vertex(guide.point(b))
static func closure(mesh:ImmediateMesh,guide:RefCounted,at:Vector2)->void:
	mesh.surface_set_color(Color("f8cd6c"))
	for radius:float in [.40,.57]:
		for i in range(48):_line(mesh,guide,at+Vector2.from_angle(TAU*i/48.)*radius,at+Vector2.from_angle(TAU*(i+1)/48.)*radius)
