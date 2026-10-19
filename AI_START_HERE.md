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

Phase 1～11 已完成（Phase 8沿用已验收的水生态）。Phase11围院/环岛顺时针每拍轮唱通过19项CPU、29项实窗；实际40拍跨24秒循环不重置，16屋p95 5.594ms，复用原音池与窗光。当前 Phase 12：已解除全局电车锁，视野外直路按下一拐点/桥拱侧阈值截止时间堆和按钟推算；300屋带电车实窗画面p95 6.113ms，Life均值.706ms，已达到.8ms均值目标；隐藏工人的生产/送装也已加入截止时间调度，继续收口旗舰Life均值和编辑尾帧；127屋四时代六地标旗舰大城已可从作品收藏首卡打开。具体差距与验证在 PROJECT。

## 最新增量蓝图：注意力、音乐涌现与深度玩法

用户指定 [code_artifact -new](文档/code_artifact%20-new.md) 第6.5节 Stage A→D 为接续路线，保留四库主体与Phase12性能目标。Stage A注意力/16槽错峰与Stage B八种主奏、三织体、四和声及原生混音已验收。当前Stage C：主题生产+25%、异风格连线每多一种+12%、水力带+35%；五类和弦已接入真实采购、送装、步速和工坊产量。六地标增益已接入：圣塔16m配送/返程+30%、音乐院同街坊批量×2和完成问答余韵30→60秒、植物宫14m花海/3.6秒茶聚、磨坊每3炉从库存赠2户面包、总站连通轨街6m商业/工坊直达及对应线路6→24席、水上剧场24秒真实盛典落幕全城品质检定与12秒金波。直达仍实际寻路、步行和上下车，其他线路仍6席；Lv.5继续双倍余韵。赠粮为可选Schema18，旧作品保持原格式。地标事件39项、舞台接缝12项、原剧场10项CPU与24项地标事件实窗通过；51屋落幕5栋晋升，p95 5.571ms。新增跨地形真实问答/电车通勤奖励：2区工坊+25%/B织体，3区服务范围+30%/送装赠30秒余韵/C织体，4区全城Lv.5资格；地形与风貌证据写可选Schema18，重复同一交流不累乘，变更风貌需重新完成交流，断路撤加成。36项CPU含两分钟隐藏工匠对照、41项实窗与小窗通过；127屋复用已发布树木可见性后区域准备1.777ms。T1/T2选址已接入：基础每房间2面包/临水每炉+1，宽林荫街茶聚45秒，高台庭28米/休息45秒，制高点真钟楼本街坊步速+10%，双连拱相通书院送装+40%，轨街钟表坊30米/本区电车+15%且预测同速，实际玻璃连廊或临水音乐厅32米/住宅演后余韵翻倍。相关CPU与实窗见本地选址专精记录；专属声学装饰、和弦/地标音乐和Stage D继续施工，彩色大面仍优先定位。
## 3. 当前关键入口

- 海拔/坡路：`city_creation_terrain_protection.gd`、`city_creation_road_heights.gd`、`city_creation_highland.gd`、`city_creation_frontage.gd`、`city_creation_road_earthworks.gd`。新宽街 2.10m，旧 2.0m 作品保原宽；重刷才扩宽。
- 拉路：`city_creation_road_gesture.gd` 固定旧曲段并维护活动末端，UI按像素跟手；`RoadIntent` 的soft模式渐进吸附，松手用none模式校验已显示点，避免二次吸附。`city_creation_road_draft_field.gd` 仅给草/预览材质提供临时4cm场，取消/正式发布时清除；旧存档和默认State道路API保持。
- 植物宫：`city_creation_clockwork_landmarks.gd` 三连拱与真实房格拾取，`city_creation_conservatory.gd` 独立夜光材质；Meadow在14m范围为现有花簇添一簇，缓存未增益原件。预算发布同步旧/新花环和材质所有者，搬移/回收/撤销不留残花。
- 时代/品质/地标：`city_creation_eras.gd`、`city_creation_quality.gd`、`city_creation_signatures.gd`。作品兼容 Schema 1～18，磨坊首次真实出炉才写可选赠粮台账；新品质履历保存prestige，旧四字段等级和单层磨坊继续有效。Lv.2步速与钟塔增益相乘；Lv.5余韵按房屋翻倍。
- 路网：`city_creation_route_solver.gd` 使用独占Godot原生队列，精确边权和三维路点保留，等长路线允许换一条合法街道；Network后台预备茶座实际街口至三座椅的双向路线，提交后重绑原城，首次赴茶无需重建局部可见图。
- 调度：先读参考索引的CS2车辆分组生产端/插值与本作适配落点；全局电车锁已解除；`city_creation_citizen_schedule.gd`按截止时间唤醒隐藏长路段，`citizen_motion`按生活时钟给出当前坐标。桥拱仍沿用原观察器，按侧阈值唤醒；回镜前结清跨越段。可见/隐藏步行共用平面进度，读取实际位置时采样石阶/桥面高度；唤醒保留住户服务次序，重定时作废旧堆项。田园/高地两分钟对照位置差<.1mm。平高道路桶支持覆盖快查，28471次高度对照一致。库存只刷货架，送装/品质按房屋增量刷新；彩旗挂点与穿墙查询使用空间桶。鸟蝶/花盆门口与彩旗绳下净空按几何缓存，普通奖励只更新相关消费者。`city_creation_worker_lod.gd`调度隐藏工人的移动/烘焙/制作/安装/休息；库存、暂停、加成变更及时唤醒，回镜/编辑/存档结清旧面进度；原经营状态机保留。待处理品质/生态余下尖峰和更大规模经营压力。缺失证据可用REA继续定向分析本地CS2文件；原件原位保留，大型导出不上传。
- 大城：`数据/四库共鸣交响大城样例.json` 为官方示范首卡，127屋/208人口/6地标/245植物，全路网、高地石阶、电车环线与9条玻璃连廊。104位居民真实赴演与完整24秒四时代盛典已验收。路网使用独占原生零启发队列，服务路长保持原三维求和，茶座三席进出路径随后台发布。房屋增量刷新送装与品质，门面/连拱/门口/通道随几何准备，编辑失效、发布重绑、纯换色复用。96组选客原版一致，h88安装6.301→3.166ms。生态按花源、节庆资格、花盆等级独立更新；彩旗锚点/候选/净空只随几何失效，完整24绳/44花盆，经营彩旗6.182→1.755ms、生态9.449→4.724ms；73项原网格/编辑/撤销/换色通过。品质门饰预烘焙及其着色副本复用原256项缓存，动态ArrayMesh不缓存。
  品质游戏结算仍即时，`QualityVisual.schedule_flash/poll` 将装饰按帧逐屋发布；普通工坊轮询跳过待发布屋，重复事件合并、满城重建撤销旧队列，跨城ID相同也不串入，存档不记录显示队列。旧同步flash API保持，四粒子庆祝上限保留。57项CPU与18项旗舰实窗通过；3000帧真实晋升10次全部发布，单屋最高2.274ms，回调最高.433ms（仅入队/音乐/UI）。Life均值.827ms/p95 1.210ms/最高5.724ms，画面p95 5.983ms；Life .8ms、经营余下尖峰、编辑<4ms与远景合批仍待收口，不勾选Phase12。见本地 `验证记录/品质分帧_2026-10-19/` 与 `验证记录/彩旗网格收口_2026-10-19/`。
- 验证：Godot Compatibility，1440×900；选相关脚本一次CPU/一次实窗，GPU回读检查须运行OpenGL，不能用headless结果替代。不要跑九入口冷启动或整库哈希。
- 画面缺陷：三角闭环双终端按转弯接合，T/X路口保留；水上剧场石台/木栈道/最低看台同高重叠已改为裁剪拼接。巨大彩色面已取得51屋低俯角两份F10现场，根因未定位；重新载入及160次换色/装饰重建/低角度巡游、5次全景重建未重现。F10保存截图/城市/相机，并对纯色异常自动暂停隔层、导出嫌疑网格，随后恢复；位置 `user://render_diagnostics/`；本地证据见 `验证记录/彩色面与舞台重叠_2026-10-19/`。
- 注意力：`city_creation_attention_mixer.gd`按共享PCM时钟分发微拍；Music执行时重查房屋身份/高度/可见性。长拖房路/地形保持雕刻态；建造时只保留指尖窗光，俯瞰停止新增日常个体短句。面包同街坊6秒合并；静音/换城/演出清空排队，音乐传输不重启。远端重要晋升使用原短音总线1600Hz滤波，普通远端低级晋升静默。核心检查：`tests/test_city_creation_attention_mixer.gd`、`tools/check_creation_attention_live.gd`；录音/截图仅本地。
- 涌现：`city_creation_harmonic_emergence.gd`每3秒按实际焦点屋的时代/高度/品质/临水与当前围院环岛选择配器；几何只在发布目录时准备，经营品质沿原增量接口更新。五田园主题与三新时代共八种主奏，每类三套24秒织体；按城市DNA、绝对乐句与轮次改变排列。`_update_variations`原生WAV短淡出后按共享时钟位置接入新织体，演出用原WAV；原时钟及所有Player节点不替换。`city_creation_harmonic_palette.gd`提供D大调/B小调/G吕底亚/悬浮九和弦；共用末小节Dadd9，按城市偏好加权在整轮边界换色，铺底与城市短句/点房/环唱同色。70项和声、37项旗舰实窗通过；Music主线程均值.166ms/p95 .277ms，原生WASAPI混音日常均值.053ms/p95 .120ms、4短槽持续播放.071ms/p95 .168ms，两驱动各12项通过；命令为 `tools/collect_creation_audio_profile.gd -- --isolated-session --profile-driver=WASAPI`，使用原生servers分析包计时。
- 音乐：12长轨+4短槽/6声像总线，另2自然声节点；PitchPluck按真实house_era选时代乐器，.42秒短音/.6秒共享拍钟窗光，田园仍有五主题；跨时代Reply按实际源风貌选木拨弦/羽管键琴/钢琴/毡音钢琴，田园内部对答保留五主题。银行为12基础长轨+96变奏长轨+307原短样本，另1204项和声铺底/短句/新增音高派生资源，实际仍只播放12长+4短，`city_creation_bank_cache.gd`读取预编译PCM。GitHub不存可重建的银行二进制；首次启动可后台合成，首次克隆/修改合成源/导出前运行 `tools/bake_creation_music_bank.gd`，旧银行自动移入废弃。
- UI：用户提供的纸本界面已适配到 `scripts/ui/`，文案中心 `city_creation_copy.gd`、四页F1手札 `city_creation_guide_panel.gd`、紧凑折叠头栏 `city_creation_paper_hud.gd`；49项实窗与成长引导回归通过，支持1024×768。`UI/`完整参考副本原位保留，仅本地使用；不要整套替换游戏源码。
- 入口：根三个启动器；Ctrl+O切换18座示范。测试设置 `persistence=false` 与隔离作品库，个人 `user://city_creation_v1.json` 和作品库不改。

第九章的一次性归档此前已完成；现行文档7份（含新版玩法蓝图和UI手册），旧专题/2.5D流水线/原生扩展/一次性冻结对照另存本地 `废弃/主仓库旧体系归档_2026-10-18/`。旧入口原文和本次上传蓝图保存在 `废弃/文档_旧体系归档_2026-10-17/十二阶段入口替换前_2026-10-18/`。只维护当前状态，不积累逐轮流水账。旧阶段日志按旧编号原位保留。

GitHub：`ai-sync/main` 对应 `Lbwnb6969/resonance-city-ai`，交付前用 `tools/sync_github_main.py prepare` / `push` 同步已跟踪文件树并确保main当前文件总量<100MB；保留精选文档/代码/算法和运行资源。完整参考原件保持本地原路径，取消跟踪的大型导出和素材不搬移、不删除；不另建导出仓库。
