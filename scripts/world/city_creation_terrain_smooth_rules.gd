extends RefCounted
## V3 freezes a world-metre Gaussian disk. V1's cross blur stays untouched.
const VERSION:=3
const SCHEMA:=22
const KERNEL_RADIUS:=1.5
const SIGMA:=.75
static func targeted(row:Dictionary)->bool:return row.get("terrain_version",1)==VERSION
static func validate(city:RefCounted,row:Dictionary)->Dictionary:
	if row.get("mode")!="smooth" or row.has("target_y") or row.get("natural",false):return city._fail("宽核规则只用于柔化笔画")
	if not city._is_number(row.get("kernel_radius")) or row.kernel_radius!=KERNEL_RADIUS:return city._fail("宽核柔化需要1.5米邻域")
	return {"ok":true}
static func row(points:Array,radius:float,strength:float)->Dictionary:
	return {"mode":"smooth","points":points,"radius":radius,"strength":strength,"terrain_version":VERSION,"kernel_radius":KERNEL_RADIUS}
static func apply(terrain,buffer:PackedFloat32Array,offsets:PackedFloat32Array,stroke:Dictionary,clearance:Callable)->void:
	var source:=buffer.duplicate();var bounds:Rect2=terrain._stroke_bounds(stroke).intersection(terrain.LAND_RECT)
	var low:Vector2=((bounds.position-terrain.LAND_RECT.position)/terrain.STEP).floor().max(Vector2.ZERO)
	var high:Vector2=((bounds.end-terrain.LAND_RECT.position)/terrain.STEP).ceil().min(Vector2(terrain.COLUMNS-1,terrain.ROWS-1))
	var kernel:Array=[];var cells:=ceili(KERNEL_RADIUS/terrain.STEP)
	for z in range(-cells,cells+1):
		for x in range(-cells,cells+1):
			var distance_squared:float=Vector2(x,z).length_squared()*terrain.STEP*terrain.STEP
			if distance_squared<=KERNEL_RADIUS*KERNEL_RADIUS:kernel.append([Vector2i(x,z),exp(-.5*distance_squared/(SIGMA*SIGMA))])
	for z in range(int(low.y),int(high.y)+1):
		for x in range(int(low.x),int(high.x)+1):
			var at:Vector2=terrain.LAND_RECT.position+Vector2(x,z)*terrain.STEP
			if float(clearance.call(at))<.35:continue
			var influence:=0.
			for segment in range(stroke.points.size()):
				var a:=Vector2(stroke.points[segment][0],stroke.points[segment][1]);var b:=Vector2(stroke.points[maxi(0,segment-1)][0],stroke.points[maxi(0,segment-1)][1])
				influence=maxf(influence,1.-smoothstep(.2,1.,at.distance_to(Geometry2D.get_closest_point_to_segment(at,a,b))/float(stroke.radius)))
			if influence<=0.:continue
			var sum:=0.;var total:=0.
			for sample:Array in kernel:
				var neighbor:Vector2i=Vector2i(x,z)+sample[0]
				if neighbor.x<0 or neighbor.y<0 or neighbor.x>=terrain.COLUMNS or neighbor.y>=terrain.ROWS:continue
				if float(clearance.call(terrain.LAND_RECT.position+Vector2(neighbor)*terrain.STEP))<.35:continue
				sum+=float(source[neighbor.y*terrain.COLUMNS+neighbor.x])*float(sample[1]);total+=float(sample[1])
			if total<=0.:continue
			var index:int=z*terrain.COLUMNS+x
			buffer[index]=lerpf(source[index],sum/total,clampf(float(stroke.strength)*.78*influence,0.,.78))
			offsets[index]+=buffer[index]-source[index]
	terrain.stats.merge({"smooth_read_bounds":bounds.grow(KERNEL_RADIUS).intersection(terrain.LAND_RECT),"smooth_write_bounds":bounds,"smooth_kernel_samples":kernel.size()},true)
