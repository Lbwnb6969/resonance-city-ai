# 《共鸣之城》(Resonance City) · 迈向完整精品游戏：深度交互共生、去GPT感UI彻底重构与十阶段长期施工总蓝图

> 2026-10-20 用户第二代精品化蓝图，完整合入下文。施工顺序为 **Stage I → X**；旧Phase1～11转入基座契约，未完成Phase12并入Stage I/X。原四库与上一份增量蓝图保存在本地 `废弃/第二代蓝图接续_2026-10-20/`，不重复执行旧一次性归档。
>
> **设计目标与实现证据分开**：下文“现状诊断”和示例代码是用户提出的设计与排查方向，验收状态以PROJECT和实际代码/实测为准。旧首拍抢槽/固定配器问题已由Stage A/B解决；远端工坊已有worker_lod到期调度，品质结算即时、显示队列逐屋发布，继续压尾帧。示例接口须适配现有事务、撤销、存档和音乐时钟，不能直接改房屋字典绕过State。
>
> **彩色面根因未确认**：MultiMesh未写满、非有限切线、场纹理未初始化是三条待验证假设，不是已确认根因。当前草毯/石粒批次按实际记录数分配并逐项写满；水场完整逐像素计算后上传、接触场先填255。本机Godot零向量归一化实测返回有限零向量。鸟蝶7个未初始化可见槽的发布顺序已修，16项CPU及1000帧检查通过，和用户破面的因果关系未证明；不据此批量替换有效几何。异常现场隔层导出仍是关键证据。
>
> **冲突取值**：Stage I稳态300屋Life均值<.70ms/p95<.90ms，品质回调<.8ms、单屋显示<1ms；Stage X总体Life均值<.75ms，主帧p95<7.5ms、音频CPU<.4ms。心愿每15s最多2枚，居民回应停留.6s；二级圆章距主坞16px。五线谱常驻高度44px，主入口3枚（手记/典藏/手札），地标从手记展开进入；默认画面可见世界≥88%，上下文展开仍≥85%。9工具保持现有快捷键。Schema18已存在，新字段按可选Schema19扩展，旧1～18均兼容。
>
> **文档矩阵**：[22空间UI](22_去GPT化空间UI与触觉交互规范.md)、[23声学与共生](23_声学涌现与玩家城市共生系统规范.md)与[施工看板](../PROJECT.md)。技术定位继续用[21架构](21_新城创作切片.md)、[参考索引](参考索引.md)，玩家操作用[快速开始](Demo快速开始.md)。不增加逐轮报告型设计文档。


文档定位与最高施工授权：

适用工程基座：Godot 4.7.2 Compatibility（1440×900 / 1024×768，主场景 res://scenes/city_creation.tscn，主控 scripts/ui/city_creation_demo.gd，存档向下兼容 Schema 1~17 并平滑扩展至 Schema 19）。

核心使命：本文档承接已完成的 Phase 1～11 基座、Phase 12 性能收口及上一份《注意力管理与生成式音乐涌现蓝图》，回答**“接下去要写什么文档、继续做什么设计与施工、如何让玩家与城市系统深度交互共创、如何彻底洗脱 GPT/网页后台式 UI 感，并将项目推向真正耐玩、精致、完整的独立游戏精品”**。

行业设计标杆：

触觉玩具感与零表单 UI：Oskar Stålberg《Townscaper》的无干扰玩具化交互、《Tiny Glade》的上下文感知建筑化学反应与极简笔刷圆盘；

空间化与叙事化界面（Spatial & Diegetic UI）：Lorenzo Ardeni 的游戏 UI 四象限（Diegetic / Spatial / Meta / Non-Diegetic）法则 与 Ahmed Salama 的“极简 HUD 悖论与渐进式信息披露”原则；

通感反馈与程序化音序：Rich Vreeland (Disasterpeace) 在《Mini Metro》中的音序节流与动态包络设计、水口哲也在《Rez》与《Tetris Effect》中的微/宏观通感隔离与“The Zone”心流释放机制；

轻策略邻接与长线重玩：GrizzlyGames《ISLANDERS》的极简邻接协同循环 与 《Dorfromantik》的微任务闭合及长链路延伸激励；

引擎级丝滑交互与混音：Godot 4 Tween 弹簧过渡动画系统 与 Godot 4 Audio Buses 动态滤波及侧链混音。

## 第一章：全局盘点——接下去要写什么文档？当前还缺什么才能成为“真正的精品游戏”？

### 1.1 接下去的文档体系规划（严禁重回 46 份碎片文档，确立“1+3”精品收口文档矩阵）

在之前的清理中，仓库已成功将 37 份历史碎片文档归档至 废弃/。为了保证施工 AI 在未来数十轮长周期开发中上下文高度集中、契约唯一、绝不精分，接下去不需要也不允许新建零散的单轮考据笔记，而是确立以下 “1 主 + 3 专”的核心文档架构：

文档路径

动作（新建 / 升级 / 合并）

核心职责与施工关系

1. 文档/code_artifact.md  (唯一最高总纲)

升级并合入本文档

项目的唯一最高设计、交互、音乐与施工总蓝图。原 Phase 1～11 已验收主体转入“基座契约”，正文升级为本文档的 【第二代十阶段精品化施工路线（Stage I ～ Stage X）】。

2. 文档/22_去GPT化空间UI与触觉交互规范.md  (即本文档第三、四章)

新建（或直接以本文档对应章节落地）

替代旧版充满表单感的 UI与全量游戏文案手册.md 布局契约。规定世界空间悬浮罗盘（Spatial Popover）、底部弦槌气泡坞、右上日晷音叉仪、左上五线谱心流条、程序化矢量图标（_draw()）与弹簧物理动画的精确像素与代码规范。

3. 文档/23_声学涌现与玩家城市共生系统规范.md  (即本文档第五、六章)

新建（合并上一份音乐与注意力蓝图）

规定四模态注意力混音、16槽微拍错峰矩阵、4×3乐句动机涌现、五大声学和弦BUFF、建筑三档性格调音、居民头顶心愿气泡、屋顶刮奏玩具、指挥家巡游编排与四时微气候的完整公式与数据契约。

4. PROJECT.md & AI_START_HERE.md  (施工状态看板)

同步更新看板条目

保持 < 15KB 高信噪比，将 Phase 12 收口项与本文档的 Stage I ～ Stage X 设为接续施工看板。

### 1.2 当前项目现状深度体检：距离“好玩、耐玩、精致的完整游戏”还有哪四大断层？

通过全面审查当前仓库（含 PROJECT.md、scripts/ui/、scripts/world/、scripts/visual/、scripts/audio/），当前项目的 3D 几何底座与大城性能已经非常扎实（80×80m 画布、四时代建筑、六大地标、有轨电车、300屋 Life 均值 0.78ms 均已就绪），但仍存在以下 四大关键断层：

断层维度

现状代码与表现诊断

为什么影响品质感与可玩性？

本蓝图的根治方案

1. UI 呈现强烈的“GPT/网页后台卡片风”

valley_ui_theme.gd + city_creation_paper_hud.gd + city_creation_demo.gd（第 384～880 行）：屏幕四角塞满矩形 PanelContainer，内部全是原生 OptionButton 下拉菜单、CheckButton 勾选框、LineEdit 输入框、GridContainer 文字按钮墙和长段说明文字。

玩家像在操作一个“ERP 网页管理后台”而非把玩一座充满诗意的音乐微缩河湾；选房改用途时视线被迫从画面中心的 3D 房屋移向右上角 310px 宽的表单抽屉，严重割裂空间沉浸感。

## 第三章：彻底重构为“去表单化、世界空间就地交互 + 触觉画具坞”（砍掉所有下拉框与右侧大抽屉，改用跟随 3D 建筑的弧形世界罗盘、底部二级气泡圆章与自定义 _draw() 矢量徽章）。

2. 玩家与城市之间缺乏“实时把玩与双向回应”

目前玩家的操作只有“建房、画路、在表单里点按钮改角色”，建好后只能被动旁观居民走路；居民的需求藏在需要按 L 弹窗阅读的纯文本账本 city_creation_ledger.gd 里。

城市缺乏“生命感”与“玩具感”——玩家不知道哪户人家正在期盼什么，也无法在日常漫游中用手拨弄城市、调节建筑脾气或指挥庆典路线。

## 第四章：新增五大“玩家-城市共生交互系统”（任意时刻屋顶刮奏/拨风铃、屋顶悬浮微缩心愿气泡、工坊三档节奏性格调音、手绘庆典巡游路线、四时声学微气候）。

3. 音乐与策略深度尚未形成“扩建与重开闭环”

city_creation_music.gd 仍受困于 3.0s 首拍抢槽丢音与 24s 固定长轨死循环；city_creation_prosperity.gd 缺乏跨区协同与区域饱和机制。

玩 5 分钟和玩 50 分钟听到的背景旋律几乎一样；所有建筑堆在一个街区就能通关，没有动力去跨河、上高地造新街区，也没有开下一把的新鲜感。

## 第五章：实装 16 槽微拍量化器、4×3 动态动机矩阵、五大声学和弦 BUFF、地标邻接增幅圈与 6 大开局声学地貌种子。

4. Phase 12 遗留工程与画面瑕疵尚未完全收口

PROJECT.md 记录：① 小河湾偶发“黄/品红/蓝巨大彩色面”尚未根除；② 远端生产/送装到期结算与品质刷新偶发 5.7ms 尖峰；③ 石基/路面接缝与草簇过渡仍有生硬处。

偶发的巨大彩色破面会瞬间破坏箱庭美感；大城编辑尾帧尖峰会影响拉路与刷地形的丝滑跟手度。

## 第二章：先做工程与画面品质顽疾根治（Quality First），在绝对稳固的基座上推进 UI 与玩法升级。

## 第二章：质量优先——现有工程顽疾根治与画面接缝精修施工规范

在展开新系统与 UI 重构前，第一优先级是消平现有代码中的渲染缺陷、性能尖峰与几何接缝。

### 2.1 根治“小河湾偶发黄/品红/蓝巨大彩色面”渲染 Bug

根据 PROJECT.md 线索（“用户补充起点是只有几屋的小河湾，巨大黄/品红/蓝面”），我们在 scripts/visual/ 中排查出导致 OpenGL Compatibility 后端出现全屏彩色巨面的 三个根本代码隐患 及修复方案：

隐患源 A：MultiMesh 实例未初始化或隐藏实例传入了零缩放 / NaN 变换矩阵

在 Godot 4 Compatibility (GLES3) 渲染器中，当 MultiMesh.instance_count 大于实际写入的有效实例数，或隐藏冲突植被/卵石/彩旗时若存在未初始化的 Transform3D 或未初始化的 custom_data / color（内存中残留随机大浮点数 > 1e10 或 NaN），顶点着色器会将其变换为横跨整个视锥的巨大彩色三角形（呈现纯黄 #ffff00、品红 #ff00ff 或纯蓝 #0000ff）！

刚性修复规范（city_creation_meadow.gd, city_creation_foliage.gd, city_creation_path_pebbles.gd, city_creation_bunting.gd）：

凡是分配 MultiMesh.instance_count = N 后，必须设 multimesh.visible_instance_count = valid_count，或者对所有 [valid_count .. N-1] 槽位显式写入退化零矩阵 Transform3D(Basis.from_scale(Vector3.ZERO), Vector3(0, -1000, 0)) 及 Color(0,0,0,0)；

在写入任何 set_instance_transform(i, xform) 前，增加安全断言防护：

static func safe_set_instance(mm: MultiMesh, index: int, xform: Transform3D, col: Color = Color.WHITE, custom: Color = Color.BLACK) -> void:
    if not xform.origin.is_finite() or not xform.basis.x.is_finite() or xform.basis.determinant() == 0.0:
        mm.set_instance_transform(index, Transform3D(Basis.from_scale(Vector3.ZERO), Vector3(0.0, -500.0, 0.0)))
        return
    mm.set_instance_transform(index, xform)
    if mm.use_colors: mm.set_instance_color(index, col)
    if mm.use_custom_data: mm.set_instance_custom_data(index, custom)



隐患源 B：小河湾短道路/急弯处 SurfaceTool 法线归一化除零（Zero-Length Tangent/Normal -> NaN）

在小河湾起点只有几屋、玩家轻轻点画极短道路或急弯（两个采样点距离 < 1e-4）时，city_creation_path_edge.gd、city_creation_road_earthworks.gd 或 city_creation_resonance.gd（音弧リボン _ribbon()）计算切线 (p[i+1] - p[i]).normalized() 或叉积法线时，若两点重合会产生 Vector3(NaN, NaN, NaN)。在 Compatibility 渲染器中，带 NaN 法线或顶点的三角形会被光栅化为覆盖半个屏幕的纯色/品红色块！

刚性修复规范：

在 SurfaceTool 提交顶点前，所有切线 계산统一使用安全归一化：

static func safe_dir(a: Vector3, b: Vector3, fallback: Vector3 = Vector3.FORWARD) -> Vector3:
    var d := b - a
    var len_sq := d.length_squared()
    return d / sqrt(len_sq) if len_sq > 0.000001 else fallback



隐患源 C：草地/水面距离场纹理在首次小河湾加载时未完成同步即绑定给 Shader

确保 water_field、contact_field 与 grass_mask 在 ImageTexture.create_from_image() 前执行 image.fill() 初始化，杜绝 VRAM 未初始化垃圾像素被草地顶点着色器读取为超大位移。

### 2.2 Phase 12 远端经营到期结算与品质回调尖峰收口（稳态 Life < 0.75ms）

远端面包坊/制琴坊/画廊/钟表坊的“事件堆到期结算 (Production Event Heap)”：

目前视野外居民移动已接入 city_creation_citizen_schedule.gd 的截止时间堆，但远端工坊的库存生产与送装完成仍存在逐帧扫描。

改造方案：当工坊及其服务目标住宅均处于第 4 温区（视野外静默区，acoustic.weight == 0）时，工匠出发送装直接计算路网路径长度 $L_{	ext{route}}$ 与真实步速 $v$，向 _citizen_schedule 注册一条 due_time = life.time + L_{	ext{route}} / v 的到期事件。期间 0 逐帧开销；若玩家在 due_time 前将镜头移回该区域，调用 flush_citizen() 按当前时间插值恢复工匠在路上的精确三维坐标与朝向！

品质升级回调分帧摊平（消除 4.16ms 单帧尖峰）：

在 city_creation_life.gd 中，_quality_timer 每 0.5s 触发 Quality.refresh() 时，每次最多只提交 1 栋 达到晋升条件的房屋进入 quality_callback 刷新装饰批次，其余排队在下一帧处理，将单帧品质回调开销严格锁死在 < 0.8ms。

### 2.3 三维美术接缝精修（石基嵌地裙边、桥头接坡与跨风貌过渡）

高地毛石台基（city_creation_highland.gd）与斜坡路面的无缝嵌合：

将毛石台基底部再向下深埋 0.22m，并在台基与草地交界处派生一圈宽 0.14m、带顶点透明渐变的碎石压边裙（Skirt Blend），彻底消除斜坡建房时石基边缘的生硬锯齿线。

跨时代街道过渡拱门（city_creation_era_streets.gd）：

在不同 era_theme 街坊交界处的 2.0m 路面渐变带两侧，自动补充 2 株修剪灌木与暖光界石，使古典鹅卵石路向文艺复兴花岗石板或现代透水石板的过渡浑然天成。

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

在右上角【日晷星盘】旁增加一枚【四时风物印章】，支持一键切换或随 24 秒大循环自然轮转 4 种极具氛围感的箱庭微气候（纯 Shader + MultiMesh 粒子 + 环境声床混音实现，CPU 开销 < 0.15ms）：

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

## 第五章：面向施工 AI 的十阶段超长持续施工路线图（Stage I ～ Stage X）

为了让你和施工 AI 能够直接拿着这份文档连续施工数十轮直至游戏完全成熟，我们将上述所有工程除虫、去 GPT 化 UI 重构、音乐涌现重构、五大深度交互系统与重玩体系，拆解为 10 个边界清晰、每阶段都可独立运行测试与实窗截图验收的施工阶段（Stage I ～ Stage X）：

### Stage I：渲染顽疾根治与 Phase 12 远端结算终极收口（质量基线保卫战）

核心目标：100% 根除小河湾偶发“黄/品红/蓝巨大彩色面”缺陷，完成远端工坊生产/送装的事件堆结算，将 300 屋大城 Life 均值压入 < 0.70ms、单屋品质回调尖峰压入 < 1.0ms。

涉及文件：

scripts/visual/city_creation_meadow.gd, city_creation_foliage.gd, city_creation_path_pebbles.gd, city_creation_bunting.gd

scripts/visual/city_creation_path_edge.gd, city_creation_road_earthworks.gd, city_creation_highland.gd

scripts/world/city_creation_life.gd, city_creation_citizen_schedule.gd

具体施工步骤：

在所有使用 MultiMesh 的视觉模块中，接入 safe_set_instance() 边界检查，拒绝任何非有限数（!is_finite()）或退化矩阵写入 GPU，并显式设置 visible_instance_count；

在所有道路切线、护坡挡墙与音弧几何生成处接入 safe_dir()，过滤距离 < 0.001m 的重合采样点，彻底消灭 NaN 法线破面；

为 city_creation_highland.gd 的毛石高地基底部增加 0.22m 深埋与碎石过渡裙边；

在 city_creation_life.gd 中将 _quality_timer 的品质晋升重批改为每帧最多处理 1 栋房屋的分帧队列，并将视野外工坊送装接入 _citizen_schedule 到期事件结算。

验收标准：运行 tools/check_creation_large_town_live.gd 与小河湾快速连点/极短拉路压力测试，连续 1000 帧零破面、零 NaN 警告，300 屋 Life p95 < 0.90ms。

### Stage II：注意力混音器与 16 槽微拍错峰量化引擎落地（告别首拍吵杂与吞音）

核心目标：解决 3.0s 小节首拍 6 类短音抢麦拥堵与 skipped += 1 丢音问题，实装四模态注意力状态机与指尖 16 分音符琶音队列。

涉及文件：

新建 scripts/audio/city_creation_attention_mixer.gd

修改 scripts/audio/city_creation_music.gd, scripts/audio/city_creation_spatial.gd

具体施工步骤：

按《注意力与音乐涌现蓝图》6.2 节代码创建 CityCreationAttentionMixer，定义 SLOTS_PER_BAR = 16（每微槽 0.1875s）与 EVENT_SLOTS 映射表；

将 city_creation_music.gd 中的 _cafe_at_phrase、_travel_at_phrase、_tower_at_phrase、reply.at_phrase、_signature_at_phrase、bakery_cues.at_phrase 统一改为向 attention_mixer.schedule_event() 注册微拍槽位；

将 play_house() 连拖建房拨弦改为推入 attention_mixer.enqueue_pluck_arpeggio()，按 0.1875s 网格依次弹出五声音阶琶音；

在 MODE_SCULPTING（拖拽建房/拉路/刷地形期间）自动对背景长轨施加 -4.2 dB 柔和侧链压限（Sidechain Ducking）。

验收标准：新建 tests/test_city_creation_attention_mixer.gd，验证同一小节内触发茶座+面包+跨区问答+过桥+电车时，全部错峰在 Slot 4 / 6 / 8 / 10 / 12 依次清晰播放，skipped == 0。

### Stage III：生成式音乐涌现引擎与四大时代主奏声部解放（真正的一城一曲）

核心目标：打破 24 秒单一旋律死循环与时代音轨 -21dB 锁死，让视野内的高地海拔、庭院/环岛围合度、四大时代占比与建筑品质直接驱动多声部配器与关系调色彩流转。

涉及文件：

新建 scripts/audio/city_creation_harmonic_emergence.gd

修改 scripts/audio/city_creation_music.gd, scripts/audio/city_creation_theme_pcm.gd

运行 tools/bake_creation_music_bank.gd

具体施工步骤：

创建 CityCreationHarmonicEmergence，每乐句统计视野内（含内联区）的 era_weights、style_weights、high_elevation_weight 与 high_quality_weight；

修改 city_creation_music.gd 的 target_gain_db()，当镜头聚焦于文艺复兴（renaissance）、蒸汽钟表（clockwork）或现代生态（modern_eco）街区时，将其对应音轨平滑推升至 -10.5 dB 主奏电平，不再被田园 wood 轨掩蔽；

在 city_creation_theme_pcm.gd 中为各主题声部补充可按街坊拓扑密度与轮次切换的轻盈织体与复调华彩句段，并重新烘焙声部缓存库。

验收标准：在 四库共鸣交响大城样例.json 中平移镜头掠过四大时代街区，实测每个街区的主奏乐器（木吉他→羽管键琴/双簧管→立式钢琴/圆号→毡音钢琴/颤音琴）在 3 秒句界内丝滑切换，高地台地自动浮现高空木管延音。

### Stage IV：去 GPT 化 UI 重构（上）——程序化矢量图标库、左上五线谱心流条与右上日晷音叉仪

核心目标：砍掉左上角 284px 双列 6 按钮网格卡片、右上角 6 按钮文字条与左下角 284px 说明卡片，释放 85% 以上纯净画面视野。

涉及文件：

新建 scripts/ui/city_creation_vector_icons.gd

新建 scripts/ui/city_creation_score_ribbon.gd

新建 scripts/ui/city_creation_sundial_hud.gd

修改 scripts/ui/city_creation_paper_hud.gd, scripts/ui/city_creation_demo.gd

具体施工步骤：

实现 CityCreationVectorIcons，用抗锯齿 draw_arc / draw_polyline / draw_circle 绘制 9 大工具、8 大用途、日晷三态与音叉图标；

用 CityCreationScoreRibbon 替换左上角 PaperHeader，实时绘制 5 根随节拍波动的铜金五线谱弦与火漆印章圆钮；

用 CityCreationSundialHUD 替换右上角 Actions 文字按钮行，实现可旋转切换晴昼/夕照/星夜的黄铜日晷盘与音叉/漫步/明信片圆章；

移除左下角固定的 help_panel 大方框，改为底部一行无框半透明键帽提示（WhisperKeycapBar）。

验收标准：实窗截图对比，四角不再有任何大块矩形文字表单，左上五线谱随音乐实时波动，右上日晷点击平滑旋转切换昼夕夜。

### Stage V：去 GPT 化 UI 重构（下）——世界空间建筑罗盘与底部二级圆章气泡坞（零下拉菜单！）

核心目标：彻底消灭全游戏所有的 OptionButton 下拉菜单与右侧 310px 固定表单抽屉，实现点击 3D 房屋就地弹出世界空间罗盘、点击底部工具就地弹出二级圆章气泡！

涉及文件：

新建 scripts/ui/city_creation_spatial_popover.gd

新建 scripts/ui/city_creation_tactile_dock.gd

修改 scripts/ui/city_creation_demo.gd, scripts/ui/city_creation_terrain_brush.gd

具体施工步骤：

实装 CityCreationSpatialPopover：选中房屋时通过 camera.unproject_position() 将半圆印章罗盘锚定在 3D 房屋上方，支持一键点选用途印章、一键轮换样式/色板、一键切换声学性格与发起演出；隐藏原右上角 place_panel；

实装 CityCreationTactileDock：重绘底部 9 大工具键，为其绑定悬停弹簧上浮（Tween.TRANS_BACK）；当选中道路、植被、水岸、街坊、地形时，直接在对应工具键正上方展开二级圆章气泡链（替代原 road_panel、vegetation_panel、water_panel、district_panel、terrain_brush.panel 中的下拉框）；

保留原有节点名称或信号代理，确保现有 49 项 UI 自动化回归测试平滑迁移通过。

验收标准：在实窗中操作全部 9 大工具与房屋属性修改，全程无需把视线移向屏幕右上角，无需点击任何下拉菜单，所有气泡与罗盘均带弹簧物理动画。

### Stage VI：玩家-城市深度共生交互（上）——全状态屋顶刮奏玩具与建筑三档声学性格调音

核心目标：让整座城市在任何时刻都能像八音盒/竖琴一样被鼠标拨弄回应，并允许玩家像调音师一样调节每座功能建筑的劳作与音乐律动性格。

涉及文件：

修改 scripts/ui/city_creation_demo.gd, scripts/visual/city_creation_touch.gd

修改 scripts/world/city_creation_bakery.gd, city_creation_workshop.gd, city_creation_cafe.gd, city_creation_music.gd

具体施工步骤：

在 city_creation_demo.gd 中扩展刮奏手势：按住 P 或在浏览态下按住鼠标侧键/空格左键划过屋顶、水面睡莲、森林树冠与拱桥时，依次触发五声音阶琶音、水面径向波纹、树冠惊鸟微风与房屋弹性轻跳（animate_house_bounce）；

当某栋房屋被拨响时，通知 city_creation_life.gd 让周围 8m 内可见居民驻足 0.6s 并做欢呼跳跃；

为房屋字典增加可选字段 "temperament": String（"allegro" 轻快快板 / "andante" 温润行板 / "largo" 深邃广板），在 bakery / workshop / cafe / music 中按所选性格联动调整生产耗时、单炉产出倍数与微拍音高/延音包络。

验收标准：按住 P 划过一排街屋听见流畅琶音并看见屋顶波浪起伏；切换面包坊为“深邃广板”后单炉产出翻倍并奏出低八度温暖延音。

### Stage VII：玩家-城市深度共生交互（下）——屋顶心愿气泡、手绘巡游编排与四时声学微气候

核心目标：让居民与工坊通过头顶微缩气泡主动向玩家表达心愿，支持手绘盛典接力路线，并加入春花、夏雨、秋叶、夜萤四时声学微气候。

涉及文件：

新建 scripts/ui/city_creation_wish_pins.gd

修改 scripts/visual/city_creation_environment.gd, scripts/audio/city_creation_ambience.gd, scripts/world/city_creation_concert_relay.gd

具体施工步骤：

创建 CityCreationWishPins：每 15s 扫描视野内未接路民居、缺水面包坊、缺树制琴坊或未连线异风貌街坊，最多同时在 2 栋 建筑屋顶上方显示可点击的微缩心愿圆章（🌉 / 💧 / 🌲 / 🍵 / ♫）；点击气泡直接帮玩家切好对应工具并高亮目标区域；

在 city_creation_environment.gd 与 city_creation_ambience.gd 中增加四时微气候切换（spring_breeze / sun_shower / autumn_gold / starlight_fireflies），联动花瓣/细雨涟漪/落叶/流萤 GPU 粒子与水车/茶座/工坊季节加成；

在发起庆典接力时，支持玩家按住鼠标依次划过多个演奏庭自定义接力顺序。

验收标准：实窗观察到缺水面包坊浮现 💧 气泡，点击气泡挖出池塘后气泡化作金色音符消散并触发增产；切换四时微气候验证视觉与声床变化。

### Stage VIII：五大声学和弦 BUFF、地标邻接超级增幅圈与跨区域开拓激励落地

核心目标：落地《注意力与音乐涌现蓝图》第四章的策略深度体系，彻底解决“单区域无脑摊大饼”，给玩家极强的跨河、登高造新街区动力。

涉及文件：

新建 scripts/world/city_creation_synergy_buffs.gd

修改 scripts/world/city_creation_prosperity.gd, scripts/world/city_creation_signatures.gd, scripts/ui/city_creation_score_ribbon.gd

具体施工步骤：

实装 CityCreationSynergyBuffs，实时评估五大声学和弦（晨光田园三和弦、高地钟楼五度共鸣、文艺复兴赋格四重奏、蒸汽花房圆舞曲、跨河古今交响对位）；

为 6 座地标名胜实装 14m ~ 18m 局部邻接超级增幅圈（如大水车上下游 18m 水力工坊带 +35%、音乐院同街坊书院/制琴坊产量 ×2、电车总站轨街黄金走廊）；

实装【跨区开拓倍增器】（每多开辟一个有住户的异风貌街坊并连线，全城共鸣与工坊效率递增 +12%），并在左上角 ScoreRibbon 中点亮发光和弦徽章。

验收标准：新建 tests/test_city_creation_synergy_buffs.gd 全部通过；在河两岸建立不同时代街坊并牵起音弧后，左上角点亮【🎵 跨河古今交响对位】徽章且工坊效率显著跃升。

### Stage IX：“再来一把”重玩引擎——六大声学地貌种子、时代晋升乐章变奏卡与留声机图鉴

核心目标：构建单局 35 分钟四乐章心流与局外重玩体系，让每一把新开局都有不同的地形挑战、调式音阶与流派构筑。

涉及文件：

新建 scripts/world/city_creation_biome_seeds.gd

修改 scripts/world/city_creation_state.gd, scripts/world/city_creation_serializer.gd (Schema 18/19), scripts/ui/city_creation_gallery_panel.gd, scripts/ui/city_creation_journal.gd

具体施工步骤：

创建 CityCreationBiomeSeeds，在 Ctrl+O 作品收藏面板顶部新增 【🌱 开启新河湾 · 选择声学地貌】 入口，提供 ① 晴翠双岸（D大调）、② 叠翠千阶（G吕底亚高地调式+石阶琴键）、③ 烟水群岛（B多利亚水岸调式+双倍汀步/桥加成）、④ 林间秘境（A大调森林和声）、⑤ 星夜流光（F#小调夜曲）、⑥ 随机每日共鸣 六大开局种子；

当本局解锁第二、三、四时代时，弹出二选一 【街坊乐章特化铭牌 (score_modifiers)】（如《连拱市集章程》 vs. 《复调学院章程》）；

在 Serializer 中以可选字段保存 biome_seed 与 score_modifiers，确保旧 Schema 1~17 存档 100% 兼容。

验收标准：测试以“叠翠千阶”与“烟水群岛”开新局，验证初始河湾地貌、主调式音阶与专属地貌 BUFF 正确生效，存档与撤销完全一致。

### Stage X：终极打磨、全量自动化验证与《共鸣之城》大师典藏版收口

核心目标：完成全套单元测试、实窗 GPU 截图检验、UI 多分辨率（1440×900 与 1024×768）自适应校验，并更新 PROJECT.md 与 AI_START_HERE.md。

具体施工步骤：

运行全部新增与既有测试脚本，确保 300 屋大城 + 新空间 UI + 生成式音乐涌现下，主线程帧时 p95 < 7.5ms、Life 均值 < 0.75ms、音频 CPU < 0.4ms；

使用 tools/sync_github_main.py 校验跟踪树体积严格 < 100MB，完成最终交付。

## 已验收四库基座契约（Phase 1～11）

- Phase1：7叶碗状草毯、暖阳与昼/夕/夜三态；Phase2：自适应高地基座、建筑不再压回零米。
- Phase3：顺坡道路、坡度>.22自动石阶、级高≤.12m、横坡>.35m挖填挡墙；地形/碰撞/导航共用实际高度。
- Phase4：原位重刷升级、灯街/林荫街/轨街、喷泉环岛；新宽街2.10m，旧2m作品保原宽、显式重刷才扩宽。
- Phase5：四温区声场、个体短音与跨区连线；Phase6：真实茶聚/问答解锁文艺复兴与真实画师送装。
- Phase7：Lv1～5真实品质履历、门饰/风铃/画廊/双倍余韵与六地标；Phase8：汀步、双拱桥、睡莲、两节点自然声。
- Phase9：蒸汽孟莎顶、钟表匠、真实采购/茶聚/赴演电车、30m轨街总站；Phase10：现代悬挑/绿墙/玻璃连廊与24秒四时代盛典。
- Phase11：80×80m、远山河道延伸、2m时代路面过渡与界门、围院/实际环岛顺时针逐拍轮唱，跨24秒循环不重置。
- 固定12长轨+4短槽/6声像总线，另2自然声节点；共用PCM绝对时钟，不按建筑增设Player，不重启传输来刷新目录。银行可本地重建，不纳入GitHub。
- State为权威真值，预览不落存档，提交可撤销/重做；线程只读脱离主城的快照，GPU/节点发布留在主线程。个人作品不参与施工写入。
- 可选Schema18已包含赠粮/跨区履历。新性格、地貌种子、乐章铭牌必须经State事务与Serializer验证，不能用新空值重写旧档。
- 三角闭环道路端头转弯与剧场石台/栈道同高重叠已有修复及CPU/实窗证据，继续按实景验收；彩色大面仍未定位。

各Phase已完成验收与未完成的Phase12见PROJECT。旧蓝图的完整算法/阈值/原文在Git备份标签与本地归档；本节与现行专题为当前契约。
