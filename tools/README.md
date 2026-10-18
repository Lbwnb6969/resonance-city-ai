# 当前3D工程工具

游戏入口与能力状态见根 `PROJECT.md`、`AI_START_HERE.md` 和 `文档/Demo快速开始.md`。旧P0/2.5D工具及说明已按依赖归档到 `废弃/`，不作为当前入口。

| 工具 | 用途 |
| --- | --- |
| `sync_github_main.py` | `prepare`核对跟踪树差异与<100MB体积，`push`同步GitHub main；本地完整参考原件不上传 |
| `creation_bundle_audit.py` | 当前主场景的资源依赖闭包、三库来源记录与真实包资源审计；独立于旧P0打包器 |
| `build_creation_bundle.py` | 仅用户明确要求时打本地试玩包；使用独立3D审计与隔离运行探针 |
| `check_creation_edit_latency.gd` | 同一28屋样例的远岸、近路、改色编辑准备/提交帧时 |
| `check_creation_v3_experience.gd` | 本轮v3实窗光影、生命生态、触感、刮奏和漫步验证 |
| `extract_creation_ambience.py` | Foundation溪流适配资源的定向提取，输出不覆盖现存原件 |
| `check_creation_phase_seven_alignment.gd` | 当前品质经营与首批地标整体验收；旧阶段文件名不作为当前阶段编号 |
| `fixtures/` | 可随仓库使用的回归数据；长路夹具独立于个人备份目录 |

本机Godot为 `D:/GODOT/Godot_v4.7.2-stable_win64_console.exe`。GDScript验证使用 `--path . --script res://tools/<工具>.gd`；只运行与当前变更直接相关的验证，实窗截图/帧时统一由根任务执行。

旧2.5D工具、失效的55MB导出器、依赖私人备份的单轮对照已移入本地 `废弃/主仓库旧体系归档_2026-10-18/`；本次依赖计划与结果见本地 `验证记录/仓库清理_2026-10-18/`。日常不自动导出便携ZIP，保留当前回归测试、个人 `user://` 数据和四库原件。

十二阶段对齐：`check_creation_phase_nine_alignment.gd` 核对30m总站门槛/真实派车；`check_creation_phase_ten_alignment.gd` 核对8桌120株/三拱植物宫/双倍野花。均支持headless单元与 `-- --live --isolated-session` 实窗。植物宫夹具通过真实居民茶聚与公开植被接口生成有效台账。
