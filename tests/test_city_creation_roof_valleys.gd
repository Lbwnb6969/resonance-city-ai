extends SceneTree
## Compare the published union triangles with their actual production height field.
const State=preload("res://scripts/world/city_creation_state.gd")
const Context=preload("res://scripts/visual/city_creation_building_context.gd")
var failures:Array=[]
var checks:=0
var facts:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func measure(context:RefCounted,patches:Array)->Dictionary:
	var bins:Dictionary={};var bounds:=Rect2();var first:=true;var base:=0.
	for patch:Dictionary in patches:
		if patch.surface=="roof":
			bounds=patch.bounds if first else bounds.merge(patch.bounds);base=patch.base_y;first=false
		if patch.surface!="fascia":continue
		var a:=Vector2(patch.vertices[0].x,patch.vertices[0].z);var b:=Vector2(patch.vertices[1].x,patch.vertices[1].z)
		for x in range(floori(minf(a.x,b.x)/4.),floori(maxf(a.x,b.x)/4.)+1):
			for z in range(floori(minf(a.y,b.y)/4.),floori(maxf(a.y,b.y)/4.)+1):
				var key:=Vector2i(x,z)
				if not bins.has(key):bins[key]=[]
				bins[key].append({"a":a,"b":b})
	var before:=0.;var after:=0.;var maximum_before:=0.;var maximum_after:=0.;var changed:=0;var worse:=0;var quads:=0;var fans:=0
	for patch:Dictionary in patches:
		if patch.surface!="roof" or patch.roof_kind!="union":continue
		var i:=0
		while i<patch.vertices.size():
			var fan:bool=patch.vertices[i+1].x>patch.vertices[i].x and patch.vertices[i+1].x<patch.vertices[i+2].x
			var count:=12 if fan else 6
			var low:=Vector2(INF,INF);var high:=Vector2(-INF,-INF);var corners:Dictionary={}
			for k in range(count):
				var p:Vector3=patch.vertices[i+k];var at:=Vector2(p.x,p.z);low=low.min(at);high=high.max(at);corners[at]=p
			var a:Vector3=corners[low];var c:Vector3=corners[high]
			var center:=(low+high)*.5;var actual:Vector3=context._point(center,base,bins,bounds)
			var old_error:=absf((a.y+c.y)*.5-actual.y)
			var diagonal_y:float=patch.vertices[i+1].y
			if fan:fans+=1
			else:
				var diagonal:Array=[]
				for k in range(3):
					if patch.vertices[i+k] in patch.vertices.slice(i+3,i+6):diagonal.append(patch.vertices[i+k])
				diagonal_y=(float(diagonal[0].y)+float(diagonal[1].y))*.5
			var error:=absf(diagonal_y-actual.y)
			before+=old_error;after+=error;maximum_before=maxf(maximum_before,old_error);maximum_after=maxf(maximum_after,error);quads+=1
			if error<old_error-.000005:changed+=1
			if error>old_error+.000005:worse+=1
			i+=count
	return {"quads":quads,"interior_samples":fans,"improved_quads":changed,"worse_quads":worse,"sum_before_m":before,"sum_after_m":after,"max_before_m":maximum_before,"max_after_m":maximum_after}
func run()->void:
	var shapes:={"L":[Vector2i.ZERO,Vector2i(1,0),Vector2i(2,0),Vector2i(0,1),Vector2i(0,2)],"U":[Vector2i.ZERO,Vector2i(1,0),Vector2i(2,0),Vector2i(0,1),Vector2i(2,1),Vector2i(0,2),Vector2i(2,2)]}
	var verify:bool="--verify-valleys" in OS.get_cmdline_user_args()
	for shape:String in shapes:
		for turn in range(4):
			var city:=State.new();city.initialize_free();city.add_house(Vector2(-25.13,-15.07))
			for cell:Vector2i in shapes[shape]:
				var at:=cell
				for ignored in range(turn):at=Vector2i(-at.y,at.x)
				if at!=Vector2i.ZERO:check(city.add_cell("h1",at.x,at.y,0).ok,"public union room")
			var context:=Context.new();context.prepare(city.houses,city.roads);var result:=measure(context,context.roof_patches("h1"));result.shape=shape;result.turn=turn;facts.append(result)
			check(result.quads>0 and result.worse_quads==0,"no union quad moves farther from the real roof field")
			if verify:
				check(result.improved_quads>0 and result.sum_after_m<result.sum_before_m,"valley triangulation improves actual profile "+shape+str(turn))
				check(result.max_after_m<.01,"published union quad centers stay within one centimetre of the actual curve")
	var joined:=State.new();joined.initialize_free()
	for at:Vector2 in [Vector2(-25.13,-15.07),Vector2(-23.33,-15.07),Vector2(-25.13,-13.27)]:check(joined.add_house(at).ok,"actual independently owned L roof")
	var original:Dictionary=joined.snapshot();var shared:Dictionary={};var shared_count:=0;var phase_error:=0.;var context:=Context.new();context.prepare(joined.houses,joined.roads)
	for house:Dictionary in joined.houses:
		for patch:Dictionary in context.roof_patches(str(house.id)):
			if patch.surface!="roof":continue
			for i in range(patch.vertices.size()):
				var key:Array=[patch.group_id,patch.vertices[i]]
				if shared.has(key):
					phase_error=maxf(phase_error,Vector2(shared[key].uv).distance_to(patch.coordinates[i]))
					if shared[key].house!=house.id:shared_count+=1
				else:shared[key]={"house":house.id,"uv":patch.coordinates[i]}
	check(shared_count>0 and phase_error<.00001,"adaptive L roof shares exact boundary vertices and tile phase across owners")
	check(joined.snapshot()==original,"derived interior samples never author rooms or history")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--report="):FileAccess.open(arg.trim_prefix("--report="),FileAccess.WRITE).store_string(JSON.stringify(report,"\t"))
	print("ROOF_VALLEYS ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
