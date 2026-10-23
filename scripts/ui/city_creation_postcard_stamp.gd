extends RefCounted
## The raw frame remains intact inside an extended paper canvas. Only the private
## viewport draws the stamp; the live city never receives a keepsake overlay.
const PAPER=Color("f3ebd9")
const GOLD=Color("b18c49")
const INK=Color("36554c")
const ERA_NAMES={"pastoral":"田园","renaissance":"连拱","clockwork":"钟表","modern_eco":"生态"}
static func scene_frame(demo)->Image:
	var letter:Node=demo.get_meta("vignette_journey")
	var owners:Array=[demo,demo.wish_pins,demo.intuitive_guidance,letter]
	var overlays:Array=[demo.ui_layer,demo.town.preview,demo.intuitive_guidance.markers,demo.wish_pins.highlight,letter.marker]
	var running:Array=owners.map(func(node):return node.is_processing())
	var visible:Array=overlays.map(func(node):return node.visible)
	for node in owners:node.set_process(false)
	for node in overlays:node.hide()
	await RenderingServer.frame_post_draw
	var raw:Image=demo.get_viewport().get_texture().get_image()
	for i in range(overlays.size()):overlays[i].visible=visible[i]
	for i in range(owners.size()):owners[i].set_process(running[i])
	return raw
static func details(city:RefCounted,title:String)->Dictionary:
	var names:Dictionary=preload("res://scripts/world/city_creation_synergy_buffs.gd").CHORD_NAMES
	var chords:Array=city.synergy_buffs().active_chords
	return {"title":title,"eras":city.era_unlocks.duplicate(),"level":int(city.harmony_journey.get("harmony_level",1)),"chords":chords.map(func(id):return names[id]),"date":Time.get_date_string_from_system()}
static func compose(host:Node,source:Image,city:RefCounted,title:String)->Image:
	var margin:=maxi(16,roundi(source.get_width()*.018))
	var viewport:=SubViewport.new();viewport.disable_3d=true;viewport.transparent_bg=false
	viewport.size=source.get_size()+Vector2i(margin*2,margin*2+112)
	viewport.render_target_update_mode=SubViewport.UPDATE_ONCE
	var art:=Imprint.new();art.source=ImageTexture.create_from_image(source);art.info=details(city,title);art.margin=margin;art.size=viewport.size
	viewport.add_child(art);host.add_child(viewport)
	await RenderingServer.frame_post_draw
	var result:=viewport.get_texture().get_image();viewport.free()
	return result
class Imprint extends Control:
	var source:Texture2D
	var info:Dictionary
	var margin:int
	func text(value:String,at:Vector2,width:float,points:int,color:Color=INK)->void:
		var font:=ThemeDB.fallback_font
		while font.get_string_size(value,HORIZONTAL_ALIGNMENT_LEFT,-1,points).x>width and value.length()>1:value=value.left(-2)+"…"
		draw_string(font,at,value,HORIZONTAL_ALIGNMENT_LEFT,width,points,color)
	func _draw()->void:
		draw_rect(Rect2(Vector2.ZERO,size),PAPER)
		# Sparse deterministic fibres give the frame a quiet paper grain.
		for i in range(int(size.x*size.y/900.)):
			var at:=Vector2(fmod(i*173.23,size.x),fmod(i*97.31,size.y))
			draw_line(at,at+Vector2(2.4,.3),Color("d8c9a9",.22),1.)
		var raw:=Rect2(Vector2.ONE*margin,Vector2(source.get_size()))
		draw_texture_rect(source,raw,false)
		draw_rect(raw.grow(5.),Color("fff9e9"),false,2.)
		draw_rect(Rect2(Vector2(8,8),size-Vector2(16,16)),GOLD,false,1.)
		var y:=raw.end.y+25.
		text("共鸣之城 · "+str(info.title),Vector2(margin,y+4.),size.x-margin*2.-240.,22)
		text(str(info.date)+" · 河湾留声",Vector2(size.x-margin-220.,y+4.),220.,14,GOLD)
		draw_line(Vector2(margin,y+17.),Vector2(size.x-margin,y+17.),Color(GOLD,.55),1.)
		text("河湾共鸣 Lv.%d"%int(info.level),Vector2(margin,y+48.),200.,17)
		var chord_text:=" · ".join(info.chords) if not info.chords.is_empty() else "静候第一束和声"
		text("♪ "+chord_text,Vector2(margin,y+76.),size.x-margin*2.-340.,14,Color("718475"))
		var start:float=size.x-margin-info.eras.size()*76.
		for i in range(info.eras.size()):
			var center:=Vector2(start+i*76.+27.,y+45.)
			draw_arc(center+Vector2(0,1),21.,0,TAU,48,Color("8a6936"),2.,true)
			draw_arc(center,21.,0,TAU,48,Color("ddbb74"),1.5,true)
			seal(str(info.eras[i]),center)
			text(ERA_NAMES[info.eras[i]],center+Vector2(-14.,36.),56.,12,GOLD)
	func seal(era:String,c:Vector2)->void:
		var color:=GOLD;var left:=c+Vector2(-11,8);var right:=c+Vector2(11,8)
		draw_line(left,right,color,1.5,true)
		match era:
			"pastoral":
				draw_polyline(PackedVector2Array([left,left+Vector2(0,-14),c+Vector2(0,-13),right+Vector2(0,-14),right]),color,1.5,true)
				for x in [-6.,0.,6.]:draw_line(c+Vector2(x,-4),c+Vector2(x,7),color,1.5,true)
			"renaissance":
				draw_arc(c,11.,PI,TAU,24,color,1.5,true)
				for x in [-11.,0.,11.]:draw_line(c+Vector2(x,0),c+Vector2(x,8),color,1.5,true)
			"clockwork":
				draw_circle(c,10.,color,false,1.5,true)
				draw_polyline(PackedVector2Array([c+Vector2(0,-6),c,c+Vector2(5,2)]),color,1.5,true)
			"modern_eco":
				for y in [-8.,0.,7.]:draw_line(c+Vector2(-12,y),c+Vector2(12,y),color,1.5,true)
				draw_line(c+Vector2(-6,-8),c+Vector2(-6,7),color,1.5,true)
				draw_circle(c+Vector2(7,-8),4.,Color("68816b"))
