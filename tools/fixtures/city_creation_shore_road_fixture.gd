extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
const ORIGIN:=Vector2(-28,-20)
static func point(at:Vector2,yaw:float)->Vector2:return ORIGIN+at.rotated(-yaw)
static func stroke(raw:Array,yaw:float)->Array[Vector2]:
	var result:Array[Vector2]=[]
	for at:Vector2 in raw:result.append(point(at,yaw))
	return result
static func build(kind:String="straight",yaw:float=0.,laid:bool=true)->Dictionary:
	var city:=State.new();city.initialize_free();var ok:bool=city.add_water(stroke([Vector2(0,-3)] if kind=="middle_pond" else [Vector2(-9,-3),Vector2(9,-3)],yaw),2.,"pond").ok
	var z:=-1.05 # 1.75m paving; actual dry edge is 7.5cm from the water.
	if kind=="slope":ok=city.add_terrain_stroke(stroke([Vector2(3,0)],yaw),"raise",4.,.65).ok and ok
	var raw:Array=[Vector2(-4,z),Vector2(4,z)]
	if kind=="middle_pond":raw=[Vector2(-8,z),Vector2(8,z)]
	if kind=="bend":raw=[Vector2(-4,z),Vector2(2,z),Vector2(4,z+2)]
	if kind=="wet_edge":raw=[Vector2(-4,-1.5),Vector2(4,-1.5)]
	if kind=="cross":raw=[Vector2(0,1),Vector2(0,-7)]
	var points:=stroke(raw,yaw)
	if kind=="junction":ok=city.add_road(stroke([Vector2(0,z),Vector2(0,3)],yaw),"path","none").ok and ok
	if laid:ok=city.add_road(points,"promenade","none").ok and ok
	return {"city":city,"points":points,"ok":ok,"road_id":"r2" if kind=="junction" else "r1"}
