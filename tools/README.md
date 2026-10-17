# 当前3D工程工具

游戏入口与能力状态见根 `PROJECT.md`、`AI_START_HERE.md` 和 `文档/Demo快速开始.md`。旧P0/2.5D工具及说明已按依赖归档到 `废弃/`，不作为当前入口。

| 工具 | 用途 |
| --- | --- |
| `cleanup_v3_workspace.py` | 默认dry-run；`--plan <新JSON>`生成依赖闭包迁移计划，`--apply <计划>`复核后唯一归档，无删除或覆盖 |
| `export_ai_repository.py` | 用户需要时导出55MB内源码/设计/研究文本；不修改源项目；排除归档和三套重复来源模板 |
| `creation_bundle_audit.py` | 当前主场景的资源依赖闭包、三库来源记录与真实包资源审计；独立于旧P0打包器 |
| `build_creation_bundle.py` | 仅用户明确要求时打本地试玩包；使用独立3D审计与隔离运行探针 |
| `check_creation_edit_latency.gd` | 同一28屋样例的远岸、近路、改色编辑准备/提交帧时 |
| `check_creation_v3_experience.gd` | 本轮v3实窗光影、生命生态、触感、刮奏和漫步验证 |
| `extract_creation_ambience.py` | Foundation溪流适配资源的定向提取，输出不覆盖现存原件 |

本机Godot为 `D:/GODOT/Godot_v4.7.2-stable_win64_console.exe`。GDScript验证使用 `--path . --script res://tools/<工具>.gd`；只运行与当前变更直接相关的验证，实窗截图/帧时统一由根任务执行。

清理/打包器重构的命令、结果与归档清单见 `验证记录/v3文档与清理_2026-10-16/README.md`。日常不自动导出便携ZIP；保留个人 `user://` 数据和三库原件。
