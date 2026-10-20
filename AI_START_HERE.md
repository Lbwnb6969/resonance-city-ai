# 《共鸣之城》AI施工入口

先读[PROJECT](PROJECT.md)，再读唯一总纲[code_artifact](文档/code_artifact.md)、[22空间UI](文档/22_去GPT化空间UI与触觉交互规范.md)、[23声学共生](文档/23_声学涌现与玩家城市共生系统规范.md)及[参考索引](文档/参考索引.md)。2026-10-20以用户新蓝图接续Stage I→X；Phase1～11及Stage A/B已验收保留，Phase12尚未完成。旧一次性归档不要重做。

## 当前优先级

2026-10-20用户修订：性能以实际操作顺畅为准。120 FPS及固定帧时、Life/音频CPU数值均为参考，不再卡测试、阶段验收或后续开发；只针对明显卡顿、音频断续或性能回退继续优化，体验顺畅后优先画面、衔接、音乐与玩法。

1. Stage I：彩色大面仍未定位。读取现有F10城市/相机/截图，验证MultiMesh、道路退化点、纹理上传三条假设；鸟蝶初始化7个零矩阵提前可见已修，16项CPU/1000帧巡游有限数据检查通过；根因仍需异常现场节点/网格证据。正常截图不等于修复。个人文件只读，复现用隔离副本。
2. 音乐目录/轮唱、日记与门前布局已随结构准备/复用。房屋按基座/立面/屋顶/地标分步，house_assembly持主线程任务；空间规划/孟莎CPU网格/现代连廊规划随后台准备，植物宫按拱跨/喷泉/花床生成。合批分帧、草地索引复用与cpu_retirement纯值回收保持，节点/GPU只在主线程。49项新生成/取消/后台纯值检查、58项品质及19项127屋实窗通过；17栋四时代/六地标/连廊/圆塔完整数据与原版一致。生成切片最高3.938ms，道路安装12.197ms、Life地形发布13.079ms作为排查记录；已有分步生成与到期调度保留，后续按实际卡顿决定优化范围。
3. 毛石基再埋22cm/14cm贴地透明裙已通过19项CPU与30项实窗（7屋p95 5.582ms），末层负/零厚度也已修；时代边界双侧灌木/暖界石也已通过32项CPU与30项实窗（p95 5.585ms），真种植/改风貌/撤销与跨城缓存正确。桥头1.25m纹理渐变/支撑板相交修正与柔暖全局光影也已通过9项CPU/12项实窗；细节见PROJECT。接续破面与可见衔接问题；Stage IV常驻HUD已验收，接续V建筑罗盘与二级工具圆章（II/III沿用已验收实现）。三档性格/刮奏/心愿/巡游/四时、策略增补、六种子/乐章铭牌依VI～IX；X完整收口。

## 代码定位

| 系统 | 入口与关键点 |
|---|---|
| 主场景/UI | scenes/city_creation.tscn → scripts/ui/city_creation_demo.gd；paper_hud负责迁移，score_ribbon/sundial_hud/whisper_keycaps/seal_button/tactile_dock；copy/guide/journal/gallery/signatures保持原功能 |
| 真值/历史 | scripts/world/city_creation_state.gd、serializer、change_set；可选Schema18已有，未来19兼容1～18 |
| 拉路/坡路 | road_gesture/road_intent/stroke，road_heights/road_earthworks/terrain_protection/frontage/junctions；新宽街2.10m旧2m保持 |
| 生活/调度 | city_creation_life、citizen_schedule、citizen_motion、worker_lod、network、bakery/workshop/cafe、tram、quality |
| 后台/发布 | scripts/visual/city_creation_budget_rebuild.gd；私有快照/缓存容器，CPU线程准备、cpu_retirement回收纯值，GPU和节点只在主线程分帧发布 |
| 画面 | renderer/meadow/foliage/shore/path_pebbles/highland/era_streets/quality_visual；水场/接触场与shaders/ |
| 音乐 | scripts/audio/city_creation_music.gd、music_catalog、attention_mixer、harmonic_emergence/palette、circular_canon、spatial/acoustic_field |
| 经营加成 | synergy_buffs/signatures/special_sites/region_network/prosperity；真实完成事件，别另起一套状态机 |

相对路径在项目根；音频固定12长+4短/6总线与2自然声节点。PCM银行仅本地，首次克隆或改合成源码后用tools/bake_creation_music_bank.gd生成；刷新目录/换城不重启音乐时钟。主示范数据/四库共鸣交响大城样例.json为127屋/208人/六地标首卡。

## 验证和交付

引擎D:/GODOT/Godot_v4.7.2-stable_win64_console.exe。CPU：`--headless --audio-driver Dummy --path . --script tests/相关.gd -- --isolated-session`；实窗：`--path . --rendering-method gl_compatibility --audio-driver Dummy --script tools/相关.gd -- --isolated-session`。GPU回读不能用headless替代。

音乐目录：tests/test_city_creation_music_catalog_refresh.gd；真实编辑：tools/check_creation_flagship_edits.gd（功能结果与耗时记录分开）；彩色面：tools/check_creation_render_fault_live.gd及F10现场自动隔层诊断。相关检查通过后只在新变化或风险需要时扩测，不跑九入口或整库哈希。基座和II/III的既有证据见PROJECT及本地验证记录，不批量重跑。

帧时、Life、音频和编辑耗时保留为实测参考；样本注明场景规模与采样条件，耗时数值不决定通过或失败。阶段勾选依据功能、画面、实际交互和存档验收，渲染异常继续排查。

个人user://作品不写，Demo.persistence=false且collection_directory用本地验证目录。完整参考资料/与UI/原件原位保留；无需新打包，用户明确要试玩包才导出。项目自主实现，重要旧件移唯一废弃/，先记依赖计划并Git备份。

交付前提交，运行`python tools/sync_github_main.py prepare`、阅读验证记录/GitHub完整同步/plan.json再push；主remote ai-sync/main、普通快进，跟踪树<100,000,000字节。Windows TLS用环境Git配置http.sslBackend=schannel/http.version=HTTP/1.1。只显式add本轮新文件，忽略散落自动UID/截图与参考原件。

Stage IV：44px乐谱条、四圆章和紧凑九工具坞已接入；常驻HUD留白1440为92.45%、1024为88.73%。77项实窗/20项界面数据与17个真实手记目标引导通过，个人档不变。Stage V六类工具圆章与屋顶锚定罗盘已接入；名称、用途、风貌、配色和律动均走原事务。两分辨率136项工具圆章、40项罗盘交互/保存/撤销通过，后续补演出等完整入口回归。

2026-10-20试玩棋盘圆斑已定位并修复：tiled_field把create_from_images放进assert，正式导出移除调用导致两张场纹理为0层；创建现独立执行。旧代码正式EXE精确复现截图，修订2正式EXE两场各64×66×66，GPU回读与CPU逐字节一致，昼夕夜近远景截图正常。build_creation_playtest.py导出后自动执行这一正式版验收；不能用编辑器加载PCK替代。另加0.75m SSAO接触遮蔽与级联阴影混合；此前巨大彩色多边形仍单独排查。新版试玩为交付/共鸣之城试玩_2026-10-20_修订2/共鸣之城.exe。
