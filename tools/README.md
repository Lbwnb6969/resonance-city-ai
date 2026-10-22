# 当前3D工程工具

游戏入口与能力状态见根 `PROJECT.md`、`AI_START_HERE.md` 和 `文档/Demo快速开始.md`。旧P0/2.5D工具及说明已按依赖归档到 `废弃/`，不作为当前入口。

| 工具 | 用途 |
| --- | --- |
| `check_ai_harness.py` | M01～M12任务原文契约、完成证据、四主文件棘轮与入口120行/15KB审计；单元验证运行 `python -B tests/test_ai_harness.py` |
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
