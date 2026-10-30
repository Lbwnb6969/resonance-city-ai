extends RefCounted
const Samples=preload("res://scripts/world/city_creation_inspiration_samples.gd")
static func install(letters)->void:
	var help:=Button.new();help.name="ReadSecondStudy";help.text="查看空间微景与手札记录";letters.add_child(help)
	help.pressed.connect(func()->void:letters.demo.guide.body.text="空间微景\n"+Samples.describe(letters.demo.state))
	var row:=HBoxContainer.new();row.name="SecondStudyControls";letters.add_child(row)
	var locate:=Button.new();locate.name="LocateSecondStudy";locate.text="定位栈桥小灯 / 柱廊细藤";locate.size_flags_horizontal=Control.SIZE_EXPAND_FILL;row.add_child(locate)
	locate.pressed.connect(func()->void:
		var demo=letters.demo;var plans:=Samples.plans(demo.state)
		if plans.is_empty():demo.guide.body.text=Samples.describe(demo.state)+"\n\n本城还没有符合条件的临水栈桥或田园爱奥尼长馆。";return
		var plan:Dictionary=plans[posmod(letters.sample_cursor,plans.size())];letters.sample_cursor+=1
		demo.guide.close_panel()
		if demo.camera_rig.strolling:demo.home_camera()
		else:demo._cancel_draft()
		demo.focus=plan.position+Vector3.UP*.7;demo.zoom=10.;demo.pitch=.65;demo._update_camera()
		demo._message("提灯桥影 · 栈桥小灯" if plan.card==Samples.IDS[0] else "连拱市集 · 柱廊细藤"))
	var visibility:=Button.new();visibility.name="ToggleSecondStudyScenery";visibility.text="显示 / 收起自动装饰";visibility.size_flags_horizontal=Control.SIZE_EXPAND_FILL;row.add_child(visibility)
	visibility.pressed.connect(func()->void:
		var demo=letters.demo
		if not demo.state.CreationPolicy.is_free(demo.state):demo.guide.body.text="经典旧城保留原貌；开启自由创作后可选择收起自动装饰。";return
		var prefs:Dictionary=demo.state.creative_settings.presentation.duplicate();prefs.automatic_decoration=not prefs.automatic_decoration
		var changed:Dictionary=demo.state.CreationPolicy.set_preferences(demo.state,{"presentation":prefs})
		if changed.ok:demo._after_edit(changed,"history",false)
		demo._message("自动装饰已显示" if prefs.automatic_decoration else "自动装饰已收起，手札音乐与权益保留"))
