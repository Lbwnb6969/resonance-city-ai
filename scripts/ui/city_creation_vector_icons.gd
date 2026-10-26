extends RefCounted
## Shared native vectors for the city tools, household seals and score ribbon.
const TOOL_KINDS := ["house","terrace","road","erase","audition","vegetation","water","district","terrain"]
const ROLE_KINDS := ["residential","bakery","venue","workshop","garden_cafe","atelier","clockmaker","symphony_hall"]

static func stroke(canvas:CanvasItem,points:Array,center:Vector2,radius:float,color:Color,width:float=1.7)->void:
	var line:=PackedVector2Array()
	for p:Vector2 in points:line.append(center+p*radius)
	canvas.draw_polyline(line,color,width,true)

static func draw_icon(canvas:CanvasItem,kind:String,center:Vector2,radius:float,color:Color,accent:Color=Color("c4a568"))->void:
	if kind.begins_with("prototype/"):
		preload("res://scripts/ui/city_creation_prototype_stamp.gd").draw(canvas,kind.trim_prefix("prototype/"),center,radius,color,accent);return
	match kind:
		"leaf":
			stroke(canvas,[Vector2(-.55,.65),Vector2(.05,.05),Vector2(.60,-.65)],center,radius,color)
			stroke(canvas,[Vector2(-.30,.38),Vector2(-.65,-.10),Vector2(-.30,-.58),Vector2(.60,-.65),Vector2(.54,.14),Vector2(.04,.46),Vector2(-.30,.38)],center,radius,accent)
		"palette":
			canvas.draw_arc(center,.67*radius,.3,TAU-.3,28,color,1.7,true)
			for i:int in range(4):
				var phase:float=-.6+float(i)*1.1
				canvas.draw_circle(center+Vector2.from_angle(phase)*radius*.4,radius*.13,accent)
		"straight","rails":
			for x:float in [-.38,.38]:stroke(canvas,[Vector2(x,-.72),Vector2(x,.72)],center,radius,color)
			for y:float in [-.48,0.,.48]:stroke(canvas,[Vector2(-.60 if kind=="rails" else -.06,y),Vector2(.60 if kind=="rails" else .06,y)],center,radius,accent,1.3)
		"lamp":
			stroke(canvas,[Vector2(0,.72),Vector2(0,-.15),Vector2(-.36,-.15),Vector2(-.28,-.68),Vector2(.28,-.68),Vector2(.36,-.15),Vector2(0,-.15)],center,radius,color)
			canvas.draw_circle(center+Vector2(0,-.42)*radius,.13*radius,accent)
			stroke(canvas,[Vector2(-.26,.72),Vector2(.26,.72)],center,radius,color)
		"cypress":
			stroke(canvas,[Vector2(0,.75),Vector2(0,.35)],center,radius,color)
			stroke(canvas,[Vector2(0,-.80),Vector2(-.35,.42),Vector2(.35,.42),Vector2(0,-.80)],center,radius,accent)
		"shrub":
			for p:Vector2 in [Vector2(-.4,.1),Vector2(0,-.20),Vector2(.4,.1)]:canvas.draw_circle(center+p*radius,.32*radius,color)
			stroke(canvas,[Vector2(-.50,.48),Vector2(.50,.48)],center,radius,accent)
		"brush_small","brush_medium","brush_large","pond":
			var fraction:float=.28 if kind=="brush_small" else .46 if kind=="brush_medium" else .66
			canvas.draw_arc(center,fraction*radius,0.,TAU,32,color,1.7,true)
			if kind=="pond":stroke(canvas,[Vector2(-.30,0),Vector2(0,.12),Vector2(.30,0)],center,radius,accent)
			else:canvas.draw_circle(center,.08*radius,accent)
		"raise","lower":
			var direction:float=-1. if kind=="raise" else 1.
			stroke(canvas,[Vector2(-.68,.70),Vector2(.68,.70)],center,radius,color)
			stroke(canvas,[Vector2(0,-.65*direction),Vector2(0,.55*direction)],center,radius,color)
			stroke(canvas,[Vector2(-.30,.18*direction),Vector2(0,.55*direction),Vector2(.30,.18*direction)],center,radius,accent)
		"plateau":
			stroke(canvas,[Vector2(-.82,.62),Vector2(-.40,-.30),Vector2(.40,-.30),Vector2(.82,.62)],center,radius,color)
			stroke(canvas,[Vector2(-.40,-.30),Vector2(.40,-.30)],center,radius,accent,2.4)
		"undo","redo":
			var sign_value:float=-1. if kind=="undo" else 1.
			canvas.draw_arc(center,.57*radius,-PI*.75,PI*.48,28,color,1.7,true)
			stroke(canvas,[Vector2(sign_value*.10,-.65),Vector2(sign_value*.55,-.65),Vector2(sign_value*.55,-.20)],center,radius,accent)
		"house","residential":
			stroke(canvas,[Vector2(-.8,.0),Vector2(0,-.7),Vector2(.8,0)],center,radius,color)
			stroke(canvas,[Vector2(-.55,-.1),Vector2(-.55,.65),Vector2(.55,.65),Vector2(.55,-.1)],center,radius,color)
			canvas.draw_rect(Rect2(center+Vector2(-.13,.20)*radius,Vector2(.26,.45)*radius),accent)
			canvas.draw_circle(center+Vector2(0,-.22)*radius,.10*radius,accent)
		"terrace":
			stroke(canvas,[Vector2(-.75,.55),Vector2(.75,.55)],center,radius,color)
			for x:float in [-.60,-.20,.20,.60]:stroke(canvas,[Vector2(x,.04),Vector2(x,.55)],center,radius,color,1.3)
			canvas.draw_arc(center+Vector2(0,.05)*radius,.70*radius,PI,TAU,24,accent,1.8,true)
		"road":
			stroke(canvas,[Vector2(-.55,.7),Vector2(-.15,.15),Vector2(-.30,-.3),Vector2(.1,-.7)],center,radius,color)
			stroke(canvas,[Vector2(.05,.7),Vector2(.45,.15),Vector2(.3,-.3),Vector2(.7,-.7)],center,radius,color)
			for y:float in [-.45,-.1,.3]:stroke(canvas,[Vector2(.02,y),Vector2(.18,y)],center,radius,accent,1.3)
		"erase":
			stroke(canvas,[Vector2(-.7,.25),Vector2(.15,-.65),Vector2(.7,-.10),Vector2(-.05,.65),Vector2(-.7,.25)],center,radius,color)
			stroke(canvas,[Vector2(-.4,-.05),Vector2(.15,.50)],center,radius,accent)
		"audition","music":
			stroke(canvas,[Vector2(-.42,-.65),Vector2(-.42,-.05),Vector2(0,.25),Vector2(.42,-.05),Vector2(.42,-.65)],center,radius,color,2.)
			stroke(canvas,[Vector2(0,.25),Vector2(0,.73)],center,radius,accent,2.)
		"vegetation":
			stroke(canvas,[Vector2(0,.75),Vector2(0,-.2)],center,radius,color)
			canvas.draw_circle(center+Vector2(0,-.28)*radius,.43*radius,color)
			canvas.draw_circle(center+Vector2(-.32,.05)*radius,.27*radius,accent)
		"water":
			for y:float in [-.2,.3]:
				stroke(canvas,[Vector2(-.8,y),Vector2(-.4,y-.12),Vector2(0,y+.10),Vector2(.4,y-.12),Vector2(.8,y)],center,radius,color)
			canvas.draw_circle(center+Vector2(.35,-.62)*radius,.10*radius,accent)
		"district":
			for p:Vector2 in [Vector2(-.55,.25),Vector2(.55,-.25)]:canvas.draw_arc(center+p*radius,.31*radius,0,TAU,24,color,1.6,true)
			stroke(canvas,[Vector2(-.3,.2),Vector2(.3,-.2)],center,radius,accent)
		"terrain":
			stroke(canvas,[Vector2(-.8,.6),Vector2(-.42,-.35),Vector2(.14,-.35),Vector2(.45,.1),Vector2(.8,.6)],center,radius,color)
			stroke(canvas,[Vector2(-.42,-.35),Vector2(.14,-.35)],center,radius,accent,2.)
		"sundial_day":
			canvas.draw_circle(center,.31*radius,accent)
			for i in range(8):
				var dir:=Vector2.from_angle(i*TAU/8.)
				canvas.draw_line(center+dir*radius*.48,center+dir*radius*.72,color,1.5,true)
		"sundial_dusk":
			canvas.draw_arc(center+Vector2(0,.2)*radius,.47*radius,PI,TAU,24,accent,2.,true)
			stroke(canvas,[Vector2(-.75,.2),Vector2(.75,.2)],center,radius,color)
			stroke(canvas,[Vector2(-.35,.48),Vector2(.35,.48)],center,radius,color,1.2)
		"sundial_night":
			canvas.draw_arc(center,.52*radius,.4,PI*1.55,28,accent,2.,true)
			stroke(canvas,[Vector2(.27,-.55),Vector2(.27,-.27)],center,radius,color,1.2)
			stroke(canvas,[Vector2(.13,-.41),Vector2(.41,-.41)],center,radius,color,1.2)
		"walk":
			canvas.draw_circle(center+Vector2(.10,-.60)*radius,.14*radius,color)
			stroke(canvas,[Vector2(.10,-.35),Vector2(-.1,.15),Vector2(-.50,.65)],center,radius,color)
			stroke(canvas,[Vector2(-.10,.15),Vector2(.35,.65)],center,radius,color)
			stroke(canvas,[Vector2(-.45,-.12),Vector2(.05,-.27),Vector2(.48,.02)],center,radius,accent)
		"postcard":
			canvas.draw_rect(Rect2(center-Vector2(.75,.50)*radius,Vector2(1.50,1.)*radius),color,false,1.6)
			stroke(canvas,[Vector2(-.55,.27),Vector2(-.20,-.05),Vector2(.05,.15),Vector2(.32,-.22),Vector2(.6,.27)],center,radius,accent,1.3)
			canvas.draw_circle(center+Vector2(-.38,-.23)*radius,.10*radius,accent)
		"guide":
			canvas.draw_arc(center+Vector2(0,-.25)*radius,.34*radius,PI*1.05,TAU+.55,28,color,1.8,true)
			stroke(canvas,[Vector2(.27,-.07),Vector2(0,.17),Vector2(0,.30)],center,radius,color)
			canvas.draw_circle(center+Vector2(0,.61)*radius,.075*radius,accent)
		"journal","atelier":
			stroke(canvas,[Vector2(0,-.45),Vector2(-.62,-.65),Vector2(-.62,.48),Vector2(0,.65),Vector2(.62,.48),Vector2(.62,-.65),Vector2(0,-.45),Vector2(0,.65)],center,radius,color)
			stroke(canvas,[Vector2(-.43,-.30),Vector2(-.18,-.22)],center,radius,accent,1.2)
			stroke(canvas,[Vector2(.18,-.22),Vector2(.43,-.30)],center,radius,accent,1.2)
		"landmark":
			stroke(canvas,[Vector2(-.72,-.30),Vector2(0,-.78),Vector2(.72,-.30),Vector2(-.72,-.30)],center,radius,color)
			for x:float in [-.45,0.,.45]:stroke(canvas,[Vector2(x,-.15),Vector2(x,.48)],center,radius,color)
			stroke(canvas,[Vector2(-.68,.54),Vector2(.68,.54)],center,radius,accent)
			stroke(canvas,[Vector2(-.77,.73),Vector2(.77,.73)],center,radius,color)
		"gallery":
			canvas.draw_rect(Rect2(center-Vector2(.58,.58)*radius,Vector2(1.16,1.16)*radius),color,false,1.7)
			stroke(canvas,[Vector2(-.32,.3),Vector2(0,-.06),Vector2(.33,.3)],center,radius,accent)
			canvas.draw_circle(center+Vector2(.23,-.26)*radius,.10*radius,accent)
		"bakery":
			canvas.draw_arc(center,.65*radius,PI,TAU,24,color,1.8,true)
			stroke(canvas,[Vector2(-.65,0),Vector2(-.55,.45),Vector2(.55,.45),Vector2(.65,0)],center,radius,color)
			for x:float in [-.28,0,.28]:stroke(canvas,[Vector2(x-.05,-.26),Vector2(x+.05,-.02)],center,radius,accent,1.4)
		"venue","symphony_hall":
			canvas.draw_circle(center+Vector2(-.35,.35)*radius,.20*radius,color)
			stroke(canvas,[Vector2(-.15,.35),Vector2(-.15,-.55),Vector2(.50,-.35),Vector2(.50,.12)],center,radius,color,2.)
			canvas.draw_circle(center+Vector2(.32,.14)*radius,.18*radius,accent)
		"workshop":
			canvas.draw_arc(center+Vector2(0,.30)*radius,.36*radius,0,TAU,24,color,1.7,true)
			stroke(canvas,[Vector2(0,.60),Vector2(0,-.72)],center,radius,accent)
			stroke(canvas,[Vector2(-.17,-.6),Vector2(.17,-.6)],center,radius,color)
		"garden_cafe":
			stroke(canvas,[Vector2(-.55,-.25),Vector2(-.45,.38),Vector2(.35,.38),Vector2(.45,-.25),Vector2(-.55,-.25)],center,radius,color)
			canvas.draw_arc(center+Vector2(.45,0)*radius,.25*radius,-PI*.5,PI*.5,16,accent,1.7,true)
			stroke(canvas,[Vector2(-.65,.63),Vector2(.6,.63)],center,radius,accent)
		"clockmaker":
			canvas.draw_arc(center,.65*radius,0,TAU,32,color,1.8,true)
			stroke(canvas,[Vector2(0,-.42),Vector2(0,0),Vector2(.30,.18)],center,radius,accent)
		"chord":
			for i in range(3):
				var p:=center+Vector2(-.45+i*.43,.36-i*.26)*radius
				canvas.draw_circle(p,.16*radius,color)
				canvas.draw_line(p+Vector2(.12,0)*radius,p+Vector2(.12,-.70)*radius,accent,1.4,true)
