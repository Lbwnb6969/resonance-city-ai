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
	return {"title":title,"eras":city.era_unlocks.duplicate(),"built_eras":city.Eras.IDS.filter(func(era):return city.houses.any(func(h):return city.house_era(h)==era)),"wonders":preload("res://scripts/world/city_creation_legendary_wonder_plan.gd").unlocked(city).keys(),"level":int(city.harmony_journey.get("harmony_level",1)),"chords":chords.map(func(id):return names[id]),"date":Time.get_date_string_from_system()}
static func compose(host:Node,source:Image,city:RefCounted,title:String)->Image:
	var margin:=maxi(16,roundi(source.get_width()*.018))
	var viewport:=SubViewport.new();viewport.disable_3d=true;viewport.transparent_bg=false
	viewport.size=source.get_size()+Vector2i(margin*2,margin*2+112)
	viewport.render_target_update_mode=SubViewport.UPDATE_ONCE
	var art=preload("res://scripts/ui/city_creation_postcard_imprint.gd").new();art.source=ImageTexture.create_from_image(source);art.info=details(city,title);art.margin=margin;art.size=viewport.size
	viewport.add_child(art);host.add_child(viewport)
	await RenderingServer.frame_post_draw
	var result:=viewport.get_texture().get_image();viewport.free()
	return result
