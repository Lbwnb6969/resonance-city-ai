extends RefCounted
## Migrate the existing gameplay-owned controls into the spatial HUD.
const Ribbon=preload("res://scripts/ui/city_creation_score_ribbon.gd")
const Sundial=preload("res://scripts/ui/city_creation_sundial_hud.gd")
const Whisper=preload("res://scripts/ui/city_creation_whisper_keycaps.gd")
const Dock=preload("res://scripts/ui/city_creation_tactile_dock.gd")

static func setup(demo:Node3D)->void:
	var parent:Control=demo.ui_layer.get_child(0)
	var old_header:Control=parent.get_node("PaperHeader")
	var audition:Button=old_header.find_child("HouseAudition",true,false)
	# Goals and accounts stay in the real journal, not over the city.
	var details:=VBoxContainer.new();details.name="CityDetails"
	details.add_theme_constant_override("separation",8)
	demo.journal.cards.add_child(details);demo.journal.cards.move_child(details,0)
	details.add_child(demo._label("河湾近况",17))
	demo.quest.reparent(details);demo.life_info.reparent(details)
	var echo:=Label.new();echo.name="RegionalEchoBadge";echo.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART
	echo.add_theme_font_size_override("font_size",12);details.add_child(echo);echo.hide();demo.set_meta("regional_echo_badge",echo)
	var links:=VBoxContainer.new();links.name="JournalCityLinks";links.add_theme_constant_override("separation",8);details.add_child(links)
	for button:Button in [demo.signatures.button,demo.ledger.button,audition]:
		button.reparent(links);button.add_theme_font_size_override("font_size",12)
		button.text="地标名胜" if button==demo.signatures.button else "生活账本 · L" if button==demo.ledger.button else "点房试听 · P"
		button.pressed.connect(demo.journal.close_panel)
	demo.score_ribbon=Ribbon.new();demo.score_ribbon.setup(demo,parent)
	demo.journal.button.set_meta("compact",true)
	# Hidden proxies retain public callbacks; Ctrl+S and H remain unchanged.
	var old_actions:Control=parent.get_node("Actions");old_actions.name="LegacyActions";old_actions.hide()
	demo.sundial_hud=Sundial.new();demo.sundial_hud.setup(demo,parent)
	var help_panel:Control=demo.hint.get_parent().get_parent()
	demo.whisper_keycaps=Whisper.new();demo.whisper_keycaps.setup(demo,parent)
	demo.tactile_dock=Dock.setup(demo,parent)
	demo.spatial_popover=preload("res://scripts/ui/city_creation_spatial_popover.gd").new()
	demo.spatial_popover.setup(demo,parent)
	demo.intuitive_guidance=preload("res://scripts/ui/city_creation_intuitive_guidance.gd").new()
	demo.intuitive_guidance.setup(demo,parent)
	demo.wish_pins=preload("res://scripts/ui/city_creation_wish_pins.gd").new()
	demo.wish_pins.setup(demo,parent)
	parent.remove_child(help_panel);help_panel.queue_free()
	parent.remove_child(old_header);old_header.queue_free()
	# Modal papers stay above the living ribbon and circular controls.
	for panel:Control in [demo.gallery.panel,demo.journal.scrollbook,demo.guide.panel]:parent.move_child(panel,parent.get_child_count()-1)
	preload("res://scripts/ui/city_creation_juice_feedback.gd").new().setup(demo,parent)
	preload("res://scripts/ui/city_creation_inspiration_draft.gd").new().setup(demo,parent)
	preload("res://scripts/ui/city_creation_era_ceremony.gd").new().setup(demo,parent)
	preload("res://scripts/visual/city_creation_tradition_scenery.gd").new().setup(demo)
	preload("res://scripts/visual/city_creation_capstone_visual.gd").new().setup(demo)
