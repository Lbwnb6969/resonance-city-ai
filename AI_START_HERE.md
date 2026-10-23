# 《共鸣之城》AI 施工入口（艺术品级升华篇 · M13～M22）

先读 [进度日志](ai_progress.log) 最后 30 行、[任务真值](ai_feature_backlog.json) 与 [当前看板](PROJECT.md)，只认领第一个 `passes: false` 的里程碑。

## 核心设计准则

1. **系统既不简单、又不冗余**：绝不堆砌无感知的纯百分比文字；每一项手札、流派与奇遇都必须落地为**可见的建筑/自然微景观、可听的声部/和弦回应、或可感的空间造景规则变化**。
2. **手绘箱庭插画级美术**：所有建筑、植被与光效必须保持温润的纸纹微法线、接触 AO 与冷暖包裹光，杜绝机械复制感与生硬多边形棱角。

依次阅读 [艺术品级系统精炼与美术总纲](文档/27_艺术品级系统精炼与美术升华总纲.md)、[一期长线终极蓝图](文档/26_长线陪伴城建与轻肉鸽终极施工蓝图.md)、[四库总纲](文档/code_artifact.md)、[空间 UI](文档/22_去GPT化空间UI与触觉交互规范.md) 与 [声学共生](文档/23_声学涌现与玩家城市共生系统规范.md)。

## 单里程碑闭环

1. 恢复日志与 backlog，核对工作区，先备份已有改动；每轮只施工一项。
2. 新逻辑放入 `<250` 行独立子脚本；四大主文件每次只加 `<=8` 行委托，严禁突破 `check_ai_harness.py` 行数棘轮。
3. Gate 1：`python tools/check_ai_harness.py`、`python tools/check_doc_links.py`。
4. Gate 2：相关 CPU 单元和 `tests/test_city_creation_legacy_roundtrip.gd`，均加 `-- --isolated-session`。
5. Gate 3：执行该项 `verification_cmd`；实窗使用 `--rendering-method gl_compatibility -- --isolated-session`，查看 PNG 与录音峰值。
6. 三门禁真实通过才更新该项 `passes` / `verified_by`，日志追加不超过 6 行；提交 `feat(Mxx): 描述` 并同步 GitHub，继续认领下一项直至 M22 完成。

## 代码入口与预置模块

| 系统 | 入口与边界 |
|---|---|
| 主场景 / UI | [city_creation.tscn](scenes/city_creation.tscn)、[demo](scripts/ui/city_creation_demo.gd)、[明信片印记](scripts/ui/city_creation_postcard_stamp.gd) |
| 世界 / 存档 | [state](scripts/world/city_creation_state.gd)、[serializer](scripts/world/city_creation_serializer.gd)；Schema 1～19 与撤销/重做 |
| 美术 / 建筑 | [现代区](scripts/visual/city_creation_modern.gd)、[现代四原型](scripts/visual/city_creation_modern_archetypes.gd)、[油画植被](scripts/visual/city_creation_foliage.gd)、[描边金弧](scripts/visual/city_creation_juice_arcs.gd) |
| 轻肉鸽 / 奇遇 | [共鸣成长](scripts/world/city_creation_harmony_journey.gd)、[四流派冠冕](scripts/world/city_creation_tradition_synergy.gd)、[十二风物诗](scripts/world/city_creation_vignette_catalog.gd) |
| 音乐 / 拂奏 | [music](scripts/audio/city_creation_music.gd)、[乐句潮汐](scripts/audio/city_creation_phrase_tide.gd)、[古筝琶音拂奏](scripts/ui/city_creation_strum_hold.gd) |

## 运行与验证

引擎：`D:/GODOT/Godot_v4.7.2-stable_win64_console.exe`。启动主场景：`继续我的河湾.cmd`；作品收藏馆 `Ctrl+O`，手札 `F1`，临时拨奏按住 `P` / 鼠标侧键。

```powershell
& D:/GODOT/Godot_v4.7.2-stable_win64_console.exe --headless --audio-driver Dummy --path . --script tests/test_city_creation_legacy_roundtrip.gd -- --isolated-session
& D:/GODOT/Godot_v4.7.2-stable_win64_console.exe --path . --rendering-method gl_compatibility --audio-driver Dummy --script tools/check_creation_harness_live.gd -- --isolated-session
```

个人 `user://` 存档与作品库绝不写入；保持 Schema 1～19 和固定 `12 长轨 + 4 短槽 + 6 总线 + 2 自然声`。
历史证据见 [合订验证记录](文档/24_合订接续验证记录.md)，需求对照见 [需求核对](文档/25_合订需求核对.md)，本地参考见 [参考索引](文档/参考索引.md)。
