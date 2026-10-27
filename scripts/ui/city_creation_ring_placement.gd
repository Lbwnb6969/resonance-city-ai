extends RefCounted
## At viewport edges, place only displaced islands in the nearest free margin.
static func clamp_at(at:Vector2,size:Vector2,view:Rect2)->Vector2:
	return at.clamp(view.position,view.end-size)
static func fit(items:Array,house:Rect2,view:Rect2,neighbors:Array=[],reserved:Array=[])->bool:
	var occupied:Array[Rect2]=[];
	for rect:Rect2 in reserved:occupied.append(rect)
	var success:=true
	var ordered:Array=items.duplicate()
	ordered.sort_custom(func(a:Control,b:Control)->bool:
		var difference:=a.size.x*a.size.y-b.size.x*b.size.y
		return items.find(a)<items.find(b) if absf(difference)<1. else difference>0.)
	for item:Control in ordered:
		var desired:=item.global_position;var size:=item.size
		var candidates:Array[Vector2]=[clamp_at(desired,size,view)]
		for x:float in [house.position.x-size.x-12.,house.end.x+12.]:candidates.append(clamp_at(Vector2(x,desired.y),size,view))
		for y:float in [house.position.y-size.y-12.,house.end.y+12.]:candidates.append(clamp_at(Vector2(desired.x,y),size,view))
		for y in range(ceili(view.size.y/(size.y+8.))):
			for x in range(ceili(view.size.x/(size.x+8.))):
				candidates.append(clamp_at(view.position+Vector2(x*(size.x+8.),y*(size.y+8.)),size,view))
		candidates.sort_custom(func(a:Vector2,b:Vector2)->bool:return a.distance_squared_to(desired)<b.distance_squared_to(desired))
		var found:=false
		for candidate:Vector2 in candidates:
			var rect:=Rect2(candidate,size)
			if neighbors.any(func(other:Rect2)->bool:return other.grow(3.).intersects(rect)):continue
			if rect.intersects(house.grow(4.)) or occupied.any(func(other:Rect2)->bool:return other.grow(3.).intersects(rect)):continue
			item.global_position=candidate;occupied.append(rect);found=true;break
		if not found:
			# In a dense town every margin can contain a neighbouring roof.
			# Keep controls reachable and prefer leaving the selected house clear.
			var fallback:=clamp_at(desired,size,view)
			for candidate:Vector2 in candidates:
				var rect:=Rect2(candidate,size)
				if not rect.intersects(house.grow(4.)) and not occupied.any(func(other:Rect2)->bool:return other.grow(3.).intersects(rect)):fallback=candidate;break
			item.global_position=fallback;occupied.append(Rect2(fallback,size))
		success=success and found
	return success
