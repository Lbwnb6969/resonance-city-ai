# 《共鸣之城》AI 快速启动入口

## 1. 核心代码架构速查
- **主场景与入口**：`res://scenes/city_creation.tscn` → `scripts/ui/city_creation_demo.gd`
- **世界状态与存档 (`State`)**：`scripts/world/city_creation_state.gd`（含 `stroke`, `house_stroke`, `road_intent`, `junctions`, `passage`, `frontage`, `terrain`, `terrain_protection`, `courtyards`, `towers`, `growth`, `collection`）
- **市民生活与经营 (`Life`)**：`scripts/world/city_creation_life.gd`（含 `network`, `bakery`, `workshop`, `cafe`, `matinee`, `concert_relay`, `travel`, `district_links`）
- **3D 渲染与美术 (`Renderer`)**：`scripts/visual/city_creation_renderer.gd`（含 `meadow`, `foliage`, `shore`, `water_field`, `contact_field`, `terrain_surface`, `outcrops`, `building_context`, `gables`, `tower`, `house_styles`, `terrace_canopy`, `bakery_smoke`, `craft`, `cafe`, `courtyards`, `path_edge`, `path_pebbles`, `resonance`, `mesh_batcher`, `budget_rebuild` 及 `scripts/visual/shaders/*.gdshader`）
- **音乐与四温区视野声场 (`Music`)**：`scripts/audio/city_creation_music.gd`（含 `theme_pcm`, `reply_pcm`, `arrangement`, `district_reply`, `spatial`, `acoustic_field`）
- **Godot 引擎路径**：`D:/GODOT/Godot_v4.7.2-stable_win64_console.exe`

## 2. 十二阶段续作入口

按 [主蓝图](文档/code_artifact.md) 第十章与 [PROJECT](PROJECT.md) 看板顺序施工。旧十阶段只作历史编号：旧 1→新1，旧2→新2+3，旧3→新4，旧4→新5，旧5→新6，旧6→新7，旧7→新8，旧8→新9，旧9→新10，旧10→新11+12。不要重做四时代与六地标主体。

Phase 1～11 已完成（Phase 8沿用已验收的水生态）。Phase11围院/环岛顺时针每拍轮唱通过19项CPU、29项实窗；实际40拍跨24秒循环不重置，16屋p95 5.594ms，复用原音池与窗光。当前 Phase 12：已解除全局电车锁，视野外直路按下一拐点/桥拱侧阈值截止时间堆和按钟推算；300屋带电车实窗画面p95 7.116ms，Life均值.780ms，已达到.8ms均值目标；隐藏工人的生产/送装也已加入截止时间调度，继续收口旗舰Life均值和编辑尾帧；127屋四时代六地标旗舰大城已可从作品收藏首卡打开。具体差距与验证在 PROJECT。

## 最新增量蓝图：注意力、音乐涌现与深度玩法

用户指定 [code_artifact -new](文档/code_artifact%20-new.md) 第6.5节 Stage A→D 为当前接续路线；十二阶段已完成主体保留，Phase12性能收口继续有效。Stage A 已接入四态注意力、0.1875s/16槽错峰、最多5音指尖队列与建造背景-4.2dB；茶座/烘焙/问答/过桥分别在4/6/8/12槽播放，电车铃10槽、钟声0槽。Stage B已接入视野时代主奏、45%单一伴奏与八类器乐三套烘焙织体；下一步做四套和声色彩和音频线程CPU实测；随后Stage C协同与地标、Stage D地貌种子/乐章卡/Schema18。原设计中的默认参数与示例代码须对齐现有有效API，使用本作实测验收。

## 3. 当前关键入口

- 海拔/坡路：`city_creation_terrain_protection.gd`、`city_creation_road_heights.gd`、`city_creation_highland.gd`、`city_creation_frontage.gd`、`city_creation_road_earthworks.gd`。新宽街 2.10m，旧 2.0m 作品保原宽；重刷才扩宽。
- 拉路：`city_creation_road_gesture.gd` 固定旧曲段并维护活动末端，UI按像素跟手；`RoadIntent` 的soft模式渐进吸附，松手用none模式校验已显示点，避免二次吸附。`city_creation_road_draft_field.gd` 仅给草/预览材质提供临时4cm场，取消/正式发布时清除；旧存档和默认State道路API保持。
- 植物宫：`city_creation_clockwork_landmarks.gd` 三连拱与真实房格拾取，`city_creation_conservatory.gd` 独立夜光材质；Meadow在8m范围为现有花簇添一簇，缓存未增益原件。预算发布同步旧/新花环和材质所有者，搬移/回收/撤销不留残花。
- 时代/品质/地标：`city_creation_eras.gd`、`city_creation_quality.gd`、`city_creation_signatures.gd`。作品兼容 Schema 1～17；新品质履历保存prestige，旧四字段等级和单层磨坊继续有效。Lv.2步速与钟塔增益相乘；Lv.5余韵按房屋翻倍。
- 路网：`city_creation_route_solver.gd` 使用独占Godot原生队列，精确边权和三维路点保留，等长路线允许换一条合法街道；Network后台预备茶座实际街口至三座椅的双向路线，提交后重绑原城，首次赴茶无需重建局部可见图。
- 调度：先读参考索引的CS2车辆分组生产端/插值与本作适配落点；全局电车锁已解除；`city_creation_citizen_schedule.gd`按截止时间唤醒隐藏长路段，`citizen_motion`按生活时钟给出当前坐标。桥拱仍沿用原观察器，按侧阈值唤醒；回镜前结清跨越段。平高道路桶支持覆盖快查，28471次高度对照一致。库存只刷货架，送装/品质按房屋增量刷新；彩旗挂点与穿墙查询使用空间桶。鸟蝶/花盆门口与彩旗绳下净空按几何缓存，普通奖励只更新相关消费者。`city_creation_worker_lod.gd`调度隐藏工人的移动/烘焙/制作/安装/休息；库存、暂停、加成变更及时唤醒，回镜/编辑/存档结清旧面进度；原经营状态机保留。待处理品质/生态余下尖峰和更大规模经营压力。缺失证据可用REA继续定向分析本地CS2文件；原件原位保留，大型导出不上传。
- 大城：`city_creation_citizen_motion.gd`、`city_creation_detail_lod.gd`、`city_creation_tiled_field.gd`、`city_creation_budget_rebuild.gd`。300屋夹具用于压力测试；`数据/四库共鸣交响大城样例.json` 为首张可选旗舰城，127屋/208人口/6地标/245株植物，单一连通路网、高地石阶、电车环线、9条空中连廊；14CPU/23实窗通过，104人真实赴演与24秒八乐句完整结算。自动邀演已改查路网连通组（88项回归），消除约半秒重复求路；原生队列100条冷路径与独立最短距离一致（最高.246ms），茶座三席进出路径在载入/后台准备，15项上下文和60项实际茶聚回归通过；旗舰最新600帧Life均值.948ms/最高7.789ms，画面p95 7.382ms/最高28.820ms；库存/送装增量刷新已消除27ms工坊扫描，品质复用发布的门面/连拱输入。生态控制器`city_creation_ecology.gd`按花源、节庆资格及花盆等级独立更新；一次实际购粮仅更新花源与花盆，经营生态最高3.088ms，彩旗根不动。56项冷暖网格/挂点/花源/移除锚点与撤销对照、15项旗舰实窗通过；品质回调6.755ms。隐藏工人移动/工作休眠3543/2423次；20项两分钟与完整模拟对照含真实画作/钟表送装通过。旗舰Life .8ms与编辑尾帧仍待收口。轻经营采用分档模拟：视野内完整表演，近邻错峰低频推进，远端普通服务按时/按街坊汇总结算；音乐事件保持共享拍点。远端动作可近似，以回镜连续、一次结算、编辑和存档一致验收；详见蓝图第八章第5项，隐藏长路段和工人工作阶段均已按时唤醒，原服务容量、预约和完成顺序保留；继续做规模收口。
- 验证：Godot Compatibility，1440×900；选相关脚本一次CPU/一次实窗，GPU回读检查须运行OpenGL，不能用headless结果替代。不要跑九入口冷启动或整库哈希。
- 画面缺陷：两个同宽道路终端按普通转弯衔接，三角闭环角部不再额外扩口；T/X路口保留。巨大彩色面仍开放；用户记得起点为几屋小河湾，优先从小样例复现。F10保存截图/城镇/相机/生活现场到 `user://render_diagnostics/`，不覆盖个人存档。
- 注意力：`city_creation_attention_mixer.gd`按共享PCM时钟分发微拍；Music执行时重查房屋身份/高度/可见性。长拖房路/地形保持雕刻态；建造时只保留指尖窗光，俯瞰停止新增日常个体短句。面包同街坊6秒合并；静音/换城/演出清空排队，音乐传输不重启。远端重要晋升使用原短音总线1600Hz滤波，普通远端低级晋升静默。核心检查：`tests/test_city_creation_attention_mixer.gd`、`tools/check_creation_attention_live.gd`；录音/截图仅本地。
- 涌现：`city_creation_harmonic_emergence.gd`每3秒按实际焦点屋的时代/高度/品质/临水与当前围院环岛选择配器；几何只在发布目录时准备，经营品质沿原增量接口更新。五田园主题与三新时代共八种主奏，每类三套24秒织体；按城市DNA、绝对乐句与轮次改变排列。`_update_variations`原生WAV短淡出后按共享时钟位置接入新织体，演出用原WAV；原时钟及所有Player节点不替换。25项旗舰实窗与24项注意力实窗通过，Music主线程均值.148ms/p95 .299ms，原生混音线程尚未测得；四调式尚未接入。
- 音乐：12长轨+4短槽/6声像总线，另2自然声节点；PitchPluck按真实house_era选时代乐器，.42秒短音/.6秒共享拍钟窗光，田园仍有五主题；跨时代Reply按实际源风貌选木拨弦/羽管键琴/钢琴/毡音钢琴，田园内部对答保留五主题。银行为12基础长轨+24变奏长轨+307短样本，实际仍只播放12长+4短，`city_creation_bank_cache.gd`读取预编译PCM。GitHub不存可重建的银行二进制；首次启动可后台合成，首次克隆/修改合成源/导出前运行 `tools/bake_creation_music_bank.gd`，旧银行自动移入废弃。
- UI：用户提供的纸本界面已适配到 `scripts/ui/`，文案中心 `city_creation_copy.gd`、四页F1手札 `city_creation_guide_panel.gd`、紧凑折叠头栏 `city_creation_paper_hud.gd`；49项实窗与成长引导回归通过，支持1024×768。`UI/`完整参考副本原位保留，仅本地使用；不要整套替换游戏源码。
- 入口：根三个启动器；Ctrl+O切换18座示范。测试设置 `persistence=false` 与隔离作品库，个人 `user://city_creation_v1.json` 和作品库不改。

第九章的一次性归档此前已完成；现行文档7份（含新版玩法蓝图和UI手册），旧专题/2.5D流水线/原生扩展/一次性冻结对照另存本地 `废弃/主仓库旧体系归档_2026-10-18/`。旧入口原文和本次上传蓝图保存在 `废弃/文档_旧体系归档_2026-10-17/十二阶段入口替换前_2026-10-18/`。只维护当前状态，不积累逐轮流水账。旧阶段日志按旧编号原位保留。

GitHub：`ai-sync/main` 对应 `Lbwnb6969/resonance-city-ai`，交付前用 `tools/sync_github_main.py prepare` / `push` 同步已跟踪文件树并确保main当前文件总量<100MB；保留精选文档/代码/算法和运行资源。完整参考原件保持本地原路径，取消跟踪的大型导出和素材不搬移、不删除；不另建导出仓库。
