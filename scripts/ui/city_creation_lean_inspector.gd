extends RefCounted
## Two core stamps, color dots and one build action; details remain on request.
static func setup(inspector:Node)->void:
 var pop:RefCounted=inspector.pop;var ring:RefCounted=pop.ring
 pop.style_button.hide();pop.choir_button.hide();pop.temperament_button.hide()
 for button:Button in [pop.era_button,pop.architecture_button]:button.reparent(ring.left.get_child(0))
 var right:Control=ring.right.get_child(0)
 for button:Button in pop.swatches:button.reparent(right.get_child(0))
 pop.expand_button.reparent(right)
 for connection:Dictionary in pop.expand_button.pressed.get_connections():pop.expand_button.pressed.disconnect(connection.callable)
 pop.expand_button.pressed.connect(func()->void:pop.color_panel.hide();pop._toggle_colors();inspector.show_page("appearance"))
 inspector.appearance_button.reparent(ring.heading.get_child(0));inspector.appearance_button.text="详情";inspector.appearance_button.custom_minimum_size=Vector2(44,30)
 inspector.purpose_button.reparent(inspector.appearance);inspector.appearance.move_child(inspector.purpose_button,0)
 preload("res://scripts/ui/city_creation_organic_stamp.gd").new().setup(pop)
 ring.left.show();ring.right.show()
static func page(inspector:Node,id:String)->String:
 var pop:RefCounted=inspector.pop;var house:Dictionary=pop.demo.town._house_record(pop.target_house_id)
 var tab:Button=inspector.panel.find_child("HouseDetail_music",true,false);tab.text="演出";tab.visible=house.has("signature")
 return "appearance" if id=="music" and not house.has("signature") else id
