# 《共鸣之城》AI 施工入口（M33～M42 四期施工）

先读 [进度日志](ai_progress.log) 最后 30 行、[任务真值](ai_feature_backlog.json) 与 [当前看板](PROJECT.md)，只认领第一个 `passes: false` 的里程碑（前34项已通过，继续 M35～M42）。

四期入口：[音乐与微观艺术施工](文档/30_四期音乐与微观艺术施工.md)。当前 M35；原件在新文档，仅根 backlog 更新进度。每两项与 M41/M42 独立 Critic 审查，分数如实记录。

## 三期成果：十二原型、鲜活微观世界与续玩闭环

二期 M13～M22 已圆满完成，并在 [文档/28](文档/28_项目复盘与建筑风貌扩展.md) 中精准总结了阻挡主观艺术评分从 4/5 迈向 5/5 满分的最后差距。三期（M23～M32）已将这批设计接入实机，具体品质复评见文档/28：
1. **12 大可辨识建筑体量原型（M23～M26）**：落地 6 类新古典原型（柱廊门庭小宅、三段式街屋、圆角凸窗转角屋、内院连柱公馆、小型圆厅书院、山花街坊会馆）与 6 类阿尔卑斯现代原型（非对称山墙木屋、单坡玻璃亭、顺坡错层台地宅、木框全景山居、双山墙连桥工坊、石基绿顶山舍），彻底终结 `1.8m` 方盒同构感。
2. **留空透光树冠与手持风物小人（M27～M28）**：让树冠呈现“枝干穿插、簇间见天”的手绘透气感，柔化草石接地边缘；为胶囊小人戴上草帽/贝雷帽/礼帽，在采购、送装与夜行时真实手持面包篮、木琴与暖光提灯。
3. **长时音乐变奏、大城局部秒级响应与小窗工艺（M29～M32）**：实装跨周期室内乐独奏轮换与句尾呼吸收束、300 屋局部编辑脏区增量缓存与 1024 紧凑手卷。

依次阅读 [三期建筑原型与鲜活微观世界施工总纲](文档/29_三期建筑原型与鲜活微观世界施工总纲.md)、[项目复盘与建筑风貌扩展](文档/28_项目复盘与建筑风貌扩展.md)、[二期总纲](文档/27_艺术品级系统精炼与美术升华总纲.md) 与 [四库总纲](文档/code_artifact.md)。

## 单里程碑闭环

1. 恢复日志与 backlog，核对工作区，先备份已有改动；每轮只施工一项。
2. 新逻辑放入 `<250` 行独立子脚本；四大主文件每次只加 `<=8` 行委托，严禁突破 `check_ai_harness.py` 行数棘轮。
3. Gate 1：`python tools/check_ai_harness.py`、`python tools/check_doc_links.py`。
4. Gate 2：相关 CPU 单元和 `tests/test_city_creation_legacy_roundtrip.gd`，均加 `-- --isolated-session`。
5. Gate 3：执行该项 `verification_cmd`；实窗使用 `--rendering-method gl_compatibility -- --isolated-session`，查看 PNG 与录音峰值。
6. 三门禁真实通过才更新该项 `passes` / `verified_by`，日志追加不超过 6 行；提交 `feat(Mxx): 描述` 并同步 GitHub，继续认领下一项直至 M42 完成。

## 代码入口与三期预置模块

| 系统 | 入口与边界 |
|---|---|
| 新古典建筑 | [neoclassical](scripts/visual/city_creation_neoclassical.gd)、[civic](scripts/visual/city_creation_neoclassical_civic.gd)、[classical](scripts/visual/city_creation_classical.gd)、[renaissance](scripts/visual/city_creation_renaissance.gd) |
| 阿尔卑斯现代 | [alpine_modern](scripts/visual/city_creation_alpine_modern.gd) 与 [lodge](scripts/visual/city_creation_alpine_lodge.gd)、[modern](scripts/visual/city_creation_modern.gd)、[highland](scripts/visual/city_creation_highland.gd) |
| 鲜活小人与自然 | [citizen_visual](scripts/visual/city_creation_citizen_visual.gd)、[life](scripts/world/city_creation_life.gd)、[foliage](scripts/visual/city_creation_foliage.gd) |
| 音乐跨周期变奏 | [cadence_variation](scripts/audio/city_creation_cadence_variation.gd)、[phrase_tide](scripts/audio/city_creation_phrase_tide.gd) |
| 渲染与局部缓存 | [renderer](scripts/visual/city_creation_renderer.gd)、[budget_rebuild](scripts/visual/city_creation_budget_rebuild.gd) |

## 运行与验证

引擎：`D:/GODOT/Godot_v4.7.2-stable_win64_console.exe`。启动主场景：`继续我的河湾.cmd`；作品收藏馆 `Ctrl+O`，手札 `F1`，临时拨奏按住 `P` / 鼠标侧键。

```powershell
& D:/GODOT/Godot_v4.7.2-stable_win64_console.exe --headless --audio-driver Dummy --path . --script tests/test_city_creation_legacy_roundtrip.gd -- --isolated-session
& D:/GODOT/Godot_v4.7.2-stable_win64_console.exe --path . --rendering-method gl_compatibility --audio-driver Dummy --script tools/check_creation_harness_live.gd -- --isolated-session
```

个人 `user://` 存档与作品库绝不写入；保持 Schema 1～19 和固定 `12 长轨 + 4 短槽 + 6 总线 + 2 自然声`。
历史证据见 [合订验证记录](文档/24_合订接续验证记录.md)，需求对照见 [需求核对](文档/25_合订需求核对.md)，本地参考见 [参考索引](文档/参考索引.md)。

M33已完成首屋牧歌、-1.2dB建造退让、限预算健康混音与生活短音/卡农；M34已完成安全换流、双共享总线混响与六音阶真实落笔；下一项 M35：四类蒸汽钟表建筑原型。首次独立Critic无M33/M34阻挡，细节修复已归M38/M39/M40，主观听感未冒评满分。
