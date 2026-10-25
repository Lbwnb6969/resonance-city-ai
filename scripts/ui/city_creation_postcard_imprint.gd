extends Control
const PAPER=Color("f3ebd9")
const GOLD=Color("b18c49")
const INK=Color("46382a")
const Icons=preload("res://scripts/ui/city_creation_vector_icons.gd")
var source:Texture2D
var info:Dictionary
var margin:int
func text(value:String,at:Vector2,width:float,points:int,color:Color=INK)->void:
 var font:=ThemeDB.fallback_font
 while font.get_string_size(value,HORIZONTAL_ALIGNMENT_LEFT,-1,points).x>width and value.length()>1:value=value.left(-2)+"…"
 draw_string(font,at,value,HORIZONTAL_ALIGNMENT_LEFT,width,points,color)
func _draw()->void:
 draw_rect(Rect2(Vector2.ZERO,size),PAPER)
 for i in range(int(size.x*size.y/900.)):
  var at:=Vector2(fmod(i*173.23,size.x),fmod(i*97.31,size.y));draw_line(at,at+Vector2(2.4,.3),Color("d8c9a9",.22),1.)
 var raw:=Rect2(Vector2.ONE*margin,Vector2(source.get_size()))
 draw_texture_rect(source,raw,false);draw_rect(raw.grow(5.),Color("fff9e9"),false,2.);draw_rect(Rect2(Vector2(8,8),size-Vector2(16,16)),GOLD,false,1.)
 var y:=raw.end.y+32.
 text("共鸣之城 · "+str(info.title),Vector2(margin,y),size.x-margin*2.-350.,20)
 text(str(info.date)+" · 河湾留声",Vector2(margin,y+30.),280.,12,GOLD)
 var start:float=size.x-margin-280.
 for i in range(info.built_eras.size()):
  var era:String=info.built_eras[i];var c:=Vector2(start+i*62.,y-4.)
  Icons.draw_icon(self,{"pastoral":"prototype/portico","renaissance":"prototype/venetian_loggia","clockwork":"clockmaker","modern_eco":"vegetation"}[era],c,12.,GOLD,GOLD)
  text({"pastoral":"田园","renaissance":"连拱","clockwork":"钟表","modern_eco":"生态"}[era],c+Vector2(-14,28),42,10,GOLD)
 for i in range(info.wonders.size()):
  var family:String=info.wonders[i];var c:=Vector2(size.x-margin-24.-i*48.,y+55.)
  draw_circle(c,16.,Color("8f4d35"));draw_arc(c,13.,0,TAU,32,Color("d9b975"),1.,true)
  Icons.draw_icon(self,{"riverbank":"water","highland":"terrain","courtyard":"district","artisan":"workshop"}[family],c,8.,Color("f5dfab"),GOLD)
