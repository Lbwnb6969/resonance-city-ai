extends RefCounted
## Notification fits one quiet line; full copy remains available on hover.
static func fit(demo,root:Control)->void:
 var toast:Label=demo.toast
 if not toast.has_meta("manuscript"):
  toast.set_meta("manuscript",true);toast.autowrap_mode=TextServer.AUTOWRAP_OFF
  toast.text_overrun_behavior=TextServer.OVERRUN_TRIM_ELLIPSIS;toast.add_theme_font_size_override("font_size",13)
  var box:=preload("res://scripts/ui/city_creation_tactile_ui_theme.gd").whisper_pill_style(true)
  toast.add_theme_stylebox_override("normal",box);toast.add_theme_color_override("font_color",Color("f6eedc"))
 var width:=minf(root.size.x-80.,460.)
 toast.offset_left=-width*.5;toast.offset_right=width*.5
 toast.offset_top=-root.size.y+72.;toast.offset_bottom=toast.offset_top+34.
