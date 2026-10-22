# 《共鸣之城》AI 施工入口

先读 [进度日志](ai_progress.log) 最后 30 行、[任务真值](ai_feature_backlog.json) 与 [当前看板](PROJECT.md)，只认领第一个 `passes: false` 的里程碑。根目录是施工真值；本地 `新文档/` 是用户交付原件，保持原样，不作为第二套进度表。

## 产品与施工顺序

长线可存档陪伴型 3D 箱庭音乐城建：玩家随时读档继续扩建，建房、修路、种树与设置生活工坊始终自由。共鸣等级三选一传世手札、林间微缩奇遇与跨城传承按 M01～M12 增量接入；预置逻辑不代表已完成玩法接线。

依次阅读 [长线陪伴终极蓝图](文档/26_长线陪伴城建与轻肉鸽终极施工蓝图.md) 对应里程碑、[四库总纲](文档/code_artifact.md)、[空间 UI](文档/22_去GPT化空间UI与触觉交互规范.md)、[声学共生](文档/23_声学涌现与玩家城市共生系统规范.md) 与 [参考索引](文档/参考索引.md)。新蓝图的 M01～M12 顺序覆盖旧阶段排期，四库基座和已验收能力保留。

## 单里程碑闭环

1. 恢复日志与 backlog，核对工作区，先备份已有改动；只施工一项。
2. 新逻辑放入 `<250` 行独立子脚本；四大主文件每次只加 `<=8` 行委托，不堆实现。
3. Gate 1：`python tools/check_ai_harness.py`、`python tools/check_doc_links.py`。
4. Gate 2：相关 CPU 单元和 `tests/test_city_creation_legacy_roundtrip.gd`，均加 `-- --isolated-session`。
5. Gate 3：执行该项 `verification_cmd`；实窗使用 `--rendering-method gl_compatibility -- --isolated-session`，查看 PNG 与录音峰值。M01 的 Python 验收外补一次实际音画烟测。
6. 三门禁真实通过才更新该项 `passes` / `verified_by`，日志追加不超过 6 行；提交 `feat(Mxx): 描述` 并同步 GitHub，结束本轮。按用户2026-10-22后续授权连续逐轮推进至文档目标完成，再认领下一项，不等待新窗口。

每完成 3 项执行独立品质验收，五项评分及修复要求按用户 Evaluator 指令处理。

## 代码入口

| 系统 | 入口与边界 |
|---|---|
| 主场景 / UI | [city_creation.tscn](scenes/city_creation.tscn)、[demo](scripts/ui/city_creation_demo.gd)；五键坞、五线谱、日晷、屋顶罗盘与心愿 |
| 世界 / 存档 | [state](scripts/world/city_creation_state.gd)、[serializer](scripts/world/city_creation_serializer.gd)；Schema 1～19、事务与撤销/重做 |
| 渲染 / 发布 | [renderer](scripts/visual/city_creation_renderer.gd)、[预算重建](scripts/visual/city_creation_budget_rebuild.gd)；后台准备、主线程分帧发布 |
| 材质 | [墙材质](scripts/visual/city_creation_wall_material.gd)、[统一 shader](scripts/visual/shaders/creation_wall.gdshader)；新增构件接微法线与接触 AO |
| 居民 / 工坊 | [life](scripts/world/city_creation_life.gd)、[调度](scripts/world/city_creation_citizen_schedule.gd)；真实路网、出炉、送装与茶聚 |
| 音乐 | [music](scripts/audio/city_creation_music.gd)、[聚落和声](scripts/audio/city_creation_cluster_harmony.gd)；共享时钟与固定声部池 |
| 长线成长 | [journey](scripts/world/city_creation_harmony_journey.gd)；真实生活共鸣、18札与奇遇Schema19；时代盛典见era_ceremony |

## 运行、验证与交付

引擎：`D:/GODOT/Godot_v4.7.2-stable_win64_console.exe`。启动主场景：`继续我的河湾.cmd`；作品收藏馆 `Ctrl+O`，手札 `F1`，临时拨奏按住 `P` / 鼠标侧键。

```powershell
& D:/GODOT/Godot_v4.7.2-stable_win64_console.exe --headless --audio-driver Dummy --path . --script tests/test_city_creation_legacy_roundtrip.gd -- --isolated-session
& D:/GODOT/Godot_v4.7.2-stable_win64_console.exe --path . --rendering-method gl_compatibility --audio-driver Dummy --script tools/check_creation_harness_live.gd -- --isolated-session
```

个人 `user://` 存档与作品库绝不写入；实窗 `persistence=false`、作品输出放隔离验证目录。保持 Schema 1～19、外部 API 和撤销/重做守恒，固定 `12 长轨 + 4 短槽 + 6 总线 + 2 自然声`。性能保留实测，处理明显卡顿与断音，不设固定 FPS 门槛。

交付前显式暂存本轮文件、提交，执行 `python tools/sync_github_main.py prepare`，审阅 `验证记录/GitHub完整同步/plan.json` 后执行 `push` 并核对树一致、跟踪总量 `<100,000,000` 字节。四库与用户原件原位保留；清理先记录依赖闭包再移入唯一 `废弃/`。仅用户要求试玩包时打包。

历史逐轮数据及本次瘦身前完整入口见 [合订验证记录](文档/24_合订接续验证记录.md#m01-入口瘦身前原文归档2026-10-22)，未完需求见 [需求核对](文档/25_合订需求核对.md)。

M12复核入口：`python tools/check_creation_long_session_journey.py`依次运行两分辨率的首日、独立进程次日与127屋画面总检；输出在`验证记录/M12/`。次日150秒实际录音包含真实生活及音频问答，生活模拟加速用于跨时代覆盖；不将其称为两小时手玩或跨聚落轮奏的新证明。
