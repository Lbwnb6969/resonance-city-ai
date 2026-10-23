# 当前3D工程工具

游戏入口与能力状态见根 `PROJECT.md`、`AI_START_HERE.md` 和 `文档/Demo快速开始.md`。旧P0/2.5D工具及说明已按依赖归档到 `废弃/`，不作为当前入口。

| 工具 | 用途 |
| --- | --- |
| `check_ai_harness.py` | M01～M22任务原文契约、完成证据、四主文件棘轮与入口120行/15KB审计；单元验证运行 `python -B tests/test_ai_harness.py` |
| `check_creation_harness_live.gd` | M01隔离OpenGL烟测：两分辨率昼夕夜、5°/10°/15°低视角、真实Master录音峰值与帧时；PNG人工检查后记入verified_by |
| `sync_github_main.py` | `prepare`核对跟踪树差异与<100MB体积，`push`同步GitHub main；本地完整参考原件不上传 |
| `creation_bundle_audit.py` | 当前主场景的资源依赖闭包、三库来源记录与真实包资源审计；独立于旧P0打包器 |
| `bake_creation_music_bank.gd` | 从GDScript合成可重建PCM缓存；GitHub不存二进制缓存，导出或银行缓存验证前先运行 |
| `build_creation_bundle.py` | 仅用户明确要求时打本地试玩包；使用独立3D审计与隔离运行探针 |
| `build_creation_playtest.py` | 用户要求Windows试玩时导出；自动运行实际release EXE，核对两张GPU距离场及昼夕夜近远景，不以编辑器加载PCK代替 |
| `check_creation_spatial_popover_live.gd` | 屋顶罗盘两分辨率真实控件、相机跟随、保存及撤销验证 |
| `check_creation_edit_latency.gd` | 同一28屋样例的远岸、近路、改色编辑准备/提交帧时 |
| `check_creation_v3_experience.gd` | 旧v3综合探针；固定窗光/旧和声/混音断言待适配，P多屋拾取失败待核对；M01入口用当前HUD与隔离烟测，原失败证据保留 |
| `extract_creation_ambience.py` | Foundation溪流适配资源的定向提取，输出不覆盖现存原件 |
| `check_creation_phase_seven_alignment.gd` | 当前品质经营与首批地标整体验收；旧阶段文件名不作为当前阶段编号 |
| `fixtures/` | 可随仓库使用的回归数据；长路夹具独立于个人备份目录 |

本机Godot为 `D:/GODOT/Godot_v4.7.2-stable_win64_console.exe`。GDScript验证使用 `--path . --script res://tools/<工具>.gd`；只运行与当前变更直接相关的验证，实窗截图/帧时统一由根任务执行。

旧2.5D工具、失效的55MB导出器、依赖私人备份的单轮对照已移入本地 `废弃/主仓库旧体系归档_2026-10-18/`；本次依赖计划与结果见本地 `验证记录/仓库清理_2026-10-18/`。日常不自动导出便携ZIP，保留当前回归测试、个人 `user://` 数据和四库原件。

十二阶段对齐：`check_creation_phase_nine_alignment.gd` 核对30m总站门槛/真实派车；`check_creation_phase_ten_alignment.gd` 核对8桌120株/三拱植物宫/双倍野花。均支持headless单元与 `-- --live --isolated-session` 实窗。植物宫夹具通过真实居民茶聚与公开植被接口生成有效台账。

M02实窗：`check_creation_low_view_live.gd`捕获两城×昼夕夜×5°/10°/15°×两朝向，并审计所有GPU容量槽、LOD/编辑/撤销、真实Master录音。`check_creation_wish_closure_live.gd`支持`--resolution=1440`或`--resolution=1024`独立进程核对鼠标首炉延迟、真实携物路线和库存；使用`--out-dir=res://验证记录/...`隔离输出。

M05：`check_creation_courtyards_live.gd` 默认运行六类邻接预影/预听实窗，输出 `验证记录/M05/邻接预影`；历史庭院综合探针完整保留，可附 `--legacy-courtyard` 调用，旧9轨约束不代表当前12轨验收。CPU对应 `tests/test_city_creation_chemistry_preview.gd`。

M06：`check_creation_cluster_choir_live.gd` 追加真实76秒双岸问答/呼吸与双分辨率昼夕夜采样；`test_city_creation_phrase_tide.gd`验证乐句策略。修改音乐主脚本使声部库整文件签名变化时，先运行两项`bake_creation_*bank.gd`；`check_creation_bank_revision.gd -- --isolated-session --before-bank=res://废弃/<归档>/城市同步声部库.res`可核对全3907条PCM与循环端点。

M07：`check_creation_biome_music_live.gd -- --isolated-session --keyboard-only` 保留台地实际居民踩阶，并追加无种子手绘高地真实鼠标、庭院八拍、水车两正拍和真实电车到站；输出 `验证记录/M07/空间节拍器`。CPU阶键覆盖10调式、1米阈值与旧图，阶面测试覆盖30438个高度样点。全部实窗加 `--rendering-method gl_compatibility --audio-driver Dummy`。

M08：`check_creation_spatial_popover_live.gd` 保留真实改名/用途/配色/撤销，再运行四层中空模型拾取、三页310px手卷、翻到第六地标及阅读时真实建房/撤销/拖转；CPU `test_city_creation_spatial_scroll.gd` 覆盖多朝向与屏边布局。证据 `验证记录/M08/中空罗盘与手卷`；`check_creation_personalization_live.gd -- --isolated-session --out-dir=res://验证记录/M08/色翼回归` 覆盖自由色轮与加建回归。

M09：`check_creation_chords_live.gd` 对五配方先真实移除一项条件，再通过正式施工API完成；记录共享音频时钟的0.1875s顺序、4cm实际视觉枢轴位移、伙伴金弧、微章与五线谱到达。附加真实首炉/面包顾客升级/古钟塔光环及撤销/读档静默，`--juice-extras-only`可单独复核后半段。截图读回内存，连锁结束后写PNG；证据 `验证记录/M09/多米诺连锁`。CPU `test_city_creation_juice_feedback.gd`。

M10：`check_creation_score_modifiers_live.gd` 保留旧时代章程/连续问答验收，追加真实出炉、茶聚、送装、心愿赚取共鸣→鼠标三选一/撤销重做→收藏并重新打开→继续实际成长及新和弦防重刷。`--harmony-only`只跑新闭环；全部使用GL/Dummy/isolated-session，输出`验证记录/M10/共鸣手札`。CPU `test_city_creation_harmony_journey.gd`涵盖100级研习、18札效果、Schema19合法性、全部章程共生与真实茶客断路；旧章程 `test_city_creation_score_modifiers.gd`、茶聚 `test_city_creation_cafe_life.gd`与旧档375项保留。

M11：`check_creation_intuitive_guidance_live.gd`默认先跑原84项鼠标新手，再验证四类真实造景、保存未完成页/完成赐福、换页、撤销读档防重领、三次自然晋升与6秒双钟/微法线暖金波、三章程手记及真实领奏+0.6dB。可用`--vignettes-only`单独迭代后半段；证据`验证记录/M11/林间奇遇与时代盛典`，全部GL/Dummy/isolated-session。CPU `test_city_creation_vignettes.gd`含重做旧几何防刷，配合eras、phrase_tide、harmony_journey、score_modifiers与legacy_roundtrip。`city_creation_recording_span.gd`可记录一段真实交互全过程，不增音频声部。

M12：`python tools/check_creation_long_session_journey.py`顺序启动六个GL/Dummy/isolated-session进程（1440×900、1024×768各day1/day2/qa），首日保存退出后由真正不同PID读取同一作品、扩建到50屋并自然解锁四时代；生活模拟加速，声音及三场六秒仪式走实际时间。每次日2实际录Master约150秒、核两轮留白/八乐句/固定声音池；QA检查127屋GPU槽、四层屋中心/邻屋/二级用途坞避让、昼夕夜与漫步5°/10°/15°、漫步收藏保存。`--phases qa`只重跑画面；`--resolutions 1024`只跑该分辨率。直接GD工具需显式`--phase=... --resolution=...`，支持`--out-dir=res://验证记录/...`供独立验收隔离。输出`验证记录/M12/<分辨率>/<phase>.json`、PNG、WAV与时间戳日志；suite.json为最近一次批次，full_suite.json保留本轮完整六进程结果。CPU为spatial_scroll、juice_feedback与legacy_roundtrip；M12规范验收还须两项纪律检查及sync_github_main.py prepare。

M13：`test_city_creation_modern_architecture.gd`验证四屋顶/三立面实际几何、JSON稳定派生、原Box拾取、受光纸纹批次、暖光天窗与无状态写入。`check_creation_era_streets_live.gd`保留原34项，再附四原型发布/切时代撤销/恢复与双分辨率近景、昼夕夜、10°及UI检查，输出`modern_archetypes.json`；实窗加GL/Dummy/isolated-session，可设`--out-dir=res://验证记录/M13/现代原型`。未施工的M14～M22模块留在用户原件目录，按里程碑逐项接入。

M14：`test_city_creation_render_safety.gd`新增三变体四树种的14×6曲面/副簇顶点与法线有限检查。`check_creation_low_view_live.gd`保留两城所有GPU槽与36张低视角，再追加真实栽种的橄榄/金叶/柏树/灌木双分辨率5°/10°/15°昼夕夜；可用`--foliage-only --out-dir=res://验证记录/M14/...`只重拍树冠。共享叶shader独立为`creation_foliage.gdshader`，原触摸/风动/四时参数保留，录音/个人档/固定池检查不变。
