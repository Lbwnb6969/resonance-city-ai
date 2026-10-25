extends SceneTree
const UI=preload("res://scripts/ui/city_creation_tactile_ui_theme.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
 checks+=1
 if not ok:failures.append(label);push_error(label)
func _initialize()->void:
 for night in [false,true]:
  var style:=UI.whisper_pill_style(night)
  check(style==UI.whisper_pill_style(night) and style.corner_radius_top_left==18,"day/night cached round parchment")
  check((UI.whisper_text_color(night).get_luminance()>style.bg_color.get_luminance())==night,"day/night text has correct light polarity")
 for i in range(1,4):
  var key:=UI.rarity_key(i);var style:=UI.card_frame_style(key)
  check(style.border_width_left==i and style==UI.card_frame_style(key),"three real rarity weights and immutable cache")
 var short:=UI.format_compass_supply_capsule("garden_cafe",{"tier":2,"tempo_mult":1.35},"廊院回声")
 check(short.contains("✦✦") and not short.contains("1.35") and not short.contains("Tier"),"readable earned supply without spreadsheet multipliers")
 print("TACTILE_UI_THEME ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}));quit(0 if failures.is_empty() else 1)
