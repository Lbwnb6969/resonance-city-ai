# 空间UI与触觉交互规范

设计来源：用户2026-10-20精品化蓝图第三、四章。路线、冲突取值及当前状态见[总纲](code_artifact.md)与[PROJECT](../PROJECT.md)。2026-10-21合订稿覆盖旧版工具布局：当前为五键渐进坞、屋顶罗盘、五线谱和日晷/四时圆章；新玩家完整路径117项与自由色轮65项实窗已过。当前HUD验证器已按五键/五圆章升级，249项实窗通过，含实际练习后30%淡出/悬停恢复；四枚乐谱入口含直达名胜，常驻含二级圆章留白92.50%/88.82%。旧版验证器按依赖计划原位保留于本地废弃/当前HUD验证器更新_2026-10-22_*/。

采用羊皮纸/墨绿/铜金与原文案中心，重新组织交互。图标由_draw原生矢量绘制，不需生图或新增PNG。所有用途/样式/调音动作经State事务，保存、撤销/重做、旧作品与9工具快捷键保持。上下文屏幕锚点按真实最高屋顶、视口边界和相机前后关系更新，移回镜头须恢复显示；不能使用固定2.8米代表全部高屋。保留必要信号代理，测试迁移到真实可见入口。


2026-10-20试玩反馈覆盖旧选房要求：默认房屋工具直接点屋打开罗盘，「加建」显式进入扩建手势。当前坞为筑屋/修路/烟火/林水/地形五键，烟火打开就地用途入口；原数字快捷键兼容保留；P/鼠标侧键改为按住临时拨奏、松开回原画具，25项CPU/32项实窗通过。普通房屋仅显示六种生活用途；旧venue/交响角色仍可回读，地标才在罗盘显示庆典入口。四个快捷色点旁「更多」展开墙面/屋顶自由色轮，保留HEX/取色/最近色并隐藏引擎模式菜单，点击「换上配色」一次提交，沿用State、保存与撤销。两种分辨率实际点击、快路径换色与加层由check_creation_personalization_live验证。

道路曲线/直线与宽度互相独立，宽度圆章显示当前样式的真实米数。植被支持七种、单株/成片；单株落在鼠标松开的位置。对应实窗检查为check_creation_road_modes_live与check_creation_personalization_live。

## 第三章：UI 彻底重构——告别“GPT 网页后台风”，打造“触觉乐谱与空间箱庭 UI”

### 3.1 深度诊断：为什么现在的 UI 一眼看上去像“GPT 写的老套后台界面”？

审查 scripts/ui/valley_ui_theme.gd、city_creation_paper_hud.gd 与 city_creation_demo.gd（第 384～880 行），当前 UI 存在 五大典型的“AI 生成表单/后台模板”特征：

四角方框围城（Four-Corner Box Siege）：

左上角 PaperHeader（284px 宽方框，塞满 6 个两列网格按钮 + 折叠文字）、右上角 Actions（6 个水平方框文字按钮）、右侧长条 Place / RoadOptions / DistrictOptions（310px 宽固定表单抽屉）、左下角 help_panel（284px 宽说明文字框）、底部中央 Toolbar（952px 宽的 9 个编号文字按钮条）。整整 5 大块生硬的直角/圆角矩形面板把珍贵的 3D 河湾视野切割得支离破碎！

滥用原生网页表单控件（OptionButton 下拉菜单、CheckButton 开关、LineEdit 文本框）：

选道路样式用下拉框、选植被笔刷用下拉框、选建筑样式和时代用两个叠在一起的下拉框、选环岛和灯街用两个复选框！正如 Ahmed Salama 在《The Minimal HUD Paradox》中所指出的，把底层变量直接暴露成下拉菜单和开关列表，是典型的“工程师/AI 偷懒式界面”，完全抹杀了游戏的触觉乐趣。

空间视线割裂（Spatial Disconnection）：

玩家点击屏幕中央的一栋小房子，眼睛却必须移到屏幕最右上角的 place_panel 抽屉里去点 2×4 的文字按钮网格（“居所 / 面包坊 / 演奏庭 / 制琴坊...”），违反了 Lorenzo Ardeni 提出的 Spatial UI（空间就地交互）原则。

纯文字按钮，零图形化符号与手绘触感：

整个 UI 没有一个定制图标，全是 "1 房屋", "2 露台", "作品 · Ctrl+O" 这样的纯文本字符串配 StyleBoxFlat 单色底框。

生硬的瞬时显隐（.show() / .hide()），零物理弹性与音乐律动：

面板开关没有任何弹簧缩放或滑入动画，也没有与游戏的 80 BPM 共享音乐时钟产生任何呼吸共鸣。

### 3.2 新 UI 顶层美学范式：“羊皮乐谱 × 黄铜音叉 × 世界空间罗盘 (Tactile Score & Spatial Diorama UI)”

我们向 《Townscaper》的极致纯粹玩具感、《Tiny Glade》的悬浮圆章 以及古典管弦乐总谱（Orchestral Score）取经，确立重构后的 四大 UI 黄金法则：

┌──────────────────────────────────────────────────────────────────────────────────────────┐
│                  《共鸣之城》重构后全屏 UI 空间拓扑图 (88% 画面完全留白！)                │
│                                                                                          │
│  [左上：微缩乐章五线谱条 Score Ribbon]                    [右上：日晷光影轮 & 音叉徽章]    │
│  ╭─────────────────────────────────────────╮              ╭──────╮  ╭──────╮  ╭──────╮  │
│  │ 𝄞 河湾晨曲 · 24屋   🎵🎵○   [手记][收藏][?] │              │ ☀/🌙 │  │ ♫ 音 │  │ 📷片 │  │
│  ╰─────────────────────────────────────────╯              ╰──────╯  ╰──────╯  ╰──────╯  │
│  (单行胶囊 + 5条随拍波动的金色五线谱弦，无大块方框！)       (可旋转圆形日晷 + 极简圆章)    │
│                                                                                          │
│                                                                                          │
│                         ╭─── [世界空间建筑罗盘 Spatial Ring] ───╮                        │
│                         │       [🥐面包]  [🎻制琴]  [🍵茶座]    │                        │
│                         │  [🎨色板] ──  🏠 被选中的3D房屋  ── [🏛️风貌] │                  │
│                         │          ╰── ♫ 邀请街坊演出 ──╯       │                        │
│                         ╰───────────────────────────────────────╯                        │
│                   (点击房屋时，直接在3D房屋周围弹出半透明弧形圆章环，                    │
│                    彻底砍掉右上角 310px 宽的 PlacePanel 表单大抽屉！)                    │
│                                                                                          │
│                                                                                          │
│                  ╭──────╮  ╭──────╮  ╭──────╮  ╭──────╮  *(二级悬浮圆章气泡：            │
│                  │ 鹅卵 │  │ 灯街 │  │ 林荫 │  │ 轨街 │   仅在选中“道路/地形/植被”时     │
│                  ╰──────╯  ╰──────╯  ╰──────╯  ╰──────╯   从对应主按钮上方弹性跃出！)*   │
│       ╭──────────────────────────────────────────────────────────────────────────╮       │
│       │  (↶)   [🏠筑屋]  [🌿露台]  [🛤️道路]  [🧹移除]  [🌲林木]  [💧水岸]  [♫街坊]  [⛰️地形]  (↷) │       │
│       ╰──────────────────────────────────────────────────────────────────────────╯       │
│                        [底部：弦槌画具船坞 Tactile Palette Dock]                         │
│             (带程序化手绘矢量图标 `_draw()` + 鼠标悬停琴键上浮 + 五声音阶轻响)            │
└──────────────────────────────────────────────────────────────────────────────────────────┘



核心重构对比表（老 GPT 风格 UI vs. 新触觉空间 UI）：

原有老套 UI 组件 (scripts/ui/)

为什么要砍掉/重做？

重构后的新组件与交互方式

左上角 PaperHeader 大方框 + 6按钮双列网格 (PaperShortcuts)

像网页侧边栏导航菜单，占去左上角 284×260px 视野，文字繁琐。

【左上：五线谱心流窄条 (ScoreRibbonHUD)】：高度仅 44px 的半透明羊皮纸窄胶囊。左侧动态绘制 5 根随当前主奏音高实时微颤的金色五线谱弦；中间显示已激活的【🎵 声学和弦徽章】（悬停看配方）；右侧仅留 3 枚精致的火漆印章圆钮（手记 J、典藏 Ctrl+O、手札 F1）。

右上角 6 个文字方框按钮 (Actions)

一排死板的文字框（保存/音乐/光线/全景/漫步/明信片）。

【右上：日晷星盘与音叉圆章 (SundialCompassHUD)】：由一枚可点击旋转的 黄铜日晷/月相圆盘（直观显示太阳/夕阳/星月弧线切换）、一枚 震动音叉圆章（显示当前四温区声场状态，点击静音）、一枚 小人漫步圆章 (V) 与 取景框圆章 (F12) 组成；自动保存时印章泛起微光，无需单独占一个“保存”大文字框。

右侧 6 个固定表单抽屉 (road_panel, vegetation_panel, water_panel, removal_panel, district_panel, terrain_brush.panel)

全是 OptionButton 下拉菜单和 CheckButton 文字框，每次选下拉框要点击两次，且挡住右侧视野。

【彻底废除右侧工具抽屉！改用底部二级悬浮圆章弧 (SubToolBubbleArc)】：当玩家在底部点击“道路”、“植被”、“水岸”、“街坊”或“地形”时，直接在该工具图标正上方 16px 处以弹簧动画（TRANS_BACK）跃出一排 3～5 个带矢量图标的圆形子印章（例如点“道路”直接浮现：[鹅卵石径] [石板灯街] [林荫大道] [叮当轨街] [◎环岛]），一键直达，零下拉菜单！

右侧选房大表单 (place_panel + HouseAudition 工具 5)

选房必须先切到工具 5，再看右上角 310px 宽的冗长表单，含 2 个下拉框、8 个文字按钮、3 个进度条。

【世界空间建筑罗盘 (SpatialBuildingRing)】：在默认浏览或点击已建房屋时，直接在 3D 房屋屏幕投影坐标 (camera.unproject_position) 周围展开一圈优雅的半圆拱形徽章环！左侧切样式/色板圆点，上方扇形排列用途图标印章（面包/制琴/茶座/演出/书院/钟表/交响），下方显示圆形进度环与“♫ 邀演”按钮。视线永远停留在建筑本身！

左下角 help_panel 文字提示框 (284×160px)

永远挂在左下角的死板说明书，遮挡画面。

【彻底删除左下角方框！改用底部微光按键胶囊 (WhisperKeycapBar)】：在底部工具坞下方仅用一行无背景框的半透明键帽图标（如 [左键] 拖拽筑屋  [Alt] 自由落点  [右键] 旋转）轻柔提示；玩家熟练操作 3 次后自动淡出至 35% 透明度。

### 3.3 程序化矢量图标渲染器 (scripts/ui/city_creation_vector_icons.gd) —— 零外部图片依赖，告别纯文字按钮！

为了让所有工具按钮、用途印章、日晷和声学徽章拥有媲美《Mini Metro》《Dorfromantik》与《Tiny Glade》的精致图形质感，同时保持仓库轻量化（无需塞入几十张零散 PNG），我们编写一个纯 GDScript Control._draw() 抗锯齿矢量图标绘制器 CityCreationVectorIcons：

```gdscript
class_name CityCreationVectorIcons
extends RefCounted
## Procedural anti-aliased vector iconography drawn natively via CanvasItem._draw().
## Eliminates plain-text "GPT-style" buttons without requiring external PNG assets.

static func draw_icon(canvas: CanvasItem, kind: String, center: Vector2, radius: float, color: Color, accent: Color = Color("c4a568")) -> void:
	match kind:
		"house":
			# 双坡山墙小屋 + 阁楼圆窗
			var pts := PackedVector2Array([
				center + Vector2(-radius * 0.75, radius * 0.1),
				center + Vector2(0.0, -radius * 0.78),
				center + Vector2(radius * 0.75, radius * 0.1)
			])
			canvas.draw_polyline(pts, color, 2.2, true)
			canvas.draw_rect(Rect2(center.x - radius * 0.52, center.y + radius * 0.05, radius * 1.04, radius * 0.68), color, false, 2.0)
			canvas.draw_circle(center + Vector2(0.0, -radius * 0.22), radius * 0.14, accent)
			canvas.draw_rect(Rect2(center.x - radius * 0.16, center.y + radius * 0.32, radius * 0.32, radius * 0.41), accent, true)
		"terrace":
			# 露台木花架与拱形遮阳篷
			canvas.draw_line(center + Vector2(-radius * 0.7, radius * 0.55), center + Vector2(radius * 0.7, radius * 0.55), color, 2.2, true)
			for i in range(-2, 3):
				var x := center.x + float(i) * radius * 0.32
				canvas.draw_line(Vector2(x, center.y + radius * 0.1), Vector2(x, center.y + radius * 0.55), color, 1.8, true)
			canvas.draw_arc(center + Vector2(0.0, radius * 0.05), radius * 0.68, PI * 1.1, PI * 1.9, 16, accent, 2.4, true)
		"road":
			# 蜿蜒透视石板路与拱桥
			canvas.draw_arc(center + Vector2(-radius * 0.5, 0.0), radius * 0.75, -0.6, 0.7, 14, color, 2.2, true)
			canvas.draw_arc(center + Vector2(-radius * 0.1, 0.0), radius * 0.75, -0.6, 0.7, 14, color, 2.2, true)
			canvas.draw_circle(center + Vector2(radius * 0.1, -radius * 0.35), radius * 0.14, accent)
		"erase":
			# 柔和拆解/扫帚曲线与虚线方格
			canvas.draw_rect(Rect2(center.x - radius * 0.48, center.y - radius * 0.48, radius * 0.96, radius * 0.96), color, false, 1.8)
			canvas.draw_line(center + Vector2(-radius * 0.32, -radius * 0.32), center + Vector2(radius * 0.32, radius * 0.32), accent, 2.2, true)
			canvas.draw_line(center + Vector2(radius * 0.32, -radius * 0.32), center + Vector2(-radius * 0.32, radius * 0.32), accent, 2.2, true)
		"audition", "district":
			# 共鸣音叉与跨河音弧
			canvas.draw_arc(center + Vector2(0.0, radius * 0.35), radius * 0.72, PI * 1.15, PI * 1.85, 20, accent, 2.2, true)
			canvas.draw_circle(center + Vector2(-radius * 0.35, radius * 0.2), radius * 0.18, color)
			canvas.draw_line(center + Vector2(-radius * 0.18, radius * 0.2), center + Vector2(-radius * 0.18, -radius * 0.52), color, 2.0, true)
			canvas.draw_line(center + Vector2(-radius * 0.18, -radius * 0.52), center + Vector2(radius * 0.32, -radius * 0.35), color, 2.4, true)
		"vegetation":
			# 双层丝柏与橄榄枝冠
			canvas.draw_line(center + Vector2(0.0, radius * 0.65), center + Vector2(0.0, -radius * 0.1), color, 2.2, true)
			canvas.draw_circle(center + Vector2(0.0, -radius * 0.22), radius * 0.42, color)
			canvas.draw_circle(center + Vector2(-radius * 0.32, radius * 0.08), radius * 0.28, accent)
		"water":
			# 双道水波纹与睡莲
			for row in range(2):
				var y := center.y + float(row) * radius * 0.38 - radius * 0.1
				canvas.draw_arc(Vector2(center.x - radius * 0.35, y), radius * 0.35, 0.15, PI - 0.15, 12, color, 2.0, true)
				canvas.draw_arc(Vector2(center.x + radius * 0.35, y), radius * 0.35, PI + 0.15, TAU - 0.15, 12, color, 2.0, true)
			canvas.draw_circle(center + Vector2(0.0, -radius * 0.38), radius * 0.16, accent)
		"terrain":
			# 阶梯平顶台地与远山轮廓
			var mtn := PackedVector2Array([
				center + Vector2(-radius * 0.78, radius * 0.48),
				center + Vector2(-radius * 0.38, -radius * 0.28),
				center + Vector2(radius * 0.22, -radius * 0.28),
				center + Vector2(radius * 0.45, radius * 0.12),
				center + Vector2(radius * 0.78, radius * 0.48)
			])
			canvas.draw_polyline(mtn, color, 2.2, true)
			canvas.draw_line(center + Vector2(-radius * 0.38, -radius * 0.28), center + Vector2(radius * 0.22, -radius * 0.28), accent, 2.8, true)
		"sundial_day":
			canvas.draw_circle(center, radius * 0.38, accent)
			for i in range(8):
				var a := float(i) * TAU / 8.0
				canvas.draw_line(center + Vector2(cos(a), sin(a)) * radius * 0.52, center + Vector2(cos(a), sin(a)) * radius * 0.76, color, 1.8, true)
		"sundial_dusk":
			canvas.draw_arc(center + Vector2(0.0, radius * 0.2), radius * 0.48, PI, TAU, 16, accent, 2.6, true)
			canvas.draw_line(center + Vector2(-radius * 0.75, radius * 0.2), center + Vector2(radius * 0.75, radius * 0.2), color, 2.0, true)
		"sundial_night":
			canvas.draw_arc(center, radius * 0.52, 0.4, PI * 1.55, 18, accent, 2.6, true)
			canvas.draw_circle(center + Vector2(radius * 0.32, -radius * 0.32), radius * 0.10, color)
```

### 3.4 核心 UI 重构组件一：左上角“动态五线谱心流条 (scripts/ui/city_creation_score_ribbon.gd)”

彻底替换原有的 city_creation_paper_hud.gd 左上角双列 6 按钮网格卡片。新组件只有一条温润的羊皮卷轴窄条：

实时五线谱动画：根据当前 music.resonance_state() 的 beat_pulse 与正在发声的房屋音高，在窄条左侧实时绘制 5 条随音乐呼吸微颤的铜金五线谱与跳动音符；

声学和弦徽章槽：直接显示当前城市已激活的【🎵 声学和弦】圆章，鼠标移上去即可看到和弦加成详情；

可展开的微缩手记丝带：默认不显示长篇文字，点击右侧火漆印章平滑展开当前乐章的小目标。

```gdscript
class_name CityCreationScoreRibbon
extends PanelContainer
## Replaces the bulky 2-column button grid in PaperHeader with a living
## 5-line musical staff ribbon, active chord badges, and 3 wax-seal buttons.

const UI = preload("res://scripts/ui/valley_ui_theme.gd")
const Icons = preload("res://scripts/ui/city_creation_vector_icons.gd")

var demo: Node3D
var staff_canvas: Control
var title_label: Label
var stats_label: Label
var chord_row: HBoxContainer
var _pulse_phase: float = 0.0
var _active_midi: int = 62
var _audible: bool = false

func setup(owner: Node3D, root: Control) -> void:
	demo = owner
	name = "ScoreRibbonHUD"
	position = Vector2(20, 18)
	var style := UI.panel(10)
	style.set_corner_radius_all(22) # 温润胶囊卷轴造型，绝非生硬方框
	style.bg_color = Color(UI.PAPER.r, UI.PAPER.g, UI.PAPER.b, 0.90)
	style.border_color = UI.GOLD
	add_theme_stylebox_override("panel", style)
	root.add_child(self)

	var bar := HBoxContainer.new()
	bar.add_theme_constant_override("separation", 12)
	add_child(bar)

	# 1. 动态五线谱微缩画布 (宽 56px, 高 32px)
	staff_canvas = Control.new()
	staff_canvas.custom_minimum_size = Vector2(56, 32)
	staff_canvas.mouse_filter = Control.MOUSE_FILTER_PASS
	staff_canvas.tooltip_text = "河湾实时共鸣五线谱 · 随当前主奏建筑与节拍律动"
	staff_canvas.draw.connect(_draw_live_staff)
	bar.add_child(staff_canvas)

	# 2. 诗意标题与极简规模摘要（合为紧凑双行）
	var text_col := VBoxContainer.new()
	text_col.add_theme_constant_override("separation", 1)
	bar.add_child(text_col)
	title_label = demo._label("共鸣之城 · 河湾晨曲", 15)
	text_col.add_child(title_label)
	stats_label = demo._label("6 屋 · 田园木石", 12)
	stats_label.add_theme_color_override("font_color", UI.MUTED)
	text_col.add_child(stats_label)

	# 3. 声学和弦徽章展示区
	chord_row = HBoxContainer.new()
	chord_row.add_theme_constant_override("separation", 4)
	bar.add_child(chord_row)

	# 4. 三枚火漆印章圆钮（手记 J / 地标 / 典藏 Ctrl+O / 手札 F1）
	for item: Dictionary in [
		{"text": "手记", "tip": "河湾四章手记与时代目标 · J", "call": func(): demo.journal.open_panel()},
		{"text": "名胜", "tip": "六座里程碑地标名胜 · 免费选址", "call": func(): demo.signatures.open_panel()},
		{"text": "典藏", "tip": "作品收藏与18座示范河湾 · Ctrl+O", "call": func(): demo.gallery.open_panel()},
		{"text": "手札", "tip": "营造手势与声学图鉴 · F1", "call": func(): demo.guide.open_panel()}
	]:
		var btn := Button.new()
		btn.text = item.text
		btn.tooltip_text = item.tip
		btn.focus_mode = Control.FOCUS_NONE
		btn.custom_minimum_size = Vector2(46, 30)
		btn.add_theme_font_size_override("font_size", 12)
		var pill := UI.subtle_button("normal")
		pill.set_corner_radius_all(15)
		btn.add_theme_stylebox_override("normal", pill)
		btn.pressed.connect(item.call)
		bar.add_child(btn)

func update_ribbon(delta: float, res_state: Dictionary, house_count: int, subtitle: String) -> void:
	_audible = bool(res_state.get("audible", false))
	var beat_pulse := float(res_state.get("beat_pulse", 0.0))
	_pulse_phase += delta * (5.5 if _audible else 1.2)
	title_label.text = subtitle
	stats_label.text = "%d 座建筑 · 正在共鸣" % house_count if _audible else "%d 座建筑 · 静候拨弦" % house_count
	staff_canvas.queue_redraw()

func _draw_live_staff() -> void:
	var w := staff_canvas.size.x
	var h := staff_canvas.size.y
	# 绘制 5 根随节拍波动的铜金琴弦
	for i in range(5):
		var y_base := 6.0 + float(i) * 5.0
		var pts := PackedVector2Array()
		for step in range(9):
			var t := float(step) / 8.0
			var amp := (2.2 if _audible else 0.4) * sin(t * PI) * sin(_pulse_phase + float(i) * 0.7)
			pts.append(Vector2(t * w, y_base + amp))
		staff_canvas.draw_polyline(pts, UI.GOLD if _audible else UI.BORDER, 1.2, true)
	# 绘制跃动的音符头
	var note_y := clampf(16.0 + sin(_pulse_phase * 0.8) * 8.0, 6.0, 26.0)
	staff_canvas.draw_circle(Vector2(w * 0.52, note_y), 3.6, UI.GREEN if _audible else UI.MUTED)
```

### 3.5 核心 UI 重构组件二：世界空间建筑悬浮罗盘 (scripts/ui/city_creation_spatial_popover.gd)

彻底废除右上角 310px 宽的 place_panel 表单大抽屉！ 当玩家点击或选中一栋房屋时，系统通过 camera.unproject_position(house_world_top) 获取该建筑在屏幕上的 2D 锚点，直接在房屋正上方或侧方展开一个半圆形的触觉印章罗盘（Spatial Radial / Arc Popover）：

上方弧形排列 8 枚用途印章：点击直接将房屋设为居所/面包坊/制琴坊/茶座/演奏庭/书院/钟表坊/音乐厅，伴随着清脆的木槌敲击与竖琴泛音；

左侧快捷胶囊：一键轮换建筑立面样式（灰泥/木构/石砌/圆塔）与时代风貌；

右侧快捷胶囊：一键轮换屋瓦墙面色板（palette）；

底部核心状态胶囊：显示房屋名称（点击可原地改名）、当前品质星级（Lv.1 ~ Lv.5）、声学性格三档切换（轻快 / 温润 / 深邃）以及一键 “♫ 邀请演出 / 开启巡演” 按钮！

当玩家平移或旋转镜头时，罗盘实时紧贴 3D 房屋平滑跟随；点击空白地面或按 Esc 即以弹簧缩放动画收起。

```gdscript
class_name CityCreationSpatialPopover
extends Control
## World-space contextual popover anchored directly to the selected 3D house.
## Replaces the disconnected right-hand PlacePanel form drawer.

const UI = preload("res://scripts/ui/valley_ui_theme.gd")
const Copy = preload("res://scripts/ui/city_creation_copy.gd")

var demo: Node3D
var target_house_id: String = ""
var card: PanelContainer
var title_btn: Button
var tier_label: Label
var status_label: Label
var role_row: HBoxContainer
var action_row: HBoxContainer
var temperament_btn: Button
var concert_btn: Button
var style_btn: Button
var palette_btn: Button
var _tween: Tween

const ROLE_ICONS := {
	"residential": "🏠 居所",
	"bakery": "🥐 面包",
	"workshop": "🎻 制琴",
	"garden_cafe": "🍵 茶座",
	"venue": "♫ 演奏",
	"atelier": "🎨 书院",
	"clockmaker": "🕰️ 钟表",
	"symphony_hall": "🏛️ 交响"
}

func setup(owner: Node3D, root: Control) -> void:
	demo = owner
	name = "SpatialBuildingPopover"
	mouse_filter = Control.MOUSE_FILTER_IGNORE
	set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT)
	root.add_child(self)

	card = PanelContainer.new()
	var style := UI.panel(12)
	style.set_corner_radius_all(18)
	style.bg_color = Color(UI.PAPER.r, UI.PAPER.g, UI.PAPER.b, 0.94)
	style.border_color = UI.GOLD
	style.set_border_width_all(2)
	card.add_theme_stylebox_override("panel", style)
	card.pivot_offset = Vector2(150, 80)
	add_child(card)

	var col := VBoxContainer.new()
	col.add_theme_constant_override("separation", 6)
	card.add_child(col)

	# 顶部：房屋名 + 品质等级徽章 + 样式/色板一键轮换圆钮
	var head := HBoxContainer.new()
	head.add_theme_constant_override("separation", 6)
	col.add_child(head)

	title_btn = demo._button("河湾小屋", func(): pass)
	title_btn.flat = true
	title_btn.add_theme_font_size_override("font_size", 15)
	head.add_child(title_btn)

	tier_label = demo._label("★ Lv.1", 12)
	tier_label.add_theme_color_override("font_color", UI.GREEN)
	head.add_child(tier_label)

	style_btn = demo._button("样式 ↻", _cycle_house_style)
	style_btn.tooltip_text = "一键轮换建筑立面样式（灰泥 / 木构 / 石砌 / 圆塔）"
	UI.subtle(style_btn)
	head.add_child(style_btn)

	palette_btn = demo._button("🎨 色板", _cycle_house_palette)
	palette_btn.tooltip_text = "一键切换屋瓦与墙面色彩"
	UI.subtle(palette_btn)
	head.add_child(palette_btn)

	# 中部：紧凑的用途印章胶囊条（仅显示已解锁时代的用途，告别2x4大表格！）
	role_row = HBoxContainer.new()
	role_row.add_theme_constant_override("separation", 4)
	col.add_child(role_row)
	for role_key: String in ROLE_ICONS:
		var btn := demo._button(ROLE_ICONS[role_key], func():
			demo._after_edit(demo.state.set_house_role(target_house_id, role_key), "room")
			refresh_content())
		btn.name = "SpatialRole_" + role_key
		btn.tooltip_text = Copy.ROLE_TOOLTIPS.get(role_key, "")
		btn.add_theme_font_size_override("font_size", 12)
		role_row.add_child(btn)

	# 状态与选址祝福单行精简展示
	status_label = demo._label("", 12)
	status_label.add_theme_color_override("font_color", UI.MUTED)
	status_label.autowrap_mode = TextServer.AUTOWRAP_WORD_SMART
	status_label.custom_minimum_size.x = 280
	col.add_child(status_label)

	# 底部：声学性格调音 + 演出/工坊核心互动动作
	action_row = HBoxContainer.new()
	action_row.add_theme_constant_override("separation", 6)
	col.add_child(action_row)

	temperament_btn = demo._button("🎵 律动：温润行板", _cycle_temperament)
	temperament_btn.tooltip_text = "调节这处建筑的音乐与劳作性格（轻快快板 / 温润行板 / 深邃广板）"
	UI.subtle(temperament_btn)
	action_row.add_child(temperament_btn)

	concert_btn = demo._button("♫ 邀请街坊演出", func(): demo._invite_concert())
	UI.primary(concert_btn)
	action_row.add_child(concert_btn)

	card.hide()

func open_for_house(house_id: String) -> void:
	target_house_id = house_id
	if house_id.is_empty():
		close_popover()
		return
	refresh_content()
	card.show()
	# 弹簧物理弹出动画 (Godot 4 Tween TRANS_BACK)
	card.scale = Vector2(0.78, 0.78)
	card.modulate.a = 0.0
	if _tween != null and _tween.is_valid(): _tween.kill()
	_tween = create_tween().set_parallel(true)
	_tween.tween_property(card, "scale", Vector2.ONE, 0.22).set_trans(Tween.TRANS_BACK).set_ease(Tween.EASE_OUT)
	_tween.tween_property(card, "modulate:a", 1.0, 0.14)

func close_popover() -> void:
	target_house_id = ""
	if card != null: card.hide()

func update_screen_anchor(camera: Camera3D) -> void:
	if target_house_id.is_empty() or not card.visible or camera == null:
		return
	var house: Dictionary = demo.town._house_record(target_house_id)
	if house.is_empty():
		close_popover()
		return
	var world_pos := Vector3(float(house.origin[0]), float(house.get("base_y", 0.0)) + 2.8, float(house.origin[1]))
	if camera.is_position_behind(world_pos):
		card.hide()
		return
	var screen_pt := camera.unproject_position(world_pos)
	var vp_size := get_viewport_rect().size
	var card_size := card.size
	var target_pos := Vector2(
		clampf(screen_pt.x - card_size.x * 0.5, 16.0, vp_size.x - card_size.x - 16.0),
		clampf(screen_pt.y - card_size.y - 18.0, 68.0, vp_size.y - card_size.y - 110.0)
	)
	card.position = card.position.lerp(target_pos, 0.35)

func _cycle_house_style() -> void:
	var house: Dictionary = demo.town._house_record(target_house_id)
	if house.is_empty() or house.has("signature"): return
	var styles: Array = demo.State.HOUSE_STYLES
	var idx := (styles.find(str(house.get("style", "classic"))) + 1) % styles.size()
	demo._after_edit(demo.state.set_house_style(target_house_id, styles[idx]), "room")
	refresh_content()

func _cycle_house_palette() -> void:
	var house: Dictionary = demo.town._house_record(target_house_id)
	if house.is_empty(): return
	var next_pal := (int(house.get("palette", 0)) + 1) % 4
	demo._after_edit(demo.state.set_house_palette(target_house_id, next_pal), "terrace", false)
	refresh_content()

func _cycle_temperament() -> void:
	var house: Dictionary = demo.town._house_record(target_house_id)
	if house.is_empty(): return
	var modes := ["andante", "allegro", "largo"]
	var names := {"andante": "🎵 律动：温润行板", "allegro": "⚡ 律动：轻快快板", "largo": "🌊 律动：深邃广板"}
	var cur := str(house.get("temperament", "andante"))
	var next_mode: String = modes[(modes.find(cur) + 1) % modes.size()]
	house["temperament"] = next_mode
	temperament_btn.text = names[next_mode]
	demo.music.play_house(target_house_id)

func refresh_content() -> void:
	var house: Dictionary = demo.town._house_record(target_house_id)
	if house.is_empty(): return
	title_btn.text = str(house.get("name", "河湾小屋"))
	var tier: int = demo.state.level_tier(target_house_id)
	tier_label.text = "★ Lv.%d %s" % [tier, demo.state.Quality.NAMES[clampi(tier - 1, 0, 4)]]
	var role := str(house.get("role", "residential"))
	concert_btn.visible = role in ["venue", "symphony_hall"]
	status_label.text = demo.HouseholdFeedback.describe(demo.state, demo.life, target_house_id)
```

### 3.6 核心 UI 重构组件三：底部“触觉弦槌画具船坞 + 二级圆章气泡 (scripts/ui/city_creation_tactile_dock.gd)”

彻底替换底部死板的 952px 矩形按钮条与全部右侧工具选项抽屉（road_panel, vegetation_panel, water_panel, terrain_brush.panel, district_panel）：

主船坞：9 枚带 _draw() 矢量手绘图标的圆角琴键式按钮。鼠标滑过按钮时，按钮向上轻盈浮起 5px（Tween.TRANS_BACK），并可选择性发出一声极轻的木质琴键泛音；

二级悬浮圆章弧 (SubToolBubbleBar)：当玩家选中需要子选项的工具（如 3 道路、6 植被、7 水岸、8 街坊、9 地形）时，在主船坞正上方 12px 处直接展开一条无背景框的圆章气泡链（例如选中“道路”时，上方浮现：[鹅卵小径] [石板灯街] [林荫大道] [叮当轨街] [◎ 环岛开关] [📐 直拉模式]）。

收益：玩家再也不需要去屏幕右上角点下拉菜单，眼睛看着河湾底部就能用余光一键切换笔刷大小、道路层级与地形模式！

## 第四章：发挥创意——让玩家与城市深度互动的“五大共生玩法系统”

你提到：“发挥你的创意，让系统能够很好的形成游戏，像是玩家能跟系统很好的交互创造自己的城市”。 为什么《Townscaper》和《Tiny Glade》让人初看惊艳，但玩 1 小时后容易觉得“只是个静态捏景器”？因为它们缺少“有生命的城市对玩家抚摸的回应”。而《共鸣之城》拥有独一无二的“实时音乐 + 真实居民生活”双底座！我们在此设计 五大极具创意、低成本高回报的玩家-城市交互闭环，让整座城市变成一件活生生的、可抚摸、会提心愿、能共同谱曲的交响玩具！

### 4.1 交互闭环一：【屋顶刮奏与万物可拨弄（Roof Glissando & Interactive World Toy）】

核心体验：

以前玩家必须按 P（或切到工具 5）才能点击房屋发声。重构后：在任何非拖拽建造的浏览状态下，以及按住空格/右键漫游时，整座城市的所有物体都是可实时拨弄的乐器！

四种“指尖抚摸城市”的微交互反馈：

① 划过连排屋顶 = 竖琴/古筝刮奏（Roof Glissando）：当玩家按住 P 或鼠标侧键快速掠过一排高低错落的街屋时，系统按房屋 level 0..4 推入 AttentionMixer.enqueue_pluck_arpeggio()，奏出如行云流水般的五声音阶琶音，每栋被划过的房屋屋顶向上轻弹 4cm（town.animate_house_bounce(id, 0.045)），烟囱冒出一小朵音符状白烟！

② 拂过水面与睡莲 = 水滴泛音与涟漪扩散：鼠标划过主河道或睡莲池塘时，实时在鼠标落水点激起一圈 TG 径向水波纹，并触发清澈的水滴木琴微音（water_marimba），池中睡莲随之轻轻摇曳。

③ 拂过森林树冠 = 惊鸟与林间风铃：鼠标快速扫过成片的橄榄树或古柏时，树冠产生风吹摆动（驱动草木 Shader 的局部 gust 脉冲），伴随一声清脆的画眉鸟鸣与叶片沙沙声。

④ 路过居民的抬头欢呼（Citizen Wave & Applause）：当玩家拨响某栋房屋或敲响钟楼时，半径 8m 内正在行走的居民会停下脚步 0.8s，转身面向该建筑跳跃挥手，头顶冒出一个微小的 ♪ 音符！

### 4.2 交互闭环二：【屋顶心愿气泡与即时共创（Spatial Citizen Wishes & Micro-Commissions）】

痛点解决：

以前玩家想知道“怎样让这片街区升级、居民缺什么”，必须点开房屋看文字说明或按 L 看密密麻麻的文字账本。

创新机制：城市会“主动向你倾诉心愿”：

系统每 20 秒 从当前视野内挑选 1 ~ 2 栋 处于“临门一脚即可进化或激活和弦 BUFF”的建筑，在其屋顶上方浮现一枚温润的羊皮纸微缩气泡（Spatial Wish Bubble，只显示一个精致图标，绝不遮挡画面）：

屋顶心愿气泡图标

触发该心愿的底层状态条件

鼠标悬停时的诗意一句话提示

玩家点击气泡或完成心愿时的即时互动奖赏

🌉 盼望通路

新建房屋超过 15s 仍未接入任何道路

“这户人家备好了茶具，只盼门前有一条小路通往街坊。”

点击气泡自动切换到【道路工具】并高亮最佳接路点；接通瞬间爆出上行竖琴琶音！

💧 渴望活水

面包坊已开工，但距离水岸/喷泉 > 4.5m

“面包师说，若在屋旁挖一汪池塘或围出喷泉内院，麦香还能更浓。”

点击气泡自动切换到【水岸/池塘工具】；挖好池塘瞬间激活【活水磨坊】加持，立即额外出炉 2 份热面包！

🌲 寻觅良木

制琴坊周围 8m 内树木 < 3 棵

“制琴匠人正在寻找橄榄与翠柏的回响（还差 N 棵树）。”

点击气泡自动切换到【植被工具】；种满 3 棵树瞬间激活【良木林间】，匠人立即背起新琴出发送装！

🍵 夕照茶叙

同街坊已有面包坊与 4 户民居，但尚无花圃茶座

“买到热面包的街坊们，想在石板街旁有一处围坐品茶的花圃。”

设好茶座后，周围住户立即结伴涌向茶座，激活【🎵 晨光田园三和弦】！

♫ 隔水相望

河两岸各有一个活跃街坊，但尚未建立跨区共鸣连线

“东岸的羽管键琴正静候西岸木吉他的应答，牵起一道跨河音弧吧！”

点击气泡直接进入连线拖拽态；连成瞬间两岸同时亮起金色窗光，奏响跨时空二重奏！

### 4.3 交互闭环三：【建筑声学性格调音台（Acoustic Temperament Tuning）】

为了让玩家感觉自己不仅是在“摆积木”，更是在“为每个街坊调音编曲”，每栋功能建筑（面包坊、制琴坊、茶座、书院、钟表坊、演奏庭）在世界空间罗盘中都拥有 三档可随时拨动的【声学性格（Temperament）】：

⚡ 轻快快板（Allegro）：

音乐表现：该建筑触发的微拍短音自动升八度，并采用跳跃的十六分音符切分音型；

玩法效果：工匠制作与送货移速 +25%，适合服务近距离高密度的小街巷，但单次配送仅携带 1 份 成品。

🎵 温润行板（Andante，默认）：

音乐表现：温暖平稳的八分音符中音区应答；

玩法效果：标准生产速度、标准服务半径（22m）与均衡余韵。

🌊 深邃广板（Largo）：

音乐表现：浑厚悠长的低八度延音与大三和弦共鸣，尾音混响延长 50%；

玩法效果：生产周期拉长 30%，但单次出炉/送装产出直接翻倍（×2），且每次完成生产时向周围 15m 扩散一圈金色低音共鸣波，延长邻屋 20s 余韵！

策略与交互深度：玩家可以把河岸小巷的面包坊调成 轻快快板（清脆木琴高频跳跃，快速喂饱邻里），把高地台地上的书院和钟楼调成 深邃广板（浑厚弦乐与钟声铺底，一次赋能大片区域）——玩家调整经营策略的过程，本身就是在做高低声部的交响编曲！

### 4.4 交互闭环四：【指挥家巡游编排（Conductor Baton & Lantern Parade）】

当玩家点击演奏庭或水上交响剧场发起庆典时，除了自动接力外，新增“手绘巡游接力线（Conductor Gesture）”：

玩家按住鼠标左键依次划过城内的 2～4 座演奏庭/地标（如：古钟圣塔 → 石板灯街环岛 → 文艺复兴音乐院 → 水上交响剧场）；

地面与半空中立即浮现一条流光溢彩的金色五线谱巡游轨，本次 24 秒盛典的 8 个乐句将严格按照玩家手绘的建筑顺序依次传递领奏聚光灯，且街坊居民会手提暖色灯笼沿着这条路线结队巡游！

### 4.5 交互闭环五：【四时声学微气候（4-Season Acoustic Weather Cycle）】

在右上角【日晷星盘】旁增加一枚【四时风物印章】，支持一键切换或随 24 秒大循环自然轮转 4 种极具氛围感的箱庭微气候（纯 Shader + MultiMesh 粒子 + 环境声床混音实现，复用现有批次，避免引入明显卡顿，CPU 耗时只作实测参考）：

微气候名称

视觉氛围表现 (city_creation_environment.gd)

环境声床与音乐色彩变化 (city_creation_ambience.gd)

对应的城市生活微增益

🌸 晴昼花吹雪  spring_breeze

微风拂过橄榄与花圃，空中飘落稀疏柔和的暖白/粉杏花瓣粒子

清脆画眉鸟鸣 + 轻柔林风；高音木笛与竖琴泛音增益 +1.5 dB

花圃茶座与植物玻璃宫余韵持续时间 +25%

🌧️ 夏夕太阳雨  sun_shower

暖金夕阳穿透薄雾细雨，河面与池塘泛起细密雨滴同心圆涟漪，石板路微润反光

治愈的细雨打叶声与潺潺溪流声；汀步与过桥自动切换为清亮的水滴马林巴

河湾大水车磨坊与临水面包坊水力充沛，烘焙速度 +30%

🍂 秋暮金风  autumn_gold

草甸叶尖染上暖金琥珀色阶，微风卷起几片金黄落叶沿石板街滑行

温暖低沉的林间晚风；大提琴（foundation）与手风琴（market）醇厚度提升

全城工坊（制琴/书院/钟表）匠人秋收干劲十足，制作速度 +25%

✨ 星夜萤火  starlight_fireflies

星夜万家暖窗点亮，睡莲池塘与草甸上升起随 80 BPM 节拍同步明灭的翠金流萤

静谧夜虫轻吟与远山钟声回响；毡音钢琴（felt_piano）与钢片琴空灵通透

跨街坊器乐问答（District Reply）距离上限扩大 +40%，夜游电车全速运行
