# 《共鸣之城》AI施工入口

先读[PROJECT](PROJECT.md)，再读唯一总纲[code_artifact](文档/code_artifact.md)、[22空间UI](文档/22_去GPT化空间UI与触觉交互规范.md)、[23声学共生](文档/23_声学涌现与玩家城市共生系统规范.md)及[参考索引](文档/参考索引.md)。2026-10-20以用户新蓝图接续Stage I→X；Phase1～11及Stage A/B已验收保留，Phase12尚未完成。旧一次性归档不要重做。

## 当前优先级

1. Stage I：彩色大面仍未定位。读取现有F10城市/相机/截图，验证MultiMesh、道路退化点、纹理上传三条假设；鸟蝶初始化7个零矩阵提前可见已修，16项CPU/1000帧巡游有限数据检查通过；根因仍需异常现场节点/网格证据。正常截图不等于修复。个人文件只读，复现用隔离副本。
2. 音乐目录已改随几何后台准备，校验临水/品质等全部输入，发布时保留播放器/拍钟。27项CPU/14项127屋实窗与原版目录对照通过；继续编辑主线程发布/UI、单屋品质显示、300屋真实经营性能。
3. 毛石基再埋22cm/14cm贴地透明裙已通过19项CPU与30项实窗（7屋p95 5.582ms），末层负/零厚度也已修；时代边界双侧灌木/暖界石也已通过32项CPU与30项实窗（p95 5.585ms），真种植/改风貌/撤销与跨城缓存正确。接续破面、编辑尾帧、品质显示和300屋Life。Stage I验收后推进IV/V去表单空间UI（II/III沿用已验收实现）。三档性格/刮奏/心愿/巡游/四时、策略增补、六种子/乐章铭牌依VI～IX；X完整收口。

## 代码定位

| 系统 | 入口与关键点 |
|---|---|
| 主场景/UI | scenes/city_creation.tscn → scripts/ui/city_creation_demo.gd；旧paper_hud、copy文案、guide_panel、journal/gallery/signatures |
| 真值/历史 | scripts/world/city_creation_state.gd、serializer、change_set；可选Schema18已有，未来19兼容1～18 |
| 拉路/坡路 | road_gesture/road_intent/stroke，road_heights/road_earthworks/terrain_protection/frontage/junctions；新宽街2.10m旧2m保持 |
| 生活/调度 | city_creation_life、citizen_schedule、citizen_motion、worker_lod、network、bakery/workshop/cafe、tram、quality |
| 后台/发布 | scripts/visual/city_creation_budget_rebuild.gd；私有快照/缓存容器，CPU线程准备，GPU和节点只在主线程分帧发布 |
| 画面 | renderer/meadow/foliage/shore/path_pebbles/highland/era_streets/quality_visual；水场/接触场与shaders/ |
| 音乐 | scripts/audio/city_creation_music.gd、music_catalog、attention_mixer、harmonic_emergence/palette、circular_canon、spatial/acoustic_field |
| 经营加成 | synergy_buffs/signatures/special_sites/region_network/prosperity；真实完成事件，别另起一套状态机 |

相对路径在项目根；音频固定12长+4短/6总线与2自然声节点。PCM银行仅本地，首次克隆或改合成源码后用tools/bake_creation_music_bank.gd生成；刷新目录/换城不重启音乐时钟。主示范数据/四库共鸣交响大城样例.json为127屋/208人/六地标首卡。

## 验证和交付

引擎D:/GODOT/Godot_v4.7.2-stable_win64_console.exe。CPU：`--headless --audio-driver Dummy --path . --script tests/相关.gd -- --isolated-session`；实窗：`--path . --rendering-method gl_compatibility --audio-driver Dummy --script tools/相关.gd -- --isolated-session`。GPU回读不能用headless替代。

音乐目录：tests/test_city_creation_music_catalog_refresh.gd；真实编辑：tools/check_creation_flagship_edits.gd（ok与within_four_ms分开）；彩色面：tools/check_creation_render_fault_live.gd及F10现场自动隔层诊断。相关检查通过后只在新变化或风险需要时扩测，不跑九入口或整库哈希。基座和II/III的既有证据见PROJECT及本地验证记录，不批量重跑。

Stage I目标300屋Life均值<.70/p95<.90ms、品质回调<.8ms/单屋显示<1ms，X主帧p95<7.5/Life均值<.75/音频CPU<.4ms；当前127屋Life.827/p95 1.210ms、单屋显示最高2.274ms、编辑超4ms，尚未收口。不要凭孤立低负载结果勾阶段。

个人user://作品不写，Demo.persistence=false且collection_directory用本地验证目录。完整参考资料/与UI/原件原位保留；无需新打包，用户明确要试玩包才导出。项目自主实现，重要旧件移唯一废弃/，先记依赖计划并Git备份。

交付前提交，运行`python tools/sync_github_main.py prepare`、阅读验证记录/GitHub完整同步/plan.json再push；主remote ai-sync/main、普通快进，跟踪树<100,000,000字节。Windows TLS用环境Git配置http.sslBackend=schannel/http.version=HTTP/1.1。只显式add本轮新文件，忽略散落自动UID/截图与参考原件。
