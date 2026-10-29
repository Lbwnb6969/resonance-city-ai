extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
const Plan=preload("res://scripts/world/city_creation_bridge_plan.gd")
static func build(kind:String)->RefCounted:
	var city:=State.new();city.initialize_free()
	if kind=="slope":assert(city.add_terrain_stroke([Vector2(-1,0)] as Array[Vector2],"raise",4.,.65).ok)
	var points:Array[Vector2]=[Vector2(-16,0),Vector2(18,0)]
	if kind=="diagonal":points=[Vector2(-16,-5),Vector2(18,5)]
	if kind=="curve":points=[Vector2(-16,-2),Vector2(-4,-1),Vector2(0,0),Vector2(6,0),Vector2(12,1),Vector2(18,2)]
	if kind=="bank_bend":points=[Vector2(-16,-2),Vector2(.7,-.15),Vector2(1.15,0),Vector2(4.9,0),Vector2(5.5,.15),Vector2(18,2)]
	assert(city.add_road(points,"promenade","none").ok)
	assert(city.add_road([Vector2(-28,-17),Vector2(-24,-17)] as Array[Vector2],"path","none").ok)
	return city
static func measure(profile:Dictionary,sections:Array)->Dictionary:
	var facts:Array=[];var maximum:=0.;var vertical_gap:=0.
	for run:Dictionary in profile.bridge_runs:
		if run.has("family"):continue
		for end:int in [-1,1]:
			var arc:float=run.start-.12 if end<0 else run.end+.12
			var p:Dictionary=Plan._point(run.samples,arc);var normal:=Vector2(-p.tangent.y,p.tangent.x)
			for side:int in [-1,1]:
				var target:Vector2=p.at+normal*(run.width*.5+.10)*side;var nearest:=INF;var y_gap:=INF
				for section:Dictionary in sections:
					if section.kind!="fill":continue
					var at:=Geometry2D.get_closest_point_to_segment(target,section.a,section.b);var distance:=at.distance_to(target)
					if distance>=nearest:continue
					nearest=distance
					var t:float=Vector2(section.a).distance_to(at)/Vector2(section.a).distance_to(section.b)
					var bottom:float=lerpf(section.bottom_a,section.bottom_b,t);var top:float=lerpf(section.top_a,section.top_b,t)
					y_gap=maxf(0.,maxf(bottom,-.66)-minf(top,run.deck_y-.012))
				maximum=maxf(maximum,nearest);vertical_gap=maxf(vertical_gap,y_gap);facts.append({"end":end,"side":side,"at":target,"gap_m":nearest,"vertical_gap_m":y_gap})
	return {"contacts":facts,"max_gap_m":maximum,"max_vertical_gap_m":vertical_gap}
