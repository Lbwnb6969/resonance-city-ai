# 《共鸣之城》AI 快速启动入口

## 1. 核心代码架构速查
- **主场景与入口**：`res://scenes/city_creation.tscn` → `scripts/ui/city_creation_demo.gd`
- **世界状态与存档 (`State`)**：`scripts/world/city_creation_state.gd`（含 `stroke`, `house_stroke`, `road_intent`, `junctions`, `passage`, `frontage`, `terrain`, `terrain_protection`, `courtyards`, `towers`, `growth`, `collection`）
- **市民生活与经营 (`Life`)**：`scripts/world/city_creation_life.gd`（含 `network`, `bakery`, `workshop`, `cafe`, `matinee`, `concert_relay`, `travel`, `district_links`）
- **3D 渲染与美术 (`Renderer`)**：`scripts/visual/city_creation_renderer.gd`（含 `meadow`, `foliage`, `shore`, `water_field`, `contact_field`, `terrain_surface`, `outcrops`, `building_context`, `gables`, `tower`, `house_styles`, `terrace_canopy`, `bakery_smoke`, `craft`, `cafe`, `courtyards`, `path_edge`, `path_pebbles`, `resonance`, `mesh_batcher`, `budget_rebuild` 及 `scripts/visual/shaders/*.gdshader`）
- **音乐与四温区视野声场 (`Music`)**：`scripts/audio/city_creation_music.gd`（含 `theme_pcm`, `reply_pcm`, `arrangement`, `district_reply`, `spatial`, `acoustic_field`）
- **Godot 引擎路径**：`D:/GODOT/Godot_v4.7.2-stable_win64_console.exe`

## 2. 十二阶段续作入口

按 [主蓝图](文档/code_artifact.md) 第十章与 [PROJECT](PROJECT.md) 看板顺序施工。旧十阶段只作历史编号：旧 1→新1，旧2→新2+3，旧3→新4，旧4→新5，旧5→新6，旧6→新7，旧7→新8，旧8→新9，旧9→新10，旧10→新11+12。不要重做四时代与六地标主体。

Phase 1～4 已按新版补差并复核。当前从 Phase 5 的逐时代点房音色差距继续；Phase 6～10 先核对新版里程碑、品质与地标增益参数，之后补 Phase 11 环形轮唱，最后完成 Phase 12 旗舰大城及性能收口。具体差距与验证在 PROJECT 和本地 `验证记录/十二阶段对齐_2026-10-18/`。

## 3. 当前关键入口

- 海拔/坡路：`city_creation_terrain_protection.gd`、`city_creation_road_heights.gd`、`city_creation_highland.gd`、`city_creation_frontage.gd`、`city_creation_road_earthworks.gd`。新宽街 2.10m，旧 2.0m 作品保原宽；重刷才扩宽。
- 时代/品质/地标：`city_creation_eras.gd`、`city_creation_quality.gd`、`city_creation_signatures.gd`。作品兼容 Schema 1～16；真实履约记录驱动解锁。
- 大城：`city_creation_citizen_motion.gd`、`city_creation_detail_lod.gd`、`city_creation_tiled_field.gd`、`city_creation_budget_rebuild.gd`。已有300屋测试夹具，尚未成为可选旗舰示范存档。
- 验证：Godot Compatibility，1440×900；选相关脚本一次CPU/一次实窗，GPU回读检查须运行OpenGL，不能用headless结果替代。不要跑九入口冷启动或整库哈希。
- 音乐：12长轨+4短槽/6声像总线，另2自然声节点；`city_creation_bank_cache.gd`读取预编译PCM。修改合成源后运行 `tools/bake_creation_music_bank.gd`，旧银行自动移入废弃。
- 入口：根三个启动器；Ctrl+O切换17座示范。测试设置 `persistence=false` 与隔离作品库，个人 `user://city_creation_v1.json` 和作品库不改。

第九章的一次性归档此前已完成；旧入口原文和本次上传蓝图保存在 `废弃/文档_旧体系归档_2026-10-17/十二阶段入口替换前_2026-10-18/`。只维护当前状态，不积累逐轮流水账。旧阶段日志按旧编号原位保留。

GitHub：`ai-sync/main` 对应 `Lbwnb6969/resonance-city-ai`，交付前用 `tools/sync_github_main.py prepare` / `push` 同步完整Git文件树；不用旧精简导出脚本代替。
