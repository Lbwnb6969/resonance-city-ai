extends SceneTree
const Gesture=preload("res://scripts/ui/city_creation_road_gesture.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const Field=preload("res://scripts/visual/city_creation_road_draft_field.gd")
class MaskContext extends RefCounted:
	var meadow: Dictionary={"materials":{}}
	func _stroke_contours(points: Array[Vector2],radius: float)->Array:
		return preload("res://scripts/world/city_creation_junctions.gd").new()._stroke(points,radius)
var checks:=0
var failures: Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok: bool,label: String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func sample(field,at: Vector2)->float:
	var uv: Vector2=(at-field.rect.position)/field.rect.size
	return field.image.get_pixel(clampi(int(uv.x*field.image.get_width()),0,field.image.get_width()-1),clampi(int(uv.y*field.image.get_height()),0,field.image.get_height()-1)).r
func run()->void:
	var gesture:=Gesture.new();var exact:=true
	for i in range(1000):
		var at:=Vector2(i*.012,0.)
		var line: Array[Vector2]=gesture.move(at)
		exact=exact and line[-1]==at and line.size()<=2
	check(exact and gesture.controls.size()<45,"centimetre input follows every tip while a long straight remains two saved vertices")
	var stable: Array[Vector2]=gesture.points
	check(is_same(gesture.move(gesture.tip),stable),"stationary input reuses the last curve without rebuilding")
	gesture.clear();var finite:=true;var stable_prefix:=true;var frozen: Array[Vector2]=[]
	for i in range(160):
		var path: Array[Vector2]=gesture.move(Vector2(i*.12,sin(i*.07)*2.))
		for j in range(path.size()):finite=finite and path[j].is_finite() and (j==0 or path[j].distance_squared_to(path[j-1])>1e-12)
		if i==70:frozen=path.slice(0,maxi(1,path.size()-15))
		if i>70:
			for j in range(frozen.size()):stable_prefix=stable_prefix and frozen[j]==path[j]
	check(finite and stable_prefix,"growing curved road keeps finite unique vertices and exact settled prefix")
	gesture.clear();gesture.move(Vector2.ZERO);gesture.move(Vector2(2,0))
	var corner: Array[Vector2]=gesture.move(Vector2(2,2));var deviation:=0.
	for at: Vector2 in corner:deviation=maxf(deviation,minf(at.distance_to(Geometry2D.get_closest_point_to_segment(at,Vector2.ZERO,Vector2(2,0))),at.distance_to(Geometry2D.get_closest_point_to_segment(at,Vector2(2,0),Vector2(2,2)))))
	check(deviation>.24 and deviation<.25,"fast authored right angle retains the designed .85m tangent fillet")
	gesture.move(Vector2.ZERO);gesture.move(Vector2(-2,0));finite=true
	for at: Vector2 in gesture.points:finite=finite and at.is_finite()
	check(finite and gesture.points[-1]==Vector2(-2,0),"closing and reversing a stroke stays finite and keeps the tip")
	gesture.clear();check(gesture.points.is_empty() and gesture.controls.is_empty(),"cancel releases sealed and live brush state")
	var city:=State.new();city.initialize();city.houses.clear();city.roads.clear();city.plants.clear()
	var old: Array[Vector2]=[Vector2(-30,0),Vector2(-18,0)];assert(city.add_road(old).ok)
	var before:=city.snapshot();var previous:=Vector2.INF;var jump:=0.;var monotonic:=true
	for i in range(86):
		var at:=Vector2(-24,.95-i*.01);var raw: Array[Vector2]=[Vector2(-24,4),at]
		var result: Dictionary=city.preview_road(raw,"path","soft")
		var tip: Vector2=result.points[-1]
		if previous.is_finite():jump=maxf(jump,previous.distance_to(tip));monotonic=monotonic and tip.y<=previous.y+.00001
		previous=tip
	check(jump<.025 and monotonic,"attraction enters the .9m zone continuously instead of teleporting the tip")
	check(previous.y==0. and city.snapshot()==before,"close approach reaches the centreline and preview preserves history")
	var raw: Array[Vector2]=[Vector2(-24,4),Vector2(-24,.61)]
	var soft: Dictionary=city.preview_road(raw,"path","soft")
	check(soft.points[-1].y>0. and soft.points[-1].y<.61,"outer snap zone applies partial rather than all-or-nothing attraction")
	var committed: Dictionary=city.add_road(soft.points,"path","none")
	check(committed.ok and city.roads[-1].points[-1]==[soft.points[-1].x,soft.points[-1].y],"release validates and stores displayed assisted points without attracting them twice")
	var restored:=State.new();check(restored.restore(city.snapshot()).ok,"soft-assisted authored geometry remains a normal compatible saved road")
	var renderer:=MaskContext.new();var field:=Field.new()
	var loop: Array[Vector2]=[Vector2(-20,-4),Vector2(-16,-4),Vector2(-16,0),Vector2(-20,0),Vector2(-20,-4)]
	field.update(renderer,loop,1.25)
	check(sample(field,Vector2(-20,-2))> .9 and sample(field,Vector2(-18,-2))==0. and sample(field,Vector2(-22,-2))==0.,"temporary grass mask covers the loop while retaining its grass island")
	var correct:=true;var probed:=0
	for y in range(0,field.image.get_height(),3):
		for x in range(0,field.image.get_width(),3):
			var at: Vector2=field.rect.position+(Vector2(x,y)+Vector2.ONE*.5)*field.PIXEL
			var distance:=INF
			for i in range(1,loop.size()):distance=minf(distance,at.distance_to(Geometry2D.get_closest_point_to_segment(at,loop[i-1],loop[i])))
			if absf(distance-.625)<.035:continue
			correct=correct and ((field.image.get_pixel(x,y).r>.5)==(distance<.625));probed+=1
	check(correct and probed>1000,"active-edge mask matches independent capsule distances at actual texel centres")
	print("ROAD_GESTURE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"snap_max_jump_m":jump,"mask_probes":probed}))
	quit(0 if failures.is_empty() else 1)
