# 《共鸣之城》AI施工入口

先读[PROJECT](PROJECT.md)，再读唯一总纲[code_artifact](文档/code_artifact.md)、[22空间UI](文档/22_去GPT化空间UI与触觉交互规范.md)、[23声学共生](文档/23_声学涌现与玩家城市共生系统规范.md)及[参考索引](文档/参考索引.md)。2026-10-20以用户新蓝图接续Stage I→X；Phase1～11及Stage A/B已验收保留，Phase12尚未完成。旧一次性归档不要重做。

2026-10-21合订稿已接入唯一总纲，按其Stage 1～10继续；五键渐进坞、5.8m自动继承、3D引导与六地标主动乐章覆盖上一版取舍。低视角暂缓和性能无固定门槛继续生效。旧总纲原位备份于废弃/合订蓝图接续_2026-10-21/。

## 当前优先级

2026-10-20用户修订：性能以实际操作顺畅为准，不以120FPS或固定耗时卡验收；保留实测，处理明显卡顿和音频断续。

1. 本次已接续点屋用途/扩展色盘/显式加建、七种植物精确摆放、四道路的曲线/直线和宽度、自然聚落与生活伴奏、古典→中世纪→工业→现代风貌。实际状态和验证入口见PROJECT；新稿取舍写入总纲。旧存档1～18兼容，新颜色/植物/道路尺寸按需Schema19，个人作品不写。
2. 2026-10-21用户明确「低视角先不用修了」：低视角巨大绿色/彩色破面暂缓，既有F10诊断保留，勿继续占用当前任务。道路已修连续路口扩宽、整体边界压边与急弯草缝；急弯/路口CPU及复杂路网实窗通过，局部尖锐外轮廓仍可后续细化。
3. 加建已减少配色准备/无关道路重造，127屋加层发布3.858s→1.293s；19项实窗、18项全屋冷计算对照及49项组装检查通过。仍有发布等待，继续按实际体验收口；地形编辑6.267s尚未优化。生成/取消/后台纯值与既有到期调度保留，GPU和节点只在主线程分帧发布。
4. 不重做Stage IV、旧II/III与Phase1～11。Stage V点屋/色盘已落地，后续完整入口回归；VI三性格/刮奏、VII心愿/巡游/四时、VIII策略、IX种子/铭牌、X完整验收按总纲继续，不提前全勾选。

2026-10-21合订接续：五键/屋顶一键与3D引路84项实窗，自然聚落44项CPU；六地标24秒乐章65项CPU及30项实窗录音通过，末两乐句齐奏。三性格21项真实炉火、树水拨奏13项实窗、8m居民回应11项CPU、真实心愿13项实窗通过。四时已接真实经营/配器/画面、Schema19及撤销，35项CPU与32项实窗通过；旧街坊连奏43项回归通过。手绘巡游47项CPU/19项实窗录音通过：八乐句依手绘接力、居民真实提灯行进、保存恢复/取消不重奖。五和弦/开拓/地标闭环已适配：58/80/25/23/73/19项相关CPU与46项五和弦、11项127屋规划实窗通过。隔离整城替换169.18s→83.02s，后台约66.2s仍待优化；六地貌实景/经营/每日赠礼已接入，72项CPU、50项实窗和15项星夜检查通过；五调式/石阶琴键64/15项CPU、51项实窗及14项琴键检查通过（24秒乐章峰值.08075）；旧和声71/53项、行走37项、调度21项回归通过。时代铭牌41项CPU/21项实窗通过；留声机图鉴33项CPU/34项实窗、两调式12项PCM检查通过；群岛打开6.69s→2.63s，地形2.20s→.39s，精确水距43,681点及随机水道零差；整城替换等待和最终体验验收待完成，勿将合订目标标完成。

## 代码定位

| 系统 | 入口与关键点 |
|---|---|
| 主场景/UI | scenes/city_creation.tscn → scripts/ui/city_creation_demo.gd；paper_hud负责迁移，score_ribbon/sundial_hud/whisper_keycaps/seal_button/tactile_dock；copy/guide/journal/gallery/signatures保持原功能 |
| 真值/历史 | scripts/world/city_creation_state.gd、serializer、change_set；可选Schema19已用于自选色/新植物/道路尺寸，兼容1～18 |
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

帧时、Life、音频和编辑耗时保留为实测参考；样本注明场景规模与采样条件，耗时数值不决定通过或失败。阶段勾选依据功能、画面、实际交互和存档验收，低视角异常按用户2026-10-21要求暂缓。

个人user://作品不写，Demo.persistence=false且collection_directory用本地验证目录。完整参考资料/与UI/原件原位保留；无需新打包，用户明确要试玩包才导出。项目自主实现，重要旧件移唯一废弃/，先记依赖计划并Git备份。

交付前提交，运行`python tools/sync_github_main.py prepare`、阅读验证记录/GitHub完整同步/plan.json再push；主remote ai-sync/main、普通快进，跟踪树<100,000,000字节。Windows TLS用环境Git配置http.sslBackend=schannel/http.version=HTTP/1.1。只显式add本轮新文件，忽略散落自动UID/截图与参考原件。

Stage IV旧验收：44px乐谱条、四圆章；当前坞已改五键渐进画具。常驻HUD留白1440为92.45%、1024为88.73%。77项实窗/20项界面数据与17个真实手记目标引导通过，个人档不变。Stage V六类工具圆章与屋顶锚定罗盘已接入；名称、用途、风貌、配色和律动均走原事务。两分辨率136项工具圆章、40项罗盘交互/保存/撤销通过，后续补演出等完整入口回归。

2026-10-20试玩棋盘圆斑已定位并修复：tiled_field把create_from_images放进assert，正式导出移除调用导致两张场纹理为0层；创建现独立执行。旧代码正式EXE精确复现截图，修订2正式EXE两场各64×66×66，GPU回读与CPU逐字节一致，昼夕夜近远景截图正常。build_creation_playtest.py导出后自动执行这一正式版验收；不能用编辑器加载PCK替代。另加0.75m SSAO接触遮蔽与级联阴影混合；此前巨大彩色多边形按用户要求暂缓。新版试玩为交付/共鸣之城试玩_2026-10-20_修订2/共鸣之城.exe。

本轮实际入口：tests/test_city_creation_personalization.gd、test_city_creation_house_dependency_cache.gd；tools/check_creation_personalization_live.gd、check_creation_road_modes_live.gd、check_creation_cluster_choir_live.gd与check_creation_low_view_live.gd。交付源码已变更，旧修订2 EXE没有这些新功能；用户未要求则不重新打包。
