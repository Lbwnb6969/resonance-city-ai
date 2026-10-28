extends HBoxContainer
## Reuses Schema20 author preferences and the existing handbook.
const Policy=preload("res://scripts/world/city_creation_creation_policy.gd")
const Plan=preload("res://scripts/audio/city_creation_orchestration_plan.gd")
const STYLES:=["pastoral_breeze","deep_flow","felt_nocturne"]
var demo
var mode:Button
var style:Button
var mode_index:=0
var style_index:=0
var reason:Label
var stamp:Array=[]
static func install(owner:Node3D,parent:Control)->void:
	var row=load("res://scripts/ui/city_creation_music_preferences.gd").new();row.demo=owner;parent.add_child(row);owner.set_meta("music_preferences",row)
func _ready()->void:
	name="MusicPreferences";add_theme_constant_override("separation",8)
	var title:=Label.new();title.text="城市乐章";add_child(title)
	mode=Button.new();mode.name="MusicPreferenceMode";mode.custom_minimum_size.x=114
	mode.pressed.connect(func()->void:mode_index=(mode_index+1)%3;_changed());add_child(mode)
	style=Button.new();style.name="MusicPreferenceStyle";style.custom_minimum_size.x=138
	style.pressed.connect(func()->void:style_index=(style_index+1)%3;_changed());add_child(style)
	reason=Label.new();reason.size_flags_horizontal=Control.SIZE_EXPAND_FILL;reason.clip_text=true;reason.add_theme_font_size_override("font_size",12);add_child(reason)
	refresh()
func refresh()->void:
	var prefs:=Plan.preferences(demo.state);mode_index=["auto","fixed","quiet"].find(prefs.mode);style_index=maxi(0,STYLES.find(prefs.style))
	mode.text=["自动","固定风格","安静"][mode_index]+" ↻";style.text=["田园微风","深流","毛毡夜曲"][style_index]+" ↻"
	mode.disabled=demo.state.creative_settings.is_empty();style.disabled=mode.disabled or prefs.mode!="fixed"
	mode.tooltip_text="点击轮换：自动 → 固定风格 → 安静。自动随城市缓慢换乐章；固定风格保留昼夜选择；安静不改变居民生活。"
	style.tooltip_text="点击轮换：田园微风 → 深流 → 毛毡夜曲。"
	var plan:Dictionary=demo.music.get_meta("orchestration_plan",{})
	if prefs.mode!="fixed":style.text=["田园微风","深流","毛毡夜曲"][maxi(0,STYLES.find(str(plan.get("style","pastoral_breeze"))))]
	reason.text=str(plan.get("reason","等待第一座房屋"))+" · "+str(plan.get("waiting",""))
	reason.tooltip_text="风格在乐句边界衔接；自动风格保留一个完整六段主题。"
func _changed()->void:
	var previous:=Plan.preferences(demo.state)
	var value:={"mode":["auto","fixed","quiet"][mode_index],"style":STYLES[style_index] if mode_index==1 else previous.style,"seed":previous.seed}
	var result:=Policy.set_preferences(demo.state,{"music":value})
	if result.ok:
		demo.music.remove_meta("chamber_role_key");demo.music.update_city(demo.state);demo._refresh_ui();demo.save_delay=3.0
	else:demo._message(result.message)
	refresh()
func _process(_delta:float)->void:
	if not is_visible_in_tree():return
	var next:Array=[demo.state.get_instance_id(),demo.state.revision,demo.music.get_meta("orchestration_plan",{}).get("reason",""),demo.music.get_meta("orchestration_plan",{}).get("waiting","")]
	if next!=stamp:stamp=next;refresh()
