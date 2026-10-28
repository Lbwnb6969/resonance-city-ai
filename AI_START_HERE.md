# 《共鸣之城》整合施工入口

用户2026-10-28要求按整合文档继续工程。先读 [PROJECT](PROJECT.md)、[日志末30行](ai_progress.log)、[唯一任务进度](ai_feature_backlog.json)，再读 [AGENTS](AGENTS.md)。

## 当前任务

当前基线为完整库 `f72d2ae5007c83c527f0c7111bf089e3d92f439d`，历史M74已完成生活音效。本轮原提案M74～M85顺延为 **M75～M86**，保留全部旧定义与完成状态。M75～M79已完成技术验收；当前首项为M80参考分析到原创谱材的严格接口。正式新城空地/free，经典旧城legacy，可从F1显式备份转换。Schema20扩展与原1～19兼容，历史权益不伪造。

## 阅读与实现

1. [39 设计总纲](文档/39_项目适配设计总纲.md)、[40 施工验收](文档/40_分阶段施工与验收.md)、[41 审计取舍](文档/41_代码审计与两版取舍.md)是本轮目标。附件原文完整保留在文档/来源，不维护第二份进度。
2. [42 基线](文档/42_整合基线与施工记录.md)、[43 自由创作/迁移](文档/43_自由创作政策与版本化存档.md)记录命令、证据与接口。正常新城调用initialize_free；既有initialize/initialize_empty是legacy配方API。
3. 旧设计26～35和来源包仍保留，但普通建造权限、减负、音乐谱材/切换与独立地标按本轮新规格实施。[文档37](文档/37_双库同步与云端施工.md)是当前双库流程，不能当作旧设计37删除。
4. 入口 `scenes/city_creation.tscn` → `scripts/ui/city_creation_demo.gd`；状态/序列化在 `scripts/world/`，音频在 `scripts/audio/`，表现位于 `scripts/visual/`。新逻辑用职责明确的小模块，四主文件保留行数上限与短委托。

## 每步验收

- Harness能显示新任务的下一项，坏状态、缺证据、编号重复及跳过前置会失败；旧任务契约保持。
- 相关CPU/旧档、真实OpenGL输入/原图/PCM按任务执行；录音长度读取实际WAV，记录transport与音库签名。
- 没有实际听音能力时只报告技术结果，听感待验；需要品质判断时可按用户授权安排独立子代理。
- 个人作品和源文档原件只读，fixture使用隔离存档。Schema20已经接入；地标预留字段暂只接受空/1/0，实体由M81实施。
- 不增加音频资源预算，不伪造成就或生活事件，不以全绿测试替代实际体验。

```text
python3 tools/check_ai_harness.py
python3 tools/check_doc_links.py
python3 -B tests/test_ai_harness.py
/workspace/.cloud-resonance/bin/godot --headless --editor --path . --import
/workspace/.cloud-resonance/bin/godot --headless --path . --audio-driver Dummy --script tests/test_city_creation_legacy_roundtrip.gd -- --isolated-session
/workspace/.cloud-resonance/bin/with-display godot --path . --rendering-method gl_compatibility --audio-driver Dummy --script tools/check_creation_integration_baseline_live.gd -- --isolated-session
```

[旧入口归档](文档/来源/20261028_整合前_AI_START_HERE.txt)，[参考索引](文档/参考索引.md)，[双库同步](文档/37_双库同步与云端施工.md)。只将真实完成且验收充分的任务置为passes=true。

用户要求连续逐轮推进，每项验收、提交、双库同步后直接进入下一项；只有真实阻塞才停下说明。

M77本地验收与输入接口见 [道路紧凑控件](文档/44_道路紧凑控件与输入验证.md)。

M78谱材、同播放器换流、实际录音与听感边界见 [单主题样板](文档/45_单主题谱材与连续换流.md)。

M79三核心风格、实际双周期录音与存档偏好见 [城市乐章](文档/46_三核心风格与六段城市乐章.md)。
