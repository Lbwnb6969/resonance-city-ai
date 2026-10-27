extends RefCounted
## Existing functional styles retain their authored defaults. New surfaces use
## the same road geometry and encode a constant material ID in vertex blue.
const UI_STYLES:=["path","promenade","avenue","tram","cobble","brick","fanstone","gravel"]
const CAPTIONS:=["小径","石板","林荫","轨街","卵石","砖路","扇石","碎石"]
const NEW_STYLES:=["brick","fanstone","gravel"]
static func code(road:Dictionary)->float:
	return float({"cobble":1,"brick":2,"fanstone":3,"gravel":4}.get(str(road.get("style","path")),0))*.25
