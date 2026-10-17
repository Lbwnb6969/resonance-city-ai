# 《共鸣之城》AI 快速启动入口

## 1. 核心代码架构速查
- **主场景与入口**：`res://scenes/city_creation.tscn` → `scripts/ui/city_creation_demo.gd`
- **世界状态与存档 (`State`)**：`scripts/world/city_creation_state.gd`（含 `stroke`, `house_stroke`, `road_intent`, `junctions`, `passage`, `frontage`, `terrain`, `terrain_protection`, `courtyards`, `towers`, `growth`, `collection`）
- **市民生活与经营 (`Life`)**：`scripts/world/city_creation_life.gd`（含 `network`, `bakery`, `workshop`, `cafe`, `matinee`, `concert_relay`, `travel`, `district_links`）
- **3D 渲染与美术 (`Renderer`)**：`scripts/visual/city_creation_renderer.gd`（含 `meadow`, `foliage`, `shore`, `water_field`, `contact_field`, `terrain_surface`, `outcrops`, `building_context`, `gables`, `tower`, `house_styles`, `terrace_canopy`, `bakery_smoke`, `craft`, `cafe`, `courtyards`, `path_edge`, `path_pebbles`, `resonance`, `mesh_batcher`, `budget_rebuild` 及 `scripts/visual/shaders/*.gdshader`）
- **音乐与视野声场 (`Music`)**：`scripts/audio/city_creation_music.gd`（含 `theme_pcm`, `reply_pcm`, `arrangement`, `district_reply`, `spatial`）

## 2. 当前施工总纲与推进顺序
请直接打开 **[文档/code_artifact.md](文档/code_artifact.md)**，对照 **第九章：十阶段长期施工路线图 (Phase 1 ～ Phase 10)** 逐阶段持续推进：
1. **Phase 1**：草毯加密（7叶碗状绒簇 + 0.52m 密植）、暖阳 Filmic 光影、日/夕/夜三档氛围与草尖 SSS 透射重构。
2. **Phase 2**：立体高地城建与 CS2 挖填方衔接（解除房路 0 米压平锁死，实现台地/山坡建房 + 自适应毛石高地基 + 顺坡道路与陡坡自动石阶 + 横坡挡土石墙）。
3. **Phase 3**：CS2 式道路就地升级（双刷升级 1.75m 石板灯街 / 2.1m 林荫大道 / 叮当有轨电车街）与路口一键圆形环岛广场 (`Roundabouts & Plazas`)。
4. **Phase 4**：四温区视野声场架构 (`Acoustic Grouping`：视野核心发声 + 内联区域问答 + 远端特殊事件低通微音 + 视野外静默保谐) 与建房/点房音阶拨弦即时反馈。
5. **Phase 5 ～ Phase 10**：四大时代演进解锁 × 多风貌街区同城并存（古典田园、文艺复兴连拱穹顶、蒸汽钟表花房与有轨电车、现代生态空中花园）、建筑 1–5 级自动进化、6 座免费地标名胜 (`Signature Buildings`) 与 `80m×80m` 大城画布扩容。

## 3. 运行与当前阶段
Godot：`D:/GODOT/Godot_v4.7.2-stable_win64_console.exe`，Compatibility，1440×900。根目录三个启动器分别打开隔离新城、个人继续档、隔离创作样例；Ctrl+O 的示范河湾支持游戏内切换。

第八章已完成；Phase 1～9已完成，当前为 **Phase 10**。阶段状态与验证结论只记 [PROJECT](PROJECT.md)。房屋海拔、坡路石阶、三时段、拨弦/手动连线、汀步/睡莲和80m画布已有实现，各阶段仍须按新规格验收。

存档：Schema 1～16，独立模块 `city_creation_serializer.gd` / `city_creation_save_validation.gd`；`user://city_creation_v1.json` 与 `user://city_creation_works/` 是个人数据，测试使用隔离路径。

旧蓝图、四指南、三套用户材料与旧入口原文完整保存在本地 `废弃/文档_旧体系归档_2026-10-17_四库路线/`；旧2.5D文档和验证已在此前归档。开发入口只读现行五份文档；具体架构见 [3D速查](文档/21_新城创作切片.md)，来源见 [四库索引](文档/参考索引.md)。

Phase1～9已完成，Eras.AVAILABLE_COUNT=4。下一步按第七章/Phase10验证150～300屋、200+居民、分级LOD、脏子区域上传与分帧编辑。当前50屋近景数据不能替代大城验收；12轨PCM冷合成28.709秒、编辑准备/发布与盛典尾帧仍待性能收口。

时代入口：`city_creation_eras.gd`；Schema16的`era_answers`记录实际问答播放双方时代，50屋与三时代已听问答解锁modern_eco；旧问答不能靠重涂追认。建筑入口为`city_creation_renaissance.gd`、`city_creation_clockwork.gd`、`city_creation_modern.gd`及`city_creation_skybridge_plan.gd`。音乐固定12长+4短/6总线，自然声2固定节点。

交通入口：`city_creation_tram_plan.gd`/`city_creation_tram.gd`与`city_creation_tram_tracks.gd`；真实居民乘车后继续原采购/茶座/演出路线，实际到达才结算。`city_creation_bridge_plan.gd`按河宽/时代派生汀步、古典双拱、工业桁架或现代单拱，共用State.street_height。

街道入口：`city_creation_era_road_field.gd`准备带重叠边框的8m纹理数组块，`creation_era_road.gdshaderinc`供三类路面统一采样2m时代渐变；`city_creation_era_streets.gd`派生边界迎宾灯/拱门、现代音符灯与水景带。预算重建只在发布时上传变化层，旧作品不增字段。

盛典入口：`city_creation_amphitheater_plan.gd`（干地入口/实际湿舞台/植被派生遮罩）、`city_creation_amphitheater.gd`（帆顶/钢琴/沿岸看台）、`city_creation_grand_festival.gd`（真实四时代编制/8小节/存档校验）、`city_creation_grand_festival_visual.gd`（实际街图距离驱动轨道金波）。Life.invite_grand_festival等居民到齐，24秒接力并终章合奏；中途改源时代取消且不结算，中途恢复延续真实进度。

阶段命令、截图与剩余性能工作见本地`验证记录/四库路线_2026-10-17/README.md`；PROJECT只记录当前状态。

Phase10入口：`city_creation_citizen_motion.gd`为运行时标量路段，Life.citizen_position读取真实逻辑位置，flush_citizen在实际到达/进入视野/编辑/存档时发布节点姿态；不保存LOD状态。每帧16人判视锥、16屋扫描品质；tools/fixtures/city_creation_large_town_fixture.gd与tools/check_creation_large_town_live.gd提供300屋实景。当前Life实窗1.035ms仍未达标，最新路高优化须继续实窗复核。
