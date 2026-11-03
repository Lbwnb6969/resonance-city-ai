extends RefCounted
## A chimney reserves the full cap/outlet envelope on actual generated roof skin.
const Roof=preload("res://scripts/visual/city_creation_dormer_sites.gd")
const Choice=Roof.Choice
static func plan(city,parent:Node3D,house:Dictionary,diagnostics:Dictionary={})->Dictionary:
	var surface:=Roof.faces(parent,true)
	if surface.is_empty():diagnostics.no_roof_surface=true;return {}
	var occupied:=Roof.faces(parent,false);var top:=-1
	for cell:Dictionary in house.cells:
		if cell.kind=="room":top=maxi(top,int(cell.level))
	var rooms:Array=house.cells.filter(func(c):return c.kind=="room" and int(c.level)==top);rooms.sort_custom(func(a,b):return str(a.id).naturalnocasecmp_to(str(b.id))<0)
	var seed_value:int=Choice.record(house,"chimney").seed
	var offsets:Array[Vector2]=[Vector2(.40,-.45),Vector2(-.40,-.45),Vector2(.40,.45),Vector2(-.40,.45),Vector2(.58,0),Vector2(-.58,0),Vector2(0,.58),Vector2(0,-.58)]
	for cell:Dictionary in rooms:
		for index in range(offsets.size()):
			var at:=Vector2(house.origin[0]+cell.x*1.8,house.origin[1]+cell.z*1.8)+offsets[posmod(index+seed_value,4) if index<4 else index]
			var footprint:=Rect2(at-Vector2(.28,.24),Vector2(.56,.48));var low:=INF;var high:=-INF;var ok:=true
			for x in range(7):
				for z in range(7):
					var y:=Roof.height(surface,footprint.position+Vector2(x*.56/6.,z*.08))
					if not is_finite(y):ok=false;break
					low=minf(low,y);high=maxf(high,y)
				if not ok:break
			if not ok:diagnostics.roof_support_missing=true;continue
			if high-low>.40:diagnostics.roof_too_steep=true;continue
			if Roof.blocked(occupied,footprint,low+.035,high+1.02):diagnostics.roof_obstructed=true;continue
			if Roof.foreign_blocked(city,house,footprint,low+.035,high+1.02):diagnostics.neighbor_obstructed=true;continue
			return {"version":1,"at":at,"cell_id":str(cell.id),"low":low,"high":high,"footprint":footprint,"samples":49}
	return {}
