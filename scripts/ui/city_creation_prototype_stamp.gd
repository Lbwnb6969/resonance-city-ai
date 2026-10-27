extends RefCounted
## Front silhouettes follow the published recipe, including automatic old houses.
const Choice=preload("res://scripts/world/city_creation_architecture_choice.gd")
const PROFILES={
	"ionic_stoa":[[-.98,.65],[-.98,-.42],[.98,-.42],[.98,.65]],
	"roman_basilica":[[-.95,.65],[-.95,-.05],[-.42,-.05],[-.42,-.55],[0,-.85],[.42,-.55],[.42,-.05],[.95,-.05],[.95,.65]],
	"portico":[[-.85,.6],[-.85,-.15],[0,-.75],[.85,-.15],[.85,.6]],
	"townhouse":[[-.65,.65],[-.65,-.7],[.65,-.7],[.65,.65]],
	"oriel":[[-.75,.65],[-.75,-.55],[.2,-.55],[.75,-.25],[.75,.65]],
	"peristyle":[[-.9,.65],[-.9,-.4],[-.3,-.4],[-.3,.25],[.3,.25],[.3,-.4],[.9,-.4],[.9,.65]],
	"rotunda":[[-.8,.65],[-.8,-.15],[-.55,-.6],[0,-.8],[.55,-.6],[.8,-.15],[.8,.65]],
	"guildhall":[[-.9,.65],[-.9,-.25],[-.65,-.25],[0,-.85],[.65,-.25],[.9,-.25],[.9,.65]],
	"chalet":[[-.8,.65],[-.8,-.1],[-.15,-.85],[.8,-.2],[.8,.65]],
	"pavilion":[[-.85,.65],[-.85,-.75],[.85,-.2],[.85,.65]],
	"terrace":[[-.9,.65],[-.9,.15],[-.3,.15],[-.3,-.3],[.3,-.3],[.3,-.75],[.9,-.75],[.9,.65]],
	"panorama":[[-.9,.65],[-.9,-.1],[0,-.8],[.9,-.1],[.9,.65]],
	"twin_gable":[[-.95,.65],[-.95,-.1],[-.5,-.75],[-.05,-.1],[.05,-.1],[.5,-.75],[.95,-.1],[.95,.65]],
	"green_lodge":[[-.85,.65],[-.85,-.45],[-.3,-.65],[.2,-.42],[.6,-.6],[.85,-.42],[.85,.65]],
	"sawtooth_atrium":[[-.95,.65],[-.95,-.25],[-.35,-.8],[-.35,-.25],[.3,-.8],[.3,-.25],[.95,-.8],[.95,.65]],
	"clock_turret":[[-.85,.65],[-.85,-.1],[.25,-.1],[.25,-.6],[.55,-.95],[.85,-.6],[.85,.65]],
	"iron_conservatory":[[-.9,.65],[-.9,-.05],[-.55,-.55],[0,-.8],[.55,-.55],[.9,-.05],[.9,.65]],
	"guild_arcade":[[-.95,.65],[-.95,-.5],[.95,-.5],[.95,.65]],
	"venetian_loggia":[[-.95,.65],[-.95,-.55],[-.3,-.55],[0,-.85],[.3,-.55],[.95,-.55],[.95,.65]],
	"belvedere_villa":[[-.95,.65],[-.95,-.1],[-.5,-.1],[-.5,-.55],[0,-.9],[.5,-.55],[.5,-.1],[.95,-.1],[.95,.65]]}
static func key(pop,house:Dictionary)->String:
	var caption:String=preload("res://scripts/ui/city_creation_prototype_caption.gd").caption(pop,house)
	for id:String in Choice.NEO+Choice.ALPINE+Choice.CLOCKWORK+Choice.RENAISSANCE+Choice.ANCIENT.IDS:
		if Choice.label(id)==caption:return id
	return str(house.get("architecture",""))
static func line(canvas:CanvasItem,points:Array,at:Vector2,r:float,color:Color,width:float=1.5)->void:
	var packed:=PackedVector2Array()
	for p:Array in points:packed.append(at+Vector2(p[0],p[1])*r)
	canvas.draw_polyline(packed,color,width,true)
static func draw(canvas:CanvasItem,key:String,at:Vector2,r:float,color:Color,gold:Color)->void:
	var outline:Array=PROFILES.get(key,PROFILES.portico)
	line(canvas,outline,at,r,color);line(canvas,[[-.98,.72],[.98,.72]],at,r,gold)
	if key=="portico":line(canvas,[[-.88,-.12],[.88,-.12]],at,r,color,2.2)
	if key=="rotunda":canvas.draw_arc(at+Vector2(0,-.1)*r,r*.67,PI,TAU,20,color,1.6,true)
	match key:
		"ionic_stoa":
			for x:float in [-.75,-.25,.25,.75]:
				line(canvas,[[x,-.24],[x,.55]],at,r,gold,1.2)
				for side:float in [-1.,1.]:canvas.draw_arc(at+Vector2(x+side*.07,-.20)*r,.07*r,0,TAU*1.4,12,color,1.0,true)
		"roman_basilica":
			line(canvas,[[-.8,.4],[-.8,.10],[-.45,.10],[-.45,-.32],[.45,-.32],[.45,.10],[.8,.10],[.8,.4]],at,r,gold,1.2)
			canvas.draw_arc(at+Vector2(0,.55)*r,r*.20,PI,TAU,12,gold,1.2,true)
		"portico","guildhall","peristyle","rotunda","belvedere_villa":
			for x:float in [-.55,0.,.55]:line(canvas,[[x,-.05],[x,.55]],at,r,gold,1.2)
			line(canvas,[[-.75,-.15],[.75,-.15]],at,r,color)
		"guild_arcade","venetian_loggia":
			for x:float in [-.6,0.,.6]:
				if key=="venetian_loggia":line(canvas,[[x-.2,.55],[x-.2,.1],[x,-.25],[x+.2,.1],[x+.2,.55]],at,r,gold,1.2)
				else:canvas.draw_arc(at+Vector2(x,.15)*r,r*.2,PI,TAU,12,gold,1.2,true);line(canvas,[[x-.2,.15],[x-.2,.55]],at,r,gold,1.2)
		"clock_turret":canvas.draw_circle(at+Vector2(.55,-.42)*r,.14*r,gold)
		"iron_conservatory","pavilion","panorama":
			for x:float in ([-.55,.55] if key=="panorama" else [-.55,0.,.55]):line(canvas,[[x,-.3],[x,.55]],at,r,gold,1.2)
			line(canvas,[[-.8,.12],[.8,.12]],at,r,gold,1.2)
			if key=="panorama":line(canvas,[[-.55,.55],[.55,-.25]],at,r,gold,1.2)
		"twin_gable":line(canvas,[[-.1,.15],[.1,.15],[.1,.4],[-.1,.4]],at,r,gold,2.)
		"townhouse":
			for y:float in [-.35,.05,.45]:line(canvas,[[-.5,y],[.5,y]],at,r,gold,1.2)
		"oriel":line(canvas,[[.15,-.3],[.6,-.1],[.6,.45],[.15,.45],[.15,-.3]],at,r,gold,1.2)
		_:line(canvas,[[-.4,-.1],[-.4,.45],[.4,.45],[.4,-.1]],at,r,gold,1.2)
