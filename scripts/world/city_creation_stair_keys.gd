extends RefCounted
## Every key is one actual navigable tread, even when a curve splits its mesh.
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
static func enabled(_city:RefCounted)->bool:
	return true

static func voice_rank(mode:int,degree:int)->int:
	mode=maxi(0,mode)
	var scale:Array=Palette.SCALES[mode];var tones:Array=Palette.KEY_TONES[mode]
	return tones.find(scale[posmod(degree,5)])+tones.size()*posmod(floori(float(degree)/5.),2)

static func layout(road:Dictionary,profile:Dictionary,mode:int=0,minimum_rise:float=1.)->Dictionary:
	var groups:Dictionary={};var runs:Dictionary={};var ranks:Dictionary={};var sites:Array=[]
	for tread:Dictionary in profile.get("treads",[]):
		if float(tread.get("rise",0.))<minimum_rise-.000001:continue
		var key:="%d/%d"%[int(tread.run),int(tread.step)]
		if not groups.has(key):groups[key]=[]
		groups[key].append(tread)
		var run:int=tread.run
		if not runs.has(run):runs[run]={"first":tread,"last":tread}
		runs[run].last=tread
	for key:String in groups:
		var parts:Array=groups[key];var first:Dictionary=parts[0];var last:Dictionary=parts[-1]
		var middle:float=(float(first.s0)+float(last.s1))*.5
		var picked:Dictionary=first
		for part:Dictionary in parts:
			if middle>=float(part.s0) and middle<=float(part.s1):picked=part;break
		var axis:Vector2=Vector2(picked.b)-Vector2(picked.a)
		if axis.length()<.002:continue
		var run:Dictionary=runs[int(first.run)]
		var climbing:bool=float(run.last.y)>=float(run.first.y)
		var degree:int=int(first.step) if climbing else int(run.last.step)-int(first.step)
		degree+=roundi(minf(float(run.first.y),float(run.last.y))/.12)
		var rank:=voice_rank(mode,degree);ranks[key]=rank
		var ratio:float=(middle-float(picked.s0))/maxf(.000001,float(picked.s1)-float(picked.s0))
		var at:Vector2=Vector2(picked.a).lerp(Vector2(picked.b),ratio)
		sites.append({"id":str(road.id)+"/stair/"+key,"at":at,"axis":axis.normalized(),"height":float(picked.y),"depth":maxf(.08,axis.length()*.5),"width":float(road.width),"rank":rank,"degree":degree})
	return {"sites":sites,"ranks":ranks}
