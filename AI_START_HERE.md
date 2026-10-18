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

Phase 1～10 已完成（Phase 8沿用已验收的水生态）。总站对齐30m与真实派车；植物宫对齐8桌/120株，三连拱花房、独立暖绿夜光及8m双倍野花通过25项实窗，p95 5.597ms。当前 Phase 11：围院/环岛按稳定极角每拍轮唱，n屋n拍跨乐句连续；之后完成 Phase 12旗舰大城和分档简化生活模拟。具体差距与验证在 PROJECT。

## 3. 当前关键入口

- 海拔/坡路：`city_creation_terrain_protection.gd`、`city_creation_road_heights.gd`、`city_creation_highland.gd`、`city_creation_frontage.gd`、`city_creation_road_earthworks.gd`。新宽街 2.10m，旧 2.0m 作品保原宽；重刷才扩宽。
- 拉路：`city_creation_road_gesture.gd` 固定旧曲段并维护活动末端，UI按像素跟手；`RoadIntent` 的soft模式渐进吸附，松手用none模式校验已显示点，避免二次吸附。`city_creation_road_draft_field.gd` 仅给草/预览材质提供临时4cm场，取消/正式发布时清除；旧存档和默认State道路API保持。
- 植物宫：`city_creation_clockwork_landmarks.gd` 三连拱与真实房格拾取，`city_creation_conservatory.gd` 独立夜光材质；Meadow在8m范围为现有花簇添一簇，缓存未增益原件。预算发布同步旧/新花环和材质所有者，搬移/回收/撤销不留残花。
- 时代/品质/地标：`city_creation_eras.gd`、`city_creation_quality.gd`、`city_creation_signatures.gd`。作品兼容 Schema 1～17；新品质履历保存prestige，旧四字段等级和单层磨坊继续有效。Lv.2步速与钟塔增益相乘；Lv.5余韵按房屋翻倍。
- 大城：`city_creation_citizen_motion.gd`、`city_creation_detail_lod.gd`、`city_creation_tiled_field.gd`、`city_creation_budget_rebuild.gd`。已有300屋测试夹具，尚未成为可选旗舰示范存档。轻经营采用分档模拟：视野内完整表演，近邻错峰低频推进，远端普通服务按时/按街坊汇总结算；音乐事件保持共享拍点。远端动作可近似，以回镜连续、一次结算、编辑和存档一致验收；详见蓝图第八章第5项，当前代码尚需实现这些进一步简化。
- 验证：Godot Compatibility，1440×900；选相关脚本一次CPU/一次实窗，GPU回读检查须运行OpenGL，不能用headless结果替代。不要跑九入口冷启动或整库哈希。
- 画面缺陷：两个同宽道路终端按普通转弯衔接，三角闭环角部不再额外扩口；T/X路口保留。巨大彩色面仍开放；用户记得起点为几屋小河湾，优先从小样例复现。F10保存截图/城镇/相机/生活现场到 `user://render_diagnostics/`，不覆盖个人存档。
- 音乐：12长轨+4短槽/6声像总线，另2自然声节点；PitchPluck按真实house_era选时代乐器，.42秒短音/.6秒共享拍钟窗光，田园仍有五主题；跨时代Reply按实际源风貌选木拨弦/羽管键琴/钢琴/毡音钢琴，田园内部对答保留五主题。银行为12长+307短样本，`city_creation_bank_cache.gd`读取预编译PCM。修改合成源后运行 `tools/bake_creation_music_bank.gd`，旧银行自动移入废弃。
- 入口：根三个启动器；Ctrl+O切换17座示范。测试设置 `persistence=false` 与隔离作品库，个人 `user://city_creation_v1.json` 和作品库不改。

第九章的一次性归档此前已完成；现行文档仅5份，旧专题/2.5D流水线/原生扩展/一次性冻结对照另存本地 `废弃/主仓库旧体系归档_2026-10-18/`。旧入口原文和本次上传蓝图保存在 `废弃/文档_旧体系归档_2026-10-17/十二阶段入口替换前_2026-10-18/`。只维护当前状态，不积累逐轮流水账。旧阶段日志按旧编号原位保留。

GitHub：`ai-sync/main` 对应 `Lbwnb6969/resonance-city-ai`，交付前用 `tools/sync_github_main.py prepare` / `push` 同步已跟踪文件树并确保main当前文件总量<100MB；保留精选文档/代码/算法和运行资源。完整参考原件保持本地原路径，取消跟踪的大型导出和素材不搬移、不删除；不另建导出仓库。
