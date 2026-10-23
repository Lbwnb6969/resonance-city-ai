extends RefCounted
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
const COOLDOWN:=.45
var touched:Dictionary={}
var previous:=""
var step:=0
var last_clock:=-INF
func reset()->void:
	touched.clear();previous="";step=0;last_clock=-INF
func claim(id:String,clock:float)->int:
	if id==previous:return -1
	previous=id
	if id.is_empty() or clock-float(touched.get(id,-INF))<COOLDOWN:return -1
	if clock-last_clock>1.2:step=0
	touched[id]=clock;last_clock=clock
	var result:=step;step=(step+1)%10
	return result
static func pitch(mode:int,degree:int)->int:
	var scale:Array=Palette.SCALES[clampi(mode,0,9)];var tonic:int=scale[0]
	var intervals:Array=[]
	for tone:int in scale:intervals.append(posmod(tone-tonic,12))
	intervals.sort()
	return 60+tonic+int(intervals[posmod(degree,5)])+12*floori(float(degree)/5.)
